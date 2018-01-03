/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 786 "cplus.met"
PPTREE cplus::quick_prog ( int error_free)
#line 786 "cplus.met"
{
#line 786 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 786 "cplus.met"
    int _value,_nbPre = 0 ;
#line 786 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 786 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog",TRACE_ENTER,(PPTREE)0);
#line 786 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 786 "cplus.met"
#line 786 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 786 "cplus.met"
#line 788 "cplus.met"
    while ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(quick_prog_elem), 115, cplus)) && 
#line 788 "cplus.met"
          (! (valTree == (PPTREE) 0))) { 
#line 788 "cplus.met"
#line 789 "cplus.met"
#line 790 "cplus.met"
        FreeTree (valTree );
#line 790 "cplus.met"
#line 791 "cplus.met"
         _lastTree = (PPTREE) 0;
#line 791 "cplus.met"
#line 791 "cplus.met"
    } 
#line 791 "cplus.met"
#line 793 "cplus.met"
    ExtUnputBuf();
#line 793 "cplus.met"
    while ((c == ' ')||(c == '\n')||(c == '\t')||(c == '\r')||(c == ''))
#line 793 "cplus.met"
        NextChar() ;
#line 793 "cplus.met"
    ptStockBuf = -1;
#line 793 "cplus.met"
    lexEl.Erase();
#line 793 "cplus.met"
    tokenAhead = 0;
#line 793 "cplus.met"
    oldLine=line,oldCol=col;
#line 793 "cplus.met"
    if ( !lexCallLex) {
#line 793 "cplus.met"
        PUT_COORD_CALL;
#line 793 "cplus.met"
    }
#line 793 "cplus.met"
#line 794 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 794 "cplus.met"
#line 795 "cplus.met"
        if ( (NQUICK_CALL(_Tak(quick_prog_elem)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 795 "cplus.met"
            MulFreeTree(2,list,valTree);
            PROG_EXIT(quick_prog_exit,"quick_prog")
#line 795 "cplus.met"
        }
#line 795 "cplus.met"
    }
#line 795 "cplus.met"
#line 796 "cplus.met"
    {
#line 796 "cplus.met"
        _retValue = list ;
#line 796 "cplus.met"
        goto quick_prog_ret;
#line 796 "cplus.met"
        
#line 796 "cplus.met"
    }
#line 796 "cplus.met"
#line 796 "cplus.met"
#line 796 "cplus.met"

#line 797 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 797 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 797 "cplus.met"
return((PPTREE) 0);
#line 797 "cplus.met"

#line 797 "cplus.met"
quick_prog_exit :
#line 797 "cplus.met"

#line 797 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_EXIT,(PPTREE)0);
#line 797 "cplus.met"
    _funcLevel--;
#line 797 "cplus.met"
    return((PPTREE) -1) ;
#line 797 "cplus.met"

#line 797 "cplus.met"
quick_prog_ret :
#line 797 "cplus.met"
    
#line 797 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_RETURN,_retValue);
#line 797 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 797 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 797 "cplus.met"
    return _retValue ;
#line 797 "cplus.met"
}
#line 797 "cplus.met"

#line 797 "cplus.met"
#line 814 "cplus.met"
PPTREE cplus::quick_prog_elem ( int error_free)
#line 814 "cplus.met"
{
#line 814 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 814 "cplus.met"
    int _value,_nbPre = 0 ;
#line 814 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 814 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog_elem",TRACE_ENTER,(PPTREE)0);
#line 814 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 814 "cplus.met"
#line 814 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 814 "cplus.met"
#line 816 "cplus.met"
     debut :
#line 816 "cplus.met"
#line 817 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 817 "cplus.met"
    switch( lexEl.Value) {
#line 817 "cplus.met"
#line 818 "cplus.met"
        case META : 
#line 818 "cplus.met"
        case INCLUDE_DIR : 
#line 818 "cplus.met"
#line 818 "cplus.met"
            {
#line 818 "cplus.met"
                PPTREE _ptTree0=0;
#line 818 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 76, cplus))== (PPTREE) -1 ) {
#line 818 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 818 "cplus.met"
                }
#line 818 "cplus.met"
                _retValue =_ptTree0;
#line 818 "cplus.met"
                goto quick_prog_elem_ret;
#line 818 "cplus.met"
            }
#line 818 "cplus.met"
            break;
#line 818 "cplus.met"
#line 819 "cplus.met"
        case PRAGMA_DIR : 
#line 819 "cplus.met"
            tokenAhead = 0 ;
#line 819 "cplus.met"
            CommTerm();
#line 819 "cplus.met"
#line 820 "cplus.met"
#line 821 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(range_pragma), 120, cplus)){
#line 821 "cplus.met"
#line 821 "cplus.met"
            }
#line 821 "cplus.met"
#line 823 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 823 "cplus.met"
            switch( lexEl.Value) {
#line 823 "cplus.met"
#line 824 "cplus.met"
                case META : 
#line 824 "cplus.met"
                case PRAGMA_CONFIG : 
#line 824 "cplus.met"
                    tokenAhead = 0 ;
#line 824 "cplus.met"
                    CommTerm();
#line 824 "cplus.met"
#line 825 "cplus.met"
#line 826 "cplus.met"
                    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 826 "cplus.met"
                    switch( lexEl.Value) {
#line 826 "cplus.met"
#line 827 "cplus.met"
                        case META : 
#line 827 "cplus.met"
                        case PRAGMA_TAB : 
#line 827 "cplus.met"
                            tokenAhead = 0 ;
#line 827 "cplus.met"
                            CommTerm();
#line 827 "cplus.met"
#line 828 "cplus.met"
#line 829 "cplus.met"
                            {
#line 829 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 829 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 829 "cplus.met"
                                {
#line 829 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 829 "cplus.met"
                                    _ptRes1= MakeTree(TAB_VALUE, 1);
#line 829 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 829 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 829 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 829 "cplus.met"
                                    } else {
#line 829 "cplus.met"
                                        tokenAhead = 0 ;
#line 829 "cplus.met"
                                    }
#line 829 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 829 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 829 "cplus.met"
                                }
#line 829 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 829 "cplus.met"
                                retTree=_ptRes0;
#line 829 "cplus.met"
                            }
#line 829 "cplus.met"
#line 832 "cplus.met"
                            AnalyzeTab (retTree );
#line 832 "cplus.met"
#line 833 "cplus.met"
                            {
#line 833 "cplus.met"
                                _retValue = retTree ;
#line 833 "cplus.met"
                                goto quick_prog_elem_ret;
#line 833 "cplus.met"
                                
#line 833 "cplus.met"
                            }
#line 833 "cplus.met"
#line 833 "cplus.met"
                            break;
#line 833 "cplus.met"
#line 835 "cplus.met"
                        case PRAGMA_MODE : 
#line 835 "cplus.met"
                            tokenAhead = 0 ;
#line 835 "cplus.met"
                            CommTerm();
#line 835 "cplus.met"
#line 836 "cplus.met"
#line 837 "cplus.met"
                            {
#line 837 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 837 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 837 "cplus.met"
                                {
#line 837 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 837 "cplus.met"
                                    _ptRes1= MakeTree(MODE_VALUE, 1);
#line 837 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 837 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 837 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 837 "cplus.met"
                                    } else {
#line 837 "cplus.met"
                                        tokenAhead = 0 ;
#line 837 "cplus.met"
                                    }
#line 837 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 837 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 837 "cplus.met"
                                }
#line 837 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 837 "cplus.met"
                                retTree=_ptRes0;
#line 837 "cplus.met"
                            }
#line 837 "cplus.met"
#line 840 "cplus.met"
                            AnalyzeMode (retTree );
#line 840 "cplus.met"
#line 841 "cplus.met"
                            {
#line 841 "cplus.met"
                                _retValue = retTree ;
#line 841 "cplus.met"
                                goto quick_prog_elem_ret;
#line 841 "cplus.met"
                                
#line 841 "cplus.met"
                            }
#line 841 "cplus.met"
#line 841 "cplus.met"
                            break;
#line 841 "cplus.met"
#line 843 "cplus.met"
                        case PRAGMA_ENUM_VERT : 
#line 843 "cplus.met"
                            tokenAhead = 0 ;
#line 843 "cplus.met"
                            CommTerm();
#line 843 "cplus.met"
#line 844 "cplus.met"
#line 845 "cplus.met"
                            {
#line 845 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 845 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 845 "cplus.met"
                                {
#line 845 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 845 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_VERT_VALUE, 1);
#line 845 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 845 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 845 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 845 "cplus.met"
                                    } else {
#line 845 "cplus.met"
                                        tokenAhead = 0 ;
#line 845 "cplus.met"
                                    }
#line 845 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 845 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 845 "cplus.met"
                                }
#line 845 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 845 "cplus.met"
                                retTree=_ptRes0;
#line 845 "cplus.met"
                            }
#line 845 "cplus.met"
#line 848 "cplus.met"
                            AnalyzeEnumVert (retTree );
#line 848 "cplus.met"
#line 849 "cplus.met"
                            {
#line 849 "cplus.met"
                                _retValue = retTree ;
#line 849 "cplus.met"
                                goto quick_prog_elem_ret;
#line 849 "cplus.met"
                                
#line 849 "cplus.met"
                            }
#line 849 "cplus.met"
#line 849 "cplus.met"
                            break;
#line 849 "cplus.met"
#line 851 "cplus.met"
                        case PRAGMA_PARAMETERS_UNDER : 
#line 851 "cplus.met"
                            tokenAhead = 0 ;
#line 851 "cplus.met"
                            CommTerm();
#line 851 "cplus.met"
#line 852 "cplus.met"
#line 853 "cplus.met"
                            {
#line 853 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 853 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 853 "cplus.met"
                                {
#line 853 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 853 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_PARAMETERS_UNDER, 1);
#line 853 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 853 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 853 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 853 "cplus.met"
                                    } else {
#line 853 "cplus.met"
                                        tokenAhead = 0 ;
#line 853 "cplus.met"
                                    }
#line 853 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 853 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 853 "cplus.met"
                                }
#line 853 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 853 "cplus.met"
                                retTree=_ptRes0;
#line 853 "cplus.met"
                            }
#line 853 "cplus.met"
#line 857 "cplus.met"
                            AnalyzeParameterFunctUnd (retTree );
#line 857 "cplus.met"
#line 858 "cplus.met"
                            {
#line 858 "cplus.met"
                                _retValue = retTree ;
#line 858 "cplus.met"
                                goto quick_prog_elem_ret;
#line 858 "cplus.met"
                                
#line 858 "cplus.met"
                            }
#line 858 "cplus.met"
#line 858 "cplus.met"
                            break;
#line 858 "cplus.met"
#line 860 "cplus.met"
                        case PRAGMA_TAB_DIRECTIVE : 
#line 860 "cplus.met"
                            tokenAhead = 0 ;
#line 860 "cplus.met"
                            CommTerm();
#line 860 "cplus.met"
#line 861 "cplus.met"
#line 862 "cplus.met"
                            {
#line 862 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 862 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 862 "cplus.met"
                                {
#line 862 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 862 "cplus.met"
                                    _ptRes1= MakeTree(TAB_DIRECTIVE, 1);
#line 862 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 862 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 862 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 862 "cplus.met"
                                    } else {
#line 862 "cplus.met"
                                        tokenAhead = 0 ;
#line 862 "cplus.met"
                                    }
#line 862 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 862 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 862 "cplus.met"
                                }
#line 862 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 862 "cplus.met"
                                retTree=_ptRes0;
#line 862 "cplus.met"
                            }
#line 862 "cplus.met"
#line 865 "cplus.met"
                            AnalyzeTabDirective (retTree );
#line 865 "cplus.met"
#line 866 "cplus.met"
                            {
#line 866 "cplus.met"
                                _retValue = retTree ;
#line 866 "cplus.met"
                                goto quick_prog_elem_ret;
#line 866 "cplus.met"
                                
#line 866 "cplus.met"
                            }
#line 866 "cplus.met"
#line 866 "cplus.met"
                            break;
#line 866 "cplus.met"
#line 868 "cplus.met"
                        case PRAGMA_SPACE_ARROW : 
#line 868 "cplus.met"
                            tokenAhead = 0 ;
#line 868 "cplus.met"
                            CommTerm();
#line 868 "cplus.met"
#line 869 "cplus.met"
#line 870 "cplus.met"
                            {
#line 870 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 870 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 870 "cplus.met"
                                {
#line 870 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 870 "cplus.met"
                                    _ptRes1= MakeTree(SPACE_ARROW, 1);
#line 870 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 870 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 870 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 870 "cplus.met"
                                    } else {
#line 870 "cplus.met"
                                        tokenAhead = 0 ;
#line 870 "cplus.met"
                                    }
#line 870 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 870 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 870 "cplus.met"
                                }
#line 870 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 870 "cplus.met"
                                retTree=_ptRes0;
#line 870 "cplus.met"
                            }
#line 870 "cplus.met"
#line 873 "cplus.met"
                            AnalyzeSpaceArrow (retTree );
#line 873 "cplus.met"
#line 874 "cplus.met"
                            {
#line 874 "cplus.met"
                                _retValue = retTree ;
#line 874 "cplus.met"
                                goto quick_prog_elem_ret;
#line 874 "cplus.met"
                                
#line 874 "cplus.met"
                            }
#line 874 "cplus.met"
#line 874 "cplus.met"
                            break;
#line 874 "cplus.met"
#line 876 "cplus.met"
                        case PRAGMA_BRACE_ALIGN : 
#line 876 "cplus.met"
                            tokenAhead = 0 ;
#line 876 "cplus.met"
                            CommTerm();
#line 876 "cplus.met"
#line 877 "cplus.met"
#line 878 "cplus.met"
                            {
#line 878 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 878 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 878 "cplus.met"
                                {
#line 878 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 878 "cplus.met"
                                    _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 878 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 878 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 878 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 878 "cplus.met"
                                    } else {
#line 878 "cplus.met"
                                        tokenAhead = 0 ;
#line 878 "cplus.met"
                                    }
#line 878 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 878 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 878 "cplus.met"
                                }
#line 878 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 878 "cplus.met"
                                retTree=_ptRes0;
#line 878 "cplus.met"
                            }
#line 878 "cplus.met"
#line 881 "cplus.met"
                            AnalyzeBraceAlign (retTree );
#line 881 "cplus.met"
#line 882 "cplus.met"
                            {
#line 882 "cplus.met"
                                _retValue = retTree ;
#line 882 "cplus.met"
                                goto quick_prog_elem_ret;
#line 882 "cplus.met"
                                
#line 882 "cplus.met"
                            }
#line 882 "cplus.met"
#line 882 "cplus.met"
                            break;
#line 882 "cplus.met"
#line 884 "cplus.met"
                        case PRAGMA_SIMPLIFY : 
#line 884 "cplus.met"
                            tokenAhead = 0 ;
#line 884 "cplus.met"
                            CommTerm();
#line 884 "cplus.met"
#line 885 "cplus.met"
#line 886 "cplus.met"
                            {
#line 886 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 886 "cplus.met"
                                _ptRes0= MakeTree(SIMPLIFY, 1);
#line 886 "cplus.met"
                                {
#line 886 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 886 "cplus.met"
                                    _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 886 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 886 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 886 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 886 "cplus.met"
                                    } else {
#line 886 "cplus.met"
                                        tokenAhead = 0 ;
#line 886 "cplus.met"
                                    }
#line 886 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 886 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 886 "cplus.met"
                                }
#line 886 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 886 "cplus.met"
                                retTree=_ptRes0;
#line 886 "cplus.met"
                            }
#line 886 "cplus.met"
#line 889 "cplus.met"
                            AnalyzeSimplify (retTree );
#line 889 "cplus.met"
#line 890 "cplus.met"
                            {
#line 890 "cplus.met"
                                _retValue = retTree ;
#line 890 "cplus.met"
                                goto quick_prog_elem_ret;
#line 890 "cplus.met"
                                
#line 890 "cplus.met"
                            }
#line 890 "cplus.met"
#line 890 "cplus.met"
                            break;
#line 890 "cplus.met"
#line 892 "cplus.met"
                        case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 892 "cplus.met"
                            tokenAhead = 0 ;
#line 892 "cplus.met"
                            CommTerm();
#line 892 "cplus.met"
#line 893 "cplus.met"
#line 894 "cplus.met"
                            {
#line 894 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 894 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 894 "cplus.met"
                                {
#line 894 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 894 "cplus.met"
                                    _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 894 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 894 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 894 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 894 "cplus.met"
                                    } else {
#line 894 "cplus.met"
                                        tokenAhead = 0 ;
#line 894 "cplus.met"
                                    }
#line 894 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 894 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 894 "cplus.met"
                                }
#line 894 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 894 "cplus.met"
                                retTree=_ptRes0;
#line 894 "cplus.met"
                            }
#line 894 "cplus.met"
#line 898 "cplus.met"
                            AnalyzeSingleSwitchIndent (retTree );
#line 898 "cplus.met"
#line 899 "cplus.met"
                            {
#line 899 "cplus.met"
                                _retValue = retTree ;
#line 899 "cplus.met"
                                goto quick_prog_elem_ret;
#line 899 "cplus.met"
                                
#line 899 "cplus.met"
                            }
#line 899 "cplus.met"
#line 899 "cplus.met"
                            break;
#line 899 "cplus.met"
#line 901 "cplus.met"
                        case PRAGMA_ASSIGN_ALIGN : 
#line 901 "cplus.met"
                            tokenAhead = 0 ;
#line 901 "cplus.met"
                            CommTerm();
#line 901 "cplus.met"
#line 902 "cplus.met"
#line 903 "cplus.met"
                            {
#line 903 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 903 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 903 "cplus.met"
                                {
#line 903 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 903 "cplus.met"
                                    _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 903 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 903 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 903 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 903 "cplus.met"
                                    } else {
#line 903 "cplus.met"
                                        tokenAhead = 0 ;
#line 903 "cplus.met"
                                    }
#line 903 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 903 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 903 "cplus.met"
                                }
#line 903 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 903 "cplus.met"
                                retTree=_ptRes0;
#line 903 "cplus.met"
                            }
#line 903 "cplus.met"
#line 906 "cplus.met"
                            AnalyzeAssignAlign (retTree );
#line 906 "cplus.met"
#line 907 "cplus.met"
                            {
#line 907 "cplus.met"
                                _retValue = retTree ;
#line 907 "cplus.met"
                                goto quick_prog_elem_ret;
#line 907 "cplus.met"
                                
#line 907 "cplus.met"
                            }
#line 907 "cplus.met"
#line 907 "cplus.met"
                            break;
#line 907 "cplus.met"
#line 909 "cplus.met"
                        case PRAGMA_DECL_ALIGN : 
#line 909 "cplus.met"
                            tokenAhead = 0 ;
#line 909 "cplus.met"
                            CommTerm();
#line 909 "cplus.met"
#line 910 "cplus.met"
#line 911 "cplus.met"
                            {
#line 911 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 911 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 911 "cplus.met"
                                {
#line 911 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 911 "cplus.met"
                                    _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 911 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 911 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 911 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 911 "cplus.met"
                                    } else {
#line 911 "cplus.met"
                                        tokenAhead = 0 ;
#line 911 "cplus.met"
                                    }
#line 911 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 911 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 911 "cplus.met"
                                }
#line 911 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 911 "cplus.met"
                                retTree=_ptRes0;
#line 911 "cplus.met"
                            }
#line 911 "cplus.met"
#line 914 "cplus.met"
                            AnalyzeDeclAlign (retTree );
#line 914 "cplus.met"
#line 915 "cplus.met"
                            {
#line 915 "cplus.met"
                                _retValue = retTree ;
#line 915 "cplus.met"
                                goto quick_prog_elem_ret;
#line 915 "cplus.met"
                                
#line 915 "cplus.met"
                            }
#line 915 "cplus.met"
#line 915 "cplus.met"
                            break;
#line 915 "cplus.met"
#line 917 "cplus.met"
                        case PRAGMA_MARGIN : 
#line 917 "cplus.met"
                            tokenAhead = 0 ;
#line 917 "cplus.met"
                            CommTerm();
#line 917 "cplus.met"
#line 918 "cplus.met"
#line 919 "cplus.met"
                            {
#line 919 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 919 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 919 "cplus.met"
                                {
#line 919 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 919 "cplus.met"
                                    _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 919 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 919 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 919 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 919 "cplus.met"
                                    } else {
#line 919 "cplus.met"
                                        tokenAhead = 0 ;
#line 919 "cplus.met"
                                    }
#line 919 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 919 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 919 "cplus.met"
                                }
#line 919 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 919 "cplus.met"
                                retTree=_ptRes0;
#line 919 "cplus.met"
                            }
#line 919 "cplus.met"
#line 922 "cplus.met"
                            AnalyzeMargin (retTree );
#line 922 "cplus.met"
#line 923 "cplus.met"
                            {
#line 923 "cplus.met"
                                _retValue = retTree ;
#line 923 "cplus.met"
                                goto quick_prog_elem_ret;
#line 923 "cplus.met"
                                
#line 923 "cplus.met"
                            }
#line 923 "cplus.met"
#line 923 "cplus.met"
                            break;
#line 923 "cplus.met"
#line 925 "cplus.met"
                        case PRAGMA_COMMENT_START : 
#line 925 "cplus.met"
                            tokenAhead = 0 ;
#line 925 "cplus.met"
                            CommTerm();
#line 925 "cplus.met"
#line 926 "cplus.met"
#line 927 "cplus.met"
                            {
#line 927 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 927 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 927 "cplus.met"
                                {
#line 927 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 927 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_START, 1);
#line 927 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 927 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 927 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 927 "cplus.met"
                                    } else {
#line 927 "cplus.met"
                                        tokenAhead = 0 ;
#line 927 "cplus.met"
                                    }
#line 927 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 927 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 927 "cplus.met"
                                }
#line 927 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 927 "cplus.met"
                                retTree=_ptRes0;
#line 927 "cplus.met"
                            }
#line 927 "cplus.met"
#line 930 "cplus.met"
                            AnalyzeComment (retTree );
#line 930 "cplus.met"
#line 931 "cplus.met"
                            {
#line 931 "cplus.met"
                                _retValue = retTree ;
#line 931 "cplus.met"
                                goto quick_prog_elem_ret;
#line 931 "cplus.met"
                                
#line 931 "cplus.met"
                            }
#line 931 "cplus.met"
#line 931 "cplus.met"
                            break;
#line 931 "cplus.met"
#line 933 "cplus.met"
                        case PRAGMA_COMMENT_MIDDLE : 
#line 933 "cplus.met"
                            tokenAhead = 0 ;
#line 933 "cplus.met"
                            CommTerm();
#line 933 "cplus.met"
#line 934 "cplus.met"
#line 935 "cplus.met"
                            {
#line 935 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 935 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 935 "cplus.met"
                                {
#line 935 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 935 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 935 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 935 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 935 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 935 "cplus.met"
                                    } else {
#line 935 "cplus.met"
                                        tokenAhead = 0 ;
#line 935 "cplus.met"
                                    }
#line 935 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 935 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 935 "cplus.met"
                                }
#line 935 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 935 "cplus.met"
                                retTree=_ptRes0;
#line 935 "cplus.met"
                            }
#line 935 "cplus.met"
#line 938 "cplus.met"
                            AnalyzeComment (retTree );
#line 938 "cplus.met"
#line 939 "cplus.met"
                            {
#line 939 "cplus.met"
                                _retValue = retTree ;
#line 939 "cplus.met"
                                goto quick_prog_elem_ret;
#line 939 "cplus.met"
                                
#line 939 "cplus.met"
                            }
#line 939 "cplus.met"
#line 939 "cplus.met"
                            break;
#line 939 "cplus.met"
#line 941 "cplus.met"
                        case PRAGMA_COMMENT_END : 
#line 941 "cplus.met"
                            tokenAhead = 0 ;
#line 941 "cplus.met"
                            CommTerm();
#line 941 "cplus.met"
#line 942 "cplus.met"
#line 943 "cplus.met"
                            {
#line 943 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 943 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 943 "cplus.met"
                                {
#line 943 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 943 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_END, 1);
#line 943 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 943 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 943 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 943 "cplus.met"
                                    } else {
#line 943 "cplus.met"
                                        tokenAhead = 0 ;
#line 943 "cplus.met"
                                    }
#line 943 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 943 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 943 "cplus.met"
                                }
#line 943 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 943 "cplus.met"
                                retTree=_ptRes0;
#line 943 "cplus.met"
                            }
#line 943 "cplus.met"
#line 946 "cplus.met"
                            AnalyzeComment (retTree );
#line 946 "cplus.met"
#line 947 "cplus.met"
                            {
#line 947 "cplus.met"
                                _retValue = retTree ;
#line 947 "cplus.met"
                                goto quick_prog_elem_ret;
#line 947 "cplus.met"
                                
#line 947 "cplus.met"
                            }
#line 947 "cplus.met"
#line 947 "cplus.met"
                            break;
#line 947 "cplus.met"
#line 949 "cplus.met"
                        case PRAGMA_COMMENT_PLUS : 
#line 949 "cplus.met"
                            tokenAhead = 0 ;
#line 949 "cplus.met"
                            CommTerm();
#line 949 "cplus.met"
#line 950 "cplus.met"
#line 951 "cplus.met"
                            {
#line 951 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 951 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 951 "cplus.met"
                                {
#line 951 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 951 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 951 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 951 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 951 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 951 "cplus.met"
                                    } else {
#line 951 "cplus.met"
                                        tokenAhead = 0 ;
#line 951 "cplus.met"
                                    }
#line 951 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 951 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 951 "cplus.met"
                                }
#line 951 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 951 "cplus.met"
                                retTree=_ptRes0;
#line 951 "cplus.met"
                            }
#line 951 "cplus.met"
#line 954 "cplus.met"
                            AnalyzeComment (retTree );
#line 954 "cplus.met"
#line 955 "cplus.met"
                            {
#line 955 "cplus.met"
                                _retValue = retTree ;
#line 955 "cplus.met"
                                goto quick_prog_elem_ret;
#line 955 "cplus.met"
                                
#line 955 "cplus.met"
                            }
#line 955 "cplus.met"
#line 955 "cplus.met"
                            break;
#line 955 "cplus.met"
#line 957 "cplus.met"
                        case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 957 "cplus.met"
                            tokenAhead = 0 ;
#line 957 "cplus.met"
                            CommTerm();
#line 957 "cplus.met"
#line 958 "cplus.met"
#line 959 "cplus.met"
                            {
#line 959 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 959 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 959 "cplus.met"
                                {
#line 959 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 959 "cplus.met"
                                    _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 959 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 959 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 959 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 959 "cplus.met"
                                    } else {
#line 959 "cplus.met"
                                        tokenAhead = 0 ;
#line 959 "cplus.met"
                                    }
#line 959 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 959 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 959 "cplus.met"
                                }
#line 959 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 959 "cplus.met"
                                retTree=_ptRes0;
#line 959 "cplus.met"
                            }
#line 959 "cplus.met"
#line 963 "cplus.met"
                            AnalyzeIndentFunctionType (retTree );
#line 963 "cplus.met"
#line 964 "cplus.met"
                            {
#line 964 "cplus.met"
                                _retValue = retTree ;
#line 964 "cplus.met"
                                goto quick_prog_elem_ret;
#line 964 "cplus.met"
                                
#line 964 "cplus.met"
                            }
#line 964 "cplus.met"
#line 964 "cplus.met"
                            break;
#line 964 "cplus.met"
#line 966 "cplus.met"
                        case PRAGMA_FUNC_HEADER : 
#line 966 "cplus.met"
                            tokenAhead = 0 ;
#line 966 "cplus.met"
                            CommTerm();
#line 966 "cplus.met"
#line 967 "cplus.met"
#line 968 "cplus.met"
                            {
#line 968 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 968 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 968 "cplus.met"
                                {
#line 968 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 968 "cplus.met"
                                    _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 968 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 968 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 968 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 968 "cplus.met"
                                    } else {
#line 968 "cplus.met"
                                        tokenAhead = 0 ;
#line 968 "cplus.met"
                                    }
#line 968 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 968 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 968 "cplus.met"
                                }
#line 968 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 968 "cplus.met"
                                retTree=_ptRes0;
#line 968 "cplus.met"
                            }
#line 968 "cplus.met"
#line 971 "cplus.met"
                            AnalyzeFuncHeader (retTree );
#line 971 "cplus.met"
#line 972 "cplus.met"
                            {
#line 972 "cplus.met"
                                _retValue = retTree ;
#line 972 "cplus.met"
                                goto quick_prog_elem_ret;
#line 972 "cplus.met"
                                
#line 972 "cplus.met"
                            }
#line 972 "cplus.met"
#line 972 "cplus.met"
                            break;
#line 972 "cplus.met"
#line 974 "cplus.met"
                        case PRAGMA_PARAMETERS : 
#line 974 "cplus.met"
                            tokenAhead = 0 ;
#line 974 "cplus.met"
                            CommTerm();
#line 974 "cplus.met"
#line 975 "cplus.met"
#line 976 "cplus.met"
                            {
#line 976 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 976 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 976 "cplus.met"
                                {
#line 976 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 976 "cplus.met"
                                    _ptRes1= MakeTree(PARAMETERS, 1);
#line 976 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 976 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 976 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 976 "cplus.met"
                                    } else {
#line 976 "cplus.met"
                                        tokenAhead = 0 ;
#line 976 "cplus.met"
                                    }
#line 976 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 976 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 976 "cplus.met"
                                }
#line 976 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 976 "cplus.met"
                                retTree=_ptRes0;
#line 976 "cplus.met"
                            }
#line 976 "cplus.met"
#line 979 "cplus.met"
                            AnalyzeParameters (retTree );
#line 979 "cplus.met"
#line 980 "cplus.met"
                            {
#line 980 "cplus.met"
                                _retValue = retTree ;
#line 980 "cplus.met"
                                goto quick_prog_elem_ret;
#line 980 "cplus.met"
                                
#line 980 "cplus.met"
                            }
#line 980 "cplus.met"
#line 980 "cplus.met"
                            break;
#line 980 "cplus.met"
#line 982 "cplus.met"
                        default : 
#line 982 "cplus.met"
#line 982 "cplus.met"
                            {
#line 982 "cplus.met"
                                PPTREE _ptTree0=0;
#line 982 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 982 "cplus.met"
                                    MulFreeTree(2,_ptTree0,retTree);
                                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 982 "cplus.met"
                                }
#line 982 "cplus.met"
                                _retValue =_ptTree0;
#line 982 "cplus.met"
                                goto quick_prog_elem_ret;
#line 982 "cplus.met"
                            }
#line 982 "cplus.met"
                            break;
#line 982 "cplus.met"
                    }
#line 982 "cplus.met"
#line 982 "cplus.met"
                    break;
#line 982 "cplus.met"
#line 982 "cplus.met"
                default : 
#line 982 "cplus.met"
#line 982 "cplus.met"
                    break;
#line 982 "cplus.met"
            }
#line 982 "cplus.met"
#line 987 "cplus.met"
            {
#line 987 "cplus.met"
                PPTREE _ptTree0=0;
#line 987 "cplus.met"
                {
#line 987 "cplus.met"
                    PPTREE _ptRes1=0;
#line 987 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 987 "cplus.met"
                    _ptTree0=_ptRes1;
#line 987 "cplus.met"
                }
#line 987 "cplus.met"
                _retValue =_ptTree0;
#line 987 "cplus.met"
                goto quick_prog_elem_ret;
#line 987 "cplus.met"
            }
#line 987 "cplus.met"
#line 987 "cplus.met"
            break;
#line 987 "cplus.met"
#line 989 "cplus.met"
        default : 
#line 989 "cplus.met"
            tokenAhead = 0 ;
#line 989 "cplus.met"
            CommTerm();
#line 989 "cplus.met"
#line 990 "cplus.met"
#line 991 "cplus.met"
            if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 991 "cplus.met"
#line 992 "cplus.met"
#line 993 "cplus.met"
                (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 993 "cplus.met"
                if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 993 "cplus.met"
                    MulFreeTree(1,retTree);
                    TOKEN_EXIT(quick_prog_elem_exit,"END_LINE")
#line 993 "cplus.met"
                } else {
#line 993 "cplus.met"
                    tokenAhead = 0 ;
#line 993 "cplus.met"
                }
#line 993 "cplus.met"
#line 994 "cplus.met"
                 goto debut;
#line 994 "cplus.met"
#line 994 "cplus.met"
#line 994 "cplus.met"
            } else {
#line 994 "cplus.met"
#line 997 "cplus.met"
                {
#line 997 "cplus.met"
                    _retValue = retTree ;
#line 997 "cplus.met"
                    goto quick_prog_elem_ret;
#line 997 "cplus.met"
                    
#line 997 "cplus.met"
                }
#line 997 "cplus.met"
            }
#line 997 "cplus.met"
#line 997 "cplus.met"
            break;
#line 997 "cplus.met"
    }
#line 997 "cplus.met"
#line 997 "cplus.met"
#line 999 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 999 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 999 "cplus.met"
return((PPTREE) 0);
#line 999 "cplus.met"

#line 999 "cplus.met"
quick_prog_elem_exit :
#line 999 "cplus.met"

#line 999 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_EXIT,(PPTREE)0);
#line 999 "cplus.met"
    _funcLevel--;
#line 999 "cplus.met"
    return((PPTREE) -1) ;
#line 999 "cplus.met"

#line 999 "cplus.met"
quick_prog_elem_ret :
#line 999 "cplus.met"
    
#line 999 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_RETURN,_retValue);
#line 999 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 999 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 999 "cplus.met"
    return _retValue ;
#line 999 "cplus.met"
}
#line 999 "cplus.met"

#line 999 "cplus.met"
#line 2104 "cplus.met"
PPTREE cplus::range_in_liste ( int error_free)
#line 2104 "cplus.met"
{
#line 2104 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2104 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2104 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2104 "cplus.met"
    int _Debug = TRACE_RULE("range_in_liste",TRACE_ENTER,(PPTREE)0);
#line 2104 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2104 "cplus.met"
#line 2104 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2104 "cplus.met"
#line 2106 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2106 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(retTree))) {
#line 2106 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(range_in_liste_exit,"IDENT")
#line 2106 "cplus.met"
    } else {
#line 2106 "cplus.met"
        tokenAhead = 0 ;
#line 2106 "cplus.met"
    }
#line 2106 "cplus.met"
#line 2107 "cplus.met"
    if ( IsRange(lexEl.string())){
#line 2107 "cplus.met"
#line 2108 "cplus.met"
        {
#line 2108 "cplus.met"
            _retValue = retTree ;
#line 2108 "cplus.met"
            goto range_in_liste_ret;
#line 2108 "cplus.met"
            
#line 2108 "cplus.met"
        }
#line 2108 "cplus.met"
    } else {
#line 2108 "cplus.met"
#line 2110 "cplus.met"
        
#line 2110 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 2110 "cplus.met"
        goto range_in_liste_exit;
#line 2110 "cplus.met"
    }
#line 2110 "cplus.met"
#line 2110 "cplus.met"
#line 2110 "cplus.met"

#line 2111 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2111 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2111 "cplus.met"
return((PPTREE) 0);
#line 2111 "cplus.met"

#line 2111 "cplus.met"
range_in_liste_exit :
#line 2111 "cplus.met"

#line 2111 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_EXIT,(PPTREE)0);
#line 2111 "cplus.met"
    _funcLevel--;
#line 2111 "cplus.met"
    return((PPTREE) -1) ;
#line 2111 "cplus.met"

#line 2111 "cplus.met"
range_in_liste_ret :
#line 2111 "cplus.met"
    
#line 2111 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_RETURN,_retValue);
#line 2111 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2111 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2111 "cplus.met"
    return _retValue ;
#line 2111 "cplus.met"
}
#line 2111 "cplus.met"

#line 2111 "cplus.met"
#line 2130 "cplus.met"
PPTREE cplus::range_modifier ( int error_free)
#line 2130 "cplus.met"
{
#line 2130 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2130 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2130 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2130 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier",TRACE_ENTER,(PPTREE)0);
#line 2130 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2130 "cplus.met"
#line 2131 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2131 "cplus.met"
    switch( lexEl.Value) {
#line 2131 "cplus.met"
#line 2132 "cplus.met"
        case META : 
#line 2132 "cplus.met"
        case IDENT : 
#line 2132 "cplus.met"
#line 2132 "cplus.met"
            {
#line 2132 "cplus.met"
                PPTREE _ptTree0=0;
#line 2132 "cplus.met"
                {
#line 2132 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2132 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2132 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(range_in_liste)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 2132 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2132 "cplus.met"
                    }
#line 2132 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2132 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2132 "cplus.met"
                }
#line 2132 "cplus.met"
                _retValue =_ptTree0;
#line 2132 "cplus.met"
                goto range_modifier_ret;
#line 2132 "cplus.met"
            }
#line 2132 "cplus.met"
            break;
#line 2132 "cplus.met"
#line 2133 "cplus.met"
        case VOLATILE : 
#line 2133 "cplus.met"
#line 2133 "cplus.met"
            {
#line 2133 "cplus.met"
                PPTREE _ptTree0=0;
#line 2133 "cplus.met"
                {
#line 2133 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2133 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2133 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2133 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2133 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"volatile")
#line 2133 "cplus.met"
                    } else {
#line 2133 "cplus.met"
                        tokenAhead = 0 ;
#line 2133 "cplus.met"
                    }
#line 2133 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2133 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2133 "cplus.met"
                }
#line 2133 "cplus.met"
                _retValue =_ptTree0;
#line 2133 "cplus.met"
                goto range_modifier_ret;
#line 2133 "cplus.met"
            }
#line 2133 "cplus.met"
            break;
#line 2133 "cplus.met"
#line 2135 "cplus.met"
        case REGISTER : 
#line 2135 "cplus.met"
#line 2135 "cplus.met"
            {
#line 2135 "cplus.met"
                PPTREE _ptTree0=0;
#line 2135 "cplus.met"
                {
#line 2135 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2135 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2135 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2135 "cplus.met"
                    if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2135 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"register")
#line 2135 "cplus.met"
                    } else {
#line 2135 "cplus.met"
                        tokenAhead = 0 ;
#line 2135 "cplus.met"
                    }
#line 2135 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2135 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2135 "cplus.met"
                }
#line 2135 "cplus.met"
                _retValue =_ptTree0;
#line 2135 "cplus.met"
                goto range_modifier_ret;
#line 2135 "cplus.met"
            }
#line 2135 "cplus.met"
            break;
#line 2135 "cplus.met"
#line 2137 "cplus.met"
        default : 
#line 2137 "cplus.met"
#line 2137 "cplus.met"
            {
#line 2137 "cplus.met"
                PPTREE _ptTree0=0;
#line 2137 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_function)(error_free), 118, cplus))== (PPTREE) -1 ) {
#line 2137 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2137 "cplus.met"
                }
#line 2137 "cplus.met"
                _retValue =_ptTree0;
#line 2137 "cplus.met"
                goto range_modifier_ret;
#line 2137 "cplus.met"
            }
#line 2137 "cplus.met"
            break;
#line 2137 "cplus.met"
    }
#line 2137 "cplus.met"
#line 2137 "cplus.met"
#line 2138 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2138 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2138 "cplus.met"
return((PPTREE) 0);
#line 2138 "cplus.met"

#line 2138 "cplus.met"
range_modifier_exit :
#line 2138 "cplus.met"

#line 2138 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_EXIT,(PPTREE)0);
#line 2138 "cplus.met"
    _funcLevel--;
#line 2138 "cplus.met"
    return((PPTREE) -1) ;
#line 2138 "cplus.met"

#line 2138 "cplus.met"
range_modifier_ret :
#line 2138 "cplus.met"
    
#line 2138 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_RETURN,_retValue);
#line 2138 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2138 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2138 "cplus.met"
    return _retValue ;
#line 2138 "cplus.met"
}
#line 2138 "cplus.met"

#line 2138 "cplus.met"
#line 2121 "cplus.met"
PPTREE cplus::range_modifier_function ( int error_free)
#line 2121 "cplus.met"
{
#line 2121 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2121 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2121 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2121 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_function",TRACE_ENTER,(PPTREE)0);
#line 2121 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2121 "cplus.met"
#line 2122 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2122 "cplus.met"
    switch( lexEl.Value) {
#line 2122 "cplus.met"
#line 2123 "cplus.met"
        case INLINE : 
#line 2123 "cplus.met"
#line 2123 "cplus.met"
            {
#line 2123 "cplus.met"
                PPTREE _ptTree0=0;
#line 2123 "cplus.met"
                {
#line 2123 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2123 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2123 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2123 "cplus.met"
                    if (  !SEE_TOKEN( INLINE,"inline") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2123 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"inline")
#line 2123 "cplus.met"
                    } else {
#line 2123 "cplus.met"
                        tokenAhead = 0 ;
#line 2123 "cplus.met"
                    }
#line 2123 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2123 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2123 "cplus.met"
                }
#line 2123 "cplus.met"
                _retValue =_ptTree0;
#line 2123 "cplus.met"
                goto range_modifier_function_ret;
#line 2123 "cplus.met"
            }
#line 2123 "cplus.met"
            break;
#line 2123 "cplus.met"
#line 2124 "cplus.met"
        case VIRTUAL : 
#line 2124 "cplus.met"
#line 2124 "cplus.met"
            {
#line 2124 "cplus.met"
                PPTREE _ptTree0=0;
#line 2124 "cplus.met"
                {
#line 2124 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2124 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2124 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2124 "cplus.met"
                    if (  !SEE_TOKEN( VIRTUAL,"virtual") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2124 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"virtual")
#line 2124 "cplus.met"
                    } else {
#line 2124 "cplus.met"
                        tokenAhead = 0 ;
#line 2124 "cplus.met"
                    }
#line 2124 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2124 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2124 "cplus.met"
                }
#line 2124 "cplus.met"
                _retValue =_ptTree0;
#line 2124 "cplus.met"
                goto range_modifier_function_ret;
#line 2124 "cplus.met"
            }
#line 2124 "cplus.met"
            break;
#line 2124 "cplus.met"
#line 2125 "cplus.met"
        case FRIEND : 
#line 2125 "cplus.met"
#line 2125 "cplus.met"
            {
#line 2125 "cplus.met"
                PPTREE _ptTree0=0;
#line 2125 "cplus.met"
                {
#line 2125 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2125 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2125 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2125 "cplus.met"
                    if (  !SEE_TOKEN( FRIEND,"friend") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2125 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"friend")
#line 2125 "cplus.met"
                    } else {
#line 2125 "cplus.met"
                        tokenAhead = 0 ;
#line 2125 "cplus.met"
                    }
#line 2125 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2125 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2125 "cplus.met"
                }
#line 2125 "cplus.met"
                _retValue =_ptTree0;
#line 2125 "cplus.met"
                goto range_modifier_function_ret;
#line 2125 "cplus.met"
            }
#line 2125 "cplus.met"
            break;
#line 2125 "cplus.met"
#line 2126 "cplus.met"
        case CONST : 
#line 2126 "cplus.met"
#line 2126 "cplus.met"
            {
#line 2126 "cplus.met"
                PPTREE _ptTree0=0;
#line 2126 "cplus.met"
                {
#line 2126 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2126 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2126 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2126 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2126 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"const")
#line 2126 "cplus.met"
                    } else {
#line 2126 "cplus.met"
                        tokenAhead = 0 ;
#line 2126 "cplus.met"
                    }
#line 2126 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2126 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2126 "cplus.met"
                }
#line 2126 "cplus.met"
                _retValue =_ptTree0;
#line 2126 "cplus.met"
                goto range_modifier_function_ret;
#line 2126 "cplus.met"
            }
#line 2126 "cplus.met"
            break;
#line 2126 "cplus.met"
        default :
#line 2126 "cplus.met"
            CASE_EXIT(range_modifier_function_exit,"either inline or virtual or friend or const")
#line 2126 "cplus.met"
            break;
#line 2126 "cplus.met"
    }
#line 2126 "cplus.met"
#line 2126 "cplus.met"
#line 2127 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2127 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2127 "cplus.met"
return((PPTREE) 0);
#line 2127 "cplus.met"

#line 2127 "cplus.met"
range_modifier_function_exit :
#line 2127 "cplus.met"

#line 2127 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_EXIT,(PPTREE)0);
#line 2127 "cplus.met"
    _funcLevel--;
#line 2127 "cplus.met"
    return((PPTREE) -1) ;
#line 2127 "cplus.met"

#line 2127 "cplus.met"
range_modifier_function_ret :
#line 2127 "cplus.met"
    
#line 2127 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_RETURN,_retValue);
#line 2127 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2127 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2127 "cplus.met"
    return _retValue ;
#line 2127 "cplus.met"
}
#line 2127 "cplus.met"

#line 2127 "cplus.met"
#line 2002 "cplus.met"
PPTREE cplus::range_modifier_ident ( int error_free)
#line 2002 "cplus.met"
{
#line 2002 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2002 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2002 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2002 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_ident",TRACE_ENTER,(PPTREE)0);
#line 2002 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2002 "cplus.met"
#line 2002 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2002 "cplus.met"
#line 2004 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(range_modifier), 117, cplus)){
#line 2004 "cplus.met"
#line 2005 "cplus.met"
        {
#line 2005 "cplus.met"
            PPTREE _ptTree0=0;
#line 2005 "cplus.met"
            {
#line 2005 "cplus.met"
                PPTREE _ptTree1=0;
#line 2005 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 119, cplus))== (PPTREE) -1 ) {
#line 2005 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                    PROG_EXIT(range_modifier_ident_exit,"range_modifier_ident")
#line 2005 "cplus.met"
                }
#line 2005 "cplus.met"
                _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2005 "cplus.met"
            }
#line 2005 "cplus.met"
            _retValue =_ptTree0;
#line 2005 "cplus.met"
            goto range_modifier_ident_ret;
#line 2005 "cplus.met"
        }
#line 2005 "cplus.met"
    } else {
#line 2005 "cplus.met"
#line 2007 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 2007 "cplus.met"
#line 2008 "cplus.met"
            {
#line 2008 "cplus.met"
                PPTREE _ptTree0=0;
#line 2008 "cplus.met"
                {
#line 2008 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2008 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 2008 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2008 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2008 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        TOKEN_EXIT(range_modifier_ident_exit,"IDENT")
#line 2008 "cplus.met"
                    } else {
#line 2008 "cplus.met"
                        tokenAhead = 0 ;
#line 2008 "cplus.met"
                    }
#line 2008 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2008 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2008 "cplus.met"
                }
#line 2008 "cplus.met"
                _retValue =_ptTree0;
#line 2008 "cplus.met"
                goto range_modifier_ident_ret;
#line 2008 "cplus.met"
            }
#line 2008 "cplus.met"
        }
#line 2008 "cplus.met"
    }
#line 2008 "cplus.met"
#line 2008 "cplus.met"
#line 2008 "cplus.met"

#line 2009 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2009 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2009 "cplus.met"
return((PPTREE) 0);
#line 2009 "cplus.met"

#line 2009 "cplus.met"
range_modifier_ident_exit :
#line 2009 "cplus.met"

#line 2009 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_EXIT,(PPTREE)0);
#line 2009 "cplus.met"
    _funcLevel--;
#line 2009 "cplus.met"
    return((PPTREE) -1) ;
#line 2009 "cplus.met"

#line 2009 "cplus.met"
range_modifier_ident_ret :
#line 2009 "cplus.met"
    
#line 2009 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_RETURN,_retValue);
#line 2009 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2009 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2009 "cplus.met"
    return _retValue ;
#line 2009 "cplus.met"
}
#line 2009 "cplus.met"

#line 2009 "cplus.met"
#line 799 "cplus.met"
PPTREE cplus::range_pragma ( int error_free)
#line 799 "cplus.met"
{
#line 799 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 799 "cplus.met"
    int _value,_nbPre = 0 ;
#line 799 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 799 "cplus.met"
    int _Debug = TRACE_RULE("range_pragma",TRACE_ENTER,(PPTREE)0);
#line 799 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 799 "cplus.met"
#line 800 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 800 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_RANGE,"PRAGMA_RANGE") || !(CommTerm(),1)) {
#line 800 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"PRAGMA_RANGE")
#line 800 "cplus.met"
    } else {
#line 800 "cplus.met"
        tokenAhead = 0 ;
#line 800 "cplus.met"
    }
#line 800 "cplus.met"
#line 801 "cplus.met"
    (tokenAhead == 9|| (LexPragmaSmall(),TRACE_LEX(1)));
#line 801 "cplus.met"
    if ( ! TERM_OR_META(SMALL_PRAGMA_CONTENT,"SMALL_PRAGMA_CONTENT") || !(CommTerm(),1)) {
#line 801 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"SMALL_PRAGMA_CONTENT")
#line 801 "cplus.met"
    } else {
#line 801 "cplus.met"
        tokenAhead = 0 ;
#line 801 "cplus.met"
    }
#line 801 "cplus.met"
#line 802 "cplus.met"
     AnalyseRange(lexEl.string());
#line 802 "cplus.met"
#line 802 "cplus.met"
#line 802 "cplus.met"

#line 803 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 803 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 803 "cplus.met"
return((PPTREE) 0);
#line 803 "cplus.met"

#line 803 "cplus.met"
range_pragma_exit :
#line 803 "cplus.met"

#line 803 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_EXIT,(PPTREE)0);
#line 803 "cplus.met"
    _funcLevel--;
#line 803 "cplus.met"
    return((PPTREE) -1) ;
#line 803 "cplus.met"

#line 803 "cplus.met"
range_pragma_ret :
#line 803 "cplus.met"
    
#line 803 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_RETURN,_retValue);
#line 803 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 803 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 803 "cplus.met"
    return _retValue ;
#line 803 "cplus.met"
}
#line 803 "cplus.met"

#line 803 "cplus.met"
#line 2641 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2641 "cplus.met"
{
#line 2641 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2641 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2641 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2641 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2641 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2641 "cplus.met"
#line 2641 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2641 "cplus.met"
#line 2643 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 2643 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2643 "cplus.met"
    }
#line 2643 "cplus.met"
#line 2644 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 2644 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 2644 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 2644 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 2644 "cplus.met"
#line 2645 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2645 "cplus.met"
        switch( lexEl.Value) {
#line 2645 "cplus.met"
#line 2646 "cplus.met"
            case INFEEGAL : 
#line 2646 "cplus.met"
                tokenAhead = 0 ;
#line 2646 "cplus.met"
                CommTerm();
#line 2646 "cplus.met"
#line 2646 "cplus.met"
                {
#line 2646 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2646 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 2646 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2646 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 2646 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2646 "cplus.met"
                    }
#line 2646 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2646 "cplus.met"
                    expTree=_ptRes0;
#line 2646 "cplus.met"
                }
#line 2646 "cplus.met"
                break;
#line 2646 "cplus.met"
#line 2648 "cplus.met"
            case SUPEEGAL : 
#line 2648 "cplus.met"
                tokenAhead = 0 ;
#line 2648 "cplus.met"
                CommTerm();
#line 2648 "cplus.met"
#line 2648 "cplus.met"
                {
#line 2648 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2648 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 2648 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2648 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 2648 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2648 "cplus.met"
                    }
#line 2648 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2648 "cplus.met"
                    expTree=_ptRes0;
#line 2648 "cplus.met"
                }
#line 2648 "cplus.met"
                break;
#line 2648 "cplus.met"
#line 2650 "cplus.met"
            case SUPE : 
#line 2650 "cplus.met"
                tokenAhead = 0 ;
#line 2650 "cplus.met"
                CommTerm();
#line 2650 "cplus.met"
#line 2650 "cplus.met"
                {
#line 2650 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2650 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 2650 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2650 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 2650 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2650 "cplus.met"
                    }
#line 2650 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2650 "cplus.met"
                    expTree=_ptRes0;
#line 2650 "cplus.met"
                }
#line 2650 "cplus.met"
                break;
#line 2650 "cplus.met"
#line 2651 "cplus.met"
            case INFE : 
#line 2651 "cplus.met"
                tokenAhead = 0 ;
#line 2651 "cplus.met"
                CommTerm();
#line 2651 "cplus.met"
#line 2651 "cplus.met"
                {
#line 2651 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2651 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 2651 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2651 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 2651 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2651 "cplus.met"
                    }
#line 2651 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2651 "cplus.met"
                    expTree=_ptRes0;
#line 2651 "cplus.met"
                }
#line 2651 "cplus.met"
                break;
#line 2651 "cplus.met"
            default :
#line 2651 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 2651 "cplus.met"
                break;
#line 2651 "cplus.met"
        }
#line 2651 "cplus.met"
    } 
#line 2651 "cplus.met"
#line 2653 "cplus.met"
    {
#line 2653 "cplus.met"
        _retValue = expTree ;
#line 2653 "cplus.met"
        goto relational_expression_ret;
#line 2653 "cplus.met"
        
#line 2653 "cplus.met"
    }
#line 2653 "cplus.met"
#line 2653 "cplus.met"
#line 2653 "cplus.met"

#line 2654 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2654 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2654 "cplus.met"
return((PPTREE) 0);
#line 2654 "cplus.met"

#line 2654 "cplus.met"
relational_expression_exit :
#line 2654 "cplus.met"

#line 2654 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 2654 "cplus.met"
    _funcLevel--;
#line 2654 "cplus.met"
    return((PPTREE) -1) ;
#line 2654 "cplus.met"

#line 2654 "cplus.met"
relational_expression_ret :
#line 2654 "cplus.met"
    
#line 2654 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 2654 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2654 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2654 "cplus.met"
    return _retValue ;
#line 2654 "cplus.met"
}
#line 2654 "cplus.met"

#line 2654 "cplus.met"
#line 1482 "cplus.met"
PPTREE cplus::sc_specifier ( int error_free)
#line 1482 "cplus.met"
{
#line 1482 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1482 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1482 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1482 "cplus.met"
    int _Debug = TRACE_RULE("sc_specifier",TRACE_ENTER,(PPTREE)0);
#line 1482 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1482 "cplus.met"
#line 1483 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1483 "cplus.met"
    switch( lexEl.Value) {
#line 1483 "cplus.met"
#line 1484 "cplus.met"
        case AUTO : 
#line 1484 "cplus.met"
#line 1484 "cplus.met"
            {
#line 1484 "cplus.met"
                PPTREE _ptTree0=0;
#line 1484 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1484 "cplus.met"
                if (  !SEE_TOKEN( AUTO,"auto") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1484 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"auto")
#line 1484 "cplus.met"
                } else {
#line 1484 "cplus.met"
                    tokenAhead = 0 ;
#line 1484 "cplus.met"
                }
#line 1484 "cplus.met"
                _retValue =_ptTree0;
#line 1484 "cplus.met"
                goto sc_specifier_ret;
#line 1484 "cplus.met"
            }
#line 1484 "cplus.met"
            break;
#line 1484 "cplus.met"
#line 1485 "cplus.met"
        case STATIC : 
#line 1485 "cplus.met"
#line 1485 "cplus.met"
            {
#line 1485 "cplus.met"
                PPTREE _ptTree0=0;
#line 1485 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1485 "cplus.met"
                if (  !SEE_TOKEN( STATIC,"static") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1485 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"static")
#line 1485 "cplus.met"
                } else {
#line 1485 "cplus.met"
                    tokenAhead = 0 ;
#line 1485 "cplus.met"
                }
#line 1485 "cplus.met"
                _retValue =_ptTree0;
#line 1485 "cplus.met"
                goto sc_specifier_ret;
#line 1485 "cplus.met"
            }
#line 1485 "cplus.met"
            break;
#line 1485 "cplus.met"
#line 1486 "cplus.met"
        case EXTERN : 
#line 1486 "cplus.met"
#line 1486 "cplus.met"
            {
#line 1486 "cplus.met"
                PPTREE _ptTree0=0;
#line 1486 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1486 "cplus.met"
                if (  !SEE_TOKEN( EXTERN,"extern") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1486 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"extern")
#line 1486 "cplus.met"
                } else {
#line 1486 "cplus.met"
                    tokenAhead = 0 ;
#line 1486 "cplus.met"
                }
#line 1486 "cplus.met"
                _retValue =_ptTree0;
#line 1486 "cplus.met"
                goto sc_specifier_ret;
#line 1486 "cplus.met"
            }
#line 1486 "cplus.met"
            break;
#line 1486 "cplus.met"
#line 1487 "cplus.met"
        case REGISTER : 
#line 1487 "cplus.met"
#line 1487 "cplus.met"
            {
#line 1487 "cplus.met"
                PPTREE _ptTree0=0;
#line 1487 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1487 "cplus.met"
                if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1487 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"register")
#line 1487 "cplus.met"
                } else {
#line 1487 "cplus.met"
                    tokenAhead = 0 ;
#line 1487 "cplus.met"
                }
#line 1487 "cplus.met"
                _retValue =_ptTree0;
#line 1487 "cplus.met"
                goto sc_specifier_ret;
#line 1487 "cplus.met"
            }
#line 1487 "cplus.met"
            break;
#line 1487 "cplus.met"
#line 1487 "cplus.met"
        default : 
#line 1487 "cplus.met"
#line 1487 "cplus.met"
            break;
#line 1487 "cplus.met"
    }
#line 1487 "cplus.met"
#line 1487 "cplus.met"
#line 1489 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1489 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1489 "cplus.met"
return((PPTREE) 0);
#line 1489 "cplus.met"

#line 1489 "cplus.met"
sc_specifier_exit :
#line 1489 "cplus.met"

#line 1489 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_EXIT,(PPTREE)0);
#line 1489 "cplus.met"
    _funcLevel--;
#line 1489 "cplus.met"
    return((PPTREE) -1) ;
#line 1489 "cplus.met"

#line 1489 "cplus.met"
sc_specifier_ret :
#line 1489 "cplus.met"
    
#line 1489 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_RETURN,_retValue);
#line 1489 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1489 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1489 "cplus.met"
    return _retValue ;
#line 1489 "cplus.met"
}
#line 1489 "cplus.met"

#line 1489 "cplus.met"
#line 2656 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 2656 "cplus.met"
{
#line 2656 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2656 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2656 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2656 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 2656 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2656 "cplus.met"
#line 2656 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2656 "cplus.met"
#line 2658 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2658 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2658 "cplus.met"
    }
#line 2658 "cplus.met"
#line 2659 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 2659 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 2659 "cplus.met"
#line 2660 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2660 "cplus.met"
        switch( lexEl.Value) {
#line 2660 "cplus.met"
#line 2661 "cplus.met"
            case INFEINFE : 
#line 2661 "cplus.met"
                tokenAhead = 0 ;
#line 2661 "cplus.met"
                CommTerm();
#line 2661 "cplus.met"
#line 2661 "cplus.met"
                {
#line 2661 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2661 "cplus.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 2661 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2661 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2661 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2661 "cplus.met"
                    }
#line 2661 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2661 "cplus.met"
                    expTree=_ptRes0;
#line 2661 "cplus.met"
                }
#line 2661 "cplus.met"
                break;
#line 2661 "cplus.met"
#line 2663 "cplus.met"
            case SUPESUPE : 
#line 2663 "cplus.met"
                tokenAhead = 0 ;
#line 2663 "cplus.met"
                CommTerm();
#line 2663 "cplus.met"
#line 2663 "cplus.met"
                {
#line 2663 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2663 "cplus.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 2663 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2663 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2663 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2663 "cplus.met"
                    }
#line 2663 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2663 "cplus.met"
                    expTree=_ptRes0;
#line 2663 "cplus.met"
                }
#line 2663 "cplus.met"
                break;
#line 2663 "cplus.met"
            default :
#line 2663 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 2663 "cplus.met"
                break;
#line 2663 "cplus.met"
        }
#line 2663 "cplus.met"
    } 
#line 2663 "cplus.met"
#line 2666 "cplus.met"
    {
#line 2666 "cplus.met"
        _retValue = expTree ;
#line 2666 "cplus.met"
        goto shift_expression_ret;
#line 2666 "cplus.met"
        
#line 2666 "cplus.met"
    }
#line 2666 "cplus.met"
#line 2666 "cplus.met"
#line 2666 "cplus.met"

#line 2667 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2667 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2667 "cplus.met"
return((PPTREE) 0);
#line 2667 "cplus.met"

#line 2667 "cplus.met"
shift_expression_exit :
#line 2667 "cplus.met"

#line 2667 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 2667 "cplus.met"
    _funcLevel--;
#line 2667 "cplus.met"
    return((PPTREE) -1) ;
#line 2667 "cplus.met"

#line 2667 "cplus.met"
shift_expression_ret :
#line 2667 "cplus.met"
    
#line 2667 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 2667 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2667 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2667 "cplus.met"
    return _retValue ;
#line 2667 "cplus.met"
}
#line 2667 "cplus.met"

#line 2667 "cplus.met"
#line 2040 "cplus.met"
PPTREE cplus::simple_type ( int error_free)
#line 2040 "cplus.met"
{
#line 2040 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2040 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2040 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2040 "cplus.met"
    int _Debug = TRACE_RULE("simple_type",TRACE_ENTER,(PPTREE)0);
#line 2040 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2040 "cplus.met"
#line 2040 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2040 "cplus.met"
#line 2042 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2042 "cplus.met"
    switch( lexEl.Value) {
#line 2042 "cplus.met"
#line 2043 "cplus.met"
        case TYPENAME : 
#line 2043 "cplus.met"
            tokenAhead = 0 ;
#line 2043 "cplus.met"
            CommTerm();
#line 2043 "cplus.met"
#line 2043 "cplus.met"
            {
#line 2043 "cplus.met"
                PPTREE _ptTree0=0;
#line 2043 "cplus.met"
                {
#line 2043 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2043 "cplus.met"
                    _ptRes1= MakeTree(TYPENAME, 1);
#line 2043 "cplus.met"
                    {
#line 2043 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2043 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2043 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2043 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2043 "cplus.met"
                        }
#line 2043 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2043 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2043 "cplus.met"
                    }
#line 2043 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2043 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2043 "cplus.met"
                }
#line 2043 "cplus.met"
                _retValue =_ptTree0;
#line 2043 "cplus.met"
                goto simple_type_ret;
#line 2043 "cplus.met"
            }
#line 2043 "cplus.met"
            break;
#line 2043 "cplus.met"
#line 2045 "cplus.met"
        case AUTO : 
#line 2045 "cplus.met"
            tokenAhead = 0 ;
#line 2045 "cplus.met"
            CommTerm();
#line 2045 "cplus.met"
#line 2045 "cplus.met"
            {
#line 2045 "cplus.met"
                PPTREE _ptTree0=0;
#line 2045 "cplus.met"
                {
#line 2045 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2045 "cplus.met"
                    _ptRes1= MakeTree(AUTO, 0);
#line 2045 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2045 "cplus.met"
                }
#line 2045 "cplus.met"
                _retValue =_ptTree0;
#line 2045 "cplus.met"
                goto simple_type_ret;
#line 2045 "cplus.met"
            }
#line 2045 "cplus.met"
            break;
#line 2045 "cplus.met"
#line 2046 "cplus.met"
        case DOUBLE : 
#line 2046 "cplus.met"
            tokenAhead = 0 ;
#line 2046 "cplus.met"
            CommTerm();
#line 2046 "cplus.met"
#line 2046 "cplus.met"
            {
#line 2046 "cplus.met"
                PPTREE _ptTree0=0;
#line 2046 "cplus.met"
                {
#line 2046 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2046 "cplus.met"
                    _ptRes1= MakeTree(TDOUBLE, 0);
#line 2046 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2046 "cplus.met"
                }
#line 2046 "cplus.met"
                _retValue =_ptTree0;
#line 2046 "cplus.met"
                goto simple_type_ret;
#line 2046 "cplus.met"
            }
#line 2046 "cplus.met"
            break;
#line 2046 "cplus.met"
#line 2047 "cplus.met"
        case INT : 
#line 2047 "cplus.met"
            tokenAhead = 0 ;
#line 2047 "cplus.met"
            CommTerm();
#line 2047 "cplus.met"
#line 2047 "cplus.met"
            {
#line 2047 "cplus.met"
                PPTREE _ptTree0=0;
#line 2047 "cplus.met"
                {
#line 2047 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2047 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2047 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2047 "cplus.met"
                }
#line 2047 "cplus.met"
                _retValue =_ptTree0;
#line 2047 "cplus.met"
                goto simple_type_ret;
#line 2047 "cplus.met"
            }
#line 2047 "cplus.met"
            break;
#line 2047 "cplus.met"
#line 2048 "cplus.met"
        case CHAR : 
#line 2048 "cplus.met"
            tokenAhead = 0 ;
#line 2048 "cplus.met"
            CommTerm();
#line 2048 "cplus.met"
#line 2048 "cplus.met"
            {
#line 2048 "cplus.met"
                PPTREE _ptTree0=0;
#line 2048 "cplus.met"
                {
#line 2048 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2048 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2048 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2048 "cplus.met"
                }
#line 2048 "cplus.met"
                _retValue =_ptTree0;
#line 2048 "cplus.met"
                goto simple_type_ret;
#line 2048 "cplus.met"
            }
#line 2048 "cplus.met"
            break;
#line 2048 "cplus.met"
#line 2049 "cplus.met"
        case FLOAT : 
#line 2049 "cplus.met"
            tokenAhead = 0 ;
#line 2049 "cplus.met"
            CommTerm();
#line 2049 "cplus.met"
#line 2049 "cplus.met"
            {
#line 2049 "cplus.met"
                PPTREE _ptTree0=0;
#line 2049 "cplus.met"
                {
#line 2049 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2049 "cplus.met"
                    _ptRes1= MakeTree(TFLOAT, 0);
#line 2049 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2049 "cplus.met"
                }
#line 2049 "cplus.met"
                _retValue =_ptTree0;
#line 2049 "cplus.met"
                goto simple_type_ret;
#line 2049 "cplus.met"
            }
#line 2049 "cplus.met"
            break;
#line 2049 "cplus.met"
#line 2050 "cplus.met"
        case VOID : 
#line 2050 "cplus.met"
            tokenAhead = 0 ;
#line 2050 "cplus.met"
            CommTerm();
#line 2050 "cplus.met"
#line 2050 "cplus.met"
            {
#line 2050 "cplus.met"
                PPTREE _ptTree0=0;
#line 2050 "cplus.met"
                {
#line 2050 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2050 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
#line 2050 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2050 "cplus.met"
                }
#line 2050 "cplus.met"
                _retValue =_ptTree0;
#line 2050 "cplus.met"
                goto simple_type_ret;
#line 2050 "cplus.met"
            }
#line 2050 "cplus.met"
            break;
#line 2050 "cplus.met"
#line 2051 "cplus.met"
        case DPOIDPOI : 
#line 2051 "cplus.met"
#line 2051 "cplus.met"
            {
#line 2051 "cplus.met"
                PPTREE _ptTree0=0;
#line 2051 "cplus.met"
                {
#line 2051 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2051 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2051 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2051 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2051 "cplus.met"
                    }
#line 2051 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2051 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2051 "cplus.met"
                }
#line 2051 "cplus.met"
                _retValue =_ptTree0;
#line 2051 "cplus.met"
                goto simple_type_ret;
#line 2051 "cplus.met"
            }
#line 2051 "cplus.met"
            break;
#line 2051 "cplus.met"
#line 2052 "cplus.met"
        case META : 
#line 2052 "cplus.met"
        case IDENT : 
#line 2052 "cplus.met"
#line 2052 "cplus.met"
            {
#line 2052 "cplus.met"
                PPTREE _ptTree0=0;
#line 2052 "cplus.met"
                {
#line 2052 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2052 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2052 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2052 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2052 "cplus.met"
                    }
#line 2052 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2052 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2052 "cplus.met"
                }
#line 2052 "cplus.met"
                _retValue =_ptTree0;
#line 2052 "cplus.met"
                goto simple_type_ret;
#line 2052 "cplus.met"
            }
#line 2052 "cplus.met"
            break;
#line 2052 "cplus.met"
#line 2053 "cplus.met"
        case LONG : 
#line 2053 "cplus.met"
            tokenAhead = 0 ;
#line 2053 "cplus.met"
            CommTerm();
#line 2053 "cplus.met"
#line 2054 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2054 "cplus.met"
            switch( lexEl.Value) {
#line 2054 "cplus.met"
#line 2055 "cplus.met"
                case FLOAT : 
#line 2055 "cplus.met"
                    tokenAhead = 0 ;
#line 2055 "cplus.met"
                    CommTerm();
#line 2055 "cplus.met"
#line 2055 "cplus.met"
                    {
#line 2055 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2055 "cplus.met"
                        {
#line 2055 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2055 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2055 "cplus.met"
                            {
#line 2055 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2055 "cplus.met"
                                _ptRes2= MakeTree(TFLOAT, 0);
#line 2055 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2055 "cplus.met"
                            }
#line 2055 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2055 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2055 "cplus.met"
                        }
#line 2055 "cplus.met"
                        _retValue =_ptTree0;
#line 2055 "cplus.met"
                        goto simple_type_ret;
#line 2055 "cplus.met"
                    }
#line 2055 "cplus.met"
                    break;
#line 2055 "cplus.met"
#line 2056 "cplus.met"
                case DOUBLE : 
#line 2056 "cplus.met"
                    tokenAhead = 0 ;
#line 2056 "cplus.met"
                    CommTerm();
#line 2056 "cplus.met"
#line 2056 "cplus.met"
                    {
#line 2056 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2056 "cplus.met"
                        {
#line 2056 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2056 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2056 "cplus.met"
                            {
#line 2056 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2056 "cplus.met"
                                _ptRes2= MakeTree(TDOUBLE, 0);
#line 2056 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2056 "cplus.met"
                            }
#line 2056 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2056 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2056 "cplus.met"
                        }
#line 2056 "cplus.met"
                        _retValue =_ptTree0;
#line 2056 "cplus.met"
                        goto simple_type_ret;
#line 2056 "cplus.met"
                    }
#line 2056 "cplus.met"
                    break;
#line 2056 "cplus.met"
#line 2057 "cplus.met"
                case INT : 
#line 2057 "cplus.met"
                    tokenAhead = 0 ;
#line 2057 "cplus.met"
                    CommTerm();
#line 2057 "cplus.met"
#line 2057 "cplus.met"
                    {
#line 2057 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2057 "cplus.met"
                        {
#line 2057 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2057 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2057 "cplus.met"
                            {
#line 2057 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2057 "cplus.met"
                                _ptRes2= MakeTree(TINT, 0);
#line 2057 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2057 "cplus.met"
                            }
#line 2057 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2057 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2057 "cplus.met"
                        }
#line 2057 "cplus.met"
                        _retValue =_ptTree0;
#line 2057 "cplus.met"
                        goto simple_type_ret;
#line 2057 "cplus.met"
                    }
#line 2057 "cplus.met"
                    break;
#line 2057 "cplus.met"
#line 2058 "cplus.met"
                case LONG : 
#line 2058 "cplus.met"
                    tokenAhead = 0 ;
#line 2058 "cplus.met"
                    CommTerm();
#line 2058 "cplus.met"
#line 2059 "cplus.met"
#line 2060 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2060 "cplus.met"
                    switch( lexEl.Value) {
#line 2060 "cplus.met"
#line 2061 "cplus.met"
                        case FLOAT : 
#line 2061 "cplus.met"
                            tokenAhead = 0 ;
#line 2061 "cplus.met"
                            CommTerm();
#line 2061 "cplus.met"
#line 2061 "cplus.met"
                            {
#line 2061 "cplus.met"
                                PPTREE _ptTree0=0;
#line 2061 "cplus.met"
                                {
#line 2061 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2061 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2061 "cplus.met"
                                    {
#line 2061 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2061 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2061 "cplus.met"
                                        {
#line 2061 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2061 "cplus.met"
                                            _ptRes3= MakeTree(TFLOAT, 0);
#line 2061 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2061 "cplus.met"
                                        }
#line 2061 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2061 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2061 "cplus.met"
                                    }
#line 2061 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2061 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 2061 "cplus.met"
                                }
#line 2061 "cplus.met"
                                _retValue =_ptTree0;
#line 2061 "cplus.met"
                                goto simple_type_ret;
#line 2061 "cplus.met"
                            }
#line 2061 "cplus.met"
                            break;
#line 2061 "cplus.met"
#line 2063 "cplus.met"
                        case DOUBLE : 
#line 2063 "cplus.met"
                            tokenAhead = 0 ;
#line 2063 "cplus.met"
                            CommTerm();
#line 2063 "cplus.met"
#line 2063 "cplus.met"
                            {
#line 2063 "cplus.met"
                                PPTREE _ptTree0=0;
#line 2063 "cplus.met"
                                {
#line 2063 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2063 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2063 "cplus.met"
                                    {
#line 2063 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2063 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2063 "cplus.met"
                                        {
#line 2063 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2063 "cplus.met"
                                            _ptRes3= MakeTree(TDOUBLE, 0);
#line 2063 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2063 "cplus.met"
                                        }
#line 2063 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2063 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2063 "cplus.met"
                                    }
#line 2063 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2063 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 2063 "cplus.met"
                                }
#line 2063 "cplus.met"
                                _retValue =_ptTree0;
#line 2063 "cplus.met"
                                goto simple_type_ret;
#line 2063 "cplus.met"
                            }
#line 2063 "cplus.met"
                            break;
#line 2063 "cplus.met"
#line 2065 "cplus.met"
                        case INT : 
#line 2065 "cplus.met"
                            tokenAhead = 0 ;
#line 2065 "cplus.met"
                            CommTerm();
#line 2065 "cplus.met"
#line 2065 "cplus.met"
                            {
#line 2065 "cplus.met"
                                PPTREE _ptTree0=0;
#line 2065 "cplus.met"
                                {
#line 2065 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2065 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2065 "cplus.met"
                                    {
#line 2065 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2065 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2065 "cplus.met"
                                        {
#line 2065 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2065 "cplus.met"
                                            _ptRes3= MakeTree(TINT, 0);
#line 2065 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2065 "cplus.met"
                                        }
#line 2065 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2065 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2065 "cplus.met"
                                    }
#line 2065 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2065 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 2065 "cplus.met"
                                }
#line 2065 "cplus.met"
                                _retValue =_ptTree0;
#line 2065 "cplus.met"
                                goto simple_type_ret;
#line 2065 "cplus.met"
                            }
#line 2065 "cplus.met"
                            break;
#line 2065 "cplus.met"
#line 2067 "cplus.met"
                        case LONG : 
#line 2067 "cplus.met"
                            tokenAhead = 0 ;
#line 2067 "cplus.met"
                            CommTerm();
#line 2067 "cplus.met"
#line 2067 "cplus.met"
                            break;
#line 2067 "cplus.met"
#line 2068 "cplus.met"
                        default : 
#line 2068 "cplus.met"
#line 2068 "cplus.met"
                            {
#line 2068 "cplus.met"
                                PPTREE _ptTree0=0;
#line 2068 "cplus.met"
                                {
#line 2068 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2068 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2068 "cplus.met"
                                    {
#line 2068 "cplus.met"
                                        PPTREE _ptRes2=0;
#line 2068 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2068 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2068 "cplus.met"
                                    }
#line 2068 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2068 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 2068 "cplus.met"
                                }
#line 2068 "cplus.met"
                                _retValue =_ptTree0;
#line 2068 "cplus.met"
                                goto simple_type_ret;
#line 2068 "cplus.met"
                            }
#line 2068 "cplus.met"
                            break;
#line 2068 "cplus.met"
                    }
#line 2068 "cplus.met"
#line 2068 "cplus.met"
                    break;
#line 2068 "cplus.met"
#line 2071 "cplus.met"
                default : 
#line 2071 "cplus.met"
#line 2071 "cplus.met"
                    {
#line 2071 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2071 "cplus.met"
                        {
#line 2071 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2071 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2071 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2071 "cplus.met"
                        }
#line 2071 "cplus.met"
                        _retValue =_ptTree0;
#line 2071 "cplus.met"
                        goto simple_type_ret;
#line 2071 "cplus.met"
                    }
#line 2071 "cplus.met"
                    break;
#line 2071 "cplus.met"
            }
#line 2071 "cplus.met"
            break;
#line 2071 "cplus.met"
#line 2073 "cplus.met"
        case SIGNED : 
#line 2073 "cplus.met"
            tokenAhead = 0 ;
#line 2073 "cplus.met"
            CommTerm();
#line 2073 "cplus.met"
#line 2074 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(long_short_int_char), 87, cplus)){
#line 2074 "cplus.met"
#line 2075 "cplus.met"
                {
#line 2075 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2075 "cplus.met"
                    {
#line 2075 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2075 "cplus.met"
                        _ptRes1= MakeTree(TSIGNED, 1);
#line 2075 "cplus.met"
                        ReplaceTree(_ptRes1, 1, valTree );
#line 2075 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2075 "cplus.met"
                    }
#line 2075 "cplus.met"
                    _retValue =_ptTree0;
#line 2075 "cplus.met"
                    goto simple_type_ret;
#line 2075 "cplus.met"
                }
#line 2075 "cplus.met"
            } else {
#line 2075 "cplus.met"
#line 2077 "cplus.met"
                {
#line 2077 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2077 "cplus.met"
                    {
#line 2077 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2077 "cplus.met"
                        _ptRes1= MakeTree(TSIGNED, 1);
#line 2077 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2077 "cplus.met"
                    }
#line 2077 "cplus.met"
                    _retValue =_ptTree0;
#line 2077 "cplus.met"
                    goto simple_type_ret;
#line 2077 "cplus.met"
                }
#line 2077 "cplus.met"
            }
#line 2077 "cplus.met"
            break;
#line 2077 "cplus.met"
#line 2078 "cplus.met"
        case UNSIGNED : 
#line 2078 "cplus.met"
            tokenAhead = 0 ;
#line 2078 "cplus.met"
            CommTerm();
#line 2078 "cplus.met"
#line 2079 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(long_short_int_char), 87, cplus)){
#line 2079 "cplus.met"
#line 2080 "cplus.met"
                {
#line 2080 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2080 "cplus.met"
                    {
#line 2080 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2080 "cplus.met"
                        _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2080 "cplus.met"
                        ReplaceTree(_ptRes1, 1, valTree );
#line 2080 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2080 "cplus.met"
                    }
#line 2080 "cplus.met"
                    _retValue =_ptTree0;
#line 2080 "cplus.met"
                    goto simple_type_ret;
#line 2080 "cplus.met"
                }
#line 2080 "cplus.met"
            } else {
#line 2080 "cplus.met"
#line 2082 "cplus.met"
                {
#line 2082 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2082 "cplus.met"
                    {
#line 2082 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2082 "cplus.met"
                        _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2082 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2082 "cplus.met"
                    }
#line 2082 "cplus.met"
                    _retValue =_ptTree0;
#line 2082 "cplus.met"
                    goto simple_type_ret;
#line 2082 "cplus.met"
                }
#line 2082 "cplus.met"
            }
#line 2082 "cplus.met"
            break;
#line 2082 "cplus.met"
#line 2083 "cplus.met"
        default : 
#line 2083 "cplus.met"
#line 2083 "cplus.met"
            {
#line 2083 "cplus.met"
                PPTREE _ptTree0=0;
#line 2083 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_short_int_char)(error_free), 87, cplus))== (PPTREE) -1 ) {
#line 2083 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2083 "cplus.met"
                }
#line 2083 "cplus.met"
                _retValue =_ptTree0;
#line 2083 "cplus.met"
                goto simple_type_ret;
#line 2083 "cplus.met"
            }
#line 2083 "cplus.met"
            break;
#line 2083 "cplus.met"
    }
#line 2083 "cplus.met"
#line 2083 "cplus.met"
#line 2084 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2084 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2084 "cplus.met"
return((PPTREE) 0);
#line 2084 "cplus.met"

#line 2084 "cplus.met"
simple_type_exit :
#line 2084 "cplus.met"

#line 2084 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2084 "cplus.met"
    _funcLevel--;
#line 2084 "cplus.met"
    return((PPTREE) -1) ;
#line 2084 "cplus.met"

#line 2084 "cplus.met"
simple_type_ret :
#line 2084 "cplus.met"
    
#line 2084 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2084 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2084 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2084 "cplus.met"
    return _retValue ;
#line 2084 "cplus.met"
}
#line 2084 "cplus.met"

#line 2084 "cplus.met"
