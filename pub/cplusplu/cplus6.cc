/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 788 "cplus.met"
PPTREE cplus::quick_prog ( int error_free)
#line 788 "cplus.met"
{
#line 788 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 788 "cplus.met"
    int _value,_nbPre = 0 ;
#line 788 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 788 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog",TRACE_ENTER,(PPTREE)0);
#line 788 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 788 "cplus.met"
#line 788 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 788 "cplus.met"
#line 790 "cplus.met"
    while ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(quick_prog_elem), 116, cplus)) && 
#line 790 "cplus.met"
          (! (valTree == (PPTREE) 0))) { 
#line 790 "cplus.met"
#line 791 "cplus.met"
#line 792 "cplus.met"
        FreeTree (valTree );
#line 792 "cplus.met"
#line 793 "cplus.met"
         _lastTree = (PPTREE) 0;
#line 793 "cplus.met"
#line 793 "cplus.met"
    } 
#line 793 "cplus.met"
#line 795 "cplus.met"
    ExtUnputBuf();
#line 795 "cplus.met"
    while ((c == ' ')||(c == '\n')||(c == '\t')||(c == '\r')||(c == ''))
#line 795 "cplus.met"
        NextChar() ;
#line 795 "cplus.met"
    ptStockBuf = -1;
#line 795 "cplus.met"
    lexEl.Erase();
#line 795 "cplus.met"
    tokenAhead = 0;
#line 795 "cplus.met"
    oldLine=line,oldCol=col;
#line 795 "cplus.met"
    if ( !lexCallLex) {
#line 795 "cplus.met"
        PUT_COORD_CALL;
#line 795 "cplus.met"
    }
#line 795 "cplus.met"
#line 796 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 796 "cplus.met"
#line 797 "cplus.met"
        if ( (NQUICK_CALL(_Tak(quick_prog_elem)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 797 "cplus.met"
            MulFreeTree(2,list,valTree);
            PROG_EXIT(quick_prog_exit,"quick_prog")
#line 797 "cplus.met"
        }
#line 797 "cplus.met"
    }
#line 797 "cplus.met"
#line 798 "cplus.met"
    {
#line 798 "cplus.met"
        _retValue = list ;
#line 798 "cplus.met"
        goto quick_prog_ret;
#line 798 "cplus.met"
        
#line 798 "cplus.met"
    }
#line 798 "cplus.met"
#line 798 "cplus.met"
#line 798 "cplus.met"

#line 799 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 799 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 799 "cplus.met"
return((PPTREE) 0);
#line 799 "cplus.met"

#line 799 "cplus.met"
quick_prog_exit :
#line 799 "cplus.met"

#line 799 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_EXIT,(PPTREE)0);
#line 799 "cplus.met"
    _funcLevel--;
#line 799 "cplus.met"
    return((PPTREE) -1) ;
#line 799 "cplus.met"

#line 799 "cplus.met"
quick_prog_ret :
#line 799 "cplus.met"
    
#line 799 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_RETURN,_retValue);
#line 799 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 799 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 799 "cplus.met"
    return _retValue ;
#line 799 "cplus.met"
}
#line 799 "cplus.met"

#line 799 "cplus.met"
#line 821 "cplus.met"
PPTREE cplus::quick_prog_elem ( int error_free)
#line 821 "cplus.met"
{
#line 821 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 821 "cplus.met"
    int _value,_nbPre = 0 ;
#line 821 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 821 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog_elem",TRACE_ENTER,(PPTREE)0);
#line 821 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 821 "cplus.met"
#line 821 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 821 "cplus.met"
#line 823 "cplus.met"
     debut :
#line 823 "cplus.met"
#line 824 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 824 "cplus.met"
    switch( lexEl.Value) {
#line 824 "cplus.met"
#line 825 "cplus.met"
        case META : 
#line 825 "cplus.met"
        case INCLUDE_DIR : 
#line 825 "cplus.met"
#line 825 "cplus.met"
            {
#line 825 "cplus.met"
                PPTREE _ptTree0=0;
#line 825 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 825 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 825 "cplus.met"
                }
#line 825 "cplus.met"
                _retValue =_ptTree0;
#line 825 "cplus.met"
                goto quick_prog_elem_ret;
#line 825 "cplus.met"
            }
#line 825 "cplus.met"
            break;
#line 825 "cplus.met"
#line 826 "cplus.met"
        case PRAGMA_DIR : 
#line 826 "cplus.met"
            tokenAhead = 0 ;
#line 826 "cplus.met"
            CommTerm();
#line 826 "cplus.met"
#line 827 "cplus.met"
#line 828 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(range_pragma), 121, cplus)){
#line 828 "cplus.met"
#line 828 "cplus.met"
            }
#line 828 "cplus.met"
#line 830 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 830 "cplus.met"
            switch( lexEl.Value) {
#line 830 "cplus.met"
#line 831 "cplus.met"
                case META : 
#line 831 "cplus.met"
                case PRAGMA_CONFIG : 
#line 831 "cplus.met"
                    tokenAhead = 0 ;
#line 831 "cplus.met"
                    CommTerm();
#line 831 "cplus.met"
#line 832 "cplus.met"
#line 833 "cplus.met"
                    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 833 "cplus.met"
                    switch( lexEl.Value) {
#line 833 "cplus.met"
#line 834 "cplus.met"
                        case META : 
#line 834 "cplus.met"
                        case PRAGMA_TAB : 
#line 834 "cplus.met"
                            tokenAhead = 0 ;
#line 834 "cplus.met"
                            CommTerm();
#line 834 "cplus.met"
#line 835 "cplus.met"
#line 836 "cplus.met"
                            {
#line 836 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 836 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 836 "cplus.met"
                                {
#line 836 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 836 "cplus.met"
                                    _ptRes1= MakeTree(TAB_VALUE, 1);
#line 836 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 836 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 836 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 836 "cplus.met"
                                    } else {
#line 836 "cplus.met"
                                        tokenAhead = 0 ;
#line 836 "cplus.met"
                                    }
#line 836 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 836 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 836 "cplus.met"
                                }
#line 836 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 836 "cplus.met"
                                retTree=_ptRes0;
#line 836 "cplus.met"
                            }
#line 836 "cplus.met"
#line 839 "cplus.met"
                            AnalyzeTab (retTree );
#line 839 "cplus.met"
#line 840 "cplus.met"
                            {
#line 840 "cplus.met"
                                _retValue = retTree ;
#line 840 "cplus.met"
                                goto quick_prog_elem_ret;
#line 840 "cplus.met"
                                
#line 840 "cplus.met"
                            }
#line 840 "cplus.met"
#line 840 "cplus.met"
                            break;
#line 840 "cplus.met"
#line 842 "cplus.met"
                        case PRAGMA_MODE : 
#line 842 "cplus.met"
                            tokenAhead = 0 ;
#line 842 "cplus.met"
                            CommTerm();
#line 842 "cplus.met"
#line 843 "cplus.met"
#line 844 "cplus.met"
                            {
#line 844 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 844 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 844 "cplus.met"
                                {
#line 844 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 844 "cplus.met"
                                    _ptRes1= MakeTree(MODE_VALUE, 1);
#line 844 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 844 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 844 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 844 "cplus.met"
                                    } else {
#line 844 "cplus.met"
                                        tokenAhead = 0 ;
#line 844 "cplus.met"
                                    }
#line 844 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 844 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 844 "cplus.met"
                                }
#line 844 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 844 "cplus.met"
                                retTree=_ptRes0;
#line 844 "cplus.met"
                            }
#line 844 "cplus.met"
#line 847 "cplus.met"
                            AnalyzeMode (retTree );
#line 847 "cplus.met"
#line 848 "cplus.met"
                            {
#line 848 "cplus.met"
                                _retValue = retTree ;
#line 848 "cplus.met"
                                goto quick_prog_elem_ret;
#line 848 "cplus.met"
                                
#line 848 "cplus.met"
                            }
#line 848 "cplus.met"
#line 848 "cplus.met"
                            break;
#line 848 "cplus.met"
#line 850 "cplus.met"
                        case PRAGMA_ENUM_VERT : 
#line 850 "cplus.met"
                            tokenAhead = 0 ;
#line 850 "cplus.met"
                            CommTerm();
#line 850 "cplus.met"
#line 851 "cplus.met"
#line 852 "cplus.met"
                            {
#line 852 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 852 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 852 "cplus.met"
                                {
#line 852 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 852 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_VERT_VALUE, 1);
#line 852 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 852 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 852 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 852 "cplus.met"
                                    } else {
#line 852 "cplus.met"
                                        tokenAhead = 0 ;
#line 852 "cplus.met"
                                    }
#line 852 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 852 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 852 "cplus.met"
                                }
#line 852 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 852 "cplus.met"
                                retTree=_ptRes0;
#line 852 "cplus.met"
                            }
#line 852 "cplus.met"
#line 855 "cplus.met"
                            AnalyzeEnumVert (retTree );
#line 855 "cplus.met"
#line 856 "cplus.met"
                            {
#line 856 "cplus.met"
                                _retValue = retTree ;
#line 856 "cplus.met"
                                goto quick_prog_elem_ret;
#line 856 "cplus.met"
                                
#line 856 "cplus.met"
                            }
#line 856 "cplus.met"
#line 856 "cplus.met"
                            break;
#line 856 "cplus.met"
#line 858 "cplus.met"
                        case PRAGMA_PARAMETERS_UNDER : 
#line 858 "cplus.met"
                            tokenAhead = 0 ;
#line 858 "cplus.met"
                            CommTerm();
#line 858 "cplus.met"
#line 859 "cplus.met"
#line 860 "cplus.met"
                            {
#line 860 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 860 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 860 "cplus.met"
                                {
#line 860 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 860 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_PARAMETERS_UNDER, 1);
#line 860 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 860 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 860 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 860 "cplus.met"
                                    } else {
#line 860 "cplus.met"
                                        tokenAhead = 0 ;
#line 860 "cplus.met"
                                    }
#line 860 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 860 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 860 "cplus.met"
                                }
#line 860 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 860 "cplus.met"
                                retTree=_ptRes0;
#line 860 "cplus.met"
                            }
#line 860 "cplus.met"
#line 864 "cplus.met"
                            AnalyzeParameterFunctUnd (retTree );
#line 864 "cplus.met"
#line 865 "cplus.met"
                            {
#line 865 "cplus.met"
                                _retValue = retTree ;
#line 865 "cplus.met"
                                goto quick_prog_elem_ret;
#line 865 "cplus.met"
                                
#line 865 "cplus.met"
                            }
#line 865 "cplus.met"
#line 865 "cplus.met"
                            break;
#line 865 "cplus.met"
#line 867 "cplus.met"
                        case PRAGMA_TAB_DIRECTIVE : 
#line 867 "cplus.met"
                            tokenAhead = 0 ;
#line 867 "cplus.met"
                            CommTerm();
#line 867 "cplus.met"
#line 868 "cplus.met"
#line 869 "cplus.met"
                            {
#line 869 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 869 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 869 "cplus.met"
                                {
#line 869 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 869 "cplus.met"
                                    _ptRes1= MakeTree(TAB_DIRECTIVE, 1);
#line 869 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 869 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 869 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 869 "cplus.met"
                                    } else {
#line 869 "cplus.met"
                                        tokenAhead = 0 ;
#line 869 "cplus.met"
                                    }
#line 869 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 869 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 869 "cplus.met"
                                }
#line 869 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 869 "cplus.met"
                                retTree=_ptRes0;
#line 869 "cplus.met"
                            }
#line 869 "cplus.met"
#line 872 "cplus.met"
                            AnalyzeTabDirective (retTree );
#line 872 "cplus.met"
#line 873 "cplus.met"
                            {
#line 873 "cplus.met"
                                _retValue = retTree ;
#line 873 "cplus.met"
                                goto quick_prog_elem_ret;
#line 873 "cplus.met"
                                
#line 873 "cplus.met"
                            }
#line 873 "cplus.met"
#line 873 "cplus.met"
                            break;
#line 873 "cplus.met"
#line 875 "cplus.met"
                        case PRAGMA_SPACE_ARROW : 
#line 875 "cplus.met"
                            tokenAhead = 0 ;
#line 875 "cplus.met"
                            CommTerm();
#line 875 "cplus.met"
#line 876 "cplus.met"
#line 877 "cplus.met"
                            {
#line 877 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 877 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 877 "cplus.met"
                                {
#line 877 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 877 "cplus.met"
                                    _ptRes1= MakeTree(SPACE_ARROW, 1);
#line 877 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 877 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 877 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 877 "cplus.met"
                                    } else {
#line 877 "cplus.met"
                                        tokenAhead = 0 ;
#line 877 "cplus.met"
                                    }
#line 877 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 877 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 877 "cplus.met"
                                }
#line 877 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 877 "cplus.met"
                                retTree=_ptRes0;
#line 877 "cplus.met"
                            }
#line 877 "cplus.met"
#line 880 "cplus.met"
                            AnalyzeSpaceArrow (retTree );
#line 880 "cplus.met"
#line 881 "cplus.met"
                            {
#line 881 "cplus.met"
                                _retValue = retTree ;
#line 881 "cplus.met"
                                goto quick_prog_elem_ret;
#line 881 "cplus.met"
                                
#line 881 "cplus.met"
                            }
#line 881 "cplus.met"
#line 881 "cplus.met"
                            break;
#line 881 "cplus.met"
#line 883 "cplus.met"
                        case PRAGMA_BRACE_ALIGN : 
#line 883 "cplus.met"
                            tokenAhead = 0 ;
#line 883 "cplus.met"
                            CommTerm();
#line 883 "cplus.met"
#line 884 "cplus.met"
#line 885 "cplus.met"
                            {
#line 885 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 885 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 885 "cplus.met"
                                {
#line 885 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 885 "cplus.met"
                                    _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 885 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 885 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 885 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 885 "cplus.met"
                                    } else {
#line 885 "cplus.met"
                                        tokenAhead = 0 ;
#line 885 "cplus.met"
                                    }
#line 885 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 885 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 885 "cplus.met"
                                }
#line 885 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 885 "cplus.met"
                                retTree=_ptRes0;
#line 885 "cplus.met"
                            }
#line 885 "cplus.met"
#line 888 "cplus.met"
                            AnalyzeBraceAlign (retTree );
#line 888 "cplus.met"
#line 889 "cplus.met"
                            {
#line 889 "cplus.met"
                                _retValue = retTree ;
#line 889 "cplus.met"
                                goto quick_prog_elem_ret;
#line 889 "cplus.met"
                                
#line 889 "cplus.met"
                            }
#line 889 "cplus.met"
#line 889 "cplus.met"
                            break;
#line 889 "cplus.met"
#line 891 "cplus.met"
                        case PRAGMA_SIMPLIFY : 
#line 891 "cplus.met"
                            tokenAhead = 0 ;
#line 891 "cplus.met"
                            CommTerm();
#line 891 "cplus.met"
#line 892 "cplus.met"
#line 893 "cplus.met"
                            {
#line 893 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 893 "cplus.met"
                                _ptRes0= MakeTree(SIMPLIFY, 1);
#line 893 "cplus.met"
                                {
#line 893 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 893 "cplus.met"
                                    _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 893 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 893 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 893 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 893 "cplus.met"
                                    } else {
#line 893 "cplus.met"
                                        tokenAhead = 0 ;
#line 893 "cplus.met"
                                    }
#line 893 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 893 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 893 "cplus.met"
                                }
#line 893 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 893 "cplus.met"
                                retTree=_ptRes0;
#line 893 "cplus.met"
                            }
#line 893 "cplus.met"
#line 896 "cplus.met"
                            AnalyzeSimplify (retTree );
#line 896 "cplus.met"
#line 897 "cplus.met"
                            {
#line 897 "cplus.met"
                                _retValue = retTree ;
#line 897 "cplus.met"
                                goto quick_prog_elem_ret;
#line 897 "cplus.met"
                                
#line 897 "cplus.met"
                            }
#line 897 "cplus.met"
#line 897 "cplus.met"
                            break;
#line 897 "cplus.met"
#line 899 "cplus.met"
                        case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 899 "cplus.met"
                            tokenAhead = 0 ;
#line 899 "cplus.met"
                            CommTerm();
#line 899 "cplus.met"
#line 900 "cplus.met"
#line 901 "cplus.met"
                            {
#line 901 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 901 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 901 "cplus.met"
                                {
#line 901 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 901 "cplus.met"
                                    _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 901 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 901 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 901 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 901 "cplus.met"
                                    } else {
#line 901 "cplus.met"
                                        tokenAhead = 0 ;
#line 901 "cplus.met"
                                    }
#line 901 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 901 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 901 "cplus.met"
                                }
#line 901 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 901 "cplus.met"
                                retTree=_ptRes0;
#line 901 "cplus.met"
                            }
#line 901 "cplus.met"
#line 905 "cplus.met"
                            AnalyzeSingleSwitchIndent (retTree );
#line 905 "cplus.met"
#line 906 "cplus.met"
                            {
#line 906 "cplus.met"
                                _retValue = retTree ;
#line 906 "cplus.met"
                                goto quick_prog_elem_ret;
#line 906 "cplus.met"
                                
#line 906 "cplus.met"
                            }
#line 906 "cplus.met"
#line 906 "cplus.met"
                            break;
#line 906 "cplus.met"
#line 908 "cplus.met"
                        case PRAGMA_ASSIGN_ALIGN : 
#line 908 "cplus.met"
                            tokenAhead = 0 ;
#line 908 "cplus.met"
                            CommTerm();
#line 908 "cplus.met"
#line 909 "cplus.met"
#line 910 "cplus.met"
                            {
#line 910 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 910 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 910 "cplus.met"
                                {
#line 910 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 910 "cplus.met"
                                    _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 910 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 910 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 910 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 910 "cplus.met"
                                    } else {
#line 910 "cplus.met"
                                        tokenAhead = 0 ;
#line 910 "cplus.met"
                                    }
#line 910 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 910 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 910 "cplus.met"
                                }
#line 910 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 910 "cplus.met"
                                retTree=_ptRes0;
#line 910 "cplus.met"
                            }
#line 910 "cplus.met"
#line 913 "cplus.met"
                            AnalyzeAssignAlign (retTree );
#line 913 "cplus.met"
#line 914 "cplus.met"
                            {
#line 914 "cplus.met"
                                _retValue = retTree ;
#line 914 "cplus.met"
                                goto quick_prog_elem_ret;
#line 914 "cplus.met"
                                
#line 914 "cplus.met"
                            }
#line 914 "cplus.met"
#line 914 "cplus.met"
                            break;
#line 914 "cplus.met"
#line 916 "cplus.met"
                        case PRAGMA_DECL_ALIGN : 
#line 916 "cplus.met"
                            tokenAhead = 0 ;
#line 916 "cplus.met"
                            CommTerm();
#line 916 "cplus.met"
#line 917 "cplus.met"
#line 918 "cplus.met"
                            {
#line 918 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 918 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 918 "cplus.met"
                                {
#line 918 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 918 "cplus.met"
                                    _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 918 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 918 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 918 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 918 "cplus.met"
                                    } else {
#line 918 "cplus.met"
                                        tokenAhead = 0 ;
#line 918 "cplus.met"
                                    }
#line 918 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 918 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 918 "cplus.met"
                                }
#line 918 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 918 "cplus.met"
                                retTree=_ptRes0;
#line 918 "cplus.met"
                            }
#line 918 "cplus.met"
#line 921 "cplus.met"
                            AnalyzeDeclAlign (retTree );
#line 921 "cplus.met"
#line 922 "cplus.met"
                            {
#line 922 "cplus.met"
                                _retValue = retTree ;
#line 922 "cplus.met"
                                goto quick_prog_elem_ret;
#line 922 "cplus.met"
                                
#line 922 "cplus.met"
                            }
#line 922 "cplus.met"
#line 922 "cplus.met"
                            break;
#line 922 "cplus.met"
#line 924 "cplus.met"
                        case PRAGMA_MARGIN : 
#line 924 "cplus.met"
                            tokenAhead = 0 ;
#line 924 "cplus.met"
                            CommTerm();
#line 924 "cplus.met"
#line 925 "cplus.met"
#line 926 "cplus.met"
                            {
#line 926 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 926 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 926 "cplus.met"
                                {
#line 926 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 926 "cplus.met"
                                    _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 926 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 926 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 926 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 926 "cplus.met"
                                    } else {
#line 926 "cplus.met"
                                        tokenAhead = 0 ;
#line 926 "cplus.met"
                                    }
#line 926 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 926 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 926 "cplus.met"
                                }
#line 926 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 926 "cplus.met"
                                retTree=_ptRes0;
#line 926 "cplus.met"
                            }
#line 926 "cplus.met"
#line 929 "cplus.met"
                            AnalyzeMargin (retTree );
#line 929 "cplus.met"
#line 930 "cplus.met"
                            {
#line 930 "cplus.met"
                                _retValue = retTree ;
#line 930 "cplus.met"
                                goto quick_prog_elem_ret;
#line 930 "cplus.met"
                                
#line 930 "cplus.met"
                            }
#line 930 "cplus.met"
#line 930 "cplus.met"
                            break;
#line 930 "cplus.met"
#line 932 "cplus.met"
                        case PRAGMA_COMMENT_START : 
#line 932 "cplus.met"
                            tokenAhead = 0 ;
#line 932 "cplus.met"
                            CommTerm();
#line 932 "cplus.met"
#line 933 "cplus.met"
#line 934 "cplus.met"
                            {
#line 934 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 934 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 934 "cplus.met"
                                {
#line 934 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 934 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_START, 1);
#line 934 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 934 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 934 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 934 "cplus.met"
                                    } else {
#line 934 "cplus.met"
                                        tokenAhead = 0 ;
#line 934 "cplus.met"
                                    }
#line 934 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 934 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 934 "cplus.met"
                                }
#line 934 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 934 "cplus.met"
                                retTree=_ptRes0;
#line 934 "cplus.met"
                            }
#line 934 "cplus.met"
#line 937 "cplus.met"
                            AnalyzeComment (retTree );
#line 937 "cplus.met"
#line 938 "cplus.met"
                            {
#line 938 "cplus.met"
                                _retValue = retTree ;
#line 938 "cplus.met"
                                goto quick_prog_elem_ret;
#line 938 "cplus.met"
                                
#line 938 "cplus.met"
                            }
#line 938 "cplus.met"
#line 938 "cplus.met"
                            break;
#line 938 "cplus.met"
#line 940 "cplus.met"
                        case PRAGMA_COMMENT_MIDDLE : 
#line 940 "cplus.met"
                            tokenAhead = 0 ;
#line 940 "cplus.met"
                            CommTerm();
#line 940 "cplus.met"
#line 941 "cplus.met"
#line 942 "cplus.met"
                            {
#line 942 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 942 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 942 "cplus.met"
                                {
#line 942 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 942 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 942 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 942 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 942 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 942 "cplus.met"
                                    } else {
#line 942 "cplus.met"
                                        tokenAhead = 0 ;
#line 942 "cplus.met"
                                    }
#line 942 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 942 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 942 "cplus.met"
                                }
#line 942 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 942 "cplus.met"
                                retTree=_ptRes0;
#line 942 "cplus.met"
                            }
#line 942 "cplus.met"
#line 945 "cplus.met"
                            AnalyzeComment (retTree );
#line 945 "cplus.met"
#line 946 "cplus.met"
                            {
#line 946 "cplus.met"
                                _retValue = retTree ;
#line 946 "cplus.met"
                                goto quick_prog_elem_ret;
#line 946 "cplus.met"
                                
#line 946 "cplus.met"
                            }
#line 946 "cplus.met"
#line 946 "cplus.met"
                            break;
#line 946 "cplus.met"
#line 948 "cplus.met"
                        case PRAGMA_COMMENT_END : 
#line 948 "cplus.met"
                            tokenAhead = 0 ;
#line 948 "cplus.met"
                            CommTerm();
#line 948 "cplus.met"
#line 949 "cplus.met"
#line 950 "cplus.met"
                            {
#line 950 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 950 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 950 "cplus.met"
                                {
#line 950 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 950 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_END, 1);
#line 950 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 950 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 950 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 950 "cplus.met"
                                    } else {
#line 950 "cplus.met"
                                        tokenAhead = 0 ;
#line 950 "cplus.met"
                                    }
#line 950 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 950 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 950 "cplus.met"
                                }
#line 950 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 950 "cplus.met"
                                retTree=_ptRes0;
#line 950 "cplus.met"
                            }
#line 950 "cplus.met"
#line 953 "cplus.met"
                            AnalyzeComment (retTree );
#line 953 "cplus.met"
#line 954 "cplus.met"
                            {
#line 954 "cplus.met"
                                _retValue = retTree ;
#line 954 "cplus.met"
                                goto quick_prog_elem_ret;
#line 954 "cplus.met"
                                
#line 954 "cplus.met"
                            }
#line 954 "cplus.met"
#line 954 "cplus.met"
                            break;
#line 954 "cplus.met"
#line 956 "cplus.met"
                        case PRAGMA_COMMENT_PLUS : 
#line 956 "cplus.met"
                            tokenAhead = 0 ;
#line 956 "cplus.met"
                            CommTerm();
#line 956 "cplus.met"
#line 957 "cplus.met"
#line 958 "cplus.met"
                            {
#line 958 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 958 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 958 "cplus.met"
                                {
#line 958 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 958 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 958 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 958 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 958 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 958 "cplus.met"
                                    } else {
#line 958 "cplus.met"
                                        tokenAhead = 0 ;
#line 958 "cplus.met"
                                    }
#line 958 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 958 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 958 "cplus.met"
                                }
#line 958 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 958 "cplus.met"
                                retTree=_ptRes0;
#line 958 "cplus.met"
                            }
#line 958 "cplus.met"
#line 961 "cplus.met"
                            AnalyzeComment (retTree );
#line 961 "cplus.met"
#line 962 "cplus.met"
                            {
#line 962 "cplus.met"
                                _retValue = retTree ;
#line 962 "cplus.met"
                                goto quick_prog_elem_ret;
#line 962 "cplus.met"
                                
#line 962 "cplus.met"
                            }
#line 962 "cplus.met"
#line 962 "cplus.met"
                            break;
#line 962 "cplus.met"
#line 964 "cplus.met"
                        case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 964 "cplus.met"
                            tokenAhead = 0 ;
#line 964 "cplus.met"
                            CommTerm();
#line 964 "cplus.met"
#line 965 "cplus.met"
#line 966 "cplus.met"
                            {
#line 966 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 966 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 966 "cplus.met"
                                {
#line 966 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 966 "cplus.met"
                                    _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 966 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 966 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 966 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 966 "cplus.met"
                                    } else {
#line 966 "cplus.met"
                                        tokenAhead = 0 ;
#line 966 "cplus.met"
                                    }
#line 966 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 966 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 966 "cplus.met"
                                }
#line 966 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 966 "cplus.met"
                                retTree=_ptRes0;
#line 966 "cplus.met"
                            }
#line 966 "cplus.met"
#line 970 "cplus.met"
                            AnalyzeIndentFunctionType (retTree );
#line 970 "cplus.met"
#line 971 "cplus.met"
                            {
#line 971 "cplus.met"
                                _retValue = retTree ;
#line 971 "cplus.met"
                                goto quick_prog_elem_ret;
#line 971 "cplus.met"
                                
#line 971 "cplus.met"
                            }
#line 971 "cplus.met"
#line 971 "cplus.met"
                            break;
#line 971 "cplus.met"
#line 973 "cplus.met"
                        case PRAGMA_FUNC_HEADER : 
#line 973 "cplus.met"
                            tokenAhead = 0 ;
#line 973 "cplus.met"
                            CommTerm();
#line 973 "cplus.met"
#line 974 "cplus.met"
#line 975 "cplus.met"
                            {
#line 975 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 975 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 975 "cplus.met"
                                {
#line 975 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 975 "cplus.met"
                                    _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 975 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 975 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 975 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 975 "cplus.met"
                                    } else {
#line 975 "cplus.met"
                                        tokenAhead = 0 ;
#line 975 "cplus.met"
                                    }
#line 975 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 975 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 975 "cplus.met"
                                }
#line 975 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 975 "cplus.met"
                                retTree=_ptRes0;
#line 975 "cplus.met"
                            }
#line 975 "cplus.met"
#line 978 "cplus.met"
                            AnalyzeFuncHeader (retTree );
#line 978 "cplus.met"
#line 979 "cplus.met"
                            {
#line 979 "cplus.met"
                                _retValue = retTree ;
#line 979 "cplus.met"
                                goto quick_prog_elem_ret;
#line 979 "cplus.met"
                                
#line 979 "cplus.met"
                            }
#line 979 "cplus.met"
#line 979 "cplus.met"
                            break;
#line 979 "cplus.met"
#line 981 "cplus.met"
                        case PRAGMA_PARAMETERS : 
#line 981 "cplus.met"
                            tokenAhead = 0 ;
#line 981 "cplus.met"
                            CommTerm();
#line 981 "cplus.met"
#line 982 "cplus.met"
#line 983 "cplus.met"
                            {
#line 983 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 983 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 983 "cplus.met"
                                {
#line 983 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 983 "cplus.met"
                                    _ptRes1= MakeTree(PARAMETERS, 1);
#line 983 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 983 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 983 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 983 "cplus.met"
                                    } else {
#line 983 "cplus.met"
                                        tokenAhead = 0 ;
#line 983 "cplus.met"
                                    }
#line 983 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 983 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 983 "cplus.met"
                                }
#line 983 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 983 "cplus.met"
                                retTree=_ptRes0;
#line 983 "cplus.met"
                            }
#line 983 "cplus.met"
#line 986 "cplus.met"
                            AnalyzeParameters (retTree );
#line 986 "cplus.met"
#line 987 "cplus.met"
                            {
#line 987 "cplus.met"
                                _retValue = retTree ;
#line 987 "cplus.met"
                                goto quick_prog_elem_ret;
#line 987 "cplus.met"
                                
#line 987 "cplus.met"
                            }
#line 987 "cplus.met"
#line 987 "cplus.met"
                            break;
#line 987 "cplus.met"
#line 989 "cplus.met"
                        default : 
#line 989 "cplus.met"
#line 989 "cplus.met"
                            {
#line 989 "cplus.met"
                                PPTREE _ptTree0=0;
#line 989 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 989 "cplus.met"
                                    MulFreeTree(2,_ptTree0,retTree);
                                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 989 "cplus.met"
                                }
#line 989 "cplus.met"
                                _retValue =_ptTree0;
#line 989 "cplus.met"
                                goto quick_prog_elem_ret;
#line 989 "cplus.met"
                            }
#line 989 "cplus.met"
                            break;
#line 989 "cplus.met"
                    }
#line 989 "cplus.met"
#line 989 "cplus.met"
                    break;
#line 989 "cplus.met"
#line 989 "cplus.met"
                default : 
#line 989 "cplus.met"
#line 989 "cplus.met"
                    break;
#line 989 "cplus.met"
            }
#line 989 "cplus.met"
#line 994 "cplus.met"
            {
#line 994 "cplus.met"
                PPTREE _ptTree0=0;
#line 994 "cplus.met"
                {
#line 994 "cplus.met"
                    PPTREE _ptRes1=0;
#line 994 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 994 "cplus.met"
                    _ptTree0=_ptRes1;
#line 994 "cplus.met"
                }
#line 994 "cplus.met"
                _retValue =_ptTree0;
#line 994 "cplus.met"
                goto quick_prog_elem_ret;
#line 994 "cplus.met"
            }
#line 994 "cplus.met"
#line 994 "cplus.met"
            break;
#line 994 "cplus.met"
#line 996 "cplus.met"
        default : 
#line 996 "cplus.met"
            tokenAhead = 0 ;
#line 996 "cplus.met"
            CommTerm();
#line 996 "cplus.met"
#line 997 "cplus.met"
#line 998 "cplus.met"
            if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 998 "cplus.met"
#line 999 "cplus.met"
#line 1000 "cplus.met"
                (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1000 "cplus.met"
                if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1000 "cplus.met"
                    MulFreeTree(1,retTree);
                    TOKEN_EXIT(quick_prog_elem_exit,"END_LINE")
#line 1000 "cplus.met"
                } else {
#line 1000 "cplus.met"
                    tokenAhead = 0 ;
#line 1000 "cplus.met"
                }
#line 1000 "cplus.met"
#line 1001 "cplus.met"
                 goto debut;
#line 1001 "cplus.met"
#line 1001 "cplus.met"
#line 1001 "cplus.met"
            } else {
#line 1001 "cplus.met"
#line 1004 "cplus.met"
                {
#line 1004 "cplus.met"
                    _retValue = retTree ;
#line 1004 "cplus.met"
                    goto quick_prog_elem_ret;
#line 1004 "cplus.met"
                    
#line 1004 "cplus.met"
                }
#line 1004 "cplus.met"
            }
#line 1004 "cplus.met"
#line 1004 "cplus.met"
            break;
#line 1004 "cplus.met"
    }
#line 1004 "cplus.met"
#line 1004 "cplus.met"
#line 1006 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1006 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1006 "cplus.met"
return((PPTREE) 0);
#line 1006 "cplus.met"

#line 1006 "cplus.met"
quick_prog_elem_exit :
#line 1006 "cplus.met"

#line 1006 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_EXIT,(PPTREE)0);
#line 1006 "cplus.met"
    _funcLevel--;
#line 1006 "cplus.met"
    return((PPTREE) -1) ;
#line 1006 "cplus.met"

#line 1006 "cplus.met"
quick_prog_elem_ret :
#line 1006 "cplus.met"
    
#line 1006 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_RETURN,_retValue);
#line 1006 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1006 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1006 "cplus.met"
    return _retValue ;
#line 1006 "cplus.met"
}
#line 1006 "cplus.met"

#line 1006 "cplus.met"
#line 2128 "cplus.met"
PPTREE cplus::range_in_liste ( int error_free)
#line 2128 "cplus.met"
{
#line 2128 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2128 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2128 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2128 "cplus.met"
    int _Debug = TRACE_RULE("range_in_liste",TRACE_ENTER,(PPTREE)0);
#line 2128 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2128 "cplus.met"
#line 2128 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2128 "cplus.met"
#line 2130 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2130 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(retTree))) {
#line 2130 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(range_in_liste_exit,"IDENT")
#line 2130 "cplus.met"
    } else {
#line 2130 "cplus.met"
        tokenAhead = 0 ;
#line 2130 "cplus.met"
    }
#line 2130 "cplus.met"
#line 2131 "cplus.met"
    if ( IsRange(lexEl.string())){
#line 2131 "cplus.met"
#line 2132 "cplus.met"
        {
#line 2132 "cplus.met"
            _retValue = retTree ;
#line 2132 "cplus.met"
            goto range_in_liste_ret;
#line 2132 "cplus.met"
            
#line 2132 "cplus.met"
        }
#line 2132 "cplus.met"
    } else {
#line 2132 "cplus.met"
#line 2134 "cplus.met"
        
#line 2134 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 2134 "cplus.met"
        goto range_in_liste_exit;
#line 2134 "cplus.met"
    }
#line 2134 "cplus.met"
#line 2134 "cplus.met"
#line 2134 "cplus.met"

#line 2135 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2135 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2135 "cplus.met"
return((PPTREE) 0);
#line 2135 "cplus.met"

#line 2135 "cplus.met"
range_in_liste_exit :
#line 2135 "cplus.met"

#line 2135 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_EXIT,(PPTREE)0);
#line 2135 "cplus.met"
    _funcLevel--;
#line 2135 "cplus.met"
    return((PPTREE) -1) ;
#line 2135 "cplus.met"

#line 2135 "cplus.met"
range_in_liste_ret :
#line 2135 "cplus.met"
    
#line 2135 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_RETURN,_retValue);
#line 2135 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2135 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2135 "cplus.met"
    return _retValue ;
#line 2135 "cplus.met"
}
#line 2135 "cplus.met"

#line 2135 "cplus.met"
#line 2154 "cplus.met"
PPTREE cplus::range_modifier ( int error_free)
#line 2154 "cplus.met"
{
#line 2154 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2154 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2154 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2154 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier",TRACE_ENTER,(PPTREE)0);
#line 2154 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2154 "cplus.met"
#line 2155 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2155 "cplus.met"
    switch( lexEl.Value) {
#line 2155 "cplus.met"
#line 2156 "cplus.met"
        case META : 
#line 2156 "cplus.met"
        case IDENT : 
#line 2156 "cplus.met"
#line 2156 "cplus.met"
            {
#line 2156 "cplus.met"
                PPTREE _ptTree0=0;
#line 2156 "cplus.met"
                {
#line 2156 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2156 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2156 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(range_in_liste)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2156 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2156 "cplus.met"
                    }
#line 2156 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2156 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2156 "cplus.met"
                }
#line 2156 "cplus.met"
                _retValue =_ptTree0;
#line 2156 "cplus.met"
                goto range_modifier_ret;
#line 2156 "cplus.met"
            }
#line 2156 "cplus.met"
            break;
#line 2156 "cplus.met"
#line 2157 "cplus.met"
        case VOLATILE : 
#line 2157 "cplus.met"
#line 2157 "cplus.met"
            {
#line 2157 "cplus.met"
                PPTREE _ptTree0=0;
#line 2157 "cplus.met"
                {
#line 2157 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2157 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2157 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2157 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2157 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"volatile")
#line 2157 "cplus.met"
                    } else {
#line 2157 "cplus.met"
                        tokenAhead = 0 ;
#line 2157 "cplus.met"
                    }
#line 2157 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2157 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2157 "cplus.met"
                }
#line 2157 "cplus.met"
                _retValue =_ptTree0;
#line 2157 "cplus.met"
                goto range_modifier_ret;
#line 2157 "cplus.met"
            }
#line 2157 "cplus.met"
            break;
#line 2157 "cplus.met"
#line 2159 "cplus.met"
        case REGISTER : 
#line 2159 "cplus.met"
#line 2159 "cplus.met"
            {
#line 2159 "cplus.met"
                PPTREE _ptTree0=0;
#line 2159 "cplus.met"
                {
#line 2159 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2159 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2159 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2159 "cplus.met"
                    if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2159 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"register")
#line 2159 "cplus.met"
                    } else {
#line 2159 "cplus.met"
                        tokenAhead = 0 ;
#line 2159 "cplus.met"
                    }
#line 2159 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2159 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2159 "cplus.met"
                }
#line 2159 "cplus.met"
                _retValue =_ptTree0;
#line 2159 "cplus.met"
                goto range_modifier_ret;
#line 2159 "cplus.met"
            }
#line 2159 "cplus.met"
            break;
#line 2159 "cplus.met"
#line 2161 "cplus.met"
        default : 
#line 2161 "cplus.met"
#line 2161 "cplus.met"
            {
#line 2161 "cplus.met"
                PPTREE _ptTree0=0;
#line 2161 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_function)(error_free), 119, cplus))== (PPTREE) -1 ) {
#line 2161 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2161 "cplus.met"
                }
#line 2161 "cplus.met"
                _retValue =_ptTree0;
#line 2161 "cplus.met"
                goto range_modifier_ret;
#line 2161 "cplus.met"
            }
#line 2161 "cplus.met"
            break;
#line 2161 "cplus.met"
    }
#line 2161 "cplus.met"
#line 2161 "cplus.met"
#line 2162 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2162 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2162 "cplus.met"
return((PPTREE) 0);
#line 2162 "cplus.met"

#line 2162 "cplus.met"
range_modifier_exit :
#line 2162 "cplus.met"

#line 2162 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_EXIT,(PPTREE)0);
#line 2162 "cplus.met"
    _funcLevel--;
#line 2162 "cplus.met"
    return((PPTREE) -1) ;
#line 2162 "cplus.met"

#line 2162 "cplus.met"
range_modifier_ret :
#line 2162 "cplus.met"
    
#line 2162 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_RETURN,_retValue);
#line 2162 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2162 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2162 "cplus.met"
    return _retValue ;
#line 2162 "cplus.met"
}
#line 2162 "cplus.met"

#line 2162 "cplus.met"
#line 2145 "cplus.met"
PPTREE cplus::range_modifier_function ( int error_free)
#line 2145 "cplus.met"
{
#line 2145 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2145 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2145 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2145 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_function",TRACE_ENTER,(PPTREE)0);
#line 2145 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2145 "cplus.met"
#line 2146 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2146 "cplus.met"
    switch( lexEl.Value) {
#line 2146 "cplus.met"
#line 2147 "cplus.met"
        case INLINE : 
#line 2147 "cplus.met"
#line 2147 "cplus.met"
            {
#line 2147 "cplus.met"
                PPTREE _ptTree0=0;
#line 2147 "cplus.met"
                {
#line 2147 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2147 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2147 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2147 "cplus.met"
                    if (  !SEE_TOKEN( INLINE,"inline") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2147 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"inline")
#line 2147 "cplus.met"
                    } else {
#line 2147 "cplus.met"
                        tokenAhead = 0 ;
#line 2147 "cplus.met"
                    }
#line 2147 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2147 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2147 "cplus.met"
                }
#line 2147 "cplus.met"
                _retValue =_ptTree0;
#line 2147 "cplus.met"
                goto range_modifier_function_ret;
#line 2147 "cplus.met"
            }
#line 2147 "cplus.met"
            break;
#line 2147 "cplus.met"
#line 2148 "cplus.met"
        case VIRTUAL : 
#line 2148 "cplus.met"
#line 2148 "cplus.met"
            {
#line 2148 "cplus.met"
                PPTREE _ptTree0=0;
#line 2148 "cplus.met"
                {
#line 2148 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2148 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2148 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2148 "cplus.met"
                    if (  !SEE_TOKEN( VIRTUAL,"virtual") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2148 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"virtual")
#line 2148 "cplus.met"
                    } else {
#line 2148 "cplus.met"
                        tokenAhead = 0 ;
#line 2148 "cplus.met"
                    }
#line 2148 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2148 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2148 "cplus.met"
                }
#line 2148 "cplus.met"
                _retValue =_ptTree0;
#line 2148 "cplus.met"
                goto range_modifier_function_ret;
#line 2148 "cplus.met"
            }
#line 2148 "cplus.met"
            break;
#line 2148 "cplus.met"
#line 2149 "cplus.met"
        case FRIEND : 
#line 2149 "cplus.met"
#line 2149 "cplus.met"
            {
#line 2149 "cplus.met"
                PPTREE _ptTree0=0;
#line 2149 "cplus.met"
                {
#line 2149 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2149 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2149 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2149 "cplus.met"
                    if (  !SEE_TOKEN( FRIEND,"friend") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2149 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"friend")
#line 2149 "cplus.met"
                    } else {
#line 2149 "cplus.met"
                        tokenAhead = 0 ;
#line 2149 "cplus.met"
                    }
#line 2149 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2149 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2149 "cplus.met"
                }
#line 2149 "cplus.met"
                _retValue =_ptTree0;
#line 2149 "cplus.met"
                goto range_modifier_function_ret;
#line 2149 "cplus.met"
            }
#line 2149 "cplus.met"
            break;
#line 2149 "cplus.met"
#line 2150 "cplus.met"
        case CONST : 
#line 2150 "cplus.met"
#line 2150 "cplus.met"
            {
#line 2150 "cplus.met"
                PPTREE _ptTree0=0;
#line 2150 "cplus.met"
                {
#line 2150 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2150 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2150 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2150 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2150 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"const")
#line 2150 "cplus.met"
                    } else {
#line 2150 "cplus.met"
                        tokenAhead = 0 ;
#line 2150 "cplus.met"
                    }
#line 2150 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2150 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2150 "cplus.met"
                }
#line 2150 "cplus.met"
                _retValue =_ptTree0;
#line 2150 "cplus.met"
                goto range_modifier_function_ret;
#line 2150 "cplus.met"
            }
#line 2150 "cplus.met"
            break;
#line 2150 "cplus.met"
        default :
#line 2150 "cplus.met"
            CASE_EXIT(range_modifier_function_exit,"either inline or virtual or friend or const")
#line 2150 "cplus.met"
            break;
#line 2150 "cplus.met"
    }
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
range_modifier_function_exit :
#line 2151 "cplus.met"

#line 2151 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_EXIT,(PPTREE)0);
#line 2151 "cplus.met"
    _funcLevel--;
#line 2151 "cplus.met"
    return((PPTREE) -1) ;
#line 2151 "cplus.met"

#line 2151 "cplus.met"
range_modifier_function_ret :
#line 2151 "cplus.met"
    
#line 2151 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_RETURN,_retValue);
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
#line 2026 "cplus.met"
PPTREE cplus::range_modifier_ident ( int error_free)
#line 2026 "cplus.met"
{
#line 2026 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2026 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2026 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2026 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_ident",TRACE_ENTER,(PPTREE)0);
#line 2026 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2026 "cplus.met"
#line 2026 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2026 "cplus.met"
#line 2028 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(range_modifier), 118, cplus)){
#line 2028 "cplus.met"
#line 2029 "cplus.met"
        {
#line 2029 "cplus.met"
            PPTREE _ptTree0=0;
#line 2029 "cplus.met"
            {
#line 2029 "cplus.met"
                PPTREE _ptTree1=0;
#line 2029 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 2029 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                    PROG_EXIT(range_modifier_ident_exit,"range_modifier_ident")
#line 2029 "cplus.met"
                }
#line 2029 "cplus.met"
                _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2029 "cplus.met"
            }
#line 2029 "cplus.met"
            _retValue =_ptTree0;
#line 2029 "cplus.met"
            goto range_modifier_ident_ret;
#line 2029 "cplus.met"
        }
#line 2029 "cplus.met"
    } else {
#line 2029 "cplus.met"
#line 2031 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 2031 "cplus.met"
#line 2032 "cplus.met"
            {
#line 2032 "cplus.met"
                PPTREE _ptTree0=0;
#line 2032 "cplus.met"
                {
#line 2032 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2032 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 2032 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2032 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2032 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        TOKEN_EXIT(range_modifier_ident_exit,"IDENT")
#line 2032 "cplus.met"
                    } else {
#line 2032 "cplus.met"
                        tokenAhead = 0 ;
#line 2032 "cplus.met"
                    }
#line 2032 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2032 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2032 "cplus.met"
                }
#line 2032 "cplus.met"
                _retValue =_ptTree0;
#line 2032 "cplus.met"
                goto range_modifier_ident_ret;
#line 2032 "cplus.met"
            }
#line 2032 "cplus.met"
        }
#line 2032 "cplus.met"
    }
#line 2032 "cplus.met"
#line 2032 "cplus.met"
#line 2032 "cplus.met"

#line 2033 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2033 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2033 "cplus.met"
return((PPTREE) 0);
#line 2033 "cplus.met"

#line 2033 "cplus.met"
range_modifier_ident_exit :
#line 2033 "cplus.met"

#line 2033 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_EXIT,(PPTREE)0);
#line 2033 "cplus.met"
    _funcLevel--;
#line 2033 "cplus.met"
    return((PPTREE) -1) ;
#line 2033 "cplus.met"

#line 2033 "cplus.met"
range_modifier_ident_ret :
#line 2033 "cplus.met"
    
#line 2033 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_RETURN,_retValue);
#line 2033 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2033 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2033 "cplus.met"
    return _retValue ;
#line 2033 "cplus.met"
}
#line 2033 "cplus.met"

#line 2033 "cplus.met"
#line 801 "cplus.met"
PPTREE cplus::range_pragma ( int error_free)
#line 801 "cplus.met"
{
#line 801 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 801 "cplus.met"
    int _value,_nbPre = 0 ;
#line 801 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 801 "cplus.met"
    int _Debug = TRACE_RULE("range_pragma",TRACE_ENTER,(PPTREE)0);
#line 801 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 801 "cplus.met"
#line 802 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 802 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_RANGE,"PRAGMA_RANGE") || !(CommTerm(),1)) {
#line 802 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"PRAGMA_RANGE")
#line 802 "cplus.met"
    } else {
#line 802 "cplus.met"
        tokenAhead = 0 ;
#line 802 "cplus.met"
    }
#line 802 "cplus.met"
#line 803 "cplus.met"
    (tokenAhead == 9|| (LexPragmaSmall(),TRACE_LEX(1)));
#line 803 "cplus.met"
    if ( ! TERM_OR_META(SMALL_PRAGMA_CONTENT,"SMALL_PRAGMA_CONTENT") || !(CommTerm(),1)) {
#line 803 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"SMALL_PRAGMA_CONTENT")
#line 803 "cplus.met"
    } else {
#line 803 "cplus.met"
        tokenAhead = 0 ;
#line 803 "cplus.met"
    }
#line 803 "cplus.met"
#line 804 "cplus.met"
     AnalyseRange(lexEl.string());
#line 804 "cplus.met"
#line 804 "cplus.met"
#line 804 "cplus.met"

#line 805 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 805 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 805 "cplus.met"
return((PPTREE) 0);
#line 805 "cplus.met"

#line 805 "cplus.met"
range_pragma_exit :
#line 805 "cplus.met"

#line 805 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_EXIT,(PPTREE)0);
#line 805 "cplus.met"
    _funcLevel--;
#line 805 "cplus.met"
    return((PPTREE) -1) ;
#line 805 "cplus.met"

#line 805 "cplus.met"
range_pragma_ret :
#line 805 "cplus.met"
    
#line 805 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_RETURN,_retValue);
#line 805 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 805 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 805 "cplus.met"
    return _retValue ;
#line 805 "cplus.met"
}
#line 805 "cplus.met"

#line 805 "cplus.met"
#line 2665 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2665 "cplus.met"
{
#line 2665 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2665 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2665 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2665 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2665 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2665 "cplus.met"
#line 2665 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2665 "cplus.met"
#line 2667 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2667 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2667 "cplus.met"
    }
#line 2667 "cplus.met"
#line 2668 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 2668 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 2668 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 2668 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 2668 "cplus.met"
#line 2669 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2669 "cplus.met"
        switch( lexEl.Value) {
#line 2669 "cplus.met"
#line 2670 "cplus.met"
            case INFEEGAL : 
#line 2670 "cplus.met"
                tokenAhead = 0 ;
#line 2670 "cplus.met"
                CommTerm();
#line 2670 "cplus.met"
#line 2670 "cplus.met"
                {
#line 2670 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2670 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 2670 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2670 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2670 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2670 "cplus.met"
                    }
#line 2670 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2670 "cplus.met"
                    expTree=_ptRes0;
#line 2670 "cplus.met"
                }
#line 2670 "cplus.met"
                break;
#line 2670 "cplus.met"
#line 2672 "cplus.met"
            case SUPEEGAL : 
#line 2672 "cplus.met"
                tokenAhead = 0 ;
#line 2672 "cplus.met"
                CommTerm();
#line 2672 "cplus.met"
#line 2672 "cplus.met"
                {
#line 2672 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2672 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 2672 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2672 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2672 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2672 "cplus.met"
                    }
#line 2672 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2672 "cplus.met"
                    expTree=_ptRes0;
#line 2672 "cplus.met"
                }
#line 2672 "cplus.met"
                break;
#line 2672 "cplus.met"
#line 2674 "cplus.met"
            case SUPE : 
#line 2674 "cplus.met"
                tokenAhead = 0 ;
#line 2674 "cplus.met"
                CommTerm();
#line 2674 "cplus.met"
#line 2674 "cplus.met"
                {
#line 2674 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2674 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 2674 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2674 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2674 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2674 "cplus.met"
                    }
#line 2674 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2674 "cplus.met"
                    expTree=_ptRes0;
#line 2674 "cplus.met"
                }
#line 2674 "cplus.met"
                break;
#line 2674 "cplus.met"
#line 2675 "cplus.met"
            case INFE : 
#line 2675 "cplus.met"
                tokenAhead = 0 ;
#line 2675 "cplus.met"
                CommTerm();
#line 2675 "cplus.met"
#line 2675 "cplus.met"
                {
#line 2675 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2675 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 2675 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2675 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2675 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2675 "cplus.met"
                    }
#line 2675 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2675 "cplus.met"
                    expTree=_ptRes0;
#line 2675 "cplus.met"
                }
#line 2675 "cplus.met"
                break;
#line 2675 "cplus.met"
            default :
#line 2675 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 2675 "cplus.met"
                break;
#line 2675 "cplus.met"
        }
#line 2675 "cplus.met"
    } 
#line 2675 "cplus.met"
#line 2677 "cplus.met"
    {
#line 2677 "cplus.met"
        _retValue = expTree ;
#line 2677 "cplus.met"
        goto relational_expression_ret;
#line 2677 "cplus.met"
        
#line 2677 "cplus.met"
    }
#line 2677 "cplus.met"
#line 2677 "cplus.met"
#line 2677 "cplus.met"

#line 2678 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2678 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2678 "cplus.met"
return((PPTREE) 0);
#line 2678 "cplus.met"

#line 2678 "cplus.met"
relational_expression_exit :
#line 2678 "cplus.met"

#line 2678 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 2678 "cplus.met"
    _funcLevel--;
#line 2678 "cplus.met"
    return((PPTREE) -1) ;
#line 2678 "cplus.met"

#line 2678 "cplus.met"
relational_expression_ret :
#line 2678 "cplus.met"
    
#line 2678 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 2678 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2678 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2678 "cplus.met"
    return _retValue ;
#line 2678 "cplus.met"
}
#line 2678 "cplus.met"

#line 2678 "cplus.met"
#line 1506 "cplus.met"
PPTREE cplus::sc_specifier ( int error_free)
#line 1506 "cplus.met"
{
#line 1506 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1506 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1506 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1506 "cplus.met"
    int _Debug = TRACE_RULE("sc_specifier",TRACE_ENTER,(PPTREE)0);
#line 1506 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1506 "cplus.met"
#line 1507 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1507 "cplus.met"
    switch( lexEl.Value) {
#line 1507 "cplus.met"
#line 1508 "cplus.met"
        case AUTO : 
#line 1508 "cplus.met"
#line 1508 "cplus.met"
            {
#line 1508 "cplus.met"
                PPTREE _ptTree0=0;
#line 1508 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1508 "cplus.met"
                if (  !SEE_TOKEN( AUTO,"auto") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1508 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"auto")
#line 1508 "cplus.met"
                } else {
#line 1508 "cplus.met"
                    tokenAhead = 0 ;
#line 1508 "cplus.met"
                }
#line 1508 "cplus.met"
                _retValue =_ptTree0;
#line 1508 "cplus.met"
                goto sc_specifier_ret;
#line 1508 "cplus.met"
            }
#line 1508 "cplus.met"
            break;
#line 1508 "cplus.met"
#line 1509 "cplus.met"
        case STATIC : 
#line 1509 "cplus.met"
#line 1509 "cplus.met"
            {
#line 1509 "cplus.met"
                PPTREE _ptTree0=0;
#line 1509 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1509 "cplus.met"
                if (  !SEE_TOKEN( STATIC,"static") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1509 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"static")
#line 1509 "cplus.met"
                } else {
#line 1509 "cplus.met"
                    tokenAhead = 0 ;
#line 1509 "cplus.met"
                }
#line 1509 "cplus.met"
                _retValue =_ptTree0;
#line 1509 "cplus.met"
                goto sc_specifier_ret;
#line 1509 "cplus.met"
            }
#line 1509 "cplus.met"
            break;
#line 1509 "cplus.met"
#line 1510 "cplus.met"
        case EXTERN : 
#line 1510 "cplus.met"
#line 1510 "cplus.met"
            {
#line 1510 "cplus.met"
                PPTREE _ptTree0=0;
#line 1510 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1510 "cplus.met"
                if (  !SEE_TOKEN( EXTERN,"extern") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1510 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"extern")
#line 1510 "cplus.met"
                } else {
#line 1510 "cplus.met"
                    tokenAhead = 0 ;
#line 1510 "cplus.met"
                }
#line 1510 "cplus.met"
                _retValue =_ptTree0;
#line 1510 "cplus.met"
                goto sc_specifier_ret;
#line 1510 "cplus.met"
            }
#line 1510 "cplus.met"
            break;
#line 1510 "cplus.met"
#line 1511 "cplus.met"
        case REGISTER : 
#line 1511 "cplus.met"
#line 1511 "cplus.met"
            {
#line 1511 "cplus.met"
                PPTREE _ptTree0=0;
#line 1511 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1511 "cplus.met"
                if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1511 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"register")
#line 1511 "cplus.met"
                } else {
#line 1511 "cplus.met"
                    tokenAhead = 0 ;
#line 1511 "cplus.met"
                }
#line 1511 "cplus.met"
                _retValue =_ptTree0;
#line 1511 "cplus.met"
                goto sc_specifier_ret;
#line 1511 "cplus.met"
            }
#line 1511 "cplus.met"
            break;
#line 1511 "cplus.met"
#line 1511 "cplus.met"
        default : 
#line 1511 "cplus.met"
#line 1511 "cplus.met"
            break;
#line 1511 "cplus.met"
    }
#line 1511 "cplus.met"
#line 1511 "cplus.met"
#line 1513 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1513 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1513 "cplus.met"
return((PPTREE) 0);
#line 1513 "cplus.met"

#line 1513 "cplus.met"
sc_specifier_exit :
#line 1513 "cplus.met"

#line 1513 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_EXIT,(PPTREE)0);
#line 1513 "cplus.met"
    _funcLevel--;
#line 1513 "cplus.met"
    return((PPTREE) -1) ;
#line 1513 "cplus.met"

#line 1513 "cplus.met"
sc_specifier_ret :
#line 1513 "cplus.met"
    
#line 1513 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_RETURN,_retValue);
#line 1513 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1513 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1513 "cplus.met"
    return _retValue ;
#line 1513 "cplus.met"
}
#line 1513 "cplus.met"

#line 1513 "cplus.met"
#line 2680 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 2680 "cplus.met"
{
#line 2680 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2680 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2680 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2680 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 2680 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2680 "cplus.met"
#line 2680 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2680 "cplus.met"
#line 2682 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2682 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2682 "cplus.met"
    }
#line 2682 "cplus.met"
#line 2683 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 2683 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 2683 "cplus.met"
#line 2684 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2684 "cplus.met"
        switch( lexEl.Value) {
#line 2684 "cplus.met"
#line 2685 "cplus.met"
            case INFEINFE : 
#line 2685 "cplus.met"
                tokenAhead = 0 ;
#line 2685 "cplus.met"
                CommTerm();
#line 2685 "cplus.met"
#line 2685 "cplus.met"
                {
#line 2685 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2685 "cplus.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 2685 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2685 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2685 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2685 "cplus.met"
                    }
#line 2685 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2685 "cplus.met"
                    expTree=_ptRes0;
#line 2685 "cplus.met"
                }
#line 2685 "cplus.met"
                break;
#line 2685 "cplus.met"
#line 2687 "cplus.met"
            case SUPESUPE : 
#line 2687 "cplus.met"
                tokenAhead = 0 ;
#line 2687 "cplus.met"
                CommTerm();
#line 2687 "cplus.met"
#line 2687 "cplus.met"
                {
#line 2687 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2687 "cplus.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 2687 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2687 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2687 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2687 "cplus.met"
                    }
#line 2687 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2687 "cplus.met"
                    expTree=_ptRes0;
#line 2687 "cplus.met"
                }
#line 2687 "cplus.met"
                break;
#line 2687 "cplus.met"
            default :
#line 2687 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 2687 "cplus.met"
                break;
#line 2687 "cplus.met"
        }
#line 2687 "cplus.met"
    } 
#line 2687 "cplus.met"
#line 2690 "cplus.met"
    {
#line 2690 "cplus.met"
        _retValue = expTree ;
#line 2690 "cplus.met"
        goto shift_expression_ret;
#line 2690 "cplus.met"
        
#line 2690 "cplus.met"
    }
#line 2690 "cplus.met"
#line 2690 "cplus.met"
#line 2690 "cplus.met"

#line 2691 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2691 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2691 "cplus.met"
return((PPTREE) 0);
#line 2691 "cplus.met"

#line 2691 "cplus.met"
shift_expression_exit :
#line 2691 "cplus.met"

#line 2691 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 2691 "cplus.met"
    _funcLevel--;
#line 2691 "cplus.met"
    return((PPTREE) -1) ;
#line 2691 "cplus.met"

#line 2691 "cplus.met"
shift_expression_ret :
#line 2691 "cplus.met"
    
#line 2691 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 2691 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2691 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2691 "cplus.met"
    return _retValue ;
#line 2691 "cplus.met"
}
#line 2691 "cplus.met"

#line 2691 "cplus.met"
#line 2064 "cplus.met"
PPTREE cplus::simple_type ( int error_free)
#line 2064 "cplus.met"
{
#line 2064 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2064 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2064 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2064 "cplus.met"
    int _Debug = TRACE_RULE("simple_type",TRACE_ENTER,(PPTREE)0);
#line 2064 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2064 "cplus.met"
#line 2064 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2064 "cplus.met"
#line 2066 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2066 "cplus.met"
    switch( lexEl.Value) {
#line 2066 "cplus.met"
#line 2067 "cplus.met"
        case TYPENAME : 
#line 2067 "cplus.met"
            tokenAhead = 0 ;
#line 2067 "cplus.met"
            CommTerm();
#line 2067 "cplus.met"
#line 2067 "cplus.met"
            {
#line 2067 "cplus.met"
                PPTREE _ptTree0=0;
#line 2067 "cplus.met"
                {
#line 2067 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2067 "cplus.met"
                    _ptRes1= MakeTree(TYPENAME, 1);
#line 2067 "cplus.met"
                    {
#line 2067 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2067 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2067 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2067 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2067 "cplus.met"
                        }
#line 2067 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2067 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2067 "cplus.met"
                    }
#line 2067 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2067 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2067 "cplus.met"
                }
#line 2067 "cplus.met"
                _retValue =_ptTree0;
#line 2067 "cplus.met"
                goto simple_type_ret;
#line 2067 "cplus.met"
            }
#line 2067 "cplus.met"
            break;
#line 2067 "cplus.met"
#line 2069 "cplus.met"
        case AUTO : 
#line 2069 "cplus.met"
            tokenAhead = 0 ;
#line 2069 "cplus.met"
            CommTerm();
#line 2069 "cplus.met"
#line 2069 "cplus.met"
            {
#line 2069 "cplus.met"
                PPTREE _ptTree0=0;
#line 2069 "cplus.met"
                {
#line 2069 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2069 "cplus.met"
                    _ptRes1= MakeTree(AUTO, 0);
#line 2069 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2069 "cplus.met"
                }
#line 2069 "cplus.met"
                _retValue =_ptTree0;
#line 2069 "cplus.met"
                goto simple_type_ret;
#line 2069 "cplus.met"
            }
#line 2069 "cplus.met"
            break;
#line 2069 "cplus.met"
#line 2070 "cplus.met"
        case DOUBLE : 
#line 2070 "cplus.met"
            tokenAhead = 0 ;
#line 2070 "cplus.met"
            CommTerm();
#line 2070 "cplus.met"
#line 2070 "cplus.met"
            {
#line 2070 "cplus.met"
                PPTREE _ptTree0=0;
#line 2070 "cplus.met"
                {
#line 2070 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2070 "cplus.met"
                    _ptRes1= MakeTree(TDOUBLE, 0);
#line 2070 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2070 "cplus.met"
                }
#line 2070 "cplus.met"
                _retValue =_ptTree0;
#line 2070 "cplus.met"
                goto simple_type_ret;
#line 2070 "cplus.met"
            }
#line 2070 "cplus.met"
            break;
#line 2070 "cplus.met"
#line 2071 "cplus.met"
        case INT : 
#line 2071 "cplus.met"
            tokenAhead = 0 ;
#line 2071 "cplus.met"
            CommTerm();
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
                    _ptRes1= MakeTree(TINT, 0);
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
#line 2072 "cplus.met"
        case CHAR : 
#line 2072 "cplus.met"
            tokenAhead = 0 ;
#line 2072 "cplus.met"
            CommTerm();
#line 2072 "cplus.met"
#line 2072 "cplus.met"
            {
#line 2072 "cplus.met"
                PPTREE _ptTree0=0;
#line 2072 "cplus.met"
                {
#line 2072 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2072 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2072 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2072 "cplus.met"
                }
#line 2072 "cplus.met"
                _retValue =_ptTree0;
#line 2072 "cplus.met"
                goto simple_type_ret;
#line 2072 "cplus.met"
            }
#line 2072 "cplus.met"
            break;
#line 2072 "cplus.met"
#line 2073 "cplus.met"
        case FLOAT : 
#line 2073 "cplus.met"
            tokenAhead = 0 ;
#line 2073 "cplus.met"
            CommTerm();
#line 2073 "cplus.met"
#line 2073 "cplus.met"
            {
#line 2073 "cplus.met"
                PPTREE _ptTree0=0;
#line 2073 "cplus.met"
                {
#line 2073 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2073 "cplus.met"
                    _ptRes1= MakeTree(TFLOAT, 0);
#line 2073 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2073 "cplus.met"
                }
#line 2073 "cplus.met"
                _retValue =_ptTree0;
#line 2073 "cplus.met"
                goto simple_type_ret;
#line 2073 "cplus.met"
            }
#line 2073 "cplus.met"
            break;
#line 2073 "cplus.met"
#line 2074 "cplus.met"
        case VOID : 
#line 2074 "cplus.met"
            tokenAhead = 0 ;
#line 2074 "cplus.met"
            CommTerm();
#line 2074 "cplus.met"
#line 2074 "cplus.met"
            {
#line 2074 "cplus.met"
                PPTREE _ptTree0=0;
#line 2074 "cplus.met"
                {
#line 2074 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2074 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
#line 2074 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2074 "cplus.met"
                }
#line 2074 "cplus.met"
                _retValue =_ptTree0;
#line 2074 "cplus.met"
                goto simple_type_ret;
#line 2074 "cplus.met"
            }
#line 2074 "cplus.met"
            break;
#line 2074 "cplus.met"
#line 2075 "cplus.met"
        case DPOIDPOI : 
#line 2075 "cplus.met"
#line 2075 "cplus.met"
            {
#line 2075 "cplus.met"
                PPTREE _ptTree0=0;
#line 2075 "cplus.met"
                {
#line 2075 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2075 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2075 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2075 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2075 "cplus.met"
                    }
#line 2075 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
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
            break;
#line 2075 "cplus.met"
#line 2076 "cplus.met"
        case META : 
#line 2076 "cplus.met"
        case IDENT : 
#line 2076 "cplus.met"
#line 2076 "cplus.met"
            {
#line 2076 "cplus.met"
                PPTREE _ptTree0=0;
#line 2076 "cplus.met"
                {
#line 2076 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2076 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2076 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2076 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2076 "cplus.met"
                    }
#line 2076 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2076 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2076 "cplus.met"
                }
#line 2076 "cplus.met"
                _retValue =_ptTree0;
#line 2076 "cplus.met"
                goto simple_type_ret;
#line 2076 "cplus.met"
            }
#line 2076 "cplus.met"
            break;
#line 2076 "cplus.met"
#line 2077 "cplus.met"
        case LONG : 
#line 2077 "cplus.met"
            tokenAhead = 0 ;
#line 2077 "cplus.met"
            CommTerm();
#line 2077 "cplus.met"
#line 2078 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2078 "cplus.met"
            switch( lexEl.Value) {
#line 2078 "cplus.met"
#line 2079 "cplus.met"
                case FLOAT : 
#line 2079 "cplus.met"
                    tokenAhead = 0 ;
#line 2079 "cplus.met"
                    CommTerm();
#line 2079 "cplus.met"
#line 2079 "cplus.met"
                    {
#line 2079 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2079 "cplus.met"
                        {
#line 2079 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2079 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2079 "cplus.met"
                            {
#line 2079 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2079 "cplus.met"
                                _ptRes2= MakeTree(TFLOAT, 0);
#line 2079 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2079 "cplus.met"
                            }
#line 2079 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2079 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2079 "cplus.met"
                        }
#line 2079 "cplus.met"
                        _retValue =_ptTree0;
#line 2079 "cplus.met"
                        goto simple_type_ret;
#line 2079 "cplus.met"
                    }
#line 2079 "cplus.met"
                    break;
#line 2079 "cplus.met"
#line 2080 "cplus.met"
                case DOUBLE : 
#line 2080 "cplus.met"
                    tokenAhead = 0 ;
#line 2080 "cplus.met"
                    CommTerm();
#line 2080 "cplus.met"
#line 2080 "cplus.met"
                    {
#line 2080 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2080 "cplus.met"
                        {
#line 2080 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2080 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2080 "cplus.met"
                            {
#line 2080 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2080 "cplus.met"
                                _ptRes2= MakeTree(TDOUBLE, 0);
#line 2080 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2080 "cplus.met"
                            }
#line 2080 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
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
                    break;
#line 2080 "cplus.met"
#line 2081 "cplus.met"
                case INT : 
#line 2081 "cplus.met"
                    tokenAhead = 0 ;
#line 2081 "cplus.met"
                    CommTerm();
#line 2081 "cplus.met"
#line 2081 "cplus.met"
                    {
#line 2081 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2081 "cplus.met"
                        {
#line 2081 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2081 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2081 "cplus.met"
                            {
#line 2081 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2081 "cplus.met"
                                _ptRes2= MakeTree(TINT, 0);
#line 2081 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2081 "cplus.met"
                            }
#line 2081 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2081 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2081 "cplus.met"
                        }
#line 2081 "cplus.met"
                        _retValue =_ptTree0;
#line 2081 "cplus.met"
                        goto simple_type_ret;
#line 2081 "cplus.met"
                    }
#line 2081 "cplus.met"
                    break;
#line 2081 "cplus.met"
#line 2082 "cplus.met"
                case LONG : 
#line 2082 "cplus.met"
                    tokenAhead = 0 ;
#line 2082 "cplus.met"
                    CommTerm();
#line 2082 "cplus.met"
#line 2083 "cplus.met"
#line 2084 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2084 "cplus.met"
                    switch( lexEl.Value) {
#line 2084 "cplus.met"
#line 2085 "cplus.met"
                        case FLOAT : 
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
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2085 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2085 "cplus.met"
                                    {
#line 2085 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2085 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2085 "cplus.met"
                                        {
#line 2085 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2085 "cplus.met"
                                            _ptRes3= MakeTree(TFLOAT, 0);
#line 2085 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2085 "cplus.met"
                                        }
#line 2085 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2085 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2085 "cplus.met"
                                    }
#line 2085 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
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
#line 2087 "cplus.met"
                        case DOUBLE : 
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
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2087 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2087 "cplus.met"
                                    {
#line 2087 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2087 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2087 "cplus.met"
                                        {
#line 2087 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2087 "cplus.met"
                                            _ptRes3= MakeTree(TDOUBLE, 0);
#line 2087 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2087 "cplus.met"
                                        }
#line 2087 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2087 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2087 "cplus.met"
                                    }
#line 2087 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
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
#line 2089 "cplus.met"
                        case INT : 
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
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2089 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2089 "cplus.met"
                                    {
#line 2089 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2089 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2089 "cplus.met"
                                        {
#line 2089 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2089 "cplus.met"
                                            _ptRes3= MakeTree(TINT, 0);
#line 2089 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2089 "cplus.met"
                                        }
#line 2089 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2089 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2089 "cplus.met"
                                    }
#line 2089 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
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
#line 2091 "cplus.met"
                        case LONG : 
#line 2091 "cplus.met"
                            tokenAhead = 0 ;
#line 2091 "cplus.met"
                            CommTerm();
#line 2091 "cplus.met"
#line 2091 "cplus.met"
                            break;
#line 2091 "cplus.met"
#line 2092 "cplus.met"
                        default : 
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
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2092 "cplus.met"
                                    {
#line 2092 "cplus.met"
                                        PPTREE _ptRes2=0;
#line 2092 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2092 "cplus.met"
                                        _ptTree1=_ptRes2;
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
                    }
#line 2092 "cplus.met"
#line 2092 "cplus.met"
                    break;
#line 2092 "cplus.met"
#line 2095 "cplus.met"
                default : 
#line 2095 "cplus.met"
#line 2095 "cplus.met"
                    {
#line 2095 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2095 "cplus.met"
                        {
#line 2095 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2095 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
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
            }
#line 2095 "cplus.met"
            break;
#line 2095 "cplus.met"
#line 2097 "cplus.met"
        case SIGNED : 
#line 2097 "cplus.met"
            tokenAhead = 0 ;
#line 2097 "cplus.met"
            CommTerm();
#line 2097 "cplus.met"
#line 2098 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(long_short_int_char), 88, cplus)){
#line 2098 "cplus.met"
#line 2099 "cplus.met"
                {
#line 2099 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2099 "cplus.met"
                    {
#line 2099 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2099 "cplus.met"
                        _ptRes1= MakeTree(TSIGNED, 1);
#line 2099 "cplus.met"
                        ReplaceTree(_ptRes1, 1, valTree );
#line 2099 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2099 "cplus.met"
                    }
#line 2099 "cplus.met"
                    _retValue =_ptTree0;
#line 2099 "cplus.met"
                    goto simple_type_ret;
#line 2099 "cplus.met"
                }
#line 2099 "cplus.met"
            } else {
#line 2099 "cplus.met"
#line 2101 "cplus.met"
                {
#line 2101 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2101 "cplus.met"
                    {
#line 2101 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2101 "cplus.met"
                        _ptRes1= MakeTree(TSIGNED, 1);
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
            }
#line 2101 "cplus.met"
            break;
#line 2101 "cplus.met"
#line 2102 "cplus.met"
        case UNSIGNED : 
#line 2102 "cplus.met"
            tokenAhead = 0 ;
#line 2102 "cplus.met"
            CommTerm();
#line 2102 "cplus.met"
#line 2103 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(long_short_int_char), 88, cplus)){
#line 2103 "cplus.met"
#line 2104 "cplus.met"
                {
#line 2104 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2104 "cplus.met"
                    {
#line 2104 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2104 "cplus.met"
                        _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2104 "cplus.met"
                        ReplaceTree(_ptRes1, 1, valTree );
#line 2104 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2104 "cplus.met"
                    }
#line 2104 "cplus.met"
                    _retValue =_ptTree0;
#line 2104 "cplus.met"
                    goto simple_type_ret;
#line 2104 "cplus.met"
                }
#line 2104 "cplus.met"
            } else {
#line 2104 "cplus.met"
#line 2106 "cplus.met"
                {
#line 2106 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2106 "cplus.met"
                    {
#line 2106 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2106 "cplus.met"
                        _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2106 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2106 "cplus.met"
                    }
#line 2106 "cplus.met"
                    _retValue =_ptTree0;
#line 2106 "cplus.met"
                    goto simple_type_ret;
#line 2106 "cplus.met"
                }
#line 2106 "cplus.met"
            }
#line 2106 "cplus.met"
            break;
#line 2106 "cplus.met"
#line 2107 "cplus.met"
        default : 
#line 2107 "cplus.met"
#line 2107 "cplus.met"
            {
#line 2107 "cplus.met"
                PPTREE _ptTree0=0;
#line 2107 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_short_int_char)(error_free), 88, cplus))== (PPTREE) -1 ) {
#line 2107 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2107 "cplus.met"
                }
#line 2107 "cplus.met"
                _retValue =_ptTree0;
#line 2107 "cplus.met"
                goto simple_type_ret;
#line 2107 "cplus.met"
            }
#line 2107 "cplus.met"
            break;
#line 2107 "cplus.met"
    }
#line 2107 "cplus.met"
#line 2107 "cplus.met"
#line 2108 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2108 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2108 "cplus.met"
return((PPTREE) 0);
#line 2108 "cplus.met"

#line 2108 "cplus.met"
simple_type_exit :
#line 2108 "cplus.met"

#line 2108 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2108 "cplus.met"
    _funcLevel--;
#line 2108 "cplus.met"
    return((PPTREE) -1) ;
#line 2108 "cplus.met"

#line 2108 "cplus.met"
simple_type_ret :
#line 2108 "cplus.met"
    
#line 2108 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2108 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2108 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2108 "cplus.met"
    return _retValue ;
#line 2108 "cplus.met"
}
#line 2108 "cplus.met"

#line 2108 "cplus.met"
