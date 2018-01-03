/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "metalang.h"


 int hasGotErrorMeta = 0 ; 
#line 657 "metalang.met"
PPTREE metalang::asit ( int error_free)
#line 657 "metalang.met"
{
#line 657 "metalang.met"
    int  _oldkeepSpace = keepSpace;
#line 657 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 657 "metalang.met"
    int _value,_nbPre = 0 ;
#line 657 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 657 "metalang.met"
    int _Debug = TRACE_RULE("asit",TRACE_ENTER,(PPTREE)0);
#line 657 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 657 "metalang.met"
#line 657 "metalang.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 657 "metalang.met"
#line 657 "metalang.met"
    PPTREE listAsit = (PPTREE) 0;
#line 657 "metalang.met"
#line 659 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 659 "metalang.met"
    if (  !SEE_TOKEN( AOUVAOUV,"{{") || !(CommTerm(),1)) {
#line 659 "metalang.met"
        MulFreeTree(2,_addlist1,listAsit);
        TOKEN_EXIT(asit_exit,"{{")
#line 659 "metalang.met"
    } else {
#line 659 "metalang.met"
        tokenAhead = 0 ;
#line 659 "metalang.met"
    }
#line 659 "metalang.met"
#line 660 "metalang.met"
    {
#line 660 "metalang.met"
        keepSpace = 1 ;
#line 660 "metalang.met"
#line 661 "metalang.met"
#line 661 "metalang.met"
        _addlist1 = listAsit ;
#line 661 "metalang.met"
#line 661 "metalang.met"
        while ((tokenAhead == 2|| (LexAsitContent(),TRACE_LEX(1)))&&SEE_TOKEN( ASIT_CONTENT,"ASIT_CONTENT")) { 
#line 661 "metalang.met"
#line 662 "metalang.met"
#line 662 "metalang.met"
            {
#line 662 "metalang.met"
                PPTREE _ptTree0=0;
#line 662 "metalang.met"
                (tokenAhead == 2|| (LexAsitContent(),TRACE_LEX(1)));
#line 662 "metalang.met"
                if ( ! TERM_OR_META(ASIT_CONTENT,"ASIT_CONTENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 662 "metalang.met"
                    MulFreeTree(3,_ptTree0,_addlist1,listAsit);
                    TOKEN_EXIT(asit_exit,"ASIT_CONTENT")
#line 662 "metalang.met"
                } else {
#line 662 "metalang.met"
                    tokenAhead = 0 ;
#line 662 "metalang.met"
                }
#line 662 "metalang.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 662 "metalang.met"
            }
#line 662 "metalang.met"
#line 662 "metalang.met"
            if (listAsit){
#line 662 "metalang.met"
#line 662 "metalang.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 662 "metalang.met"
            } else {
#line 662 "metalang.met"
#line 662 "metalang.met"
                listAsit = _addlist1 ;
#line 662 "metalang.met"
            }
#line 662 "metalang.met"
        } 
#line 662 "metalang.met"
        keepSpace =  _oldkeepSpace;
#line 662 "metalang.met"
    }
#line 662 "metalang.met"
#line 663 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 663 "metalang.met"
    if (  !SEE_TOKEN( AFERAFER,"}}") || !(CommTerm(),1)) {
#line 663 "metalang.met"
        MulFreeTree(2,_addlist1,listAsit);
        TOKEN_EXIT(asit_exit,"}}")
#line 663 "metalang.met"
    } else {
#line 663 "metalang.met"
        tokenAhead = 0 ;
#line 663 "metalang.met"
    }
#line 663 "metalang.met"
#line 664 "metalang.met"
    {
#line 664 "metalang.met"
        PPTREE _ptTree0=0;
#line 664 "metalang.met"
        {
#line 664 "metalang.met"
            PPTREE _ptRes1=0;
#line 664 "metalang.met"
            _ptRes1= MakeTree(ASIT, 1);
#line 664 "metalang.met"
            ReplaceTree(_ptRes1, 1, listAsit );
#line 664 "metalang.met"
            _ptTree0=_ptRes1;
#line 664 "metalang.met"
        }
#line 664 "metalang.met"
        _retValue =_ptTree0;
#line 664 "metalang.met"
        goto asit_ret;
#line 664 "metalang.met"
    }
#line 664 "metalang.met"
#line 664 "metalang.met"
#line 664 "metalang.met"

#line 665 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 665 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 665 "metalang.met"
keepSpace =  _oldkeepSpace;
#line 665 "metalang.met"
return((PPTREE) 0);
#line 665 "metalang.met"

#line 665 "metalang.met"
asit_exit :
#line 665 "metalang.met"

#line 665 "metalang.met"
    _Debug = TRACE_RULE("asit",TRACE_EXIT,(PPTREE)0);
#line 665 "metalang.met"
    _funcLevel--;
#line 665 "metalang.met"
    keepSpace =  _oldkeepSpace;
#line 665 "metalang.met"
    return((PPTREE) -1) ;
#line 665 "metalang.met"

#line 665 "metalang.met"
asit_ret :
#line 665 "metalang.met"
    
#line 665 "metalang.met"
    _Debug = TRACE_RULE("asit",TRACE_RETURN,_retValue);
#line 665 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 665 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 665 "metalang.met"
    keepSpace =  _oldkeepSpace;
#line 665 "metalang.met"
    return _retValue ;
#line 665 "metalang.met"
}
#line 665 "metalang.met"

#line 665 "metalang.met"
#line 643 "metalang.met"
PPTREE metalang::condition ( int error_free)
#line 643 "metalang.met"
{
#line 643 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 643 "metalang.met"
    int _value,_nbPre = 0 ;
#line 643 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 643 "metalang.met"
    int _Debug = TRACE_RULE("condition",TRACE_ENTER,(PPTREE)0);
#line 643 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 643 "metalang.met"
#line 643 "metalang.met"
    PPTREE cond = (PPTREE) 0;
#line 643 "metalang.met"
#line 645 "metalang.met"
    if ( (cond=NQUICK_CALL(_Tak(one_condition)(error_free), 16, metalang))== (PPTREE) -1 ) {
#line 645 "metalang.met"
        MulFreeTree(1,cond);
        PROG_EXIT(condition_exit,"condition")
#line 645 "metalang.met"
    }
#line 645 "metalang.met"
#line 646 "metalang.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( OR,"or")) || 
#line 646 "metalang.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AND,"and"))) { 
#line 646 "metalang.met"
#line 647 "metalang.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(OR,"or") && (tokenAhead = 0,CommTerm(),1)){
#line 647 "metalang.met"
#line 648 "metalang.met"
            {
#line 648 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 648 "metalang.met"
                _ptRes0= MakeTree(OR, 2);
#line 648 "metalang.met"
                ReplaceTree(_ptRes0, 1, cond );
#line 648 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(one_condition)(error_free), 16, metalang))== (PPTREE) -1 ) {
#line 648 "metalang.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,cond);
                    PROG_EXIT(condition_exit,"condition")
#line 648 "metalang.met"
                }
#line 648 "metalang.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 648 "metalang.met"
                cond=_ptRes0;
#line 648 "metalang.met"
            }
#line 648 "metalang.met"
        } else {
#line 648 "metalang.met"
#line 650 "metalang.met"
#line 651 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 651 "metalang.met"
            if (  !SEE_TOKEN( AND,"and") || !(CommTerm(),1)) {
#line 651 "metalang.met"
                MulFreeTree(1,cond);
                TOKEN_EXIT(condition_exit,"and")
#line 651 "metalang.met"
            } else {
#line 651 "metalang.met"
                tokenAhead = 0 ;
#line 651 "metalang.met"
            }
#line 651 "metalang.met"
#line 652 "metalang.met"
            {
#line 652 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 652 "metalang.met"
                _ptRes0= MakeTree(AND, 2);
#line 652 "metalang.met"
                ReplaceTree(_ptRes0, 1, cond );
#line 652 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(one_condition)(error_free), 16, metalang))== (PPTREE) -1 ) {
#line 652 "metalang.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,cond);
                    PROG_EXIT(condition_exit,"condition")
#line 652 "metalang.met"
                }
#line 652 "metalang.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 652 "metalang.met"
                cond=_ptRes0;
#line 652 "metalang.met"
            }
#line 652 "metalang.met"
#line 652 "metalang.met"
        }
#line 652 "metalang.met"
    } 
#line 652 "metalang.met"
#line 654 "metalang.met"
    {
#line 654 "metalang.met"
        _retValue = cond ;
#line 654 "metalang.met"
        goto condition_ret;
#line 654 "metalang.met"
        
#line 654 "metalang.met"
    }
#line 654 "metalang.met"
#line 654 "metalang.met"
#line 654 "metalang.met"

#line 655 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 655 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 655 "metalang.met"
return((PPTREE) 0);
#line 655 "metalang.met"

#line 655 "metalang.met"
condition_exit :
#line 655 "metalang.met"

#line 655 "metalang.met"
    _Debug = TRACE_RULE("condition",TRACE_EXIT,(PPTREE)0);
#line 655 "metalang.met"
    _funcLevel--;
#line 655 "metalang.met"
    return((PPTREE) -1) ;
#line 655 "metalang.met"

#line 655 "metalang.met"
condition_ret :
#line 655 "metalang.met"
    
#line 655 "metalang.met"
    _Debug = TRACE_RULE("condition",TRACE_RETURN,_retValue);
#line 655 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 655 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 655 "metalang.met"
    return _retValue ;
#line 655 "metalang.met"
}
#line 655 "metalang.met"

#line 655 "metalang.met"
#line 218 "metalang.met"
PPTREE metalang::debut_proc ( int error_free)
#line 218 "metalang.met"
{
#line 218 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 218 "metalang.met"
    int _value,_nbPre = 0 ;
#line 218 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 218 "metalang.met"
    int _Debug = TRACE_RULE("debut_proc",TRACE_ENTER,(PPTREE)0);
#line 218 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 218 "metalang.met"
#line 219 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 219 "metalang.met"
    switch( lexEl.Value) {
#line 219 "metalang.met"
#line 220 "metalang.met"
        case DEFINE : 
#line 220 "metalang.met"
#line 220 "metalang.met"
            break;
#line 220 "metalang.met"
#line 221 "metalang.met"
        case LEXDEFINE : 
#line 221 "metalang.met"
#line 221 "metalang.met"
            break;
#line 221 "metalang.met"
#line 221 "metalang.met"
        case AOUVAOUV : 
#line 221 "metalang.met"
#line 221 "metalang.met"
            break;
#line 221 "metalang.met"
        default :
#line 221 "metalang.met"
            CASE_EXIT(debut_proc_exit,"either define or lexdefine or {{")
#line 221 "metalang.met"
            break;
#line 221 "metalang.met"
    }
#line 221 "metalang.met"
#line 221 "metalang.met"
#line 223 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 223 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 223 "metalang.met"
return((PPTREE) 0);
#line 223 "metalang.met"

#line 223 "metalang.met"
debut_proc_exit :
#line 223 "metalang.met"

#line 223 "metalang.met"
    _Debug = TRACE_RULE("debut_proc",TRACE_EXIT,(PPTREE)0);
#line 223 "metalang.met"
    _funcLevel--;
#line 223 "metalang.met"
    return((PPTREE) -1) ;
#line 223 "metalang.met"

#line 223 "metalang.met"
debut_proc_ret :
#line 223 "metalang.met"
    
#line 223 "metalang.met"
    _Debug = TRACE_RULE("debut_proc",TRACE_RETURN,_retValue);
#line 223 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 223 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 223 "metalang.met"
    return _retValue ;
#line 223 "metalang.met"
}
#line 223 "metalang.met"

#line 223 "metalang.met"
#line 411 "metalang.met"
PPTREE metalang::declaration ( int error_free)
#line 411 "metalang.met"
{
#line 411 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 411 "metalang.met"
    int _value,_nbPre = 0 ;
#line 411 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 411 "metalang.met"
    int _Debug = TRACE_RULE("declaration",TRACE_ENTER,(PPTREE)0);
#line 411 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 411 "metalang.met"
#line 411 "metalang.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0,_addlist3 = (PPTREE) 0;
#line 411 "metalang.met"
#line 411 "metalang.met"
    PPTREE list = (PPTREE) 0,listdec = (PPTREE) 0,decTree = (PPTREE) 0,pattern = (PPTREE) 0,ident = (PPTREE) 0;
#line 411 "metalang.met"
#line 413 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 413 "metalang.met"
    if (  !SEE_TOKEN( DEFINE,"define") || !(CommTerm(),1)) {
#line 413 "metalang.met"
        MulFreeTree(8,_addlist1,_addlist2,_addlist3,decTree,ident,list,listdec,pattern);
        TOKEN_EXIT(declaration_exit,"define")
#line 413 "metalang.met"
    } else {
#line 413 "metalang.met"
        tokenAhead = 0 ;
#line 413 "metalang.met"
    }
#line 413 "metalang.met"
#line 414 "metalang.met"
    {
#line 414 "metalang.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 414 "metalang.met"
        _ptRes0= MakeTree(DEFINE, 4);
#line 414 "metalang.met"
        {
#line 414 "metalang.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 414 "metalang.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 414 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 414 "metalang.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 414 "metalang.met"
                MulFreeTree(12,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,decTree,ident,list,listdec,pattern);
                TOKEN_EXIT(declaration_exit,"IDENT")
#line 414 "metalang.met"
            } else {
#line 414 "metalang.met"
                tokenAhead = 0 ;
#line 414 "metalang.met"
            }
#line 414 "metalang.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 414 "metalang.met"
            _ptTree0=_ptRes1;
#line 414 "metalang.met"
        }
#line 414 "metalang.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 414 "metalang.met"
        decTree=_ptRes0;
#line 414 "metalang.met"
    }
#line 414 "metalang.met"
#line 415 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 415 "metalang.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 415 "metalang.met"
        MulFreeTree(8,_addlist1,_addlist2,_addlist3,decTree,ident,list,listdec,pattern);
        TOKEN_EXIT(declaration_exit,";")
#line 415 "metalang.met"
    } else {
#line 415 "metalang.met"
        tokenAhead = 0 ;
#line 415 "metalang.met"
    }
#line 415 "metalang.met"
#line 416 "metalang.met"
     ReplaceTree(decTree,3,MakeString(theFileName));
#line 416 "metalang.met"
#line 416 "metalang.met"
    _addlist1 = list ;
#line 416 "metalang.met"
#line 417 "metalang.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AOUVAOUV,"{{")) { 
#line 417 "metalang.met"
#line 418 "metalang.met"
#line 419 "metalang.met"
        {
#line 419 "metalang.met"
            PPTREE _ptTree0=0;
#line 419 "metalang.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(asit)(error_free), 2, metalang))== (PPTREE) -1 ) {
#line 419 "metalang.met"
                MulFreeTree(9,_ptTree0,_addlist1,_addlist2,_addlist3,decTree,ident,list,listdec,pattern);
                PROG_EXIT(declaration_exit,"declaration")
#line 419 "metalang.met"
            }
#line 419 "metalang.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 419 "metalang.met"
        }
#line 419 "metalang.met"
#line 419 "metalang.met"
        if (list){
#line 419 "metalang.met"
#line 419 "metalang.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 419 "metalang.met"
        } else {
#line 419 "metalang.met"
#line 419 "metalang.met"
            list = _addlist1 ;
#line 419 "metalang.met"
        }
#line 419 "metalang.met"
#line 420 "metalang.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 420 "metalang.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 420 "metalang.met"
            MulFreeTree(8,_addlist1,_addlist2,_addlist3,decTree,ident,list,listdec,pattern);
            TOKEN_EXIT(declaration_exit,";")
#line 420 "metalang.met"
        } else {
#line 420 "metalang.met"
            tokenAhead = 0 ;
#line 420 "metalang.met"
        }
#line 420 "metalang.met"
#line 420 "metalang.met"
    } 
#line 420 "metalang.met"
#line 422 "metalang.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DECLARE,"declare") && (tokenAhead = 0,CommTerm(),1)){
#line 422 "metalang.met"
#line 423 "metalang.met"
#line 423 "metalang.met"
        _addlist2 = listdec ;
#line 423 "metalang.met"
#line 424 "metalang.met"
        do {
#line 424 "metalang.met"
#line 425 "metalang.met"
            {
#line 425 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 425 "metalang.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 425 "metalang.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 425 "metalang.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 425 "metalang.met"
                    MulFreeTree(10,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,decTree,ident,list,listdec,pattern);
                    TOKEN_EXIT(declaration_exit,"IDENT")
#line 425 "metalang.met"
                } else {
#line 425 "metalang.met"
                    tokenAhead = 0 ;
#line 425 "metalang.met"
                }
#line 425 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 425 "metalang.met"
                ident=_ptRes0;
#line 425 "metalang.met"
            }
#line 425 "metalang.met"
#line 426 "metalang.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)){
#line 426 "metalang.met"
#line 427 "metalang.met"
#line 428 "metalang.met"
                {
#line 428 "metalang.met"
                    PPTREE _ptTree0=0;
#line 428 "metalang.met"
                    {
#line 428 "metalang.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 428 "metalang.met"
                        _ptRes1= MakeTree(TREE_ARITY, 2);
#line 428 "metalang.met"
                        ReplaceTree(_ptRes1, 1, ident );
#line 428 "metalang.met"
                        {
#line 428 "metalang.met"
                            PPTREE _ptTree2=0,_ptRes2=0;
#line 428 "metalang.met"
                            _ptRes2= MakeTree(NUMB, 1);
#line 428 "metalang.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 428 "metalang.met"
                            if ( ! TERM_OR_META(NUMB,"NUMB") || !(BUILD_TERM_META(_ptTree2))) {
#line 428 "metalang.met"
                                MulFreeTree(13,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,decTree,ident,list,listdec,pattern);
                                TOKEN_EXIT(declaration_exit,"NUMB")
#line 428 "metalang.met"
                            } else {
#line 428 "metalang.met"
                                tokenAhead = 0 ;
#line 428 "metalang.met"
                            }
#line 428 "metalang.met"
                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 428 "metalang.met"
                            _ptTree1=_ptRes2;
#line 428 "metalang.met"
                        }
#line 428 "metalang.met"
                        ReplaceTree(_ptRes1, 2, _ptTree1);
#line 428 "metalang.met"
                        _ptTree0=_ptRes1;
#line 428 "metalang.met"
                    }
#line 428 "metalang.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 428 "metalang.met"
                }
#line 428 "metalang.met"
#line 428 "metalang.met"
                if (listdec){
#line 428 "metalang.met"
#line 428 "metalang.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 428 "metalang.met"
                } else {
#line 428 "metalang.met"
#line 428 "metalang.met"
                    listdec = _addlist2 ;
#line 428 "metalang.met"
                }
#line 428 "metalang.met"
#line 430 "metalang.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 430 "metalang.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 430 "metalang.met"
                    MulFreeTree(8,_addlist1,_addlist2,_addlist3,decTree,ident,list,listdec,pattern);
                    TOKEN_EXIT(declaration_exit,"]")
#line 430 "metalang.met"
                } else {
#line 430 "metalang.met"
                    tokenAhead = 0 ;
#line 430 "metalang.met"
                }
#line 430 "metalang.met"
#line 430 "metalang.met"
#line 430 "metalang.met"
            } else {
#line 430 "metalang.met"
#line 433 "metalang.met"
#line 433 "metalang.met"
                _addlist2 =AddList(_addlist2 ,ident );
#line 433 "metalang.met"
#line 433 "metalang.met"
                if (listdec){
#line 433 "metalang.met"
#line 433 "metalang.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 433 "metalang.met"
                } else {
#line 433 "metalang.met"
#line 433 "metalang.met"
                    listdec = _addlist2 ;
#line 433 "metalang.met"
                }
#line 433 "metalang.met"
            }
#line 433 "metalang.met"
#line 433 "metalang.met"
#line 434 "metalang.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 434 "metalang.met"
#line 435 "metalang.met"
        {
#line 435 "metalang.met"
            PPTREE _ptTree0=0;
#line 435 "metalang.met"
            {
#line 435 "metalang.met"
                PPTREE _ptRes1=0;
#line 435 "metalang.met"
                _ptRes1= MakeTree(DECLARE, 1);
#line 435 "metalang.met"
                ReplaceTree(_ptRes1, 1, listdec );
#line 435 "metalang.met"
                _ptTree0=_ptRes1;
#line 435 "metalang.met"
            }
#line 435 "metalang.met"
            list =AddList(list , _ptTree0);
#line 435 "metalang.met"
        }
#line 435 "metalang.met"
#line 436 "metalang.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 436 "metalang.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 436 "metalang.met"
            MulFreeTree(8,_addlist1,_addlist2,_addlist3,decTree,ident,list,listdec,pattern);
            TOKEN_EXIT(declaration_exit,";")
#line 436 "metalang.met"
        } else {
#line 436 "metalang.met"
            tokenAhead = 0 ;
#line 436 "metalang.met"
        }
#line 436 "metalang.met"
#line 436 "metalang.met"
#line 436 "metalang.met"
    }
#line 436 "metalang.met"
#line 438 "metalang.met"
     debut :
#line 438 "metalang.met"
#line 438 "metalang.met"
    _addlist3 = list ;
#line 438 "metalang.met"
#line 439 "metalang.met"
    do {
#line 439 "metalang.met"
#line 440 "metalang.met"
        if (NPUSH_CALL_AFF_VERIF(pattern = ,_Tak(pattern_rec), 17, metalang)){
#line 440 "metalang.met"
#line 441 "metalang.met"
#line 441 "metalang.met"
            _addlist3 =AddList(_addlist3 ,pattern );
#line 441 "metalang.met"
#line 441 "metalang.met"
            if (list){
#line 441 "metalang.met"
#line 441 "metalang.met"
                _addlist3 = SonTree (_addlist3 ,2 );
#line 441 "metalang.met"
            } else {
#line 441 "metalang.met"
#line 441 "metalang.met"
                list = _addlist3 ;
#line 441 "metalang.met"
            }
#line 441 "metalang.met"
        } else {
#line 441 "metalang.met"
#line 443 "metalang.met"
#line 445 "metalang.met"
            dumperror ();
#line 445 "metalang.met"
#line 447 "metalang.met"
            (tokenAhead == 4|| (LexEndLine(),TRACE_LEX(1)));
#line 447 "metalang.met"
            if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 447 "metalang.met"
                MulFreeTree(8,_addlist1,_addlist2,_addlist3,decTree,ident,list,listdec,pattern);
                TOKEN_EXIT(declaration_exit,"END_LINE")
#line 447 "metalang.met"
            } else {
#line 447 "metalang.met"
                tokenAhead = 0 ;
#line 447 "metalang.met"
            }
#line 447 "metalang.met"
#line 448 "metalang.met"
             hasGotErrorMeta = 1 ;
#line 448 "metalang.met"
#line 449 "metalang.met"
            if (! (c == EOF )){
#line 449 "metalang.met"
#line 450 "metalang.met"
                 goto debut ;
#line 450 "metalang.met"
            }
#line 450 "metalang.met"
#line 450 "metalang.met"
        }
#line 450 "metalang.met"
#line 450 "metalang.met"
#line 452 "metalang.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 452 "metalang.met"
#line 453 "metalang.met"
    ReplaceTree(decTree ,2 ,list );
#line 453 "metalang.met"
#line 456 "metalang.met"
    if (! (NPUSH_CALL_AFF_VERIF(NOTHING,_Tak(end_key), 7, metalang))){
#line 456 "metalang.met"
#line 458 "metalang.met"
#line 459 "metalang.met"
        dumperror ();
#line 459 "metalang.met"
#line 460 "metalang.met"
        (tokenAhead == 4|| (LexEndLine(),TRACE_LEX(1)));
#line 460 "metalang.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 460 "metalang.met"
            MulFreeTree(8,_addlist1,_addlist2,_addlist3,decTree,ident,list,listdec,pattern);
            TOKEN_EXIT(declaration_exit,"END_LINE")
#line 460 "metalang.met"
        } else {
#line 460 "metalang.met"
            tokenAhead = 0 ;
#line 460 "metalang.met"
        }
#line 460 "metalang.met"
#line 461 "metalang.met"
         hasGotErrorMeta = 1;
#line 461 "metalang.met"
#line 462 "metalang.met"
        if (! (c == EOF )){
#line 462 "metalang.met"
#line 463 "metalang.met"
             goto debut ;
#line 463 "metalang.met"
        }
#line 463 "metalang.met"
#line 463 "metalang.met"
#line 463 "metalang.met"
    }
#line 463 "metalang.met"
#line 465 "metalang.met"
    {
#line 465 "metalang.met"
        _retValue = decTree ;
#line 465 "metalang.met"
        goto declaration_ret;
#line 465 "metalang.met"
        
#line 465 "metalang.met"
    }
#line 465 "metalang.met"
#line 465 "metalang.met"
#line 465 "metalang.met"

#line 466 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 466 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 466 "metalang.met"
return((PPTREE) 0);
#line 466 "metalang.met"

#line 466 "metalang.met"
declaration_exit :
#line 466 "metalang.met"

#line 466 "metalang.met"
    _Debug = TRACE_RULE("declaration",TRACE_EXIT,(PPTREE)0);
#line 466 "metalang.met"
    _funcLevel--;
#line 466 "metalang.met"
    return((PPTREE) -1) ;
#line 466 "metalang.met"

#line 466 "metalang.met"
declaration_ret :
#line 466 "metalang.met"
    
#line 466 "metalang.met"
    _Debug = TRACE_RULE("declaration",TRACE_RETURN,_retValue);
#line 466 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 466 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 466 "metalang.met"
    return _retValue ;
#line 466 "metalang.met"
}
#line 466 "metalang.met"

#line 466 "metalang.met"
#line 305 "metalang.met"
PPTREE metalang::definition ( int error_free)
#line 305 "metalang.met"
{
#line 305 "metalang.met"
    int  _oldcDef = cDef;
#line 305 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 305 "metalang.met"
    int _value,_nbPre = 0 ;
#line 305 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 305 "metalang.met"
    int _Debug = TRACE_RULE("definition",TRACE_ENTER,(PPTREE)0);
#line 305 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 305 "metalang.met"
#line 305 "metalang.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0,_addlist3 = (PPTREE) 0;
#line 305 "metalang.met"
#line 305 "metalang.met"
    PPTREE list = (PPTREE) 0,listcons = (PPTREE) 0,listskip = (PPTREE) 0,defTree = (PPTREE) 0,pattern = (PPTREE) 0;
#line 305 "metalang.met"
#line 307 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 307 "metalang.met"
    if (  !SEE_TOKEN( LEXDEFINE,"lexdefine") || !(CommTerm(),1)) {
#line 307 "metalang.met"
        MulFreeTree(8,_addlist1,_addlist2,_addlist3,defTree,list,listcons,listskip,pattern);
        TOKEN_EXIT(definition_exit,"lexdefine")
#line 307 "metalang.met"
    } else {
#line 307 "metalang.met"
        tokenAhead = 0 ;
#line 307 "metalang.met"
    }
#line 307 "metalang.met"
#line 308 "metalang.met"
    {
#line 308 "metalang.met"
        cDef = 1 ;
#line 308 "metalang.met"
#line 309 "metalang.met"
#line 310 "metalang.met"
        {
#line 310 "metalang.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 310 "metalang.met"
            _ptRes0= MakeTree(LEXDEFINE, 4);
#line 310 "metalang.met"
            {
#line 310 "metalang.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 310 "metalang.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 310 "metalang.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 310 "metalang.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 310 "metalang.met"
                    MulFreeTree(12,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,defTree,list,listcons,listskip,pattern);
                    TOKEN_EXIT(definition_exit,"IDENT")
#line 310 "metalang.met"
                } else {
#line 310 "metalang.met"
                    tokenAhead = 0 ;
#line 310 "metalang.met"
                }
#line 310 "metalang.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 310 "metalang.met"
                _ptTree0=_ptRes1;
#line 310 "metalang.met"
            }
#line 310 "metalang.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 310 "metalang.met"
            defTree=_ptRes0;
#line 310 "metalang.met"
        }
#line 310 "metalang.met"
#line 311 "metalang.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 311 "metalang.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 311 "metalang.met"
            MulFreeTree(8,_addlist1,_addlist2,_addlist3,defTree,list,listcons,listskip,pattern);
            TOKEN_EXIT(definition_exit,";")
#line 311 "metalang.met"
        } else {
#line 311 "metalang.met"
            tokenAhead = 0 ;
#line 311 "metalang.met"
        }
#line 311 "metalang.met"
#line 312 "metalang.met"
         ReplaceTree(defTree,3,MakeString(theFileName));
#line 312 "metalang.met"
#line 313 "metalang.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CONSTANT,"constant") && (tokenAhead = 0,CommTerm(),1)){
#line 313 "metalang.met"
#line 314 "metalang.met"
#line 314 "metalang.met"
            _addlist1 = listcons ;
#line 314 "metalang.met"
#line 315 "metalang.met"
            do {
#line 315 "metalang.met"
#line 316 "metalang.met"
                {
#line 316 "metalang.met"
                    PPTREE _ptTree0=0;
#line 316 "metalang.met"
                    {
#line 316 "metalang.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 316 "metalang.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 316 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 316 "metalang.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 316 "metalang.met"
                            MulFreeTree(11,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,defTree,list,listcons,listskip,pattern);
                            TOKEN_EXIT(definition_exit,"IDENT")
#line 316 "metalang.met"
                        } else {
#line 316 "metalang.met"
                            tokenAhead = 0 ;
#line 316 "metalang.met"
                        }
#line 316 "metalang.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 316 "metalang.met"
                        _ptTree0=_ptRes1;
#line 316 "metalang.met"
                    }
#line 316 "metalang.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 316 "metalang.met"
                }
#line 316 "metalang.met"
#line 316 "metalang.met"
                if (listcons){
#line 316 "metalang.met"
#line 316 "metalang.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 316 "metalang.met"
                } else {
#line 316 "metalang.met"
#line 316 "metalang.met"
                    listcons = _addlist1 ;
#line 316 "metalang.met"
                }
#line 316 "metalang.met"
#line 316 "metalang.met"
#line 317 "metalang.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 317 "metalang.met"
#line 318 "metalang.met"
            {
#line 318 "metalang.met"
                PPTREE _ptTree0=0;
#line 318 "metalang.met"
                {
#line 318 "metalang.met"
                    PPTREE _ptRes1=0;
#line 318 "metalang.met"
                    _ptRes1= MakeTree(CONSTANT, 1);
#line 318 "metalang.met"
                    ReplaceTree(_ptRes1, 1, listcons );
#line 318 "metalang.met"
                    _ptTree0=_ptRes1;
#line 318 "metalang.met"
                }
#line 318 "metalang.met"
                list =AddList(list , _ptTree0);
#line 318 "metalang.met"
            }
#line 318 "metalang.met"
#line 319 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 319 "metalang.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 319 "metalang.met"
                MulFreeTree(8,_addlist1,_addlist2,_addlist3,defTree,list,listcons,listskip,pattern);
                TOKEN_EXIT(definition_exit,";")
#line 319 "metalang.met"
            } else {
#line 319 "metalang.met"
                tokenAhead = 0 ;
#line 319 "metalang.met"
            }
#line 319 "metalang.met"
#line 319 "metalang.met"
#line 319 "metalang.met"
        }
#line 319 "metalang.met"
#line 321 "metalang.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(SKIP,"skip") && (tokenAhead = 0,CommTerm(),1)){
#line 321 "metalang.met"
#line 322 "metalang.met"
#line 322 "metalang.met"
            _addlist2 = listskip ;
#line 322 "metalang.met"
#line 323 "metalang.met"
            do {
#line 323 "metalang.met"
#line 324 "metalang.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"[")){
#line 324 "metalang.met"
#line 325 "metalang.met"
#line 325 "metalang.met"
                    {
#line 325 "metalang.met"
                        PPTREE _ptTree0=0;
#line 325 "metalang.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(set)(error_free), 21, metalang))== (PPTREE) -1 ) {
#line 325 "metalang.met"
                            MulFreeTree(9,_ptTree0,_addlist1,_addlist2,_addlist3,defTree,list,listcons,listskip,pattern);
                            PROG_EXIT(definition_exit,"definition")
#line 325 "metalang.met"
                        }
#line 325 "metalang.met"
                        _addlist2 =AddList(_addlist2 , _ptTree0);
#line 325 "metalang.met"
                    }
#line 325 "metalang.met"
#line 325 "metalang.met"
                    if (listskip){
#line 325 "metalang.met"
#line 325 "metalang.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 325 "metalang.met"
                    } else {
#line 325 "metalang.met"
#line 325 "metalang.met"
                        listskip = _addlist2 ;
#line 325 "metalang.met"
                    }
#line 325 "metalang.met"
                } else {
#line 325 "metalang.met"
#line 327 "metalang.met"
#line 327 "metalang.met"
                    {
#line 327 "metalang.met"
                        PPTREE _ptTree0=0;
#line 327 "metalang.met"
                        {
#line 327 "metalang.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 327 "metalang.met"
                            _ptRes1= MakeTree(CHARACTER, 1);
#line 327 "metalang.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 327 "metalang.met"
                            if ( ! TERM_OR_META(CHARACTER,"CHARACTER") || !(BUILD_TERM_META(_ptTree1))) {
#line 327 "metalang.met"
                                MulFreeTree(11,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,defTree,list,listcons,listskip,pattern);
                                TOKEN_EXIT(definition_exit,"CHARACTER")
#line 327 "metalang.met"
                            } else {
#line 327 "metalang.met"
                                tokenAhead = 0 ;
#line 327 "metalang.met"
                            }
#line 327 "metalang.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 327 "metalang.met"
                            _ptTree0=_ptRes1;
#line 327 "metalang.met"
                        }
#line 327 "metalang.met"
                        _addlist2 =AddList(_addlist2 , _ptTree0);
#line 327 "metalang.met"
                    }
#line 327 "metalang.met"
#line 327 "metalang.met"
                    if (listskip){
#line 327 "metalang.met"
#line 327 "metalang.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 327 "metalang.met"
                    } else {
#line 327 "metalang.met"
#line 327 "metalang.met"
                        listskip = _addlist2 ;
#line 327 "metalang.met"
                    }
#line 327 "metalang.met"
                }
#line 327 "metalang.met"
#line 327 "metalang.met"
#line 328 "metalang.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 328 "metalang.met"
#line 329 "metalang.met"
            {
#line 329 "metalang.met"
                PPTREE _ptTree0=0;
#line 329 "metalang.met"
                {
#line 329 "metalang.met"
                    PPTREE _ptRes1=0;
#line 329 "metalang.met"
                    _ptRes1= MakeTree(SKIP, 1);
#line 329 "metalang.met"
                    ReplaceTree(_ptRes1, 1, listskip );
#line 329 "metalang.met"
                    _ptTree0=_ptRes1;
#line 329 "metalang.met"
                }
#line 329 "metalang.met"
                list =AddList(list , _ptTree0);
#line 329 "metalang.met"
            }
#line 329 "metalang.met"
#line 330 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 330 "metalang.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 330 "metalang.met"
                MulFreeTree(8,_addlist1,_addlist2,_addlist3,defTree,list,listcons,listskip,pattern);
                TOKEN_EXIT(definition_exit,";")
#line 330 "metalang.met"
            } else {
#line 330 "metalang.met"
                tokenAhead = 0 ;
#line 330 "metalang.met"
            }
#line 330 "metalang.met"
#line 330 "metalang.met"
#line 330 "metalang.met"
        }
#line 330 "metalang.met"
#line 332 "metalang.met"
         debut :
#line 332 "metalang.met"
#line 332 "metalang.met"
        _addlist3 = list ;
#line 332 "metalang.met"
#line 333 "metalang.met"
        do {
#line 333 "metalang.met"
#line 334 "metalang.met"
            if (NPUSH_CALL_AFF_VERIF(pattern = ,_Tak(pattern_rec), 17, metalang)){
#line 334 "metalang.met"
#line 335 "metalang.met"
#line 335 "metalang.met"
                _addlist3 =AddList(_addlist3 ,pattern );
#line 335 "metalang.met"
#line 335 "metalang.met"
                if (list){
#line 335 "metalang.met"
#line 335 "metalang.met"
                    _addlist3 = SonTree (_addlist3 ,2 );
#line 335 "metalang.met"
                } else {
#line 335 "metalang.met"
#line 335 "metalang.met"
                    list = _addlist3 ;
#line 335 "metalang.met"
                }
#line 335 "metalang.met"
            } else {
#line 335 "metalang.met"
#line 337 "metalang.met"
#line 339 "metalang.met"
                dumperror ();
#line 339 "metalang.met"
#line 341 "metalang.met"
                (tokenAhead == 4|| (LexEndLine(),TRACE_LEX(1)));
#line 341 "metalang.met"
                if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 341 "metalang.met"
                    MulFreeTree(8,_addlist1,_addlist2,_addlist3,defTree,list,listcons,listskip,pattern);
                    TOKEN_EXIT(definition_exit,"END_LINE")
#line 341 "metalang.met"
                } else {
#line 341 "metalang.met"
                    tokenAhead = 0 ;
#line 341 "metalang.met"
                }
#line 341 "metalang.met"
#line 342 "metalang.met"
                 hasGotErrorMeta = 1 ;
#line 342 "metalang.met"
#line 343 "metalang.met"
                if (! (c == EOF )){
#line 343 "metalang.met"
#line 344 "metalang.met"
                     goto debut ;
#line 344 "metalang.met"
                }
#line 344 "metalang.met"
#line 344 "metalang.met"
            }
#line 344 "metalang.met"
#line 344 "metalang.met"
#line 346 "metalang.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 346 "metalang.met"
#line 347 "metalang.met"
        ReplaceTree(defTree ,2 ,list );
#line 347 "metalang.met"
#line 350 "metalang.met"
        if (! (NPUSH_CALL_AFF_VERIF(pattern = ,_Tak(end_key), 7, metalang))){
#line 350 "metalang.met"
#line 352 "metalang.met"
#line 353 "metalang.met"
            dumperror ();
#line 353 "metalang.met"
#line 354 "metalang.met"
            (tokenAhead == 4|| (LexEndLine(),TRACE_LEX(1)));
#line 354 "metalang.met"
            if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 354 "metalang.met"
                MulFreeTree(8,_addlist1,_addlist2,_addlist3,defTree,list,listcons,listskip,pattern);
                TOKEN_EXIT(definition_exit,"END_LINE")
#line 354 "metalang.met"
            } else {
#line 354 "metalang.met"
                tokenAhead = 0 ;
#line 354 "metalang.met"
            }
#line 354 "metalang.met"
#line 355 "metalang.met"
             hasGotErrorMeta = 1 ;
#line 355 "metalang.met"
#line 356 "metalang.met"
            if (! (c == EOF )){
#line 356 "metalang.met"
#line 357 "metalang.met"
                 goto debut ;
#line 357 "metalang.met"
            }
#line 357 "metalang.met"
#line 357 "metalang.met"
#line 357 "metalang.met"
        }
#line 357 "metalang.met"
#line 357 "metalang.met"
        cDef =  _oldcDef;
#line 357 "metalang.met"
    }
#line 357 "metalang.met"
#line 360 "metalang.met"
    {
#line 360 "metalang.met"
        _retValue = defTree ;
#line 360 "metalang.met"
        goto definition_ret;
#line 360 "metalang.met"
        
#line 360 "metalang.met"
    }
#line 360 "metalang.met"
#line 360 "metalang.met"
#line 360 "metalang.met"

#line 361 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 361 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 361 "metalang.met"
cDef =  _oldcDef;
#line 361 "metalang.met"
return((PPTREE) 0);
#line 361 "metalang.met"

#line 361 "metalang.met"
definition_exit :
#line 361 "metalang.met"

#line 361 "metalang.met"
    _Debug = TRACE_RULE("definition",TRACE_EXIT,(PPTREE)0);
#line 361 "metalang.met"
    _funcLevel--;
#line 361 "metalang.met"
    cDef =  _oldcDef;
#line 361 "metalang.met"
    return((PPTREE) -1) ;
#line 361 "metalang.met"

#line 361 "metalang.met"
definition_ret :
#line 361 "metalang.met"
    
#line 361 "metalang.met"
    _Debug = TRACE_RULE("definition",TRACE_RETURN,_retValue);
#line 361 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 361 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 361 "metalang.met"
    cDef =  _oldcDef;
#line 361 "metalang.met"
    return _retValue ;
#line 361 "metalang.met"
}
#line 361 "metalang.met"

#line 361 "metalang.met"
#line 363 "metalang.met"
PPTREE metalang::end_key ( int error_free)
#line 363 "metalang.met"
{
#line 363 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 363 "metalang.met"
    int _value,_nbPre = 0 ;
#line 363 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 363 "metalang.met"
    int _Debug = TRACE_RULE("end_key",TRACE_ENTER,(PPTREE)0);
#line 363 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 363 "metalang.met"
#line 364 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 364 "metalang.met"
    if (  !SEE_TOKEN( END,"end") || !(CommTerm(),1)) {
#line 364 "metalang.met"
            TOKEN_EXIT(end_key_exit,"end")
#line 364 "metalang.met"
    } else {
#line 364 "metalang.met"
        tokenAhead = 0 ;
#line 364 "metalang.met"
    }
#line 364 "metalang.met"
#line 364 "metalang.met"
#line 364 "metalang.met"

#line 365 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 365 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 365 "metalang.met"
return((PPTREE) 0);
#line 365 "metalang.met"

#line 365 "metalang.met"
end_key_exit :
#line 365 "metalang.met"

#line 365 "metalang.met"
    _Debug = TRACE_RULE("end_key",TRACE_EXIT,(PPTREE)0);
#line 365 "metalang.met"
    _funcLevel--;
#line 365 "metalang.met"
    return((PPTREE) -1) ;
#line 365 "metalang.met"

#line 365 "metalang.met"
end_key_ret :
#line 365 "metalang.met"
    
#line 365 "metalang.met"
    _Debug = TRACE_RULE("end_key",TRACE_RETURN,_retValue);
#line 365 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 365 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 365 "metalang.met"
    return _retValue ;
#line 365 "metalang.met"
}
#line 365 "metalang.met"

#line 365 "metalang.met"
#line 717 "metalang.met"
PPTREE metalang::expr ( int error_free)
#line 717 "metalang.met"
{
#line 717 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 717 "metalang.met"
    int _value,_nbPre = 0 ;
#line 717 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 717 "metalang.met"
    int _Debug = TRACE_RULE("expr",TRACE_ENTER,(PPTREE)0);
#line 717 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 717 "metalang.met"
#line 718 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 718 "metalang.met"
    switch( lexEl.Value) {
#line 718 "metalang.met"
#line 719 "metalang.met"
        case META : 
#line 719 "metalang.met"
        case IDENT : 
#line 719 "metalang.met"
#line 719 "metalang.met"
            {
#line 719 "metalang.met"
                PPTREE _ptTree0=0;
#line 719 "metalang.met"
                {
#line 719 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 719 "metalang.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 719 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 719 "metalang.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 719 "metalang.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(expr_exit,"IDENT")
#line 719 "metalang.met"
                    } else {
#line 719 "metalang.met"
                        tokenAhead = 0 ;
#line 719 "metalang.met"
                    }
#line 719 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 719 "metalang.met"
                    _ptTree0=_ptRes1;
#line 719 "metalang.met"
                }
#line 719 "metalang.met"
                _retValue =_ptTree0;
#line 719 "metalang.met"
                goto expr_ret;
#line 719 "metalang.met"
            }
#line 719 "metalang.met"
            break;
#line 719 "metalang.met"
#line 720 "metalang.met"
        case NUMB : 
#line 720 "metalang.met"
#line 720 "metalang.met"
            {
#line 720 "metalang.met"
                PPTREE _ptTree0=0;
#line 720 "metalang.met"
                {
#line 720 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 720 "metalang.met"
                    _ptRes1= MakeTree(NUMB, 1);
#line 720 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 720 "metalang.met"
                    if ( ! TERM_OR_META(NUMB,"NUMB") || !(BUILD_TERM_META(_ptTree1))) {
#line 720 "metalang.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(expr_exit,"NUMB")
#line 720 "metalang.met"
                    } else {
#line 720 "metalang.met"
                        tokenAhead = 0 ;
#line 720 "metalang.met"
                    }
#line 720 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 720 "metalang.met"
                    _ptTree0=_ptRes1;
#line 720 "metalang.met"
                }
#line 720 "metalang.met"
                _retValue =_ptTree0;
#line 720 "metalang.met"
                goto expr_ret;
#line 720 "metalang.met"
            }
#line 720 "metalang.met"
            break;
#line 720 "metalang.met"
        default :
#line 720 "metalang.met"
            CASE_EXIT(expr_exit,"either IDENT or NUMB")
#line 720 "metalang.met"
            break;
#line 720 "metalang.met"
    }
#line 720 "metalang.met"
#line 720 "metalang.met"
#line 721 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 721 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 721 "metalang.met"
return((PPTREE) 0);
#line 721 "metalang.met"

#line 721 "metalang.met"
expr_exit :
#line 721 "metalang.met"

#line 721 "metalang.met"
    _Debug = TRACE_RULE("expr",TRACE_EXIT,(PPTREE)0);
#line 721 "metalang.met"
    _funcLevel--;
#line 721 "metalang.met"
    return((PPTREE) -1) ;
#line 721 "metalang.met"

#line 721 "metalang.met"
expr_ret :
#line 721 "metalang.met"
    
#line 721 "metalang.met"
    _Debug = TRACE_RULE("expr",TRACE_RETURN,_retValue);
#line 721 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 721 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 721 "metalang.met"
    return _retValue ;
#line 721 "metalang.met"
}
#line 721 "metalang.met"

#line 721 "metalang.met"
#line 756 "metalang.met"
PPTREE metalang::func_call ( int error_free)
#line 756 "metalang.met"
{
#line 756 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 756 "metalang.met"
    int _value,_nbPre = 0 ;
#line 756 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 756 "metalang.met"
    int _Debug = TRACE_RULE("func_call",TRACE_ENTER,(PPTREE)0);
#line 756 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 756 "metalang.met"
#line 756 "metalang.met"
    PPTREE retTree = (PPTREE) 0;
#line 756 "metalang.met"
#line 758 "metalang.met"
    {
#line 758 "metalang.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 758 "metalang.met"
        _ptRes0= MakeTree(FUNC, 2);
#line 758 "metalang.met"
        {
#line 758 "metalang.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 758 "metalang.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 758 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 758 "metalang.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 758 "metalang.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                TOKEN_EXIT(func_call_exit,"IDENT")
#line 758 "metalang.met"
            } else {
#line 758 "metalang.met"
                tokenAhead = 0 ;
#line 758 "metalang.met"
            }
#line 758 "metalang.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 758 "metalang.met"
            _ptTree0=_ptRes1;
#line 758 "metalang.met"
        }
#line 758 "metalang.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 758 "metalang.met"
        retTree=_ptRes0;
#line 758 "metalang.met"
    }
#line 758 "metalang.met"
#line 759 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 759 "metalang.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 759 "metalang.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(func_call_exit,"(")
#line 759 "metalang.met"
    } else {
#line 759 "metalang.met"
        tokenAhead = 0 ;
#line 759 "metalang.met"
    }
#line 759 "metalang.met"
#line 760 "metalang.met"
    {
#line 760 "metalang.met"
        PPTREE _ptTree0=0;
#line 760 "metalang.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(func_follow)(error_free), 10, metalang))== (PPTREE) -1 ) {
#line 760 "metalang.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(func_call_exit,"func_call")
#line 760 "metalang.met"
        }
#line 760 "metalang.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 760 "metalang.met"
    }
#line 760 "metalang.met"
#line 761 "metalang.met"
    {
#line 761 "metalang.met"
        _retValue = retTree ;
#line 761 "metalang.met"
        goto func_call_ret;
#line 761 "metalang.met"
        
#line 761 "metalang.met"
    }
#line 761 "metalang.met"
#line 761 "metalang.met"
#line 761 "metalang.met"

#line 762 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 762 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 762 "metalang.met"
return((PPTREE) 0);
#line 762 "metalang.met"

#line 762 "metalang.met"
func_call_exit :
#line 762 "metalang.met"

#line 762 "metalang.met"
    _Debug = TRACE_RULE("func_call",TRACE_EXIT,(PPTREE)0);
#line 762 "metalang.met"
    _funcLevel--;
#line 762 "metalang.met"
    return((PPTREE) -1) ;
#line 762 "metalang.met"

#line 762 "metalang.met"
func_call_ret :
#line 762 "metalang.met"
    
#line 762 "metalang.met"
    _Debug = TRACE_RULE("func_call",TRACE_RETURN,_retValue);
#line 762 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 762 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 762 "metalang.met"
    return _retValue ;
#line 762 "metalang.met"
}
#line 762 "metalang.met"

#line 762 "metalang.met"
#line 764 "metalang.met"
PPTREE metalang::func_follow ( int error_free)
#line 764 "metalang.met"
{
#line 764 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 764 "metalang.met"
    int _value,_nbPre = 0 ;
#line 764 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 764 "metalang.met"
    int _Debug = TRACE_RULE("func_follow",TRACE_ENTER,(PPTREE)0);
#line 764 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 764 "metalang.met"
#line 764 "metalang.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 764 "metalang.met"
#line 764 "metalang.met"
    PPTREE list = (PPTREE) 0,switchTree = (PPTREE) 0;
#line 764 "metalang.met"
#line 764 "metalang.met"
    _addlist1 = list ;
#line 764 "metalang.met"
#line 766 "metalang.met"
    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PFER,")") && (tokenAhead = 0,CommTerm(),1))) { 
#line 766 "metalang.met"
#line 767 "metalang.met"
#line 768 "metalang.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 768 "metalang.met"
        switch( lexEl.Value) {
#line 768 "metalang.met"
#line 769 "metalang.met"
            case DIES : 
#line 769 "metalang.met"
                tokenAhead = 0 ;
#line 769 "metalang.met"
                CommTerm();
#line 769 "metalang.met"
#line 769 "metalang.met"
                {
#line 769 "metalang.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 769 "metalang.met"
                    _ptRes0= MakeTree(TOKEN, 1);
#line 769 "metalang.met"
                    {
#line 769 "metalang.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 769 "metalang.met"
                        _ptRes1= MakeTree(STRING, 1);
#line 769 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 769 "metalang.met"
                        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 769 "metalang.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,list,switchTree);
                            TOKEN_EXIT(func_follow_exit,"STRING")
#line 769 "metalang.met"
                        } else {
#line 769 "metalang.met"
                            tokenAhead = 0 ;
#line 769 "metalang.met"
                        }
#line 769 "metalang.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 769 "metalang.met"
                        _ptTree0=_ptRes1;
#line 769 "metalang.met"
                    }
#line 769 "metalang.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 769 "metalang.met"
                    switchTree=_ptRes0;
#line 769 "metalang.met"
                }
#line 769 "metalang.met"
                break;
#line 769 "metalang.met"
#line 771 "metalang.met"
            case EXCL : 
#line 771 "metalang.met"
                tokenAhead = 0 ;
#line 771 "metalang.met"
                CommTerm();
#line 771 "metalang.met"
#line 771 "metalang.met"
                {
#line 771 "metalang.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 771 "metalang.met"
                    _ptRes0= MakeTree(EXCLA, 1);
#line 771 "metalang.met"
                    {
#line 771 "metalang.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 771 "metalang.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 771 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 771 "metalang.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 771 "metalang.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,list,switchTree);
                            TOKEN_EXIT(func_follow_exit,"IDENT")
#line 771 "metalang.met"
                        } else {
#line 771 "metalang.met"
                            tokenAhead = 0 ;
#line 771 "metalang.met"
                        }
#line 771 "metalang.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 771 "metalang.met"
                        _ptTree0=_ptRes1;
#line 771 "metalang.met"
                    }
#line 771 "metalang.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 771 "metalang.met"
                    switchTree=_ptRes0;
#line 771 "metalang.met"
                }
#line 771 "metalang.met"
                break;
#line 771 "metalang.met"
#line 773 "metalang.met"
            case META : 
#line 773 "metalang.met"
            case STRING : 
#line 773 "metalang.met"
#line 773 "metalang.met"
                {
#line 773 "metalang.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 773 "metalang.met"
                    _ptRes0= MakeTree(STRING, 1);
#line 773 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 773 "metalang.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 773 "metalang.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,switchTree);
                        TOKEN_EXIT(func_follow_exit,"STRING")
#line 773 "metalang.met"
                    } else {
#line 773 "metalang.met"
                        tokenAhead = 0 ;
#line 773 "metalang.met"
                    }
#line 773 "metalang.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 773 "metalang.met"
                    switchTree=_ptRes0;
#line 773 "metalang.met"
                }
#line 773 "metalang.met"
                break;
#line 773 "metalang.met"
#line 774 "metalang.met"
            default : 
#line 774 "metalang.met"
#line 774 "metalang.met"
                if ( (switchTree=NQUICK_CALL(_Tak(expr)(error_free), 8, metalang))== (PPTREE) -1 ) {
#line 774 "metalang.met"
                    MulFreeTree(3,_addlist1,list,switchTree);
                    PROG_EXIT(func_follow_exit,"func_follow")
#line 774 "metalang.met"
                }
#line 774 "metalang.met"
                break;
#line 774 "metalang.met"
        }
#line 774 "metalang.met"
#line 776 "metalang.met"
        _addlist1 =AddList(_addlist1 ,switchTree );
#line 776 "metalang.met"
#line 776 "metalang.met"
        if (list){
#line 776 "metalang.met"
#line 776 "metalang.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 776 "metalang.met"
        } else {
#line 776 "metalang.met"
#line 776 "metalang.met"
            list = _addlist1 ;
#line 776 "metalang.met"
        }
#line 776 "metalang.met"
#line 777 "metalang.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,",")){
#line 777 "metalang.met"
#line 778 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 778 "metalang.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 778 "metalang.met"
                MulFreeTree(3,_addlist1,list,switchTree);
                TOKEN_EXIT(func_follow_exit,",")
#line 778 "metalang.met"
            } else {
#line 778 "metalang.met"
                tokenAhead = 0 ;
#line 778 "metalang.met"
            }
#line 778 "metalang.met"
        }
#line 778 "metalang.met"
#line 778 "metalang.met"
    } 
#line 778 "metalang.met"
#line 780 "metalang.met"
    {
#line 780 "metalang.met"
        _retValue = list ;
#line 780 "metalang.met"
        goto func_follow_ret;
#line 780 "metalang.met"
        
#line 780 "metalang.met"
    }
#line 780 "metalang.met"
#line 780 "metalang.met"
#line 780 "metalang.met"

#line 781 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 781 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 781 "metalang.met"
return((PPTREE) 0);
#line 781 "metalang.met"

#line 781 "metalang.met"
func_follow_exit :
#line 781 "metalang.met"

#line 781 "metalang.met"
    _Debug = TRACE_RULE("func_follow",TRACE_EXIT,(PPTREE)0);
#line 781 "metalang.met"
    _funcLevel--;
#line 781 "metalang.met"
    return((PPTREE) -1) ;
#line 781 "metalang.met"

#line 781 "metalang.met"
func_follow_ret :
#line 781 "metalang.met"
    
#line 781 "metalang.met"
    _Debug = TRACE_RULE("func_follow",TRACE_RETURN,_retValue);
#line 781 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 781 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 781 "metalang.met"
    return _retValue ;
#line 781 "metalang.met"
}
#line 781 "metalang.met"

#line 781 "metalang.met"
#line 792 "metalang.met"
PPTREE metalang::gen_param ( int error_free)
#line 792 "metalang.met"
{
#line 792 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 792 "metalang.met"
    int _value,_nbPre = 0 ;
#line 792 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 792 "metalang.met"
    int _Debug = TRACE_RULE("gen_param",TRACE_ENTER,(PPTREE)0);
#line 792 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 792 "metalang.met"
#line 792 "metalang.met"
    PPTREE switchTree = (PPTREE) 0,ident = (PPTREE) 0,list = (PPTREE) 0;
#line 792 "metalang.met"
#line 794 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 794 "metalang.met"
    switch( lexEl.Value) {
#line 794 "metalang.met"
#line 797 "metalang.met"
        case POUV : 
#line 797 "metalang.met"
            tokenAhead = 0 ;
#line 797 "metalang.met"
            CommTerm();
#line 797 "metalang.met"
#line 796 "metalang.met"
#line 797 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 797 "metalang.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 797 "metalang.met"
                MulFreeTree(3,ident,list,switchTree);
                TOKEN_EXIT(gen_param_exit,")")
#line 797 "metalang.met"
            } else {
#line 797 "metalang.met"
                tokenAhead = 0 ;
#line 797 "metalang.met"
            }
#line 797 "metalang.met"
#line 798 "metalang.met"
            {
#line 798 "metalang.met"
                PPTREE _ptRes0=0;
#line 798 "metalang.met"
                _ptRes0= MakeTree(NIL, 0);
#line 798 "metalang.met"
                switchTree=_ptRes0;
#line 798 "metalang.met"
            }
#line 798 "metalang.met"
#line 798 "metalang.met"
            break;
#line 798 "metalang.met"
#line 800 "metalang.met"
        case TAKE : 
#line 800 "metalang.met"
            tokenAhead = 0 ;
#line 800 "metalang.met"
            CommTerm();
#line 800 "metalang.met"
#line 800 "metalang.met"
            if ( (switchTree=NQUICK_CALL(_Tak(take_follow)(error_free), 23, metalang))== (PPTREE) -1 ) {
#line 800 "metalang.met"
                MulFreeTree(3,ident,list,switchTree);
                PROG_EXIT(gen_param_exit,"gen_param")
#line 800 "metalang.met"
            }
#line 800 "metalang.met"
            break;
#line 800 "metalang.met"
#line 801 "metalang.met"
        case STRINGLEX : 
#line 801 "metalang.met"
            tokenAhead = 0 ;
#line 801 "metalang.met"
            CommTerm();
#line 801 "metalang.met"
#line 801 "metalang.met"
            {
#line 801 "metalang.met"
                PPTREE _ptRes0=0;
#line 801 "metalang.met"
                _ptRes0= MakeTree(STRINGLEX, 0);
#line 801 "metalang.met"
                switchTree=_ptRes0;
#line 801 "metalang.met"
            }
#line 801 "metalang.met"
            break;
#line 801 "metalang.met"
#line 802 "metalang.met"
        case META : 
#line 802 "metalang.met"
        case IDENT : 
#line 802 "metalang.met"
#line 803 "metalang.met"
#line 804 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 804 "metalang.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(ident))) {
#line 804 "metalang.met"
                MulFreeTree(3,ident,list,switchTree);
                TOKEN_EXIT(gen_param_exit,"IDENT")
#line 804 "metalang.met"
            } else {
#line 804 "metalang.met"
                tokenAhead = 0 ;
#line 804 "metalang.met"
            }
#line 804 "metalang.met"
#line 805 "metalang.met"
            if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 805 "metalang.met"
#line 806 "metalang.met"
                {
#line 806 "metalang.met"
                    PPTREE _ptRes0=0;
#line 806 "metalang.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 806 "metalang.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 806 "metalang.met"
                    switchTree=_ptRes0;
#line 806 "metalang.met"
                }
#line 806 "metalang.met"
            } else {
#line 806 "metalang.met"
#line 808 "metalang.met"
#line 809 "metalang.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 809 "metalang.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 809 "metalang.met"
                    MulFreeTree(3,ident,list,switchTree);
                    TOKEN_EXIT(gen_param_exit,"(")
#line 809 "metalang.met"
                } else {
#line 809 "metalang.met"
                    tokenAhead = 0 ;
#line 809 "metalang.met"
                }
#line 809 "metalang.met"
#line 810 "metalang.met"
                {
#line 810 "metalang.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 810 "metalang.met"
                    _ptRes0= MakeTree(FUNC, 2);
#line 810 "metalang.met"
                    {
#line 810 "metalang.met"
                        PPTREE _ptRes1=0;
#line 810 "metalang.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 810 "metalang.met"
                        ReplaceTree(_ptRes1, 1, ident );
#line 810 "metalang.met"
                        _ptTree0=_ptRes1;
#line 810 "metalang.met"
                    }
#line 810 "metalang.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 810 "metalang.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(func_follow)(error_free), 10, metalang))== (PPTREE) -1 ) {
#line 810 "metalang.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,ident,list,switchTree);
                        PROG_EXIT(gen_param_exit,"gen_param")
#line 810 "metalang.met"
                    }
#line 810 "metalang.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 810 "metalang.met"
                    switchTree=_ptRes0;
#line 810 "metalang.met"
                }
#line 810 "metalang.met"
#line 810 "metalang.met"
            }
#line 810 "metalang.met"
#line 810 "metalang.met"
            break;
#line 810 "metalang.met"
#line 814 "metalang.met"
        case MAKETREE : 
#line 814 "metalang.met"
            tokenAhead = 0 ;
#line 814 "metalang.met"
            CommTerm();
#line 814 "metalang.met"
#line 815 "metalang.met"
#line 816 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 816 "metalang.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 816 "metalang.met"
                MulFreeTree(3,ident,list,switchTree);
                TOKEN_EXIT(gen_param_exit,"(")
#line 816 "metalang.met"
            } else {
#line 816 "metalang.met"
                tokenAhead = 0 ;
#line 816 "metalang.met"
            }
#line 816 "metalang.met"
#line 817 "metalang.met"
            {
#line 817 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 817 "metalang.met"
                _ptRes0= MakeTree(MAKETREE, 1);
#line 817 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(maketree_follow)(error_free), 15, metalang))== (PPTREE) -1 ) {
#line 817 "metalang.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,ident,list,switchTree);
                    PROG_EXIT(gen_param_exit,"gen_param")
#line 817 "metalang.met"
                }
#line 817 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 817 "metalang.met"
                switchTree=_ptRes0;
#line 817 "metalang.met"
            }
#line 817 "metalang.met"
#line 817 "metalang.met"
            break;
#line 817 "metalang.met"
#line 819 "metalang.met"
        case REPLACETREE : 
#line 819 "metalang.met"
            tokenAhead = 0 ;
#line 819 "metalang.met"
            CommTerm();
#line 819 "metalang.met"
#line 820 "metalang.met"
#line 821 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 821 "metalang.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 821 "metalang.met"
                MulFreeTree(3,ident,list,switchTree);
                TOKEN_EXIT(gen_param_exit,"(")
#line 821 "metalang.met"
            } else {
#line 821 "metalang.met"
                tokenAhead = 0 ;
#line 821 "metalang.met"
            }
#line 821 "metalang.met"
#line 822 "metalang.met"
            {
#line 822 "metalang.met"
                PPTREE _ptTree0=0;
#line 822 "metalang.met"
                {
#line 822 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 822 "metalang.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 822 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 822 "metalang.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 822 "metalang.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,ident,list,switchTree);
                        TOKEN_EXIT(gen_param_exit,"IDENT")
#line 822 "metalang.met"
                    } else {
#line 822 "metalang.met"
                        tokenAhead = 0 ;
#line 822 "metalang.met"
                    }
#line 822 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 822 "metalang.met"
                    _ptTree0=_ptRes1;
#line 822 "metalang.met"
                }
#line 822 "metalang.met"
                list =AddList(list , _ptTree0);
#line 822 "metalang.met"
            }
#line 822 "metalang.met"
#line 823 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 823 "metalang.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 823 "metalang.met"
                MulFreeTree(3,ident,list,switchTree);
                TOKEN_EXIT(gen_param_exit,",")
#line 823 "metalang.met"
            } else {
#line 823 "metalang.met"
                tokenAhead = 0 ;
#line 823 "metalang.met"
            }
#line 823 "metalang.met"
#line 824 "metalang.met"
            {
#line 824 "metalang.met"
                PPTREE _ptTree0=0;
#line 824 "metalang.met"
                {
#line 824 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 824 "metalang.met"
                    _ptRes1= MakeTree(NUMB, 1);
#line 824 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 824 "metalang.met"
                    if ( ! TERM_OR_META(NUMB,"NUMB") || !(BUILD_TERM_META(_ptTree1))) {
#line 824 "metalang.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,ident,list,switchTree);
                        TOKEN_EXIT(gen_param_exit,"NUMB")
#line 824 "metalang.met"
                    } else {
#line 824 "metalang.met"
                        tokenAhead = 0 ;
#line 824 "metalang.met"
                    }
#line 824 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 824 "metalang.met"
                    _ptTree0=_ptRes1;
#line 824 "metalang.met"
                }
#line 824 "metalang.met"
                list =AddList(list , _ptTree0);
#line 824 "metalang.met"
            }
#line 824 "metalang.met"
#line 825 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 825 "metalang.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 825 "metalang.met"
                MulFreeTree(3,ident,list,switchTree);
                TOKEN_EXIT(gen_param_exit,",")
#line 825 "metalang.met"
            } else {
#line 825 "metalang.met"
                tokenAhead = 0 ;
#line 825 "metalang.met"
            }
#line 825 "metalang.met"
#line 826 "metalang.met"
            {
#line 826 "metalang.met"
                PPTREE _ptTree0=0;
#line 826 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(gen_param)(error_free), 11, metalang))== (PPTREE) -1 ) {
#line 826 "metalang.met"
                    MulFreeTree(4,_ptTree0,ident,list,switchTree);
                    PROG_EXIT(gen_param_exit,"gen_param")
#line 826 "metalang.met"
                }
#line 826 "metalang.met"
                list =AddList(list , _ptTree0);
#line 826 "metalang.met"
            }
#line 826 "metalang.met"
#line 827 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 827 "metalang.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 827 "metalang.met"
                MulFreeTree(3,ident,list,switchTree);
                TOKEN_EXIT(gen_param_exit,")")
#line 827 "metalang.met"
            } else {
#line 827 "metalang.met"
                tokenAhead = 0 ;
#line 827 "metalang.met"
            }
#line 827 "metalang.met"
#line 828 "metalang.met"
            {
#line 828 "metalang.met"
                PPTREE _ptRes0=0;
#line 828 "metalang.met"
                _ptRes0= MakeTree(REPLACETREE, 1);
#line 828 "metalang.met"
                ReplaceTree(_ptRes0, 1, list );
#line 828 "metalang.met"
                switchTree=_ptRes0;
#line 828 "metalang.met"
            }
#line 828 "metalang.met"
#line 828 "metalang.met"
            break;
#line 828 "metalang.met"
#line 830 "metalang.met"
        case ADDLIST : 
#line 830 "metalang.met"
            tokenAhead = 0 ;
#line 830 "metalang.met"
            CommTerm();
#line 830 "metalang.met"
#line 831 "metalang.met"
#line 832 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 832 "metalang.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 832 "metalang.met"
                MulFreeTree(3,ident,list,switchTree);
                TOKEN_EXIT(gen_param_exit,"(")
#line 832 "metalang.met"
            } else {
#line 832 "metalang.met"
                tokenAhead = 0 ;
#line 832 "metalang.met"
            }
#line 832 "metalang.met"
#line 833 "metalang.met"
            {
#line 833 "metalang.met"
                PPTREE _ptTree0=0;
#line 833 "metalang.met"
                {
#line 833 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 833 "metalang.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 833 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 833 "metalang.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 833 "metalang.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,ident,list,switchTree);
                        TOKEN_EXIT(gen_param_exit,"IDENT")
#line 833 "metalang.met"
                    } else {
#line 833 "metalang.met"
                        tokenAhead = 0 ;
#line 833 "metalang.met"
                    }
#line 833 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 833 "metalang.met"
                    _ptTree0=_ptRes1;
#line 833 "metalang.met"
                }
#line 833 "metalang.met"
                list =AddList(list , _ptTree0);
#line 833 "metalang.met"
            }
#line 833 "metalang.met"
#line 834 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 834 "metalang.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 834 "metalang.met"
                MulFreeTree(3,ident,list,switchTree);
                TOKEN_EXIT(gen_param_exit,",")
#line 834 "metalang.met"
            } else {
#line 834 "metalang.met"
                tokenAhead = 0 ;
#line 834 "metalang.met"
            }
#line 834 "metalang.met"
#line 835 "metalang.met"
            {
#line 835 "metalang.met"
                PPTREE _ptTree0=0;
#line 835 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(gen_param)(error_free), 11, metalang))== (PPTREE) -1 ) {
#line 835 "metalang.met"
                    MulFreeTree(4,_ptTree0,ident,list,switchTree);
                    PROG_EXIT(gen_param_exit,"gen_param")
#line 835 "metalang.met"
                }
#line 835 "metalang.met"
                list =AddList(list , _ptTree0);
#line 835 "metalang.met"
            }
#line 835 "metalang.met"
#line 836 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 836 "metalang.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 836 "metalang.met"
                MulFreeTree(3,ident,list,switchTree);
                TOKEN_EXIT(gen_param_exit,")")
#line 836 "metalang.met"
            } else {
#line 836 "metalang.met"
                tokenAhead = 0 ;
#line 836 "metalang.met"
            }
#line 836 "metalang.met"
#line 837 "metalang.met"
            {
#line 837 "metalang.met"
                PPTREE _ptRes0=0;
#line 837 "metalang.met"
                _ptRes0= MakeTree(ADDLIST, 1);
#line 837 "metalang.met"
                ReplaceTree(_ptRes0, 1, list );
#line 837 "metalang.met"
                switchTree=_ptRes0;
#line 837 "metalang.met"
            }
#line 837 "metalang.met"
#line 837 "metalang.met"
            break;
#line 837 "metalang.met"
#line 841 "metalang.met"
        case DIES : 
#line 841 "metalang.met"
            tokenAhead = 0 ;
#line 841 "metalang.met"
            CommTerm();
#line 841 "metalang.met"
#line 841 "metalang.met"
            {
#line 841 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 841 "metalang.met"
                _ptRes0= MakeTree(TOKEN, 1);
#line 841 "metalang.met"
                {
#line 841 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 841 "metalang.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 841 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 841 "metalang.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 841 "metalang.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,ident,list,switchTree);
                        TOKEN_EXIT(gen_param_exit,"STRING")
#line 841 "metalang.met"
                    } else {
#line 841 "metalang.met"
                        tokenAhead = 0 ;
#line 841 "metalang.met"
                    }
#line 841 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 841 "metalang.met"
                    _ptTree0=_ptRes1;
#line 841 "metalang.met"
                }
#line 841 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 841 "metalang.met"
                switchTree=_ptRes0;
#line 841 "metalang.met"
            }
#line 841 "metalang.met"
            break;
#line 841 "metalang.met"
#line 843 "metalang.met"
        case EXCL : 
#line 843 "metalang.met"
            tokenAhead = 0 ;
#line 843 "metalang.met"
            CommTerm();
#line 843 "metalang.met"
#line 843 "metalang.met"
            {
#line 843 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 843 "metalang.met"
                _ptRes0= MakeTree(EXCLA, 1);
#line 843 "metalang.met"
                {
#line 843 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 843 "metalang.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 843 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 843 "metalang.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 843 "metalang.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,ident,list,switchTree);
                        TOKEN_EXIT(gen_param_exit,"IDENT")
#line 843 "metalang.met"
                    } else {
#line 843 "metalang.met"
                        tokenAhead = 0 ;
#line 843 "metalang.met"
                    }
#line 843 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 843 "metalang.met"
                    _ptTree0=_ptRes1;
#line 843 "metalang.met"
                }
#line 843 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 843 "metalang.met"
                switchTree=_ptRes0;
#line 843 "metalang.met"
            }
#line 843 "metalang.met"
            break;
#line 843 "metalang.met"
#line 844 "metalang.met"
        case STRING : 
#line 844 "metalang.met"
#line 844 "metalang.met"
            {
#line 844 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 844 "metalang.met"
                _ptRes0= MakeTree(STRING, 1);
#line 844 "metalang.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 844 "metalang.met"
                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 844 "metalang.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,ident,list,switchTree);
                    TOKEN_EXIT(gen_param_exit,"STRING")
#line 844 "metalang.met"
                } else {
#line 844 "metalang.met"
                    tokenAhead = 0 ;
#line 844 "metalang.met"
                }
#line 844 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 844 "metalang.met"
                switchTree=_ptRes0;
#line 844 "metalang.met"
            }
#line 844 "metalang.met"
            break;
#line 844 "metalang.met"
        default :
#line 844 "metalang.met"
            MulFreeTree(3,ident,list,switchTree);
            CASE_EXIT(gen_param_exit,"either ( or take or stringlex or IDENT or maketree or replacetree or addlist or # or ! or STRING")
#line 844 "metalang.met"
            break;
#line 844 "metalang.met"
    }
#line 844 "metalang.met"
#line 846 "metalang.met"
    {
#line 846 "metalang.met"
        _retValue = switchTree ;
#line 846 "metalang.met"
        goto gen_param_ret;
#line 846 "metalang.met"
        
#line 846 "metalang.met"
    }
#line 846 "metalang.met"
#line 846 "metalang.met"
#line 846 "metalang.met"

#line 847 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 847 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 847 "metalang.met"
return((PPTREE) 0);
#line 847 "metalang.met"

#line 847 "metalang.met"
gen_param_exit :
#line 847 "metalang.met"

#line 847 "metalang.met"
    _Debug = TRACE_RULE("gen_param",TRACE_EXIT,(PPTREE)0);
#line 847 "metalang.met"
    _funcLevel--;
#line 847 "metalang.met"
    return((PPTREE) -1) ;
#line 847 "metalang.met"

#line 847 "metalang.met"
gen_param_ret :
#line 847 "metalang.met"
    
#line 847 "metalang.met"
    _Debug = TRACE_RULE("gen_param",TRACE_RETURN,_retValue);
#line 847 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 847 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 847 "metalang.met"
    return _retValue ;
#line 847 "metalang.met"
}
#line 847 "metalang.met"

#line 847 "metalang.met"
#line 849 "metalang.met"
PPTREE metalang::grammar_use ( int error_free)
#line 849 "metalang.met"
{
#line 849 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 849 "metalang.met"
    int _value,_nbPre = 0 ;
#line 849 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 849 "metalang.met"
    int _Debug = TRACE_RULE("grammar_use",TRACE_ENTER,(PPTREE)0);
#line 849 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 849 "metalang.met"
#line 849 "metalang.met"
    PPTREE retTree = (PPTREE) 0,string = (PPTREE) 0;
#line 849 "metalang.met"
#line 851 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 851 "metalang.met"
    if (  !SEE_TOKEN( USE,"use") || !(CommTerm(),1)) {
#line 851 "metalang.met"
        MulFreeTree(2,retTree,string);
        TOKEN_EXIT(grammar_use_exit,"use")
#line 851 "metalang.met"
    } else {
#line 851 "metalang.met"
        tokenAhead = 0 ;
#line 851 "metalang.met"
    }
#line 851 "metalang.met"
#line 852 "metalang.met"
    {
#line 852 "metalang.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 852 "metalang.met"
        _ptRes0= MakeTree(STRING, 1);
#line 852 "metalang.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 852 "metalang.met"
        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 852 "metalang.met"
            MulFreeTree(4,_ptRes0,_ptTree0,retTree,string);
            TOKEN_EXIT(grammar_use_exit,"STRING")
#line 852 "metalang.met"
        } else {
#line 852 "metalang.met"
            tokenAhead = 0 ;
#line 852 "metalang.met"
        }
#line 852 "metalang.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 852 "metalang.met"
        string=_ptRes0;
#line 852 "metalang.met"
    }
#line 852 "metalang.met"
#line 853 "metalang.met"
     {char * incString = (char *) (Value(string));
#line 853 "metalang.met"
#line 854 "metalang.met"
    {
#line 854 "metalang.met"
        PPTREE _ptRes0=0;
#line 854 "metalang.met"
        _ptRes0= MakeTree(GRAMMAR_USE, 1);
#line 854 "metalang.met"
        ReplaceTree(_ptRes0, 1, (ReadInclude (incString ,1 )));
#line 854 "metalang.met"
        retTree=_ptRes0;
#line 854 "metalang.met"
    }
#line 854 "metalang.met"
#line 855 "metalang.met"
     } 
#line 855 "metalang.met"
#line 856 "metalang.met"
    {
#line 856 "metalang.met"
        _retValue = retTree ;
#line 856 "metalang.met"
        goto grammar_use_ret;
#line 856 "metalang.met"
        
#line 856 "metalang.met"
    }
#line 856 "metalang.met"
#line 856 "metalang.met"
#line 856 "metalang.met"

#line 857 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 857 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 857 "metalang.met"
return((PPTREE) 0);
#line 857 "metalang.met"

#line 857 "metalang.met"
grammar_use_exit :
#line 857 "metalang.met"

#line 857 "metalang.met"
    _Debug = TRACE_RULE("grammar_use",TRACE_EXIT,(PPTREE)0);
#line 857 "metalang.met"
    _funcLevel--;
#line 857 "metalang.met"
    return((PPTREE) -1) ;
#line 857 "metalang.met"

#line 857 "metalang.met"
grammar_use_ret :
#line 857 "metalang.met"
    
#line 857 "metalang.met"
    _Debug = TRACE_RULE("grammar_use",TRACE_RETURN,_retValue);
#line 857 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 857 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 857 "metalang.met"
    return _retValue ;
#line 857 "metalang.met"
}
#line 857 "metalang.met"

#line 857 "metalang.met"
#line 230 "metalang.met"
PPTREE metalang::langage ( int error_free)
#line 230 "metalang.met"
{
#line 230 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 230 "metalang.met"
    int _value,_nbPre = 0 ;
#line 230 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 230 "metalang.met"
    int _Debug = TRACE_RULE("langage",TRACE_ENTER,(PPTREE)0);
#line 230 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 230 "metalang.met"
#line 230 "metalang.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0,_addlist3 = (PPTREE) 0;
#line 230 "metalang.met"
#line 230 "metalang.met"
    PPTREE list = (PPTREE) 0,langTree = (PPTREE) 0,listglobal = (PPTREE) 0,nothing = (PPTREE) 0;
#line 230 "metalang.met"
#line 232 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 232 "metalang.met"
    if (  !SEE_TOKEN( LANGUAGE,"language") || !(CommTerm(),1)) {
#line 232 "metalang.met"
        MulFreeTree(7,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
        TOKEN_EXIT(langage_exit,"language")
#line 232 "metalang.met"
    } else {
#line 232 "metalang.met"
        tokenAhead = 0 ;
#line 232 "metalang.met"
    }
#line 232 "metalang.met"
#line 233 "metalang.met"
    {
#line 233 "metalang.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 233 "metalang.met"
        _ptRes0= MakeTree(LANGUAGE, 2);
#line 233 "metalang.met"
        {
#line 233 "metalang.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 233 "metalang.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 233 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 233 "metalang.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 233 "metalang.met"
                MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
                TOKEN_EXIT(langage_exit,"IDENT")
#line 233 "metalang.met"
            } else {
#line 233 "metalang.met"
                tokenAhead = 0 ;
#line 233 "metalang.met"
            }
#line 233 "metalang.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 233 "metalang.met"
            _ptTree0=_ptRes1;
#line 233 "metalang.met"
        }
#line 233 "metalang.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 233 "metalang.met"
        langTree=_ptRes0;
#line 233 "metalang.met"
    }
#line 233 "metalang.met"
#line 234 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 234 "metalang.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 234 "metalang.met"
        MulFreeTree(7,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
        TOKEN_EXIT(langage_exit,";")
#line 234 "metalang.met"
    } else {
#line 234 "metalang.met"
        tokenAhead = 0 ;
#line 234 "metalang.met"
    }
#line 234 "metalang.met"
#line 234 "metalang.met"
    _addlist1 = listglobal ;
#line 234 "metalang.met"
#line 234 "metalang.met"
    _addlist2 = list ;
#line 234 "metalang.met"
#line 235 "metalang.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( GLOBAL,"global")) { 
#line 235 "metalang.met"
#line 236 "metalang.met"
#line 237 "metalang.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(GLOBAL,"global") && (tokenAhead = 0,CommTerm(),1)){
#line 237 "metalang.met"
#line 238 "metalang.met"
#line 239 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 239 "metalang.met"
            if (  !SEE_TOKEN( BEGIN,"begin") || !(CommTerm(),1)) {
#line 239 "metalang.met"
                MulFreeTree(7,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
                TOKEN_EXIT(langage_exit,"begin")
#line 239 "metalang.met"
            } else {
#line 239 "metalang.met"
                tokenAhead = 0 ;
#line 239 "metalang.met"
            }
#line 239 "metalang.met"
#line 240 "metalang.met"
             debut:
#line 240 "metalang.met"
#line 241 "metalang.met"
            do {
#line 241 "metalang.met"
#line 242 "metalang.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 242 "metalang.met"
                switch( lexEl.Value) {
#line 242 "metalang.met"
#line 243 "metalang.met"
                    case AOUVAOUV : 
#line 243 "metalang.met"
#line 243 "metalang.met"
#line 243 "metalang.met"
                        {
#line 243 "metalang.met"
                            PPTREE _ptTree0=0;
#line 243 "metalang.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(asit)(error_free), 2, metalang))== (PPTREE) -1 ) {
#line 243 "metalang.met"
                                MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
                                PROG_EXIT(langage_exit,"langage")
#line 243 "metalang.met"
                            }
#line 243 "metalang.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 243 "metalang.met"
                        }
#line 243 "metalang.met"
#line 243 "metalang.met"
                        if (listglobal){
#line 243 "metalang.met"
#line 243 "metalang.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 243 "metalang.met"
                        } else {
#line 243 "metalang.met"
#line 243 "metalang.met"
                            listglobal = _addlist1 ;
#line 243 "metalang.met"
                        }
#line 243 "metalang.met"
                        break;
#line 243 "metalang.met"
#line 248 "metalang.met"
                    default : 
#line 248 "metalang.met"
#line 245 "metalang.met"
#line 247 "metalang.met"
                        if (NPUSH_CALL_AFF_VERIF(nothing = ,_Tak(debut_proc), 4, metalang)){
#line 247 "metalang.met"
#line 247 "metalang.met"
                        }
#line 247 "metalang.met"
#line 251 "metalang.met"
                        dumperror ();
#line 251 "metalang.met"
#line 253 "metalang.met"
                        (tokenAhead == 4|| (LexEndLine(),TRACE_LEX(1)));
#line 253 "metalang.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 253 "metalang.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
                            TOKEN_EXIT(langage_exit,"END_LINE")
#line 253 "metalang.met"
                        } else {
#line 253 "metalang.met"
                            tokenAhead = 0 ;
#line 253 "metalang.met"
                        }
#line 253 "metalang.met"
#line 254 "metalang.met"
                         hasGotErrorMeta = 1 ;
#line 254 "metalang.met"
#line 255 "metalang.met"
                        if (! (c == EOF )){
#line 255 "metalang.met"
#line 256 "metalang.met"
                             goto debut ;
#line 256 "metalang.met"
                        }
#line 256 "metalang.met"
#line 256 "metalang.met"
                        break;
#line 256 "metalang.met"
                }
#line 256 "metalang.met"
#line 259 "metalang.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 259 "metalang.met"
#line 259 "metalang.met"
                }
#line 259 "metalang.met"
#line 259 "metalang.met"
#line 261 "metalang.met"
            } while ( !((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(END,"end") && (tokenAhead = 0,CommTerm(),1))) ;
#line 261 "metalang.met"
#line 262 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 262 "metalang.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 262 "metalang.met"
                MulFreeTree(7,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
                TOKEN_EXIT(langage_exit,";")
#line 262 "metalang.met"
            } else {
#line 262 "metalang.met"
                tokenAhead = 0 ;
#line 262 "metalang.met"
            }
#line 262 "metalang.met"
#line 263 "metalang.met"
            {
#line 263 "metalang.met"
                PPTREE _ptTree0=0;
#line 263 "metalang.met"
                {
#line 263 "metalang.met"
                    PPTREE _ptRes1=0;
#line 263 "metalang.met"
                    _ptRes1= MakeTree(GLOBAL, 1);
#line 263 "metalang.met"
                    ReplaceTree(_ptRes1, 1, listglobal );
#line 263 "metalang.met"
                    _ptTree0=_ptRes1;
#line 263 "metalang.met"
                }
#line 263 "metalang.met"
                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 263 "metalang.met"
            }
#line 263 "metalang.met"
#line 263 "metalang.met"
            if (list){
#line 263 "metalang.met"
#line 263 "metalang.met"
                _addlist2 = SonTree (_addlist2 ,2 );
#line 263 "metalang.met"
            } else {
#line 263 "metalang.met"
#line 263 "metalang.met"
                list = _addlist2 ;
#line 263 "metalang.met"
            }
#line 263 "metalang.met"
#line 263 "metalang.met"
#line 263 "metalang.met"
        }
#line 263 "metalang.met"
#line 263 "metalang.met"
    } 
#line 263 "metalang.met"
#line 263 "metalang.met"
    _addlist3 = list ;
#line 263 "metalang.met"
#line 266 "metalang.met"
    do {
#line 266 "metalang.met"
#line 267 "metalang.met"
         debut1 :
#line 267 "metalang.met"
#line 268 "metalang.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 268 "metalang.met"
        switch( lexEl.Value) {
#line 268 "metalang.met"
#line 269 "metalang.met"
            case DEFINE : 
#line 269 "metalang.met"
#line 269 "metalang.met"
#line 269 "metalang.met"
                {
#line 269 "metalang.met"
                    PPTREE _ptTree0=0;
#line 269 "metalang.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declaration)(error_free), 5, metalang))== (PPTREE) -1 ) {
#line 269 "metalang.met"
                        MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
                        PROG_EXIT(langage_exit,"langage")
#line 269 "metalang.met"
                    }
#line 269 "metalang.met"
                    _addlist3 =AddList(_addlist3 , _ptTree0);
#line 269 "metalang.met"
                }
#line 269 "metalang.met"
#line 269 "metalang.met"
                if (list){
#line 269 "metalang.met"
#line 269 "metalang.met"
                    _addlist3 = SonTree (_addlist3 ,2 );
#line 269 "metalang.met"
                } else {
#line 269 "metalang.met"
#line 269 "metalang.met"
                    list = _addlist3 ;
#line 269 "metalang.met"
                }
#line 269 "metalang.met"
                break;
#line 269 "metalang.met"
#line 270 "metalang.met"
            case LEXDEFINE : 
#line 270 "metalang.met"
#line 270 "metalang.met"
#line 270 "metalang.met"
                {
#line 270 "metalang.met"
                    PPTREE _ptTree0=0;
#line 270 "metalang.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(definition)(error_free), 6, metalang))== (PPTREE) -1 ) {
#line 270 "metalang.met"
                        MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
                        PROG_EXIT(langage_exit,"langage")
#line 270 "metalang.met"
                    }
#line 270 "metalang.met"
                    _addlist3 =AddList(_addlist3 , _ptTree0);
#line 270 "metalang.met"
                }
#line 270 "metalang.met"
#line 270 "metalang.met"
                if (list){
#line 270 "metalang.met"
#line 270 "metalang.met"
                    _addlist3 = SonTree (_addlist3 ,2 );
#line 270 "metalang.met"
                } else {
#line 270 "metalang.met"
#line 270 "metalang.met"
                    list = _addlist3 ;
#line 270 "metalang.met"
                }
#line 270 "metalang.met"
                break;
#line 270 "metalang.met"
#line 271 "metalang.met"
            case USE : 
#line 271 "metalang.met"
#line 271 "metalang.met"
#line 271 "metalang.met"
                {
#line 271 "metalang.met"
                    PPTREE _ptTree0=0;
#line 271 "metalang.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(grammar_use)(error_free), 12, metalang))== (PPTREE) -1 ) {
#line 271 "metalang.met"
                        MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
                        PROG_EXIT(langage_exit,"langage")
#line 271 "metalang.met"
                    }
#line 271 "metalang.met"
                    _addlist3 =AddList(_addlist3 , _ptTree0);
#line 271 "metalang.met"
                }
#line 271 "metalang.met"
#line 271 "metalang.met"
                if (list){
#line 271 "metalang.met"
#line 271 "metalang.met"
                    _addlist3 = SonTree (_addlist3 ,2 );
#line 271 "metalang.met"
                } else {
#line 271 "metalang.met"
#line 271 "metalang.met"
                    list = _addlist3 ;
#line 271 "metalang.met"
                }
#line 271 "metalang.met"
                break;
#line 271 "metalang.met"
#line 272 "metalang.met"
            case AOUVAOUV : 
#line 272 "metalang.met"
#line 272 "metalang.met"
#line 272 "metalang.met"
                {
#line 272 "metalang.met"
                    PPTREE _ptTree0=0;
#line 272 "metalang.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(asit)(error_free), 2, metalang))== (PPTREE) -1 ) {
#line 272 "metalang.met"
                        MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
                        PROG_EXIT(langage_exit,"langage")
#line 272 "metalang.met"
                    }
#line 272 "metalang.met"
                    _addlist3 =AddList(_addlist3 , _ptTree0);
#line 272 "metalang.met"
                }
#line 272 "metalang.met"
#line 272 "metalang.met"
                if (list){
#line 272 "metalang.met"
#line 272 "metalang.met"
                    _addlist3 = SonTree (_addlist3 ,2 );
#line 272 "metalang.met"
                } else {
#line 272 "metalang.met"
#line 272 "metalang.met"
                    list = _addlist3 ;
#line 272 "metalang.met"
                }
#line 272 "metalang.met"
                break;
#line 272 "metalang.met"
#line 277 "metalang.met"
            default : 
#line 277 "metalang.met"
#line 274 "metalang.met"
#line 276 "metalang.met"
                if (NPUSH_CALL_AFF_VERIF(nothing = ,_Tak(debut_proc), 4, metalang)){
#line 276 "metalang.met"
#line 276 "metalang.met"
                }
#line 276 "metalang.met"
#line 280 "metalang.met"
                dumperror ();
#line 280 "metalang.met"
#line 282 "metalang.met"
                (tokenAhead == 4|| (LexEndLine(),TRACE_LEX(1)));
#line 282 "metalang.met"
                if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 282 "metalang.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
                    TOKEN_EXIT(langage_exit,"END_LINE")
#line 282 "metalang.met"
                } else {
#line 282 "metalang.met"
                    tokenAhead = 0 ;
#line 282 "metalang.met"
                }
#line 282 "metalang.met"
#line 283 "metalang.met"
                 hasGotErrorMeta = 1 ;
#line 283 "metalang.met"
#line 284 "metalang.met"
                if (! (c == EOF )){
#line 284 "metalang.met"
#line 285 "metalang.met"
                     goto debut1 ;
#line 285 "metalang.met"
                }
#line 285 "metalang.met"
#line 285 "metalang.met"
                break;
#line 285 "metalang.met"
        }
#line 285 "metalang.met"
#line 285 "metalang.met"
#line 288 "metalang.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 288 "metalang.met"
#line 289 "metalang.met"
    ReplaceTree(langTree ,2 ,list );
#line 289 "metalang.met"
#line 290 "metalang.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POIN,"."))) && 
#line 290 "metalang.met"
       (! (c == EOF ))){
#line 290 "metalang.met"
#line 291 "metalang.met"
#line 293 "metalang.met"
        dumperror ();
#line 293 "metalang.met"
#line 295 "metalang.met"
        (tokenAhead == 4|| (LexEndLine(),TRACE_LEX(1)));
#line 295 "metalang.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 295 "metalang.met"
            MulFreeTree(7,_addlist1,_addlist2,_addlist3,langTree,list,listglobal,nothing);
            TOKEN_EXIT(langage_exit,"END_LINE")
#line 295 "metalang.met"
        } else {
#line 295 "metalang.met"
            tokenAhead = 0 ;
#line 295 "metalang.met"
        }
#line 295 "metalang.met"
#line 296 "metalang.met"
         hasGotErrorMeta = 1 ;
#line 296 "metalang.met"
#line 297 "metalang.met"
        if (! (c == EOF )){
#line 297 "metalang.met"
#line 298 "metalang.met"
             goto debut1 ;
#line 298 "metalang.met"
        }
#line 298 "metalang.met"
#line 298 "metalang.met"
#line 298 "metalang.met"
    }
#line 298 "metalang.met"
#line 300 "metalang.met"
    if (hasGotErrorMeta == 1 ){
#line 300 "metalang.met"
#line 301 "metalang.met"
         exit(-1);
#line 301 "metalang.met"
    }
#line 301 "metalang.met"
#line 302 "metalang.met"
    {
#line 302 "metalang.met"
        _retValue = langTree ;
#line 302 "metalang.met"
        goto langage_ret;
#line 302 "metalang.met"
        
#line 302 "metalang.met"
    }
#line 302 "metalang.met"
#line 302 "metalang.met"
#line 302 "metalang.met"

#line 303 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 303 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 303 "metalang.met"
return((PPTREE) 0);
#line 303 "metalang.met"

#line 303 "metalang.met"
langage_exit :
#line 303 "metalang.met"

#line 303 "metalang.met"
    _Debug = TRACE_RULE("langage",TRACE_EXIT,(PPTREE)0);
#line 303 "metalang.met"
    _funcLevel--;
#line 303 "metalang.met"
    return((PPTREE) -1) ;
#line 303 "metalang.met"

#line 303 "metalang.met"
langage_ret :
#line 303 "metalang.met"
    
#line 303 "metalang.met"
    _Debug = TRACE_RULE("langage",TRACE_RETURN,_retValue);
#line 303 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 303 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 303 "metalang.met"
    return _retValue ;
#line 303 "metalang.met"
}
#line 303 "metalang.met"

#line 303 "metalang.met"
