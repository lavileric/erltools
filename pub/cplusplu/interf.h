#ifndef INTERF_CPLUS
#define INTERF_CPLUS 
    extern int  ansiMode ;
    extern bool braceAlign ;
    extern bool braceAlignTabFunc ;
    extern bool braceAlignNoFunc ;
    extern int  singleSwitchIndent ;
    extern char *startComment, *middleComment, *endComment, *plusComment ;
    extern int  indentFunctionType ;
    extern int  nbOpenComment ;
    extern int  assignAlign ;
    extern int  declAlign ;
    extern bool enumVert ;
    extern bool parameterUnderTab ;
    extern bool tabDirective ;
    extern bool spaceArrow ;
    void        AnalyseRange (char *) ;
    void        AnalyzeTab (PPTREE) ;
    void        AnalyzeMode (PPTREE) ;
    void        AnalyzeBraceAlign (PPTREE) ;
    void        AnalyzeMargin (PPTREE) ;
    void        AnalyzeComment (PPTREE) ;
    void        AnalyzeSimplify (PPTREE) ;
    void        AnalyzeSingleSwitchIndent (PPTREE) ;
    void        AnalyzeIndentFunctionType (PPTREE) ;
    void        AnalyzeAssignAlign (PPTREE) ;
    void        AnalyzeDeclAlign (PPTREE) ;
    void        AnalyzeFuncHeader (PPTREE) ;
    void        AnalyzeParameters (PPTREE) ;
    void        AnalyzeParameterFunctUnd (PPTREE tree) ;
    int         IsRange (char *) ;
    void        AnalyzeEnumVert (PPTREE tree) ;
    void        AnalyzeTabDirective (PPTREE tree) ;
    void        AnalyzeSpaceArrow (PPTREE tree) ;
#endif
