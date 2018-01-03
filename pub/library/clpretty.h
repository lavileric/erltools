#ifndef PRETTY_CLASS_FILE
#define PRETTY_CLASS_FILE 1
#include "token.h"
#include "pretty.h"
#define LIST_ALIGN 0
#define H_ALIGN 1
#define H_ALIGN_RIGHT 2
#define V_ALIGN 3
#define COND_ALIGN 4
#define PRE_ATTR 1
#define POST_ATTR 0
#define PUT_BEG 1
#define PUT_END 0

typedef struct treedelta {
    PPTREE  tree ;
    int     delta ;
}   TREE_DELTA,     *PPTREE_DELTA ;

static  inline int GetCoordOrg ( PPTREE tree, int *x, int *y, int *dx, int *dy )
{
    return GetCoord(tree, x, y, dx, dy);
}

static  inline void PutCoordOrg ( PPTREE tree, int x, int y, int dx, int dy )
{
    PutCoord(tree, x, y, dx, dy);
}

static  inline void GetCoordAbsOrg ( PPTREE tree, PPTREE lim, int *x, int *y )
{
    GetCoordAbs(tree, lim, x, y);
}

class clpretty {
    
    public :
    
        clpretty ()
            : currMark(0),  sizeTabTree(0),  currTabTree(0),  nbTab(0),  markTab( -1),  startComment((char *)0),  middleComment((char *)0)
                ,  endComment((char *)0),  plusComment((char *)0),  inhibateComment(0),  maxX(0),  postInhibitor(0)
        {
            
            /* Ajout init xFather, yFather IS 12/01/98 */
            xFather = yFather = 0 ;
            lastLineOn = 0 ;
            tabTree = (PPTREE_DELTA)0 ;
        }
        
        virtual ~clpretty () {}
        
        virtual void    PutAttr (PTREE tree, PTREE listAttr, int attr, int pos) ;
        virtual void    CompleteCoordinates (PTREE currTree) ;
        virtual int     GetBoxSize (PTREE box) ;
        virtual void    TraitMark (PTREE tree, int newMark) ;
        virtual void    TraiterExp3 (PTREE tree, int x0) ;
        virtual void    TraiterForDeclaration (PTREE tree, int x0) ;
        virtual void    AddTree (PTREE tree, int delta) ;
        virtual int     FindDelta (PTREE tree) ;
        virtual void    TraiterExpList (PTREE tree, int x0, int valTab = 1, int inParam = 0) ;
        virtual void    TraiterMonoParam (PTREE tree, int x0) ;
        virtual void    TraiterExpListParam (PTREE tree, int x0) ;
        virtual void    Treat (PTREE tree) ;
        
        virtual void TreatGeometry ( PTREE tree, int x0 )
        {
            TreatGeometryDepth(tree, x0, 0);
        }
        
        virtual void    TreatGeometryDepth (PTREE tree, int x0, unsigned int depth) ;
        
        virtual int TreatGeometrySpecific ( PTREE tree, int x0, int x )
        {
            return 0 ;
        }
        
        virtual void    UpdateSize (PTREE tree, int type) ;
        virtual void    TraiterExp2H (PTREE tree, int x0) ;
        virtual void    TraiterExp2V (PTREE tree, int x0) ;
        virtual void    LNewLine (int i) ;
        virtual void    DecompVirt (const PTREE &paramTree) ;
        virtual void    Decomp (const PTREE &, int = 0) ;
        virtual void    CleanAttributs (PTREE tree) ;
        
        virtual PTREE IntDecomp ( const PTREE &, int = 0 )
        {
            return (PTREE)0 ;
        }
        
        virtual void    TraitAttribut (PTREE tree) ;
        virtual void    DecompList (PTREE list, const char *sep, const char *term, int nbNl) ;
        
        virtual int OpTypeAlign ( PTREE )
        {
            return -1 ;
        }
        
        virtual int OpType ( PTREE )
        {
            return -1 ;
        }
        
        virtual int IsTop ( PTREE, int internal = 0 )
        {
            return -1 ;
        }
        
        int GetCoord ( PTREE tree, int *x, int *y, int *dx, int *dy )
        {
            while ( NumberTree(tree) == pretty::ATTRIBUTS ) 
                tree = sontree(tree, 1);
            return GetCoordOrg(tree, x, y, dx, dy);
        }
        
        void PutCoord ( PTREE tree, int x, int y, int dx, int dy )
        {
            while ( NumberTree(tree) == pretty::ATTRIBUTS ) 
                tree = sontree(tree, 1);
            PutCoordOrg(tree, x, y, dx, dy);
        }
        
        void GetCoordAbs ( PTREE tree, PTREE lim, int *x, int *y )
        {
            while ( NumberTree(tree) == pretty::ATTRIBUTS ) 
                tree = sontree(tree, 1);
            GetCoordAbsOrg(tree, lim, x, y);
        }
        
        /********************************************************************
               SonTreeAttr : sontree skipping attributes
           *******************************************************************/
        PTREE SonTreeAttr ( PTREE tree, int pos )
        {
            tree = sontree(tree, pos);
            while ( NumberTree(tree) == pretty::ATTRIBUTS ) 
                tree = sontree(tree, 1);
            return tree ;
        }
        
        int             comm (PTREE paramTree, int type) ;
        int             commAtBeginning (PTREE tree) ;
        
        // DisplayError : display an error on standard error and current output
        // parameters :
        //              printList : the list to be printed
        //              current : tell if to display on current output
        virtual void    DisplayError (PTREE printList, bool current = 1) ;
        
        // variables 
        int             currMark ;    // current mark
        PPTREE_DELTA    tabTree ;     /* an array for holding some trees */ 
        int             sizeTabTree ; /* size of array */ 
        int             currTabTree ; /* current pointer in array */ 
        int             nbTab, markTab ;
        int             maxX ;        // right corner   
        int             xFather, yFather ;
        char            *startComment ;
        char            *middleComment ;
        char            *endComment ;
        char            *plusComment ;
        int             inhibateComment ;
        int             lastLineOn ;  // indicates the number 
                                      // of line starting last box keep track
                                      // of NL
        char            *funcHeader ; // describe func header
        char            *parameters ; // describes parameters
        PTREE           postInhibitor ;
};
#endif
