/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 805 "cplus.met"
PPTREE cplus::end_pragma ( int error_free)
#line 805 "cplus.met"
{
#line 805 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 805 "cplus.met"
    int _value,_nbPre = 0 ;
#line 805 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 805 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma",TRACE_ENTER,(PPTREE)0);
#line 805 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 805 "cplus.met"
#line 806 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 806 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 806 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_DIR")
#line 806 "cplus.met"
    } else {
#line 806 "cplus.met"
        tokenAhead = 0 ;
#line 806 "cplus.met"
    }
#line 806 "cplus.met"
#line 807 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 807 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_PRETTY,"PRAGMA_PRETTY") || !(CommTerm(),1)) {
#line 807 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_PRETTY")
#line 807 "cplus.met"
    } else {
#line 807 "cplus.met"
        tokenAhead = 0 ;
#line 807 "cplus.met"
    }
#line 807 "cplus.met"
#line 807 "cplus.met"
#line 807 "cplus.met"

#line 808 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 808 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 808 "cplus.met"
return((PPTREE) 0);
#line 808 "cplus.met"

#line 808 "cplus.met"
end_pragma_exit :
#line 808 "cplus.met"

#line 808 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_EXIT,(PPTREE)0);
#line 808 "cplus.met"
    _funcLevel--;
#line 808 "cplus.met"
    return((PPTREE) -1) ;
#line 808 "cplus.met"

#line 808 "cplus.met"
end_pragma_ret :
#line 808 "cplus.met"
    
#line 808 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_RETURN,_retValue);
#line 808 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 808 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 808 "cplus.met"
    return _retValue ;
#line 808 "cplus.met"
}
#line 808 "cplus.met"

#line 808 "cplus.met"
#line 1731 "cplus.met"
PPTREE cplus::enum_declarator ( int error_free)
#line 1731 "cplus.met"
{
#line 1731 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1731 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1731 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1731 "cplus.met"
    int _Debug = TRACE_RULE("enum_declarator",TRACE_ENTER,(PPTREE)0);
#line 1731 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1731 "cplus.met"
#line 1731 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1731 "cplus.met"
#line 1731 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1731 "cplus.met"
#line 1733 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1733 "cplus.met"
    if (  !SEE_TOKEN( ENUM,"enum") || !(CommTerm(),1)) {
#line 1733 "cplus.met"
        MulFreeTree(4,_addlist1,list,retTree,valTree);
        TOKEN_EXIT(enum_declarator_exit,"enum")
#line 1733 "cplus.met"
    } else {
#line 1733 "cplus.met"
        tokenAhead = 0 ;
#line 1733 "cplus.met"
    }
#line 1733 "cplus.met"
#line 1734 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1734 "cplus.met"
#line 1735 "cplus.met"
        {
#line 1735 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1735 "cplus.met"
            _ptRes0= MakeTree(ENUM, 2);
#line 1735 "cplus.met"
            {
#line 1735 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1735 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1735 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1735 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1735 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,list,retTree,valTree);
                    TOKEN_EXIT(enum_declarator_exit,"IDENT")
#line 1735 "cplus.met"
                } else {
#line 1735 "cplus.met"
                    tokenAhead = 0 ;
#line 1735 "cplus.met"
                }
#line 1735 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1735 "cplus.met"
                _ptTree0=_ptRes1;
#line 1735 "cplus.met"
            }
#line 1735 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1735 "cplus.met"
            retTree=_ptRes0;
#line 1735 "cplus.met"
        }
#line 1735 "cplus.met"
    } else {
#line 1735 "cplus.met"
#line 1737 "cplus.met"
        {
#line 1737 "cplus.met"
            PPTREE _ptRes0=0;
#line 1737 "cplus.met"
            _ptRes0= MakeTree(ENUM, 2);
#line 1737 "cplus.met"
            retTree=_ptRes0;
#line 1737 "cplus.met"
        }
#line 1737 "cplus.met"
    }
#line 1737 "cplus.met"
#line 1738 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 1738 "cplus.met"
#line 1739 "cplus.met"
#line 1739 "cplus.met"
        _addlist1 = list ;
#line 1739 "cplus.met"
#line 1740 "cplus.met"
        do {
#line 1740 "cplus.met"
#line 1741 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(enum_val), 53, cplus)){
#line 1741 "cplus.met"
#line 1742 "cplus.met"
#line 1742 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 1742 "cplus.met"
#line 1742 "cplus.met"
                if (list){
#line 1742 "cplus.met"
#line 1742 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1742 "cplus.met"
                } else {
#line 1742 "cplus.met"
#line 1742 "cplus.met"
                    list = _addlist1 ;
#line 1742 "cplus.met"
                }
#line 1742 "cplus.met"
            } else {
#line 1742 "cplus.met"
#line 1744 "cplus.met"
                
#line 1744 "cplus.met"
                MulFreeTree(4,_addlist1,list,retTree,valTree);
                LEX_EXIT ("",0);
#line 1744 "cplus.met"
                goto enum_declarator_exit;
#line 1744 "cplus.met"
            }
#line 1744 "cplus.met"
#line 1744 "cplus.met"
#line 1745 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 1745 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1745 "cplus.met"
#line 1746 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1746 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1746 "cplus.met"
            MulFreeTree(4,_addlist1,list,retTree,valTree);
            TOKEN_EXIT(enum_declarator_exit,"}")
#line 1746 "cplus.met"
        } else {
#line 1746 "cplus.met"
            tokenAhead = 0 ;
#line 1746 "cplus.met"
        }
#line 1746 "cplus.met"
#line 1747 "cplus.met"
        ReplaceTree(retTree ,2 ,list );
#line 1747 "cplus.met"
#line 1747 "cplus.met"
#line 1747 "cplus.met"
    }
#line 1747 "cplus.met"
#line 1749 "cplus.met"
    {
#line 1749 "cplus.met"
        _retValue = retTree ;
#line 1749 "cplus.met"
        goto enum_declarator_ret;
#line 1749 "cplus.met"
        
#line 1749 "cplus.met"
    }
#line 1749 "cplus.met"
#line 1749 "cplus.met"
#line 1749 "cplus.met"

#line 1750 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1750 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1750 "cplus.met"
return((PPTREE) 0);
#line 1750 "cplus.met"

#line 1750 "cplus.met"
enum_declarator_exit :
#line 1750 "cplus.met"

#line 1750 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_EXIT,(PPTREE)0);
#line 1750 "cplus.met"
    _funcLevel--;
#line 1750 "cplus.met"
    return((PPTREE) -1) ;
#line 1750 "cplus.met"

#line 1750 "cplus.met"
enum_declarator_ret :
#line 1750 "cplus.met"
    
#line 1750 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_RETURN,_retValue);
#line 1750 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1750 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1750 "cplus.met"
    return _retValue ;
#line 1750 "cplus.met"
}
#line 1750 "cplus.met"

#line 1750 "cplus.met"
#line 1721 "cplus.met"
PPTREE cplus::enum_val ( int error_free)
#line 1721 "cplus.met"
{
#line 1721 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1721 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1721 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1721 "cplus.met"
    int _Debug = TRACE_RULE("enum_val",TRACE_ENTER,(PPTREE)0);
#line 1721 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1721 "cplus.met"
#line 1721 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1721 "cplus.met"
#line 1723 "cplus.met"
    {
#line 1723 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1723 "cplus.met"
        _ptRes0= MakeTree(TYP_AFF, 2);
#line 1723 "cplus.met"
        {
#line 1723 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1723 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1723 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1723 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1723 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,valTree);
                TOKEN_EXIT(enum_val_exit,"IDENT")
#line 1723 "cplus.met"
            } else {
#line 1723 "cplus.met"
                tokenAhead = 0 ;
#line 1723 "cplus.met"
            }
#line 1723 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1723 "cplus.met"
            _ptTree0=_ptRes1;
#line 1723 "cplus.met"
        }
#line 1723 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1723 "cplus.met"
        valTree=_ptRes0;
#line 1723 "cplus.met"
    }
#line 1723 "cplus.met"
#line 1724 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 1724 "cplus.met"
#line 1725 "cplus.met"
        {
#line 1725 "cplus.met"
            PPTREE _ptTree0=0;
#line 1725 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 1725 "cplus.met"
                MulFreeTree(2,_ptTree0,valTree);
                PROG_EXIT(enum_val_exit,"enum_val")
#line 1725 "cplus.met"
            }
#line 1725 "cplus.met"
            ReplaceTree(valTree , 2 , _ptTree0);
#line 1725 "cplus.met"
        }
#line 1725 "cplus.met"
#line 1725 "cplus.met"
    }
#line 1725 "cplus.met"
#line 1726 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)){
#line 1726 "cplus.met"
#line 1726 "cplus.met"
    }
#line 1726 "cplus.met"
#line 1728 "cplus.met"
    {
#line 1728 "cplus.met"
        _retValue = valTree ;
#line 1728 "cplus.met"
        goto enum_val_ret;
#line 1728 "cplus.met"
        
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
enum_val_exit :
#line 1729 "cplus.met"

#line 1729 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_EXIT,(PPTREE)0);
#line 1729 "cplus.met"
    _funcLevel--;
#line 1729 "cplus.met"
    return((PPTREE) -1) ;
#line 1729 "cplus.met"

#line 1729 "cplus.met"
enum_val_ret :
#line 1729 "cplus.met"
    
#line 1729 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_RETURN,_retValue);
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
#line 2627 "cplus.met"
PPTREE cplus::equality_expression ( int error_free)
#line 2627 "cplus.met"
{
#line 2627 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2627 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2627 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2627 "cplus.met"
    int _Debug = TRACE_RULE("equality_expression",TRACE_ENTER,(PPTREE)0);
#line 2627 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2627 "cplus.met"
#line 2627 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2627 "cplus.met"
#line 2629 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(relational_expression)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2629 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2629 "cplus.met"
    }
#line 2629 "cplus.met"
#line 2630 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EGALEGAL,"==")) || 
#line 2630 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EXCLEGAL,"!="))) { 
#line 2630 "cplus.met"
#line 2631 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGALEGAL,"==") && (tokenAhead = 0,CommTerm(),1)){
#line 2631 "cplus.met"
#line 2632 "cplus.met"
            {
#line 2632 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2632 "cplus.met"
                _ptRes0= MakeTree(EQU, 2);
#line 2632 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2632 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2632 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2632 "cplus.met"
                }
#line 2632 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2632 "cplus.met"
                expTree=_ptRes0;
#line 2632 "cplus.met"
            }
#line 2632 "cplus.met"
        } else {
#line 2632 "cplus.met"
#line 2634 "cplus.met"
#line 2635 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2635 "cplus.met"
            if (  !SEE_TOKEN( EXCLEGAL,"!=") || !(CommTerm(),1)) {
#line 2635 "cplus.met"
                MulFreeTree(1,expTree);
                TOKEN_EXIT(equality_expression_exit,"!=")
#line 2635 "cplus.met"
            } else {
#line 2635 "cplus.met"
                tokenAhead = 0 ;
#line 2635 "cplus.met"
            }
#line 2635 "cplus.met"
#line 2636 "cplus.met"
            {
#line 2636 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2636 "cplus.met"
                _ptRes0= MakeTree(NEQU, 2);
#line 2636 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2636 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2636 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2636 "cplus.met"
                }
#line 2636 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2636 "cplus.met"
                expTree=_ptRes0;
#line 2636 "cplus.met"
            }
#line 2636 "cplus.met"
#line 2636 "cplus.met"
        }
#line 2636 "cplus.met"
    } 
#line 2636 "cplus.met"
#line 2638 "cplus.met"
    {
#line 2638 "cplus.met"
        _retValue = expTree ;
#line 2638 "cplus.met"
        goto equality_expression_ret;
#line 2638 "cplus.met"
        
#line 2638 "cplus.met"
    }
#line 2638 "cplus.met"
#line 2638 "cplus.met"
#line 2638 "cplus.met"

#line 2639 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2639 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2639 "cplus.met"
return((PPTREE) 0);
#line 2639 "cplus.met"

#line 2639 "cplus.met"
equality_expression_exit :
#line 2639 "cplus.met"

#line 2639 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_EXIT,(PPTREE)0);
#line 2639 "cplus.met"
    _funcLevel--;
#line 2639 "cplus.met"
    return((PPTREE) -1) ;
#line 2639 "cplus.met"

#line 2639 "cplus.met"
equality_expression_ret :
#line 2639 "cplus.met"
    
#line 2639 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_RETURN,_retValue);
#line 2639 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2639 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2639 "cplus.met"
    return _retValue ;
#line 2639 "cplus.met"
}
#line 2639 "cplus.met"

#line 2639 "cplus.met"
#line 1962 "cplus.met"
PPTREE cplus::exception ( int error_free)
#line 1962 "cplus.met"
{
#line 1962 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1962 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1962 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1962 "cplus.met"
    int _Debug = TRACE_RULE("exception",TRACE_ENTER,(PPTREE)0);
#line 1962 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1962 "cplus.met"
#line 1962 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1962 "cplus.met"
#line 1962 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1962 "cplus.met"
#line 1964 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1964 "cplus.met"
    if ( ! TERM_OR_META(TRY_UPPER,"TRY_UPPER") || !(CommTerm(),1)) {
#line 1964 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(exception_exit,"TRY_UPPER")
#line 1964 "cplus.met"
    } else {
#line 1964 "cplus.met"
        tokenAhead = 0 ;
#line 1964 "cplus.met"
    }
#line 1964 "cplus.met"
#line 1965 "cplus.met"
    {
#line 1965 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1965 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION, 2);
#line 1965 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1965 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            PROG_EXIT(exception_exit,"exception")
#line 1965 "cplus.met"
        }
#line 1965 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1965 "cplus.met"
        retTree=_ptRes0;
#line 1965 "cplus.met"
    }
#line 1965 "cplus.met"
#line 1965 "cplus.met"
    _addlist1 = list ;
#line 1965 "cplus.met"
#line 1966 "cplus.met"
    do {
#line 1966 "cplus.met"
#line 1967 "cplus.met"
        {
#line 1967 "cplus.met"
            PPTREE _ptTree0=0;
#line 1967 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(catch_unit)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 1967 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(exception_exit,"exception")
#line 1967 "cplus.met"
            }
#line 1967 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1967 "cplus.met"
        }
#line 1967 "cplus.met"
#line 1967 "cplus.met"
        if (list){
#line 1967 "cplus.met"
#line 1967 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1967 "cplus.met"
        } else {
#line 1967 "cplus.met"
#line 1967 "cplus.met"
            list = _addlist1 ;
#line 1967 "cplus.met"
        }
#line 1967 "cplus.met"
#line 1967 "cplus.met"
#line 1968 "cplus.met"
    } while ( !((((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH,"END_CATCH") && (tokenAhead = 0,CommTerm(),1)) || 
#line 1968 "cplus.met"
                ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH_ALL,"END_CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))) || 
#line 1968 "cplus.met"
               (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1968 "cplus.met"
#line 1969 "cplus.met"
    {
#line 1969 "cplus.met"
        PPTREE _ptTree0=0;
#line 1969 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1969 "cplus.met"
        _retValue =_ptTree0;
#line 1969 "cplus.met"
        goto exception_ret;
#line 1969 "cplus.met"
    }
#line 1969 "cplus.met"
#line 1969 "cplus.met"
#line 1969 "cplus.met"

#line 1970 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1970 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1970 "cplus.met"
return((PPTREE) 0);
#line 1970 "cplus.met"

#line 1970 "cplus.met"
exception_exit :
#line 1970 "cplus.met"

#line 1970 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_EXIT,(PPTREE)0);
#line 1970 "cplus.met"
    _funcLevel--;
#line 1970 "cplus.met"
    return((PPTREE) -1) ;
#line 1970 "cplus.met"

#line 1970 "cplus.met"
exception_ret :
#line 1970 "cplus.met"
    
#line 1970 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_RETURN,_retValue);
#line 1970 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1970 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1970 "cplus.met"
    return _retValue ;
#line 1970 "cplus.met"
}
#line 1970 "cplus.met"

#line 1970 "cplus.met"
#line 1993 "cplus.met"
PPTREE cplus::exception_ansi ( int error_free)
#line 1993 "cplus.met"
{
#line 1993 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1993 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1993 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1993 "cplus.met"
    int _Debug = TRACE_RULE("exception_ansi",TRACE_ENTER,(PPTREE)0);
#line 1993 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1993 "cplus.met"
#line 1993 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1993 "cplus.met"
#line 1993 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,elem = (PPTREE) 0;
#line 1993 "cplus.met"
#line 1995 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1995 "cplus.met"
    if (  !SEE_TOKEN( TRY,"try") || !(CommTerm(),1)) {
#line 1995 "cplus.met"
        MulFreeTree(4,_addlist1,elem,list,retTree);
        TOKEN_EXIT(exception_ansi_exit,"try")
#line 1995 "cplus.met"
    } else {
#line 1995 "cplus.met"
        tokenAhead = 0 ;
#line 1995 "cplus.met"
    }
#line 1995 "cplus.met"
#line 1996 "cplus.met"
    {
#line 1996 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1996 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION_ANSI, 2);
#line 1996 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1996 "cplus.met"
            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,elem,list,retTree);
            PROG_EXIT(exception_ansi_exit,"exception_ansi")
#line 1996 "cplus.met"
        }
#line 1996 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1996 "cplus.met"
        retTree=_ptRes0;
#line 1996 "cplus.met"
    }
#line 1996 "cplus.met"
#line 1996 "cplus.met"
    _addlist1 = list ;
#line 1996 "cplus.met"
#line 1997 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(elem = ,_Tak(catch_unit_ansi), 22, cplus)) { 
#line 1997 "cplus.met"
#line 1998 "cplus.met"
#line 1998 "cplus.met"
        _addlist1 =AddList(_addlist1 ,elem );
#line 1998 "cplus.met"
#line 1998 "cplus.met"
        if (list){
#line 1998 "cplus.met"
#line 1998 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1998 "cplus.met"
        } else {
#line 1998 "cplus.met"
#line 1998 "cplus.met"
            list = _addlist1 ;
#line 1998 "cplus.met"
        }
#line 1998 "cplus.met"
    } 
#line 1998 "cplus.met"
#line 1999 "cplus.met"
    {
#line 1999 "cplus.met"
        PPTREE _ptTree0=0;
#line 1999 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1999 "cplus.met"
        _retValue =_ptTree0;
#line 1999 "cplus.met"
        goto exception_ansi_ret;
#line 1999 "cplus.met"
    }
#line 1999 "cplus.met"
#line 1999 "cplus.met"
#line 1999 "cplus.met"

#line 2000 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2000 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2000 "cplus.met"
return((PPTREE) 0);
#line 2000 "cplus.met"

#line 2000 "cplus.met"
exception_ansi_exit :
#line 2000 "cplus.met"

#line 2000 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_EXIT,(PPTREE)0);
#line 2000 "cplus.met"
    _funcLevel--;
#line 2000 "cplus.met"
    return((PPTREE) -1) ;
#line 2000 "cplus.met"

#line 2000 "cplus.met"
exception_ansi_ret :
#line 2000 "cplus.met"
    
#line 2000 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_RETURN,_retValue);
#line 2000 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2000 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2000 "cplus.met"
    return _retValue ;
#line 2000 "cplus.met"
}
#line 2000 "cplus.met"

#line 2000 "cplus.met"
#line 3191 "cplus.met"
PPTREE cplus::exception_list ( int error_free)
#line 3191 "cplus.met"
{
#line 3191 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3191 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3191 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3191 "cplus.met"
    int _Debug = TRACE_RULE("exception_list",TRACE_ENTER,(PPTREE)0);
#line 3191 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3191 "cplus.met"
#line 3191 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3191 "cplus.met"
#line 3191 "cplus.met"
    PPTREE exceptionList = (PPTREE) 0;
#line 3191 "cplus.met"
#line 3193 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3193 "cplus.met"
    if (  !SEE_TOKEN( THROW,"throw") || !(CommTerm(),1)) {
#line 3193 "cplus.met"
        MulFreeTree(2,_addlist1,exceptionList);
        TOKEN_EXIT(exception_list_exit,"throw")
#line 3193 "cplus.met"
    } else {
#line 3193 "cplus.met"
        tokenAhead = 0 ;
#line 3193 "cplus.met"
    }
#line 3193 "cplus.met"
#line 3194 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3194 "cplus.met"
#line 3195 "cplus.met"
#line 3195 "cplus.met"
        _addlist1 = exceptionList ;
#line 3195 "cplus.met"
#line 3196 "cplus.met"
        do {
#line 3196 "cplus.met"
#line 3197 "cplus.met"
            {
#line 3197 "cplus.met"
                PPTREE _ptTree0=0;
#line 3197 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 3197 "cplus.met"
                    MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                    PROG_EXIT(exception_list_exit,"exception_list")
#line 3197 "cplus.met"
                }
#line 3197 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3197 "cplus.met"
            }
#line 3197 "cplus.met"
#line 3197 "cplus.met"
            if (exceptionList){
#line 3197 "cplus.met"
#line 3197 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3197 "cplus.met"
            } else {
#line 3197 "cplus.met"
#line 3197 "cplus.met"
                exceptionList = _addlist1 ;
#line 3197 "cplus.met"
            }
#line 3197 "cplus.met"
#line 3197 "cplus.met"
#line 3198 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3198 "cplus.met"
#line 3199 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3199 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3199 "cplus.met"
            MulFreeTree(2,_addlist1,exceptionList);
            TOKEN_EXIT(exception_list_exit,")")
#line 3199 "cplus.met"
        } else {
#line 3199 "cplus.met"
            tokenAhead = 0 ;
#line 3199 "cplus.met"
        }
#line 3199 "cplus.met"
#line 3199 "cplus.met"
#line 3199 "cplus.met"
    } else {
#line 3199 "cplus.met"
#line 3202 "cplus.met"
        {
#line 3202 "cplus.met"
            PPTREE _ptTree0=0;
#line 3202 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 3202 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                PROG_EXIT(exception_list_exit,"exception_list")
#line 3202 "cplus.met"
            }
#line 3202 "cplus.met"
            exceptionList =AddList(exceptionList , _ptTree0);
#line 3202 "cplus.met"
        }
#line 3202 "cplus.met"
    }
#line 3202 "cplus.met"
#line 3203 "cplus.met"
    {
#line 3203 "cplus.met"
        PPTREE _ptTree0=0;
#line 3203 "cplus.met"
        {
#line 3203 "cplus.met"
            PPTREE _ptRes1=0;
#line 3203 "cplus.met"
            _ptRes1= MakeTree(EXCEPTION_LIST, 1);
#line 3203 "cplus.met"
            ReplaceTree(_ptRes1, 1, exceptionList );
#line 3203 "cplus.met"
            _ptTree0=_ptRes1;
#line 3203 "cplus.met"
        }
#line 3203 "cplus.met"
        _retValue =_ptTree0;
#line 3203 "cplus.met"
        goto exception_list_ret;
#line 3203 "cplus.met"
    }
#line 3203 "cplus.met"
#line 3203 "cplus.met"
#line 3203 "cplus.met"

#line 3204 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3204 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3204 "cplus.met"
return((PPTREE) 0);
#line 3204 "cplus.met"

#line 3204 "cplus.met"
exception_list_exit :
#line 3204 "cplus.met"

#line 3204 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_EXIT,(PPTREE)0);
#line 3204 "cplus.met"
    _funcLevel--;
#line 3204 "cplus.met"
    return((PPTREE) -1) ;
#line 3204 "cplus.met"

#line 3204 "cplus.met"
exception_list_ret :
#line 3204 "cplus.met"
    
#line 3204 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_RETURN,_retValue);
#line 3204 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3204 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3204 "cplus.met"
    return _retValue ;
#line 3204 "cplus.met"
}
#line 3204 "cplus.met"

#line 3204 "cplus.met"
#line 2611 "cplus.met"
PPTREE cplus::exclusive_or_expression ( int error_free)
#line 2611 "cplus.met"
{
#line 2611 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2611 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2611 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2611 "cplus.met"
    int _Debug = TRACE_RULE("exclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2611 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2611 "cplus.met"
#line 2611 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2611 "cplus.met"
#line 2613 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2613 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2613 "cplus.met"
    }
#line 2613 "cplus.met"
#line 2614 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CHAP,"^") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2614 "cplus.met"
#line 2615 "cplus.met"
        {
#line 2615 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2615 "cplus.met"
            _ptRes0= MakeTree(LXOR, 2);
#line 2615 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2615 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2615 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
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
        goto exclusive_or_expression_ret;
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
exclusive_or_expression_exit :
#line 2617 "cplus.met"

#line 2617 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2617 "cplus.met"
    _funcLevel--;
#line 2617 "cplus.met"
    return((PPTREE) -1) ;
#line 2617 "cplus.met"

#line 2617 "cplus.met"
exclusive_or_expression_ret :
#line 2617 "cplus.met"
    
#line 2617 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_RETURN,_retValue);
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
#line 2531 "cplus.met"
PPTREE cplus::expression ( int error_free)
#line 2531 "cplus.met"
{
#line 2531 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2531 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2531 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2531 "cplus.met"
    int _Debug = TRACE_RULE("expression",TRACE_ENTER,(PPTREE)0);
#line 2531 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2531 "cplus.met"
#line 2531 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2531 "cplus.met"
#line 2531 "cplus.met"
    PPTREE expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2531 "cplus.met"
#line 2533 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2533 "cplus.met"
        MulFreeTree(3,_addlist1,expTree,list);
        PROG_EXIT(expression_exit,"expression")
#line 2533 "cplus.met"
    }
#line 2533 "cplus.met"
#line 2534 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,",")){
#line 2534 "cplus.met"
#line 2535 "cplus.met"
#line 2536 "cplus.met"
        list =AddList(list ,expTree );
#line 2536 "cplus.met"
#line 2536 "cplus.met"
        _addlist1 = list ;
#line 2536 "cplus.met"
#line 2537 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2537 "cplus.met"
#line 2538 "cplus.met"
#line 2538 "cplus.met"
            {
#line 2538 "cplus.met"
                PPTREE _ptTree0=0;
#line 2538 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2538 "cplus.met"
                    MulFreeTree(4,_ptTree0,_addlist1,expTree,list);
                    PROG_EXIT(expression_exit,"expression")
#line 2538 "cplus.met"
                }
#line 2538 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2538 "cplus.met"
            }
#line 2538 "cplus.met"
#line 2538 "cplus.met"
            if (list){
#line 2538 "cplus.met"
#line 2538 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2538 "cplus.met"
            } else {
#line 2538 "cplus.met"
#line 2538 "cplus.met"
                list = _addlist1 ;
#line 2538 "cplus.met"
            }
#line 2538 "cplus.met"
        } 
#line 2538 "cplus.met"
#line 2539 "cplus.met"
        {
#line 2539 "cplus.met"
            PPTREE _ptTree0=0;
#line 2539 "cplus.met"
            {
#line 2539 "cplus.met"
                PPTREE _ptRes1=0;
#line 2539 "cplus.met"
                _ptRes1= MakeTree(EXP_SEQ, 1);
#line 2539 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2539 "cplus.met"
                _ptTree0=_ptRes1;
#line 2539 "cplus.met"
            }
#line 2539 "cplus.met"
            _retValue =_ptTree0;
#line 2539 "cplus.met"
            goto expression_ret;
#line 2539 "cplus.met"
        }
#line 2539 "cplus.met"
#line 2539 "cplus.met"
#line 2539 "cplus.met"
    } else {
#line 2539 "cplus.met"
#line 2542 "cplus.met"
        {
#line 2542 "cplus.met"
            _retValue = expTree ;
#line 2542 "cplus.met"
            goto expression_ret;
#line 2542 "cplus.met"
            
#line 2542 "cplus.met"
        }
#line 2542 "cplus.met"
    }
#line 2542 "cplus.met"
#line 2542 "cplus.met"
#line 2542 "cplus.met"

#line 2543 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2543 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2543 "cplus.met"
return((PPTREE) 0);
#line 2543 "cplus.met"

#line 2543 "cplus.met"
expression_exit :
#line 2543 "cplus.met"

#line 2543 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_EXIT,(PPTREE)0);
#line 2543 "cplus.met"
    _funcLevel--;
#line 2543 "cplus.met"
    return((PPTREE) -1) ;
#line 2543 "cplus.met"

#line 2543 "cplus.met"
expression_ret :
#line 2543 "cplus.met"
    
#line 2543 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_RETURN,_retValue);
#line 2543 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2543 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2543 "cplus.met"
    return _retValue ;
#line 2543 "cplus.met"
}
#line 2543 "cplus.met"

#line 2543 "cplus.met"
#line 3269 "cplus.met"
PPTREE cplus::expression_for ( int error_free)
#line 3269 "cplus.met"
{
#line 3269 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3269 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3269 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3269 "cplus.met"
    int _Debug = TRACE_RULE("expression_for",TRACE_ENTER,(PPTREE)0);
#line 3269 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3269 "cplus.met"
#line 3269 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3269 "cplus.met"
#line 3271 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3271 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(expression_for_exit,"expression_for")
#line 3271 "cplus.met"
    }
#line 3271 "cplus.met"
#line 3272 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PVIR,";"))){
#line 3272 "cplus.met"
#line 3273 "cplus.met"
        
#line 3273 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 3273 "cplus.met"
        goto expression_for_exit;
#line 3273 "cplus.met"
#line 3273 "cplus.met"
    }
#line 3273 "cplus.met"
#line 3274 "cplus.met"
    {
#line 3274 "cplus.met"
        _retValue = retTree ;
#line 3274 "cplus.met"
        goto expression_for_ret;
#line 3274 "cplus.met"
        
#line 3274 "cplus.met"
    }
#line 3274 "cplus.met"
#line 3274 "cplus.met"
#line 3274 "cplus.met"

#line 3275 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3275 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3275 "cplus.met"
return((PPTREE) 0);
#line 3275 "cplus.met"

#line 3275 "cplus.met"
expression_for_exit :
#line 3275 "cplus.met"

#line 3275 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_EXIT,(PPTREE)0);
#line 3275 "cplus.met"
    _funcLevel--;
#line 3275 "cplus.met"
    return((PPTREE) -1) ;
#line 3275 "cplus.met"

#line 3275 "cplus.met"
expression_for_ret :
#line 3275 "cplus.met"
    
#line 3275 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_RETURN,_retValue);
#line 3275 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3275 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3275 "cplus.met"
    return _retValue ;
#line 3275 "cplus.met"
}
#line 3275 "cplus.met"

#line 3275 "cplus.met"
#line 1063 "cplus.met"
PPTREE cplus::ext_all ( int error_free)
#line 1063 "cplus.met"
{
#line 1063 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1063 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1063 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1063 "cplus.met"
    int _Debug = TRACE_RULE("ext_all",TRACE_ENTER,(PPTREE)0);
#line 1063 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1063 "cplus.met"
#line 1063 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1063 "cplus.met"
#line 1065 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all_no_linkage), 63, cplus)){
#line 1065 "cplus.met"
#line 1066 "cplus.met"
        {
#line 1066 "cplus.met"
            _retValue = retTree ;
#line 1066 "cplus.met"
            goto ext_all_ret;
#line 1066 "cplus.met"
            
#line 1066 "cplus.met"
        }
#line 1066 "cplus.met"
    } else {
#line 1066 "cplus.met"
#line 1068 "cplus.met"
        {
#line 1068 "cplus.met"
            PPTREE _ptTree0=0;
#line 1068 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(linkage_specification)(error_free), 84, cplus))== (PPTREE) -1 ) {
#line 1068 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(ext_all_exit,"ext_all")
#line 1068 "cplus.met"
            }
#line 1068 "cplus.met"
            _retValue =_ptTree0;
#line 1068 "cplus.met"
            goto ext_all_ret;
#line 1068 "cplus.met"
        }
#line 1068 "cplus.met"
    }
#line 1068 "cplus.met"
#line 1068 "cplus.met"
#line 1068 "cplus.met"

#line 1069 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1069 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1069 "cplus.met"
return((PPTREE) 0);
#line 1069 "cplus.met"

#line 1069 "cplus.met"
ext_all_exit :
#line 1069 "cplus.met"

#line 1069 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_EXIT,(PPTREE)0);
#line 1069 "cplus.met"
    _funcLevel--;
#line 1069 "cplus.met"
    return((PPTREE) -1) ;
#line 1069 "cplus.met"

#line 1069 "cplus.met"
ext_all_ret :
#line 1069 "cplus.met"
    
#line 1069 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_RETURN,_retValue);
#line 1069 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1069 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1069 "cplus.met"
    return _retValue ;
#line 1069 "cplus.met"
}
#line 1069 "cplus.met"

#line 1069 "cplus.met"
#line 1071 "cplus.met"
PPTREE cplus::ext_all_ext ( int error_free)
#line 1071 "cplus.met"
{
#line 1071 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1071 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1071 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1071 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_ext",TRACE_ENTER,(PPTREE)0);
#line 1071 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1071 "cplus.met"
#line 1071 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1071 "cplus.met"
#line 1073 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(protect_declare), 110, cplus))){
#line 1073 "cplus.met"
#line 1074 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_all)(error_free), 61, cplus))== (PPTREE) -1 ) {
#line 1074 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_all_ext_exit,"ext_all_ext")
#line 1074 "cplus.met"
        }
#line 1074 "cplus.met"
    }
#line 1074 "cplus.met"
#line 1075 "cplus.met"
    {
#line 1075 "cplus.met"
        _retValue = retTree ;
#line 1075 "cplus.met"
        goto ext_all_ext_ret;
#line 1075 "cplus.met"
        
#line 1075 "cplus.met"
    }
#line 1075 "cplus.met"
#line 1075 "cplus.met"
#line 1075 "cplus.met"

#line 1076 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1076 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1076 "cplus.met"
return((PPTREE) 0);
#line 1076 "cplus.met"

#line 1076 "cplus.met"
ext_all_ext_exit :
#line 1076 "cplus.met"

#line 1076 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_EXIT,(PPTREE)0);
#line 1076 "cplus.met"
    _funcLevel--;
#line 1076 "cplus.met"
    return((PPTREE) -1) ;
#line 1076 "cplus.met"

#line 1076 "cplus.met"
ext_all_ext_ret :
#line 1076 "cplus.met"
    
#line 1076 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_RETURN,_retValue);
#line 1076 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1076 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1076 "cplus.met"
    return _retValue ;
#line 1076 "cplus.met"
}
#line 1076 "cplus.met"

#line 1076 "cplus.met"
#line 1039 "cplus.met"
PPTREE cplus::ext_all_no_linkage ( int error_free)
#line 1039 "cplus.met"
{
#line 1039 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1039 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1039 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1039 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_ENTER,(PPTREE)0);
#line 1039 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1039 "cplus.met"
#line 1039 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1039 "cplus.met"
#line 1039 "cplus.met"
    PPTREE decl = (PPTREE) 0,listTemp = (PPTREE) 0;
#line 1039 "cplus.met"
#line 1041 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TEMPLATE,"template") && (tokenAhead = 0,CommTerm(),1)){
#line 1041 "cplus.met"
#line 1042 "cplus.met"
#line 1043 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1043 "cplus.met"
        if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1043 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,"<")
#line 1043 "cplus.met"
        } else {
#line 1043 "cplus.met"
            tokenAhead = 0 ;
#line 1043 "cplus.met"
        }
#line 1043 "cplus.met"
#line 1043 "cplus.met"
        _addlist1 = listTemp ;
#line 1043 "cplus.met"
#line 1044 "cplus.met"
        do {
#line 1044 "cplus.met"
#line 1045 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1045 "cplus.met"
            switch( lexEl.Value) {
#line 1045 "cplus.met"
#line 1046 "cplus.met"
                case CLASS : 
#line 1046 "cplus.met"
                    tokenAhead = 0 ;
#line 1046 "cplus.met"
                    CommTerm();
#line 1046 "cplus.met"
#line 1046 "cplus.met"
#line 1046 "cplus.met"
                    {
#line 1046 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1046 "cplus.met"
                        {
#line 1046 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 1046 "cplus.met"
                            _ptRes1= MakeTree(CLASS_PARAM, 1);
#line 1046 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus))== (PPTREE) -1 ) {
#line 1046 "cplus.met"
                                MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1046 "cplus.met"
                            }
#line 1046 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1046 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1046 "cplus.met"
                        }
#line 1046 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1046 "cplus.met"
                    }
#line 1046 "cplus.met"
#line 1046 "cplus.met"
                    if (listTemp){
#line 1046 "cplus.met"
#line 1046 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1046 "cplus.met"
                    } else {
#line 1046 "cplus.met"
#line 1046 "cplus.met"
                        listTemp = _addlist1 ;
#line 1046 "cplus.met"
                    }
#line 1046 "cplus.met"
                    break;
#line 1046 "cplus.met"
#line 1048 "cplus.met"
                default : 
#line 1048 "cplus.met"
#line 1048 "cplus.met"
#line 1048 "cplus.met"
                    {
#line 1048 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1048 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus))== (PPTREE) -1 ) {
#line 1048 "cplus.met"
                            MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                            PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1048 "cplus.met"
                        }
#line 1048 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1048 "cplus.met"
                    }
#line 1048 "cplus.met"
#line 1048 "cplus.met"
                    if (listTemp){
#line 1048 "cplus.met"
#line 1048 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1048 "cplus.met"
                    } else {
#line 1048 "cplus.met"
#line 1048 "cplus.met"
                        listTemp = _addlist1 ;
#line 1048 "cplus.met"
                    }
#line 1048 "cplus.met"
                    break;
#line 1048 "cplus.met"
            }
#line 1048 "cplus.met"
#line 1048 "cplus.met"
#line 1050 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1050 "cplus.met"
#line 1051 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1051 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1051 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,">")
#line 1051 "cplus.met"
        } else {
#line 1051 "cplus.met"
            tokenAhead = 0 ;
#line 1051 "cplus.met"
        }
#line 1051 "cplus.met"
#line 1052 "cplus.met"
        {
#line 1052 "cplus.met"
            PPTREE _ptTree0=0;
#line 1052 "cplus.met"
            {
#line 1052 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1052 "cplus.met"
                _ptRes1= MakeTree(TEMPLATE_DECL, 2);
#line 1052 "cplus.met"
                ReplaceTree(_ptRes1, 1, listTemp );
#line 1052 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all_no_linkage)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1052 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                    PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1052 "cplus.met"
                }
#line 1052 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1052 "cplus.met"
                _ptTree0=_ptRes1;
#line 1052 "cplus.met"
            }
#line 1052 "cplus.met"
            _retValue =_ptTree0;
#line 1052 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1052 "cplus.met"
        }
#line 1052 "cplus.met"
#line 1052 "cplus.met"
#line 1052 "cplus.met"
    }
#line 1052 "cplus.met"
#line 1054 "cplus.met"
    if ((((NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_data_declaration), 68, cplus)) || 
#line 1054 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(func_declaration), 73, cplus))) || 
#line 1054 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_decl_dir), 69, cplus))) || 
#line 1054 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(asm_declaration), 13, cplus))){
#line 1054 "cplus.met"
#line 1058 "cplus.met"
        {
#line 1058 "cplus.met"
            _retValue = decl ;
#line 1058 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1058 "cplus.met"
            
#line 1058 "cplus.met"
        }
#line 1058 "cplus.met"
    } else {
#line 1058 "cplus.met"
#line 1060 "cplus.met"
        {
#line 1060 "cplus.met"
            PPTREE _ptTree0=0;
#line 1060 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declaration)(error_free), 73, cplus))== (PPTREE) -1 ) {
#line 1060 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1060 "cplus.met"
            }
#line 1060 "cplus.met"
            _retValue =_ptTree0;
#line 1060 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1060 "cplus.met"
        }
#line 1060 "cplus.met"
    }
#line 1060 "cplus.met"
#line 1060 "cplus.met"
#line 1060 "cplus.met"

#line 1061 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1061 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1061 "cplus.met"
return((PPTREE) 0);
#line 1061 "cplus.met"

#line 1061 "cplus.met"
ext_all_no_linkage_exit :
#line 1061 "cplus.met"

#line 1061 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_EXIT,(PPTREE)0);
#line 1061 "cplus.met"
    _funcLevel--;
#line 1061 "cplus.met"
    return((PPTREE) -1) ;
#line 1061 "cplus.met"

#line 1061 "cplus.met"
ext_all_no_linkage_ret :
#line 1061 "cplus.met"
    
#line 1061 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_RETURN,_retValue);
#line 1061 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1061 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1061 "cplus.met"
    return _retValue ;
#line 1061 "cplus.met"
}
#line 1061 "cplus.met"

#line 1061 "cplus.met"
#line 1544 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty ( int error_free)
#line 1544 "cplus.met"
{
#line 1544 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1544 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1544 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1544 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_ENTER,(PPTREE)0);
#line 1544 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1544 "cplus.met"
#line 1544 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1544 "cplus.met"
#line 1546 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_data_decl_sc_ty_full), 65, cplus))){
#line 1546 "cplus.met"
#line 1547 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty_short)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1547 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_exit,"ext_data_decl_sc_ty")
#line 1547 "cplus.met"
        }
#line 1547 "cplus.met"
    }
#line 1547 "cplus.met"
#line 1548 "cplus.met"
    {
#line 1548 "cplus.met"
        _retValue = retTree ;
#line 1548 "cplus.met"
        goto ext_data_decl_sc_ty_ret;
#line 1548 "cplus.met"
        
#line 1548 "cplus.met"
    }
#line 1548 "cplus.met"
#line 1548 "cplus.met"
#line 1548 "cplus.met"

#line 1549 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1549 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1549 "cplus.met"
return((PPTREE) 0);
#line 1549 "cplus.met"

#line 1549 "cplus.met"
ext_data_decl_sc_ty_exit :
#line 1549 "cplus.met"

#line 1549 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_EXIT,(PPTREE)0);
#line 1549 "cplus.met"
    _funcLevel--;
#line 1549 "cplus.met"
    return((PPTREE) -1) ;
#line 1549 "cplus.met"

#line 1549 "cplus.met"
ext_data_decl_sc_ty_ret :
#line 1549 "cplus.met"
    
#line 1549 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_RETURN,_retValue);
#line 1549 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1549 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1549 "cplus.met"
    return _retValue ;
#line 1549 "cplus.met"
}
#line 1549 "cplus.met"

#line 1549 "cplus.met"
#line 1525 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_full ( int error_free)
#line 1525 "cplus.met"
{
#line 1525 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1525 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1525 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1525 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_ENTER,(PPTREE)0);
#line 1525 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1525 "cplus.met"
#line 1525 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1525 "cplus.met"
#line 1527 "cplus.met"
    {
#line 1527 "cplus.met"
        PPTREE _ptRes0=0;
#line 1527 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1527 "cplus.met"
        retTree=_ptRes0;
#line 1527 "cplus.met"
    }
#line 1527 "cplus.met"
#line 1528 "cplus.met"
    {
#line 1528 "cplus.met"
        PPTREE _ptTree0=0;
#line 1528 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 1528 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1528 "cplus.met"
        }
#line 1528 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1528 "cplus.met"
    }
#line 1528 "cplus.met"
#line 1529 "cplus.met"
    {
#line 1529 "cplus.met"
        PPTREE _ptTree0=0;
#line 1529 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1529 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1529 "cplus.met"
        }
#line 1529 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1529 "cplus.met"
    }
#line 1529 "cplus.met"
#line 1530 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1530 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1530 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_full_exit,";")
#line 1530 "cplus.met"
    } else {
#line 1530 "cplus.met"
        tokenAhead = 0 ;
#line 1530 "cplus.met"
    }
#line 1530 "cplus.met"
#line 1531 "cplus.met"
    {
#line 1531 "cplus.met"
        _retValue = retTree ;
#line 1531 "cplus.met"
        goto ext_data_decl_sc_ty_full_ret;
#line 1531 "cplus.met"
        
#line 1531 "cplus.met"
    }
#line 1531 "cplus.met"
#line 1531 "cplus.met"
#line 1531 "cplus.met"

#line 1532 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1532 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1532 "cplus.met"
return((PPTREE) 0);
#line 1532 "cplus.met"

#line 1532 "cplus.met"
ext_data_decl_sc_ty_full_exit :
#line 1532 "cplus.met"

#line 1532 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_EXIT,(PPTREE)0);
#line 1532 "cplus.met"
    _funcLevel--;
#line 1532 "cplus.met"
    return((PPTREE) -1) ;
#line 1532 "cplus.met"

#line 1532 "cplus.met"
ext_data_decl_sc_ty_full_ret :
#line 1532 "cplus.met"
    
#line 1532 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_RETURN,_retValue);
#line 1532 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1532 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1532 "cplus.met"
    return _retValue ;
#line 1532 "cplus.met"
}
#line 1532 "cplus.met"

#line 1532 "cplus.met"
#line 1535 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_short ( int error_free)
#line 1535 "cplus.met"
{
#line 1535 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1535 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1535 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1535 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_ENTER,(PPTREE)0);
#line 1535 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1535 "cplus.met"
#line 1535 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1535 "cplus.met"
#line 1537 "cplus.met"
    {
#line 1537 "cplus.met"
        PPTREE _ptRes0=0;
#line 1537 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1537 "cplus.met"
        retTree=_ptRes0;
#line 1537 "cplus.met"
    }
#line 1537 "cplus.met"
#line 1538 "cplus.met"
    {
#line 1538 "cplus.met"
        PPTREE _ptTree0=0;
#line 1538 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1538 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_short_exit,"ext_data_decl_sc_ty_short")
#line 1538 "cplus.met"
        }
#line 1538 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1538 "cplus.met"
    }
#line 1538 "cplus.met"
#line 1539 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1539 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1539 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_short_exit,";")
#line 1539 "cplus.met"
    } else {
#line 1539 "cplus.met"
        tokenAhead = 0 ;
#line 1539 "cplus.met"
    }
#line 1539 "cplus.met"
#line 1540 "cplus.met"
    {
#line 1540 "cplus.met"
        _retValue = retTree ;
#line 1540 "cplus.met"
        goto ext_data_decl_sc_ty_short_ret;
#line 1540 "cplus.met"
        
#line 1540 "cplus.met"
    }
#line 1540 "cplus.met"
#line 1540 "cplus.met"
#line 1540 "cplus.met"

#line 1541 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1541 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1541 "cplus.met"
return((PPTREE) 0);
#line 1541 "cplus.met"

#line 1541 "cplus.met"
ext_data_decl_sc_ty_short_exit :
#line 1541 "cplus.met"

#line 1541 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_EXIT,(PPTREE)0);
#line 1541 "cplus.met"
    _funcLevel--;
#line 1541 "cplus.met"
    return((PPTREE) -1) ;
#line 1541 "cplus.met"

#line 1541 "cplus.met"
ext_data_decl_sc_ty_short_ret :
#line 1541 "cplus.met"
    
#line 1541 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_RETURN,_retValue);
#line 1541 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1541 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1541 "cplus.met"
    return _retValue ;
#line 1541 "cplus.met"
}
#line 1541 "cplus.met"

#line 1541 "cplus.met"
#line 1551 "cplus.met"
PPTREE cplus::ext_data_decl_simp ( int error_free)
#line 1551 "cplus.met"
{
#line 1551 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1551 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1551 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1551 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_ENTER,(PPTREE)0);
#line 1551 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1551 "cplus.met"
#line 1551 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1551 "cplus.met"
#line 1553 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration), 38, cplus))){
#line 1553 "cplus.met"
#line 1554 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty)(error_free), 64, cplus))== (PPTREE) -1 ) {
#line 1554 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_simp_exit,"ext_data_decl_simp")
#line 1554 "cplus.met"
        }
#line 1554 "cplus.met"
    }
#line 1554 "cplus.met"
#line 1555 "cplus.met"
    {
#line 1555 "cplus.met"
        _retValue = retTree ;
#line 1555 "cplus.met"
        goto ext_data_decl_simp_ret;
#line 1555 "cplus.met"
        
#line 1555 "cplus.met"
    }
#line 1555 "cplus.met"
#line 1555 "cplus.met"
#line 1555 "cplus.met"

#line 1556 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1556 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1556 "cplus.met"
return((PPTREE) 0);
#line 1556 "cplus.met"

#line 1556 "cplus.met"
ext_data_decl_simp_exit :
#line 1556 "cplus.met"

#line 1556 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_EXIT,(PPTREE)0);
#line 1556 "cplus.met"
    _funcLevel--;
#line 1556 "cplus.met"
    return((PPTREE) -1) ;
#line 1556 "cplus.met"

#line 1556 "cplus.met"
ext_data_decl_simp_ret :
#line 1556 "cplus.met"
    
#line 1556 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_RETURN,_retValue);
#line 1556 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1556 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1556 "cplus.met"
    return _retValue ;
#line 1556 "cplus.met"
}
#line 1556 "cplus.met"

#line 1556 "cplus.met"
#line 1566 "cplus.met"
PPTREE cplus::ext_data_declaration ( int error_free)
#line 1566 "cplus.met"
{
#line 1566 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1566 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1566 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1566 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1566 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1566 "cplus.met"
#line 1566 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1566 "cplus.met"
#line 1568 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1568 "cplus.met"
    switch( lexEl.Value) {
#line 1568 "cplus.met"
#line 1569 "cplus.met"
        case TYPEDEF : 
#line 1569 "cplus.met"
            tokenAhead = 0 ;
#line 1569 "cplus.met"
            CommTerm();
#line 1569 "cplus.met"
#line 1570 "cplus.met"
#line 1571 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(typedef_and_declarator), 143, cplus))){
#line 1571 "cplus.met"
#line 1572 "cplus.met"
                {
#line 1572 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1572 "cplus.met"
                    _ptRes0= MakeTree(TYPEDEF, 2);
#line 1572 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 1572 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1572 "cplus.met"
                    }
#line 1572 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1572 "cplus.met"
                    retTree=_ptRes0;
#line 1572 "cplus.met"
                }
#line 1572 "cplus.met"
            }
#line 1572 "cplus.met"
#line 1573 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1573 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1573 "cplus.met"
                MulFreeTree(1,retTree);
                TOKEN_EXIT(ext_data_declaration_exit,";")
#line 1573 "cplus.met"
            } else {
#line 1573 "cplus.met"
                tokenAhead = 0 ;
#line 1573 "cplus.met"
            }
#line 1573 "cplus.met"
#line 1574 "cplus.met"
            {
#line 1574 "cplus.met"
                _retValue = retTree ;
#line 1574 "cplus.met"
                goto ext_data_declaration_ret;
#line 1574 "cplus.met"
                
#line 1574 "cplus.met"
            }
#line 1574 "cplus.met"
#line 1574 "cplus.met"
            break;
#line 1574 "cplus.met"
#line 1576 "cplus.met"
        case NAMESPACE : 
#line 1576 "cplus.met"
#line 1576 "cplus.met"
            {
#line 1576 "cplus.met"
                PPTREE _ptTree0=0;
#line 1576 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 1576 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1576 "cplus.met"
                }
#line 1576 "cplus.met"
                _retValue =_ptTree0;
#line 1576 "cplus.met"
                goto ext_data_declaration_ret;
#line 1576 "cplus.met"
            }
#line 1576 "cplus.met"
            break;
#line 1576 "cplus.met"
#line 1577 "cplus.met"
        case USING : 
#line 1577 "cplus.met"
#line 1577 "cplus.met"
            {
#line 1577 "cplus.met"
                PPTREE _ptTree0=0;
#line 1577 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 1577 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1577 "cplus.met"
                }
#line 1577 "cplus.met"
                _retValue =_ptTree0;
#line 1577 "cplus.met"
                goto ext_data_declaration_ret;
#line 1577 "cplus.met"
            }
#line 1577 "cplus.met"
            break;
#line 1577 "cplus.met"
#line 1578 "cplus.met"
        case PVIR : 
#line 1578 "cplus.met"
            tokenAhead = 0 ;
#line 1578 "cplus.met"
            CommTerm();
#line 1578 "cplus.met"
#line 1578 "cplus.met"
            {
#line 1578 "cplus.met"
                PPTREE _ptTree0=0;
#line 1578 "cplus.met"
                {
#line 1578 "cplus.met"
                    PPTREE _ptRes1=0;
#line 1578 "cplus.met"
                    _ptRes1= MakeTree(STAT_VOID, 0);
#line 1578 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1578 "cplus.met"
                }
#line 1578 "cplus.met"
                _retValue =_ptTree0;
#line 1578 "cplus.met"
                goto ext_data_declaration_ret;
#line 1578 "cplus.met"
            }
#line 1578 "cplus.met"
            break;
#line 1578 "cplus.met"
#line 1579 "cplus.met"
        default : 
#line 1579 "cplus.met"
#line 1579 "cplus.met"
            {
#line 1579 "cplus.met"
                PPTREE _ptTree0=0;
#line 1579 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1579 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1579 "cplus.met"
                }
#line 1579 "cplus.met"
                _retValue =_ptTree0;
#line 1579 "cplus.met"
                goto ext_data_declaration_ret;
#line 1579 "cplus.met"
            }
#line 1579 "cplus.met"
            break;
#line 1579 "cplus.met"
    }
#line 1579 "cplus.met"
#line 1579 "cplus.met"
#line 1580 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1580 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1580 "cplus.met"
return((PPTREE) 0);
#line 1580 "cplus.met"

#line 1580 "cplus.met"
ext_data_declaration_exit :
#line 1580 "cplus.met"

#line 1580 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1580 "cplus.met"
    _funcLevel--;
#line 1580 "cplus.met"
    return((PPTREE) -1) ;
#line 1580 "cplus.met"

#line 1580 "cplus.met"
ext_data_declaration_ret :
#line 1580 "cplus.met"
    
#line 1580 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_RETURN,_retValue);
#line 1580 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1580 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1580 "cplus.met"
    return _retValue ;
#line 1580 "cplus.met"
}
#line 1580 "cplus.met"

#line 1580 "cplus.met"
#line 1256 "cplus.met"
PPTREE cplus::ext_decl_dir ( int error_free)
#line 1256 "cplus.met"
{
#line 1256 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1256 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1256 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1256 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_dir",TRACE_ENTER,(PPTREE)0);
#line 1256 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1256 "cplus.met"
#line 1256 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1256 "cplus.met"
#line 1258 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 50, cplus)){
#line 1258 "cplus.met"
#line 1259 "cplus.met"
        {
#line 1259 "cplus.met"
            _retValue = retTree ;
#line 1259 "cplus.met"
            goto ext_decl_dir_ret;
#line 1259 "cplus.met"
            
#line 1259 "cplus.met"
        }
#line 1259 "cplus.met"
    }
#line 1259 "cplus.met"
#line 1260 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1260 "cplus.met"
    switch( lexEl.Value) {
#line 1260 "cplus.met"
#line 1261 "cplus.met"
        case META : 
#line 1261 "cplus.met"
        case IF_DIR : 
#line 1261 "cplus.met"
            tokenAhead = 0 ;
#line 1261 "cplus.met"
            CommTerm();
#line 1261 "cplus.met"
#line 1261 "cplus.met"
            {
#line 1261 "cplus.met"
                PPTREE _ptTree0=0;
#line 1261 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1261 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1261 "cplus.met"
                }
#line 1261 "cplus.met"
                _retValue =_ptTree0;
#line 1261 "cplus.met"
                goto ext_decl_dir_ret;
#line 1261 "cplus.met"
            }
#line 1261 "cplus.met"
            break;
#line 1261 "cplus.met"
#line 1262 "cplus.met"
        case IFDEF_DIR : 
#line 1262 "cplus.met"
#line 1262 "cplus.met"
            {
#line 1262 "cplus.met"
                PPTREE _ptTree0=0;
#line 1262 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1262 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1262 "cplus.met"
                }
#line 1262 "cplus.met"
                _retValue =_ptTree0;
#line 1262 "cplus.met"
                goto ext_decl_dir_ret;
#line 1262 "cplus.met"
            }
#line 1262 "cplus.met"
            break;
#line 1262 "cplus.met"
#line 1263 "cplus.met"
        case IFNDEF_DIR : 
#line 1263 "cplus.met"
#line 1263 "cplus.met"
            {
#line 1263 "cplus.met"
                PPTREE _ptTree0=0;
#line 1263 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1263 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1263 "cplus.met"
                }
#line 1263 "cplus.met"
                _retValue =_ptTree0;
#line 1263 "cplus.met"
                goto ext_decl_dir_ret;
#line 1263 "cplus.met"
            }
#line 1263 "cplus.met"
            break;
#line 1263 "cplus.met"
        default :
#line 1263 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(ext_decl_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1263 "cplus.met"
            break;
#line 1263 "cplus.met"
    }
#line 1263 "cplus.met"
#line 1263 "cplus.met"
#line 1264 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1264 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1264 "cplus.met"
return((PPTREE) 0);
#line 1264 "cplus.met"

#line 1264 "cplus.met"
ext_decl_dir_exit :
#line 1264 "cplus.met"

#line 1264 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_EXIT,(PPTREE)0);
#line 1264 "cplus.met"
    _funcLevel--;
#line 1264 "cplus.met"
    return((PPTREE) -1) ;
#line 1264 "cplus.met"

#line 1264 "cplus.met"
ext_decl_dir_ret :
#line 1264 "cplus.met"
    
#line 1264 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_RETURN,_retValue);
#line 1264 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1264 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1264 "cplus.met"
    return _retValue ;
#line 1264 "cplus.met"
}
#line 1264 "cplus.met"

#line 1264 "cplus.met"
#line 1190 "cplus.met"
PPTREE cplus::ext_decl_if_dir ( int error_free)
#line 1190 "cplus.met"
{
#line 1190 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1190 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1190 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1190 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1190 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1190 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1190 "cplus.met"
#line 1190 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1190 "cplus.met"
#line 1190 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1190 "cplus.met"
#line 1192 "cplus.met"
    {
#line 1192 "cplus.met"
        keepCarriage = 1 ;
#line 1192 "cplus.met"
#line 1193 "cplus.met"
#line 1194 "cplus.met"
        {
#line 1194 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1194 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1194 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 1194 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1194 "cplus.met"
            }
#line 1194 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1194 "cplus.met"
            retTree=_ptRes0;
#line 1194 "cplus.met"
        }
#line 1194 "cplus.met"
#line 1195 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1195 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1195 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(ext_decl_if_dir_exit,"CARRIAGE_RETURN")
#line 1195 "cplus.met"
        } else {
#line 1195 "cplus.met"
            tokenAhead = 0 ;
#line 1195 "cplus.met"
        }
#line 1195 "cplus.met"
#line 1195 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1195 "cplus.met"
    }
#line 1195 "cplus.met"
#line 1195 "cplus.met"
    _addlist1 = list ;
#line 1195 "cplus.met"
#line 1197 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1197 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1197 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1197 "cplus.met"
#line 1198 "cplus.met"
#line 1198 "cplus.met"
        {
#line 1198 "cplus.met"
            PPTREE _ptTree0=0;
#line 1198 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1198 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1198 "cplus.met"
            }
#line 1198 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1198 "cplus.met"
        }
#line 1198 "cplus.met"
#line 1198 "cplus.met"
        if (list){
#line 1198 "cplus.met"
#line 1198 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1198 "cplus.met"
        } else {
#line 1198 "cplus.met"
#line 1198 "cplus.met"
            list = _addlist1 ;
#line 1198 "cplus.met"
        }
#line 1198 "cplus.met"
    } 
#line 1198 "cplus.met"
#line 1199 "cplus.met"
    {
#line 1199 "cplus.met"
        PPTREE _ptTree0=0;
#line 1199 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1199 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1199 "cplus.met"
        }
#line 1199 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1199 "cplus.met"
    }
#line 1199 "cplus.met"
#line 1200 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1200 "cplus.met"
#line 1201 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1201 "cplus.met"
    switch( lexEl.Value) {
#line 1201 "cplus.met"
#line 1202 "cplus.met"
        case META : 
#line 1202 "cplus.met"
        case ELSE_DIR : 
#line 1202 "cplus.met"
            tokenAhead = 0 ;
#line 1202 "cplus.met"
            CommTerm();
#line 1202 "cplus.met"
#line 1203 "cplus.met"
#line 1203 "cplus.met"
            _addlist2 = list2 ;
#line 1203 "cplus.met"
#line 1204 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1204 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1204 "cplus.met"
#line 1205 "cplus.met"
#line 1205 "cplus.met"
                {
#line 1205 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1205 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1205 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1205 "cplus.met"
                    }
#line 1205 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1205 "cplus.met"
                }
#line 1205 "cplus.met"
#line 1205 "cplus.met"
                if (list2){
#line 1205 "cplus.met"
#line 1205 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1205 "cplus.met"
                } else {
#line 1205 "cplus.met"
#line 1205 "cplus.met"
                    list2 = _addlist2 ;
#line 1205 "cplus.met"
                }
#line 1205 "cplus.met"
            } 
#line 1205 "cplus.met"
#line 1206 "cplus.met"
            {
#line 1206 "cplus.met"
                PPTREE _ptTree0=0;
#line 1206 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1206 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1206 "cplus.met"
                }
#line 1206 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1206 "cplus.met"
            }
#line 1206 "cplus.met"
#line 1207 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1207 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1207 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(ext_decl_if_dir_exit,"ENDIF_DIR")
#line 1207 "cplus.met"
            } else {
#line 1207 "cplus.met"
                tokenAhead = 0 ;
#line 1207 "cplus.met"
            }
#line 1207 "cplus.met"
#line 1208 "cplus.met"
            {
#line 1208 "cplus.met"
                PPTREE _ptTree0=0;
#line 1208 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1208 "cplus.met"
                _retValue =_ptTree0;
#line 1208 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1208 "cplus.met"
            }
#line 1208 "cplus.met"
#line 1208 "cplus.met"
            break;
#line 1208 "cplus.met"
#line 1210 "cplus.met"
        case ELIF_DIR : 
#line 1210 "cplus.met"
            tokenAhead = 0 ;
#line 1210 "cplus.met"
            CommTerm();
#line 1210 "cplus.met"
#line 1210 "cplus.met"
            {
#line 1210 "cplus.met"
                PPTREE _ptTree0=0;
#line 1210 "cplus.met"
                {
#line 1210 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1210 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1210 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1210 "cplus.met"
                    }
#line 1210 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1210 "cplus.met"
                }
#line 1210 "cplus.met"
                _retValue =_ptTree0;
#line 1210 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1210 "cplus.met"
            }
#line 1210 "cplus.met"
            break;
#line 1210 "cplus.met"
#line 1211 "cplus.met"
        case ENDIF_DIR : 
#line 1211 "cplus.met"
            tokenAhead = 0 ;
#line 1211 "cplus.met"
            CommTerm();
#line 1211 "cplus.met"
#line 1211 "cplus.met"
            {
#line 1211 "cplus.met"
                _retValue = retTree ;
#line 1211 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1211 "cplus.met"
                
#line 1211 "cplus.met"
            }
#line 1211 "cplus.met"
            break;
#line 1211 "cplus.met"
        default :
#line 1211 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(ext_decl_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1211 "cplus.met"
            break;
#line 1211 "cplus.met"
    }
#line 1211 "cplus.met"
#line 1211 "cplus.met"
#line 1212 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1212 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1212 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1212 "cplus.met"
return((PPTREE) 0);
#line 1212 "cplus.met"

#line 1212 "cplus.met"
ext_decl_if_dir_exit :
#line 1212 "cplus.met"

#line 1212 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1212 "cplus.met"
    _funcLevel--;
#line 1212 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1212 "cplus.met"
    return((PPTREE) -1) ;
#line 1212 "cplus.met"

#line 1212 "cplus.met"
ext_decl_if_dir_ret :
#line 1212 "cplus.met"
    
#line 1212 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_RETURN,_retValue);
#line 1212 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1212 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1212 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1212 "cplus.met"
    return _retValue ;
#line 1212 "cplus.met"
}
#line 1212 "cplus.met"

#line 1212 "cplus.met"
#line 1215 "cplus.met"
PPTREE cplus::ext_decl_ifdef_dir ( int error_free)
#line 1215 "cplus.met"
{
#line 1215 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1215 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1215 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1215 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1215 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1215 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1215 "cplus.met"
#line 1215 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1215 "cplus.met"
#line 1215 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1215 "cplus.met"
#line 1217 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1217 "cplus.met"
#line 1218 "cplus.met"
#line 1219 "cplus.met"
        {
#line 1219 "cplus.met"
            keepCarriage = 1 ;
#line 1219 "cplus.met"
#line 1220 "cplus.met"
#line 1221 "cplus.met"
            {
#line 1221 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1221 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1221 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 1221 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1221 "cplus.met"
                }
#line 1221 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1221 "cplus.met"
                retTree=_ptRes0;
#line 1221 "cplus.met"
            }
#line 1221 "cplus.met"
#line 1222 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1222 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1222 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1222 "cplus.met"
            } else {
#line 1222 "cplus.met"
                tokenAhead = 0 ;
#line 1222 "cplus.met"
            }
#line 1222 "cplus.met"
#line 1222 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1222 "cplus.met"
        }
#line 1222 "cplus.met"
#line 1222 "cplus.met"
#line 1223 "cplus.met"
    } else {
#line 1223 "cplus.met"
#line 1226 "cplus.met"
#line 1227 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1227 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1227 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(ext_decl_ifdef_dir_exit,"IFNDEF_DIR")
#line 1227 "cplus.met"
        } else {
#line 1227 "cplus.met"
            tokenAhead = 0 ;
#line 1227 "cplus.met"
        }
#line 1227 "cplus.met"
#line 1228 "cplus.met"
        {
#line 1228 "cplus.met"
            keepCarriage = 1 ;
#line 1228 "cplus.met"
#line 1229 "cplus.met"
#line 1230 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 1230 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1230 "cplus.met"
            }
#line 1230 "cplus.met"
#line 1231 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1231 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1231 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1231 "cplus.met"
            } else {
#line 1231 "cplus.met"
                tokenAhead = 0 ;
#line 1231 "cplus.met"
            }
#line 1231 "cplus.met"
#line 1231 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1231 "cplus.met"
        }
#line 1231 "cplus.met"
#line 1233 "cplus.met"
        {
#line 1233 "cplus.met"
            PPTREE _ptRes0=0;
#line 1233 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1233 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1233 "cplus.met"
            retTree=_ptRes0;
#line 1233 "cplus.met"
        }
#line 1233 "cplus.met"
#line 1233 "cplus.met"
    }
#line 1233 "cplus.met"
#line 1233 "cplus.met"
    _addlist1 = list ;
#line 1233 "cplus.met"
#line 1237 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1237 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1237 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1237 "cplus.met"
#line 1239 "cplus.met"
#line 1239 "cplus.met"
        {
#line 1239 "cplus.met"
            PPTREE _ptTree0=0;
#line 1239 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1239 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1239 "cplus.met"
            }
#line 1239 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1239 "cplus.met"
        }
#line 1239 "cplus.met"
#line 1239 "cplus.met"
        if (list){
#line 1239 "cplus.met"
#line 1239 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1239 "cplus.met"
        } else {
#line 1239 "cplus.met"
#line 1239 "cplus.met"
            list = _addlist1 ;
#line 1239 "cplus.met"
        }
#line 1239 "cplus.met"
    } 
#line 1239 "cplus.met"
#line 1240 "cplus.met"
    {
#line 1240 "cplus.met"
        PPTREE _ptTree0=0;
#line 1240 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1240 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1240 "cplus.met"
        }
#line 1240 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1240 "cplus.met"
    }
#line 1240 "cplus.met"
#line 1241 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1241 "cplus.met"
#line 1242 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1242 "cplus.met"
    switch( lexEl.Value) {
#line 1242 "cplus.met"
#line 1243 "cplus.met"
        case META : 
#line 1243 "cplus.met"
        case ELSE_DIR : 
#line 1243 "cplus.met"
            tokenAhead = 0 ;
#line 1243 "cplus.met"
            CommTerm();
#line 1243 "cplus.met"
#line 1244 "cplus.met"
#line 1244 "cplus.met"
            _addlist2 = list2 ;
#line 1244 "cplus.met"
#line 1245 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1245 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1245 "cplus.met"
#line 1246 "cplus.met"
#line 1246 "cplus.met"
                {
#line 1246 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1246 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1246 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1246 "cplus.met"
                    }
#line 1246 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1246 "cplus.met"
                }
#line 1246 "cplus.met"
#line 1246 "cplus.met"
                if (list2){
#line 1246 "cplus.met"
#line 1246 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1246 "cplus.met"
                } else {
#line 1246 "cplus.met"
#line 1246 "cplus.met"
                    list2 = _addlist2 ;
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1247 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1247 "cplus.met"
                }
#line 1247 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1247 "cplus.met"
            }
#line 1247 "cplus.met"
#line 1248 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1248 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1248 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"ENDIF_DIR")
#line 1248 "cplus.met"
            } else {
#line 1248 "cplus.met"
                tokenAhead = 0 ;
#line 1248 "cplus.met"
            }
#line 1248 "cplus.met"
#line 1249 "cplus.met"
            {
#line 1249 "cplus.met"
                PPTREE _ptTree0=0;
#line 1249 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1249 "cplus.met"
                _retValue =_ptTree0;
#line 1249 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1249 "cplus.met"
            }
#line 1249 "cplus.met"
#line 1249 "cplus.met"
            break;
#line 1249 "cplus.met"
#line 1251 "cplus.met"
        case ELIF_DIR : 
#line 1251 "cplus.met"
            tokenAhead = 0 ;
#line 1251 "cplus.met"
            CommTerm();
#line 1251 "cplus.met"
#line 1251 "cplus.met"
            {
#line 1251 "cplus.met"
                PPTREE _ptTree0=0;
#line 1251 "cplus.met"
                {
#line 1251 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1251 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1251 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1251 "cplus.met"
                    }
#line 1251 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1251 "cplus.met"
                }
#line 1251 "cplus.met"
                _retValue =_ptTree0;
#line 1251 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1251 "cplus.met"
            }
#line 1251 "cplus.met"
            break;
#line 1251 "cplus.met"
#line 1252 "cplus.met"
        case ENDIF_DIR : 
#line 1252 "cplus.met"
            tokenAhead = 0 ;
#line 1252 "cplus.met"
            CommTerm();
#line 1252 "cplus.met"
#line 1252 "cplus.met"
            {
#line 1252 "cplus.met"
                _retValue = retTree ;
#line 1252 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1252 "cplus.met"
                
#line 1252 "cplus.met"
            }
#line 1252 "cplus.met"
            break;
#line 1252 "cplus.met"
        default :
#line 1252 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(ext_decl_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1252 "cplus.met"
            break;
#line 1252 "cplus.met"
    }
#line 1252 "cplus.met"
#line 1252 "cplus.met"
#line 1253 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1253 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1253 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1253 "cplus.met"
return((PPTREE) 0);
#line 1253 "cplus.met"

#line 1253 "cplus.met"
ext_decl_ifdef_dir_exit :
#line 1253 "cplus.met"

#line 1253 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1253 "cplus.met"
    _funcLevel--;
#line 1253 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1253 "cplus.met"
    return((PPTREE) -1) ;
#line 1253 "cplus.met"

#line 1253 "cplus.met"
ext_decl_ifdef_dir_ret :
#line 1253 "cplus.met"
    
#line 1253 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_RETURN,_retValue);
#line 1253 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1253 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1253 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1253 "cplus.met"
    return _retValue ;
#line 1253 "cplus.met"
}
#line 1253 "cplus.met"

#line 1253 "cplus.met"
