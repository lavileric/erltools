#ifndef DECCPLUS_FILE
#   define DECCPLUS_FILE 1
#   include "cplus.h"
#   include "interf.h"
#   include "clpretty.h"
    int     IsRange (char *) ;
    void    Range (PTREE) ;
    void    AnalyseRange (char *) ;
    void    AnalyzeTab (PPTREE) ;
    void    AnalyzeMargin (PPTREE) ;
    void    AnalyzeMode (PPTREE) ;
    void    AnalyzeIndentFunctionType (PPTREE) ;
    void    AnalyzeSimplify (PPTREE) ;
    void    AnalyzeComment (PPTREE) ;
    char    *DecToIdent (PTREE) ;
    void    ReadIncludeS (const char *, int) ;
    
    class QuickCplus : public cplus {
        
        public :
        
            QuickCplus () {}
            
            ~QuickCplus () {}
            
            virtual PPTREE main_entry ( int error_free )
            {
                return quick_prog(error_free);
            }
    };
    
    class DecompCplus : public clpretty {
        
        public :
        
            DecompCplus () ;
            
            virtual ~DecompCplus () {}
            
            static DecompCplus  *ptDecomp ;
            
            // functions from dchop.ch
            virtual int         TypeOfBlock (PTREE) ;
            virtual void        DecompCommCtrl (const PTREE &, int funcAlone = 0, bool noPostComment = false) ;
            
            virtual void Decomp ( const PTREE &ptree, int funcAlone = 0 )
            {
                DecompCommCtrl(ptree, funcAlone, false);
            }
            
            virtual PTREE   IntDecomp (const PTREE &, int = 0) ;
            virtual int     middleInList (PTREE exp) ;
            virtual int     LastInList (PTREE) ;
            virtual int     LastInTopList (PTREE) ;
            virtual void    DecompilerListeExternSimp (PTREE) ;
            virtual void    DecompilerListeExtern (PTREE) ;
            virtual void    ChopTree (PTREE, int = 0) ;
            virtual void    copy (void) ;
            
            bool FlatFunct ()
            {
                return flatFunct ;
            }
            
            bool FlatFunct ( bool val )
            {
                return flatFunct = val ;
            }
            
            // functions from dchop0.ch
            virtual void    lstat_dec (PTREE) ;
            virtual void    follow_if_dir (PTREE, PTREE) ;
            virtual int     Sequence (PTREE, PTREE) ;
            virtual void    control_stat1 (PTREE) ;
            virtual int     commAtBeginning (PTREE) ;
            virtual int     comm (PTREE, int) ;
            virtual int     OpAssociativity (PTREE) ;
            virtual int     OpPriority (PTREE) ;
            virtual int     IsTopInstr (PTREE) ;
            virtual void    clean_tree (PTREE) ;
            
            // functions from dchop1.ch
            virtual int     OpType (PTREE) ;
            virtual int     OpTypeAlign (PTREE) ;
            virtual int     IsTop (PTREE, int = 0) ;
            virtual int     TreatGeometrySpecific (PTREE, int, int) ;
            virtual void    Treat (PTREE) ;
            virtual int     ComputeTabEnum (PTREE, int, int) ;
            virtual void    TraiterDeclAlignEnum (PTREE) ;
            virtual void    TraiterDeclAlign (PTREE, PTREE, bool declarator = false) ;
            virtual void    TraiterListDeclaration (PTREE) ;
            virtual void    TraiterListDeclarator (PTREE father) ;
            virtual int     ComputeTab (PTREE, int, int) ;
            virtual int     ComputeStart (PTREE, PTREE) ;
            virtual void    SetStart (PTREE, PTREE, int) ;
            virtual void    TraiterAlignTypeDecl (PTREE tree) ;
            virtual int     ComputeStartAff (PTREE start, PTREE end) ;
            virtual void    SetStartAff (PTREE start, PTREE end, int pos) ;
            virtual void    TraiterAlignAff (PTREE tree) ;
            virtual bool    IsVerticalDecl (PTREE tree) ;
            
            virtual void TraiterSequence ( PTREE ) {}
            
            // miscellaneous variables
            int     inClass ;
            int     indentFuncFlag ; // indicates to put a nl after function type   
            PTREE   postComment ;    // node where we            
                                     // have to look for a post comment           
                                     // used to unparse ;   
                                     // before comment of a statement           
                                     // if postComment is positionned on a   
                                     // node when we           
                                     // call decomp on it dont decomp the   
                                     // post comment           
                                     // it is managed overhead           
            int     simplifyExpression ;
            int     statementf ;
            int     inhibateComment ;
            bool    flatFunct ;      // tells to put function on left margin
            bool copyPrinted;
    };
    
    inline void decomp_cplus ( PTREE tree )
    {
        DecompCplus::ptDecomp->Decomp(tree);
    }
    
    //  
    //  Alignement des commentaires  
    //  
#   define MAX_REALIGN rightMargin - 10
#endif
