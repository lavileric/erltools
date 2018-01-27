/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 807 "cplus.met"
PPTREE cplus::end_pragma ( int error_free)
#line 807 "cplus.met"
{
#line 807 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 807 "cplus.met"
    int _value,_nbPre = 0 ;
#line 807 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 807 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma",TRACE_ENTER,(PPTREE)0);
#line 807 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 807 "cplus.met"
#line 808 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 808 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 808 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_DIR")
#line 808 "cplus.met"
    } else {
#line 808 "cplus.met"
        tokenAhead = 0 ;
#line 808 "cplus.met"
    }
#line 808 "cplus.met"
#line 809 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 809 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_PRETTY,"PRAGMA_PRETTY") || !(CommTerm(),1)) {
#line 809 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_PRETTY")
#line 809 "cplus.met"
    } else {
#line 809 "cplus.met"
        tokenAhead = 0 ;
#line 809 "cplus.met"
    }
#line 809 "cplus.met"
#line 809 "cplus.met"
#line 809 "cplus.met"

#line 810 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 810 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 810 "cplus.met"
return((PPTREE) 0);
#line 810 "cplus.met"

#line 810 "cplus.met"
end_pragma_exit :
#line 810 "cplus.met"

#line 810 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_EXIT,(PPTREE)0);
#line 810 "cplus.met"
    _funcLevel--;
#line 810 "cplus.met"
    return((PPTREE) -1) ;
#line 810 "cplus.met"

#line 810 "cplus.met"
end_pragma_ret :
#line 810 "cplus.met"
    
#line 810 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_RETURN,_retValue);
#line 810 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 810 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 810 "cplus.met"
    return _retValue ;
#line 810 "cplus.met"
}
#line 810 "cplus.met"

#line 810 "cplus.met"
#line 812 "cplus.met"
PPTREE cplus::end_pragma_managed ( int error_free)
#line 812 "cplus.met"
{
#line 812 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 812 "cplus.met"
    int _value,_nbPre = 0 ;
#line 812 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 812 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma_managed",TRACE_ENTER,(PPTREE)0);
#line 812 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 812 "cplus.met"
#line 813 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 813 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 813 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_DIR")
#line 813 "cplus.met"
    } else {
#line 813 "cplus.met"
        tokenAhead = 0 ;
#line 813 "cplus.met"
    }
#line 813 "cplus.met"
#line 814 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 814 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_MANAGED,"PRAGMA_MANAGED") || !(CommTerm(),1)) {
#line 814 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_MANAGED")
#line 814 "cplus.met"
    } else {
#line 814 "cplus.met"
        tokenAhead = 0 ;
#line 814 "cplus.met"
    }
#line 814 "cplus.met"
#line 814 "cplus.met"
#line 814 "cplus.met"

#line 815 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 815 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 815 "cplus.met"
return((PPTREE) 0);
#line 815 "cplus.met"

#line 815 "cplus.met"
end_pragma_managed_exit :
#line 815 "cplus.met"

#line 815 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_EXIT,(PPTREE)0);
#line 815 "cplus.met"
    _funcLevel--;
#line 815 "cplus.met"
    return((PPTREE) -1) ;
#line 815 "cplus.met"

#line 815 "cplus.met"
end_pragma_managed_ret :
#line 815 "cplus.met"
    
#line 815 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_RETURN,_retValue);
#line 815 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 815 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 815 "cplus.met"
    return _retValue ;
#line 815 "cplus.met"
}
#line 815 "cplus.met"

#line 815 "cplus.met"
#line 1755 "cplus.met"
PPTREE cplus::enum_declarator ( int error_free)
#line 1755 "cplus.met"
{
#line 1755 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1755 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1755 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1755 "cplus.met"
    int _Debug = TRACE_RULE("enum_declarator",TRACE_ENTER,(PPTREE)0);
#line 1755 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1755 "cplus.met"
#line 1755 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1755 "cplus.met"
#line 1755 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1755 "cplus.met"
#line 1757 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1757 "cplus.met"
    if (  !SEE_TOKEN( ENUM,"enum") || !(CommTerm(),1)) {
#line 1757 "cplus.met"
        MulFreeTree(4,_addlist1,list,retTree,valTree);
        TOKEN_EXIT(enum_declarator_exit,"enum")
#line 1757 "cplus.met"
    } else {
#line 1757 "cplus.met"
        tokenAhead = 0 ;
#line 1757 "cplus.met"
    }
#line 1757 "cplus.met"
#line 1758 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1758 "cplus.met"
#line 1759 "cplus.met"
        {
#line 1759 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1759 "cplus.met"
            _ptRes0= MakeTree(ENUM, 2);
#line 1759 "cplus.met"
            {
#line 1759 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1759 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1759 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1759 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1759 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,list,retTree,valTree);
                    TOKEN_EXIT(enum_declarator_exit,"IDENT")
#line 1759 "cplus.met"
                } else {
#line 1759 "cplus.met"
                    tokenAhead = 0 ;
#line 1759 "cplus.met"
                }
#line 1759 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1759 "cplus.met"
                _ptTree0=_ptRes1;
#line 1759 "cplus.met"
            }
#line 1759 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1759 "cplus.met"
            retTree=_ptRes0;
#line 1759 "cplus.met"
        }
#line 1759 "cplus.met"
    } else {
#line 1759 "cplus.met"
#line 1761 "cplus.met"
        {
#line 1761 "cplus.met"
            PPTREE _ptRes0=0;
#line 1761 "cplus.met"
            _ptRes0= MakeTree(ENUM, 2);
#line 1761 "cplus.met"
            retTree=_ptRes0;
#line 1761 "cplus.met"
        }
#line 1761 "cplus.met"
    }
#line 1761 "cplus.met"
#line 1762 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 1762 "cplus.met"
#line 1763 "cplus.met"
#line 1763 "cplus.met"
        _addlist1 = list ;
#line 1763 "cplus.met"
#line 1764 "cplus.met"
        do {
#line 1764 "cplus.met"
#line 1765 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(enum_val), 54, cplus)){
#line 1765 "cplus.met"
#line 1766 "cplus.met"
#line 1766 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 1766 "cplus.met"
#line 1766 "cplus.met"
                if (list){
#line 1766 "cplus.met"
#line 1766 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1766 "cplus.met"
                } else {
#line 1766 "cplus.met"
#line 1766 "cplus.met"
                    list = _addlist1 ;
#line 1766 "cplus.met"
                }
#line 1766 "cplus.met"
            } else {
#line 1766 "cplus.met"
#line 1768 "cplus.met"
                
#line 1768 "cplus.met"
                MulFreeTree(4,_addlist1,list,retTree,valTree);
                LEX_EXIT ("",0);
#line 1768 "cplus.met"
                goto enum_declarator_exit;
#line 1768 "cplus.met"
            }
#line 1768 "cplus.met"
#line 1768 "cplus.met"
#line 1769 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 1769 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1769 "cplus.met"
#line 1770 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1770 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1770 "cplus.met"
            MulFreeTree(4,_addlist1,list,retTree,valTree);
            TOKEN_EXIT(enum_declarator_exit,"}")
#line 1770 "cplus.met"
        } else {
#line 1770 "cplus.met"
            tokenAhead = 0 ;
#line 1770 "cplus.met"
        }
#line 1770 "cplus.met"
#line 1771 "cplus.met"
        ReplaceTree(retTree ,2 ,list );
#line 1771 "cplus.met"
#line 1771 "cplus.met"
#line 1771 "cplus.met"
    }
#line 1771 "cplus.met"
#line 1773 "cplus.met"
    {
#line 1773 "cplus.met"
        _retValue = retTree ;
#line 1773 "cplus.met"
        goto enum_declarator_ret;
#line 1773 "cplus.met"
        
#line 1773 "cplus.met"
    }
#line 1773 "cplus.met"
#line 1773 "cplus.met"
#line 1773 "cplus.met"

#line 1774 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1774 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1774 "cplus.met"
return((PPTREE) 0);
#line 1774 "cplus.met"

#line 1774 "cplus.met"
enum_declarator_exit :
#line 1774 "cplus.met"

#line 1774 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_EXIT,(PPTREE)0);
#line 1774 "cplus.met"
    _funcLevel--;
#line 1774 "cplus.met"
    return((PPTREE) -1) ;
#line 1774 "cplus.met"

#line 1774 "cplus.met"
enum_declarator_ret :
#line 1774 "cplus.met"
    
#line 1774 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_RETURN,_retValue);
#line 1774 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1774 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1774 "cplus.met"
    return _retValue ;
#line 1774 "cplus.met"
}
#line 1774 "cplus.met"

#line 1774 "cplus.met"
#line 1745 "cplus.met"
PPTREE cplus::enum_val ( int error_free)
#line 1745 "cplus.met"
{
#line 1745 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1745 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1745 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1745 "cplus.met"
    int _Debug = TRACE_RULE("enum_val",TRACE_ENTER,(PPTREE)0);
#line 1745 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1745 "cplus.met"
#line 1745 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1745 "cplus.met"
#line 1747 "cplus.met"
    {
#line 1747 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1747 "cplus.met"
        _ptRes0= MakeTree(TYP_AFF, 2);
#line 1747 "cplus.met"
        {
#line 1747 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1747 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1747 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1747 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1747 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,valTree);
                TOKEN_EXIT(enum_val_exit,"IDENT")
#line 1747 "cplus.met"
            } else {
#line 1747 "cplus.met"
                tokenAhead = 0 ;
#line 1747 "cplus.met"
            }
#line 1747 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1747 "cplus.met"
            _ptTree0=_ptRes1;
#line 1747 "cplus.met"
        }
#line 1747 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1747 "cplus.met"
        valTree=_ptRes0;
#line 1747 "cplus.met"
    }
#line 1747 "cplus.met"
#line 1748 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 1748 "cplus.met"
#line 1749 "cplus.met"
        {
#line 1749 "cplus.met"
            PPTREE _ptTree0=0;
#line 1749 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 1749 "cplus.met"
                MulFreeTree(2,_ptTree0,valTree);
                PROG_EXIT(enum_val_exit,"enum_val")
#line 1749 "cplus.met"
            }
#line 1749 "cplus.met"
            ReplaceTree(valTree , 2 , _ptTree0);
#line 1749 "cplus.met"
        }
#line 1749 "cplus.met"
#line 1749 "cplus.met"
    }
#line 1749 "cplus.met"
#line 1750 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)){
#line 1750 "cplus.met"
#line 1750 "cplus.met"
    }
#line 1750 "cplus.met"
#line 1752 "cplus.met"
    {
#line 1752 "cplus.met"
        _retValue = valTree ;
#line 1752 "cplus.met"
        goto enum_val_ret;
#line 1752 "cplus.met"
        
#line 1752 "cplus.met"
    }
#line 1752 "cplus.met"
#line 1752 "cplus.met"
#line 1752 "cplus.met"

#line 1753 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1753 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1753 "cplus.met"
return((PPTREE) 0);
#line 1753 "cplus.met"

#line 1753 "cplus.met"
enum_val_exit :
#line 1753 "cplus.met"

#line 1753 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_EXIT,(PPTREE)0);
#line 1753 "cplus.met"
    _funcLevel--;
#line 1753 "cplus.met"
    return((PPTREE) -1) ;
#line 1753 "cplus.met"

#line 1753 "cplus.met"
enum_val_ret :
#line 1753 "cplus.met"
    
#line 1753 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_RETURN,_retValue);
#line 1753 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1753 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1753 "cplus.met"
    return _retValue ;
#line 1753 "cplus.met"
}
#line 1753 "cplus.met"

#line 1753 "cplus.met"
#line 2651 "cplus.met"
PPTREE cplus::equality_expression ( int error_free)
#line 2651 "cplus.met"
{
#line 2651 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2651 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2651 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2651 "cplus.met"
    int _Debug = TRACE_RULE("equality_expression",TRACE_ENTER,(PPTREE)0);
#line 2651 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2651 "cplus.met"
#line 2651 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2651 "cplus.met"
#line 2653 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(relational_expression)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 2653 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2653 "cplus.met"
    }
#line 2653 "cplus.met"
#line 2654 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EGALEGAL,"==")) || 
#line 2654 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EXCLEGAL,"!="))) { 
#line 2654 "cplus.met"
#line 2655 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGALEGAL,"==") && (tokenAhead = 0,CommTerm(),1)){
#line 2655 "cplus.met"
#line 2656 "cplus.met"
            {
#line 2656 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2656 "cplus.met"
                _ptRes0= MakeTree(EQU, 2);
#line 2656 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2656 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 2656 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2656 "cplus.met"
                }
#line 2656 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2656 "cplus.met"
                expTree=_ptRes0;
#line 2656 "cplus.met"
            }
#line 2656 "cplus.met"
        } else {
#line 2656 "cplus.met"
#line 2658 "cplus.met"
#line 2659 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2659 "cplus.met"
            if (  !SEE_TOKEN( EXCLEGAL,"!=") || !(CommTerm(),1)) {
#line 2659 "cplus.met"
                MulFreeTree(1,expTree);
                TOKEN_EXIT(equality_expression_exit,"!=")
#line 2659 "cplus.met"
            } else {
#line 2659 "cplus.met"
                tokenAhead = 0 ;
#line 2659 "cplus.met"
            }
#line 2659 "cplus.met"
#line 2660 "cplus.met"
            {
#line 2660 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2660 "cplus.met"
                _ptRes0= MakeTree(NEQU, 2);
#line 2660 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2660 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 2660 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2660 "cplus.met"
                }
#line 2660 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2660 "cplus.met"
                expTree=_ptRes0;
#line 2660 "cplus.met"
            }
#line 2660 "cplus.met"
#line 2660 "cplus.met"
        }
#line 2660 "cplus.met"
    } 
#line 2660 "cplus.met"
#line 2662 "cplus.met"
    {
#line 2662 "cplus.met"
        _retValue = expTree ;
#line 2662 "cplus.met"
        goto equality_expression_ret;
#line 2662 "cplus.met"
        
#line 2662 "cplus.met"
    }
#line 2662 "cplus.met"
#line 2662 "cplus.met"
#line 2662 "cplus.met"

#line 2663 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2663 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2663 "cplus.met"
return((PPTREE) 0);
#line 2663 "cplus.met"

#line 2663 "cplus.met"
equality_expression_exit :
#line 2663 "cplus.met"

#line 2663 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_EXIT,(PPTREE)0);
#line 2663 "cplus.met"
    _funcLevel--;
#line 2663 "cplus.met"
    return((PPTREE) -1) ;
#line 2663 "cplus.met"

#line 2663 "cplus.met"
equality_expression_ret :
#line 2663 "cplus.met"
    
#line 2663 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_RETURN,_retValue);
#line 2663 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2663 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2663 "cplus.met"
    return _retValue ;
#line 2663 "cplus.met"
}
#line 2663 "cplus.met"

#line 2663 "cplus.met"
#line 1986 "cplus.met"
PPTREE cplus::exception ( int error_free)
#line 1986 "cplus.met"
{
#line 1986 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1986 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1986 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1986 "cplus.met"
    int _Debug = TRACE_RULE("exception",TRACE_ENTER,(PPTREE)0);
#line 1986 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1986 "cplus.met"
#line 1986 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1986 "cplus.met"
#line 1986 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1986 "cplus.met"
#line 1988 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1988 "cplus.met"
    if ( ! TERM_OR_META(TRY_UPPER,"TRY_UPPER") || !(CommTerm(),1)) {
#line 1988 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(exception_exit,"TRY_UPPER")
#line 1988 "cplus.met"
    } else {
#line 1988 "cplus.met"
        tokenAhead = 0 ;
#line 1988 "cplus.met"
    }
#line 1988 "cplus.met"
#line 1989 "cplus.met"
    {
#line 1989 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1989 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION, 2);
#line 1989 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1989 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            PROG_EXIT(exception_exit,"exception")
#line 1989 "cplus.met"
        }
#line 1989 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1989 "cplus.met"
        retTree=_ptRes0;
#line 1989 "cplus.met"
    }
#line 1989 "cplus.met"
#line 1989 "cplus.met"
    _addlist1 = list ;
#line 1989 "cplus.met"
#line 1990 "cplus.met"
    do {
#line 1990 "cplus.met"
#line 1991 "cplus.met"
        {
#line 1991 "cplus.met"
            PPTREE _ptTree0=0;
#line 1991 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(catch_unit)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 1991 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(exception_exit,"exception")
#line 1991 "cplus.met"
            }
#line 1991 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1991 "cplus.met"
        }
#line 1991 "cplus.met"
#line 1991 "cplus.met"
        if (list){
#line 1991 "cplus.met"
#line 1991 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1991 "cplus.met"
        } else {
#line 1991 "cplus.met"
#line 1991 "cplus.met"
            list = _addlist1 ;
#line 1991 "cplus.met"
        }
#line 1991 "cplus.met"
#line 1991 "cplus.met"
#line 1992 "cplus.met"
    } while ( !((((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH,"END_CATCH") && (tokenAhead = 0,CommTerm(),1)) || 
#line 1992 "cplus.met"
                ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH_ALL,"END_CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))) || 
#line 1992 "cplus.met"
               (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1992 "cplus.met"
#line 1993 "cplus.met"
    {
#line 1993 "cplus.met"
        PPTREE _ptTree0=0;
#line 1993 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1993 "cplus.met"
        _retValue =_ptTree0;
#line 1993 "cplus.met"
        goto exception_ret;
#line 1993 "cplus.met"
    }
#line 1993 "cplus.met"
#line 1993 "cplus.met"
#line 1993 "cplus.met"

#line 1994 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1994 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1994 "cplus.met"
return((PPTREE) 0);
#line 1994 "cplus.met"

#line 1994 "cplus.met"
exception_exit :
#line 1994 "cplus.met"

#line 1994 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_EXIT,(PPTREE)0);
#line 1994 "cplus.met"
    _funcLevel--;
#line 1994 "cplus.met"
    return((PPTREE) -1) ;
#line 1994 "cplus.met"

#line 1994 "cplus.met"
exception_ret :
#line 1994 "cplus.met"
    
#line 1994 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_RETURN,_retValue);
#line 1994 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1994 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1994 "cplus.met"
    return _retValue ;
#line 1994 "cplus.met"
}
#line 1994 "cplus.met"

#line 1994 "cplus.met"
#line 2017 "cplus.met"
PPTREE cplus::exception_ansi ( int error_free)
#line 2017 "cplus.met"
{
#line 2017 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2017 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2017 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2017 "cplus.met"
    int _Debug = TRACE_RULE("exception_ansi",TRACE_ENTER,(PPTREE)0);
#line 2017 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2017 "cplus.met"
#line 2017 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2017 "cplus.met"
#line 2017 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,elem = (PPTREE) 0;
#line 2017 "cplus.met"
#line 2019 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2019 "cplus.met"
    if (  !SEE_TOKEN( TRY,"try") || !(CommTerm(),1)) {
#line 2019 "cplus.met"
        MulFreeTree(4,_addlist1,elem,list,retTree);
        TOKEN_EXIT(exception_ansi_exit,"try")
#line 2019 "cplus.met"
    } else {
#line 2019 "cplus.met"
        tokenAhead = 0 ;
#line 2019 "cplus.met"
    }
#line 2019 "cplus.met"
#line 2020 "cplus.met"
    {
#line 2020 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2020 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION_ANSI, 2);
#line 2020 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2020 "cplus.met"
            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,elem,list,retTree);
            PROG_EXIT(exception_ansi_exit,"exception_ansi")
#line 2020 "cplus.met"
        }
#line 2020 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2020 "cplus.met"
        retTree=_ptRes0;
#line 2020 "cplus.met"
    }
#line 2020 "cplus.met"
#line 2020 "cplus.met"
    _addlist1 = list ;
#line 2020 "cplus.met"
#line 2021 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(elem = ,_Tak(catch_unit_ansi), 22, cplus)) { 
#line 2021 "cplus.met"
#line 2022 "cplus.met"
#line 2022 "cplus.met"
        _addlist1 =AddList(_addlist1 ,elem );
#line 2022 "cplus.met"
#line 2022 "cplus.met"
        if (list){
#line 2022 "cplus.met"
#line 2022 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2022 "cplus.met"
        } else {
#line 2022 "cplus.met"
#line 2022 "cplus.met"
            list = _addlist1 ;
#line 2022 "cplus.met"
        }
#line 2022 "cplus.met"
    } 
#line 2022 "cplus.met"
#line 2023 "cplus.met"
    {
#line 2023 "cplus.met"
        PPTREE _ptTree0=0;
#line 2023 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 2023 "cplus.met"
        _retValue =_ptTree0;
#line 2023 "cplus.met"
        goto exception_ansi_ret;
#line 2023 "cplus.met"
    }
#line 2023 "cplus.met"
#line 2023 "cplus.met"
#line 2023 "cplus.met"

#line 2024 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2024 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2024 "cplus.met"
return((PPTREE) 0);
#line 2024 "cplus.met"

#line 2024 "cplus.met"
exception_ansi_exit :
#line 2024 "cplus.met"

#line 2024 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_EXIT,(PPTREE)0);
#line 2024 "cplus.met"
    _funcLevel--;
#line 2024 "cplus.met"
    return((PPTREE) -1) ;
#line 2024 "cplus.met"

#line 2024 "cplus.met"
exception_ansi_ret :
#line 2024 "cplus.met"
    
#line 2024 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_RETURN,_retValue);
#line 2024 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2024 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2024 "cplus.met"
    return _retValue ;
#line 2024 "cplus.met"
}
#line 2024 "cplus.met"

#line 2024 "cplus.met"
#line 3215 "cplus.met"
PPTREE cplus::exception_list ( int error_free)
#line 3215 "cplus.met"
{
#line 3215 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3215 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3215 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3215 "cplus.met"
    int _Debug = TRACE_RULE("exception_list",TRACE_ENTER,(PPTREE)0);
#line 3215 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3215 "cplus.met"
#line 3215 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3215 "cplus.met"
#line 3215 "cplus.met"
    PPTREE exceptionList = (PPTREE) 0;
#line 3215 "cplus.met"
#line 3217 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3217 "cplus.met"
    if (  !SEE_TOKEN( THROW,"throw") || !(CommTerm(),1)) {
#line 3217 "cplus.met"
        MulFreeTree(2,_addlist1,exceptionList);
        TOKEN_EXIT(exception_list_exit,"throw")
#line 3217 "cplus.met"
    } else {
#line 3217 "cplus.met"
        tokenAhead = 0 ;
#line 3217 "cplus.met"
    }
#line 3217 "cplus.met"
#line 3218 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3218 "cplus.met"
#line 3219 "cplus.met"
#line 3219 "cplus.met"
        _addlist1 = exceptionList ;
#line 3219 "cplus.met"
#line 3220 "cplus.met"
        do {
#line 3220 "cplus.met"
#line 3221 "cplus.met"
            {
#line 3221 "cplus.met"
                PPTREE _ptTree0=0;
#line 3221 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 3221 "cplus.met"
                    MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                    PROG_EXIT(exception_list_exit,"exception_list")
#line 3221 "cplus.met"
                }
#line 3221 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3221 "cplus.met"
            }
#line 3221 "cplus.met"
#line 3221 "cplus.met"
            if (exceptionList){
#line 3221 "cplus.met"
#line 3221 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3221 "cplus.met"
            } else {
#line 3221 "cplus.met"
#line 3221 "cplus.met"
                exceptionList = _addlist1 ;
#line 3221 "cplus.met"
            }
#line 3221 "cplus.met"
#line 3221 "cplus.met"
#line 3222 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3222 "cplus.met"
#line 3223 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3223 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3223 "cplus.met"
            MulFreeTree(2,_addlist1,exceptionList);
            TOKEN_EXIT(exception_list_exit,")")
#line 3223 "cplus.met"
        } else {
#line 3223 "cplus.met"
            tokenAhead = 0 ;
#line 3223 "cplus.met"
        }
#line 3223 "cplus.met"
#line 3223 "cplus.met"
#line 3223 "cplus.met"
    } else {
#line 3223 "cplus.met"
#line 3226 "cplus.met"
        {
#line 3226 "cplus.met"
            PPTREE _ptTree0=0;
#line 3226 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 3226 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                PROG_EXIT(exception_list_exit,"exception_list")
#line 3226 "cplus.met"
            }
#line 3226 "cplus.met"
            exceptionList =AddList(exceptionList , _ptTree0);
#line 3226 "cplus.met"
        }
#line 3226 "cplus.met"
    }
#line 3226 "cplus.met"
#line 3227 "cplus.met"
    {
#line 3227 "cplus.met"
        PPTREE _ptTree0=0;
#line 3227 "cplus.met"
        {
#line 3227 "cplus.met"
            PPTREE _ptRes1=0;
#line 3227 "cplus.met"
            _ptRes1= MakeTree(EXCEPTION_LIST, 1);
#line 3227 "cplus.met"
            ReplaceTree(_ptRes1, 1, exceptionList );
#line 3227 "cplus.met"
            _ptTree0=_ptRes1;
#line 3227 "cplus.met"
        }
#line 3227 "cplus.met"
        _retValue =_ptTree0;
#line 3227 "cplus.met"
        goto exception_list_ret;
#line 3227 "cplus.met"
    }
#line 3227 "cplus.met"
#line 3227 "cplus.met"
#line 3227 "cplus.met"

#line 3228 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3228 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3228 "cplus.met"
return((PPTREE) 0);
#line 3228 "cplus.met"

#line 3228 "cplus.met"
exception_list_exit :
#line 3228 "cplus.met"

#line 3228 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_EXIT,(PPTREE)0);
#line 3228 "cplus.met"
    _funcLevel--;
#line 3228 "cplus.met"
    return((PPTREE) -1) ;
#line 3228 "cplus.met"

#line 3228 "cplus.met"
exception_list_ret :
#line 3228 "cplus.met"
    
#line 3228 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_RETURN,_retValue);
#line 3228 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3228 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3228 "cplus.met"
    return _retValue ;
#line 3228 "cplus.met"
}
#line 3228 "cplus.met"

#line 3228 "cplus.met"
#line 2635 "cplus.met"
PPTREE cplus::exclusive_or_expression ( int error_free)
#line 2635 "cplus.met"
{
#line 2635 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2635 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2635 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2635 "cplus.met"
    int _Debug = TRACE_RULE("exclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2635 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2635 "cplus.met"
#line 2635 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2635 "cplus.met"
#line 2637 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2637 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2637 "cplus.met"
    }
#line 2637 "cplus.met"
#line 2638 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CHAP,"^") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2638 "cplus.met"
#line 2639 "cplus.met"
        {
#line 2639 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2639 "cplus.met"
            _ptRes0= MakeTree(LXOR, 2);
#line 2639 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2639 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2639 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2639 "cplus.met"
            }
#line 2639 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2639 "cplus.met"
            expTree=_ptRes0;
#line 2639 "cplus.met"
        }
#line 2639 "cplus.met"
    } 
#line 2639 "cplus.met"
#line 2640 "cplus.met"
    {
#line 2640 "cplus.met"
        _retValue = expTree ;
#line 2640 "cplus.met"
        goto exclusive_or_expression_ret;
#line 2640 "cplus.met"
        
#line 2640 "cplus.met"
    }
#line 2640 "cplus.met"
#line 2640 "cplus.met"
#line 2640 "cplus.met"

#line 2641 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2641 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2641 "cplus.met"
return((PPTREE) 0);
#line 2641 "cplus.met"

#line 2641 "cplus.met"
exclusive_or_expression_exit :
#line 2641 "cplus.met"

#line 2641 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2641 "cplus.met"
    _funcLevel--;
#line 2641 "cplus.met"
    return((PPTREE) -1) ;
#line 2641 "cplus.met"

#line 2641 "cplus.met"
exclusive_or_expression_ret :
#line 2641 "cplus.met"
    
#line 2641 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_RETURN,_retValue);
#line 2641 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2641 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2641 "cplus.met"
    return _retValue ;
#line 2641 "cplus.met"
}
#line 2641 "cplus.met"

#line 2641 "cplus.met"
#line 2555 "cplus.met"
PPTREE cplus::expression ( int error_free)
#line 2555 "cplus.met"
{
#line 2555 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2555 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2555 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2555 "cplus.met"
    int _Debug = TRACE_RULE("expression",TRACE_ENTER,(PPTREE)0);
#line 2555 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2555 "cplus.met"
#line 2555 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2555 "cplus.met"
#line 2555 "cplus.met"
    PPTREE expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2555 "cplus.met"
#line 2557 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2557 "cplus.met"
        MulFreeTree(3,_addlist1,expTree,list);
        PROG_EXIT(expression_exit,"expression")
#line 2557 "cplus.met"
    }
#line 2557 "cplus.met"
#line 2558 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,",")){
#line 2558 "cplus.met"
#line 2559 "cplus.met"
#line 2560 "cplus.met"
        list =AddList(list ,expTree );
#line 2560 "cplus.met"
#line 2560 "cplus.met"
        _addlist1 = list ;
#line 2560 "cplus.met"
#line 2561 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2561 "cplus.met"
#line 2562 "cplus.met"
#line 2562 "cplus.met"
            {
#line 2562 "cplus.met"
                PPTREE _ptTree0=0;
#line 2562 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2562 "cplus.met"
                    MulFreeTree(4,_ptTree0,_addlist1,expTree,list);
                    PROG_EXIT(expression_exit,"expression")
#line 2562 "cplus.met"
                }
#line 2562 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2562 "cplus.met"
            }
#line 2562 "cplus.met"
#line 2562 "cplus.met"
            if (list){
#line 2562 "cplus.met"
#line 2562 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2562 "cplus.met"
            } else {
#line 2562 "cplus.met"
#line 2562 "cplus.met"
                list = _addlist1 ;
#line 2562 "cplus.met"
            }
#line 2562 "cplus.met"
        } 
#line 2562 "cplus.met"
#line 2563 "cplus.met"
        {
#line 2563 "cplus.met"
            PPTREE _ptTree0=0;
#line 2563 "cplus.met"
            {
#line 2563 "cplus.met"
                PPTREE _ptRes1=0;
#line 2563 "cplus.met"
                _ptRes1= MakeTree(EXP_SEQ, 1);
#line 2563 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2563 "cplus.met"
                _ptTree0=_ptRes1;
#line 2563 "cplus.met"
            }
#line 2563 "cplus.met"
            _retValue =_ptTree0;
#line 2563 "cplus.met"
            goto expression_ret;
#line 2563 "cplus.met"
        }
#line 2563 "cplus.met"
#line 2563 "cplus.met"
#line 2563 "cplus.met"
    } else {
#line 2563 "cplus.met"
#line 2566 "cplus.met"
        {
#line 2566 "cplus.met"
            _retValue = expTree ;
#line 2566 "cplus.met"
            goto expression_ret;
#line 2566 "cplus.met"
            
#line 2566 "cplus.met"
        }
#line 2566 "cplus.met"
    }
#line 2566 "cplus.met"
#line 2566 "cplus.met"
#line 2566 "cplus.met"

#line 2567 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2567 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2567 "cplus.met"
return((PPTREE) 0);
#line 2567 "cplus.met"

#line 2567 "cplus.met"
expression_exit :
#line 2567 "cplus.met"

#line 2567 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_EXIT,(PPTREE)0);
#line 2567 "cplus.met"
    _funcLevel--;
#line 2567 "cplus.met"
    return((PPTREE) -1) ;
#line 2567 "cplus.met"

#line 2567 "cplus.met"
expression_ret :
#line 2567 "cplus.met"
    
#line 2567 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_RETURN,_retValue);
#line 2567 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2567 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2567 "cplus.met"
    return _retValue ;
#line 2567 "cplus.met"
}
#line 2567 "cplus.met"

#line 2567 "cplus.met"
#line 3293 "cplus.met"
PPTREE cplus::expression_for ( int error_free)
#line 3293 "cplus.met"
{
#line 3293 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3293 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3293 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3293 "cplus.met"
    int _Debug = TRACE_RULE("expression_for",TRACE_ENTER,(PPTREE)0);
#line 3293 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3293 "cplus.met"
#line 3293 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3293 "cplus.met"
#line 3295 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3295 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(expression_for_exit,"expression_for")
#line 3295 "cplus.met"
    }
#line 3295 "cplus.met"
#line 3296 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PVIR,";"))){
#line 3296 "cplus.met"
#line 3297 "cplus.met"
        
#line 3297 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 3297 "cplus.met"
        goto expression_for_exit;
#line 3297 "cplus.met"
#line 3297 "cplus.met"
    }
#line 3297 "cplus.met"
#line 3298 "cplus.met"
    {
#line 3298 "cplus.met"
        _retValue = retTree ;
#line 3298 "cplus.met"
        goto expression_for_ret;
#line 3298 "cplus.met"
        
#line 3298 "cplus.met"
    }
#line 3298 "cplus.met"
#line 3298 "cplus.met"
#line 3298 "cplus.met"

#line 3299 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3299 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3299 "cplus.met"
return((PPTREE) 0);
#line 3299 "cplus.met"

#line 3299 "cplus.met"
expression_for_exit :
#line 3299 "cplus.met"

#line 3299 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_EXIT,(PPTREE)0);
#line 3299 "cplus.met"
    _funcLevel--;
#line 3299 "cplus.met"
    return((PPTREE) -1) ;
#line 3299 "cplus.met"

#line 3299 "cplus.met"
expression_for_ret :
#line 3299 "cplus.met"
    
#line 3299 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_RETURN,_retValue);
#line 3299 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3299 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3299 "cplus.met"
    return _retValue ;
#line 3299 "cplus.met"
}
#line 3299 "cplus.met"

#line 3299 "cplus.met"
#line 1070 "cplus.met"
PPTREE cplus::ext_all ( int error_free)
#line 1070 "cplus.met"
{
#line 1070 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1070 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1070 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1070 "cplus.met"
    int _Debug = TRACE_RULE("ext_all",TRACE_ENTER,(PPTREE)0);
#line 1070 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1070 "cplus.met"
#line 1070 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1070 "cplus.met"
#line 1072 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all_no_linkage), 64, cplus)){
#line 1072 "cplus.met"
#line 1073 "cplus.met"
        {
#line 1073 "cplus.met"
            _retValue = retTree ;
#line 1073 "cplus.met"
            goto ext_all_ret;
#line 1073 "cplus.met"
            
#line 1073 "cplus.met"
        }
#line 1073 "cplus.met"
    } else {
#line 1073 "cplus.met"
#line 1075 "cplus.met"
        {
#line 1075 "cplus.met"
            PPTREE _ptTree0=0;
#line 1075 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(linkage_specification)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 1075 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(ext_all_exit,"ext_all")
#line 1075 "cplus.met"
            }
#line 1075 "cplus.met"
            _retValue =_ptTree0;
#line 1075 "cplus.met"
            goto ext_all_ret;
#line 1075 "cplus.met"
        }
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
ext_all_exit :
#line 1076 "cplus.met"

#line 1076 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_EXIT,(PPTREE)0);
#line 1076 "cplus.met"
    _funcLevel--;
#line 1076 "cplus.met"
    return((PPTREE) -1) ;
#line 1076 "cplus.met"

#line 1076 "cplus.met"
ext_all_ret :
#line 1076 "cplus.met"
    
#line 1076 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_RETURN,_retValue);
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
#line 1078 "cplus.met"
PPTREE cplus::ext_all_ext ( int error_free)
#line 1078 "cplus.met"
{
#line 1078 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1078 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1078 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1078 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_ext",TRACE_ENTER,(PPTREE)0);
#line 1078 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1078 "cplus.met"
#line 1078 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1078 "cplus.met"
#line 1080 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(protect_declare), 111, cplus))){
#line 1080 "cplus.met"
#line 1081 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_all)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1081 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_all_ext_exit,"ext_all_ext")
#line 1081 "cplus.met"
        }
#line 1081 "cplus.met"
    }
#line 1081 "cplus.met"
#line 1082 "cplus.met"
    {
#line 1082 "cplus.met"
        _retValue = retTree ;
#line 1082 "cplus.met"
        goto ext_all_ext_ret;
#line 1082 "cplus.met"
        
#line 1082 "cplus.met"
    }
#line 1082 "cplus.met"
#line 1082 "cplus.met"
#line 1082 "cplus.met"

#line 1083 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1083 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1083 "cplus.met"
return((PPTREE) 0);
#line 1083 "cplus.met"

#line 1083 "cplus.met"
ext_all_ext_exit :
#line 1083 "cplus.met"

#line 1083 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_EXIT,(PPTREE)0);
#line 1083 "cplus.met"
    _funcLevel--;
#line 1083 "cplus.met"
    return((PPTREE) -1) ;
#line 1083 "cplus.met"

#line 1083 "cplus.met"
ext_all_ext_ret :
#line 1083 "cplus.met"
    
#line 1083 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_RETURN,_retValue);
#line 1083 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1083 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1083 "cplus.met"
    return _retValue ;
#line 1083 "cplus.met"
}
#line 1083 "cplus.met"

#line 1083 "cplus.met"
#line 1046 "cplus.met"
PPTREE cplus::ext_all_no_linkage ( int error_free)
#line 1046 "cplus.met"
{
#line 1046 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1046 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1046 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1046 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_ENTER,(PPTREE)0);
#line 1046 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1046 "cplus.met"
#line 1046 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1046 "cplus.met"
#line 1046 "cplus.met"
    PPTREE decl = (PPTREE) 0,listTemp = (PPTREE) 0;
#line 1046 "cplus.met"
#line 1048 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TEMPLATE,"template") && (tokenAhead = 0,CommTerm(),1)){
#line 1048 "cplus.met"
#line 1049 "cplus.met"
#line 1050 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1050 "cplus.met"
        if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1050 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,"<")
#line 1050 "cplus.met"
        } else {
#line 1050 "cplus.met"
            tokenAhead = 0 ;
#line 1050 "cplus.met"
        }
#line 1050 "cplus.met"
#line 1050 "cplus.met"
        _addlist1 = listTemp ;
#line 1050 "cplus.met"
#line 1051 "cplus.met"
        do {
#line 1051 "cplus.met"
#line 1052 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1052 "cplus.met"
            switch( lexEl.Value) {
#line 1052 "cplus.met"
#line 1053 "cplus.met"
                case CLASS : 
#line 1053 "cplus.met"
                    tokenAhead = 0 ;
#line 1053 "cplus.met"
                    CommTerm();
#line 1053 "cplus.met"
#line 1053 "cplus.met"
#line 1053 "cplus.met"
                    {
#line 1053 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1053 "cplus.met"
                        {
#line 1053 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 1053 "cplus.met"
                            _ptRes1= MakeTree(CLASS_PARAM, 1);
#line 1053 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus))== (PPTREE) -1 ) {
#line 1053 "cplus.met"
                                MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1053 "cplus.met"
                            }
#line 1053 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1053 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1053 "cplus.met"
                        }
#line 1053 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1053 "cplus.met"
                    }
#line 1053 "cplus.met"
#line 1053 "cplus.met"
                    if (listTemp){
#line 1053 "cplus.met"
#line 1053 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1053 "cplus.met"
                    } else {
#line 1053 "cplus.met"
#line 1053 "cplus.met"
                        listTemp = _addlist1 ;
#line 1053 "cplus.met"
                    }
#line 1053 "cplus.met"
                    break;
#line 1053 "cplus.met"
#line 1055 "cplus.met"
                default : 
#line 1055 "cplus.met"
#line 1055 "cplus.met"
#line 1055 "cplus.met"
                    {
#line 1055 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1055 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus))== (PPTREE) -1 ) {
#line 1055 "cplus.met"
                            MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                            PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1055 "cplus.met"
                        }
#line 1055 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1055 "cplus.met"
                    }
#line 1055 "cplus.met"
#line 1055 "cplus.met"
                    if (listTemp){
#line 1055 "cplus.met"
#line 1055 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1055 "cplus.met"
                    } else {
#line 1055 "cplus.met"
#line 1055 "cplus.met"
                        listTemp = _addlist1 ;
#line 1055 "cplus.met"
                    }
#line 1055 "cplus.met"
                    break;
#line 1055 "cplus.met"
            }
#line 1055 "cplus.met"
#line 1055 "cplus.met"
#line 1057 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1057 "cplus.met"
#line 1058 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1058 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1058 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,">")
#line 1058 "cplus.met"
        } else {
#line 1058 "cplus.met"
            tokenAhead = 0 ;
#line 1058 "cplus.met"
        }
#line 1058 "cplus.met"
#line 1059 "cplus.met"
        {
#line 1059 "cplus.met"
            PPTREE _ptTree0=0;
#line 1059 "cplus.met"
            {
#line 1059 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1059 "cplus.met"
                _ptRes1= MakeTree(TEMPLATE_DECL, 2);
#line 1059 "cplus.met"
                ReplaceTree(_ptRes1, 1, listTemp );
#line 1059 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all_no_linkage)(error_free), 64, cplus))== (PPTREE) -1 ) {
#line 1059 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                    PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1059 "cplus.met"
                }
#line 1059 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1059 "cplus.met"
                _ptTree0=_ptRes1;
#line 1059 "cplus.met"
            }
#line 1059 "cplus.met"
            _retValue =_ptTree0;
#line 1059 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1059 "cplus.met"
        }
#line 1059 "cplus.met"
#line 1059 "cplus.met"
#line 1059 "cplus.met"
    }
#line 1059 "cplus.met"
#line 1061 "cplus.met"
    if ((((NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_data_declaration), 69, cplus)) || 
#line 1061 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(func_declaration), 74, cplus))) || 
#line 1061 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_decl_dir), 70, cplus))) || 
#line 1061 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(asm_declaration), 13, cplus))){
#line 1061 "cplus.met"
#line 1065 "cplus.met"
        {
#line 1065 "cplus.met"
            _retValue = decl ;
#line 1065 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1065 "cplus.met"
            
#line 1065 "cplus.met"
        }
#line 1065 "cplus.met"
    } else {
#line 1065 "cplus.met"
#line 1067 "cplus.met"
        {
#line 1067 "cplus.met"
            PPTREE _ptTree0=0;
#line 1067 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declaration)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 1067 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1067 "cplus.met"
            }
#line 1067 "cplus.met"
            _retValue =_ptTree0;
#line 1067 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1067 "cplus.met"
        }
#line 1067 "cplus.met"
    }
#line 1067 "cplus.met"
#line 1067 "cplus.met"
#line 1067 "cplus.met"

#line 1068 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1068 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1068 "cplus.met"
return((PPTREE) 0);
#line 1068 "cplus.met"

#line 1068 "cplus.met"
ext_all_no_linkage_exit :
#line 1068 "cplus.met"

#line 1068 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_EXIT,(PPTREE)0);
#line 1068 "cplus.met"
    _funcLevel--;
#line 1068 "cplus.met"
    return((PPTREE) -1) ;
#line 1068 "cplus.met"

#line 1068 "cplus.met"
ext_all_no_linkage_ret :
#line 1068 "cplus.met"
    
#line 1068 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_RETURN,_retValue);
#line 1068 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1068 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1068 "cplus.met"
    return _retValue ;
#line 1068 "cplus.met"
}
#line 1068 "cplus.met"

#line 1068 "cplus.met"
#line 1568 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty ( int error_free)
#line 1568 "cplus.met"
{
#line 1568 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1568 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1568 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1568 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_ENTER,(PPTREE)0);
#line 1568 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1568 "cplus.met"
#line 1568 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1568 "cplus.met"
#line 1570 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_data_decl_sc_ty_full), 66, cplus))){
#line 1570 "cplus.met"
#line 1571 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty_short)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1571 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_exit,"ext_data_decl_sc_ty")
#line 1571 "cplus.met"
        }
#line 1571 "cplus.met"
    }
#line 1571 "cplus.met"
#line 1572 "cplus.met"
    {
#line 1572 "cplus.met"
        _retValue = retTree ;
#line 1572 "cplus.met"
        goto ext_data_decl_sc_ty_ret;
#line 1572 "cplus.met"
        
#line 1572 "cplus.met"
    }
#line 1572 "cplus.met"
#line 1572 "cplus.met"
#line 1572 "cplus.met"

#line 1573 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1573 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1573 "cplus.met"
return((PPTREE) 0);
#line 1573 "cplus.met"

#line 1573 "cplus.met"
ext_data_decl_sc_ty_exit :
#line 1573 "cplus.met"

#line 1573 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_EXIT,(PPTREE)0);
#line 1573 "cplus.met"
    _funcLevel--;
#line 1573 "cplus.met"
    return((PPTREE) -1) ;
#line 1573 "cplus.met"

#line 1573 "cplus.met"
ext_data_decl_sc_ty_ret :
#line 1573 "cplus.met"
    
#line 1573 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_RETURN,_retValue);
#line 1573 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1573 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1573 "cplus.met"
    return _retValue ;
#line 1573 "cplus.met"
}
#line 1573 "cplus.met"

#line 1573 "cplus.met"
#line 1549 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_full ( int error_free)
#line 1549 "cplus.met"
{
#line 1549 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1549 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1549 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1549 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_ENTER,(PPTREE)0);
#line 1549 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1549 "cplus.met"
#line 1549 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1549 "cplus.met"
#line 1551 "cplus.met"
    {
#line 1551 "cplus.met"
        PPTREE _ptRes0=0;
#line 1551 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1551 "cplus.met"
        retTree=_ptRes0;
#line 1551 "cplus.met"
    }
#line 1551 "cplus.met"
#line 1552 "cplus.met"
    {
#line 1552 "cplus.met"
        PPTREE _ptTree0=0;
#line 1552 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 1552 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1552 "cplus.met"
        }
#line 1552 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1552 "cplus.met"
    }
#line 1552 "cplus.met"
#line 1553 "cplus.met"
    {
#line 1553 "cplus.met"
        PPTREE _ptTree0=0;
#line 1553 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1553 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1553 "cplus.met"
        }
#line 1553 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1553 "cplus.met"
    }
#line 1553 "cplus.met"
#line 1554 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1554 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1554 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_full_exit,";")
#line 1554 "cplus.met"
    } else {
#line 1554 "cplus.met"
        tokenAhead = 0 ;
#line 1554 "cplus.met"
    }
#line 1554 "cplus.met"
#line 1555 "cplus.met"
    {
#line 1555 "cplus.met"
        _retValue = retTree ;
#line 1555 "cplus.met"
        goto ext_data_decl_sc_ty_full_ret;
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
ext_data_decl_sc_ty_full_exit :
#line 1556 "cplus.met"

#line 1556 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_EXIT,(PPTREE)0);
#line 1556 "cplus.met"
    _funcLevel--;
#line 1556 "cplus.met"
    return((PPTREE) -1) ;
#line 1556 "cplus.met"

#line 1556 "cplus.met"
ext_data_decl_sc_ty_full_ret :
#line 1556 "cplus.met"
    
#line 1556 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_RETURN,_retValue);
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
#line 1559 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_short ( int error_free)
#line 1559 "cplus.met"
{
#line 1559 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1559 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1559 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1559 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_ENTER,(PPTREE)0);
#line 1559 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1559 "cplus.met"
#line 1559 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1559 "cplus.met"
#line 1561 "cplus.met"
    {
#line 1561 "cplus.met"
        PPTREE _ptRes0=0;
#line 1561 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1561 "cplus.met"
        retTree=_ptRes0;
#line 1561 "cplus.met"
    }
#line 1561 "cplus.met"
#line 1562 "cplus.met"
    {
#line 1562 "cplus.met"
        PPTREE _ptTree0=0;
#line 1562 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1562 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_short_exit,"ext_data_decl_sc_ty_short")
#line 1562 "cplus.met"
        }
#line 1562 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1562 "cplus.met"
    }
#line 1562 "cplus.met"
#line 1563 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1563 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1563 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_short_exit,";")
#line 1563 "cplus.met"
    } else {
#line 1563 "cplus.met"
        tokenAhead = 0 ;
#line 1563 "cplus.met"
    }
#line 1563 "cplus.met"
#line 1564 "cplus.met"
    {
#line 1564 "cplus.met"
        _retValue = retTree ;
#line 1564 "cplus.met"
        goto ext_data_decl_sc_ty_short_ret;
#line 1564 "cplus.met"
        
#line 1564 "cplus.met"
    }
#line 1564 "cplus.met"
#line 1564 "cplus.met"
#line 1564 "cplus.met"

#line 1565 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1565 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1565 "cplus.met"
return((PPTREE) 0);
#line 1565 "cplus.met"

#line 1565 "cplus.met"
ext_data_decl_sc_ty_short_exit :
#line 1565 "cplus.met"

#line 1565 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_EXIT,(PPTREE)0);
#line 1565 "cplus.met"
    _funcLevel--;
#line 1565 "cplus.met"
    return((PPTREE) -1) ;
#line 1565 "cplus.met"

#line 1565 "cplus.met"
ext_data_decl_sc_ty_short_ret :
#line 1565 "cplus.met"
    
#line 1565 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_RETURN,_retValue);
#line 1565 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1565 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1565 "cplus.met"
    return _retValue ;
#line 1565 "cplus.met"
}
#line 1565 "cplus.met"

#line 1565 "cplus.met"
#line 1575 "cplus.met"
PPTREE cplus::ext_data_decl_simp ( int error_free)
#line 1575 "cplus.met"
{
#line 1575 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1575 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1575 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1575 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_ENTER,(PPTREE)0);
#line 1575 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1575 "cplus.met"
#line 1575 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1575 "cplus.met"
#line 1577 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration), 38, cplus))){
#line 1577 "cplus.met"
#line 1578 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1578 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_simp_exit,"ext_data_decl_simp")
#line 1578 "cplus.met"
        }
#line 1578 "cplus.met"
    }
#line 1578 "cplus.met"
#line 1579 "cplus.met"
    {
#line 1579 "cplus.met"
        _retValue = retTree ;
#line 1579 "cplus.met"
        goto ext_data_decl_simp_ret;
#line 1579 "cplus.met"
        
#line 1579 "cplus.met"
    }
#line 1579 "cplus.met"
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
ext_data_decl_simp_exit :
#line 1580 "cplus.met"

#line 1580 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_EXIT,(PPTREE)0);
#line 1580 "cplus.met"
    _funcLevel--;
#line 1580 "cplus.met"
    return((PPTREE) -1) ;
#line 1580 "cplus.met"

#line 1580 "cplus.met"
ext_data_decl_simp_ret :
#line 1580 "cplus.met"
    
#line 1580 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_RETURN,_retValue);
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
#line 1590 "cplus.met"
PPTREE cplus::ext_data_declaration ( int error_free)
#line 1590 "cplus.met"
{
#line 1590 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1590 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1590 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1590 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1590 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1590 "cplus.met"
#line 1590 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1590 "cplus.met"
#line 1592 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1592 "cplus.met"
    switch( lexEl.Value) {
#line 1592 "cplus.met"
#line 1593 "cplus.met"
        case TYPEDEF : 
#line 1593 "cplus.met"
            tokenAhead = 0 ;
#line 1593 "cplus.met"
            CommTerm();
#line 1593 "cplus.met"
#line 1594 "cplus.met"
#line 1595 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(typedef_and_declarator), 144, cplus))){
#line 1595 "cplus.met"
#line 1596 "cplus.met"
                {
#line 1596 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1596 "cplus.met"
                    _ptRes0= MakeTree(TYPEDEF, 2);
#line 1596 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 1596 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1596 "cplus.met"
                    }
#line 1596 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1596 "cplus.met"
                    retTree=_ptRes0;
#line 1596 "cplus.met"
                }
#line 1596 "cplus.met"
            }
#line 1596 "cplus.met"
#line 1597 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1597 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1597 "cplus.met"
                MulFreeTree(1,retTree);
                TOKEN_EXIT(ext_data_declaration_exit,";")
#line 1597 "cplus.met"
            } else {
#line 1597 "cplus.met"
                tokenAhead = 0 ;
#line 1597 "cplus.met"
            }
#line 1597 "cplus.met"
#line 1598 "cplus.met"
            {
#line 1598 "cplus.met"
                _retValue = retTree ;
#line 1598 "cplus.met"
                goto ext_data_declaration_ret;
#line 1598 "cplus.met"
                
#line 1598 "cplus.met"
            }
#line 1598 "cplus.met"
#line 1598 "cplus.met"
            break;
#line 1598 "cplus.met"
#line 1600 "cplus.met"
        case NAMESPACE : 
#line 1600 "cplus.met"
#line 1600 "cplus.met"
            {
#line 1600 "cplus.met"
                PPTREE _ptTree0=0;
#line 1600 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 1600 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1600 "cplus.met"
                }
#line 1600 "cplus.met"
                _retValue =_ptTree0;
#line 1600 "cplus.met"
                goto ext_data_declaration_ret;
#line 1600 "cplus.met"
            }
#line 1600 "cplus.met"
            break;
#line 1600 "cplus.met"
#line 1601 "cplus.met"
        case USING : 
#line 1601 "cplus.met"
#line 1601 "cplus.met"
            {
#line 1601 "cplus.met"
                PPTREE _ptTree0=0;
#line 1601 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 1601 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1601 "cplus.met"
                }
#line 1601 "cplus.met"
                _retValue =_ptTree0;
#line 1601 "cplus.met"
                goto ext_data_declaration_ret;
#line 1601 "cplus.met"
            }
#line 1601 "cplus.met"
            break;
#line 1601 "cplus.met"
#line 1602 "cplus.met"
        case PVIR : 
#line 1602 "cplus.met"
            tokenAhead = 0 ;
#line 1602 "cplus.met"
            CommTerm();
#line 1602 "cplus.met"
#line 1602 "cplus.met"
            {
#line 1602 "cplus.met"
                PPTREE _ptTree0=0;
#line 1602 "cplus.met"
                {
#line 1602 "cplus.met"
                    PPTREE _ptRes1=0;
#line 1602 "cplus.met"
                    _ptRes1= MakeTree(STAT_VOID, 0);
#line 1602 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1602 "cplus.met"
                }
#line 1602 "cplus.met"
                _retValue =_ptTree0;
#line 1602 "cplus.met"
                goto ext_data_declaration_ret;
#line 1602 "cplus.met"
            }
#line 1602 "cplus.met"
            break;
#line 1602 "cplus.met"
#line 1603 "cplus.met"
        default : 
#line 1603 "cplus.met"
#line 1603 "cplus.met"
            {
#line 1603 "cplus.met"
                PPTREE _ptTree0=0;
#line 1603 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 68, cplus))== (PPTREE) -1 ) {
#line 1603 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1603 "cplus.met"
                }
#line 1603 "cplus.met"
                _retValue =_ptTree0;
#line 1603 "cplus.met"
                goto ext_data_declaration_ret;
#line 1603 "cplus.met"
            }
#line 1603 "cplus.met"
            break;
#line 1603 "cplus.met"
    }
#line 1603 "cplus.met"
#line 1603 "cplus.met"
#line 1604 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1604 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1604 "cplus.met"
return((PPTREE) 0);
#line 1604 "cplus.met"

#line 1604 "cplus.met"
ext_data_declaration_exit :
#line 1604 "cplus.met"

#line 1604 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1604 "cplus.met"
    _funcLevel--;
#line 1604 "cplus.met"
    return((PPTREE) -1) ;
#line 1604 "cplus.met"

#line 1604 "cplus.met"
ext_data_declaration_ret :
#line 1604 "cplus.met"
    
#line 1604 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_RETURN,_retValue);
#line 1604 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1604 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1604 "cplus.met"
    return _retValue ;
#line 1604 "cplus.met"
}
#line 1604 "cplus.met"

#line 1604 "cplus.met"
#line 1263 "cplus.met"
PPTREE cplus::ext_decl_dir ( int error_free)
#line 1263 "cplus.met"
{
#line 1263 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1263 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1263 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1263 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_dir",TRACE_ENTER,(PPTREE)0);
#line 1263 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1263 "cplus.met"
#line 1263 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1263 "cplus.met"
#line 1265 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 50, cplus)){
#line 1265 "cplus.met"
#line 1266 "cplus.met"
        {
#line 1266 "cplus.met"
            _retValue = retTree ;
#line 1266 "cplus.met"
            goto ext_decl_dir_ret;
#line 1266 "cplus.met"
            
#line 1266 "cplus.met"
        }
#line 1266 "cplus.met"
    }
#line 1266 "cplus.met"
#line 1267 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1267 "cplus.met"
    switch( lexEl.Value) {
#line 1267 "cplus.met"
#line 1268 "cplus.met"
        case META : 
#line 1268 "cplus.met"
        case IF_DIR : 
#line 1268 "cplus.met"
            tokenAhead = 0 ;
#line 1268 "cplus.met"
            CommTerm();
#line 1268 "cplus.met"
#line 1268 "cplus.met"
            {
#line 1268 "cplus.met"
                PPTREE _ptTree0=0;
#line 1268 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1268 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1268 "cplus.met"
                }
#line 1268 "cplus.met"
                _retValue =_ptTree0;
#line 1268 "cplus.met"
                goto ext_decl_dir_ret;
#line 1268 "cplus.met"
            }
#line 1268 "cplus.met"
            break;
#line 1268 "cplus.met"
#line 1269 "cplus.met"
        case IFDEF_DIR : 
#line 1269 "cplus.met"
#line 1269 "cplus.met"
            {
#line 1269 "cplus.met"
                PPTREE _ptTree0=0;
#line 1269 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 72, cplus))== (PPTREE) -1 ) {
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
        case IFNDEF_DIR : 
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
        default :
#line 1270 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(ext_decl_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1270 "cplus.met"
            break;
#line 1270 "cplus.met"
    }
#line 1270 "cplus.met"
#line 1270 "cplus.met"
#line 1271 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1271 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1271 "cplus.met"
return((PPTREE) 0);
#line 1271 "cplus.met"

#line 1271 "cplus.met"
ext_decl_dir_exit :
#line 1271 "cplus.met"

#line 1271 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_EXIT,(PPTREE)0);
#line 1271 "cplus.met"
    _funcLevel--;
#line 1271 "cplus.met"
    return((PPTREE) -1) ;
#line 1271 "cplus.met"

#line 1271 "cplus.met"
ext_decl_dir_ret :
#line 1271 "cplus.met"
    
#line 1271 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_RETURN,_retValue);
#line 1271 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1271 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1271 "cplus.met"
    return _retValue ;
#line 1271 "cplus.met"
}
#line 1271 "cplus.met"

#line 1271 "cplus.met"
#line 1197 "cplus.met"
PPTREE cplus::ext_decl_if_dir ( int error_free)
#line 1197 "cplus.met"
{
#line 1197 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1197 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1197 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1197 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1197 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1197 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1197 "cplus.met"
#line 1197 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1197 "cplus.met"
#line 1197 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1197 "cplus.met"
#line 1199 "cplus.met"
    {
#line 1199 "cplus.met"
        keepCarriage = 1 ;
#line 1199 "cplus.met"
#line 1200 "cplus.met"
#line 1201 "cplus.met"
        {
#line 1201 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1201 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1201 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1201 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1201 "cplus.met"
            }
#line 1201 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1201 "cplus.met"
            retTree=_ptRes0;
#line 1201 "cplus.met"
        }
#line 1201 "cplus.met"
#line 1202 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1202 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1202 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(ext_decl_if_dir_exit,"CARRIAGE_RETURN")
#line 1202 "cplus.met"
        } else {
#line 1202 "cplus.met"
            tokenAhead = 0 ;
#line 1202 "cplus.met"
        }
#line 1202 "cplus.met"
#line 1202 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1202 "cplus.met"
    }
#line 1202 "cplus.met"
#line 1202 "cplus.met"
    _addlist1 = list ;
#line 1202 "cplus.met"
#line 1204 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1204 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1204 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1204 "cplus.met"
#line 1205 "cplus.met"
#line 1205 "cplus.met"
        {
#line 1205 "cplus.met"
            PPTREE _ptTree0=0;
#line 1205 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1205 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1205 "cplus.met"
            }
#line 1205 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1205 "cplus.met"
        }
#line 1205 "cplus.met"
#line 1205 "cplus.met"
        if (list){
#line 1205 "cplus.met"
#line 1205 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1205 "cplus.met"
        } else {
#line 1205 "cplus.met"
#line 1205 "cplus.met"
            list = _addlist1 ;
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1206 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1206 "cplus.met"
        }
#line 1206 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1206 "cplus.met"
    }
#line 1206 "cplus.met"
#line 1207 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1207 "cplus.met"
#line 1208 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1208 "cplus.met"
    switch( lexEl.Value) {
#line 1208 "cplus.met"
#line 1209 "cplus.met"
        case META : 
#line 1209 "cplus.met"
        case ELSE_DIR : 
#line 1209 "cplus.met"
            tokenAhead = 0 ;
#line 1209 "cplus.met"
            CommTerm();
#line 1209 "cplus.met"
#line 1210 "cplus.met"
#line 1210 "cplus.met"
            _addlist2 = list2 ;
#line 1210 "cplus.met"
#line 1211 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1211 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1211 "cplus.met"
#line 1212 "cplus.met"
#line 1212 "cplus.met"
                {
#line 1212 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1212 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1212 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1212 "cplus.met"
                    }
#line 1212 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1212 "cplus.met"
                }
#line 1212 "cplus.met"
#line 1212 "cplus.met"
                if (list2){
#line 1212 "cplus.met"
#line 1212 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1212 "cplus.met"
                } else {
#line 1212 "cplus.met"
#line 1212 "cplus.met"
                    list2 = _addlist2 ;
#line 1212 "cplus.met"
                }
#line 1212 "cplus.met"
            } 
#line 1212 "cplus.met"
#line 1213 "cplus.met"
            {
#line 1213 "cplus.met"
                PPTREE _ptTree0=0;
#line 1213 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1213 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1213 "cplus.met"
                }
#line 1213 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1213 "cplus.met"
            }
#line 1213 "cplus.met"
#line 1214 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1214 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1214 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(ext_decl_if_dir_exit,"ENDIF_DIR")
#line 1214 "cplus.met"
            } else {
#line 1214 "cplus.met"
                tokenAhead = 0 ;
#line 1214 "cplus.met"
            }
#line 1214 "cplus.met"
#line 1215 "cplus.met"
            {
#line 1215 "cplus.met"
                PPTREE _ptTree0=0;
#line 1215 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1215 "cplus.met"
                _retValue =_ptTree0;
#line 1215 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1215 "cplus.met"
            }
#line 1215 "cplus.met"
#line 1215 "cplus.met"
            break;
#line 1215 "cplus.met"
#line 1217 "cplus.met"
        case ELIF_DIR : 
#line 1217 "cplus.met"
            tokenAhead = 0 ;
#line 1217 "cplus.met"
            CommTerm();
#line 1217 "cplus.met"
#line 1217 "cplus.met"
            {
#line 1217 "cplus.met"
                PPTREE _ptTree0=0;
#line 1217 "cplus.met"
                {
#line 1217 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1217 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1217 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1217 "cplus.met"
                    }
#line 1217 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1217 "cplus.met"
                }
#line 1217 "cplus.met"
                _retValue =_ptTree0;
#line 1217 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1217 "cplus.met"
            }
#line 1217 "cplus.met"
            break;
#line 1217 "cplus.met"
#line 1218 "cplus.met"
        case ENDIF_DIR : 
#line 1218 "cplus.met"
            tokenAhead = 0 ;
#line 1218 "cplus.met"
            CommTerm();
#line 1218 "cplus.met"
#line 1218 "cplus.met"
            {
#line 1218 "cplus.met"
                _retValue = retTree ;
#line 1218 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1218 "cplus.met"
                
#line 1218 "cplus.met"
            }
#line 1218 "cplus.met"
            break;
#line 1218 "cplus.met"
        default :
#line 1218 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(ext_decl_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1218 "cplus.met"
            break;
#line 1218 "cplus.met"
    }
#line 1218 "cplus.met"
#line 1218 "cplus.met"
#line 1219 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1219 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1219 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1219 "cplus.met"
return((PPTREE) 0);
#line 1219 "cplus.met"

#line 1219 "cplus.met"
ext_decl_if_dir_exit :
#line 1219 "cplus.met"

#line 1219 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1219 "cplus.met"
    _funcLevel--;
#line 1219 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1219 "cplus.met"
    return((PPTREE) -1) ;
#line 1219 "cplus.met"

#line 1219 "cplus.met"
ext_decl_if_dir_ret :
#line 1219 "cplus.met"
    
#line 1219 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_RETURN,_retValue);
#line 1219 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1219 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1219 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1219 "cplus.met"
    return _retValue ;
#line 1219 "cplus.met"
}
#line 1219 "cplus.met"

#line 1219 "cplus.met"
