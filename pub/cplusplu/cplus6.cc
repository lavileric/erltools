/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 789 "cplus.met"
PPTREE cplus::quick_prog ( int error_free)
#line 789 "cplus.met"
{
#line 789 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 789 "cplus.met"
    int _value,_nbPre = 0 ;
#line 789 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 789 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog",TRACE_ENTER,(PPTREE)0);
#line 789 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 789 "cplus.met"
#line 789 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 789 "cplus.met"
#line 791 "cplus.met"
    while ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(quick_prog_elem), 116, cplus)) && 
#line 791 "cplus.met"
          (! (valTree == (PPTREE) 0))) { 
#line 791 "cplus.met"
#line 792 "cplus.met"
#line 793 "cplus.met"
        FreeTree (valTree );
#line 793 "cplus.met"
#line 794 "cplus.met"
         _lastTree = (PPTREE) 0;
#line 794 "cplus.met"
#line 794 "cplus.met"
    } 
#line 794 "cplus.met"
#line 796 "cplus.met"
    ExtUnputBuf();
#line 796 "cplus.met"
    while ((c == ' ')||(c == '\n')||(c == '\t')||(c == '\r')||(c == ''))
#line 796 "cplus.met"
        NextChar() ;
#line 796 "cplus.met"
    ptStockBuf = -1;
#line 796 "cplus.met"
    lexEl.Erase();
#line 796 "cplus.met"
    tokenAhead = 0;
#line 796 "cplus.met"
    oldLine=line,oldCol=col;
#line 796 "cplus.met"
    if ( !lexCallLex) {
#line 796 "cplus.met"
        PUT_COORD_CALL;
#line 796 "cplus.met"
    }
#line 796 "cplus.met"
#line 797 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 797 "cplus.met"
#line 798 "cplus.met"
        if ( (NQUICK_CALL(_Tak(quick_prog_elem)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 798 "cplus.met"
            MulFreeTree(2,list,valTree);
            PROG_EXIT(quick_prog_exit,"quick_prog")
#line 798 "cplus.met"
        }
#line 798 "cplus.met"
    }
#line 798 "cplus.met"
#line 799 "cplus.met"
    {
#line 799 "cplus.met"
        _retValue = list ;
#line 799 "cplus.met"
        goto quick_prog_ret;
#line 799 "cplus.met"
        
#line 799 "cplus.met"
    }
#line 799 "cplus.met"
#line 799 "cplus.met"
#line 799 "cplus.met"

#line 800 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 800 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 800 "cplus.met"
return((PPTREE) 0);
#line 800 "cplus.met"

#line 800 "cplus.met"
quick_prog_exit :
#line 800 "cplus.met"

#line 800 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_EXIT,(PPTREE)0);
#line 800 "cplus.met"
    _funcLevel--;
#line 800 "cplus.met"
    return((PPTREE) -1) ;
#line 800 "cplus.met"

#line 800 "cplus.met"
quick_prog_ret :
#line 800 "cplus.met"
    
#line 800 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_RETURN,_retValue);
#line 800 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 800 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 800 "cplus.met"
    return _retValue ;
#line 800 "cplus.met"
}
#line 800 "cplus.met"

#line 800 "cplus.met"
#line 822 "cplus.met"
PPTREE cplus::quick_prog_elem ( int error_free)
#line 822 "cplus.met"
{
#line 822 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 822 "cplus.met"
    int _value,_nbPre = 0 ;
#line 822 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 822 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog_elem",TRACE_ENTER,(PPTREE)0);
#line 822 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 822 "cplus.met"
#line 822 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 822 "cplus.met"
#line 824 "cplus.met"
     debut :
#line 824 "cplus.met"
#line 825 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 825 "cplus.met"
    switch( lexEl.Value) {
#line 825 "cplus.met"
#line 826 "cplus.met"
        case META : 
#line 826 "cplus.met"
        case INCLUDE_DIR : 
#line 826 "cplus.met"
#line 826 "cplus.met"
            {
#line 826 "cplus.met"
                PPTREE _ptTree0=0;
#line 826 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 826 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 826 "cplus.met"
                }
#line 826 "cplus.met"
                _retValue =_ptTree0;
#line 826 "cplus.met"
                goto quick_prog_elem_ret;
#line 826 "cplus.met"
            }
#line 826 "cplus.met"
            break;
#line 826 "cplus.met"
#line 827 "cplus.met"
        case PRAGMA_DIR : 
#line 827 "cplus.met"
            tokenAhead = 0 ;
#line 827 "cplus.met"
            CommTerm();
#line 827 "cplus.met"
#line 828 "cplus.met"
#line 829 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(range_pragma), 121, cplus)){
#line 829 "cplus.met"
#line 829 "cplus.met"
            }
#line 829 "cplus.met"
#line 831 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 831 "cplus.met"
            switch( lexEl.Value) {
#line 831 "cplus.met"
#line 832 "cplus.met"
                case META : 
#line 832 "cplus.met"
                case PRAGMA_CONFIG : 
#line 832 "cplus.met"
                    tokenAhead = 0 ;
#line 832 "cplus.met"
                    CommTerm();
#line 832 "cplus.met"
#line 833 "cplus.met"
#line 834 "cplus.met"
                    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 834 "cplus.met"
                    switch( lexEl.Value) {
#line 834 "cplus.met"
#line 835 "cplus.met"
                        case META : 
#line 835 "cplus.met"
                        case PRAGMA_TAB : 
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
                                    _ptRes1= MakeTree(TAB_VALUE, 1);
#line 837 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 837 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 837 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
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
                            AnalyzeTab (retTree );
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
                        case PRAGMA_MODE : 
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
                                    _ptRes1= MakeTree(MODE_VALUE, 1);
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
                            AnalyzeMode (retTree );
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
                        case PRAGMA_ENUM_VERT : 
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
                                    _ptRes1= MakeTree(ENUM_VERT_VALUE, 1);
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
#line 856 "cplus.met"
                            AnalyzeEnumVert (retTree );
#line 856 "cplus.met"
#line 857 "cplus.met"
                            {
#line 857 "cplus.met"
                                _retValue = retTree ;
#line 857 "cplus.met"
                                goto quick_prog_elem_ret;
#line 857 "cplus.met"
                                
#line 857 "cplus.met"
                            }
#line 857 "cplus.met"
#line 857 "cplus.met"
                            break;
#line 857 "cplus.met"
#line 859 "cplus.met"
                        case PRAGMA_PARAMETERS_UNDER : 
#line 859 "cplus.met"
                            tokenAhead = 0 ;
#line 859 "cplus.met"
                            CommTerm();
#line 859 "cplus.met"
#line 860 "cplus.met"
#line 861 "cplus.met"
                            {
#line 861 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 861 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 861 "cplus.met"
                                {
#line 861 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 861 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_PARAMETERS_UNDER, 1);
#line 861 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 861 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 861 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 861 "cplus.met"
                                    } else {
#line 861 "cplus.met"
                                        tokenAhead = 0 ;
#line 861 "cplus.met"
                                    }
#line 861 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 861 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 861 "cplus.met"
                                }
#line 861 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 861 "cplus.met"
                                retTree=_ptRes0;
#line 861 "cplus.met"
                            }
#line 861 "cplus.met"
#line 865 "cplus.met"
                            AnalyzeParameterFunctUnd (retTree );
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
                        case PRAGMA_TAB_DIRECTIVE : 
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
                                    _ptRes1= MakeTree(TAB_DIRECTIVE, 1);
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
                            AnalyzeTabDirective (retTree );
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
                        case PRAGMA_SPACE_ARROW : 
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
                                    _ptRes1= MakeTree(SPACE_ARROW, 1);
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
                            AnalyzeSpaceArrow (retTree );
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
                        case PRAGMA_BRACE_ALIGN : 
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
                                _ptRes0= MakeTree(CONFIG, 1);
#line 886 "cplus.met"
                                {
#line 886 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 886 "cplus.met"
                                    _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
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
                            AnalyzeBraceAlign (retTree );
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
                        case PRAGMA_SIMPLIFY : 
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
                                _ptRes0= MakeTree(SIMPLIFY, 1);
#line 894 "cplus.met"
                                {
#line 894 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 894 "cplus.met"
                                    _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
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
#line 897 "cplus.met"
                            AnalyzeSimplify (retTree );
#line 897 "cplus.met"
#line 898 "cplus.met"
                            {
#line 898 "cplus.met"
                                _retValue = retTree ;
#line 898 "cplus.met"
                                goto quick_prog_elem_ret;
#line 898 "cplus.met"
                                
#line 898 "cplus.met"
                            }
#line 898 "cplus.met"
#line 898 "cplus.met"
                            break;
#line 898 "cplus.met"
#line 900 "cplus.met"
                        case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 900 "cplus.met"
                            tokenAhead = 0 ;
#line 900 "cplus.met"
                            CommTerm();
#line 900 "cplus.met"
#line 901 "cplus.met"
#line 902 "cplus.met"
                            {
#line 902 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 902 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 902 "cplus.met"
                                {
#line 902 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 902 "cplus.met"
                                    _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 902 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 902 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 902 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 902 "cplus.met"
                                    } else {
#line 902 "cplus.met"
                                        tokenAhead = 0 ;
#line 902 "cplus.met"
                                    }
#line 902 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 902 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 902 "cplus.met"
                                }
#line 902 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 902 "cplus.met"
                                retTree=_ptRes0;
#line 902 "cplus.met"
                            }
#line 902 "cplus.met"
#line 906 "cplus.met"
                            AnalyzeSingleSwitchIndent (retTree );
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
                        case PRAGMA_ASSIGN_ALIGN : 
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
                                    _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
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
                            AnalyzeAssignAlign (retTree );
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
                        case PRAGMA_DECL_ALIGN : 
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
                                    _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 919 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 919 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 919 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
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
                            AnalyzeDeclAlign (retTree );
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
                        case PRAGMA_MARGIN : 
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
                                    _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 927 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 927 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 927 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
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
                            AnalyzeMargin (retTree );
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
                        case PRAGMA_COMMENT_START : 
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
                                    _ptRes1= MakeTree(COMMENT_START, 1);
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
                        case PRAGMA_COMMENT_MIDDLE : 
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
                                    _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
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
                        case PRAGMA_COMMENT_END : 
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
                                    _ptRes1= MakeTree(COMMENT_END, 1);
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
                        case PRAGMA_COMMENT_PLUS : 
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
                                    _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 959 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 959 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 959 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
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
#line 962 "cplus.met"
                            AnalyzeComment (retTree );
#line 962 "cplus.met"
#line 963 "cplus.met"
                            {
#line 963 "cplus.met"
                                _retValue = retTree ;
#line 963 "cplus.met"
                                goto quick_prog_elem_ret;
#line 963 "cplus.met"
                                
#line 963 "cplus.met"
                            }
#line 963 "cplus.met"
#line 963 "cplus.met"
                            break;
#line 963 "cplus.met"
#line 965 "cplus.met"
                        case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 965 "cplus.met"
                            tokenAhead = 0 ;
#line 965 "cplus.met"
                            CommTerm();
#line 965 "cplus.met"
#line 966 "cplus.met"
#line 967 "cplus.met"
                            {
#line 967 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 967 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 967 "cplus.met"
                                {
#line 967 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 967 "cplus.met"
                                    _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 967 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 967 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 967 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 967 "cplus.met"
                                    } else {
#line 967 "cplus.met"
                                        tokenAhead = 0 ;
#line 967 "cplus.met"
                                    }
#line 967 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 967 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 967 "cplus.met"
                                }
#line 967 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 967 "cplus.met"
                                retTree=_ptRes0;
#line 967 "cplus.met"
                            }
#line 967 "cplus.met"
#line 971 "cplus.met"
                            AnalyzeIndentFunctionType (retTree );
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
                        case PRAGMA_FUNC_HEADER : 
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
                                    _ptRes1= MakeTree(FUNC_HEADER, 1);
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
                            AnalyzeFuncHeader (retTree );
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
                        case PRAGMA_PARAMETERS : 
#line 982 "cplus.met"
                            tokenAhead = 0 ;
#line 982 "cplus.met"
                            CommTerm();
#line 982 "cplus.met"
#line 983 "cplus.met"
#line 984 "cplus.met"
                            {
#line 984 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 984 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 984 "cplus.met"
                                {
#line 984 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 984 "cplus.met"
                                    _ptRes1= MakeTree(PARAMETERS, 1);
#line 984 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 984 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 984 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 984 "cplus.met"
                                    } else {
#line 984 "cplus.met"
                                        tokenAhead = 0 ;
#line 984 "cplus.met"
                                    }
#line 984 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 984 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 984 "cplus.met"
                                }
#line 984 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 984 "cplus.met"
                                retTree=_ptRes0;
#line 984 "cplus.met"
                            }
#line 984 "cplus.met"
#line 987 "cplus.met"
                            AnalyzeParameters (retTree );
#line 987 "cplus.met"
#line 988 "cplus.met"
                            {
#line 988 "cplus.met"
                                _retValue = retTree ;
#line 988 "cplus.met"
                                goto quick_prog_elem_ret;
#line 988 "cplus.met"
                                
#line 988 "cplus.met"
                            }
#line 988 "cplus.met"
#line 988 "cplus.met"
                            break;
#line 988 "cplus.met"
#line 990 "cplus.met"
                        default : 
#line 990 "cplus.met"
#line 990 "cplus.met"
                            {
#line 990 "cplus.met"
                                PPTREE _ptTree0=0;
#line 990 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 990 "cplus.met"
                                    MulFreeTree(2,_ptTree0,retTree);
                                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 990 "cplus.met"
                                }
#line 990 "cplus.met"
                                _retValue =_ptTree0;
#line 990 "cplus.met"
                                goto quick_prog_elem_ret;
#line 990 "cplus.met"
                            }
#line 990 "cplus.met"
                            break;
#line 990 "cplus.met"
                    }
#line 990 "cplus.met"
#line 990 "cplus.met"
                    break;
#line 990 "cplus.met"
#line 990 "cplus.met"
                default : 
#line 990 "cplus.met"
#line 990 "cplus.met"
                    break;
#line 990 "cplus.met"
            }
#line 990 "cplus.met"
#line 995 "cplus.met"
            {
#line 995 "cplus.met"
                PPTREE _ptTree0=0;
#line 995 "cplus.met"
                {
#line 995 "cplus.met"
                    PPTREE _ptRes1=0;
#line 995 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 995 "cplus.met"
                    _ptTree0=_ptRes1;
#line 995 "cplus.met"
                }
#line 995 "cplus.met"
                _retValue =_ptTree0;
#line 995 "cplus.met"
                goto quick_prog_elem_ret;
#line 995 "cplus.met"
            }
#line 995 "cplus.met"
#line 995 "cplus.met"
            break;
#line 995 "cplus.met"
#line 997 "cplus.met"
        default : 
#line 997 "cplus.met"
            tokenAhead = 0 ;
#line 997 "cplus.met"
            CommTerm();
#line 997 "cplus.met"
#line 998 "cplus.met"
#line 999 "cplus.met"
            if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 999 "cplus.met"
#line 1000 "cplus.met"
#line 1001 "cplus.met"
                (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1001 "cplus.met"
                if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1001 "cplus.met"
                    MulFreeTree(1,retTree);
                    TOKEN_EXIT(quick_prog_elem_exit,"END_LINE")
#line 1001 "cplus.met"
                } else {
#line 1001 "cplus.met"
                    tokenAhead = 0 ;
#line 1001 "cplus.met"
                }
#line 1001 "cplus.met"
#line 1002 "cplus.met"
                 goto debut;
#line 1002 "cplus.met"
#line 1002 "cplus.met"
#line 1002 "cplus.met"
            } else {
#line 1002 "cplus.met"
#line 1005 "cplus.met"
                {
#line 1005 "cplus.met"
                    _retValue = retTree ;
#line 1005 "cplus.met"
                    goto quick_prog_elem_ret;
#line 1005 "cplus.met"
                    
#line 1005 "cplus.met"
                }
#line 1005 "cplus.met"
            }
#line 1005 "cplus.met"
#line 1005 "cplus.met"
            break;
#line 1005 "cplus.met"
    }
#line 1005 "cplus.met"
#line 1005 "cplus.met"
#line 1007 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1007 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1007 "cplus.met"
return((PPTREE) 0);
#line 1007 "cplus.met"

#line 1007 "cplus.met"
quick_prog_elem_exit :
#line 1007 "cplus.met"

#line 1007 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_EXIT,(PPTREE)0);
#line 1007 "cplus.met"
    _funcLevel--;
#line 1007 "cplus.met"
    return((PPTREE) -1) ;
#line 1007 "cplus.met"

#line 1007 "cplus.met"
quick_prog_elem_ret :
#line 1007 "cplus.met"
    
#line 1007 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_RETURN,_retValue);
#line 1007 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1007 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1007 "cplus.met"
    return _retValue ;
#line 1007 "cplus.met"
}
#line 1007 "cplus.met"

#line 1007 "cplus.met"
#line 2144 "cplus.met"
PPTREE cplus::range_in_liste ( int error_free)
#line 2144 "cplus.met"
{
#line 2144 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2144 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2144 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2144 "cplus.met"
    int _Debug = TRACE_RULE("range_in_liste",TRACE_ENTER,(PPTREE)0);
#line 2144 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2144 "cplus.met"
#line 2144 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2144 "cplus.met"
#line 2146 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2146 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(retTree))) {
#line 2146 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(range_in_liste_exit,"IDENT")
#line 2146 "cplus.met"
    } else {
#line 2146 "cplus.met"
        tokenAhead = 0 ;
#line 2146 "cplus.met"
    }
#line 2146 "cplus.met"
#line 2147 "cplus.met"
    if ( IsRange(lexEl.string())){
#line 2147 "cplus.met"
#line 2148 "cplus.met"
        {
#line 2148 "cplus.met"
            _retValue = retTree ;
#line 2148 "cplus.met"
            goto range_in_liste_ret;
#line 2148 "cplus.met"
            
#line 2148 "cplus.met"
        }
#line 2148 "cplus.met"
    } else {
#line 2148 "cplus.met"
#line 2150 "cplus.met"
        
#line 2150 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 2150 "cplus.met"
        goto range_in_liste_exit;
#line 2150 "cplus.met"
    }
#line 2150 "cplus.met"
#line 2150 "cplus.met"
#line 2150 "cplus.met"

#line 2151 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2151 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2151 "cplus.met"
return((PPTREE) 0);
#line 2151 "cplus.met"

#line 2151 "cplus.met"
range_in_liste_exit :
#line 2151 "cplus.met"

#line 2151 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_EXIT,(PPTREE)0);
#line 2151 "cplus.met"
    _funcLevel--;
#line 2151 "cplus.met"
    return((PPTREE) -1) ;
#line 2151 "cplus.met"

#line 2151 "cplus.met"
range_in_liste_ret :
#line 2151 "cplus.met"
    
#line 2151 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_RETURN,_retValue);
#line 2151 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2151 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2151 "cplus.met"
    return _retValue ;
#line 2151 "cplus.met"
}
#line 2151 "cplus.met"

#line 2151 "cplus.met"
#line 2170 "cplus.met"
PPTREE cplus::range_modifier ( int error_free)
#line 2170 "cplus.met"
{
#line 2170 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2170 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2170 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2170 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier",TRACE_ENTER,(PPTREE)0);
#line 2170 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2170 "cplus.met"
#line 2171 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2171 "cplus.met"
    switch( lexEl.Value) {
#line 2171 "cplus.met"
#line 2172 "cplus.met"
        case META : 
#line 2172 "cplus.met"
        case IDENT : 
#line 2172 "cplus.met"
#line 2172 "cplus.met"
            {
#line 2172 "cplus.met"
                PPTREE _ptTree0=0;
#line 2172 "cplus.met"
                {
#line 2172 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2172 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2172 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(range_in_liste)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2172 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2172 "cplus.met"
                    }
#line 2172 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2172 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2172 "cplus.met"
                }
#line 2172 "cplus.met"
                _retValue =_ptTree0;
#line 2172 "cplus.met"
                goto range_modifier_ret;
#line 2172 "cplus.met"
            }
#line 2172 "cplus.met"
            break;
#line 2172 "cplus.met"
#line 2173 "cplus.met"
        case VOLATILE : 
#line 2173 "cplus.met"
#line 2173 "cplus.met"
            {
#line 2173 "cplus.met"
                PPTREE _ptTree0=0;
#line 2173 "cplus.met"
                {
#line 2173 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2173 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2173 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2173 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2173 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"volatile")
#line 2173 "cplus.met"
                    } else {
#line 2173 "cplus.met"
                        tokenAhead = 0 ;
#line 2173 "cplus.met"
                    }
#line 2173 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2173 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2173 "cplus.met"
                }
#line 2173 "cplus.met"
                _retValue =_ptTree0;
#line 2173 "cplus.met"
                goto range_modifier_ret;
#line 2173 "cplus.met"
            }
#line 2173 "cplus.met"
            break;
#line 2173 "cplus.met"
#line 2175 "cplus.met"
        case REGISTER : 
#line 2175 "cplus.met"
#line 2175 "cplus.met"
            {
#line 2175 "cplus.met"
                PPTREE _ptTree0=0;
#line 2175 "cplus.met"
                {
#line 2175 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2175 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2175 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2175 "cplus.met"
                    if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2175 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"register")
#line 2175 "cplus.met"
                    } else {
#line 2175 "cplus.met"
                        tokenAhead = 0 ;
#line 2175 "cplus.met"
                    }
#line 2175 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2175 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2175 "cplus.met"
                }
#line 2175 "cplus.met"
                _retValue =_ptTree0;
#line 2175 "cplus.met"
                goto range_modifier_ret;
#line 2175 "cplus.met"
            }
#line 2175 "cplus.met"
            break;
#line 2175 "cplus.met"
#line 2177 "cplus.met"
        default : 
#line 2177 "cplus.met"
#line 2177 "cplus.met"
            {
#line 2177 "cplus.met"
                PPTREE _ptTree0=0;
#line 2177 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_function)(error_free), 119, cplus))== (PPTREE) -1 ) {
#line 2177 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2177 "cplus.met"
                }
#line 2177 "cplus.met"
                _retValue =_ptTree0;
#line 2177 "cplus.met"
                goto range_modifier_ret;
#line 2177 "cplus.met"
            }
#line 2177 "cplus.met"
            break;
#line 2177 "cplus.met"
    }
#line 2177 "cplus.met"
#line 2177 "cplus.met"
#line 2178 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2178 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2178 "cplus.met"
return((PPTREE) 0);
#line 2178 "cplus.met"

#line 2178 "cplus.met"
range_modifier_exit :
#line 2178 "cplus.met"

#line 2178 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_EXIT,(PPTREE)0);
#line 2178 "cplus.met"
    _funcLevel--;
#line 2178 "cplus.met"
    return((PPTREE) -1) ;
#line 2178 "cplus.met"

#line 2178 "cplus.met"
range_modifier_ret :
#line 2178 "cplus.met"
    
#line 2178 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_RETURN,_retValue);
#line 2178 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2178 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2178 "cplus.met"
    return _retValue ;
#line 2178 "cplus.met"
}
#line 2178 "cplus.met"

#line 2178 "cplus.met"
#line 2161 "cplus.met"
PPTREE cplus::range_modifier_function ( int error_free)
#line 2161 "cplus.met"
{
#line 2161 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2161 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2161 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2161 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_function",TRACE_ENTER,(PPTREE)0);
#line 2161 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2161 "cplus.met"
#line 2162 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2162 "cplus.met"
    switch( lexEl.Value) {
#line 2162 "cplus.met"
#line 2163 "cplus.met"
        case INLINE : 
#line 2163 "cplus.met"
#line 2163 "cplus.met"
            {
#line 2163 "cplus.met"
                PPTREE _ptTree0=0;
#line 2163 "cplus.met"
                {
#line 2163 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2163 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2163 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2163 "cplus.met"
                    if (  !SEE_TOKEN( INLINE,"inline") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2163 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"inline")
#line 2163 "cplus.met"
                    } else {
#line 2163 "cplus.met"
                        tokenAhead = 0 ;
#line 2163 "cplus.met"
                    }
#line 2163 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2163 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2163 "cplus.met"
                }
#line 2163 "cplus.met"
                _retValue =_ptTree0;
#line 2163 "cplus.met"
                goto range_modifier_function_ret;
#line 2163 "cplus.met"
            }
#line 2163 "cplus.met"
            break;
#line 2163 "cplus.met"
#line 2164 "cplus.met"
        case VIRTUAL : 
#line 2164 "cplus.met"
#line 2164 "cplus.met"
            {
#line 2164 "cplus.met"
                PPTREE _ptTree0=0;
#line 2164 "cplus.met"
                {
#line 2164 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2164 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2164 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2164 "cplus.met"
                    if (  !SEE_TOKEN( VIRTUAL,"virtual") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2164 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"virtual")
#line 2164 "cplus.met"
                    } else {
#line 2164 "cplus.met"
                        tokenAhead = 0 ;
#line 2164 "cplus.met"
                    }
#line 2164 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2164 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2164 "cplus.met"
                }
#line 2164 "cplus.met"
                _retValue =_ptTree0;
#line 2164 "cplus.met"
                goto range_modifier_function_ret;
#line 2164 "cplus.met"
            }
#line 2164 "cplus.met"
            break;
#line 2164 "cplus.met"
#line 2165 "cplus.met"
        case FRIEND : 
#line 2165 "cplus.met"
#line 2165 "cplus.met"
            {
#line 2165 "cplus.met"
                PPTREE _ptTree0=0;
#line 2165 "cplus.met"
                {
#line 2165 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2165 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2165 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2165 "cplus.met"
                    if (  !SEE_TOKEN( FRIEND,"friend") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2165 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"friend")
#line 2165 "cplus.met"
                    } else {
#line 2165 "cplus.met"
                        tokenAhead = 0 ;
#line 2165 "cplus.met"
                    }
#line 2165 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2165 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2165 "cplus.met"
                }
#line 2165 "cplus.met"
                _retValue =_ptTree0;
#line 2165 "cplus.met"
                goto range_modifier_function_ret;
#line 2165 "cplus.met"
            }
#line 2165 "cplus.met"
            break;
#line 2165 "cplus.met"
#line 2166 "cplus.met"
        case CONST : 
#line 2166 "cplus.met"
#line 2166 "cplus.met"
            {
#line 2166 "cplus.met"
                PPTREE _ptTree0=0;
#line 2166 "cplus.met"
                {
#line 2166 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2166 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2166 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2166 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2166 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"const")
#line 2166 "cplus.met"
                    } else {
#line 2166 "cplus.met"
                        tokenAhead = 0 ;
#line 2166 "cplus.met"
                    }
#line 2166 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2166 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2166 "cplus.met"
                }
#line 2166 "cplus.met"
                _retValue =_ptTree0;
#line 2166 "cplus.met"
                goto range_modifier_function_ret;
#line 2166 "cplus.met"
            }
#line 2166 "cplus.met"
            break;
#line 2166 "cplus.met"
        default :
#line 2166 "cplus.met"
            CASE_EXIT(range_modifier_function_exit,"either inline or virtual or friend or const")
#line 2166 "cplus.met"
            break;
#line 2166 "cplus.met"
    }
#line 2166 "cplus.met"
#line 2166 "cplus.met"
#line 2167 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2167 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2167 "cplus.met"
return((PPTREE) 0);
#line 2167 "cplus.met"

#line 2167 "cplus.met"
range_modifier_function_exit :
#line 2167 "cplus.met"

#line 2167 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_EXIT,(PPTREE)0);
#line 2167 "cplus.met"
    _funcLevel--;
#line 2167 "cplus.met"
    return((PPTREE) -1) ;
#line 2167 "cplus.met"

#line 2167 "cplus.met"
range_modifier_function_ret :
#line 2167 "cplus.met"
    
#line 2167 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_RETURN,_retValue);
#line 2167 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2167 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2167 "cplus.met"
    return _retValue ;
#line 2167 "cplus.met"
}
#line 2167 "cplus.met"

#line 2167 "cplus.met"
#line 2042 "cplus.met"
PPTREE cplus::range_modifier_ident ( int error_free)
#line 2042 "cplus.met"
{
#line 2042 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2042 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2042 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2042 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_ident",TRACE_ENTER,(PPTREE)0);
#line 2042 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2042 "cplus.met"
#line 2042 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2042 "cplus.met"
#line 2044 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(range_modifier), 118, cplus)){
#line 2044 "cplus.met"
#line 2045 "cplus.met"
        {
#line 2045 "cplus.met"
            PPTREE _ptTree0=0;
#line 2045 "cplus.met"
            {
#line 2045 "cplus.met"
                PPTREE _ptTree1=0;
#line 2045 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 2045 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                    PROG_EXIT(range_modifier_ident_exit,"range_modifier_ident")
#line 2045 "cplus.met"
                }
#line 2045 "cplus.met"
                _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2045 "cplus.met"
            }
#line 2045 "cplus.met"
            _retValue =_ptTree0;
#line 2045 "cplus.met"
            goto range_modifier_ident_ret;
#line 2045 "cplus.met"
        }
#line 2045 "cplus.met"
    } else {
#line 2045 "cplus.met"
#line 2047 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 2047 "cplus.met"
#line 2048 "cplus.met"
            {
#line 2048 "cplus.met"
                PPTREE _ptTree0=0;
#line 2048 "cplus.met"
                {
#line 2048 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2048 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 2048 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2048 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2048 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        TOKEN_EXIT(range_modifier_ident_exit,"IDENT")
#line 2048 "cplus.met"
                    } else {
#line 2048 "cplus.met"
                        tokenAhead = 0 ;
#line 2048 "cplus.met"
                    }
#line 2048 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2048 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2048 "cplus.met"
                }
#line 2048 "cplus.met"
                _retValue =_ptTree0;
#line 2048 "cplus.met"
                goto range_modifier_ident_ret;
#line 2048 "cplus.met"
            }
#line 2048 "cplus.met"
        }
#line 2048 "cplus.met"
    }
#line 2048 "cplus.met"
#line 2048 "cplus.met"
#line 2048 "cplus.met"

#line 2049 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2049 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2049 "cplus.met"
return((PPTREE) 0);
#line 2049 "cplus.met"

#line 2049 "cplus.met"
range_modifier_ident_exit :
#line 2049 "cplus.met"

#line 2049 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_EXIT,(PPTREE)0);
#line 2049 "cplus.met"
    _funcLevel--;
#line 2049 "cplus.met"
    return((PPTREE) -1) ;
#line 2049 "cplus.met"

#line 2049 "cplus.met"
range_modifier_ident_ret :
#line 2049 "cplus.met"
    
#line 2049 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_RETURN,_retValue);
#line 2049 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2049 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2049 "cplus.met"
    return _retValue ;
#line 2049 "cplus.met"
}
#line 2049 "cplus.met"

#line 2049 "cplus.met"
#line 802 "cplus.met"
PPTREE cplus::range_pragma ( int error_free)
#line 802 "cplus.met"
{
#line 802 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 802 "cplus.met"
    int _value,_nbPre = 0 ;
#line 802 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 802 "cplus.met"
    int _Debug = TRACE_RULE("range_pragma",TRACE_ENTER,(PPTREE)0);
#line 802 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 802 "cplus.met"
#line 803 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 803 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_RANGE,"PRAGMA_RANGE") || !(CommTerm(),1)) {
#line 803 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"PRAGMA_RANGE")
#line 803 "cplus.met"
    } else {
#line 803 "cplus.met"
        tokenAhead = 0 ;
#line 803 "cplus.met"
    }
#line 803 "cplus.met"
#line 804 "cplus.met"
    (tokenAhead == 9|| (LexPragmaSmall(),TRACE_LEX(1)));
#line 804 "cplus.met"
    if ( ! TERM_OR_META(SMALL_PRAGMA_CONTENT,"SMALL_PRAGMA_CONTENT") || !(CommTerm(),1)) {
#line 804 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"SMALL_PRAGMA_CONTENT")
#line 804 "cplus.met"
    } else {
#line 804 "cplus.met"
        tokenAhead = 0 ;
#line 804 "cplus.met"
    }
#line 804 "cplus.met"
#line 805 "cplus.met"
     AnalyseRange(lexEl.string());
#line 805 "cplus.met"
#line 805 "cplus.met"
#line 805 "cplus.met"

#line 806 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 806 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 806 "cplus.met"
return((PPTREE) 0);
#line 806 "cplus.met"

#line 806 "cplus.met"
range_pragma_exit :
#line 806 "cplus.met"

#line 806 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_EXIT,(PPTREE)0);
#line 806 "cplus.met"
    _funcLevel--;
#line 806 "cplus.met"
    return((PPTREE) -1) ;
#line 806 "cplus.met"

#line 806 "cplus.met"
range_pragma_ret :
#line 806 "cplus.met"
    
#line 806 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_RETURN,_retValue);
#line 806 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 806 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 806 "cplus.met"
    return _retValue ;
#line 806 "cplus.met"
}
#line 806 "cplus.met"

#line 806 "cplus.met"
#line 2685 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2685 "cplus.met"
{
#line 2685 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2685 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2685 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2685 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2685 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2685 "cplus.met"
#line 2685 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2685 "cplus.met"
#line 2687 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2687 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2687 "cplus.met"
    }
#line 2687 "cplus.met"
#line 2688 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 2688 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 2688 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 2688 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 2688 "cplus.met"
#line 2689 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2689 "cplus.met"
        switch( lexEl.Value) {
#line 2689 "cplus.met"
#line 2690 "cplus.met"
            case INFEEGAL : 
#line 2690 "cplus.met"
                tokenAhead = 0 ;
#line 2690 "cplus.met"
                CommTerm();
#line 2690 "cplus.met"
#line 2690 "cplus.met"
                {
#line 2690 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2690 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 2690 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2690 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2690 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2690 "cplus.met"
                    }
#line 2690 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2690 "cplus.met"
                    expTree=_ptRes0;
#line 2690 "cplus.met"
                }
#line 2690 "cplus.met"
                break;
#line 2690 "cplus.met"
#line 2692 "cplus.met"
            case SUPEEGAL : 
#line 2692 "cplus.met"
                tokenAhead = 0 ;
#line 2692 "cplus.met"
                CommTerm();
#line 2692 "cplus.met"
#line 2692 "cplus.met"
                {
#line 2692 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2692 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 2692 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2692 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2692 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2692 "cplus.met"
                    }
#line 2692 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2692 "cplus.met"
                    expTree=_ptRes0;
#line 2692 "cplus.met"
                }
#line 2692 "cplus.met"
                break;
#line 2692 "cplus.met"
#line 2694 "cplus.met"
            case SUPE : 
#line 2694 "cplus.met"
                tokenAhead = 0 ;
#line 2694 "cplus.met"
                CommTerm();
#line 2694 "cplus.met"
#line 2694 "cplus.met"
                {
#line 2694 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2694 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 2694 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2694 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2694 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2694 "cplus.met"
                    }
#line 2694 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2694 "cplus.met"
                    expTree=_ptRes0;
#line 2694 "cplus.met"
                }
#line 2694 "cplus.met"
                break;
#line 2694 "cplus.met"
#line 2695 "cplus.met"
            case INFE : 
#line 2695 "cplus.met"
                tokenAhead = 0 ;
#line 2695 "cplus.met"
                CommTerm();
#line 2695 "cplus.met"
#line 2695 "cplus.met"
                {
#line 2695 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2695 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 2695 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2695 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2695 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2695 "cplus.met"
                    }
#line 2695 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2695 "cplus.met"
                    expTree=_ptRes0;
#line 2695 "cplus.met"
                }
#line 2695 "cplus.met"
                break;
#line 2695 "cplus.met"
            default :
#line 2695 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 2695 "cplus.met"
                break;
#line 2695 "cplus.met"
        }
#line 2695 "cplus.met"
    } 
#line 2695 "cplus.met"
#line 2697 "cplus.met"
    {
#line 2697 "cplus.met"
        _retValue = expTree ;
#line 2697 "cplus.met"
        goto relational_expression_ret;
#line 2697 "cplus.met"
        
#line 2697 "cplus.met"
    }
#line 2697 "cplus.met"
#line 2697 "cplus.met"
#line 2697 "cplus.met"

#line 2698 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2698 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2698 "cplus.met"
return((PPTREE) 0);
#line 2698 "cplus.met"

#line 2698 "cplus.met"
relational_expression_exit :
#line 2698 "cplus.met"

#line 2698 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 2698 "cplus.met"
    _funcLevel--;
#line 2698 "cplus.met"
    return((PPTREE) -1) ;
#line 2698 "cplus.met"

#line 2698 "cplus.met"
relational_expression_ret :
#line 2698 "cplus.met"
    
#line 2698 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 2698 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2698 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2698 "cplus.met"
    return _retValue ;
#line 2698 "cplus.met"
}
#line 2698 "cplus.met"

#line 2698 "cplus.met"
#line 1522 "cplus.met"
PPTREE cplus::sc_specifier ( int error_free)
#line 1522 "cplus.met"
{
#line 1522 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1522 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1522 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1522 "cplus.met"
    int _Debug = TRACE_RULE("sc_specifier",TRACE_ENTER,(PPTREE)0);
#line 1522 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1522 "cplus.met"
#line 1523 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1523 "cplus.met"
    switch( lexEl.Value) {
#line 1523 "cplus.met"
#line 1524 "cplus.met"
        case AUTO : 
#line 1524 "cplus.met"
#line 1524 "cplus.met"
            {
#line 1524 "cplus.met"
                PPTREE _ptTree0=0;
#line 1524 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1524 "cplus.met"
                if (  !SEE_TOKEN( AUTO,"auto") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1524 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"auto")
#line 1524 "cplus.met"
                } else {
#line 1524 "cplus.met"
                    tokenAhead = 0 ;
#line 1524 "cplus.met"
                }
#line 1524 "cplus.met"
                _retValue =_ptTree0;
#line 1524 "cplus.met"
                goto sc_specifier_ret;
#line 1524 "cplus.met"
            }
#line 1524 "cplus.met"
            break;
#line 1524 "cplus.met"
#line 1525 "cplus.met"
        case STATIC : 
#line 1525 "cplus.met"
#line 1525 "cplus.met"
            {
#line 1525 "cplus.met"
                PPTREE _ptTree0=0;
#line 1525 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1525 "cplus.met"
                if (  !SEE_TOKEN( STATIC,"static") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1525 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"static")
#line 1525 "cplus.met"
                } else {
#line 1525 "cplus.met"
                    tokenAhead = 0 ;
#line 1525 "cplus.met"
                }
#line 1525 "cplus.met"
                _retValue =_ptTree0;
#line 1525 "cplus.met"
                goto sc_specifier_ret;
#line 1525 "cplus.met"
            }
#line 1525 "cplus.met"
            break;
#line 1525 "cplus.met"
#line 1526 "cplus.met"
        case EXTERN : 
#line 1526 "cplus.met"
#line 1526 "cplus.met"
            {
#line 1526 "cplus.met"
                PPTREE _ptTree0=0;
#line 1526 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1526 "cplus.met"
                if (  !SEE_TOKEN( EXTERN,"extern") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1526 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"extern")
#line 1526 "cplus.met"
                } else {
#line 1526 "cplus.met"
                    tokenAhead = 0 ;
#line 1526 "cplus.met"
                }
#line 1526 "cplus.met"
                _retValue =_ptTree0;
#line 1526 "cplus.met"
                goto sc_specifier_ret;
#line 1526 "cplus.met"
            }
#line 1526 "cplus.met"
            break;
#line 1526 "cplus.met"
#line 1527 "cplus.met"
        case REGISTER : 
#line 1527 "cplus.met"
#line 1527 "cplus.met"
            {
#line 1527 "cplus.met"
                PPTREE _ptTree0=0;
#line 1527 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1527 "cplus.met"
                if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1527 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"register")
#line 1527 "cplus.met"
                } else {
#line 1527 "cplus.met"
                    tokenAhead = 0 ;
#line 1527 "cplus.met"
                }
#line 1527 "cplus.met"
                _retValue =_ptTree0;
#line 1527 "cplus.met"
                goto sc_specifier_ret;
#line 1527 "cplus.met"
            }
#line 1527 "cplus.met"
            break;
#line 1527 "cplus.met"
#line 1527 "cplus.met"
        default : 
#line 1527 "cplus.met"
#line 1527 "cplus.met"
            break;
#line 1527 "cplus.met"
    }
#line 1527 "cplus.met"
#line 1527 "cplus.met"
#line 1529 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1529 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1529 "cplus.met"
return((PPTREE) 0);
#line 1529 "cplus.met"

#line 1529 "cplus.met"
sc_specifier_exit :
#line 1529 "cplus.met"

#line 1529 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_EXIT,(PPTREE)0);
#line 1529 "cplus.met"
    _funcLevel--;
#line 1529 "cplus.met"
    return((PPTREE) -1) ;
#line 1529 "cplus.met"

#line 1529 "cplus.met"
sc_specifier_ret :
#line 1529 "cplus.met"
    
#line 1529 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_RETURN,_retValue);
#line 1529 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1529 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1529 "cplus.met"
    return _retValue ;
#line 1529 "cplus.met"
}
#line 1529 "cplus.met"

#line 1529 "cplus.met"
#line 2700 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 2700 "cplus.met"
{
#line 2700 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2700 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2700 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2700 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 2700 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2700 "cplus.met"
#line 2700 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2700 "cplus.met"
#line 2702 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2702 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2702 "cplus.met"
    }
#line 2702 "cplus.met"
#line 2703 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 2703 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 2703 "cplus.met"
#line 2704 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2704 "cplus.met"
        switch( lexEl.Value) {
#line 2704 "cplus.met"
#line 2705 "cplus.met"
            case INFEINFE : 
#line 2705 "cplus.met"
                tokenAhead = 0 ;
#line 2705 "cplus.met"
                CommTerm();
#line 2705 "cplus.met"
#line 2705 "cplus.met"
                {
#line 2705 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2705 "cplus.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 2705 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2705 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2705 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2705 "cplus.met"
                    }
#line 2705 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2705 "cplus.met"
                    expTree=_ptRes0;
#line 2705 "cplus.met"
                }
#line 2705 "cplus.met"
                break;
#line 2705 "cplus.met"
#line 2707 "cplus.met"
            case SUPESUPE : 
#line 2707 "cplus.met"
                tokenAhead = 0 ;
#line 2707 "cplus.met"
                CommTerm();
#line 2707 "cplus.met"
#line 2707 "cplus.met"
                {
#line 2707 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2707 "cplus.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 2707 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2707 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2707 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2707 "cplus.met"
                    }
#line 2707 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2707 "cplus.met"
                    expTree=_ptRes0;
#line 2707 "cplus.met"
                }
#line 2707 "cplus.met"
                break;
#line 2707 "cplus.met"
            default :
#line 2707 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 2707 "cplus.met"
                break;
#line 2707 "cplus.met"
        }
#line 2707 "cplus.met"
    } 
#line 2707 "cplus.met"
#line 2710 "cplus.met"
    {
#line 2710 "cplus.met"
        _retValue = expTree ;
#line 2710 "cplus.met"
        goto shift_expression_ret;
#line 2710 "cplus.met"
        
#line 2710 "cplus.met"
    }
#line 2710 "cplus.met"
#line 2710 "cplus.met"
#line 2710 "cplus.met"

#line 2711 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2711 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2711 "cplus.met"
return((PPTREE) 0);
#line 2711 "cplus.met"

#line 2711 "cplus.met"
shift_expression_exit :
#line 2711 "cplus.met"

#line 2711 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 2711 "cplus.met"
    _funcLevel--;
#line 2711 "cplus.met"
    return((PPTREE) -1) ;
#line 2711 "cplus.met"

#line 2711 "cplus.met"
shift_expression_ret :
#line 2711 "cplus.met"
    
#line 2711 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 2711 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2711 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2711 "cplus.met"
    return _retValue ;
#line 2711 "cplus.met"
}
#line 2711 "cplus.met"

#line 2711 "cplus.met"
#line 2080 "cplus.met"
PPTREE cplus::simple_type ( int error_free)
#line 2080 "cplus.met"
{
#line 2080 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2080 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2080 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2080 "cplus.met"
    int _Debug = TRACE_RULE("simple_type",TRACE_ENTER,(PPTREE)0);
#line 2080 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2080 "cplus.met"
#line 2080 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2080 "cplus.met"
#line 2082 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2082 "cplus.met"
    switch( lexEl.Value) {
#line 2082 "cplus.met"
#line 2083 "cplus.met"
        case TYPENAME : 
#line 2083 "cplus.met"
            tokenAhead = 0 ;
#line 2083 "cplus.met"
            CommTerm();
#line 2083 "cplus.met"
#line 2083 "cplus.met"
            {
#line 2083 "cplus.met"
                PPTREE _ptTree0=0;
#line 2083 "cplus.met"
                {
#line 2083 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2083 "cplus.met"
                    _ptRes1= MakeTree(TYPENAME, 1);
#line 2083 "cplus.met"
                    {
#line 2083 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2083 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2083 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2083 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2083 "cplus.met"
                        }
#line 2083 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2083 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2083 "cplus.met"
                    }
#line 2083 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2083 "cplus.met"
                    _ptTree0=_ptRes1;
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
#line 2085 "cplus.met"
        case AUTO : 
#line 2085 "cplus.met"
            tokenAhead = 0 ;
#line 2085 "cplus.met"
            CommTerm();
#line 2085 "cplus.met"
#line 2085 "cplus.met"
            {
#line 2085 "cplus.met"
                PPTREE _ptTree0=0;
#line 2085 "cplus.met"
                {
#line 2085 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2085 "cplus.met"
                    _ptRes1= MakeTree(AUTO, 0);
#line 2085 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2085 "cplus.met"
                }
#line 2085 "cplus.met"
                _retValue =_ptTree0;
#line 2085 "cplus.met"
                goto simple_type_ret;
#line 2085 "cplus.met"
            }
#line 2085 "cplus.met"
            break;
#line 2085 "cplus.met"
#line 2086 "cplus.met"
        case DOUBLE : 
#line 2086 "cplus.met"
            tokenAhead = 0 ;
#line 2086 "cplus.met"
            CommTerm();
#line 2086 "cplus.met"
#line 2086 "cplus.met"
            {
#line 2086 "cplus.met"
                PPTREE _ptTree0=0;
#line 2086 "cplus.met"
                {
#line 2086 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2086 "cplus.met"
                    _ptRes1= MakeTree(TDOUBLE, 0);
#line 2086 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2086 "cplus.met"
                }
#line 2086 "cplus.met"
                _retValue =_ptTree0;
#line 2086 "cplus.met"
                goto simple_type_ret;
#line 2086 "cplus.met"
            }
#line 2086 "cplus.met"
            break;
#line 2086 "cplus.met"
#line 2087 "cplus.met"
        case INT : 
#line 2087 "cplus.met"
            tokenAhead = 0 ;
#line 2087 "cplus.met"
            CommTerm();
#line 2087 "cplus.met"
#line 2087 "cplus.met"
            {
#line 2087 "cplus.met"
                PPTREE _ptTree0=0;
#line 2087 "cplus.met"
                {
#line 2087 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2087 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2087 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2087 "cplus.met"
                }
#line 2087 "cplus.met"
                _retValue =_ptTree0;
#line 2087 "cplus.met"
                goto simple_type_ret;
#line 2087 "cplus.met"
            }
#line 2087 "cplus.met"
            break;
#line 2087 "cplus.met"
#line 2088 "cplus.met"
        case CHAR : 
#line 2088 "cplus.met"
            tokenAhead = 0 ;
#line 2088 "cplus.met"
            CommTerm();
#line 2088 "cplus.met"
#line 2088 "cplus.met"
            {
#line 2088 "cplus.met"
                PPTREE _ptTree0=0;
#line 2088 "cplus.met"
                {
#line 2088 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2088 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2088 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2088 "cplus.met"
                }
#line 2088 "cplus.met"
                _retValue =_ptTree0;
#line 2088 "cplus.met"
                goto simple_type_ret;
#line 2088 "cplus.met"
            }
#line 2088 "cplus.met"
            break;
#line 2088 "cplus.met"
#line 2089 "cplus.met"
        case FLOAT : 
#line 2089 "cplus.met"
            tokenAhead = 0 ;
#line 2089 "cplus.met"
            CommTerm();
#line 2089 "cplus.met"
#line 2089 "cplus.met"
            {
#line 2089 "cplus.met"
                PPTREE _ptTree0=0;
#line 2089 "cplus.met"
                {
#line 2089 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2089 "cplus.met"
                    _ptRes1= MakeTree(TFLOAT, 0);
#line 2089 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2089 "cplus.met"
                }
#line 2089 "cplus.met"
                _retValue =_ptTree0;
#line 2089 "cplus.met"
                goto simple_type_ret;
#line 2089 "cplus.met"
            }
#line 2089 "cplus.met"
            break;
#line 2089 "cplus.met"
#line 2090 "cplus.met"
        case VOID : 
#line 2090 "cplus.met"
            tokenAhead = 0 ;
#line 2090 "cplus.met"
            CommTerm();
#line 2090 "cplus.met"
#line 2090 "cplus.met"
            {
#line 2090 "cplus.met"
                PPTREE _ptTree0=0;
#line 2090 "cplus.met"
                {
#line 2090 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2090 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
#line 2090 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2090 "cplus.met"
                }
#line 2090 "cplus.met"
                _retValue =_ptTree0;
#line 2090 "cplus.met"
                goto simple_type_ret;
#line 2090 "cplus.met"
            }
#line 2090 "cplus.met"
            break;
#line 2090 "cplus.met"
#line 2091 "cplus.met"
        case DPOIDPOI : 
#line 2091 "cplus.met"
#line 2091 "cplus.met"
            {
#line 2091 "cplus.met"
                PPTREE _ptTree0=0;
#line 2091 "cplus.met"
                {
#line 2091 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2091 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2091 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2091 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2091 "cplus.met"
                    }
#line 2091 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2091 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2091 "cplus.met"
                }
#line 2091 "cplus.met"
                _retValue =_ptTree0;
#line 2091 "cplus.met"
                goto simple_type_ret;
#line 2091 "cplus.met"
            }
#line 2091 "cplus.met"
            break;
#line 2091 "cplus.met"
#line 2092 "cplus.met"
        case META : 
#line 2092 "cplus.met"
        case IDENT : 
#line 2092 "cplus.met"
#line 2092 "cplus.met"
            {
#line 2092 "cplus.met"
                PPTREE _ptTree0=0;
#line 2092 "cplus.met"
                {
#line 2092 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2092 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2092 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2092 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2092 "cplus.met"
                    }
#line 2092 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2092 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2092 "cplus.met"
                }
#line 2092 "cplus.met"
                _retValue =_ptTree0;
#line 2092 "cplus.met"
                goto simple_type_ret;
#line 2092 "cplus.met"
            }
#line 2092 "cplus.met"
            break;
#line 2092 "cplus.met"
#line 2093 "cplus.met"
        case LONG : 
#line 2093 "cplus.met"
            tokenAhead = 0 ;
#line 2093 "cplus.met"
            CommTerm();
#line 2093 "cplus.met"
#line 2094 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2094 "cplus.met"
            switch( lexEl.Value) {
#line 2094 "cplus.met"
#line 2095 "cplus.met"
                case FLOAT : 
#line 2095 "cplus.met"
                    tokenAhead = 0 ;
#line 2095 "cplus.met"
                    CommTerm();
#line 2095 "cplus.met"
#line 2095 "cplus.met"
                    {
#line 2095 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2095 "cplus.met"
                        {
#line 2095 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2095 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2095 "cplus.met"
                            {
#line 2095 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2095 "cplus.met"
                                _ptRes2= MakeTree(TFLOAT, 0);
#line 2095 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2095 "cplus.met"
                            }
#line 2095 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2095 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2095 "cplus.met"
                        }
#line 2095 "cplus.met"
                        _retValue =_ptTree0;
#line 2095 "cplus.met"
                        goto simple_type_ret;
#line 2095 "cplus.met"
                    }
#line 2095 "cplus.met"
                    break;
#line 2095 "cplus.met"
#line 2096 "cplus.met"
                case DOUBLE : 
#line 2096 "cplus.met"
                    tokenAhead = 0 ;
#line 2096 "cplus.met"
                    CommTerm();
#line 2096 "cplus.met"
#line 2096 "cplus.met"
                    {
#line 2096 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2096 "cplus.met"
                        {
#line 2096 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2096 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2096 "cplus.met"
                            {
#line 2096 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2096 "cplus.met"
                                _ptRes2= MakeTree(TDOUBLE, 0);
#line 2096 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2096 "cplus.met"
                            }
#line 2096 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2096 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2096 "cplus.met"
                        }
#line 2096 "cplus.met"
                        _retValue =_ptTree0;
#line 2096 "cplus.met"
                        goto simple_type_ret;
#line 2096 "cplus.met"
                    }
#line 2096 "cplus.met"
                    break;
#line 2096 "cplus.met"
#line 2097 "cplus.met"
                case INT : 
#line 2097 "cplus.met"
                    tokenAhead = 0 ;
#line 2097 "cplus.met"
                    CommTerm();
#line 2097 "cplus.met"
#line 2097 "cplus.met"
                    {
#line 2097 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2097 "cplus.met"
                        {
#line 2097 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2097 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2097 "cplus.met"
                            {
#line 2097 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2097 "cplus.met"
                                _ptRes2= MakeTree(TINT, 0);
#line 2097 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2097 "cplus.met"
                            }
#line 2097 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2097 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2097 "cplus.met"
                        }
#line 2097 "cplus.met"
                        _retValue =_ptTree0;
#line 2097 "cplus.met"
                        goto simple_type_ret;
#line 2097 "cplus.met"
                    }
#line 2097 "cplus.met"
                    break;
#line 2097 "cplus.met"
#line 2098 "cplus.met"
                case LONG : 
#line 2098 "cplus.met"
                    tokenAhead = 0 ;
#line 2098 "cplus.met"
                    CommTerm();
#line 2098 "cplus.met"
#line 2099 "cplus.met"
#line 2100 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2100 "cplus.met"
                    switch( lexEl.Value) {
#line 2100 "cplus.met"
#line 2101 "cplus.met"
                        case FLOAT : 
#line 2101 "cplus.met"
                            tokenAhead = 0 ;
#line 2101 "cplus.met"
                            CommTerm();
#line 2101 "cplus.met"
#line 2101 "cplus.met"
                            {
#line 2101 "cplus.met"
                                PPTREE _ptTree0=0;
#line 2101 "cplus.met"
                                {
#line 2101 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2101 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2101 "cplus.met"
                                    {
#line 2101 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2101 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2101 "cplus.met"
                                        {
#line 2101 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2101 "cplus.met"
                                            _ptRes3= MakeTree(TFLOAT, 0);
#line 2101 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2101 "cplus.met"
                                        }
#line 2101 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2101 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2101 "cplus.met"
                                    }
#line 2101 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2101 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 2101 "cplus.met"
                                }
#line 2101 "cplus.met"
                                _retValue =_ptTree0;
#line 2101 "cplus.met"
                                goto simple_type_ret;
#line 2101 "cplus.met"
                            }
#line 2101 "cplus.met"
                            break;
#line 2101 "cplus.met"
#line 2103 "cplus.met"
                        case DOUBLE : 
#line 2103 "cplus.met"
                            tokenAhead = 0 ;
#line 2103 "cplus.met"
                            CommTerm();
#line 2103 "cplus.met"
#line 2103 "cplus.met"
                            {
#line 2103 "cplus.met"
                                PPTREE _ptTree0=0;
#line 2103 "cplus.met"
                                {
#line 2103 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2103 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2103 "cplus.met"
                                    {
#line 2103 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2103 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2103 "cplus.met"
                                        {
#line 2103 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2103 "cplus.met"
                                            _ptRes3= MakeTree(TDOUBLE, 0);
#line 2103 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2103 "cplus.met"
                                        }
#line 2103 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2103 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2103 "cplus.met"
                                    }
#line 2103 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2103 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 2103 "cplus.met"
                                }
#line 2103 "cplus.met"
                                _retValue =_ptTree0;
#line 2103 "cplus.met"
                                goto simple_type_ret;
#line 2103 "cplus.met"
                            }
#line 2103 "cplus.met"
                            break;
#line 2103 "cplus.met"
#line 2105 "cplus.met"
                        case INT : 
#line 2105 "cplus.met"
                            tokenAhead = 0 ;
#line 2105 "cplus.met"
                            CommTerm();
#line 2105 "cplus.met"
#line 2105 "cplus.met"
                            {
#line 2105 "cplus.met"
                                PPTREE _ptTree0=0;
#line 2105 "cplus.met"
                                {
#line 2105 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2105 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2105 "cplus.met"
                                    {
#line 2105 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2105 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2105 "cplus.met"
                                        {
#line 2105 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2105 "cplus.met"
                                            _ptRes3= MakeTree(TINT, 0);
#line 2105 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2105 "cplus.met"
                                        }
#line 2105 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2105 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2105 "cplus.met"
                                    }
#line 2105 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2105 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 2105 "cplus.met"
                                }
#line 2105 "cplus.met"
                                _retValue =_ptTree0;
#line 2105 "cplus.met"
                                goto simple_type_ret;
#line 2105 "cplus.met"
                            }
#line 2105 "cplus.met"
                            break;
#line 2105 "cplus.met"
#line 2107 "cplus.met"
                        case LONG : 
#line 2107 "cplus.met"
                            tokenAhead = 0 ;
#line 2107 "cplus.met"
                            CommTerm();
#line 2107 "cplus.met"
#line 2107 "cplus.met"
                            break;
#line 2107 "cplus.met"
#line 2108 "cplus.met"
                        default : 
#line 2108 "cplus.met"
#line 2108 "cplus.met"
                            {
#line 2108 "cplus.met"
                                PPTREE _ptTree0=0;
#line 2108 "cplus.met"
                                {
#line 2108 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2108 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2108 "cplus.met"
                                    {
#line 2108 "cplus.met"
                                        PPTREE _ptRes2=0;
#line 2108 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2108 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2108 "cplus.met"
                                    }
#line 2108 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2108 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 2108 "cplus.met"
                                }
#line 2108 "cplus.met"
                                _retValue =_ptTree0;
#line 2108 "cplus.met"
                                goto simple_type_ret;
#line 2108 "cplus.met"
                            }
#line 2108 "cplus.met"
                            break;
#line 2108 "cplus.met"
                    }
#line 2108 "cplus.met"
#line 2108 "cplus.met"
                    break;
#line 2108 "cplus.met"
#line 2111 "cplus.met"
                default : 
#line 2111 "cplus.met"
#line 2111 "cplus.met"
                    {
#line 2111 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2111 "cplus.met"
                        {
#line 2111 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2111 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2111 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2111 "cplus.met"
                        }
#line 2111 "cplus.met"
                        _retValue =_ptTree0;
#line 2111 "cplus.met"
                        goto simple_type_ret;
#line 2111 "cplus.met"
                    }
#line 2111 "cplus.met"
                    break;
#line 2111 "cplus.met"
            }
#line 2111 "cplus.met"
            break;
#line 2111 "cplus.met"
#line 2113 "cplus.met"
        case SIGNED : 
#line 2113 "cplus.met"
            tokenAhead = 0 ;
#line 2113 "cplus.met"
            CommTerm();
#line 2113 "cplus.met"
#line 2114 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(long_short_int_char), 88, cplus)){
#line 2114 "cplus.met"
#line 2115 "cplus.met"
                {
#line 2115 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2115 "cplus.met"
                    {
#line 2115 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2115 "cplus.met"
                        _ptRes1= MakeTree(TSIGNED, 1);
#line 2115 "cplus.met"
                        ReplaceTree(_ptRes1, 1, valTree );
#line 2115 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2115 "cplus.met"
                    }
#line 2115 "cplus.met"
                    _retValue =_ptTree0;
#line 2115 "cplus.met"
                    goto simple_type_ret;
#line 2115 "cplus.met"
                }
#line 2115 "cplus.met"
            } else {
#line 2115 "cplus.met"
#line 2117 "cplus.met"
                {
#line 2117 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2117 "cplus.met"
                    {
#line 2117 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2117 "cplus.met"
                        _ptRes1= MakeTree(TSIGNED, 1);
#line 2117 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2117 "cplus.met"
                    }
#line 2117 "cplus.met"
                    _retValue =_ptTree0;
#line 2117 "cplus.met"
                    goto simple_type_ret;
#line 2117 "cplus.met"
                }
#line 2117 "cplus.met"
            }
#line 2117 "cplus.met"
            break;
#line 2117 "cplus.met"
#line 2118 "cplus.met"
        case UNSIGNED : 
#line 2118 "cplus.met"
            tokenAhead = 0 ;
#line 2118 "cplus.met"
            CommTerm();
#line 2118 "cplus.met"
#line 2119 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(long_short_int_char), 88, cplus)){
#line 2119 "cplus.met"
#line 2120 "cplus.met"
                {
#line 2120 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2120 "cplus.met"
                    {
#line 2120 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2120 "cplus.met"
                        _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2120 "cplus.met"
                        ReplaceTree(_ptRes1, 1, valTree );
#line 2120 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2120 "cplus.met"
                    }
#line 2120 "cplus.met"
                    _retValue =_ptTree0;
#line 2120 "cplus.met"
                    goto simple_type_ret;
#line 2120 "cplus.met"
                }
#line 2120 "cplus.met"
            } else {
#line 2120 "cplus.met"
#line 2122 "cplus.met"
                {
#line 2122 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2122 "cplus.met"
                    {
#line 2122 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2122 "cplus.met"
                        _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2122 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2122 "cplus.met"
                    }
#line 2122 "cplus.met"
                    _retValue =_ptTree0;
#line 2122 "cplus.met"
                    goto simple_type_ret;
#line 2122 "cplus.met"
                }
#line 2122 "cplus.met"
            }
#line 2122 "cplus.met"
            break;
#line 2122 "cplus.met"
#line 2123 "cplus.met"
        default : 
#line 2123 "cplus.met"
#line 2123 "cplus.met"
            {
#line 2123 "cplus.met"
                PPTREE _ptTree0=0;
#line 2123 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_short_int_char)(error_free), 88, cplus))== (PPTREE) -1 ) {
#line 2123 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2123 "cplus.met"
                }
#line 2123 "cplus.met"
                _retValue =_ptTree0;
#line 2123 "cplus.met"
                goto simple_type_ret;
#line 2123 "cplus.met"
            }
#line 2123 "cplus.met"
            break;
#line 2123 "cplus.met"
    }
#line 2123 "cplus.met"
#line 2123 "cplus.met"
#line 2124 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2124 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2124 "cplus.met"
return((PPTREE) 0);
#line 2124 "cplus.met"

#line 2124 "cplus.met"
simple_type_exit :
#line 2124 "cplus.met"

#line 2124 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2124 "cplus.met"
    _funcLevel--;
#line 2124 "cplus.met"
    return((PPTREE) -1) ;
#line 2124 "cplus.met"

#line 2124 "cplus.met"
simple_type_ret :
#line 2124 "cplus.met"
    
#line 2124 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2124 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2124 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2124 "cplus.met"
    return _retValue ;
#line 2124 "cplus.met"
}
#line 2124 "cplus.met"

#line 2124 "cplus.met"
