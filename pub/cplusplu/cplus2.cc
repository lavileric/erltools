/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 808 "cplus.met"
PPTREE cplus::end_pragma ( int error_free)
#line 808 "cplus.met"
{
#line 808 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 808 "cplus.met"
    int _value,_nbPre = 0 ;
#line 808 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 808 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma",TRACE_ENTER,(PPTREE)0);
#line 808 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 808 "cplus.met"
#line 809 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 809 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 809 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_DIR")
#line 809 "cplus.met"
    } else {
#line 809 "cplus.met"
        tokenAhead = 0 ;
#line 809 "cplus.met"
    }
#line 809 "cplus.met"
#line 810 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 810 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_PRETTY,"PRAGMA_PRETTY") || !(CommTerm(),1)) {
#line 810 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_PRETTY")
#line 810 "cplus.met"
    } else {
#line 810 "cplus.met"
        tokenAhead = 0 ;
#line 810 "cplus.met"
    }
#line 810 "cplus.met"
#line 810 "cplus.met"
#line 810 "cplus.met"

#line 811 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 811 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 811 "cplus.met"
return((PPTREE) 0);
#line 811 "cplus.met"

#line 811 "cplus.met"
end_pragma_exit :
#line 811 "cplus.met"

#line 811 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_EXIT,(PPTREE)0);
#line 811 "cplus.met"
    _funcLevel--;
#line 811 "cplus.met"
    return((PPTREE) -1) ;
#line 811 "cplus.met"

#line 811 "cplus.met"
end_pragma_ret :
#line 811 "cplus.met"
    
#line 811 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_RETURN,_retValue);
#line 811 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 811 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 811 "cplus.met"
    return _retValue ;
#line 811 "cplus.met"
}
#line 811 "cplus.met"

#line 811 "cplus.met"
#line 813 "cplus.met"
PPTREE cplus::end_pragma_managed ( int error_free)
#line 813 "cplus.met"
{
#line 813 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 813 "cplus.met"
    int _value,_nbPre = 0 ;
#line 813 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 813 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma_managed",TRACE_ENTER,(PPTREE)0);
#line 813 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 813 "cplus.met"
#line 814 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 814 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 814 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_DIR")
#line 814 "cplus.met"
    } else {
#line 814 "cplus.met"
        tokenAhead = 0 ;
#line 814 "cplus.met"
    }
#line 814 "cplus.met"
#line 815 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 815 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_MANAGED,"PRAGMA_MANAGED") || !(CommTerm(),1)) {
#line 815 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_MANAGED")
#line 815 "cplus.met"
    } else {
#line 815 "cplus.met"
        tokenAhead = 0 ;
#line 815 "cplus.met"
    }
#line 815 "cplus.met"
#line 815 "cplus.met"
#line 815 "cplus.met"

#line 816 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 816 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 816 "cplus.met"
return((PPTREE) 0);
#line 816 "cplus.met"

#line 816 "cplus.met"
end_pragma_managed_exit :
#line 816 "cplus.met"

#line 816 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_EXIT,(PPTREE)0);
#line 816 "cplus.met"
    _funcLevel--;
#line 816 "cplus.met"
    return((PPTREE) -1) ;
#line 816 "cplus.met"

#line 816 "cplus.met"
end_pragma_managed_ret :
#line 816 "cplus.met"
    
#line 816 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_RETURN,_retValue);
#line 816 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 816 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 816 "cplus.met"
    return _retValue ;
#line 816 "cplus.met"
}
#line 816 "cplus.met"

#line 816 "cplus.met"
#line 1771 "cplus.met"
PPTREE cplus::enum_declarator ( int error_free)
#line 1771 "cplus.met"
{
#line 1771 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1771 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1771 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1771 "cplus.met"
    int _Debug = TRACE_RULE("enum_declarator",TRACE_ENTER,(PPTREE)0);
#line 1771 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1771 "cplus.met"
#line 1771 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1771 "cplus.met"
#line 1771 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1771 "cplus.met"
#line 1773 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1773 "cplus.met"
    if (  !SEE_TOKEN( ENUM,"enum") || !(CommTerm(),1)) {
#line 1773 "cplus.met"
        MulFreeTree(4,_addlist1,list,retTree,valTree);
        TOKEN_EXIT(enum_declarator_exit,"enum")
#line 1773 "cplus.met"
    } else {
#line 1773 "cplus.met"
        tokenAhead = 0 ;
#line 1773 "cplus.met"
    }
#line 1773 "cplus.met"
#line 1774 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1774 "cplus.met"
#line 1775 "cplus.met"
        {
#line 1775 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1775 "cplus.met"
            _ptRes0= MakeTree(ENUM, 2);
#line 1775 "cplus.met"
            {
#line 1775 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1775 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1775 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1775 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1775 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,list,retTree,valTree);
                    TOKEN_EXIT(enum_declarator_exit,"IDENT")
#line 1775 "cplus.met"
                } else {
#line 1775 "cplus.met"
                    tokenAhead = 0 ;
#line 1775 "cplus.met"
                }
#line 1775 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1775 "cplus.met"
                _ptTree0=_ptRes1;
#line 1775 "cplus.met"
            }
#line 1775 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1775 "cplus.met"
            retTree=_ptRes0;
#line 1775 "cplus.met"
        }
#line 1775 "cplus.met"
    } else {
#line 1775 "cplus.met"
#line 1777 "cplus.met"
        {
#line 1777 "cplus.met"
            PPTREE _ptRes0=0;
#line 1777 "cplus.met"
            _ptRes0= MakeTree(ENUM, 2);
#line 1777 "cplus.met"
            retTree=_ptRes0;
#line 1777 "cplus.met"
        }
#line 1777 "cplus.met"
    }
#line 1777 "cplus.met"
#line 1778 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 1778 "cplus.met"
#line 1779 "cplus.met"
#line 1779 "cplus.met"
        _addlist1 = list ;
#line 1779 "cplus.met"
#line 1780 "cplus.met"
        do {
#line 1780 "cplus.met"
#line 1781 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(enum_val), 54, cplus)){
#line 1781 "cplus.met"
#line 1782 "cplus.met"
#line 1782 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 1782 "cplus.met"
#line 1782 "cplus.met"
                if (list){
#line 1782 "cplus.met"
#line 1782 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1782 "cplus.met"
                } else {
#line 1782 "cplus.met"
#line 1782 "cplus.met"
                    list = _addlist1 ;
#line 1782 "cplus.met"
                }
#line 1782 "cplus.met"
            } else {
#line 1782 "cplus.met"
#line 1784 "cplus.met"
                
#line 1784 "cplus.met"
                MulFreeTree(4,_addlist1,list,retTree,valTree);
                LEX_EXIT ("",0);
#line 1784 "cplus.met"
                goto enum_declarator_exit;
#line 1784 "cplus.met"
            }
#line 1784 "cplus.met"
#line 1784 "cplus.met"
#line 1785 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 1785 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1785 "cplus.met"
#line 1786 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1786 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1786 "cplus.met"
            MulFreeTree(4,_addlist1,list,retTree,valTree);
            TOKEN_EXIT(enum_declarator_exit,"}")
#line 1786 "cplus.met"
        } else {
#line 1786 "cplus.met"
            tokenAhead = 0 ;
#line 1786 "cplus.met"
        }
#line 1786 "cplus.met"
#line 1787 "cplus.met"
        ReplaceTree(retTree ,2 ,list );
#line 1787 "cplus.met"
#line 1787 "cplus.met"
#line 1787 "cplus.met"
    }
#line 1787 "cplus.met"
#line 1789 "cplus.met"
    {
#line 1789 "cplus.met"
        _retValue = retTree ;
#line 1789 "cplus.met"
        goto enum_declarator_ret;
#line 1789 "cplus.met"
        
#line 1789 "cplus.met"
    }
#line 1789 "cplus.met"
#line 1789 "cplus.met"
#line 1789 "cplus.met"

#line 1790 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1790 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1790 "cplus.met"
return((PPTREE) 0);
#line 1790 "cplus.met"

#line 1790 "cplus.met"
enum_declarator_exit :
#line 1790 "cplus.met"

#line 1790 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_EXIT,(PPTREE)0);
#line 1790 "cplus.met"
    _funcLevel--;
#line 1790 "cplus.met"
    return((PPTREE) -1) ;
#line 1790 "cplus.met"

#line 1790 "cplus.met"
enum_declarator_ret :
#line 1790 "cplus.met"
    
#line 1790 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_RETURN,_retValue);
#line 1790 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1790 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1790 "cplus.met"
    return _retValue ;
#line 1790 "cplus.met"
}
#line 1790 "cplus.met"

#line 1790 "cplus.met"
#line 1761 "cplus.met"
PPTREE cplus::enum_val ( int error_free)
#line 1761 "cplus.met"
{
#line 1761 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1761 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1761 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1761 "cplus.met"
    int _Debug = TRACE_RULE("enum_val",TRACE_ENTER,(PPTREE)0);
#line 1761 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1761 "cplus.met"
#line 1761 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1761 "cplus.met"
#line 1763 "cplus.met"
    {
#line 1763 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1763 "cplus.met"
        _ptRes0= MakeTree(TYP_AFF, 2);
#line 1763 "cplus.met"
        {
#line 1763 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1763 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1763 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1763 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1763 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,valTree);
                TOKEN_EXIT(enum_val_exit,"IDENT")
#line 1763 "cplus.met"
            } else {
#line 1763 "cplus.met"
                tokenAhead = 0 ;
#line 1763 "cplus.met"
            }
#line 1763 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1763 "cplus.met"
            _ptTree0=_ptRes1;
#line 1763 "cplus.met"
        }
#line 1763 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1763 "cplus.met"
        valTree=_ptRes0;
#line 1763 "cplus.met"
    }
#line 1763 "cplus.met"
#line 1764 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 1764 "cplus.met"
#line 1765 "cplus.met"
        {
#line 1765 "cplus.met"
            PPTREE _ptTree0=0;
#line 1765 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 1765 "cplus.met"
                MulFreeTree(2,_ptTree0,valTree);
                PROG_EXIT(enum_val_exit,"enum_val")
#line 1765 "cplus.met"
            }
#line 1765 "cplus.met"
            ReplaceTree(valTree , 2 , _ptTree0);
#line 1765 "cplus.met"
        }
#line 1765 "cplus.met"
#line 1765 "cplus.met"
    }
#line 1765 "cplus.met"
#line 1766 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)){
#line 1766 "cplus.met"
#line 1766 "cplus.met"
    }
#line 1766 "cplus.met"
#line 1768 "cplus.met"
    {
#line 1768 "cplus.met"
        _retValue = valTree ;
#line 1768 "cplus.met"
        goto enum_val_ret;
#line 1768 "cplus.met"
        
#line 1768 "cplus.met"
    }
#line 1768 "cplus.met"
#line 1768 "cplus.met"
#line 1768 "cplus.met"

#line 1769 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1769 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1769 "cplus.met"
return((PPTREE) 0);
#line 1769 "cplus.met"

#line 1769 "cplus.met"
enum_val_exit :
#line 1769 "cplus.met"

#line 1769 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_EXIT,(PPTREE)0);
#line 1769 "cplus.met"
    _funcLevel--;
#line 1769 "cplus.met"
    return((PPTREE) -1) ;
#line 1769 "cplus.met"

#line 1769 "cplus.met"
enum_val_ret :
#line 1769 "cplus.met"
    
#line 1769 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_RETURN,_retValue);
#line 1769 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1769 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1769 "cplus.met"
    return _retValue ;
#line 1769 "cplus.met"
}
#line 1769 "cplus.met"

#line 1769 "cplus.met"
#line 2671 "cplus.met"
PPTREE cplus::equality_expression ( int error_free)
#line 2671 "cplus.met"
{
#line 2671 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2671 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2671 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2671 "cplus.met"
    int _Debug = TRACE_RULE("equality_expression",TRACE_ENTER,(PPTREE)0);
#line 2671 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2671 "cplus.met"
#line 2671 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2671 "cplus.met"
#line 2673 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(relational_expression)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 2673 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2673 "cplus.met"
    }
#line 2673 "cplus.met"
#line 2674 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EGALEGAL,"==")) || 
#line 2674 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EXCLEGAL,"!="))) { 
#line 2674 "cplus.met"
#line 2675 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGALEGAL,"==") && (tokenAhead = 0,CommTerm(),1)){
#line 2675 "cplus.met"
#line 2676 "cplus.met"
            {
#line 2676 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2676 "cplus.met"
                _ptRes0= MakeTree(EQU, 2);
#line 2676 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2676 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 2676 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2676 "cplus.met"
                }
#line 2676 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2676 "cplus.met"
                expTree=_ptRes0;
#line 2676 "cplus.met"
            }
#line 2676 "cplus.met"
        } else {
#line 2676 "cplus.met"
#line 2678 "cplus.met"
#line 2679 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2679 "cplus.met"
            if (  !SEE_TOKEN( EXCLEGAL,"!=") || !(CommTerm(),1)) {
#line 2679 "cplus.met"
                MulFreeTree(1,expTree);
                TOKEN_EXIT(equality_expression_exit,"!=")
#line 2679 "cplus.met"
            } else {
#line 2679 "cplus.met"
                tokenAhead = 0 ;
#line 2679 "cplus.met"
            }
#line 2679 "cplus.met"
#line 2680 "cplus.met"
            {
#line 2680 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2680 "cplus.met"
                _ptRes0= MakeTree(NEQU, 2);
#line 2680 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2680 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 2680 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2680 "cplus.met"
                }
#line 2680 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2680 "cplus.met"
                expTree=_ptRes0;
#line 2680 "cplus.met"
            }
#line 2680 "cplus.met"
#line 2680 "cplus.met"
        }
#line 2680 "cplus.met"
    } 
#line 2680 "cplus.met"
#line 2682 "cplus.met"
    {
#line 2682 "cplus.met"
        _retValue = expTree ;
#line 2682 "cplus.met"
        goto equality_expression_ret;
#line 2682 "cplus.met"
        
#line 2682 "cplus.met"
    }
#line 2682 "cplus.met"
#line 2682 "cplus.met"
#line 2682 "cplus.met"

#line 2683 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2683 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2683 "cplus.met"
return((PPTREE) 0);
#line 2683 "cplus.met"

#line 2683 "cplus.met"
equality_expression_exit :
#line 2683 "cplus.met"

#line 2683 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_EXIT,(PPTREE)0);
#line 2683 "cplus.met"
    _funcLevel--;
#line 2683 "cplus.met"
    return((PPTREE) -1) ;
#line 2683 "cplus.met"

#line 2683 "cplus.met"
equality_expression_ret :
#line 2683 "cplus.met"
    
#line 2683 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_RETURN,_retValue);
#line 2683 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2683 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2683 "cplus.met"
    return _retValue ;
#line 2683 "cplus.met"
}
#line 2683 "cplus.met"

#line 2683 "cplus.met"
#line 2002 "cplus.met"
PPTREE cplus::exception ( int error_free)
#line 2002 "cplus.met"
{
#line 2002 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2002 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2002 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2002 "cplus.met"
    int _Debug = TRACE_RULE("exception",TRACE_ENTER,(PPTREE)0);
#line 2002 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2002 "cplus.met"
#line 2002 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2002 "cplus.met"
#line 2002 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2002 "cplus.met"
#line 2004 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2004 "cplus.met"
    if ( ! TERM_OR_META(TRY_UPPER,"TRY_UPPER") || !(CommTerm(),1)) {
#line 2004 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(exception_exit,"TRY_UPPER")
#line 2004 "cplus.met"
    } else {
#line 2004 "cplus.met"
        tokenAhead = 0 ;
#line 2004 "cplus.met"
    }
#line 2004 "cplus.met"
#line 2005 "cplus.met"
    {
#line 2005 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2005 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION, 2);
#line 2005 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2005 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            PROG_EXIT(exception_exit,"exception")
#line 2005 "cplus.met"
        }
#line 2005 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2005 "cplus.met"
        retTree=_ptRes0;
#line 2005 "cplus.met"
    }
#line 2005 "cplus.met"
#line 2005 "cplus.met"
    _addlist1 = list ;
#line 2005 "cplus.met"
#line 2006 "cplus.met"
    do {
#line 2006 "cplus.met"
#line 2007 "cplus.met"
        {
#line 2007 "cplus.met"
            PPTREE _ptTree0=0;
#line 2007 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(catch_unit)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2007 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(exception_exit,"exception")
#line 2007 "cplus.met"
            }
#line 2007 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2007 "cplus.met"
        }
#line 2007 "cplus.met"
#line 2007 "cplus.met"
        if (list){
#line 2007 "cplus.met"
#line 2007 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2007 "cplus.met"
        } else {
#line 2007 "cplus.met"
#line 2007 "cplus.met"
            list = _addlist1 ;
#line 2007 "cplus.met"
        }
#line 2007 "cplus.met"
#line 2007 "cplus.met"
#line 2008 "cplus.met"
    } while ( !((((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH,"END_CATCH") && (tokenAhead = 0,CommTerm(),1)) || 
#line 2008 "cplus.met"
                ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH_ALL,"END_CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))) || 
#line 2008 "cplus.met"
               (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2008 "cplus.met"
#line 2009 "cplus.met"
    {
#line 2009 "cplus.met"
        PPTREE _ptTree0=0;
#line 2009 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 2009 "cplus.met"
        _retValue =_ptTree0;
#line 2009 "cplus.met"
        goto exception_ret;
#line 2009 "cplus.met"
    }
#line 2009 "cplus.met"
#line 2009 "cplus.met"
#line 2009 "cplus.met"

#line 2010 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2010 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2010 "cplus.met"
return((PPTREE) 0);
#line 2010 "cplus.met"

#line 2010 "cplus.met"
exception_exit :
#line 2010 "cplus.met"

#line 2010 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_EXIT,(PPTREE)0);
#line 2010 "cplus.met"
    _funcLevel--;
#line 2010 "cplus.met"
    return((PPTREE) -1) ;
#line 2010 "cplus.met"

#line 2010 "cplus.met"
exception_ret :
#line 2010 "cplus.met"
    
#line 2010 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_RETURN,_retValue);
#line 2010 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2010 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2010 "cplus.met"
    return _retValue ;
#line 2010 "cplus.met"
}
#line 2010 "cplus.met"

#line 2010 "cplus.met"
#line 2033 "cplus.met"
PPTREE cplus::exception_ansi ( int error_free)
#line 2033 "cplus.met"
{
#line 2033 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2033 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2033 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2033 "cplus.met"
    int _Debug = TRACE_RULE("exception_ansi",TRACE_ENTER,(PPTREE)0);
#line 2033 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2033 "cplus.met"
#line 2033 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2033 "cplus.met"
#line 2033 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,elem = (PPTREE) 0;
#line 2033 "cplus.met"
#line 2035 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2035 "cplus.met"
    if (  !SEE_TOKEN( TRY,"try") || !(CommTerm(),1)) {
#line 2035 "cplus.met"
        MulFreeTree(4,_addlist1,elem,list,retTree);
        TOKEN_EXIT(exception_ansi_exit,"try")
#line 2035 "cplus.met"
    } else {
#line 2035 "cplus.met"
        tokenAhead = 0 ;
#line 2035 "cplus.met"
    }
#line 2035 "cplus.met"
#line 2036 "cplus.met"
    {
#line 2036 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2036 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION_ANSI, 2);
#line 2036 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2036 "cplus.met"
            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,elem,list,retTree);
            PROG_EXIT(exception_ansi_exit,"exception_ansi")
#line 2036 "cplus.met"
        }
#line 2036 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2036 "cplus.met"
        retTree=_ptRes0;
#line 2036 "cplus.met"
    }
#line 2036 "cplus.met"
#line 2036 "cplus.met"
    _addlist1 = list ;
#line 2036 "cplus.met"
#line 2037 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(elem = ,_Tak(catch_unit_ansi), 22, cplus)) { 
#line 2037 "cplus.met"
#line 2038 "cplus.met"
#line 2038 "cplus.met"
        _addlist1 =AddList(_addlist1 ,elem );
#line 2038 "cplus.met"
#line 2038 "cplus.met"
        if (list){
#line 2038 "cplus.met"
#line 2038 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2038 "cplus.met"
        } else {
#line 2038 "cplus.met"
#line 2038 "cplus.met"
            list = _addlist1 ;
#line 2038 "cplus.met"
        }
#line 2038 "cplus.met"
    } 
#line 2038 "cplus.met"
#line 2039 "cplus.met"
    {
#line 2039 "cplus.met"
        PPTREE _ptTree0=0;
#line 2039 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 2039 "cplus.met"
        _retValue =_ptTree0;
#line 2039 "cplus.met"
        goto exception_ansi_ret;
#line 2039 "cplus.met"
    }
#line 2039 "cplus.met"
#line 2039 "cplus.met"
#line 2039 "cplus.met"

#line 2040 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2040 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2040 "cplus.met"
return((PPTREE) 0);
#line 2040 "cplus.met"

#line 2040 "cplus.met"
exception_ansi_exit :
#line 2040 "cplus.met"

#line 2040 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_EXIT,(PPTREE)0);
#line 2040 "cplus.met"
    _funcLevel--;
#line 2040 "cplus.met"
    return((PPTREE) -1) ;
#line 2040 "cplus.met"

#line 2040 "cplus.met"
exception_ansi_ret :
#line 2040 "cplus.met"
    
#line 2040 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_RETURN,_retValue);
#line 2040 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2040 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2040 "cplus.met"
    return _retValue ;
#line 2040 "cplus.met"
}
#line 2040 "cplus.met"

#line 2040 "cplus.met"
#line 3237 "cplus.met"
PPTREE cplus::exception_list ( int error_free)
#line 3237 "cplus.met"
{
#line 3237 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3237 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3237 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3237 "cplus.met"
    int _Debug = TRACE_RULE("exception_list",TRACE_ENTER,(PPTREE)0);
#line 3237 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3237 "cplus.met"
#line 3237 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3237 "cplus.met"
#line 3237 "cplus.met"
    PPTREE exceptionList = (PPTREE) 0;
#line 3237 "cplus.met"
#line 3239 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3239 "cplus.met"
    if (  !SEE_TOKEN( THROW,"throw") || !(CommTerm(),1)) {
#line 3239 "cplus.met"
        MulFreeTree(2,_addlist1,exceptionList);
        TOKEN_EXIT(exception_list_exit,"throw")
#line 3239 "cplus.met"
    } else {
#line 3239 "cplus.met"
        tokenAhead = 0 ;
#line 3239 "cplus.met"
    }
#line 3239 "cplus.met"
#line 3240 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3240 "cplus.met"
#line 3241 "cplus.met"
#line 3241 "cplus.met"
        _addlist1 = exceptionList ;
#line 3241 "cplus.met"
#line 3242 "cplus.met"
        do {
#line 3242 "cplus.met"
#line 3243 "cplus.met"
            {
#line 3243 "cplus.met"
                PPTREE _ptTree0=0;
#line 3243 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 3243 "cplus.met"
                    MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                    PROG_EXIT(exception_list_exit,"exception_list")
#line 3243 "cplus.met"
                }
#line 3243 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3243 "cplus.met"
            }
#line 3243 "cplus.met"
#line 3243 "cplus.met"
            if (exceptionList){
#line 3243 "cplus.met"
#line 3243 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3243 "cplus.met"
            } else {
#line 3243 "cplus.met"
#line 3243 "cplus.met"
                exceptionList = _addlist1 ;
#line 3243 "cplus.met"
            }
#line 3243 "cplus.met"
#line 3243 "cplus.met"
#line 3244 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3244 "cplus.met"
#line 3245 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3245 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3245 "cplus.met"
            MulFreeTree(2,_addlist1,exceptionList);
            TOKEN_EXIT(exception_list_exit,")")
#line 3245 "cplus.met"
        } else {
#line 3245 "cplus.met"
            tokenAhead = 0 ;
#line 3245 "cplus.met"
        }
#line 3245 "cplus.met"
#line 3245 "cplus.met"
#line 3245 "cplus.met"
    } else {
#line 3245 "cplus.met"
#line 3248 "cplus.met"
        {
#line 3248 "cplus.met"
            PPTREE _ptTree0=0;
#line 3248 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 3248 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                PROG_EXIT(exception_list_exit,"exception_list")
#line 3248 "cplus.met"
            }
#line 3248 "cplus.met"
            exceptionList =AddList(exceptionList , _ptTree0);
#line 3248 "cplus.met"
        }
#line 3248 "cplus.met"
    }
#line 3248 "cplus.met"
#line 3249 "cplus.met"
    {
#line 3249 "cplus.met"
        PPTREE _ptTree0=0;
#line 3249 "cplus.met"
        {
#line 3249 "cplus.met"
            PPTREE _ptRes1=0;
#line 3249 "cplus.met"
            _ptRes1= MakeTree(EXCEPTION_LIST, 1);
#line 3249 "cplus.met"
            ReplaceTree(_ptRes1, 1, exceptionList );
#line 3249 "cplus.met"
            _ptTree0=_ptRes1;
#line 3249 "cplus.met"
        }
#line 3249 "cplus.met"
        _retValue =_ptTree0;
#line 3249 "cplus.met"
        goto exception_list_ret;
#line 3249 "cplus.met"
    }
#line 3249 "cplus.met"
#line 3249 "cplus.met"
#line 3249 "cplus.met"

#line 3250 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3250 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3250 "cplus.met"
return((PPTREE) 0);
#line 3250 "cplus.met"

#line 3250 "cplus.met"
exception_list_exit :
#line 3250 "cplus.met"

#line 3250 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_EXIT,(PPTREE)0);
#line 3250 "cplus.met"
    _funcLevel--;
#line 3250 "cplus.met"
    return((PPTREE) -1) ;
#line 3250 "cplus.met"

#line 3250 "cplus.met"
exception_list_ret :
#line 3250 "cplus.met"
    
#line 3250 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_RETURN,_retValue);
#line 3250 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3250 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3250 "cplus.met"
    return _retValue ;
#line 3250 "cplus.met"
}
#line 3250 "cplus.met"

#line 3250 "cplus.met"
#line 2655 "cplus.met"
PPTREE cplus::exclusive_or_expression ( int error_free)
#line 2655 "cplus.met"
{
#line 2655 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2655 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2655 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2655 "cplus.met"
    int _Debug = TRACE_RULE("exclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2655 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2655 "cplus.met"
#line 2655 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2655 "cplus.met"
#line 2657 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2657 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2657 "cplus.met"
    }
#line 2657 "cplus.met"
#line 2658 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CHAP,"^") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2658 "cplus.met"
#line 2659 "cplus.met"
        {
#line 2659 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2659 "cplus.met"
            _ptRes0= MakeTree(LXOR, 2);
#line 2659 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2659 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2659 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2659 "cplus.met"
            }
#line 2659 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2659 "cplus.met"
            expTree=_ptRes0;
#line 2659 "cplus.met"
        }
#line 2659 "cplus.met"
    } 
#line 2659 "cplus.met"
#line 2660 "cplus.met"
    {
#line 2660 "cplus.met"
        _retValue = expTree ;
#line 2660 "cplus.met"
        goto exclusive_or_expression_ret;
#line 2660 "cplus.met"
        
#line 2660 "cplus.met"
    }
#line 2660 "cplus.met"
#line 2660 "cplus.met"
#line 2660 "cplus.met"

#line 2661 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2661 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2661 "cplus.met"
return((PPTREE) 0);
#line 2661 "cplus.met"

#line 2661 "cplus.met"
exclusive_or_expression_exit :
#line 2661 "cplus.met"

#line 2661 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2661 "cplus.met"
    _funcLevel--;
#line 2661 "cplus.met"
    return((PPTREE) -1) ;
#line 2661 "cplus.met"

#line 2661 "cplus.met"
exclusive_or_expression_ret :
#line 2661 "cplus.met"
    
#line 2661 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_RETURN,_retValue);
#line 2661 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2661 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2661 "cplus.met"
    return _retValue ;
#line 2661 "cplus.met"
}
#line 2661 "cplus.met"

#line 2661 "cplus.met"
#line 2575 "cplus.met"
PPTREE cplus::expression ( int error_free)
#line 2575 "cplus.met"
{
#line 2575 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2575 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2575 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2575 "cplus.met"
    int _Debug = TRACE_RULE("expression",TRACE_ENTER,(PPTREE)0);
#line 2575 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2575 "cplus.met"
#line 2575 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2575 "cplus.met"
#line 2575 "cplus.met"
    PPTREE expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2575 "cplus.met"
#line 2577 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2577 "cplus.met"
        MulFreeTree(3,_addlist1,expTree,list);
        PROG_EXIT(expression_exit,"expression")
#line 2577 "cplus.met"
    }
#line 2577 "cplus.met"
#line 2578 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,",")){
#line 2578 "cplus.met"
#line 2579 "cplus.met"
#line 2580 "cplus.met"
        list =AddList(list ,expTree );
#line 2580 "cplus.met"
#line 2580 "cplus.met"
        _addlist1 = list ;
#line 2580 "cplus.met"
#line 2581 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2581 "cplus.met"
#line 2582 "cplus.met"
#line 2582 "cplus.met"
            {
#line 2582 "cplus.met"
                PPTREE _ptTree0=0;
#line 2582 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2582 "cplus.met"
                    MulFreeTree(4,_ptTree0,_addlist1,expTree,list);
                    PROG_EXIT(expression_exit,"expression")
#line 2582 "cplus.met"
                }
#line 2582 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2582 "cplus.met"
            }
#line 2582 "cplus.met"
#line 2582 "cplus.met"
            if (list){
#line 2582 "cplus.met"
#line 2582 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2582 "cplus.met"
            } else {
#line 2582 "cplus.met"
#line 2582 "cplus.met"
                list = _addlist1 ;
#line 2582 "cplus.met"
            }
#line 2582 "cplus.met"
        } 
#line 2582 "cplus.met"
#line 2583 "cplus.met"
        {
#line 2583 "cplus.met"
            PPTREE _ptTree0=0;
#line 2583 "cplus.met"
            {
#line 2583 "cplus.met"
                PPTREE _ptRes1=0;
#line 2583 "cplus.met"
                _ptRes1= MakeTree(EXP_SEQ, 1);
#line 2583 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2583 "cplus.met"
                _ptTree0=_ptRes1;
#line 2583 "cplus.met"
            }
#line 2583 "cplus.met"
            _retValue =_ptTree0;
#line 2583 "cplus.met"
            goto expression_ret;
#line 2583 "cplus.met"
        }
#line 2583 "cplus.met"
#line 2583 "cplus.met"
#line 2583 "cplus.met"
    } else {
#line 2583 "cplus.met"
#line 2586 "cplus.met"
        {
#line 2586 "cplus.met"
            _retValue = expTree ;
#line 2586 "cplus.met"
            goto expression_ret;
#line 2586 "cplus.met"
            
#line 2586 "cplus.met"
        }
#line 2586 "cplus.met"
    }
#line 2586 "cplus.met"
#line 2586 "cplus.met"
#line 2586 "cplus.met"

#line 2587 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2587 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2587 "cplus.met"
return((PPTREE) 0);
#line 2587 "cplus.met"

#line 2587 "cplus.met"
expression_exit :
#line 2587 "cplus.met"

#line 2587 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_EXIT,(PPTREE)0);
#line 2587 "cplus.met"
    _funcLevel--;
#line 2587 "cplus.met"
    return((PPTREE) -1) ;
#line 2587 "cplus.met"

#line 2587 "cplus.met"
expression_ret :
#line 2587 "cplus.met"
    
#line 2587 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_RETURN,_retValue);
#line 2587 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2587 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2587 "cplus.met"
    return _retValue ;
#line 2587 "cplus.met"
}
#line 2587 "cplus.met"

#line 2587 "cplus.met"
#line 3315 "cplus.met"
PPTREE cplus::expression_for ( int error_free)
#line 3315 "cplus.met"
{
#line 3315 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3315 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3315 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3315 "cplus.met"
    int _Debug = TRACE_RULE("expression_for",TRACE_ENTER,(PPTREE)0);
#line 3315 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3315 "cplus.met"
#line 3315 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3315 "cplus.met"
#line 3317 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3317 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(expression_for_exit,"expression_for")
#line 3317 "cplus.met"
    }
#line 3317 "cplus.met"
#line 3318 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PVIR,";"))){
#line 3318 "cplus.met"
#line 3319 "cplus.met"
        
#line 3319 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 3319 "cplus.met"
        goto expression_for_exit;
#line 3319 "cplus.met"
#line 3319 "cplus.met"
    }
#line 3319 "cplus.met"
#line 3320 "cplus.met"
    {
#line 3320 "cplus.met"
        _retValue = retTree ;
#line 3320 "cplus.met"
        goto expression_for_ret;
#line 3320 "cplus.met"
        
#line 3320 "cplus.met"
    }
#line 3320 "cplus.met"
#line 3320 "cplus.met"
#line 3320 "cplus.met"

#line 3321 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3321 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3321 "cplus.met"
return((PPTREE) 0);
#line 3321 "cplus.met"

#line 3321 "cplus.met"
expression_for_exit :
#line 3321 "cplus.met"

#line 3321 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_EXIT,(PPTREE)0);
#line 3321 "cplus.met"
    _funcLevel--;
#line 3321 "cplus.met"
    return((PPTREE) -1) ;
#line 3321 "cplus.met"

#line 3321 "cplus.met"
expression_for_ret :
#line 3321 "cplus.met"
    
#line 3321 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_RETURN,_retValue);
#line 3321 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3321 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3321 "cplus.met"
    return _retValue ;
#line 3321 "cplus.met"
}
#line 3321 "cplus.met"

#line 3321 "cplus.met"
#line 1071 "cplus.met"
PPTREE cplus::ext_all ( int error_free)
#line 1071 "cplus.met"
{
#line 1071 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1071 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1071 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1071 "cplus.met"
    int _Debug = TRACE_RULE("ext_all",TRACE_ENTER,(PPTREE)0);
#line 1071 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1071 "cplus.met"
#line 1071 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1071 "cplus.met"
#line 1073 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all_no_linkage), 64, cplus)){
#line 1073 "cplus.met"
#line 1074 "cplus.met"
        {
#line 1074 "cplus.met"
            _retValue = retTree ;
#line 1074 "cplus.met"
            goto ext_all_ret;
#line 1074 "cplus.met"
            
#line 1074 "cplus.met"
        }
#line 1074 "cplus.met"
    } else {
#line 1074 "cplus.met"
#line 1076 "cplus.met"
        {
#line 1076 "cplus.met"
            PPTREE _ptTree0=0;
#line 1076 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(linkage_specification)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 1076 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(ext_all_exit,"ext_all")
#line 1076 "cplus.met"
            }
#line 1076 "cplus.met"
            _retValue =_ptTree0;
#line 1076 "cplus.met"
            goto ext_all_ret;
#line 1076 "cplus.met"
        }
#line 1076 "cplus.met"
    }
#line 1076 "cplus.met"
#line 1076 "cplus.met"
#line 1076 "cplus.met"

#line 1077 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1077 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1077 "cplus.met"
return((PPTREE) 0);
#line 1077 "cplus.met"

#line 1077 "cplus.met"
ext_all_exit :
#line 1077 "cplus.met"

#line 1077 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_EXIT,(PPTREE)0);
#line 1077 "cplus.met"
    _funcLevel--;
#line 1077 "cplus.met"
    return((PPTREE) -1) ;
#line 1077 "cplus.met"

#line 1077 "cplus.met"
ext_all_ret :
#line 1077 "cplus.met"
    
#line 1077 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_RETURN,_retValue);
#line 1077 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1077 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1077 "cplus.met"
    return _retValue ;
#line 1077 "cplus.met"
}
#line 1077 "cplus.met"

#line 1077 "cplus.met"
#line 1079 "cplus.met"
PPTREE cplus::ext_all_ext ( int error_free)
#line 1079 "cplus.met"
{
#line 1079 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1079 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1079 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1079 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_ext",TRACE_ENTER,(PPTREE)0);
#line 1079 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1079 "cplus.met"
#line 1079 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1079 "cplus.met"
#line 1081 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(protect_declare), 111, cplus))){
#line 1081 "cplus.met"
#line 1082 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_all)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1082 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_all_ext_exit,"ext_all_ext")
#line 1082 "cplus.met"
        }
#line 1082 "cplus.met"
    }
#line 1082 "cplus.met"
#line 1083 "cplus.met"
    {
#line 1083 "cplus.met"
        _retValue = retTree ;
#line 1083 "cplus.met"
        goto ext_all_ext_ret;
#line 1083 "cplus.met"
        
#line 1083 "cplus.met"
    }
#line 1083 "cplus.met"
#line 1083 "cplus.met"
#line 1083 "cplus.met"

#line 1084 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1084 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1084 "cplus.met"
return((PPTREE) 0);
#line 1084 "cplus.met"

#line 1084 "cplus.met"
ext_all_ext_exit :
#line 1084 "cplus.met"

#line 1084 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_EXIT,(PPTREE)0);
#line 1084 "cplus.met"
    _funcLevel--;
#line 1084 "cplus.met"
    return((PPTREE) -1) ;
#line 1084 "cplus.met"

#line 1084 "cplus.met"
ext_all_ext_ret :
#line 1084 "cplus.met"
    
#line 1084 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_RETURN,_retValue);
#line 1084 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1084 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1084 "cplus.met"
    return _retValue ;
#line 1084 "cplus.met"
}
#line 1084 "cplus.met"

#line 1084 "cplus.met"
#line 1047 "cplus.met"
PPTREE cplus::ext_all_no_linkage ( int error_free)
#line 1047 "cplus.met"
{
#line 1047 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1047 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1047 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1047 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_ENTER,(PPTREE)0);
#line 1047 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1047 "cplus.met"
#line 1047 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1047 "cplus.met"
#line 1047 "cplus.met"
    PPTREE decl = (PPTREE) 0,listTemp = (PPTREE) 0;
#line 1047 "cplus.met"
#line 1049 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TEMPLATE,"template") && (tokenAhead = 0,CommTerm(),1)){
#line 1049 "cplus.met"
#line 1050 "cplus.met"
#line 1051 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1051 "cplus.met"
        if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1051 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,"<")
#line 1051 "cplus.met"
        } else {
#line 1051 "cplus.met"
            tokenAhead = 0 ;
#line 1051 "cplus.met"
        }
#line 1051 "cplus.met"
#line 1051 "cplus.met"
        _addlist1 = listTemp ;
#line 1051 "cplus.met"
#line 1052 "cplus.met"
        do {
#line 1052 "cplus.met"
#line 1053 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1053 "cplus.met"
            switch( lexEl.Value) {
#line 1053 "cplus.met"
#line 1054 "cplus.met"
                case CLASS : 
#line 1054 "cplus.met"
                    tokenAhead = 0 ;
#line 1054 "cplus.met"
                    CommTerm();
#line 1054 "cplus.met"
#line 1054 "cplus.met"
#line 1054 "cplus.met"
                    {
#line 1054 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1054 "cplus.met"
                        {
#line 1054 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 1054 "cplus.met"
                            _ptRes1= MakeTree(CLASS_PARAM, 1);
#line 1054 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus))== (PPTREE) -1 ) {
#line 1054 "cplus.met"
                                MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1054 "cplus.met"
                            }
#line 1054 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1054 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1054 "cplus.met"
                        }
#line 1054 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1054 "cplus.met"
                    }
#line 1054 "cplus.met"
#line 1054 "cplus.met"
                    if (listTemp){
#line 1054 "cplus.met"
#line 1054 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1054 "cplus.met"
                    } else {
#line 1054 "cplus.met"
#line 1054 "cplus.met"
                        listTemp = _addlist1 ;
#line 1054 "cplus.met"
                    }
#line 1054 "cplus.met"
                    break;
#line 1054 "cplus.met"
#line 1056 "cplus.met"
                default : 
#line 1056 "cplus.met"
#line 1056 "cplus.met"
#line 1056 "cplus.met"
                    {
#line 1056 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1056 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus))== (PPTREE) -1 ) {
#line 1056 "cplus.met"
                            MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                            PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1056 "cplus.met"
                        }
#line 1056 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1056 "cplus.met"
                    }
#line 1056 "cplus.met"
#line 1056 "cplus.met"
                    if (listTemp){
#line 1056 "cplus.met"
#line 1056 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1056 "cplus.met"
                    } else {
#line 1056 "cplus.met"
#line 1056 "cplus.met"
                        listTemp = _addlist1 ;
#line 1056 "cplus.met"
                    }
#line 1056 "cplus.met"
                    break;
#line 1056 "cplus.met"
            }
#line 1056 "cplus.met"
#line 1056 "cplus.met"
#line 1058 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1058 "cplus.met"
#line 1059 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1059 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1059 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,">")
#line 1059 "cplus.met"
        } else {
#line 1059 "cplus.met"
            tokenAhead = 0 ;
#line 1059 "cplus.met"
        }
#line 1059 "cplus.met"
#line 1060 "cplus.met"
        {
#line 1060 "cplus.met"
            PPTREE _ptTree0=0;
#line 1060 "cplus.met"
            {
#line 1060 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1060 "cplus.met"
                _ptRes1= MakeTree(TEMPLATE_DECL, 2);
#line 1060 "cplus.met"
                ReplaceTree(_ptRes1, 1, listTemp );
#line 1060 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all_no_linkage)(error_free), 64, cplus))== (PPTREE) -1 ) {
#line 1060 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                    PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1060 "cplus.met"
                }
#line 1060 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1060 "cplus.met"
                _ptTree0=_ptRes1;
#line 1060 "cplus.met"
            }
#line 1060 "cplus.met"
            _retValue =_ptTree0;
#line 1060 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1060 "cplus.met"
        }
#line 1060 "cplus.met"
#line 1060 "cplus.met"
#line 1060 "cplus.met"
    }
#line 1060 "cplus.met"
#line 1062 "cplus.met"
    if ((((NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_data_declaration), 69, cplus)) || 
#line 1062 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(func_declaration), 74, cplus))) || 
#line 1062 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_decl_dir), 70, cplus))) || 
#line 1062 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(asm_declaration), 13, cplus))){
#line 1062 "cplus.met"
#line 1066 "cplus.met"
        {
#line 1066 "cplus.met"
            _retValue = decl ;
#line 1066 "cplus.met"
            goto ext_all_no_linkage_ret;
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
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declaration)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 1068 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1068 "cplus.met"
            }
#line 1068 "cplus.met"
            _retValue =_ptTree0;
#line 1068 "cplus.met"
            goto ext_all_no_linkage_ret;
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
ext_all_no_linkage_exit :
#line 1069 "cplus.met"

#line 1069 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_EXIT,(PPTREE)0);
#line 1069 "cplus.met"
    _funcLevel--;
#line 1069 "cplus.met"
    return((PPTREE) -1) ;
#line 1069 "cplus.met"

#line 1069 "cplus.met"
ext_all_no_linkage_ret :
#line 1069 "cplus.met"
    
#line 1069 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_RETURN,_retValue);
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
#line 1584 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty ( int error_free)
#line 1584 "cplus.met"
{
#line 1584 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1584 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1584 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1584 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_ENTER,(PPTREE)0);
#line 1584 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1584 "cplus.met"
#line 1584 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1584 "cplus.met"
#line 1586 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_data_decl_sc_ty_full), 66, cplus))){
#line 1586 "cplus.met"
#line 1587 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty_short)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1587 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_exit,"ext_data_decl_sc_ty")
#line 1587 "cplus.met"
        }
#line 1587 "cplus.met"
    }
#line 1587 "cplus.met"
#line 1588 "cplus.met"
    {
#line 1588 "cplus.met"
        _retValue = retTree ;
#line 1588 "cplus.met"
        goto ext_data_decl_sc_ty_ret;
#line 1588 "cplus.met"
        
#line 1588 "cplus.met"
    }
#line 1588 "cplus.met"
#line 1588 "cplus.met"
#line 1588 "cplus.met"

#line 1589 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1589 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1589 "cplus.met"
return((PPTREE) 0);
#line 1589 "cplus.met"

#line 1589 "cplus.met"
ext_data_decl_sc_ty_exit :
#line 1589 "cplus.met"

#line 1589 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_EXIT,(PPTREE)0);
#line 1589 "cplus.met"
    _funcLevel--;
#line 1589 "cplus.met"
    return((PPTREE) -1) ;
#line 1589 "cplus.met"

#line 1589 "cplus.met"
ext_data_decl_sc_ty_ret :
#line 1589 "cplus.met"
    
#line 1589 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_RETURN,_retValue);
#line 1589 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1589 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1589 "cplus.met"
    return _retValue ;
#line 1589 "cplus.met"
}
#line 1589 "cplus.met"

#line 1589 "cplus.met"
#line 1565 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_full ( int error_free)
#line 1565 "cplus.met"
{
#line 1565 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1565 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1565 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1565 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_ENTER,(PPTREE)0);
#line 1565 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1565 "cplus.met"
#line 1565 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1565 "cplus.met"
#line 1567 "cplus.met"
    {
#line 1567 "cplus.met"
        PPTREE _ptRes0=0;
#line 1567 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1567 "cplus.met"
        retTree=_ptRes0;
#line 1567 "cplus.met"
    }
#line 1567 "cplus.met"
#line 1568 "cplus.met"
    {
#line 1568 "cplus.met"
        PPTREE _ptTree0=0;
#line 1568 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 1568 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1568 "cplus.met"
        }
#line 1568 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1568 "cplus.met"
    }
#line 1568 "cplus.met"
#line 1569 "cplus.met"
    {
#line 1569 "cplus.met"
        PPTREE _ptTree0=0;
#line 1569 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1569 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1569 "cplus.met"
        }
#line 1569 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1569 "cplus.met"
    }
#line 1569 "cplus.met"
#line 1570 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1570 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1570 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_full_exit,";")
#line 1570 "cplus.met"
    } else {
#line 1570 "cplus.met"
        tokenAhead = 0 ;
#line 1570 "cplus.met"
    }
#line 1570 "cplus.met"
#line 1571 "cplus.met"
    {
#line 1571 "cplus.met"
        _retValue = retTree ;
#line 1571 "cplus.met"
        goto ext_data_decl_sc_ty_full_ret;
#line 1571 "cplus.met"
        
#line 1571 "cplus.met"
    }
#line 1571 "cplus.met"
#line 1571 "cplus.met"
#line 1571 "cplus.met"

#line 1572 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1572 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1572 "cplus.met"
return((PPTREE) 0);
#line 1572 "cplus.met"

#line 1572 "cplus.met"
ext_data_decl_sc_ty_full_exit :
#line 1572 "cplus.met"

#line 1572 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_EXIT,(PPTREE)0);
#line 1572 "cplus.met"
    _funcLevel--;
#line 1572 "cplus.met"
    return((PPTREE) -1) ;
#line 1572 "cplus.met"

#line 1572 "cplus.met"
ext_data_decl_sc_ty_full_ret :
#line 1572 "cplus.met"
    
#line 1572 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_RETURN,_retValue);
#line 1572 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1572 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1572 "cplus.met"
    return _retValue ;
#line 1572 "cplus.met"
}
#line 1572 "cplus.met"

#line 1572 "cplus.met"
#line 1575 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_short ( int error_free)
#line 1575 "cplus.met"
{
#line 1575 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1575 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1575 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1575 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_ENTER,(PPTREE)0);
#line 1575 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1575 "cplus.met"
#line 1575 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1575 "cplus.met"
#line 1577 "cplus.met"
    {
#line 1577 "cplus.met"
        PPTREE _ptRes0=0;
#line 1577 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1577 "cplus.met"
        retTree=_ptRes0;
#line 1577 "cplus.met"
    }
#line 1577 "cplus.met"
#line 1578 "cplus.met"
    {
#line 1578 "cplus.met"
        PPTREE _ptTree0=0;
#line 1578 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1578 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_short_exit,"ext_data_decl_sc_ty_short")
#line 1578 "cplus.met"
        }
#line 1578 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1578 "cplus.met"
    }
#line 1578 "cplus.met"
#line 1579 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1579 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1579 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_short_exit,";")
#line 1579 "cplus.met"
    } else {
#line 1579 "cplus.met"
        tokenAhead = 0 ;
#line 1579 "cplus.met"
    }
#line 1579 "cplus.met"
#line 1580 "cplus.met"
    {
#line 1580 "cplus.met"
        _retValue = retTree ;
#line 1580 "cplus.met"
        goto ext_data_decl_sc_ty_short_ret;
#line 1580 "cplus.met"
        
#line 1580 "cplus.met"
    }
#line 1580 "cplus.met"
#line 1580 "cplus.met"
#line 1580 "cplus.met"

#line 1581 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1581 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1581 "cplus.met"
return((PPTREE) 0);
#line 1581 "cplus.met"

#line 1581 "cplus.met"
ext_data_decl_sc_ty_short_exit :
#line 1581 "cplus.met"

#line 1581 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_EXIT,(PPTREE)0);
#line 1581 "cplus.met"
    _funcLevel--;
#line 1581 "cplus.met"
    return((PPTREE) -1) ;
#line 1581 "cplus.met"

#line 1581 "cplus.met"
ext_data_decl_sc_ty_short_ret :
#line 1581 "cplus.met"
    
#line 1581 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_RETURN,_retValue);
#line 1581 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1581 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1581 "cplus.met"
    return _retValue ;
#line 1581 "cplus.met"
}
#line 1581 "cplus.met"

#line 1581 "cplus.met"
#line 1591 "cplus.met"
PPTREE cplus::ext_data_decl_simp ( int error_free)
#line 1591 "cplus.met"
{
#line 1591 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1591 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1591 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1591 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_ENTER,(PPTREE)0);
#line 1591 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1591 "cplus.met"
#line 1591 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1591 "cplus.met"
#line 1593 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration), 38, cplus))){
#line 1593 "cplus.met"
#line 1594 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1594 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_simp_exit,"ext_data_decl_simp")
#line 1594 "cplus.met"
        }
#line 1594 "cplus.met"
    }
#line 1594 "cplus.met"
#line 1595 "cplus.met"
    {
#line 1595 "cplus.met"
        _retValue = retTree ;
#line 1595 "cplus.met"
        goto ext_data_decl_simp_ret;
#line 1595 "cplus.met"
        
#line 1595 "cplus.met"
    }
#line 1595 "cplus.met"
#line 1595 "cplus.met"
#line 1595 "cplus.met"

#line 1596 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1596 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1596 "cplus.met"
return((PPTREE) 0);
#line 1596 "cplus.met"

#line 1596 "cplus.met"
ext_data_decl_simp_exit :
#line 1596 "cplus.met"

#line 1596 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_EXIT,(PPTREE)0);
#line 1596 "cplus.met"
    _funcLevel--;
#line 1596 "cplus.met"
    return((PPTREE) -1) ;
#line 1596 "cplus.met"

#line 1596 "cplus.met"
ext_data_decl_simp_ret :
#line 1596 "cplus.met"
    
#line 1596 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_RETURN,_retValue);
#line 1596 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1596 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1596 "cplus.met"
    return _retValue ;
#line 1596 "cplus.met"
}
#line 1596 "cplus.met"

#line 1596 "cplus.met"
#line 1606 "cplus.met"
PPTREE cplus::ext_data_declaration ( int error_free)
#line 1606 "cplus.met"
{
#line 1606 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1606 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1606 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1606 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1606 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1606 "cplus.met"
#line 1606 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1606 "cplus.met"
#line 1608 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1608 "cplus.met"
    switch( lexEl.Value) {
#line 1608 "cplus.met"
#line 1609 "cplus.met"
        case TYPEDEF : 
#line 1609 "cplus.met"
            tokenAhead = 0 ;
#line 1609 "cplus.met"
            CommTerm();
#line 1609 "cplus.met"
#line 1610 "cplus.met"
#line 1611 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(typedef_and_declarator), 144, cplus))){
#line 1611 "cplus.met"
#line 1612 "cplus.met"
                {
#line 1612 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1612 "cplus.met"
                    _ptRes0= MakeTree(TYPEDEF, 2);
#line 1612 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 1612 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1612 "cplus.met"
                    }
#line 1612 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1612 "cplus.met"
                    retTree=_ptRes0;
#line 1612 "cplus.met"
                }
#line 1612 "cplus.met"
            }
#line 1612 "cplus.met"
#line 1613 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1613 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1613 "cplus.met"
                MulFreeTree(1,retTree);
                TOKEN_EXIT(ext_data_declaration_exit,";")
#line 1613 "cplus.met"
            } else {
#line 1613 "cplus.met"
                tokenAhead = 0 ;
#line 1613 "cplus.met"
            }
#line 1613 "cplus.met"
#line 1614 "cplus.met"
            {
#line 1614 "cplus.met"
                _retValue = retTree ;
#line 1614 "cplus.met"
                goto ext_data_declaration_ret;
#line 1614 "cplus.met"
                
#line 1614 "cplus.met"
            }
#line 1614 "cplus.met"
#line 1614 "cplus.met"
            break;
#line 1614 "cplus.met"
#line 1616 "cplus.met"
        case NAMESPACE : 
#line 1616 "cplus.met"
#line 1616 "cplus.met"
            {
#line 1616 "cplus.met"
                PPTREE _ptTree0=0;
#line 1616 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 1616 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1616 "cplus.met"
                }
#line 1616 "cplus.met"
                _retValue =_ptTree0;
#line 1616 "cplus.met"
                goto ext_data_declaration_ret;
#line 1616 "cplus.met"
            }
#line 1616 "cplus.met"
            break;
#line 1616 "cplus.met"
#line 1617 "cplus.met"
        case USING : 
#line 1617 "cplus.met"
#line 1617 "cplus.met"
            {
#line 1617 "cplus.met"
                PPTREE _ptTree0=0;
#line 1617 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 1617 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1617 "cplus.met"
                }
#line 1617 "cplus.met"
                _retValue =_ptTree0;
#line 1617 "cplus.met"
                goto ext_data_declaration_ret;
#line 1617 "cplus.met"
            }
#line 1617 "cplus.met"
            break;
#line 1617 "cplus.met"
#line 1618 "cplus.met"
        case PVIR : 
#line 1618 "cplus.met"
            tokenAhead = 0 ;
#line 1618 "cplus.met"
            CommTerm();
#line 1618 "cplus.met"
#line 1618 "cplus.met"
            {
#line 1618 "cplus.met"
                PPTREE _ptTree0=0;
#line 1618 "cplus.met"
                {
#line 1618 "cplus.met"
                    PPTREE _ptRes1=0;
#line 1618 "cplus.met"
                    _ptRes1= MakeTree(STAT_VOID, 0);
#line 1618 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1618 "cplus.met"
                }
#line 1618 "cplus.met"
                _retValue =_ptTree0;
#line 1618 "cplus.met"
                goto ext_data_declaration_ret;
#line 1618 "cplus.met"
            }
#line 1618 "cplus.met"
            break;
#line 1618 "cplus.met"
#line 1619 "cplus.met"
        default : 
#line 1619 "cplus.met"
#line 1619 "cplus.met"
            {
#line 1619 "cplus.met"
                PPTREE _ptTree0=0;
#line 1619 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 68, cplus))== (PPTREE) -1 ) {
#line 1619 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1619 "cplus.met"
                }
#line 1619 "cplus.met"
                _retValue =_ptTree0;
#line 1619 "cplus.met"
                goto ext_data_declaration_ret;
#line 1619 "cplus.met"
            }
#line 1619 "cplus.met"
            break;
#line 1619 "cplus.met"
    }
#line 1619 "cplus.met"
#line 1619 "cplus.met"
#line 1620 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1620 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1620 "cplus.met"
return((PPTREE) 0);
#line 1620 "cplus.met"

#line 1620 "cplus.met"
ext_data_declaration_exit :
#line 1620 "cplus.met"

#line 1620 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1620 "cplus.met"
    _funcLevel--;
#line 1620 "cplus.met"
    return((PPTREE) -1) ;
#line 1620 "cplus.met"

#line 1620 "cplus.met"
ext_data_declaration_ret :
#line 1620 "cplus.met"
    
#line 1620 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_RETURN,_retValue);
#line 1620 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1620 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1620 "cplus.met"
    return _retValue ;
#line 1620 "cplus.met"
}
#line 1620 "cplus.met"

#line 1620 "cplus.met"
#line 1264 "cplus.met"
PPTREE cplus::ext_decl_dir ( int error_free)
#line 1264 "cplus.met"
{
#line 1264 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1264 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1264 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1264 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_dir",TRACE_ENTER,(PPTREE)0);
#line 1264 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1264 "cplus.met"
#line 1264 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1264 "cplus.met"
#line 1266 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 50, cplus)){
#line 1266 "cplus.met"
#line 1267 "cplus.met"
        {
#line 1267 "cplus.met"
            _retValue = retTree ;
#line 1267 "cplus.met"
            goto ext_decl_dir_ret;
#line 1267 "cplus.met"
            
#line 1267 "cplus.met"
        }
#line 1267 "cplus.met"
    }
#line 1267 "cplus.met"
#line 1268 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1268 "cplus.met"
    switch( lexEl.Value) {
#line 1268 "cplus.met"
#line 1269 "cplus.met"
        case META : 
#line 1269 "cplus.met"
        case IF_DIR : 
#line 1269 "cplus.met"
            tokenAhead = 0 ;
#line 1269 "cplus.met"
            CommTerm();
#line 1269 "cplus.met"
#line 1269 "cplus.met"
            {
#line 1269 "cplus.met"
                PPTREE _ptTree0=0;
#line 1269 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1269 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1269 "cplus.met"
                }
#line 1269 "cplus.met"
                _retValue =_ptTree0;
#line 1269 "cplus.met"
                goto ext_decl_dir_ret;
#line 1269 "cplus.met"
            }
#line 1269 "cplus.met"
            break;
#line 1269 "cplus.met"
#line 1270 "cplus.met"
        case IFDEF_DIR : 
#line 1270 "cplus.met"
#line 1270 "cplus.met"
            {
#line 1270 "cplus.met"
                PPTREE _ptTree0=0;
#line 1270 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 72, cplus))== (PPTREE) -1 ) {
#line 1270 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1270 "cplus.met"
                }
#line 1270 "cplus.met"
                _retValue =_ptTree0;
#line 1270 "cplus.met"
                goto ext_decl_dir_ret;
#line 1270 "cplus.met"
            }
#line 1270 "cplus.met"
            break;
#line 1270 "cplus.met"
#line 1271 "cplus.met"
        case IFNDEF_DIR : 
#line 1271 "cplus.met"
#line 1271 "cplus.met"
            {
#line 1271 "cplus.met"
                PPTREE _ptTree0=0;
#line 1271 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 72, cplus))== (PPTREE) -1 ) {
#line 1271 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1271 "cplus.met"
                }
#line 1271 "cplus.met"
                _retValue =_ptTree0;
#line 1271 "cplus.met"
                goto ext_decl_dir_ret;
#line 1271 "cplus.met"
            }
#line 1271 "cplus.met"
            break;
#line 1271 "cplus.met"
        default :
#line 1271 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(ext_decl_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1271 "cplus.met"
            break;
#line 1271 "cplus.met"
    }
#line 1271 "cplus.met"
#line 1271 "cplus.met"
#line 1272 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1272 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1272 "cplus.met"
return((PPTREE) 0);
#line 1272 "cplus.met"

#line 1272 "cplus.met"
ext_decl_dir_exit :
#line 1272 "cplus.met"

#line 1272 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_EXIT,(PPTREE)0);
#line 1272 "cplus.met"
    _funcLevel--;
#line 1272 "cplus.met"
    return((PPTREE) -1) ;
#line 1272 "cplus.met"

#line 1272 "cplus.met"
ext_decl_dir_ret :
#line 1272 "cplus.met"
    
#line 1272 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_RETURN,_retValue);
#line 1272 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1272 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1272 "cplus.met"
    return _retValue ;
#line 1272 "cplus.met"
}
#line 1272 "cplus.met"

#line 1272 "cplus.met"
#line 1198 "cplus.met"
PPTREE cplus::ext_decl_if_dir ( int error_free)
#line 1198 "cplus.met"
{
#line 1198 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1198 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1198 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1198 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1198 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1198 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1198 "cplus.met"
#line 1198 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1198 "cplus.met"
#line 1198 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1198 "cplus.met"
#line 1200 "cplus.met"
    {
#line 1200 "cplus.met"
        keepCarriage = 1 ;
#line 1200 "cplus.met"
#line 1201 "cplus.met"
#line 1202 "cplus.met"
        {
#line 1202 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1202 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1202 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1202 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1202 "cplus.met"
            }
#line 1202 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1202 "cplus.met"
            retTree=_ptRes0;
#line 1202 "cplus.met"
        }
#line 1202 "cplus.met"
#line 1203 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1203 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1203 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(ext_decl_if_dir_exit,"CARRIAGE_RETURN")
#line 1203 "cplus.met"
        } else {
#line 1203 "cplus.met"
            tokenAhead = 0 ;
#line 1203 "cplus.met"
        }
#line 1203 "cplus.met"
#line 1203 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1203 "cplus.met"
    }
#line 1203 "cplus.met"
#line 1203 "cplus.met"
    _addlist1 = list ;
#line 1203 "cplus.met"
#line 1205 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1205 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1205 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1205 "cplus.met"
#line 1206 "cplus.met"
#line 1206 "cplus.met"
        {
#line 1206 "cplus.met"
            PPTREE _ptTree0=0;
#line 1206 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1206 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1206 "cplus.met"
            }
#line 1206 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1206 "cplus.met"
        }
#line 1206 "cplus.met"
#line 1206 "cplus.met"
        if (list){
#line 1206 "cplus.met"
#line 1206 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1206 "cplus.met"
        } else {
#line 1206 "cplus.met"
#line 1206 "cplus.met"
            list = _addlist1 ;
#line 1206 "cplus.met"
        }
#line 1206 "cplus.met"
    } 
#line 1206 "cplus.met"
#line 1207 "cplus.met"
    {
#line 1207 "cplus.met"
        PPTREE _ptTree0=0;
#line 1207 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1207 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1207 "cplus.met"
        }
#line 1207 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1207 "cplus.met"
    }
#line 1207 "cplus.met"
#line 1208 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1208 "cplus.met"
#line 1209 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1209 "cplus.met"
    switch( lexEl.Value) {
#line 1209 "cplus.met"
#line 1210 "cplus.met"
        case META : 
#line 1210 "cplus.met"
        case ELSE_DIR : 
#line 1210 "cplus.met"
            tokenAhead = 0 ;
#line 1210 "cplus.met"
            CommTerm();
#line 1210 "cplus.met"
#line 1211 "cplus.met"
#line 1211 "cplus.met"
            _addlist2 = list2 ;
#line 1211 "cplus.met"
#line 1212 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1212 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1212 "cplus.met"
#line 1213 "cplus.met"
#line 1213 "cplus.met"
                {
#line 1213 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1213 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1213 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1213 "cplus.met"
                    }
#line 1213 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1213 "cplus.met"
                }
#line 1213 "cplus.met"
#line 1213 "cplus.met"
                if (list2){
#line 1213 "cplus.met"
#line 1213 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1213 "cplus.met"
                } else {
#line 1213 "cplus.met"
#line 1213 "cplus.met"
                    list2 = _addlist2 ;
#line 1213 "cplus.met"
                }
#line 1213 "cplus.met"
            } 
#line 1213 "cplus.met"
#line 1214 "cplus.met"
            {
#line 1214 "cplus.met"
                PPTREE _ptTree0=0;
#line 1214 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1214 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1214 "cplus.met"
                }
#line 1214 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1214 "cplus.met"
            }
#line 1214 "cplus.met"
#line 1215 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1215 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1215 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(ext_decl_if_dir_exit,"ENDIF_DIR")
#line 1215 "cplus.met"
            } else {
#line 1215 "cplus.met"
                tokenAhead = 0 ;
#line 1215 "cplus.met"
            }
#line 1215 "cplus.met"
#line 1216 "cplus.met"
            {
#line 1216 "cplus.met"
                PPTREE _ptTree0=0;
#line 1216 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1216 "cplus.met"
                _retValue =_ptTree0;
#line 1216 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1216 "cplus.met"
            }
#line 1216 "cplus.met"
#line 1216 "cplus.met"
            break;
#line 1216 "cplus.met"
#line 1218 "cplus.met"
        case ELIF_DIR : 
#line 1218 "cplus.met"
            tokenAhead = 0 ;
#line 1218 "cplus.met"
            CommTerm();
#line 1218 "cplus.met"
#line 1218 "cplus.met"
            {
#line 1218 "cplus.met"
                PPTREE _ptTree0=0;
#line 1218 "cplus.met"
                {
#line 1218 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1218 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1218 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1218 "cplus.met"
                    }
#line 1218 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1218 "cplus.met"
                }
#line 1218 "cplus.met"
                _retValue =_ptTree0;
#line 1218 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1218 "cplus.met"
            }
#line 1218 "cplus.met"
            break;
#line 1218 "cplus.met"
#line 1219 "cplus.met"
        case ENDIF_DIR : 
#line 1219 "cplus.met"
            tokenAhead = 0 ;
#line 1219 "cplus.met"
            CommTerm();
#line 1219 "cplus.met"
#line 1219 "cplus.met"
            {
#line 1219 "cplus.met"
                _retValue = retTree ;
#line 1219 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1219 "cplus.met"
                
#line 1219 "cplus.met"
            }
#line 1219 "cplus.met"
            break;
#line 1219 "cplus.met"
        default :
#line 1219 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(ext_decl_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1219 "cplus.met"
            break;
#line 1219 "cplus.met"
    }
#line 1219 "cplus.met"
#line 1219 "cplus.met"
#line 1220 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1220 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1220 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1220 "cplus.met"
return((PPTREE) 0);
#line 1220 "cplus.met"

#line 1220 "cplus.met"
ext_decl_if_dir_exit :
#line 1220 "cplus.met"

#line 1220 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1220 "cplus.met"
    _funcLevel--;
#line 1220 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1220 "cplus.met"
    return((PPTREE) -1) ;
#line 1220 "cplus.met"

#line 1220 "cplus.met"
ext_decl_if_dir_ret :
#line 1220 "cplus.met"
    
#line 1220 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_RETURN,_retValue);
#line 1220 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1220 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1220 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1220 "cplus.met"
    return _retValue ;
#line 1220 "cplus.met"
}
#line 1220 "cplus.met"

#line 1220 "cplus.met"
