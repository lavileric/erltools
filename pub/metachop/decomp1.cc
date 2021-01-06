
#line 5 "decomp1.ch"
/*************************************************************************/
#line 5 "decomp1.ch"
/*                                                                       */
#line 5 "decomp1.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 5 "decomp1.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 5 "decomp1.ch"
/*                  Eric Lavillonniere                                   */
#line 5 "decomp1.ch"
/*                                                                       */
#line 5 "decomp1.ch"
/*************************************************************************/
#line 5 "decomp1.ch"

#line 5 "decomp1.ch"
#include "token.h"
#line 5 "decomp1.ch"
#define decomp decomp_metachop
#line 5 "decomp1.ch"

#line 5 "decomp1.ch"
#ifndef for_elem
#line 5 "decomp1.ch"
#line 5 "decomp1.ch"
#define for_elem _for_elem

#line 5 "decomp1.ch"
#line 5 "decomp1.ch"

#line 5 "decomp1.ch"
#endif
#ifdef INCONNU
#line 5 "decomp1.ch"
#line 5 "decomp1.ch"
PTREE   for_elem ;
#line 5 "decomp1.ch"

#line 5 "decomp1.ch"
#line 5 "decomp1.ch"

#line 5 "decomp1.ch"
#endif
#include "decmetac.h"

int statementf, equality, caseDesign, simpleCase, ifCase, condDesign, condCase ;
char    *ptEquality, *ptCase, *ptCond ;
extern int  warningOk ;
extern int  indentFunctionType, ansiMode ;
extern int  nbVerify ;
extern int  output ;
extern char *theLanguageName ;
void    printheader (PTREE) ;
static int  typ_list_ok = 1 ;
extern int  needInter ;
extern int  cplusGen ;
char    *DecToIdent (PTREE) ;
char    tabLabel [100], *ptTab, *nameDefine ;
char    stringNumb [200];
int inFunction = 0 ;

int inParam = 0 ;

int nbLabel, nb_par_parse ;

char    *theLanguage ;
void    lstat_dec1 (PTREE) ;
void    DecompStat (PTREE, int) ;

int storeValMax ;
int retValMax ;
int stackTreeMax ;
extern bool theConstructorDump ;

#ifdef FOR_METACHOP
#line 5 "decomp1.ch"
#line 41 "decomp1.ch"
PTREE   postComment ;
#line 41 "decomp1.ch"

#line 41 "decomp1.ch"
#line 41 "decomp1.ch"

#line 41 "decomp1.ch"
#endif

extern char *theFileName ;
extern int  compiledLine ;

#if 0
#line 41 "decomp1.ch"
#line 48 "decomp1.ch"
#line 48 "decomp1.ch"

#line 48 "decomp1.ch"
static  int SearchPos ( PTREE tree, int *line, int *col )
#line 48 "decomp1.ch"
{
#line 48 "decomp1.ch"
#line 48 "decomp1.ch"
    int _nextVal ;
    
#line 48 "decomp1.ch"
#line 50 "decomp1.ch"
    {
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
        int _for_slot = 1, _arity = treearity(tree);
        
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
            _for_elem = SonTree(tree, _for_slot);
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
                if ( SearchPos(for_elem, line, col) ) {
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
                    return 1 ;
                    
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
                    
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
                }
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
            
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
        }
#line 50 "decomp1.ch"
        
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
        
#line 50 "decomp1.ch"
#line 50 "decomp1.ch"
    }
#line 50 "decomp1.ch"
#line 55 "decomp1.ch"
    if ( GetStartPos(tree, line, col) || GetEndPos(tree, line, col) ) 
#line 55 "decomp1.ch"
#line 56 "decomp1.ch"
        return 1 ;
    
#line 56 "decomp1.ch"
#line 57 "decomp1.ch"
    return 0 ;
    
#line 57 "decomp1.ch"
#line 58 "decomp1.ch"
    
#line 58 "decomp1.ch"
#line 58 "decomp1.ch"
}
#line 58 "decomp1.ch"


#line 58 "decomp1.ch"
#line 58 "decomp1.ch"

#line 58 "decomp1.ch"
#endif

#line 62 "decomp1.ch"

#line 62 "decomp1.ch"
static  inline void WRITE_START_LINE ( PTREE tree )
#line 62 "decomp1.ch"
{
#line 62 "decomp1.ch"
#line 62 "decomp1.ch"
    int _nextVal ;
    
#line 62 "decomp1.ch"
#line 64 "decomp1.ch"
    
    int line = compiledLine, col ;
    
#line 64 "decomp1.ch"
#line 65 "decomp1.ch"
    char    string [10];
    
#line 65 "decomp1.ch"
#line 66 "decomp1.ch"
    PTREE   father ;
#line 66 "decomp1.ch"
    
#line 66 "decomp1.ch"
#line 68 "decomp1.ch"
#if 0
#line 68 "decomp1.ch"
#line 69 "decomp1.ch"
    if ( !GetStartPos(tree, &line, &col) ) {
#line 69 "decomp1.ch"
#line 70 "decomp1.ch"
                                                    SearchPos(tree, &line, &col);
#line 70 "decomp1.ch"
#line 71 "decomp1.ch"
                                                    
#line 71 "decomp1.ch"
#line 71 "decomp1.ch"
                                                  }
#line 71 "decomp1.ch"
#line 71 "decomp1.ch"
    
#line 71 "decomp1.ch"
#else 
    SearchPos(tree, &line, &col);
#endif
    
#line 71 "decomp1.ch"
#line 76 "decomp1.ch"
    {
#line 76 "decomp1.ch"
#line 76 "decomp1.ch"
        LNewLine(1);
#line 76 "decomp1.ch"
#line 77 "decomp1.ch"
        gotocol(1);
#line 77 "decomp1.ch"
#line 78 "decomp1.ch"
        WriteString("#line ");
#line 78 "decomp1.ch"
#line 79 "decomp1.ch"
        sprintf(string, "%d ", line);
#line 79 "decomp1.ch"
#line 80 "decomp1.ch"
        WriteString(string);
#line 80 "decomp1.ch"
#line 80 "decomp1.ch"
        WriteString("\"");
#line 80 "decomp1.ch"
#line 80 "decomp1.ch"
        WriteString(theFileName);
#line 80 "decomp1.ch"
#line 80 "decomp1.ch"
        WriteString("\"");
#line 80 "decomp1.ch"
#line 81 "decomp1.ch"
        LNewLine(1);
#line 81 "decomp1.ch"
#line 82 "decomp1.ch"
        compiledLine = line ;
#line 82 "decomp1.ch"
#line 83 "decomp1.ch"
        
#line 83 "decomp1.ch"
#line 83 "decomp1.ch"
    }
    
#line 83 "decomp1.ch"
#line 84 "decomp1.ch"
    
#line 84 "decomp1.ch"
#line 84 "decomp1.ch"
}
#line 84 "decomp1.ch"

#line 86 "decomp1.ch"

#line 86 "decomp1.ch"
static  inline void WRITE_STOP_LINE ( PTREE tree )
#line 86 "decomp1.ch"
{
#line 86 "decomp1.ch"
#line 86 "decomp1.ch"
    int _nextVal ;
    
#line 86 "decomp1.ch"
#line 88 "decomp1.ch"
    
    int line = compiledLine, col ;
    
#line 88 "decomp1.ch"
#line 89 "decomp1.ch"
    char    string [10];
    
#line 89 "decomp1.ch"
#line 90 "decomp1.ch"
    PTREE   father ;
#line 90 "decomp1.ch"
    
#line 90 "decomp1.ch"
#line 92 "decomp1.ch"
    GetEndPos(tree, &line, &col);
#line 92 "decomp1.ch"
#line 94 "decomp1.ch"
    {
#line 94 "decomp1.ch"
#line 94 "decomp1.ch"
        LNewLine(1);
#line 94 "decomp1.ch"
#line 95 "decomp1.ch"
        gotocol(1);
#line 95 "decomp1.ch"
#line 96 "decomp1.ch"
        WriteString("#line ");
#line 96 "decomp1.ch"
#line 97 "decomp1.ch"
        sprintf(string, "%d ", line);
#line 97 "decomp1.ch"
#line 98 "decomp1.ch"
        WriteString(string);
#line 98 "decomp1.ch"
#line 98 "decomp1.ch"
        WriteString("\"");
#line 98 "decomp1.ch"
#line 98 "decomp1.ch"
        WriteString(theFileName);
#line 98 "decomp1.ch"
#line 98 "decomp1.ch"
        WriteString("\"");
#line 98 "decomp1.ch"
#line 99 "decomp1.ch"
        LNewLine(1);
#line 99 "decomp1.ch"
#line 100 "decomp1.ch"
        compiledLine = line ;
#line 100 "decomp1.ch"
#line 101 "decomp1.ch"
        
#line 101 "decomp1.ch"
#line 101 "decomp1.ch"
    }
    
#line 101 "decomp1.ch"
#line 102 "decomp1.ch"
    
#line 102 "decomp1.ch"
#line 102 "decomp1.ch"
}
#line 102 "decomp1.ch"

#include "newline.h"

#if 0
#line 102 "decomp1.ch"
#line 107 "decomp1.ch"
#line 107 "decomp1.ch"

#line 107 "decomp1.ch"
static  inline void CNewLine ()
#line 107 "decomp1.ch"
{
#line 107 "decomp1.ch"
#line 107 "decomp1.ch"
    int _nextVal ;
    
#line 107 "decomp1.ch"
#line 109 "decomp1.ch"
    
    char    string [10];
    
#line 109 "decomp1.ch"
#line 111 "decomp1.ch"
    LNewLine(1);
#line 111 "decomp1.ch"
#line 112 "decomp1.ch"
    if ( compiledLine ) {
#line 112 "decomp1.ch"
#line 113 "decomp1.ch"
                            gotocol(1);
#line 113 "decomp1.ch"
#line 114 "decomp1.ch"
                            WriteString("#line ");
#line 114 "decomp1.ch"
#line 115 "decomp1.ch"
                            sprintf(string, "%d ", compiledLine);
#line 115 "decomp1.ch"
#line 116 "decomp1.ch"
                            WriteString(string);
#line 116 "decomp1.ch"
#line 116 "decomp1.ch"
                            WriteString("\"");
#line 116 "decomp1.ch"
#line 116 "decomp1.ch"
                            WriteString(theFileName);
#line 116 "decomp1.ch"
#line 116 "decomp1.ch"
                            WriteString("\"");
#line 116 "decomp1.ch"
#line 117 "decomp1.ch"
                            LNewLine(1);
#line 117 "decomp1.ch"
#line 118 "decomp1.ch"
                            
#line 118 "decomp1.ch"
#line 118 "decomp1.ch"
                         }
#line 118 "decomp1.ch"
#line 119 "decomp1.ch"
    
#line 119 "decomp1.ch"
#line 119 "decomp1.ch"
}
#line 119 "decomp1.ch"


#line 119 "decomp1.ch"
#line 121 "decomp1.ch"

#line 121 "decomp1.ch"

#line 121 "decomp1.ch"
static  inline void CLNewLine ( int i )
#line 121 "decomp1.ch"
{
#line 121 "decomp1.ch"
#line 121 "decomp1.ch"
    int _nextVal ;
    
#line 121 "decomp1.ch"
#line 123 "decomp1.ch"
    
    char    string [10];
    
#line 123 "decomp1.ch"
#line 125 "decomp1.ch"
    LNewLine(1);
#line 125 "decomp1.ch"
#line 126 "decomp1.ch"
    if ( compiledLine ) {
#line 126 "decomp1.ch"
#line 127 "decomp1.ch"
                            gotocol(1);
#line 127 "decomp1.ch"
#line 128 "decomp1.ch"
                            WriteString("#line ");
#line 128 "decomp1.ch"
#line 129 "decomp1.ch"
                            sprintf(string, "%d ", compiledLine);
#line 129 "decomp1.ch"
#line 130 "decomp1.ch"
                            WriteString(string);
#line 130 "decomp1.ch"
#line 130 "decomp1.ch"
                            WriteString("\"");
#line 130 "decomp1.ch"
#line 130 "decomp1.ch"
                            WriteString(theFileName);
#line 130 "decomp1.ch"
#line 130 "decomp1.ch"
                            WriteString("\"");
#line 130 "decomp1.ch"
#line 131 "decomp1.ch"
                            LNewLine(i);
#line 131 "decomp1.ch"
#line 132 "decomp1.ch"
                            
#line 132 "decomp1.ch"
#line 132 "decomp1.ch"
                         }
#line 132 "decomp1.ch"
#line 133 "decomp1.ch"
    
#line 133 "decomp1.ch"
#line 133 "decomp1.ch"
}
#line 133 "decomp1.ch"


#line 133 "decomp1.ch"
#line 135 "decomp1.ch"
#define NewLine CNewLine

#line 135 "decomp1.ch"
#line 136 "decomp1.ch"
#define LNewLine CLNewLine

#line 136 "decomp1.ch"
#line 136 "decomp1.ch"

#line 136 "decomp1.ch"
#endif

#line 139 "decomp1.ch"

#line 139 "decomp1.ch"
PTREE DecompMetachop::DecompFunction ( PTREE paramTree, int funcAlone )
#line 139 "decomp1.ch"
{
#line 139 "decomp1.ch"
    register PPTREE _inter ;
#line 139 "decomp1.ch"

#line 139 "decomp1.ch"
#line 139 "decomp1.ch"
    int _nextVal ;
    
#line 139 "decomp1.ch"
#line 141 "decomp1.ch"
    
    PTREE   sc, type, declarator, param, range, param_decl, ctor, stat, exp ;
#line 141 "decomp1.ch"
    
#line 141 "decomp1.ch"
#line 142 "decomp1.ch"
    PTREE   tree, stat1, val, exp2, exp1, son ;
#line 142 "decomp1.ch"
    
#line 142 "decomp1.ch"
#line 144 "decomp1.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 144 "decomp1.ch"
        (NumberTree(_inter) == metachop::FUNC) &&
#line 144 "decomp1.ch"
        ((sc=SonTree(_inter,1)),1) &&
#line 144 "decomp1.ch"
        ((type=SonTree(_inter,2)),1) &&
#line 144 "decomp1.ch"
        ((declarator=SonTree(_inter,3)),1) &&
#line 144 "decomp1.ch"
        ((param=SonTree(_inter,4)),1) &&
#line 144 "decomp1.ch"
        ((range=SonTree(_inter,5)),1) &&
#line 144 "decomp1.ch"
        ((param_decl=SonTree(_inter,6)),1) &&
#line 144 "decomp1.ch"
        ((ctor=SonTree(_inter,7)),1) &&
#line 144 "decomp1.ch"
        ((stat=SonTree(_inter,8)),1) &&
#line 144 "decomp1.ch"
        1);
#line 144 "decomp1.ch"
    ;
#line 144 "decomp1.ch"
#line 145 "decomp1.ch"
    (exp2=ctor);
#line 145 "decomp1.ch"
    
#line 145 "decomp1.ch"
#line 146 "decomp1.ch"
    if ( ctor ) 
#line 146 "decomp1.ch"
#line 147 "decomp1.ch"
        ((_inter = (PPTREE)ctor,1) && 
#line 147 "decomp1.ch"
            ((ctor=SonTree(_inter,1)),1) &&
#line 147 "decomp1.ch"
            1);
#line 147 "decomp1.ch"
        ;
#line 147 "decomp1.ch"
#line 148 "decomp1.ch"
    ((_inter = (PPTREE)stat,1) && 
#line 148 "decomp1.ch"
        ((stat1=SonTree(_inter,1)),1) &&
#line 148 "decomp1.ch"
        1);
#line 148 "decomp1.ch"
    ;
#line 148 "decomp1.ch"
#line 152 "decomp1.ch"
    {
#line 152 "decomp1.ch"
#line 152 "decomp1.ch"
        (exp1=FatherTree(paramTree));
#line 152 "decomp1.ch"
        
#line 152 "decomp1.ch"
#line 153 "decomp1.ch"
        if ( ((_inter = (PPTREE)exp1,1) && 
#line 153 "decomp1.ch"
                (NumberTree(_inter) == metachop::ATTRIBUTS) &&
#line 153 "decomp1.ch"
                1) ) 
#line 153 "decomp1.ch"
#line 154 "decomp1.ch"
            (exp1=FatherTree(exp1));
#line 154 "decomp1.ch"
        
#line 154 "decomp1.ch"
#line 155 "decomp1.ch"
        if ( !(((_inter = (PPTREE)exp1,1) && 
#line 155 "decomp1.ch"
                    (NumberTree(_inter) == metachop::EXTERNAL) &&
#line 155 "decomp1.ch"
                    1)) ) {
#line 155 "decomp1.ch"
#line 161 "decomp1.ch"
                            if ( currLine > 0 ) {
#line 161 "decomp1.ch"
#line 162 "decomp1.ch"
                                                    if ( !inClass || !((!stat1)) ) {
#line 162 "decomp1.ch"
#line 163 "decomp1.ch"
                                                                                        if ( ( _inter = 
#line 163 "decomp1.ch"
                                                                                                FatherTree(exp1),((_inter = (PPTREE)_inter,1) && 
#line 163 "decomp1.ch"
                                                                                                                    (NumberTree(_inter) == metachop::TEMPLATE_DECL) &&
#line 163 "decomp1.ch"
                                                                                                                    1)) ) 
#line 163 "decomp1.ch"
#line 164 "decomp1.ch"
                                                                                            LNewLine(2);
#line 164 "decomp1.ch"
                                                                                        
#line 164 "decomp1.ch"
                                                                                        else 
#line 164 "decomp1.ch"
#line 166 "decomp1.ch"
                                                                                            LNewLine(1);
#line 166 "decomp1.ch"
                                                                                            
#line 166 "decomp1.ch"
                                                                                        
#line 166 "decomp1.ch"
#line 167 "decomp1.ch"
                                                                                        
#line 167 "decomp1.ch"
#line 167 "decomp1.ch"
                                                                                       } else 
#line 167 "decomp1.ch"
#line 168 "decomp1.ch"
                                                        LNewLine(1);
#line 168 "decomp1.ch"
                                                        
#line 168 "decomp1.ch"
                                                    
#line 168 "decomp1.ch"
#line 169 "decomp1.ch"
                                                    
#line 169 "decomp1.ch"
#line 169 "decomp1.ch"
                                                  }
#line 169 "decomp1.ch"
#line 170 "decomp1.ch"
                            if ( indentFunctionType ) 
#line 170 "decomp1.ch"
#line 171 "decomp1.ch"
                                indentFuncFlag = 1 ;
#line 171 "decomp1.ch"
#line 172 "decomp1.ch"
                            
#line 172 "decomp1.ch"
#line 172 "decomp1.ch"
                          }
#line 172 "decomp1.ch"
#line 173 "decomp1.ch"
        
#line 173 "decomp1.ch"
#line 173 "decomp1.ch"
    }
    
#line 173 "decomp1.ch"
#line 175 "decomp1.ch"
    Mark();
#line 175 "decomp1.ch"
    if ( !((!sc)) ) {
#line 175 "decomp1.ch"
#line 176 "decomp1.ch"
                        DumpBrainyValue(sc);
#line 176 "decomp1.ch"
                        
#line 176 "decomp1.ch"
#line 176 "decomp1.ch"
                        Tab();
#line 176 "decomp1.ch"
                        
#line 176 "decomp1.ch"
#line 177 "decomp1.ch"
                        
#line 177 "decomp1.ch"
#line 177 "decomp1.ch"
                      }
#line 177 "decomp1.ch"
    decomp(type);
#line 177 "decomp1.ch"
    
#line 177 "decomp1.ch"
    decomp(declarator);
#line 177 "decomp1.ch"
    
#line 177 "decomp1.ch"
    indentFuncFlag = 0 ;
#line 177 "decomp1.ch"
    SepBefore();
#line 177 "decomp1.ch"
    
#line 177 "decomp1.ch"
    PrintString("(");
#line 177 "decomp1.ch"
    if ( !((!param)) ) 
#line 177 "decomp1.ch"
#line 184 "decomp1.ch"
        Space(1);
#line 184 "decomp1.ch"
    
#line 184 "decomp1.ch"
    (val=param);
#line 184 "decomp1.ch"
    
#line 184 "decomp1.ch"
    comm(val, PRE);
#line 184 "decomp1.ch"
    while ( !((!param)) ) {
#line 184 "decomp1.ch"
#line 188 "decomp1.ch"
                                (son=(param?param.Nextl():(PPTREE)0));
#line 188 "decomp1.ch"
                                
#line 188 "decomp1.ch"
#line 189 "decomp1.ch"
                                decomp(son);
#line 189 "decomp1.ch"
                                
#line 189 "decomp1.ch"
#line 190 "decomp1.ch"
                                if ( !((!param)) ) {
#line 190 "decomp1.ch"
#line 191 "decomp1.ch"
                                                        PrintString(",");
#line 191 "decomp1.ch"
#line 192 "decomp1.ch"
                                                        
#line 192 "decomp1.ch"
#line 192 "decomp1.ch"
                                                     }
#line 192 "decomp1.ch"
#line 193 "decomp1.ch"
                                Space(1);
#line 193 "decomp1.ch"
                                
#line 193 "decomp1.ch"
#line 194 "decomp1.ch"
                                
#line 194 "decomp1.ch"
#line 194 "decomp1.ch"
                            }
#line 194 "decomp1.ch"
    PrintString(")");
#line 194 "decomp1.ch"
    SepAfter();
#line 194 "decomp1.ch"
    
#line 194 "decomp1.ch"
    comm(val, POST);
#line 194 "decomp1.ch"
    if ( range ) 
#line 194 "decomp1.ch"
#line 198 "decomp1.ch"
        decomp(range);
#line 198 "decomp1.ch"
    
#line 198 "decomp1.ch"
    comm(exp2, PRE);
#line 198 "decomp1.ch"
    if ( !((!ctor)) ) {
#line 198 "decomp1.ch"
#line 201 "decomp1.ch"
                            LNewLine(1);
#line 201 "decomp1.ch"
                            
#line 201 "decomp1.ch"
#line 202 "decomp1.ch"
                            Tab();
#line 202 "decomp1.ch"
                            
#line 202 "decomp1.ch"
#line 203 "decomp1.ch"
                            Mark();
#line 203 "decomp1.ch"
                            PrintString(":");
#line 203 "decomp1.ch"
                            Space(1);
#line 203 "decomp1.ch"
                            
#line 203 "decomp1.ch"
                            while ( !((!ctor)) ) {
#line 203 "decomp1.ch"
#line 205 "decomp1.ch"
                                                    (son=(ctor?ctor.Nextl():(PPTREE)0));
#line 205 "decomp1.ch"
                                                    
#line 205 "decomp1.ch"
#line 206 "decomp1.ch"
                                                    decomp(son);
#line 206 "decomp1.ch"
                                                    
#line 206 "decomp1.ch"
#line 207 "decomp1.ch"
                                                    if ( !((!ctor)) ) {
#line 207 "decomp1.ch"
#line 208 "decomp1.ch"
                                                                            PrintString(",");
#line 208 "decomp1.ch"
#line 208 "decomp1.ch"
                                                                            Space(1);
#line 208 "decomp1.ch"
                                                                            
#line 208 "decomp1.ch"
#line 208 "decomp1.ch"
                                                                            SepAfter();
#line 208 "decomp1.ch"
                                                                            
#line 208 "decomp1.ch"
#line 209 "decomp1.ch"
                                                                            
#line 209 "decomp1.ch"
#line 209 "decomp1.ch"
                                                                        }
#line 209 "decomp1.ch"
#line 210 "decomp1.ch"
                                                    
#line 210 "decomp1.ch"
#line 210 "decomp1.ch"
                                                   }
#line 210 "decomp1.ch"
                            UnMark();
#line 210 "decomp1.ch"
                            
#line 210 "decomp1.ch"
#line 212 "decomp1.ch"
                            comm(exp2, POST);
#line 212 "decomp1.ch"
#line 213 "decomp1.ch"
                            LNewLine(1);
#line 213 "decomp1.ch"
                            
#line 213 "decomp1.ch"
#line 214 "decomp1.ch"
                            
#line 214 "decomp1.ch"
#line 214 "decomp1.ch"
                        }
#line 214 "decomp1.ch"
    if ( !((!param_decl)) ) 
#line 214 "decomp1.ch"
#line 216 "decomp1.ch"
        LNewLine(1);
#line 216 "decomp1.ch"
    
#line 216 "decomp1.ch"
    decomp(param_decl);
#line 216 "decomp1.ch"
    
#line 216 "decomp1.ch"
    statementf = 0 ;
#line 216 "decomp1.ch"
    ((_inter = (PPTREE)stat,1) && 
#line 216 "decomp1.ch"
        ((stat1=SonTree(_inter,1)),1) &&
#line 216 "decomp1.ch"
        1);
#line 216 "decomp1.ch"
    ;
#line 216 "decomp1.ch"
    if ( !((!stat1)) || !((!param_decl)) ) 
#line 216 "decomp1.ch"
#line 223 "decomp1.ch"
        LNewLine(1);
#line 223 "decomp1.ch"
    
#line 223 "decomp1.ch"
    decomp(stat);
#line 223 "decomp1.ch"
    
#line 223 "decomp1.ch"
    if ( funcAlone ) 
#line 223 "decomp1.ch"
#line 228 "decomp1.ch"
        LNewLine(1);
#line 228 "decomp1.ch"
    
#line 228 "decomp1.ch"
    else 
#line 229 "decomp1.ch"
    if ( !LastInList(paramTree) ) {
#line 229 "decomp1.ch"
#line 230 "decomp1.ch"
                                        if ( !inClass || !((!stat1)) ) {
#line 230 "decomp1.ch"
#line 231 "decomp1.ch"
                                                                            if ( !LastInList(paramTree) ) {
#line 231 "decomp1.ch"
#line 232 "decomp1.ch"
                                                                                                                LNewLine(2);
#line 232 "decomp1.ch"
                                                                                                                
#line 232 "decomp1.ch"
#line 233 "decomp1.ch"
                                                                                                                
#line 233 "decomp1.ch"
#line 233 "decomp1.ch"
                                                                                                             }
#line 233 "decomp1.ch"
#line 234 "decomp1.ch"
                                                                            
#line 234 "decomp1.ch"
#line 234 "decomp1.ch"
                                                                           } else 
#line 234 "decomp1.ch"
                                        {
#line 234 "decomp1.ch"
#line 235 "decomp1.ch"
                                            if ( !LastInTopList(paramTree) ) {
#line 235 "decomp1.ch"
#line 236 "decomp1.ch"
                                                                                    LNewLine(1);
#line 236 "decomp1.ch"
                                                                                    
#line 236 "decomp1.ch"
#line 237 "decomp1.ch"
                                                                                    
#line 237 "decomp1.ch"
#line 237 "decomp1.ch"
                                                                                }
#line 237 "decomp1.ch"
#line 238 "decomp1.ch"
                                            
#line 238 "decomp1.ch"
#line 238 "decomp1.ch"
                                        }
                                        
#line 238 "decomp1.ch"
#line 239 "decomp1.ch"
                                        
#line 239 "decomp1.ch"
#line 239 "decomp1.ch"
                                     }
#line 239 "decomp1.ch"
    UnMark();
#line 239 "decomp1.ch"
    
#line 239 "decomp1.ch"
#line 241 "decomp1.ch"
    return postComment ;
    
#line 241 "decomp1.ch"
#line 242 "decomp1.ch"
    
#line 242 "decomp1.ch"
#line 242 "decomp1.ch"
}
#line 242 "decomp1.ch"

#line 244 "decomp1.ch"

#line 244 "decomp1.ch"
static  void DisplayAnchor ()
#line 244 "decomp1.ch"
{
#line 244 "decomp1.ch"
#line 244 "decomp1.ch"
    int _nextVal ;
    
#line 244 "decomp1.ch"
#line 246 "decomp1.ch"
    
    EString workName = theFileName ;
    
#line 246 "decomp1.ch"
#line 247 "decomp1.ch"
    char    *dotPos = strchr((char *)(workName.c_str()), '.');
    
#line 247 "decomp1.ch"
#line 249 "decomp1.ch"
    if ( dotPos ) 
#line 249 "decomp1.ch"
#line 250 "decomp1.ch"
        *dotPos = '\0';
#line 250 "decomp1.ch"
#line 251 "decomp1.ch"
    WRITE_START_LINE(PTREE(0));
#line 251 "decomp1.ch"
#line 252 "decomp1.ch"
    PrintString("static void ");
#line 252 "decomp1.ch"
#line 252 "decomp1.ch"
    PrintString(workName);
#line 252 "decomp1.ch"
#line 252 "decomp1.ch"
    NoSep();
#line 252 "decomp1.ch"
    
#line 252 "decomp1.ch"
#line 252 "decomp1.ch"
    PrintString("_Anchor () { int i = 1;} ");
#line 252 "decomp1.ch"
#line 252 "decomp1.ch"
    LNewLine(1);
#line 252 "decomp1.ch"
    
#line 252 "decomp1.ch"
#line 253 "decomp1.ch"
    
#line 253 "decomp1.ch"
#line 253 "decomp1.ch"
}
#line 253 "decomp1.ch"

#line 255 "decomp1.ch"

#line 255 "decomp1.ch"
PTREE DecompMetachop::IntDecomp ( const PTREE &paramTree, int funcAlone )
#line 255 "decomp1.ch"
{
#line 255 "decomp1.ch"
    register PPTREE _inter ;
#line 255 "decomp1.ch"

#line 255 "decomp1.ch"
#line 255 "decomp1.ch"
    int ptStackTree ;
    
#line 255 "decomp1.ch"
#line 255 "decomp1.ch"
    PPTREE  stackTree [1024];
    
#line 255 "decomp1.ch"
#line 255 "decomp1.ch"
    int _retVal [2];
    
#line 255 "decomp1.ch"
#line 255 "decomp1.ch"
    PPTREE  _storeVal [2];
    
#line 255 "decomp1.ch"
#line 255 "decomp1.ch"
    int _nextVal ;
    
#line 255 "decomp1.ch"
#line 257 "decomp1.ch"
    
    PTREE   ident, tree, list, son, exp1, exp2, exp, stat, param ;
#line 257 "decomp1.ch"
    
#line 257 "decomp1.ch"
#line 258 "decomp1.ch"
    PTREE   decl, sc, type, list_decl, name1, ident1, declarator, param_decl ;
#line 258 "decomp1.ch"
    
#line 258 "decomp1.ch"
#line 259 "decomp1.ch"
    PTREE   stat1, stat2, exp3, val, range, ctor ;
#line 259 "decomp1.ch"
    
#line 259 "decomp1.ch"
#line 260 "decomp1.ch"
    int oldStatement = statementf, oldEquality = equality, oldIfCase = ifCase ;
    
#line 260 "decomp1.ch"
#line 261 "decomp1.ch"
    int oldCaseDesign = caseDesign, oldSimpleCase = simpleCase ;
    
#line 261 "decomp1.ch"
#line 262 "decomp1.ch"
    int oldCondCase = condCase, oldCondDesign = condDesign ;
    
#line 262 "decomp1.ch"
#line 263 "decomp1.ch"
    char    *oldPtCase ;
    
#line 263 "decomp1.ch"
#line 264 "decomp1.ch"
    char    *interString ;
    
#line 264 "decomp1.ch"
#line 265 "decomp1.ch"
    int i, inDiff = 0 ;
    
#line 265 "decomp1.ch"
#line 266 "decomp1.ch"
    PTREE   oldPostComment = (PTREE)0 ;
#line 266 "decomp1.ch"
    
#line 266 "decomp1.ch"
#line 267 "decomp1.ch"
    int first = 1 ;
    
#line 267 "decomp1.ch"
#line 268 "decomp1.ch"
    int oneInstruct ;
    
#line 268 "decomp1.ch"
#line 266 "decomp1.ch"
    (oldPostComment=postComment);
#line 266 "decomp1.ch"
    
#line 266 "decomp1.ch"
#line 270 "decomp1.ch"
    switch ( NumberTree(paramTree) ) {
#line 270 "decomp1.ch"
#line 272 "decomp1.ch"
        case metachop::CHOP_DEF : 
#line 272 "decomp1.ch"
#line 272 "decomp1.ch"
            (ident=SonTree(paramTree, 1));
#line 272 "decomp1.ch"
            
#line 272 "decomp1.ch"
#line 272 "decomp1.ch"
            (list=SonTree(paramTree, 2));
#line 272 "decomp1.ch"
            
#line 272 "decomp1.ch"
#line 272 "decomp1.ch"
        _Case60 : 
#line 272 "decomp1.ch"
#line 272 "decomp1.ch"
            ;
#line 272 "decomp1.ch"
#line 272 "decomp1.ch"
            WRITE_START_LINE(paramTree);
#line 272 "decomp1.ch"
#line 273 "decomp1.ch"
            warningOk = 0 ;
#line 273 "decomp1.ch"
#line 276 "decomp1.ch"
            theLanguageName = AllocString(Value(ident));
#line 276 "decomp1.ch"
#line 277 "decomp1.ch"
            SwitchLang(theLanguageName);
#line 277 "decomp1.ch"
#line 278 "decomp1.ch"
            printheader(ident);
#line 278 "decomp1.ch"
#line 281 "decomp1.ch"
            {
#line 281 "decomp1.ch"
                /* [ metachop::COMPOUND
                    [ LIST 
                        [ metachop::IFNDEF_DIR
                            [ metachop::IDENT "for_elem"]
                            [ LIST 
                                [ metachop::DEFINE_DIR
                                    [ metachop::IDENT "for_elem"]
                                    [ NIL ] 
                                    [ LIST 
                                        "_for_elem"
                                    ]
                                ]
                                [ metachop::NONE ]
                            ]
                            [ NIL ] 
                        ]
                        [ metachop::IFDEF_DIR
                            [ metachop::IDENT "INCONNU"]
                            [ LIST 
                                [ metachop::DECLARATION
                                    [ NIL ] 
                                    [ metachop::TIDENT [ metachop::IDENT "PTREE"]]
                                    [ LIST 
                                        [ metachop::IDENT "for_elem"]
                                    ]
                                ]
                                [ metachop::NONE ]
                            ]
                            [ NIL ] 
                        ]
                        [ metachop::NONE ]
                    ]
                   ]
#line 281 "decomp1.ch"
                */
#line 281 "decomp1.ch"
                {   ptStackTree = 0 ;
#line 281 "decomp1.ch"
                    TheConstructor(stackTree,ptStackTree,-2,MakeString("for_elem"),metachop::IDENT,1,-2,MakeString("for_elem"),metachop::IDENT,1,-4,
                        -2,MakeString("_for_elem"),-4,LIST,2,metachop::DEFINE_DIR,3,metachop::NONE,0,-4,LIST,2,LIST,2,-4,metachop::IFNDEF_DIR,3,-2,MakeString("INCONNU"),metachop::IDENT,1,-4,
                        -2,MakeString("PTREE"),metachop::IDENT,1,metachop::TIDENT,1,-2,MakeString("for_elem"),metachop::IDENT,1,-4,LIST,2,metachop::DECLARATION,3,metachop::NONE,0,-4,LIST,2,LIST,2,-4,metachop::IFDEF_DIR,3,metachop::NONE,0,-4,LIST,2,LIST,2,LIST,2,metachop::COMPOUND,1,-3) ;
                    decl = PopTree ;
#line 281 "decomp1.ch"
                }   }
#line 281 "decomp1.ch"
            
#line 281 "decomp1.ch"
#line 291 "decomp1.ch"
            ((_inter = (PPTREE)decl,1) && 
#line 291 "decomp1.ch"
                ((decl=SonTree(_inter,1)),1) &&
#line 291 "decomp1.ch"
                1);
#line 291 "decomp1.ch"
            ;
#line 291 "decomp1.ch"
#line 292 "decomp1.ch"
            decomp(decl);
#line 292 "decomp1.ch"
            
#line 292 "decomp1.ch"
#line 292 "decomp1.ch"
            decomp(list);
#line 292 "decomp1.ch"
            
#line 292 "decomp1.ch"
#line 293 "decomp1.ch"
            _write(2, "\n", 1);
#line 293 "decomp1.ch"
#line 294 "decomp1.ch"
            WRITE_STOP_LINE(paramTree);
#line 294 "decomp1.ch"
#line 295 "decomp1.ch"
            DisplayAnchor();
#line 295 "decomp1.ch"
#line 296 "decomp1.ch"
            break ;
            
#line 296 "decomp1.ch"
#line 298 "decomp1.ch"
        case metachop::DECLARATION : 
#line 298 "decomp1.ch"
#line 298 "decomp1.ch"
            (sc=SonTree(paramTree, 1));
#line 298 "decomp1.ch"
            
#line 298 "decomp1.ch"
#line 298 "decomp1.ch"
            (type=SonTree(paramTree, 2));
#line 298 "decomp1.ch"
            
#line 298 "decomp1.ch"
#line 298 "decomp1.ch"
            (list_decl=SonTree(paramTree, 3));
#line 298 "decomp1.ch"
            
#line 298 "decomp1.ch"
#line 298 "decomp1.ch"
        _Case61 : 
#line 298 "decomp1.ch"
#line 298 "decomp1.ch"
            ;
#line 298 "decomp1.ch"
#line 298 "decomp1.ch"
            if ( ((_inter = (PPTREE)type,1) && 
#line 298 "decomp1.ch"
                    (NumberTree(_inter) == metachop::TIDENT) &&
#line 298 "decomp1.ch"
                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 298 "decomp1.ch"
                        (NumberTree(_inter) == metachop::IDENT) &&
#line 298 "decomp1.ch"
                        (!strcmp(Value(SonTree(_inter,1)),"PTREE")) &&
#line 298 "decomp1.ch"
                        1),
#line 298 "decomp1.ch"
                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 298 "decomp1.ch"
                    1) ) {
#line 298 "decomp1.ch"
#line 299 "decomp1.ch"
                            int hasPutMark = 0 ;
                            
#line 299 "decomp1.ch"
#line 301 "decomp1.ch"
                            
                            int isExtern = 0 ;
                            
#line 301 "decomp1.ch"
#line 302 "decomp1.ch"
                            if ( !((!sc)) ) {
#line 302 "decomp1.ch"
#line 303 "decomp1.ch"
                                                if ( !strcmp(Value(sc), "extern") ) 
#line 303 "decomp1.ch"
#line 304 "decomp1.ch"
                                                    isExtern = 1 ;
#line 304 "decomp1.ch"
#line 305 "decomp1.ch"
                                                DumpBrainyValue(sc);
#line 305 "decomp1.ch"
                                                
#line 305 "decomp1.ch"
#line 306 "decomp1.ch"
                                                
#line 306 "decomp1.ch"
#line 306 "decomp1.ch"
                                              }
#line 306 "decomp1.ch"
#line 308 "decomp1.ch"
                            {
#line 308 "decomp1.ch"
#line 308 "decomp1.ch"
                                decomp(type);
#line 308 "decomp1.ch"
                                
#line 308 "decomp1.ch"
#line 313 "decomp1.ch"
                                if ( !((!list_decl)) ) {
#line 313 "decomp1.ch"
#line 314 "decomp1.ch"
                                                            SepAfter();
#line 314 "decomp1.ch"
                                                            
#line 314 "decomp1.ch"
#line 315 "decomp1.ch"
                                                            
#line 315 "decomp1.ch"
#line 315 "decomp1.ch"
                                                         }
#line 315 "decomp1.ch"
#line 316 "decomp1.ch"
                                Tab();
#line 316 "decomp1.ch"
                                
#line 316 "decomp1.ch"
#line 317 "decomp1.ch"
                                
#line 317 "decomp1.ch"
#line 317 "decomp1.ch"
                            }
                            
#line 317 "decomp1.ch"
#line 318 "decomp1.ch"
                            while ( !((!list_decl)) ) {
#line 318 "decomp1.ch"
#line 321 "decomp1.ch"
                                                            if ( !hasPutMark ) {
#line 321 "decomp1.ch"
#line 322 "decomp1.ch"
                                                                                    Mark();
#line 322 "decomp1.ch"
#line 323 "decomp1.ch"
                                                                                    hasPutMark = 1 ;
#line 323 "decomp1.ch"
#line 324 "decomp1.ch"
                                                                                    
#line 324 "decomp1.ch"
#line 324 "decomp1.ch"
                                                                                 }
#line 324 "decomp1.ch"
#line 325 "decomp1.ch"
                                                            (decl=(list_decl?list_decl.Nextl():(PPTREE)0));
#line 325 "decomp1.ch"
                                                            
#line 325 "decomp1.ch"
#line 326 "decomp1.ch"
                                                            decomp(decl);
#line 326 "decomp1.ch"
                                                            
#line 326 "decomp1.ch"
#line 327 "decomp1.ch"
                                                            InsertDecElem(AllocString(BrainyValue(decl)));
#line 327 "decomp1.ch"
#line 328 "decomp1.ch"
                                                            if ( !inFunction ) 
#line 328 "decomp1.ch"
#line 329 "decomp1.ch"
                                                                SetUse(BrainyValue(decl));
#line 329 "decomp1.ch"
#line 330 "decomp1.ch"
                                                            if ( !((!list_decl)) ) {
#line 330 "decomp1.ch"
#line 331 "decomp1.ch"
                                                                                        PrintString(",");
#line 331 "decomp1.ch"
#line 331 "decomp1.ch"
                                                                                        Space(1);
#line 331 "decomp1.ch"
                                                                                        
#line 331 "decomp1.ch"
#line 332 "decomp1.ch"
                                                                                        
#line 332 "decomp1.ch"
#line 332 "decomp1.ch"
                                                                                     }
#line 332 "decomp1.ch"
#line 333 "decomp1.ch"
                                                            
#line 333 "decomp1.ch"
#line 333 "decomp1.ch"
                                                        }
#line 333 "decomp1.ch"
#line 334 "decomp1.ch"
                            if ( hasPutMark ) 
#line 334 "decomp1.ch"
#line 335 "decomp1.ch"
                                UnMark();
#line 335 "decomp1.ch"
#line 336 "decomp1.ch"
                            SepBefore();
#line 336 "decomp1.ch"
                            
#line 336 "decomp1.ch"
#line 336 "decomp1.ch"
                            PrintString(";");
#line 336 "decomp1.ch"
#line 339 "decomp1.ch"
                            comm(paramTree, POST);
#line 339 "decomp1.ch"
#line 340 "decomp1.ch"
                            (oldPostComment=paramTree);
#line 340 "decomp1.ch"
                            
#line 340 "decomp1.ch"
#line 344 "decomp1.ch"
                            (exp=FatherTree(paramTree));
#line 344 "decomp1.ch"
                            
#line 344 "decomp1.ch"
#line 345 "decomp1.ch"
                            if ( ( _inter = 
#line 345 "decomp1.ch"
                                    FatherTree(paramTree),!(((_inter = (PPTREE)_inter,1) && 
#line 345 "decomp1.ch"
                                                                (NumberTree(_inter) == metachop::ATTRIBUTS) &&
#line 345 "decomp1.ch"
                                                                1))) ) {
#line 345 "decomp1.ch"
#line 346 "decomp1.ch"
                                                                        if ( !LastInTopList(paramTree) ) {
#line 346 "decomp1.ch"
#line 347 "decomp1.ch"
                                                                                                                LNewLine(1);
#line 347 "decomp1.ch"
                                                                                                                
#line 347 "decomp1.ch"
#line 348 "decomp1.ch"
                                                                                                                
#line 348 "decomp1.ch"
#line 348 "decomp1.ch"
                                                                                                            }
#line 348 "decomp1.ch"
#line 349 "decomp1.ch"
                                                                        
#line 349 "decomp1.ch"
#line 349 "decomp1.ch"
                                                                       }
#line 349 "decomp1.ch"
#line 350 "decomp1.ch"
                            
#line 350 "decomp1.ch"
#line 350 "decomp1.ch"
                         } else 
#line 350 "decomp1.ch"
#line 351 "decomp1.ch"
                return DecompCplus::IntDecomp(paramTree, funcAlone);
                
#line 351 "decomp1.ch"
            
#line 351 "decomp1.ch"
#line 352 "decomp1.ch"
            break ;
            
#line 352 "decomp1.ch"
#line 354 "decomp1.ch"
        case metachop::DECLARATOR : 
#line 354 "decomp1.ch"
#line 354 "decomp1.ch"
            (type=SonTree(paramTree, 1));
#line 354 "decomp1.ch"
            
#line 354 "decomp1.ch"
#line 354 "decomp1.ch"
            (decl=SonTree(paramTree, 2));
#line 354 "decomp1.ch"
            
#line 354 "decomp1.ch"
#line 354 "decomp1.ch"
        _Case62 : 
#line 354 "decomp1.ch"
#line 354 "decomp1.ch"
            ;
#line 354 "decomp1.ch"
#line 354 "decomp1.ch"
            {
#line 354 "decomp1.ch"
#line 357 "decomp1.ch"
                PTREE   internType ;
#line 357 "decomp1.ch"
                
#line 357 "decomp1.ch"
#line 358 "decomp1.ch"
                (internType=type);
#line 358 "decomp1.ch"
                
#line 358 "decomp1.ch"
#line 359 "decomp1.ch"
                while ( ((_inter = (PPTREE)internType,1) && 
#line 359 "decomp1.ch"
                            (NumberTree(_inter) == metachop::RANGE_MODIFIER) &&
#line 359 "decomp1.ch"
                            ((internType=SonTree(_inter,2)),1) &&
#line 359 "decomp1.ch"
                            1) ) 
#line 359 "decomp1.ch"
#line 360 "decomp1.ch"
                    ;
#line 360 "decomp1.ch"
#line 361 "decomp1.ch"
                if ( ((_inter = (PPTREE)internType,1) && 
#line 361 "decomp1.ch"
                        (NumberTree(_inter) == metachop::TIDENT) &&
#line 361 "decomp1.ch"
                        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 361 "decomp1.ch"
                            (NumberTree(_inter) == metachop::IDENT) &&
#line 361 "decomp1.ch"
                            (!strcmp(Value(SonTree(_inter,1)),"PTREE")) &&
#line 361 "decomp1.ch"
                            1),
#line 361 "decomp1.ch"
                            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 361 "decomp1.ch"
                        1) ) {
#line 361 "decomp1.ch"
#line 362 "decomp1.ch"
                                decomp(type);
#line 362 "decomp1.ch"
                                
#line 362 "decomp1.ch"
#line 363 "decomp1.ch"
                                if ( !((!decl)) ) {
#line 363 "decomp1.ch"
#line 364 "decomp1.ch"
                                                        decomp(decl);
#line 364 "decomp1.ch"
                                                        
#line 364 "decomp1.ch"
#line 365 "decomp1.ch"
                                                        InsertDecElem(AllocString(BrainyValue(decl)));
#line 365 "decomp1.ch"
#line 366 "decomp1.ch"
                                                        
#line 366 "decomp1.ch"
#line 366 "decomp1.ch"
                                                    }
#line 366 "decomp1.ch"
#line 367 "decomp1.ch"
                                
#line 367 "decomp1.ch"
#line 367 "decomp1.ch"
                             } else 
#line 367 "decomp1.ch"
#line 368 "decomp1.ch"
                    return DecompCplus::IntDecomp(paramTree, funcAlone);
                    
#line 368 "decomp1.ch"
                
#line 368 "decomp1.ch"
#line 369 "decomp1.ch"
                
#line 369 "decomp1.ch"
#line 369 "decomp1.ch"
            }
            
#line 369 "decomp1.ch"
#line 370 "decomp1.ch"
            break ;
            
#line 370 "decomp1.ch"
#line 372 "decomp1.ch"
        case metachop::FUNC : 
#line 372 "decomp1.ch"
#line 372 "decomp1.ch"
            (sc=SonTree(paramTree, 1));
#line 372 "decomp1.ch"
            
#line 372 "decomp1.ch"
#line 372 "decomp1.ch"
            (type=SonTree(paramTree, 2));
#line 372 "decomp1.ch"
            
#line 372 "decomp1.ch"
#line 372 "decomp1.ch"
            (declarator=SonTree(paramTree, 3));
#line 372 "decomp1.ch"
            
#line 372 "decomp1.ch"
#line 372 "decomp1.ch"
            (param=SonTree(paramTree, 4));
#line 372 "decomp1.ch"
            
#line 372 "decomp1.ch"
#line 372 "decomp1.ch"
            (range=SonTree(paramTree, 5));
#line 372 "decomp1.ch"
            
#line 372 "decomp1.ch"
#line 372 "decomp1.ch"
            (param_decl=SonTree(paramTree, 6));
#line 372 "decomp1.ch"
            
#line 372 "decomp1.ch"
#line 372 "decomp1.ch"
            (ctor=SonTree(paramTree, 7));
#line 372 "decomp1.ch"
            
#line 372 "decomp1.ch"
#line 372 "decomp1.ch"
            (stat=SonTree(paramTree, 8));
#line 372 "decomp1.ch"
            
#line 372 "decomp1.ch"
#line 372 "decomp1.ch"
        _Case63 : 
#line 372 "decomp1.ch"
#line 372 "decomp1.ch"
            ;
#line 372 "decomp1.ch"
#line 372 "decomp1.ch"
            {
#line 372 "decomp1.ch"
#line 375 "decomp1.ch"
                storeValMax = 0 ;
#line 375 "decomp1.ch"
#line 376 "decomp1.ch"
                retValMax = 0 ;
#line 376 "decomp1.ch"
#line 377 "decomp1.ch"
                stackTreeMax = 0 ;
#line 377 "decomp1.ch"
#line 378 "decomp1.ch"
                theConstructorDump = false ;
#line 378 "decomp1.ch"
#line 379 "decomp1.ch"
                bool    first = true ;
                
#line 379 "decomp1.ch"
#line 380 "decomp1.ch"
                int i = 2 ;
                
#line 380 "decomp1.ch"
#line 381 "decomp1.ch"
                WRITE_START_LINE(paramTree);
#line 381 "decomp1.ch"
#line 382 "decomp1.ch"
                PTREE   oldParamTree = (PTREE)0 ;
#line 382 "decomp1.ch"
                
#line 382 "decomp1.ch"
#line 383 "decomp1.ch"
                PTREE   funcTree = (PTREE)0 ;
#line 383 "decomp1.ch"
                
#line 383 "decomp1.ch"
#line 384 "decomp1.ch"
                int oldLine ;
                
#line 384 "decomp1.ch"
#line 385 "decomp1.ch"
                int oldCompiledLine ;
                
#line 385 "decomp1.ch"
#line 382 "decomp1.ch"
                (oldParamTree=CopyTree(paramTree));
#line 382 "decomp1.ch"
                
#line 382 "decomp1.ch"
#line 383 "decomp1.ch"
                (funcTree=paramTree);
#line 383 "decomp1.ch"
                
#line 383 "decomp1.ch"
#line 388 "decomp1.ch"
                while ( i-- ) {
#line 388 "decomp1.ch"
#line 389 "decomp1.ch"
                                if ( first ) {
#line 389 "decomp1.ch"
#line 390 "decomp1.ch"
                                                isVirtMod = true ;
#line 390 "decomp1.ch"
#line 391 "decomp1.ch"
                                                first = false ;
#line 391 "decomp1.ch"
#line 392 "decomp1.ch"
                                                oldLine = line ;
#line 392 "decomp1.ch"
#line 393 "decomp1.ch"
                                                oldCompiledLine = compiledLine ;
#line 393 "decomp1.ch"
#line 394 "decomp1.ch"
                                                
#line 394 "decomp1.ch"
#line 394 "decomp1.ch"
                                              } else 
#line 394 "decomp1.ch"
                                {
#line 394 "decomp1.ch"
#line 395 "decomp1.ch"
                                    isVirtMod = false ;
#line 395 "decomp1.ch"
#line 396 "decomp1.ch"
                                    (funcTree=oldParamTree);
#line 396 "decomp1.ch"
                                    
#line 396 "decomp1.ch"
#line 397 "decomp1.ch"
                                    ((_inter = (PPTREE)funcTree,1) && 
#line 397 "decomp1.ch"
                                        (NumberTree(_inter) == metachop::FUNC) &&
#line 397 "decomp1.ch"
                                        ((sc=SonTree(_inter,1)),1) &&
#line 397 "decomp1.ch"
                                        ((type=SonTree(_inter,2)),1) &&
#line 397 "decomp1.ch"
                                        ((declarator=SonTree(_inter,3)),1) &&
#line 397 "decomp1.ch"
                                        ((param=SonTree(_inter,4)),1) &&
#line 397 "decomp1.ch"
                                        ((range=SonTree(_inter,5)),1) &&
#line 397 "decomp1.ch"
                                        ((param_decl=SonTree(_inter,6)),1) &&
#line 397 "decomp1.ch"
                                        ((ctor=SonTree(_inter,7)),1) &&
#line 397 "decomp1.ch"
                                        ((stat=SonTree(_inter,8)),1) &&
#line 397 "decomp1.ch"
                                        1);
#line 397 "decomp1.ch"
                                    ;
#line 397 "decomp1.ch"
#line 400 "decomp1.ch"
                                    
                                    PTREE   decl ;
#line 400 "decomp1.ch"
                                    
#line 400 "decomp1.ch"
#line 401 "decomp1.ch"
                                    PTREE   num ;
#line 401 "decomp1.ch"
                                    
#line 401 "decomp1.ch"
#line 402 "decomp1.ch"
                                    PTREE   list ;
#line 402 "decomp1.ch"
                                    
#line 402 "decomp1.ch"
#line 403 "decomp1.ch"
                                    if ( ((_inter = (PPTREE)stat,1) && 
#line 403 "decomp1.ch"
                                            (NumberTree(_inter) == metachop::COMPOUND) &&
#line 403 "decomp1.ch"
                                            ((list=SonTree(_inter,1)),1) &&
#line 403 "decomp1.ch"
                                            1) ) {
#line 403 "decomp1.ch"
#line 404 "decomp1.ch"
                                                    {
#line 404 "decomp1.ch"
                                                        /* [ metachop::DECLARATION
                                                            [ NIL ] 
                                                            [ metachop::TINT ]
                                                            [ LIST 
                                                                [ metachop::IDENT "_nextVal"]
                                                            ]
                                                           ]
#line 404 "decomp1.ch"
                                                        */
#line 404 "decomp1.ch"
                                                        {   ptStackTree = 0 ;
#line 404 "decomp1.ch"
                                                            TheConstructor(stackTree,ptStackTree,-4,metachop::TINT,0,-2,MakeString("_nextVal"),metachop::IDENT,1,-4,LIST,2,metachop::DECLARATION,3,-3) ;
                                                            decl = PopTree ;
#line 404 "decomp1.ch"
                                                        }   }
#line 404 "decomp1.ch"
                                                    
#line 404 "decomp1.ch"
#line 405 "decomp1.ch"
                                                    {
#line 405 "decomp1.ch"
                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 405 "decomp1.ch"
                                                        _ptRes0 = MakeTree(LIST, 2);
#line 405 "decomp1.ch"
                                                        ReplaceTree(_ptRes0, 1, decl);
#line 405 "decomp1.ch"
                                                        ReplaceTree(_ptRes0, 2, list);
#line 405 "decomp1.ch"
                                                        list = _ptRes0;
#line 405 "decomp1.ch"
                                                    }
#line 405 "decomp1.ch"
                                                    
#line 405 "decomp1.ch"
#line 406 "decomp1.ch"
                                                    if ( storeValMax > 0 ) {
#line 406 "decomp1.ch"
#line 407 "decomp1.ch"
                                                                                {
#line 407 "decomp1.ch"
                                                                                    /* [ metachop::DECLARATION
                                                                                        [ NIL ] 
                                                                                        [ metachop::TIDENT [ metachop::IDENT "PPTREE"]]
                                                                                        [ LIST 
                                                                                            [ metachop::TYP_ARRAY
                                                                                                [ metachop::IDENT "_storeVal"]
                                                                                                [ META "meta0"]
                                                                                            ]
                                                                                        ]
                                                                                       ]
#line 407 "decomp1.ch"
                                                                                    */
#line 407 "decomp1.ch"
                                                                                    {   ptStackTree = 0 ;
#line 407 "decomp1.ch"
                                                                                        TheConstructor(stackTree,ptStackTree,-4,-2,MakeString("PPTREE"),metachop::IDENT,1,metachop::TIDENT,1,-2,MakeString("_storeVal"),metachop::IDENT,1,
                                                                                            -2,MakeString("meta0"),META,1,metachop::TYP_ARRAY,2,-4,LIST,2,metachop::DECLARATION,3,-3) ;
                                                                                        decl = PopTree ;
#line 407 "decomp1.ch"
                                                                                    }   {
#line 407 "decomp1.ch"
                                                                                            register PPTREE _inter ;
#line 407 "decomp1.ch"
                                                                                        
#line 407 "decomp1.ch"
#line 407 "decomp1.ch"
                                                                                            PTREE   _Baum0 ;
#line 407 "decomp1.ch"
                                                                                            
#line 407 "decomp1.ch"
#line 407 "decomp1.ch"
                                                                                            {
#line 407 "decomp1.ch"
                                                                                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 407 "decomp1.ch"
                                                                                                _ptRes0 = MakeTree(metachop::INTEGER, 1);
#line 407 "decomp1.ch"
                                                                                                _ptTree0 = StoreRef(PTREE(CompactItoa(storeValMax + 1)));
#line 407 "decomp1.ch"
                                                                                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 407 "decomp1.ch"
                                                                                                _Baum0 = _ptRes0;
#line 407 "decomp1.ch"
                                                                                            }
#line 407 "decomp1.ch"
                                                                                            
#line 407 "decomp1.ch"
#line 407 "decomp1.ch"
                                                                                            MetaRep("meta0", decl, _Baum0);
#line 407 "decomp1.ch"
#line 407 "decomp1.ch"
                                                                                        }
#line 407 "decomp1.ch"
                                                                                }
#line 407 "decomp1.ch"
                                                                                
#line 407 "decomp1.ch"
#line 408 "decomp1.ch"
                                                                                {
#line 408 "decomp1.ch"
                                                                                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 408 "decomp1.ch"
                                                                                    _ptRes0 = MakeTree(LIST, 2);
#line 408 "decomp1.ch"
                                                                                    ReplaceTree(_ptRes0, 1, decl);
#line 408 "decomp1.ch"
                                                                                    ReplaceTree(_ptRes0, 2, list);
#line 408 "decomp1.ch"
                                                                                    list = _ptRes0;
#line 408 "decomp1.ch"
                                                                                }
#line 408 "decomp1.ch"
                                                                                
#line 408 "decomp1.ch"
#line 409 "decomp1.ch"
                                                                                
#line 409 "decomp1.ch"
#line 409 "decomp1.ch"
                                                                             }
#line 409 "decomp1.ch"
#line 410 "decomp1.ch"
                                                    if ( retValMax > 0 ) {
#line 410 "decomp1.ch"
#line 411 "decomp1.ch"
                                                                            {
#line 411 "decomp1.ch"
                                                                                /* [ metachop::DECLARATION
                                                                                    [ NIL ] 
                                                                                    [ metachop::TINT ]
                                                                                    [ LIST 
                                                                                        [ metachop::TYP_ARRAY
                                                                                            [ metachop::IDENT "_retVal"]
                                                                                            [ META "meta0"]
                                                                                        ]
                                                                                    ]
                                                                                   ]
#line 411 "decomp1.ch"
                                                                                */
#line 411 "decomp1.ch"
                                                                                {   ptStackTree = 0 ;
#line 411 "decomp1.ch"
                                                                                    TheConstructor(stackTree,ptStackTree,-4,metachop::TINT,0,-2,MakeString("_retVal"),metachop::IDENT,1,-2,MakeString("meta0"),META,1,metachop::TYP_ARRAY,2,-4,LIST,2,metachop::DECLARATION,3,-3) ;
                                                                                    decl = PopTree ;
#line 411 "decomp1.ch"
                                                                                }   {
#line 411 "decomp1.ch"
                                                                                        register PPTREE _inter ;
#line 411 "decomp1.ch"
                                                                                    
#line 411 "decomp1.ch"
#line 411 "decomp1.ch"
                                                                                        PTREE   _Baum0 ;
#line 411 "decomp1.ch"
                                                                                        
#line 411 "decomp1.ch"
#line 411 "decomp1.ch"
                                                                                        {
#line 411 "decomp1.ch"
                                                                                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 411 "decomp1.ch"
                                                                                            _ptRes0 = MakeTree(metachop::INTEGER, 1);
#line 411 "decomp1.ch"
                                                                                            _ptTree0 = StoreRef(PTREE(CompactItoa(retValMax + 1)));
#line 411 "decomp1.ch"
                                                                                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 411 "decomp1.ch"
                                                                                            _Baum0 = _ptRes0;
#line 411 "decomp1.ch"
                                                                                        }
#line 411 "decomp1.ch"
                                                                                        
#line 411 "decomp1.ch"
#line 411 "decomp1.ch"
                                                                                        MetaRep("meta0", decl, _Baum0);
#line 411 "decomp1.ch"
#line 411 "decomp1.ch"
                                                                                    }
#line 411 "decomp1.ch"
                                                                            }
#line 411 "decomp1.ch"
                                                                            
#line 411 "decomp1.ch"
#line 412 "decomp1.ch"
                                                                            {
#line 412 "decomp1.ch"
                                                                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 412 "decomp1.ch"
                                                                                _ptRes0 = MakeTree(LIST, 2);
#line 412 "decomp1.ch"
                                                                                ReplaceTree(_ptRes0, 1, decl);
#line 412 "decomp1.ch"
                                                                                ReplaceTree(_ptRes0, 2, list);
#line 412 "decomp1.ch"
                                                                                list = _ptRes0;
#line 412 "decomp1.ch"
                                                                            }
#line 412 "decomp1.ch"
                                                                            
#line 412 "decomp1.ch"
#line 413 "decomp1.ch"
                                                                            
#line 413 "decomp1.ch"
#line 413 "decomp1.ch"
                                                                           }
#line 413 "decomp1.ch"
#line 414 "decomp1.ch"
                                                    if ( theConstructorDump ) {
#line 414 "decomp1.ch"
#line 415 "decomp1.ch"
                                                                                {
#line 415 "decomp1.ch"
                                                                                    /* [ metachop::DECLARATION
                                                                                        [ NIL ] 
                                                                                        [ metachop::TIDENT [ metachop::IDENT "PPTREE"]]
                                                                                        [ LIST 
                                                                                            [ metachop::TYP_ARRAY
                                                                                                [ metachop::IDENT "stackTree"]
                                                                                                [ metachop::INTEGER "1024"]
                                                                                            ]
                                                                                        ]
                                                                                       ]
#line 415 "decomp1.ch"
                                                                                    */
#line 415 "decomp1.ch"
                                                                                    {   ptStackTree = 0 ;
#line 415 "decomp1.ch"
                                                                                        TheConstructor(stackTree,ptStackTree,-4,-2,MakeString("PPTREE"),metachop::IDENT,1,metachop::TIDENT,1,-2,MakeString("stackTree"),metachop::IDENT,1,
                                                                                            -2,MakeString("1024"),metachop::INTEGER,1,metachop::TYP_ARRAY,2,-4,LIST,2,metachop::DECLARATION,3,-3) ;
                                                                                        decl = PopTree ;
#line 415 "decomp1.ch"
                                                                                    }   }
#line 415 "decomp1.ch"
                                                                                
#line 415 "decomp1.ch"
#line 416 "decomp1.ch"
                                                                                {
#line 416 "decomp1.ch"
                                                                                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 416 "decomp1.ch"
                                                                                    _ptRes0 = MakeTree(LIST, 2);
#line 416 "decomp1.ch"
                                                                                    ReplaceTree(_ptRes0, 1, decl);
#line 416 "decomp1.ch"
                                                                                    ReplaceTree(_ptRes0, 2, list);
#line 416 "decomp1.ch"
                                                                                    list = _ptRes0;
#line 416 "decomp1.ch"
                                                                                }
#line 416 "decomp1.ch"
                                                                                
#line 416 "decomp1.ch"
#line 417 "decomp1.ch"
                                                                                {
#line 417 "decomp1.ch"
                                                                                    /* [ metachop::DECLARATION
                                                                                        [ NIL ] 
                                                                                        [ metachop::TINT ]
                                                                                        [ LIST 
                                                                                            [ metachop::IDENT "ptStackTree"]
                                                                                        ]
                                                                                       ]
#line 417 "decomp1.ch"
                                                                                    */
#line 417 "decomp1.ch"
                                                                                    {   ptStackTree = 0 ;
#line 417 "decomp1.ch"
                                                                                        TheConstructor(stackTree,ptStackTree,-4,metachop::TINT,0,-2,MakeString("ptStackTree"),metachop::IDENT,1,-4,LIST,2,metachop::DECLARATION,3,-3) ;
                                                                                        decl = PopTree ;
#line 417 "decomp1.ch"
                                                                                    }   }
#line 417 "decomp1.ch"
                                                                                
#line 417 "decomp1.ch"
#line 418 "decomp1.ch"
                                                                                {
#line 418 "decomp1.ch"
                                                                                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 418 "decomp1.ch"
                                                                                    _ptRes0 = MakeTree(LIST, 2);
#line 418 "decomp1.ch"
                                                                                    ReplaceTree(_ptRes0, 1, decl);
#line 418 "decomp1.ch"
                                                                                    ReplaceTree(_ptRes0, 2, list);
#line 418 "decomp1.ch"
                                                                                    list = _ptRes0;
#line 418 "decomp1.ch"
                                                                                }
#line 418 "decomp1.ch"
                                                                                
#line 418 "decomp1.ch"
#line 419 "decomp1.ch"
                                                                                
#line 419 "decomp1.ch"
#line 419 "decomp1.ch"
                                                                               }
#line 419 "decomp1.ch"
#line 420 "decomp1.ch"
                                                    {
#line 420 "decomp1.ch"
                                                        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 420 "decomp1.ch"
                                                        ReplaceTree(stat, 1, list);
#line 420 "decomp1.ch"
                                                    }
#line 420 "decomp1.ch"
                                                    
#line 420 "decomp1.ch"
#line 421 "decomp1.ch"
                                                    
#line 421 "decomp1.ch"
#line 421 "decomp1.ch"
                                                 }
#line 421 "decomp1.ch"
#line 422 "decomp1.ch"
                                    line = oldLine ;
#line 422 "decomp1.ch"
#line 423 "decomp1.ch"
                                    compiledLine = oldCompiledLine ;
#line 423 "decomp1.ch"
#line 424 "decomp1.ch"
                                    
#line 424 "decomp1.ch"
#line 424 "decomp1.ch"
                                }
                                
#line 424 "decomp1.ch"
#line 425 "decomp1.ch"
                                dec_function(funcTree, sc, type, declarator, param, param_decl, stat);
#line 425 "decomp1.ch"
#line 426 "decomp1.ch"
                                (postComment=DecompFunction(funcTree, funcAlone));
#line 426 "decomp1.ch"
                                
#line 426 "decomp1.ch"
#line 427 "decomp1.ch"
                                DumpFunction();
#line 427 "decomp1.ch"
#line 428 "decomp1.ch"
                                FuncFree();
#line 428 "decomp1.ch"
#line 429 "decomp1.ch"
                                if ( nameDefine ) {
#line 429 "decomp1.ch"
#line 430 "decomp1.ch"
                                                    free(nameDefine);
#line 430 "decomp1.ch"
#line 431 "decomp1.ch"
                                                    nameDefine = 0 ;
#line 431 "decomp1.ch"
#line 432 "decomp1.ch"
                                                    
#line 432 "decomp1.ch"
#line 432 "decomp1.ch"
                                                   }
#line 432 "decomp1.ch"
#line 433 "decomp1.ch"
                                
#line 433 "decomp1.ch"
#line 433 "decomp1.ch"
                               }
#line 433 "decomp1.ch"
#line 434 "decomp1.ch"
                inFunction = 0 ;
#line 434 "decomp1.ch"
#line 435 "decomp1.ch"
                
#line 435 "decomp1.ch"
#line 435 "decomp1.ch"
            }
            
#line 435 "decomp1.ch"
#line 436 "decomp1.ch"
            break ;
            
#line 436 "decomp1.ch"
#line 438 "decomp1.ch"
        case metachop::AFF : 
#line 438 "decomp1.ch"
#line 438 "decomp1.ch"
            (exp1=SonTree(paramTree, 1));
#line 438 "decomp1.ch"
            
#line 438 "decomp1.ch"
#line 438 "decomp1.ch"
            (exp2=SonTree(paramTree, 2));
#line 438 "decomp1.ch"
            
#line 438 "decomp1.ch"
#line 438 "decomp1.ch"
        _Case64 : 
#line 438 "decomp1.ch"
#line 438 "decomp1.ch"
            ;
#line 438 "decomp1.ch"
#line 438 "decomp1.ch"
            statementf = 0 ;
#line 438 "decomp1.ch"
#line 439 "decomp1.ch"
            if ( !(((_inter = (PPTREE)exp1,1) && 
#line 439 "decomp1.ch"
                        (NumberTree(_inter) == metachop::IDENT) &&
#line 439 "decomp1.ch"
                        1) && IsDecDecElem(BrainyValue(exp1))) ) {
#line 439 "decomp1.ch"
#line 442 "decomp1.ch"
                                                                    statementf = oldStatement ;
#line 442 "decomp1.ch"
#line 443 "decomp1.ch"
                                                                    return DecompCplus::IntDecomp(paramTree, funcAlone);
                                                                    
#line 443 "decomp1.ch"
#line 444 "decomp1.ch"
                                                                    
#line 444 "decomp1.ch"
#line 444 "decomp1.ch"
                                                                   } else 
#line 444 "decomp1.ch"
            if ( ((_inter = (PPTREE)exp2,1) && 
#line 444 "decomp1.ch"
                    (NumberTree(_inter) == metachop::PARSE) &&
#line 444 "decomp1.ch"
                    ((son=SonTree(_inter,1)),1) &&
#line 444 "decomp1.ch"
                    1) ) {
#line 444 "decomp1.ch"
#line 445 "decomp1.ch"
                            ((_inter = (PPTREE)son,1) && 
#line 445 "decomp1.ch"
                                ((name1=SonTree(_inter,1)),1) &&
#line 445 "decomp1.ch"
                                ((son=SonTree(_inter,2)),1) &&
#line 445 "decomp1.ch"
                                1);
#line 445 "decomp1.ch"
                            ;
#line 445 "decomp1.ch"
#line 447 "decomp1.ch"
                            {
#line 447 "decomp1.ch"
#line 447 "decomp1.ch"
                                MakeTreeGenDir(son, interString = AllocString(BrainyValue(exp1)), 0);
#line 447 "decomp1.ch"
#line 448 "decomp1.ch"
                                free(interString);
#line 448 "decomp1.ch"
#line 449 "decomp1.ch"
                                
#line 449 "decomp1.ch"
#line 449 "decomp1.ch"
                            }
                            
#line 449 "decomp1.ch"
#line 450 "decomp1.ch"
                            
#line 450 "decomp1.ch"
#line 450 "decomp1.ch"
                         } else 
#line 450 "decomp1.ch"
            {
#line 450 "decomp1.ch"
#line 451 "decomp1.ch"
                if ( ToSwitcher(exp2) ) {
#line 451 "decomp1.ch"
#line 452 "decomp1.ch"
                                            SwitcherTop(paramTree, interString = AllocString(BrainyValue(exp1)), 0);
#line 452 "decomp1.ch"
#line 453 "decomp1.ch"
                                            free(interString);
#line 453 "decomp1.ch"
#line 454 "decomp1.ch"
                                            
#line 454 "decomp1.ch"
#line 454 "decomp1.ch"
                                          } else 
#line 454 "decomp1.ch"
                if ( ((_inter = (PPTREE)exp2,1) && 
#line 454 "decomp1.ch"
                        (NumberTree(_inter) == metachop::NIL) &&
#line 454 "decomp1.ch"
                        1) ) {
#line 454 "decomp1.ch"
#line 455 "decomp1.ch"
                                decomp(exp1);
#line 455 "decomp1.ch"
                                
#line 455 "decomp1.ch"
#line 455 "decomp1.ch"
                                PrintString(" = (PPTREE) 0 ");
#line 455 "decomp1.ch"
#line 456 "decomp1.ch"
                                if ( oldStatement ) {
#line 456 "decomp1.ch"
#line 457 "decomp1.ch"
                                                        PrintString(";");
#line 457 "decomp1.ch"
#line 457 "decomp1.ch"
                                                        LNewLine(1);
#line 457 "decomp1.ch"
                                                        
#line 457 "decomp1.ch"
#line 458 "decomp1.ch"
                                                        
#line 458 "decomp1.ch"
#line 458 "decomp1.ch"
                                                     }
#line 458 "decomp1.ch"
#line 459 "decomp1.ch"
                                
#line 459 "decomp1.ch"
#line 459 "decomp1.ch"
                             } else 
#line 459 "decomp1.ch"
                {
#line 459 "decomp1.ch"
#line 460 "decomp1.ch"
                    statementf = 0 ;
#line 460 "decomp1.ch"
#line 461 "decomp1.ch"
                    if ( strcmp(BrainyValue(exp1), "for_elem") ) {
#line 461 "decomp1.ch"
#line 462 "decomp1.ch"
                                                                        PrintString("(");
#line 462 "decomp1.ch"
#line 462 "decomp1.ch"
                                                                        decomp(exp1);
#line 462 "decomp1.ch"
                                                                        
#line 462 "decomp1.ch"
#line 462 "decomp1.ch"
                                                                        PrintString("=");
#line 462 "decomp1.ch"
#line 462 "decomp1.ch"
                                                                        decomp(exp2);
#line 462 "decomp1.ch"
                                                                        
#line 462 "decomp1.ch"
#line 462 "decomp1.ch"
                                                                        PrintString(")");
#line 462 "decomp1.ch"
#line 463 "decomp1.ch"
                                                                        
#line 463 "decomp1.ch"
#line 463 "decomp1.ch"
                                                                    } else 
#line 463 "decomp1.ch"
                    {
#line 463 "decomp1.ch"
#line 466 "decomp1.ch"
                        statementf = oldStatement ;
#line 466 "decomp1.ch"
#line 467 "decomp1.ch"
                        return DecompCplus::IntDecomp(paramTree, funcAlone);
                        
#line 467 "decomp1.ch"
#line 468 "decomp1.ch"
                        
#line 468 "decomp1.ch"
#line 468 "decomp1.ch"
                    }
                    
#line 468 "decomp1.ch"
#line 469 "decomp1.ch"
                    if ( oldStatement ) {
#line 469 "decomp1.ch"
#line 470 "decomp1.ch"
                                            PrintString(";");
#line 470 "decomp1.ch"
#line 470 "decomp1.ch"
                                            LNewLine(1);
#line 470 "decomp1.ch"
                                            
#line 470 "decomp1.ch"
#line 471 "decomp1.ch"
                                            
#line 471 "decomp1.ch"
#line 471 "decomp1.ch"
                                         }
#line 471 "decomp1.ch"
#line 472 "decomp1.ch"
                    
#line 472 "decomp1.ch"
#line 472 "decomp1.ch"
                }
                
#line 472 "decomp1.ch"
#line 473 "decomp1.ch"
                
#line 473 "decomp1.ch"
#line 473 "decomp1.ch"
            }
            
#line 473 "decomp1.ch"
#line 474 "decomp1.ch"
            break ;
            
#line 474 "decomp1.ch"
#line 476 "decomp1.ch"
        case metachop::MUL_AFF : 
#line 476 "decomp1.ch"
#line 476 "decomp1.ch"
            (exp1=SonTree(paramTree, 1));
#line 476 "decomp1.ch"
            
#line 476 "decomp1.ch"
#line 476 "decomp1.ch"
            (exp2=SonTree(paramTree, 2));
#line 476 "decomp1.ch"
            
#line 476 "decomp1.ch"
#line 476 "decomp1.ch"
        _Case65 : 
#line 476 "decomp1.ch"
#line 476 "decomp1.ch"
            ;
#line 476 "decomp1.ch"
#line 476 "decomp1.ch"
            statementf = 0 ;
#line 476 "decomp1.ch"
#line 477 "decomp1.ch"
            if ( !(((_inter = (PPTREE)exp1,1) && 
#line 477 "decomp1.ch"
                        (NumberTree(_inter) == metachop::IDENT) &&
#line 477 "decomp1.ch"
                        1) && IsDecDecElem(BrainyValue(exp1))) ) {
#line 477 "decomp1.ch"
#line 480 "decomp1.ch"
                                                                    statementf = oldStatement ;
#line 480 "decomp1.ch"
#line 481 "decomp1.ch"
                                                                    return DecompCplus::IntDecomp(paramTree, funcAlone);
                                                                    
#line 481 "decomp1.ch"
#line 482 "decomp1.ch"
                                                                    
#line 482 "decomp1.ch"
#line 482 "decomp1.ch"
                                                                   } else 
#line 482 "decomp1.ch"
#line 483 "decomp1.ch"
                SwitcherTop(paramTree, (char *)0, 0);
#line 483 "decomp1.ch"
            
#line 483 "decomp1.ch"
#line 484 "decomp1.ch"
            break ;
            
#line 484 "decomp1.ch"
#line 486 "decomp1.ch"
        case metachop::EXPO_AFF : 
#line 486 "decomp1.ch"
#line 486 "decomp1.ch"
            (exp1=SonTree(paramTree, 1));
#line 486 "decomp1.ch"
            
#line 486 "decomp1.ch"
#line 486 "decomp1.ch"
            (exp2=SonTree(paramTree, 2));
#line 486 "decomp1.ch"
            
#line 486 "decomp1.ch"
#line 486 "decomp1.ch"
        _Case66 : 
#line 486 "decomp1.ch"
#line 486 "decomp1.ch"
            ;
#line 486 "decomp1.ch"
#line 486 "decomp1.ch"
            statementf = 0 ;
#line 486 "decomp1.ch"
#line 487 "decomp1.ch"
            SwitcherTop(paramTree, (char *)0, 0);
#line 487 "decomp1.ch"
#line 488 "decomp1.ch"
            break ;
            
#line 488 "decomp1.ch"
#line 490 "decomp1.ch"
        case metachop::PLU_AFF : 
#line 490 "decomp1.ch"
#line 490 "decomp1.ch"
            (exp1=SonTree(paramTree, 1));
#line 490 "decomp1.ch"
            
#line 490 "decomp1.ch"
#line 490 "decomp1.ch"
            (exp2=SonTree(paramTree, 2));
#line 490 "decomp1.ch"
            
#line 490 "decomp1.ch"
#line 490 "decomp1.ch"
        _Case67 : 
#line 490 "decomp1.ch"
#line 490 "decomp1.ch"
            ;
#line 490 "decomp1.ch"
#line 490 "decomp1.ch"
            statementf = 0 ;
#line 490 "decomp1.ch"
#line 491 "decomp1.ch"
            if ( !(((_inter = (PPTREE)exp1,1) && 
#line 491 "decomp1.ch"
                        (NumberTree(_inter) == metachop::IDENT) &&
#line 491 "decomp1.ch"
                        1) && IsDecDecElem(BrainyValue(exp1))) ) {
#line 491 "decomp1.ch"
#line 494 "decomp1.ch"
                                                                    statementf = oldStatement ;
#line 494 "decomp1.ch"
#line 495 "decomp1.ch"
                                                                    return DecompCplus::IntDecomp(paramTree, funcAlone);
                                                                    
#line 495 "decomp1.ch"
#line 496 "decomp1.ch"
                                                                    
#line 496 "decomp1.ch"
#line 496 "decomp1.ch"
                                                                   } else 
#line 496 "decomp1.ch"
#line 497 "decomp1.ch"
                SwitcherTop(paramTree, (char *)0, 0);
#line 497 "decomp1.ch"
            
#line 497 "decomp1.ch"
#line 498 "decomp1.ch"
            break ;
            
#line 498 "decomp1.ch"
#line 500 "decomp1.ch"
        case metachop::LXOR : 
#line 500 "decomp1.ch"
#line 500 "decomp1.ch"
            (exp1=SonTree(paramTree, 1));
#line 500 "decomp1.ch"
            
#line 500 "decomp1.ch"
#line 500 "decomp1.ch"
            (exp2=SonTree(paramTree, 2));
#line 500 "decomp1.ch"
            
#line 500 "decomp1.ch"
#line 500 "decomp1.ch"
        _Case68 : 
#line 500 "decomp1.ch"
#line 500 "decomp1.ch"
            ;
#line 500 "decomp1.ch"
#line 500 "decomp1.ch"
            (exp=exp1);
#line 500 "decomp1.ch"
            
#line 500 "decomp1.ch"
#line 501 "decomp1.ch"
            while ( ((_inter = (PPTREE)exp,1) && 
#line 501 "decomp1.ch"
                        (NumberTree(_inter) == metachop::LXOR) &&
#line 501 "decomp1.ch"
                        ((exp=SonTree(_inter,1)),1) &&
#line 501 "decomp1.ch"
                        1) || ((_inter = (PPTREE)exp,1) && 
#line 501 "decomp1.ch"
                                    (NumberTree(_inter) == metachop::EXP) &&
#line 501 "decomp1.ch"
                                    ((exp=SonTree(_inter,1)),1) &&
#line 501 "decomp1.ch"
                                    1) ) 
#line 501 "decomp1.ch"
#line 502 "decomp1.ch"
                ;
#line 502 "decomp1.ch"
#line 503 "decomp1.ch"
            if ( exp2 && !(((_inter = (PPTREE)exp,1) && 
#line 503 "decomp1.ch"
                                    (NumberTree(_inter) == metachop::IDENT) &&
#line 503 "decomp1.ch"
                                    1) && IsDecDecElem(BrainyValue(exp))) ) {
#line 503 "decomp1.ch"
#line 504 "decomp1.ch"
                                                                                return DecompCplus::IntDecomp(paramTree, funcAlone);
                                                                                
#line 504 "decomp1.ch"
#line 505 "decomp1.ch"
                                                                                
#line 505 "decomp1.ch"
#line 505 "decomp1.ch"
                                                                              } else 
#line 505 "decomp1.ch"
            {
#line 505 "decomp1.ch"
#line 506 "decomp1.ch"
                if ( ((_inter = (PPTREE)exp2,1) && 
#line 506 "decomp1.ch"
                        (NumberTree(_inter) == metachop::INTEGER) &&
#line 506 "decomp1.ch"
                        1) || ((_inter = (PPTREE)exp2,1) && 
#line 506 "decomp1.ch"
                                    (NumberTree(_inter) == metachop::NEG) &&
#line 506 "decomp1.ch"
                                    1) ) {
#line 506 "decomp1.ch"
#line 507 "decomp1.ch"
                                            PrintString("NFatherTree(");
#line 507 "decomp1.ch"
#line 507 "decomp1.ch"
                                            decomp(exp1);
#line 507 "decomp1.ch"
                                            
#line 507 "decomp1.ch"
#line 507 "decomp1.ch"
                                            PrintString(",");
#line 507 "decomp1.ch"
#line 507 "decomp1.ch"
                                            decomp(exp2);
#line 507 "decomp1.ch"
                                            
#line 507 "decomp1.ch"
#line 507 "decomp1.ch"
                                            PrintString(")");
#line 507 "decomp1.ch"
#line 508 "decomp1.ch"
                                            
#line 508 "decomp1.ch"
#line 508 "decomp1.ch"
                                         } else 
#line 508 "decomp1.ch"
                if ( ((_inter = (PPTREE)exp2,1) && 
#line 508 "decomp1.ch"
                        (NumberTree(_inter) == metachop::NODE_TREE) &&
#line 508 "decomp1.ch"
                        1) || ((_inter = (PPTREE)exp2,1) && 
#line 508 "decomp1.ch"
                                    (NumberTree(_inter) == metachop::NOT) &&
#line 508 "decomp1.ch"
                                    1) ) {
#line 508 "decomp1.ch"
#line 509 "decomp1.ch"
                                            PrintString("SFatherTree(");
#line 509 "decomp1.ch"
#line 509 "decomp1.ch"
                                            decomp(exp1);
#line 509 "decomp1.ch"
                                            
#line 509 "decomp1.ch"
#line 509 "decomp1.ch"
                                            PrintString(",");
#line 509 "decomp1.ch"
#line 510 "decomp1.ch"
                                            if ( ((_inter = (PPTREE)exp2,1) && 
#line 510 "decomp1.ch"
                                                    (NumberTree(_inter) == metachop::NOT) &&
#line 510 "decomp1.ch"
                                                    1) ) 
#line 510 "decomp1.ch"
#line 511 "decomp1.ch"
                                                PrintString("-1 -");
#line 511 "decomp1.ch"
#line 512 "decomp1.ch"
                                            PTREE   son ;
#line 512 "decomp1.ch"
                                            
#line 512 "decomp1.ch"
#line 513 "decomp1.ch"
                                            ((_inter = (PPTREE)exp2,1) && 
#line 513 "decomp1.ch"
                                                (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 513 "decomp1.ch"
                                                    ((son=SonTree(_inter,1)),1) &&
#line 513 "decomp1.ch"
                                                    1),
#line 513 "decomp1.ch"
                                                    (_inter=_storeVal[1],1),_retVal[1]) &&
#line 513 "decomp1.ch"
                                                1);
#line 513 "decomp1.ch"
                                            ;
#line 513 "decomp1.ch"
#line 514 "decomp1.ch"
                                            if ( ((_inter = (PPTREE)son,1) && 
#line 514 "decomp1.ch"
                                                    (NumberTree(_inter) == metachop::QUALIFIED) &&
#line 514 "decomp1.ch"
                                                    1) ) {
#line 514 "decomp1.ch"
#line 515 "decomp1.ch"
                                                            WriteString(Value(son [1]));
#line 515 "decomp1.ch"
#line 515 "decomp1.ch"
                                                            WriteString("::");
#line 515 "decomp1.ch"
#line 515 "decomp1.ch"
                                                            WriteString(Value(son [2]));
#line 515 "decomp1.ch"
#line 516 "decomp1.ch"
                                                            
#line 516 "decomp1.ch"
#line 516 "decomp1.ch"
                                                         } else 
#line 516 "decomp1.ch"
                                            {
#line 516 "decomp1.ch"
#line 517 "decomp1.ch"
                                                if ( cplusGen ) {
#line 517 "decomp1.ch"
#line 518 "decomp1.ch"
                                                                    WriteString(NameOfNodePlus(Value(exp2)));
#line 518 "decomp1.ch"
#line 519 "decomp1.ch"
                                                                    
#line 519 "decomp1.ch"
#line 519 "decomp1.ch"
                                                                 } else 
#line 519 "decomp1.ch"
                                                {
#line 519 "decomp1.ch"
#line 520 "decomp1.ch"
                                                    WriteString(NameOfNode(Value(exp2)));
#line 520 "decomp1.ch"
#line 521 "decomp1.ch"
                                                    
#line 521 "decomp1.ch"
#line 521 "decomp1.ch"
                                                }
                                                
#line 521 "decomp1.ch"
#line 522 "decomp1.ch"
                                                
#line 522 "decomp1.ch"
#line 522 "decomp1.ch"
                                            }
                                            
#line 522 "decomp1.ch"
#line 523 "decomp1.ch"
                                            PrintString(")");
#line 523 "decomp1.ch"
#line 524 "decomp1.ch"
                                            
#line 524 "decomp1.ch"
#line 524 "decomp1.ch"
                                         } else 
#line 524 "decomp1.ch"
                if ( !exp2 ) {
#line 524 "decomp1.ch"
#line 525 "decomp1.ch"
                                PrintString("FatherTree(");
#line 525 "decomp1.ch"
#line 525 "decomp1.ch"
                                decomp(exp1);
#line 525 "decomp1.ch"
                                
#line 525 "decomp1.ch"
#line 525 "decomp1.ch"
                                PrintString(")");
#line 525 "decomp1.ch"
#line 526 "decomp1.ch"
                                
#line 526 "decomp1.ch"
#line 526 "decomp1.ch"
                               }
#line 526 "decomp1.ch"
#line 527 "decomp1.ch"
                
#line 527 "decomp1.ch"
#line 527 "decomp1.ch"
            }
            
#line 527 "decomp1.ch"
#line 528 "decomp1.ch"
            break ;
            
#line 528 "decomp1.ch"
#line 530 "decomp1.ch"
        case metachop::EQU : 
#line 530 "decomp1.ch"
#line 530 "decomp1.ch"
            (exp1=SonTree(paramTree, 1));
#line 530 "decomp1.ch"
            
#line 530 "decomp1.ch"
#line 530 "decomp1.ch"
            (exp2=SonTree(paramTree, 2));
#line 530 "decomp1.ch"
            
#line 530 "decomp1.ch"
#line 530 "decomp1.ch"
        _Case69 : 
#line 530 "decomp1.ch"
#line 530 "decomp1.ch"
            ;
#line 530 "decomp1.ch"
#line 530 "decomp1.ch"
            (param=exp2);
#line 530 "decomp1.ch"
            
#line 530 "decomp1.ch"
#line 531 "decomp1.ch"
            while ( ((_inter = (PPTREE)param,1) && 
#line 531 "decomp1.ch"
                        (NumberTree(_inter) == metachop::EXP) &&
#line 531 "decomp1.ch"
                        ((param=SonTree(_inter,1)),1) &&
#line 531 "decomp1.ch"
                        1) ) 
#line 531 "decomp1.ch"
#line 532 "decomp1.ch"
                ;
#line 532 "decomp1.ch"
#line 533 "decomp1.ch"
            while ( ((_inter = (PPTREE)exp1,1) && 
#line 533 "decomp1.ch"
                        (NumberTree(_inter) == metachop::EXP) &&
#line 533 "decomp1.ch"
                        ((exp1=SonTree(_inter,1)),1) &&
#line 533 "decomp1.ch"
                        1) ) 
#line 533 "decomp1.ch"
#line 534 "decomp1.ch"
                ;
#line 534 "decomp1.ch"
#line 535 "decomp1.ch"
            while ( ((_inter = (PPTREE)param,1) && 
#line 535 "decomp1.ch"
                        (NumberTree(_inter) == metachop::PLU_AFF) &&
#line 535 "decomp1.ch"
                        ((param=SonTree(_inter,1)),1) &&
#line 535 "decomp1.ch"
                        1) || ((_inter = (PPTREE)param,1) && 
#line 535 "decomp1.ch"
                                    (NumberTree(_inter) == metachop::EXPO_AFF) &&
#line 535 "decomp1.ch"
                                    ((param=SonTree(_inter,2)),1) &&
#line 535 "decomp1.ch"
                                    1) || ((_inter = (PPTREE)param,1) && 
#line 535 "decomp1.ch"
                                                (NumberTree(_inter) == metachop::MUL_AFF) &&
#line 535 "decomp1.ch"
                                                ((param=SonTree(_inter,2)),1) &&
#line 535 "decomp1.ch"
                                                1) || ((_inter = (PPTREE)param,1) && 
#line 535 "decomp1.ch"
                                                            (NumberTree(_inter) == metachop::AFF) &&
#line 535 "decomp1.ch"
                                                            ((param=SonTree(_inter,2)),1) &&
#line 535 "decomp1.ch"
                                                            1) ) 
#line 535 "decomp1.ch"
#line 536 "decomp1.ch"
                ;
#line 536 "decomp1.ch"
#line 537 "decomp1.ch"
            if ( !(((_inter = (PPTREE)param,1) && 
#line 537 "decomp1.ch"
                        (NumberTree(_inter) == metachop::NODE_TREE) &&
#line 537 "decomp1.ch"
                        1) || ((_inter = (PPTREE)param,1) && 
#line 537 "decomp1.ch"
                                    (NumberTree(_inter) == metachop::NIL) &&
#line 537 "decomp1.ch"
                                    1) || ((_inter = (PPTREE)param,1) && 
#line 537 "decomp1.ch"
                                                (NumberTree(_inter) == metachop::NODE_LIST) &&
#line 537 "decomp1.ch"
                                                1)) ) {
#line 537 "decomp1.ch"
#line 538 "decomp1.ch"
                                                        return DecompCplus::IntDecomp(paramTree, funcAlone);
                                                        
#line 538 "decomp1.ch"
#line 539 "decomp1.ch"
                                                        
#line 539 "decomp1.ch"
#line 539 "decomp1.ch"
                                                      } else 
#line 539 "decomp1.ch"
            {
#line 539 "decomp1.ch"
#line 540 "decomp1.ch"
                ((_inter = (PPTREE)paramTree,1) && 
#line 540 "decomp1.ch"
                    ((ident=SonTree(_inter,1)),1) &&
#line 540 "decomp1.ch"
                    ((stat=SonTree(_inter,2)),1) &&
#line 540 "decomp1.ch"
                    1);
#line 540 "decomp1.ch"
                ;
#line 540 "decomp1.ch"
#line 541 "decomp1.ch"
                while ( ((_inter = (PPTREE)ident,1) && 
#line 541 "decomp1.ch"
                            (NumberTree(_inter) == metachop::EXP) &&
#line 541 "decomp1.ch"
                            ((ident=SonTree(_inter,1)),1) &&
#line 541 "decomp1.ch"
                            1) ) 
#line 541 "decomp1.ch"
#line 542 "decomp1.ch"
                    ;
#line 542 "decomp1.ch"
#line 543 "decomp1.ch"
                goto test ;
                
#line 543 "decomp1.ch"
#line 544 "decomp1.ch"
                
#line 544 "decomp1.ch"
#line 544 "decomp1.ch"
            }
            
#line 544 "decomp1.ch"
#line 545 "decomp1.ch"
            break ;
            
#line 545 "decomp1.ch"
#line 547 "decomp1.ch"
        case metachop::NEQU : 
#line 547 "decomp1.ch"
#line 547 "decomp1.ch"
            (exp1=SonTree(paramTree, 1));
#line 547 "decomp1.ch"
            
#line 547 "decomp1.ch"
#line 547 "decomp1.ch"
            (exp2=SonTree(paramTree, 2));
#line 547 "decomp1.ch"
            
#line 547 "decomp1.ch"
#line 547 "decomp1.ch"
        _Case70 : 
#line 547 "decomp1.ch"
#line 547 "decomp1.ch"
            ;
#line 547 "decomp1.ch"
#line 547 "decomp1.ch"
            inDiff = 1 ;
#line 547 "decomp1.ch"
#line 548 "decomp1.ch"
            (param=exp2);
#line 548 "decomp1.ch"
            
#line 548 "decomp1.ch"
#line 549 "decomp1.ch"
            while ( ((_inter = (PPTREE)param,1) && 
#line 549 "decomp1.ch"
                        (NumberTree(_inter) == metachop::EXP) &&
#line 549 "decomp1.ch"
                        ((param=SonTree(_inter,1)),1) &&
#line 549 "decomp1.ch"
                        1) ) 
#line 549 "decomp1.ch"
#line 550 "decomp1.ch"
                ;
#line 550 "decomp1.ch"
#line 551 "decomp1.ch"
            while ( ((_inter = (PPTREE)exp1,1) && 
#line 551 "decomp1.ch"
                        (NumberTree(_inter) == metachop::EXP) &&
#line 551 "decomp1.ch"
                        ((exp1=SonTree(_inter,1)),1) &&
#line 551 "decomp1.ch"
                        1) ) 
#line 551 "decomp1.ch"
#line 552 "decomp1.ch"
                ;
#line 552 "decomp1.ch"
#line 553 "decomp1.ch"
            while ( ((_inter = (PPTREE)param,1) && 
#line 553 "decomp1.ch"
                        (NumberTree(_inter) == metachop::PLU_AFF) &&
#line 553 "decomp1.ch"
                        ((param=SonTree(_inter,1)),1) &&
#line 553 "decomp1.ch"
                        1) || ((_inter = (PPTREE)param,1) && 
#line 553 "decomp1.ch"
                                    (NumberTree(_inter) == metachop::EXPO_AFF) &&
#line 553 "decomp1.ch"
                                    ((param=SonTree(_inter,1)),1) &&
#line 553 "decomp1.ch"
                                    1) || ((_inter = (PPTREE)param,1) && 
#line 553 "decomp1.ch"
                                                (NumberTree(_inter) == metachop::MUL_AFF) &&
#line 553 "decomp1.ch"
                                                ((param=SonTree(_inter,1)),1) &&
#line 553 "decomp1.ch"
                                                1) || ((_inter = (PPTREE)param,1) && 
#line 553 "decomp1.ch"
                                                            (NumberTree(_inter) == metachop::AFF) &&
#line 553 "decomp1.ch"
                                                            ((param=SonTree(_inter,1)),1) &&
#line 553 "decomp1.ch"
                                                            1) ) 
#line 553 "decomp1.ch"
#line 554 "decomp1.ch"
                ;
#line 554 "decomp1.ch"
#line 555 "decomp1.ch"
            if ( !(((_inter = (PPTREE)param,1) && 
#line 555 "decomp1.ch"
                        (NumberTree(_inter) == metachop::NODE_TREE) &&
#line 555 "decomp1.ch"
                        1) || ((_inter = (PPTREE)param,1) && 
#line 555 "decomp1.ch"
                                    (NumberTree(_inter) == metachop::NIL) &&
#line 555 "decomp1.ch"
                                    1) || ((_inter = (PPTREE)param,1) && 
#line 555 "decomp1.ch"
                                                (NumberTree(_inter) == metachop::NODE_LIST) &&
#line 555 "decomp1.ch"
                                                1)) ) {
#line 555 "decomp1.ch"
#line 556 "decomp1.ch"
                                                        return DecompCplus::IntDecomp(paramTree, funcAlone);
                                                        
#line 556 "decomp1.ch"
#line 557 "decomp1.ch"
                                                        
#line 557 "decomp1.ch"
#line 557 "decomp1.ch"
                                                      } else 
#line 557 "decomp1.ch"
            {
#line 557 "decomp1.ch"
#line 558 "decomp1.ch"
                ((_inter = (PPTREE)paramTree,1) && 
#line 558 "decomp1.ch"
                    ((ident=SonTree(_inter,1)),1) &&
#line 558 "decomp1.ch"
                    ((stat=SonTree(_inter,2)),1) &&
#line 558 "decomp1.ch"
                    1);
#line 558 "decomp1.ch"
                ;
#line 558 "decomp1.ch"
#line 559 "decomp1.ch"
                while ( ((_inter = (PPTREE)ident,1) && 
#line 559 "decomp1.ch"
                            (NumberTree(_inter) == metachop::EXP) &&
#line 559 "decomp1.ch"
                            ((ident=SonTree(_inter,1)),1) &&
#line 559 "decomp1.ch"
                            1) ) 
#line 559 "decomp1.ch"
#line 560 "decomp1.ch"
                    ;
#line 560 "decomp1.ch"
#line 561 "decomp1.ch"
                goto test ;
                
#line 561 "decomp1.ch"
#line 562 "decomp1.ch"
                
#line 562 "decomp1.ch"
#line 562 "decomp1.ch"
            }
            
#line 562 "decomp1.ch"
#line 563 "decomp1.ch"
            break ;
            
#line 563 "decomp1.ch"
#line 564 "decomp1.ch"
        test : 
#line 564 "decomp1.ch"
#line 565 "decomp1.ch"
            condDesign = 1 ;
#line 565 "decomp1.ch"
#line 566 "decomp1.ch"
            i = 0 ;
#line 566 "decomp1.ch"
#line 567 "decomp1.ch"
            switch ( NumberTree(ident) ) {
#line 567 "decomp1.ch"
#line 569 "decomp1.ch"
                case metachop::LXOR : 
#line 569 "decomp1.ch"
#line 569 "decomp1.ch"
                _Case99 : 
#line 569 "decomp1.ch"
#line 569 "decomp1.ch"
                    ;
#line 569 "decomp1.ch"
#line 569 "decomp1.ch"
                    PrintString("( _inter = ");
#line 569 "decomp1.ch"
#line 569 "decomp1.ch"
                    LNewLine(1);
#line 569 "decomp1.ch"
                    
#line 569 "decomp1.ch"
#line 570 "decomp1.ch"
                    Tab();
#line 570 "decomp1.ch"
                    
#line 570 "decomp1.ch"
#line 570 "decomp1.ch"
                    decomp(ident);
#line 570 "decomp1.ch"
                    
#line 570 "decomp1.ch"
#line 570 "decomp1.ch"
                    PrintString(",");
#line 570 "decomp1.ch"
#line 571 "decomp1.ch"
                    ptCond = AllocString("_inter");
#line 571 "decomp1.ch"
#line 572 "decomp1.ch"
                    break ;
                    
#line 572 "decomp1.ch"
#line 574 "decomp1.ch"
                case metachop::IDENT : 
#line 574 "decomp1.ch"
#line 574 "decomp1.ch"
                _Case100 : 
#line 574 "decomp1.ch"
#line 574 "decomp1.ch"
                    ;
#line 574 "decomp1.ch"
#line 574 "decomp1.ch"
                    ptCond = AllocString(BrainyValue(ident));
#line 574 "decomp1.ch"
#line 575 "decomp1.ch"
                    break ;
                    
#line 575 "decomp1.ch"
#line 577 "decomp1.ch"
                default : 
#line 577 "decomp1.ch"
#line 577 "decomp1.ch"
                _Case101 : 
#line 577 "decomp1.ch"
#line 577 "decomp1.ch"
                    ;
#line 577 "decomp1.ch"
#line 577 "decomp1.ch"
                    ptCond = AllocString("");
#line 577 "decomp1.ch"
#line 578 "decomp1.ch"
                    break ;
                    
#line 578 "decomp1.ch"
            }
#line 578 "decomp1.ch"
            
#line 578 "decomp1.ch"
#line 580 "decomp1.ch"
            if ( ((_inter = (PPTREE)stat,1) && 
#line 580 "decomp1.ch"
                    (NumberTree(_inter) == metachop::IDENT) &&
#line 580 "decomp1.ch"
                    ((ident1=SonTree(_inter,1)),1) &&
#line 580 "decomp1.ch"
                    1) ) {
#line 580 "decomp1.ch"
#line 581 "decomp1.ch"
                            if ( inDiff ) 
#line 581 "decomp1.ch"
#line 582 "decomp1.ch"
                                PrintString("!");
#line 582 "decomp1.ch"
#line 583 "decomp1.ch"
                            DumpBrainyValue(ident1);
#line 583 "decomp1.ch"
                            
#line 583 "decomp1.ch"
#line 583 "decomp1.ch"
                            PrintString(" = ");
#line 583 "decomp1.ch"
#line 583 "decomp1.ch"
                            WriteString(ptCond);
#line 583 "decomp1.ch"
#line 584 "decomp1.ch"
                            
#line 584 "decomp1.ch"
#line 584 "decomp1.ch"
                         } else 
#line 584 "decomp1.ch"
            {
#line 584 "decomp1.ch"
#line 585 "decomp1.ch"
                while ( ((_inter = (PPTREE)stat,1) && 
#line 585 "decomp1.ch"
                            (NumberTree(_inter) == metachop::EXP) &&
#line 585 "decomp1.ch"
                            ((stat=SonTree(_inter,1)),1) &&
#line 585 "decomp1.ch"
                            1) ) 
#line 585 "decomp1.ch"
#line 586 "decomp1.ch"
                    ;
#line 586 "decomp1.ch"
#line 587 "decomp1.ch"
                if ( inDiff ) {
#line 587 "decomp1.ch"
#line 588 "decomp1.ch"
                                i = 1 ;
#line 588 "decomp1.ch"
#line 589 "decomp1.ch"
                                PrintString("!(");
#line 589 "decomp1.ch"
#line 590 "decomp1.ch"
                                
#line 590 "decomp1.ch"
#line 590 "decomp1.ch"
                               }
#line 590 "decomp1.ch"
#line 591 "decomp1.ch"
                if ( ((_inter = (PPTREE)stat,1) && 
#line 591 "decomp1.ch"
                        (NumberTree(_inter) == metachop::AFF) &&
#line 591 "decomp1.ch"
                        ((ident1=SonTree(_inter,1)),1) &&
#line 591 "decomp1.ch"
                        ((stat=SonTree(_inter,2)),1) &&
#line 591 "decomp1.ch"
                        1) ) {
#line 591 "decomp1.ch"
#line 592 "decomp1.ch"
                                if ( !i ) {
#line 592 "decomp1.ch"
#line 593 "decomp1.ch"
                                                i = 1 ;
#line 593 "decomp1.ch"
#line 594 "decomp1.ch"
                                                PrintString("(");
#line 594 "decomp1.ch"
#line 595 "decomp1.ch"
                                                
#line 595 "decomp1.ch"
#line 595 "decomp1.ch"
                                            }
#line 595 "decomp1.ch"
#line 596 "decomp1.ch"
                                
#line 596 "decomp1.ch"
#line 596 "decomp1.ch"
                             } else 
#line 596 "decomp1.ch"
#line 597 "decomp1.ch"
                    (ident1=(PTREE)0);
#line 597 "decomp1.ch"
                    
#line 597 "decomp1.ch"
                
#line 597 "decomp1.ch"
#line 598 "decomp1.ch"
                decomp(stat);
#line 598 "decomp1.ch"
                
#line 598 "decomp1.ch"
#line 599 "decomp1.ch"
                if ( ident1 ) {
#line 599 "decomp1.ch"
#line 600 "decomp1.ch"
                                PrintString("&& (");
#line 600 "decomp1.ch"
#line 600 "decomp1.ch"
                                DumpBrainyValue(ident1);
#line 600 "decomp1.ch"
                                
#line 600 "decomp1.ch"
#line 600 "decomp1.ch"
                                PrintString(" = ");
#line 600 "decomp1.ch"
#line 600 "decomp1.ch"
                                WriteString(ptCond);
#line 600 "decomp1.ch"
#line 600 "decomp1.ch"
                                PrintString(")");
#line 600 "decomp1.ch"
#line 601 "decomp1.ch"
                                
#line 601 "decomp1.ch"
#line 601 "decomp1.ch"
                               }
#line 601 "decomp1.ch"
#line 602 "decomp1.ch"
                if ( i ) 
#line 602 "decomp1.ch"
#line 603 "decomp1.ch"
                    PrintString(")");
#line 603 "decomp1.ch"
#line 604 "decomp1.ch"
                
#line 604 "decomp1.ch"
#line 604 "decomp1.ch"
            }
            
#line 604 "decomp1.ch"
#line 605 "decomp1.ch"
            condDesign = 0 ;
#line 605 "decomp1.ch"
#line 606 "decomp1.ch"
            if ( ((_inter = (PPTREE)ident,1) && 
#line 606 "decomp1.ch"
                    (NumberTree(_inter) == metachop::LXOR) &&
#line 606 "decomp1.ch"
                    1) ) 
#line 606 "decomp1.ch"
#line 607 "decomp1.ch"
                PrintString(")");
#line 607 "decomp1.ch"
#line 608 "decomp1.ch"
            if ( statementf ) {
#line 608 "decomp1.ch"
#line 609 "decomp1.ch"
                                PrintString(";");
#line 609 "decomp1.ch"
#line 609 "decomp1.ch"
                                LNewLine(1);
#line 609 "decomp1.ch"
                                
#line 609 "decomp1.ch"
#line 610 "decomp1.ch"
                                
#line 610 "decomp1.ch"
#line 610 "decomp1.ch"
                               }
#line 610 "decomp1.ch"
#line 611 "decomp1.ch"
            free(ptCond);
#line 611 "decomp1.ch"
#line 612 "decomp1.ch"
            break ;
            
#line 612 "decomp1.ch"
#line 614 "decomp1.ch"
        case metachop::COMPOUND : 
#line 614 "decomp1.ch"
#line 614 "decomp1.ch"
            (list=SonTree(paramTree, 1));
#line 614 "decomp1.ch"
            
#line 614 "decomp1.ch"
#line 614 "decomp1.ch"
        _Case71 : 
#line 614 "decomp1.ch"
#line 614 "decomp1.ch"
            ;
#line 614 "decomp1.ch"
#line 614 "decomp1.ch"
            if ( ansiMode && !((!list)) ) 
#line 614 "decomp1.ch"
#line 615 "decomp1.ch"
                LNewLine(1);
#line 615 "decomp1.ch"
            
#line 615 "decomp1.ch"
#line 616 "decomp1.ch"
            SepBefore();
#line 616 "decomp1.ch"
            
#line 616 "decomp1.ch"
#line 616 "decomp1.ch"
            PrintString("{");
#line 616 "decomp1.ch"
#line 617 "decomp1.ch"
            if ( !statementf && needInter ) {
#line 617 "decomp1.ch"
#line 618 "decomp1.ch"
                                                LNewLine(1);
#line 618 "decomp1.ch"
                                                
#line 618 "decomp1.ch"
#line 619 "decomp1.ch"
                                                Tab();
#line 619 "decomp1.ch"
                                                
#line 619 "decomp1.ch"
#line 619 "decomp1.ch"
                                                PrintString("register PPTREE _inter ;");
#line 619 "decomp1.ch"
#line 619 "decomp1.ch"
                                                LNewLine(1);
#line 619 "decomp1.ch"
                                                
#line 619 "decomp1.ch"
#line 620 "decomp1.ch"
                                                
#line 620 "decomp1.ch"
#line 620 "decomp1.ch"
                                               }
#line 620 "decomp1.ch"
#line 621 "decomp1.ch"
            if ( !((!list)) ) {
#line 621 "decomp1.ch"
#line 622 "decomp1.ch"
                                    LNewLine(1);
#line 622 "decomp1.ch"
                                    
#line 622 "decomp1.ch"
#line 623 "decomp1.ch"
                                    Tab();
#line 623 "decomp1.ch"
                                    
#line 623 "decomp1.ch"
#line 624 "decomp1.ch"
                                    Mark();
#line 624 "decomp1.ch"
                                    statementf = 1 ;
#line 624 "decomp1.ch"
                                    while ( !((!list)) ) {
#line 624 "decomp1.ch"
#line 626 "decomp1.ch"
                                                            (son=(list?list.Nextl():(PPTREE)0));
#line 626 "decomp1.ch"
                                                            
#line 626 "decomp1.ch"
#line 627 "decomp1.ch"
                                                            (postComment=son);
#line 627 "decomp1.ch"
                                                            
#line 627 "decomp1.ch"
#line 628 "decomp1.ch"
                                                            ((_inter = (PPTREE)postComment,1) && 
#line 628 "decomp1.ch"
                                                                (NumberTree(_inter) == metachop::ATTRIBUTS) &&
#line 628 "decomp1.ch"
                                                                ((postComment=SonTree(_inter,1)),1) &&
#line 628 "decomp1.ch"
                                                                1);
#line 628 "decomp1.ch"
                                                            ;
#line 628 "decomp1.ch"
#line 629 "decomp1.ch"
                                                            WRITE_START_LINE(son);
#line 629 "decomp1.ch"
#line 630 "decomp1.ch"
                                                            DecompStat(son, 1);
#line 630 "decomp1.ch"
#line 631 "decomp1.ch"
                                                            
#line 631 "decomp1.ch"
#line 631 "decomp1.ch"
                                                           }
#line 631 "decomp1.ch"
                                    UnMark();
#line 631 "decomp1.ch"
                                    
#line 631 "decomp1.ch"
#line 633 "decomp1.ch"
                                    
#line 633 "decomp1.ch"
#line 633 "decomp1.ch"
                                }
#line 633 "decomp1.ch"
#line 634 "decomp1.ch"
            WRITE_STOP_LINE(paramTree);
#line 634 "decomp1.ch"
#line 635 "decomp1.ch"
            PrintString("}");
#line 635 "decomp1.ch"
#line 635 "decomp1.ch"
            SepAfter();
#line 635 "decomp1.ch"
            
#line 635 "decomp1.ch"
#line 636 "decomp1.ch"
            break ;
            
#line 636 "decomp1.ch"
#line 638 "decomp1.ch"
        case metachop::DO : 
#line 638 "decomp1.ch"
#line 638 "decomp1.ch"
            (stat=SonTree(paramTree, 1));
#line 638 "decomp1.ch"
            
#line 638 "decomp1.ch"
#line 638 "decomp1.ch"
            (exp=SonTree(paramTree, 2));
#line 638 "decomp1.ch"
            
#line 638 "decomp1.ch"
#line 638 "decomp1.ch"
        _Case72 : 
#line 638 "decomp1.ch"
#line 638 "decomp1.ch"
            ;
#line 638 "decomp1.ch"
#line 638 "decomp1.ch"
            PrintString("do");
#line 638 "decomp1.ch"
#line 639 "decomp1.ch"
            if ( !(((_inter = (PPTREE)stat,1) && 
#line 639 "decomp1.ch"
                        (NumberTree(_inter) == metachop::COMPOUND) &&
#line 639 "decomp1.ch"
                        1)) ) {
#line 639 "decomp1.ch"
#line 640 "decomp1.ch"
                                if ( !(((_inter = (PPTREE)stat,1) && 
#line 640 "decomp1.ch"
                                            (NumberTree(_inter) == metachop::STAT_VOID) &&
#line 640 "decomp1.ch"
                                            1)) ) {
#line 640 "decomp1.ch"
#line 641 "decomp1.ch"
                                                    LNewLine(1);
#line 641 "decomp1.ch"
                                                    
#line 641 "decomp1.ch"
#line 642 "decomp1.ch"
                                                    Tab();
#line 642 "decomp1.ch"
                                                    
#line 642 "decomp1.ch"
#line 643 "decomp1.ch"
                                                    
#line 643 "decomp1.ch"
#line 643 "decomp1.ch"
                                                  }
#line 643 "decomp1.ch"
#line 644 "decomp1.ch"
                                (postComment=stat);
#line 644 "decomp1.ch"
                                
#line 644 "decomp1.ch"
#line 645 "decomp1.ch"
                                WRITE_START_LINE(stat);
#line 645 "decomp1.ch"
#line 646 "decomp1.ch"
                                DecompStat(stat, 1);
#line 646 "decomp1.ch"
#line 647 "decomp1.ch"
                                
#line 647 "decomp1.ch"
#line 647 "decomp1.ch"
                              } else 
#line 647 "decomp1.ch"
            {
#line 647 "decomp1.ch"
#line 648 "decomp1.ch"
                Space(1);
#line 648 "decomp1.ch"
                
#line 648 "decomp1.ch"
#line 648 "decomp1.ch"
                decomp(stat);
#line 648 "decomp1.ch"
                
#line 648 "decomp1.ch"
#line 648 "decomp1.ch"
                Space(1);
#line 648 "decomp1.ch"
                
#line 648 "decomp1.ch"
#line 649 "decomp1.ch"
                
#line 649 "decomp1.ch"
#line 649 "decomp1.ch"
            }
            
#line 649 "decomp1.ch"
#line 650 "decomp1.ch"
            statementf = 0 ;
#line 650 "decomp1.ch"
#line 651 "decomp1.ch"
            WRITE_START_LINE(exp);
#line 651 "decomp1.ch"
#line 652 "decomp1.ch"
            PrintString("while (");
#line 652 "decomp1.ch"
#line 652 "decomp1.ch"
            Space(1);
#line 652 "decomp1.ch"
            
#line 652 "decomp1.ch"
#line 652 "decomp1.ch"
            decomp(exp);
#line 652 "decomp1.ch"
            
#line 652 "decomp1.ch"
#line 652 "decomp1.ch"
            Space(1);
#line 652 "decomp1.ch"
            
#line 652 "decomp1.ch"
#line 652 "decomp1.ch"
            PrintString(");");
#line 652 "decomp1.ch"
#line 653 "decomp1.ch"
            statementf = 1 ;
#line 653 "decomp1.ch"
#line 654 "decomp1.ch"
            LNewLine(1);
#line 654 "decomp1.ch"
            
#line 654 "decomp1.ch"
#line 655 "decomp1.ch"
            break ;
            
#line 655 "decomp1.ch"
#line 657 "decomp1.ch"
        case metachop::FOR : 
#line 657 "decomp1.ch"
#line 657 "decomp1.ch"
            (exp1=SonTree(paramTree, 1));
#line 657 "decomp1.ch"
            
#line 657 "decomp1.ch"
#line 657 "decomp1.ch"
            (exp2=SonTree(paramTree, 2));
#line 657 "decomp1.ch"
            
#line 657 "decomp1.ch"
#line 657 "decomp1.ch"
            (exp3=SonTree(paramTree, 3));
#line 657 "decomp1.ch"
            
#line 657 "decomp1.ch"
#line 657 "decomp1.ch"
            (stat=SonTree(paramTree, 4));
#line 657 "decomp1.ch"
            
#line 657 "decomp1.ch"
#line 657 "decomp1.ch"
        _Case73 : 
#line 657 "decomp1.ch"
#line 657 "decomp1.ch"
            ;
#line 657 "decomp1.ch"
#line 657 "decomp1.ch"
            WRITE_START_LINE(paramTree);
#line 657 "decomp1.ch"
#line 658 "decomp1.ch"
            statementf = 0 ;
#line 658 "decomp1.ch"
#line 659 "decomp1.ch"
            if ( !(((_inter = (PPTREE)exp1,1) && 
#line 659 "decomp1.ch"
                        (NumberTree(_inter) == metachop::ALL_OF) &&
#line 659 "decomp1.ch"
                        1)) ) {
#line 659 "decomp1.ch"
#line 660 "decomp1.ch"
                                PrintString("for (");
#line 660 "decomp1.ch"
#line 661 "decomp1.ch"
                                if ( !((!exp1)) ) {
#line 661 "decomp1.ch"
#line 662 "decomp1.ch"
                                                        Space(1);
#line 662 "decomp1.ch"
                                                        
#line 662 "decomp1.ch"
#line 662 "decomp1.ch"
                                                        decomp(exp1);
#line 662 "decomp1.ch"
                                                        
#line 662 "decomp1.ch"
#line 662 "decomp1.ch"
                                                        Space(1);
#line 662 "decomp1.ch"
                                                        
#line 662 "decomp1.ch"
#line 663 "decomp1.ch"
                                                        
#line 663 "decomp1.ch"
#line 663 "decomp1.ch"
                                                    }
#line 663 "decomp1.ch"
#line 664 "decomp1.ch"
                                PrintString(";");
#line 664 "decomp1.ch"
#line 665 "decomp1.ch"
                                if ( !((!exp2)) ) {
#line 665 "decomp1.ch"
#line 666 "decomp1.ch"
                                                        Space(1);
#line 666 "decomp1.ch"
                                                        
#line 666 "decomp1.ch"
#line 666 "decomp1.ch"
                                                        decomp(exp2);
#line 666 "decomp1.ch"
                                                        
#line 666 "decomp1.ch"
#line 666 "decomp1.ch"
                                                        Space(1);
#line 666 "decomp1.ch"
                                                        
#line 666 "decomp1.ch"
#line 667 "decomp1.ch"
                                                        
#line 667 "decomp1.ch"
#line 667 "decomp1.ch"
                                                    }
#line 667 "decomp1.ch"
#line 668 "decomp1.ch"
                                PrintString(";");
#line 668 "decomp1.ch"
#line 669 "decomp1.ch"
                                if ( !((!exp2)) ) {
#line 669 "decomp1.ch"
#line 670 "decomp1.ch"
                                                        Space(1);
#line 670 "decomp1.ch"
                                                        
#line 670 "decomp1.ch"
#line 670 "decomp1.ch"
                                                        decomp(exp3);
#line 670 "decomp1.ch"
                                                        
#line 670 "decomp1.ch"
#line 670 "decomp1.ch"
                                                        Space(1);
#line 670 "decomp1.ch"
                                                        
#line 670 "decomp1.ch"
#line 671 "decomp1.ch"
                                                        
#line 671 "decomp1.ch"
#line 671 "decomp1.ch"
                                                    }
#line 671 "decomp1.ch"
#line 672 "decomp1.ch"
                                PrintString(")");
#line 672 "decomp1.ch"
#line 672 "decomp1.ch"
                                Space(1);
#line 672 "decomp1.ch"
                                
#line 672 "decomp1.ch"
#line 673 "decomp1.ch"
                                
#line 673 "decomp1.ch"
#line 673 "decomp1.ch"
                              } else 
#line 673 "decomp1.ch"
            {
#line 673 "decomp1.ch"
#line 674 "decomp1.ch"
                PTREE   var, allVar ;
#line 674 "decomp1.ch"
                
#line 674 "decomp1.ch"
#line 675 "decomp1.ch"
                ((_inter = (PPTREE)exp1,1) && 
#line 675 "decomp1.ch"
                    ((var=SonTree(_inter,1)),1) &&
#line 675 "decomp1.ch"
                    ((allVar=SonTree(_inter,2)),1) &&
#line 675 "decomp1.ch"
                    1);
#line 675 "decomp1.ch"
                ;
#line 675 "decomp1.ch"
#line 676 "decomp1.ch"
                PrintString("for (");
#line 676 "decomp1.ch"
#line 677 "decomp1.ch"
                Mark();
#line 677 "decomp1.ch"
                {
#line 677 "decomp1.ch"
#line 678 "decomp1.ch"
                    Space(1);
#line 678 "decomp1.ch"
                    
#line 678 "decomp1.ch"
#line 678 "decomp1.ch"
                    decomp(var);
#line 678 "decomp1.ch"
                    
#line 678 "decomp1.ch"
#line 678 "decomp1.ch"
                    Space(1);
#line 678 "decomp1.ch"
                    
#line 678 "decomp1.ch"
#line 679 "decomp1.ch"
                    
#line 679 "decomp1.ch"
#line 679 "decomp1.ch"
                }
                
#line 679 "decomp1.ch"
                PrintString(":");
#line 679 "decomp1.ch"
                {
#line 679 "decomp1.ch"
#line 682 "decomp1.ch"
                    Space(1);
#line 682 "decomp1.ch"
                    
#line 682 "decomp1.ch"
#line 682 "decomp1.ch"
                    decomp(allVar);
#line 682 "decomp1.ch"
                    
#line 682 "decomp1.ch"
#line 682 "decomp1.ch"
                    Space(1);
#line 682 "decomp1.ch"
                    
#line 682 "decomp1.ch"
#line 683 "decomp1.ch"
                    
#line 683 "decomp1.ch"
#line 683 "decomp1.ch"
                }
                
#line 683 "decomp1.ch"
                UnMark();
#line 683 "decomp1.ch"
                
#line 683 "decomp1.ch"
#line 685 "decomp1.ch"
                PrintString(")");
#line 685 "decomp1.ch"
#line 685 "decomp1.ch"
                Space(1);
#line 685 "decomp1.ch"
                
#line 685 "decomp1.ch"
#line 686 "decomp1.ch"
                
#line 686 "decomp1.ch"
#line 686 "decomp1.ch"
            }
            
#line 686 "decomp1.ch"
#line 687 "decomp1.ch"
            statementf = 1 ;
#line 687 "decomp1.ch"
#line 688 "decomp1.ch"
            if ( !(((_inter = (PPTREE)stat,1) && 
#line 688 "decomp1.ch"
                        (NumberTree(_inter) == metachop::COMPOUND) &&
#line 688 "decomp1.ch"
                        1)) ) {
#line 688 "decomp1.ch"
#line 689 "decomp1.ch"
                                (postComment=stat);
#line 689 "decomp1.ch"
                                
#line 689 "decomp1.ch"
#line 690 "decomp1.ch"
                                LNewLine(1);
#line 690 "decomp1.ch"
                                
#line 690 "decomp1.ch"
#line 691 "decomp1.ch"
                                Tab();
#line 691 "decomp1.ch"
                                
#line 691 "decomp1.ch"
#line 692 "decomp1.ch"
                                Mark();
#line 692 "decomp1.ch"
                                WRITE_START_LINE(stat);
#line 692 "decomp1.ch"
                                DecompStat(stat, 1);
#line 692 "decomp1.ch"
                                UnMark();
#line 692 "decomp1.ch"
                                
#line 692 "decomp1.ch"
#line 695 "decomp1.ch"
                                
#line 695 "decomp1.ch"
#line 695 "decomp1.ch"
                              } else 
#line 695 "decomp1.ch"
            {
#line 695 "decomp1.ch"
#line 696 "decomp1.ch"
                decomp(stat);
#line 696 "decomp1.ch"
                
#line 696 "decomp1.ch"
#line 696 "decomp1.ch"
                LNewLine(1);
#line 696 "decomp1.ch"
                
#line 696 "decomp1.ch"
#line 697 "decomp1.ch"
                
#line 697 "decomp1.ch"
#line 697 "decomp1.ch"
            }
            
#line 697 "decomp1.ch"
#line 698 "decomp1.ch"
            break ;
            
#line 698 "decomp1.ch"
#line 700 "decomp1.ch"
        case metachop::LABEL : 
#line 700 "decomp1.ch"
#line 700 "decomp1.ch"
            (ident=SonTree(paramTree, 1));
#line 700 "decomp1.ch"
            
#line 700 "decomp1.ch"
#line 700 "decomp1.ch"
            (stat=SonTree(paramTree, 2));
#line 700 "decomp1.ch"
            
#line 700 "decomp1.ch"
#line 700 "decomp1.ch"
        _Case74 : 
#line 700 "decomp1.ch"
#line 700 "decomp1.ch"
            ;
#line 700 "decomp1.ch"
#line 700 "decomp1.ch"
            (postComment=stat);
#line 700 "decomp1.ch"
            
#line 700 "decomp1.ch"
#line 701 "decomp1.ch"
            UnMark();
#line 701 "decomp1.ch"
#line 702 "decomp1.ch"
            DumpBrainyValue(ident);
#line 702 "decomp1.ch"
            
#line 702 "decomp1.ch"
#line 702 "decomp1.ch"
            Space(1);
#line 702 "decomp1.ch"
            
#line 702 "decomp1.ch"
#line 702 "decomp1.ch"
            PrintString(":");
#line 702 "decomp1.ch"
#line 702 "decomp1.ch"
            Space(1);
#line 702 "decomp1.ch"
            
#line 702 "decomp1.ch"
#line 702 "decomp1.ch"
            LNewLine(1);
#line 702 "decomp1.ch"
            
#line 702 "decomp1.ch"
#line 703 "decomp1.ch"
            Tab();
#line 703 "decomp1.ch"
            
#line 703 "decomp1.ch"
#line 704 "decomp1.ch"
            Mark();
#line 704 "decomp1.ch"
#line 706 "decomp1.ch"
            Mark();
#line 706 "decomp1.ch"
            WRITE_START_LINE(stat);
#line 706 "decomp1.ch"
            DecompStat(stat, 0);
#line 706 "decomp1.ch"
            UnMark();
#line 706 "decomp1.ch"
            
#line 706 "decomp1.ch"
#line 709 "decomp1.ch"
            break ;
            
#line 709 "decomp1.ch"
#line 711 "decomp1.ch"
        case metachop::IF : 
#line 711 "decomp1.ch"
#line 711 "decomp1.ch"
            (exp=SonTree(paramTree, 1));
#line 711 "decomp1.ch"
            
#line 711 "decomp1.ch"
#line 711 "decomp1.ch"
            (stat1=SonTree(paramTree, 2));
#line 711 "decomp1.ch"
            
#line 711 "decomp1.ch"
#line 711 "decomp1.ch"
            (stat2=SonTree(paramTree, 3));
#line 711 "decomp1.ch"
            
#line 711 "decomp1.ch"
#line 711 "decomp1.ch"
        _Case75 : 
#line 711 "decomp1.ch"
#line 711 "decomp1.ch"
            ;
#line 711 "decomp1.ch"
#line 711 "decomp1.ch"
            statementf = 0 ;
#line 711 "decomp1.ch"
#line 712 "decomp1.ch"
            PrintString("if (");
#line 712 "decomp1.ch"
#line 712 "decomp1.ch"
            Space(1);
#line 712 "decomp1.ch"
            
#line 712 "decomp1.ch"
#line 712 "decomp1.ch"
            decomp(exp);
#line 712 "decomp1.ch"
            
#line 712 "decomp1.ch"
#line 712 "decomp1.ch"
            Space(1);
#line 712 "decomp1.ch"
            
#line 712 "decomp1.ch"
#line 712 "decomp1.ch"
            PrintString(")");
#line 712 "decomp1.ch"
#line 712 "decomp1.ch"
            Space(1);
#line 712 "decomp1.ch"
            
#line 712 "decomp1.ch"
#line 713 "decomp1.ch"
            statementf = 1 ;
#line 713 "decomp1.ch"
#line 714 "decomp1.ch"
            oldPtCase = ptCond ;
#line 714 "decomp1.ch"
#line 717 "decomp1.ch"
            if ( !(((_inter = (PPTREE)stat1,1) && 
#line 717 "decomp1.ch"
                        (NumberTree(_inter) == metachop::COMPOUND) &&
#line 717 "decomp1.ch"
                        1)) ) {
#line 717 "decomp1.ch"
#line 718 "decomp1.ch"
                                (postComment=stat1);
#line 718 "decomp1.ch"
                                
#line 718 "decomp1.ch"
#line 719 "decomp1.ch"
                                LNewLine(1);
#line 719 "decomp1.ch"
                                
#line 719 "decomp1.ch"
#line 720 "decomp1.ch"
                                Tab();
#line 720 "decomp1.ch"
                                
#line 720 "decomp1.ch"
#line 721 "decomp1.ch"
                                Mark();
#line 721 "decomp1.ch"
                                WRITE_START_LINE(stat1);
#line 721 "decomp1.ch"
                                DecompStat(stat1, 0);
#line 721 "decomp1.ch"
                                UnMark();
#line 721 "decomp1.ch"
                                
#line 721 "decomp1.ch"
#line 724 "decomp1.ch"
                                
#line 724 "decomp1.ch"
#line 724 "decomp1.ch"
                              } else 
#line 724 "decomp1.ch"
#line 725 "decomp1.ch"
                decomp(stat1);
#line 725 "decomp1.ch"
                
#line 725 "decomp1.ch"
            
#line 725 "decomp1.ch"
#line 726 "decomp1.ch"
            ptCond = oldPtCase ;
#line 726 "decomp1.ch"
#line 729 "decomp1.ch"
            if ( !((!stat2)) ) {
#line 729 "decomp1.ch"
#line 730 "decomp1.ch"
                                    if ( !(((_inter = (PPTREE)stat1,1) && 
#line 730 "decomp1.ch"
                                                (NumberTree(_inter) == metachop::COMPOUND) &&
#line 730 "decomp1.ch"
                                                1)) || ansiMode ) 
#line 730 "decomp1.ch"
#line 731 "decomp1.ch"
                                        LNewLine(1);
#line 731 "decomp1.ch"
                                    
#line 731 "decomp1.ch"
                                    else 
#line 731 "decomp1.ch"
#line 733 "decomp1.ch"
                                        Space(1);
#line 733 "decomp1.ch"
                                        
#line 733 "decomp1.ch"
                                    
#line 733 "decomp1.ch"
#line 734 "decomp1.ch"
                                    PrintString("else");
#line 734 "decomp1.ch"
#line 734 "decomp1.ch"
                                    Space(1);
#line 734 "decomp1.ch"
                                    
#line 734 "decomp1.ch"
#line 735 "decomp1.ch"
                                    if ( ansiMode ) 
#line 735 "decomp1.ch"
#line 736 "decomp1.ch"
                                        LNewLine(1);
#line 736 "decomp1.ch"
                                    
#line 736 "decomp1.ch"
#line 737 "decomp1.ch"
                                    if ( !(((_inter = (PPTREE)stat2,1) && 
#line 737 "decomp1.ch"
                                                (NumberTree(_inter) == metachop::COMPOUND) &&
#line 737 "decomp1.ch"
                                                1)) && !(((_inter = (PPTREE)stat2,1) && 
#line 737 "decomp1.ch"
                                                            (NumberTree(_inter) == metachop::IF) &&
#line 737 "decomp1.ch"
                                                            1)) ) {
#line 737 "decomp1.ch"
#line 738 "decomp1.ch"
                                                                    (postComment=stat2);
#line 738 "decomp1.ch"
                                                                    
#line 738 "decomp1.ch"
#line 739 "decomp1.ch"
                                                                    LNewLine(1);
#line 739 "decomp1.ch"
                                                                    
#line 739 "decomp1.ch"
#line 740 "decomp1.ch"
                                                                    Tab();
#line 740 "decomp1.ch"
                                                                    
#line 740 "decomp1.ch"
#line 741 "decomp1.ch"
                                                                    Mark();
#line 741 "decomp1.ch"
                                                                    WRITE_START_LINE(stat2);
#line 741 "decomp1.ch"
                                                                    DecompStat(stat2, 1);
#line 741 "decomp1.ch"
                                                                    UnMark();
#line 741 "decomp1.ch"
                                                                    
#line 741 "decomp1.ch"
#line 744 "decomp1.ch"
                                                                    
#line 744 "decomp1.ch"
#line 744 "decomp1.ch"
                                                                  } else 
#line 744 "decomp1.ch"
                                    {
#line 744 "decomp1.ch"
#line 745 "decomp1.ch"
                                        (postComment=stat2);
#line 745 "decomp1.ch"
                                        
#line 745 "decomp1.ch"
#line 746 "decomp1.ch"
                                        WRITE_START_LINE(stat2);
#line 746 "decomp1.ch"
#line 747 "decomp1.ch"
                                        decomp(stat2);
#line 747 "decomp1.ch"
                                        
#line 747 "decomp1.ch"
#line 748 "decomp1.ch"
                                        control_stat1(stat2);
#line 748 "decomp1.ch"
#line 749 "decomp1.ch"
                                        
#line 749 "decomp1.ch"
#line 749 "decomp1.ch"
                                    }
                                    
#line 749 "decomp1.ch"
#line 750 "decomp1.ch"
                                    
#line 750 "decomp1.ch"
#line 750 "decomp1.ch"
                                 }
#line 750 "decomp1.ch"
#line 751 "decomp1.ch"
            break ;
            
#line 751 "decomp1.ch"
#line 753 "decomp1.ch"
        case metachop::SWITCH : 
#line 753 "decomp1.ch"
#line 753 "decomp1.ch"
            (exp=SonTree(paramTree, 1));
#line 753 "decomp1.ch"
            
#line 753 "decomp1.ch"
#line 753 "decomp1.ch"
            (list=SonTree(paramTree, 2));
#line 753 "decomp1.ch"
            
#line 753 "decomp1.ch"
#line 753 "decomp1.ch"
        _Case76 : 
#line 753 "decomp1.ch"
#line 753 "decomp1.ch"
            ;
#line 753 "decomp1.ch"
#line 753 "decomp1.ch"
            (param=paramTree);
#line 753 "decomp1.ch"
            
#line 753 "decomp1.ch"
#line 754 "decomp1.ch"
            statementf = 0 ;
#line 754 "decomp1.ch"
#line 755 "decomp1.ch"
            if ( !(((_inter = (PPTREE)exp,1) && 
#line 755 "decomp1.ch"
                        (NumberTree(_inter) == metachop::IDENT) &&
#line 755 "decomp1.ch"
                        1)) || !IsDecDecElem(BrainyValue(exp)) ) {
#line 755 "decomp1.ch"
#line 756 "decomp1.ch"
                                                                        PrintString("switch (");
#line 756 "decomp1.ch"
#line 756 "decomp1.ch"
                                                                        Space(1);
#line 756 "decomp1.ch"
                                                                        
#line 756 "decomp1.ch"
#line 756 "decomp1.ch"
                                                                        decomp(exp);
#line 756 "decomp1.ch"
                                                                        
#line 756 "decomp1.ch"
#line 756 "decomp1.ch"
                                                                        Space(1);
#line 756 "decomp1.ch"
                                                                        
#line 756 "decomp1.ch"
#line 756 "decomp1.ch"
                                                                        PrintString(")");
#line 756 "decomp1.ch"
#line 756 "decomp1.ch"
                                                                        Space(1);
#line 756 "decomp1.ch"
                                                                        
#line 756 "decomp1.ch"
#line 757 "decomp1.ch"
                                                                        if ( ansiMode ) 
#line 757 "decomp1.ch"
#line 758 "decomp1.ch"
                                                                            LNewLine(1);
#line 758 "decomp1.ch"
                                                                        
#line 758 "decomp1.ch"
#line 759 "decomp1.ch"
                                                                        PrintString("{");
#line 759 "decomp1.ch"
#line 759 "decomp1.ch"
                                                                        LNewLine(1);
#line 759 "decomp1.ch"
                                                                        
#line 759 "decomp1.ch"
#line 760 "decomp1.ch"
                                                                        statementf = 1 ;
#line 760 "decomp1.ch"
#line 761 "decomp1.ch"
                                                                        Tab();
#line 761 "decomp1.ch"
                                                                        
#line 761 "decomp1.ch"
#line 762 "decomp1.ch"
                                                                        Mark();
#line 762 "decomp1.ch"
                                                                        while ( !((!list)) ) {
#line 762 "decomp1.ch"
#line 763 "decomp1.ch"
                                                                                                (son=(list?list.Nextl():(PPTREE)0));
#line 763 "decomp1.ch"
                                                                                                
#line 763 "decomp1.ch"
#line 764 "decomp1.ch"
                                                                                                WRITE_START_LINE(son);
#line 764 "decomp1.ch"
#line 765 "decomp1.ch"
                                                                                                if ( ((_inter = (PPTREE)son,1) && 
#line 765 "decomp1.ch"
                                                                                                        (NumberTree(_inter) == metachop::DEFAULT) &&
#line 765 "decomp1.ch"
                                                                                                        ((stat=SonTree(_inter,1)),1) &&
#line 765 "decomp1.ch"
                                                                                                        1) ) {
#line 765 "decomp1.ch"
#line 766 "decomp1.ch"
                                                                                                                PrintString("default :");
#line 766 "decomp1.ch"
#line 766 "decomp1.ch"
                                                                                                                Space(1);
#line 766 "decomp1.ch"
                                                                                                                
#line 766 "decomp1.ch"
#line 767 "decomp1.ch"
                                                                                                                
#line 767 "decomp1.ch"
#line 767 "decomp1.ch"
                                                                                                             } else 
#line 767 "decomp1.ch"
                                                                                                {
#line 767 "decomp1.ch"
#line 768 "decomp1.ch"
                                                                                                    statementf = 0 ;
#line 768 "decomp1.ch"
#line 769 "decomp1.ch"
                                                                                                    ((_inter = (PPTREE)son,1) && 
#line 769 "decomp1.ch"
                                                                                                        ((exp=SonTree(_inter,1)),1) &&
#line 769 "decomp1.ch"
                                                                                                        ((stat=SonTree(_inter,2)),1) &&
#line 769 "decomp1.ch"
                                                                                                        1);
#line 769 "decomp1.ch"
                                                                                                    ;
#line 769 "decomp1.ch"
#line 770 "decomp1.ch"
                                                                                                    PrintString("case ");
#line 770 "decomp1.ch"
#line 770 "decomp1.ch"
                                                                                                    decomp(exp);
#line 770 "decomp1.ch"
                                                                                                    
#line 770 "decomp1.ch"
#line 770 "decomp1.ch"
                                                                                                    Space(1);
#line 770 "decomp1.ch"
                                                                                                    
#line 770 "decomp1.ch"
#line 770 "decomp1.ch"
                                                                                                    PrintString(":");
#line 770 "decomp1.ch"
#line 770 "decomp1.ch"
                                                                                                    Space(1);
#line 770 "decomp1.ch"
                                                                                                    
#line 770 "decomp1.ch"
#line 771 "decomp1.ch"
                                                                                                    statementf = 1 ;
#line 771 "decomp1.ch"
#line 772 "decomp1.ch"
                                                                                                    
#line 772 "decomp1.ch"
#line 772 "decomp1.ch"
                                                                                                }
                                                                                                
#line 772 "decomp1.ch"
#line 776 "decomp1.ch"
                                                                                                if ( !sontree(stat, 2) ) {
#line 776 "decomp1.ch"
#line 777 "decomp1.ch"
                                                                                                                             (son=sontree(stat, 1));
#line 777 "decomp1.ch"
                                                                                                                             
#line 777 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             switch ( NumberTree(son) ) {
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::COMPOUND : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case102 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case103 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::CASE : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case103 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case104 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::DEFAULT : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case104 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case105 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::IF : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case105 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case106 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::WHILE : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case106 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case107 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::FOR : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case107 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case108 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::DO : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case108 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case109 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::SWITCH : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case109 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case110 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::IF_DIR : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case110 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case111 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::IFDEF_DIR : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case111 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case112 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::IFNDEF_DIR : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case112 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case113 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::NO_PRETTY : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case113 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case114 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             case metachop::ATTRIBUTS : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             _Case114 : 
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             ;
#line 778 "decomp1.ch"
#line 778 "decomp1.ch"
                                                                                                                             goto _Case115 ;
                                                                                                                             
#line 778 "decomp1.ch"
#line 793 "decomp1.ch"
                                                                                                                             case metachop::EXCEPTION : 
#line 793 "decomp1.ch"
#line 793 "decomp1.ch"
                                                                                                                             _Case115 : 
#line 793 "decomp1.ch"
#line 793 "decomp1.ch"
                                                                                                                             ;
#line 793 "decomp1.ch"
#line 793 "decomp1.ch"
                                                                                                                             oneInstruct = 0 ;
#line 793 "decomp1.ch"
#line 794 "decomp1.ch"
                                                                                                                             break ;
                                                                                                                             
#line 794 "decomp1.ch"
#line 802 "decomp1.ch"
                                                                                                                             default : 
#line 802 "decomp1.ch"
#line 802 "decomp1.ch"
                                                                                                                             _Case116 : 
#line 802 "decomp1.ch"
#line 802 "decomp1.ch"
                                                                                                                             ;
#line 802 "decomp1.ch"
#line 802 "decomp1.ch"
                                                                                                                             if ( son && !IsComm(son, PRE) ) 
#line 802 "decomp1.ch"
#line 803 "decomp1.ch"
                                                                                                                             oneInstruct = 1 ;
#line 803 "decomp1.ch"
                                                                                                                             else 
#line 803 "decomp1.ch"
#line 805 "decomp1.ch"
                                                                                                                             oneInstruct = 0 ;
#line 805 "decomp1.ch"
                                                                                                                             
#line 805 "decomp1.ch"
                                                                                                                             }
#line 805 "decomp1.ch"
                                                                                                                             
#line 805 "decomp1.ch"
#line 807 "decomp1.ch"
                                                                                                                             
#line 807 "decomp1.ch"
#line 807 "decomp1.ch"
                                                                                                                             } else 
#line 807 "decomp1.ch"
#line 808 "decomp1.ch"
                                                                                                    oneInstruct = 0 ;
#line 808 "decomp1.ch"
                                                                                                
#line 808 "decomp1.ch"
#line 809 "decomp1.ch"
                                                                                                if ( !oneInstruct ) {
#line 809 "decomp1.ch"
#line 810 "decomp1.ch"
                                                                                                                        LNewLine(1);
#line 810 "decomp1.ch"
                                                                                                                        
#line 810 "decomp1.ch"
#line 811 "decomp1.ch"
                                                                                                                        Tab();
#line 811 "decomp1.ch"
                                                                                                                        
#line 811 "decomp1.ch"
#line 812 "decomp1.ch"
                                                                                                                        
#line 812 "decomp1.ch"
#line 812 "decomp1.ch"
                                                                                                                      }
#line 812 "decomp1.ch"
#line 814 "decomp1.ch"
                                                                                                Mark();
#line 814 "decomp1.ch"
                                                                                                while ( !((!stat)) ) {
#line 814 "decomp1.ch"
#line 815 "decomp1.ch"
                                                                                                                        (son=(stat?stat.Nextl():(PPTREE)0));
#line 815 "decomp1.ch"
                                                                                                                        
#line 815 "decomp1.ch"
#line 816 "decomp1.ch"
                                                                                                                        (postComment=son);
#line 816 "decomp1.ch"
                                                                                                                        
#line 816 "decomp1.ch"
#line 817 "decomp1.ch"
                                                                                                                        WRITE_START_LINE(son);
#line 817 "decomp1.ch"
#line 818 "decomp1.ch"
                                                                                                                        DecompStat(son, 1);
#line 818 "decomp1.ch"
#line 819 "decomp1.ch"
                                                                                                                        
#line 819 "decomp1.ch"
#line 819 "decomp1.ch"
                                                                                                                       }
#line 819 "decomp1.ch"
                                                                                                UnMark();
#line 819 "decomp1.ch"
                                                                                                
#line 819 "decomp1.ch"
#line 821 "decomp1.ch"
                                                                                                
#line 821 "decomp1.ch"
#line 821 "decomp1.ch"
                                                                                               }
#line 821 "decomp1.ch"
                                                                        UnMark();
#line 821 "decomp1.ch"
                                                                        
#line 821 "decomp1.ch"
#line 823 "decomp1.ch"
                                                                        PrintString("}");
#line 823 "decomp1.ch"
#line 823 "decomp1.ch"
                                                                        LNewLine(1);
#line 823 "decomp1.ch"
                                                                        
#line 823 "decomp1.ch"
#line 824 "decomp1.ch"
                                                                        
#line 824 "decomp1.ch"
#line 824 "decomp1.ch"
                                                                    } else 
#line 824 "decomp1.ch"
            {
#line 824 "decomp1.ch"
#line 825 "decomp1.ch"
                int i = classify_case(paramTree);
                
#line 825 "decomp1.ch"
#line 826 "decomp1.ch"
                ifCase = i - 1 ;
#line 826 "decomp1.ch"
#line 829 "decomp1.ch"
                (ident=exp);
#line 829 "decomp1.ch"
                
#line 829 "decomp1.ch"
#line 830 "decomp1.ch"
                if ( ptCase ) 
#line 830 "decomp1.ch"
#line 831 "decomp1.ch"
                    free(ptCase);
#line 831 "decomp1.ch"
#line 832 "decomp1.ch"
                ptCase = AllocString(BrainyValue(ident));
#line 832 "decomp1.ch"
#line 833 "decomp1.ch"
                ptCond = ptCase ;
#line 833 "decomp1.ch"
#line 834 "decomp1.ch"
                (exp=switch_body(list));
#line 834 "decomp1.ch"
                
#line 834 "decomp1.ch"
#line 835 "decomp1.ch"
                decomp(exp);
#line 835 "decomp1.ch"
                
#line 835 "decomp1.ch"
#line 840 "decomp1.ch"
                if ( ptCase ) 
#line 840 "decomp1.ch"
#line 841 "decomp1.ch"
                    free(ptCase);
#line 841 "decomp1.ch"
#line 842 "decomp1.ch"
                ptCase = (char *)0 ;
#line 842 "decomp1.ch"
#line 843 "decomp1.ch"
                {
#line 843 "decomp1.ch"
                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 843 "decomp1.ch"
                    _ptTree0 = (PPTREE) 0;
#line 843 "decomp1.ch"
                    ReplaceTree(param, 2, _ptTree0);
#line 843 "decomp1.ch"
                }
#line 843 "decomp1.ch"
                
#line 843 "decomp1.ch"
#line 844 "decomp1.ch"
                
#line 844 "decomp1.ch"
#line 844 "decomp1.ch"
            }
            
#line 844 "decomp1.ch"
#line 845 "decomp1.ch"
            break ;
            
#line 845 "decomp1.ch"
#line 847 "decomp1.ch"
        case metachop::WHILE : 
#line 847 "decomp1.ch"
#line 847 "decomp1.ch"
            (exp=SonTree(paramTree, 1));
#line 847 "decomp1.ch"
            
#line 847 "decomp1.ch"
#line 847 "decomp1.ch"
            (stat=SonTree(paramTree, 2));
#line 847 "decomp1.ch"
            
#line 847 "decomp1.ch"
#line 847 "decomp1.ch"
        _Case77 : 
#line 847 "decomp1.ch"
#line 847 "decomp1.ch"
            ;
#line 847 "decomp1.ch"
#line 847 "decomp1.ch"
            statementf = 0 ;
#line 847 "decomp1.ch"
#line 848 "decomp1.ch"
            PrintString("while (");
#line 848 "decomp1.ch"
#line 848 "decomp1.ch"
            Space(1);
#line 848 "decomp1.ch"
            
#line 848 "decomp1.ch"
#line 848 "decomp1.ch"
            decomp(exp);
#line 848 "decomp1.ch"
            
#line 848 "decomp1.ch"
#line 848 "decomp1.ch"
            Space(1);
#line 848 "decomp1.ch"
            
#line 848 "decomp1.ch"
#line 848 "decomp1.ch"
            PrintString(")");
#line 848 "decomp1.ch"
#line 848 "decomp1.ch"
            Space(1);
#line 848 "decomp1.ch"
            
#line 848 "decomp1.ch"
#line 849 "decomp1.ch"
            statementf = 1 ;
#line 849 "decomp1.ch"
#line 850 "decomp1.ch"
            if ( !(((_inter = (PPTREE)stat,1) && 
#line 850 "decomp1.ch"
                        (NumberTree(_inter) == metachop::COMPOUND) &&
#line 850 "decomp1.ch"
                        1)) ) {
#line 850 "decomp1.ch"
#line 851 "decomp1.ch"
                                (postComment=stat);
#line 851 "decomp1.ch"
                                
#line 851 "decomp1.ch"
#line 852 "decomp1.ch"
                                LNewLine(1);
#line 852 "decomp1.ch"
                                
#line 852 "decomp1.ch"
#line 853 "decomp1.ch"
                                Tab();
#line 853 "decomp1.ch"
                                
#line 853 "decomp1.ch"
#line 854 "decomp1.ch"
                                Mark();
#line 854 "decomp1.ch"
                                WRITE_START_LINE(stat);
#line 854 "decomp1.ch"
                                DecompStat(stat, 0);
#line 854 "decomp1.ch"
                                UnMark();
#line 854 "decomp1.ch"
                                
#line 854 "decomp1.ch"
#line 857 "decomp1.ch"
                                
#line 857 "decomp1.ch"
#line 857 "decomp1.ch"
                              } else 
#line 857 "decomp1.ch"
            {
#line 857 "decomp1.ch"
#line 858 "decomp1.ch"
                decomp(stat);
#line 858 "decomp1.ch"
                
#line 858 "decomp1.ch"
#line 859 "decomp1.ch"
                
#line 859 "decomp1.ch"
#line 859 "decomp1.ch"
            }
            
#line 859 "decomp1.ch"
#line 860 "decomp1.ch"
            break ;
            
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
        case metachop::IFDEF_DIR : 
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
            (exp=SonTree(paramTree, 1));
#line 860 "decomp1.ch"
            
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
            (stat1=SonTree(paramTree, 2));
#line 860 "decomp1.ch"
            
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
            (stat2=SonTree(paramTree, 3));
#line 860 "decomp1.ch"
            
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
        _Case78 : 
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
            ;
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
            goto _Case79 ;
            
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
        case metachop::IFNDEF_DIR : 
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
            (exp=SonTree(paramTree, 1));
#line 860 "decomp1.ch"
            
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
            (stat1=SonTree(paramTree, 2));
#line 860 "decomp1.ch"
            
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
            (stat2=SonTree(paramTree, 3));
#line 860 "decomp1.ch"
            
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
        _Case79 : 
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
            ;
#line 860 "decomp1.ch"
#line 860 "decomp1.ch"
            goto _Case80 ;
            
#line 860 "decomp1.ch"
#line 864 "decomp1.ch"
        case metachop::IF_DIR : 
#line 864 "decomp1.ch"
#line 864 "decomp1.ch"
            (exp=SonTree(paramTree, 1));
#line 864 "decomp1.ch"
            
#line 864 "decomp1.ch"
#line 864 "decomp1.ch"
            (stat1=SonTree(paramTree, 2));
#line 864 "decomp1.ch"
            
#line 864 "decomp1.ch"
#line 864 "decomp1.ch"
            (stat2=SonTree(paramTree, 3));
#line 864 "decomp1.ch"
            
#line 864 "decomp1.ch"
#line 864 "decomp1.ch"
        _Case80 : 
#line 864 "decomp1.ch"
#line 864 "decomp1.ch"
            ;
#line 864 "decomp1.ch"
#line 864 "decomp1.ch"
            gotocol(0);
#line 864 "decomp1.ch"
#line 865 "decomp1.ch"
            switch ( NumberTree(paramTree) ) {
#line 865 "decomp1.ch"
#line 867 "decomp1.ch"
                case metachop::IFDEF_DIR : 
#line 867 "decomp1.ch"
#line 867 "decomp1.ch"
                _Case117 : 
#line 867 "decomp1.ch"
#line 867 "decomp1.ch"
                    ;
#line 867 "decomp1.ch"
#line 867 "decomp1.ch"
                    PrintString("#ifdef ");
#line 867 "decomp1.ch"
#line 868 "decomp1.ch"
                    break ;
                    
#line 868 "decomp1.ch"
#line 870 "decomp1.ch"
                case metachop::IFNDEF_DIR : 
#line 870 "decomp1.ch"
#line 870 "decomp1.ch"
                _Case118 : 
#line 870 "decomp1.ch"
#line 870 "decomp1.ch"
                    ;
#line 870 "decomp1.ch"
#line 870 "decomp1.ch"
                    PrintString("#ifndef ");
#line 870 "decomp1.ch"
#line 871 "decomp1.ch"
                    break ;
                    
#line 871 "decomp1.ch"
#line 873 "decomp1.ch"
                case metachop::IF_DIR : 
#line 873 "decomp1.ch"
#line 873 "decomp1.ch"
                _Case119 : 
#line 873 "decomp1.ch"
#line 873 "decomp1.ch"
                    ;
#line 873 "decomp1.ch"
#line 873 "decomp1.ch"
                    PrintString("#if ");
#line 873 "decomp1.ch"
#line 874 "decomp1.ch"
                    break ;
                    
#line 874 "decomp1.ch"
            }
#line 874 "decomp1.ch"
            
#line 874 "decomp1.ch"
#line 876 "decomp1.ch"
            decomp(exp);
#line 876 "decomp1.ch"
            
#line 876 "decomp1.ch"
#line 876 "decomp1.ch"
            LNewLine(1);
#line 876 "decomp1.ch"
            
#line 876 "decomp1.ch"
#line 877 "decomp1.ch"
            while ( !((!stat1)) ) {
#line 877 "decomp1.ch"
#line 878 "decomp1.ch"
                                        (son=(stat1?stat1.Nextl():(PPTREE)0));
#line 878 "decomp1.ch"
                                        
#line 878 "decomp1.ch"
#line 879 "decomp1.ch"
                                        (postComment=son);
#line 879 "decomp1.ch"
                                        
#line 879 "decomp1.ch"
#line 880 "decomp1.ch"
                                        WRITE_START_LINE(son);
#line 880 "decomp1.ch"
#line 881 "decomp1.ch"
                                        DecompStat(son, 1);
#line 881 "decomp1.ch"
#line 882 "decomp1.ch"
                                        
#line 882 "decomp1.ch"
#line 882 "decomp1.ch"
                                    }
#line 882 "decomp1.ch"
#line 883 "decomp1.ch"
            follow_if_dir(stat2, paramTree);
#line 883 "decomp1.ch"
#line 884 "decomp1.ch"
            break ;
            
#line 884 "decomp1.ch"
#line 886 "decomp1.ch"
        case metachop::SEP_BEFORE : 
#line 886 "decomp1.ch"
#line 886 "decomp1.ch"
        _Case81 : 
#line 886 "decomp1.ch"
#line 886 "decomp1.ch"
            ;
#line 886 "decomp1.ch"
#line 886 "decomp1.ch"
            PrintString("SepBefore();");
#line 886 "decomp1.ch"
#line 886 "decomp1.ch"
            LNewLine(1);
#line 886 "decomp1.ch"
            
#line 886 "decomp1.ch"
#line 887 "decomp1.ch"
            break ;
            
#line 887 "decomp1.ch"
#line 889 "decomp1.ch"
        case metachop::SEP_AFTER : 
#line 889 "decomp1.ch"
#line 889 "decomp1.ch"
        _Case82 : 
#line 889 "decomp1.ch"
#line 889 "decomp1.ch"
            ;
#line 889 "decomp1.ch"
#line 889 "decomp1.ch"
            PrintString("SepAfter();");
#line 889 "decomp1.ch"
#line 889 "decomp1.ch"
            LNewLine(1);
#line 889 "decomp1.ch"
            
#line 889 "decomp1.ch"
#line 890 "decomp1.ch"
            break ;
            
#line 890 "decomp1.ch"
#line 892 "decomp1.ch"
        case metachop::SEP_OMIT : 
#line 892 "decomp1.ch"
#line 892 "decomp1.ch"
        _Case83 : 
#line 892 "decomp1.ch"
#line 892 "decomp1.ch"
            ;
#line 892 "decomp1.ch"
#line 892 "decomp1.ch"
            PrintString("NoSep();");
#line 892 "decomp1.ch"
#line 892 "decomp1.ch"
            LNewLine(1);
#line 892 "decomp1.ch"
            
#line 892 "decomp1.ch"
#line 893 "decomp1.ch"
            break ;
            
#line 893 "decomp1.ch"
#line 895 "decomp1.ch"
        case metachop::TAB : 
#line 895 "decomp1.ch"
#line 895 "decomp1.ch"
            (val=SonTree(paramTree, 1));
#line 895 "decomp1.ch"
            
#line 895 "decomp1.ch"
#line 895 "decomp1.ch"
        _Case84 : 
#line 895 "decomp1.ch"
#line 895 "decomp1.ch"
            ;
#line 895 "decomp1.ch"
#line 895 "decomp1.ch"
            if ( (!val) ) {
#line 895 "decomp1.ch"
#line 896 "decomp1.ch"
                                PrintString("Tab();");
#line 896 "decomp1.ch"
#line 896 "decomp1.ch"
                                LNewLine(1);
#line 896 "decomp1.ch"
                                
#line 896 "decomp1.ch"
#line 897 "decomp1.ch"
                                
#line 897 "decomp1.ch"
#line 897 "decomp1.ch"
                            } else 
#line 897 "decomp1.ch"
            {
#line 897 "decomp1.ch"
#line 898 "decomp1.ch"
                PrintString("NTab(");
#line 898 "decomp1.ch"
#line 898 "decomp1.ch"
                decomp(val);
#line 898 "decomp1.ch"
                
#line 898 "decomp1.ch"
#line 898 "decomp1.ch"
                PrintString(");");
#line 898 "decomp1.ch"
#line 898 "decomp1.ch"
                LNewLine(1);
#line 898 "decomp1.ch"
                
#line 898 "decomp1.ch"
#line 899 "decomp1.ch"
                
#line 899 "decomp1.ch"
#line 899 "decomp1.ch"
            }
            
#line 899 "decomp1.ch"
#line 900 "decomp1.ch"
            break ;
            
#line 900 "decomp1.ch"
#line 902 "decomp1.ch"
        case metachop::SPACE : 
#line 902 "decomp1.ch"
#line 902 "decomp1.ch"
            (val=SonTree(paramTree, 1));
#line 902 "decomp1.ch"
            
#line 902 "decomp1.ch"
#line 902 "decomp1.ch"
        _Case85 : 
#line 902 "decomp1.ch"
#line 902 "decomp1.ch"
            ;
#line 902 "decomp1.ch"
#line 902 "decomp1.ch"
            if ( (!val) ) {
#line 902 "decomp1.ch"
#line 903 "decomp1.ch"
                                PrintString("Space(1);");
#line 903 "decomp1.ch"
#line 903 "decomp1.ch"
                                LNewLine(1);
#line 903 "decomp1.ch"
                                
#line 903 "decomp1.ch"
#line 904 "decomp1.ch"
                                
#line 904 "decomp1.ch"
#line 904 "decomp1.ch"
                            } else 
#line 904 "decomp1.ch"
            {
#line 904 "decomp1.ch"
#line 905 "decomp1.ch"
                PrintString("Space(");
#line 905 "decomp1.ch"
#line 905 "decomp1.ch"
                decomp(val);
#line 905 "decomp1.ch"
                
#line 905 "decomp1.ch"
#line 905 "decomp1.ch"
                PrintString(");");
#line 905 "decomp1.ch"
#line 905 "decomp1.ch"
                LNewLine(1);
#line 905 "decomp1.ch"
                
#line 905 "decomp1.ch"
#line 906 "decomp1.ch"
                
#line 906 "decomp1.ch"
#line 906 "decomp1.ch"
            }
            
#line 906 "decomp1.ch"
#line 907 "decomp1.ch"
            break ;
            
#line 907 "decomp1.ch"
#line 909 "decomp1.ch"
        case metachop::NEWLINE : 
#line 909 "decomp1.ch"
#line 909 "decomp1.ch"
            (param=SonTree(paramTree, 1));
#line 909 "decomp1.ch"
            
#line 909 "decomp1.ch"
#line 909 "decomp1.ch"
        _Case86 : 
#line 909 "decomp1.ch"
#line 909 "decomp1.ch"
            ;
#line 909 "decomp1.ch"
#line 909 "decomp1.ch"
            if ( !param ) {
#line 909 "decomp1.ch"
#line 910 "decomp1.ch"
                                PrintString("LNewLine(1);");
#line 910 "decomp1.ch"
#line 910 "decomp1.ch"
                                LNewLine(1);
#line 910 "decomp1.ch"
                                
#line 910 "decomp1.ch"
#line 911 "decomp1.ch"
                                
#line 911 "decomp1.ch"
#line 911 "decomp1.ch"
                            } else 
#line 911 "decomp1.ch"
            {
#line 911 "decomp1.ch"
#line 912 "decomp1.ch"
                PrintString("LNewLine(");
#line 912 "decomp1.ch"
#line 912 "decomp1.ch"
                decomp(param);
#line 912 "decomp1.ch"
                
#line 912 "decomp1.ch"
#line 912 "decomp1.ch"
                PrintString(");");
#line 912 "decomp1.ch"
#line 912 "decomp1.ch"
                LNewLine(1);
#line 912 "decomp1.ch"
                
#line 912 "decomp1.ch"
#line 913 "decomp1.ch"
                
#line 913 "decomp1.ch"
#line 913 "decomp1.ch"
            }
            
#line 913 "decomp1.ch"
#line 914 "decomp1.ch"
            break ;
            
#line 914 "decomp1.ch"
#line 916 "decomp1.ch"
        case metachop::NODE_TREE : 
#line 916 "decomp1.ch"
#line 916 "decomp1.ch"
        _Case87 : 
#line 916 "decomp1.ch"
#line 916 "decomp1.ch"
            ;
#line 916 "decomp1.ch"
#line 916 "decomp1.ch"
            node(paramTree);
#line 916 "decomp1.ch"
#line 917 "decomp1.ch"
            break ;
            
#line 917 "decomp1.ch"
#line 919 "decomp1.ch"
        case metachop::NODE_LIST : 
#line 919 "decomp1.ch"
#line 919 "decomp1.ch"
        _Case88 : 
#line 919 "decomp1.ch"
#line 919 "decomp1.ch"
            ;
#line 919 "decomp1.ch"
#line 919 "decomp1.ch"
            node(paramTree);
#line 919 "decomp1.ch"
#line 920 "decomp1.ch"
            break ;
            
#line 920 "decomp1.ch"
#line 922 "decomp1.ch"
        case metachop::NIL : 
#line 922 "decomp1.ch"
#line 922 "decomp1.ch"
        _Case89 : 
#line 922 "decomp1.ch"
#line 922 "decomp1.ch"
            ;
#line 922 "decomp1.ch"
#line 922 "decomp1.ch"
            PrintString("(!");
#line 922 "decomp1.ch"
#line 922 "decomp1.ch"
            WriteString(ptCond);
#line 922 "decomp1.ch"
#line 922 "decomp1.ch"
            PrintString(")");
#line 922 "decomp1.ch"
#line 923 "decomp1.ch"
            break ;
            
#line 923 "decomp1.ch"
#line 925 "decomp1.ch"
        case metachop::ARRO : 
#line 925 "decomp1.ch"
#line 925 "decomp1.ch"
            (ident=SonTree(paramTree, 1));
#line 925 "decomp1.ch"
            
#line 925 "decomp1.ch"
#line 925 "decomp1.ch"
        _Case90 : 
#line 925 "decomp1.ch"
#line 925 "decomp1.ch"
            ;
#line 925 "decomp1.ch"
#line 925 "decomp1.ch"
            if ( statementf ) {
#line 925 "decomp1.ch"
#line 926 "decomp1.ch"
                                PrintString("decomp(");
#line 926 "decomp1.ch"
#line 926 "decomp1.ch"
                                decomp(ident);
#line 926 "decomp1.ch"
                                
#line 926 "decomp1.ch"
#line 926 "decomp1.ch"
                                PrintString(");");
#line 926 "decomp1.ch"
#line 926 "decomp1.ch"
                                LNewLine(1);
#line 926 "decomp1.ch"
                                
#line 926 "decomp1.ch"
#line 927 "decomp1.ch"
                                
#line 927 "decomp1.ch"
#line 927 "decomp1.ch"
                               } else 
#line 927 "decomp1.ch"
#line 928 "decomp1.ch"
                decomp(ident);
#line 928 "decomp1.ch"
                
#line 928 "decomp1.ch"
            
#line 928 "decomp1.ch"
#line 929 "decomp1.ch"
            break ;
            
#line 929 "decomp1.ch"
#line 931 "decomp1.ch"
        case metachop::VALUE : 
#line 931 "decomp1.ch"
#line 931 "decomp1.ch"
            (ident=SonTree(paramTree, 1));
#line 931 "decomp1.ch"
            
#line 931 "decomp1.ch"
#line 931 "decomp1.ch"
        _Case91 : 
#line 931 "decomp1.ch"
#line 931 "decomp1.ch"
            ;
#line 931 "decomp1.ch"
#line 931 "decomp1.ch"
            if ( statementf ) {
#line 931 "decomp1.ch"
#line 932 "decomp1.ch"
                                PrintString("DumpBrainyValue(");
#line 932 "decomp1.ch"
#line 932 "decomp1.ch"
                                DumpBrainyValue(ident);
#line 932 "decomp1.ch"
                                
#line 932 "decomp1.ch"
#line 932 "decomp1.ch"
                                PrintString(");");
#line 932 "decomp1.ch"
#line 932 "decomp1.ch"
                                LNewLine(1);
#line 932 "decomp1.ch"
                                
#line 932 "decomp1.ch"
#line 933 "decomp1.ch"
                                
#line 933 "decomp1.ch"
#line 933 "decomp1.ch"
                               } else 
#line 933 "decomp1.ch"
            {
#line 933 "decomp1.ch"
#line 934 "decomp1.ch"
                PrintString("BrainyValue(");
#line 934 "decomp1.ch"
#line 934 "decomp1.ch"
                DumpBrainyValue(ident);
#line 934 "decomp1.ch"
                
#line 934 "decomp1.ch"
#line 934 "decomp1.ch"
                PrintString(")");
#line 934 "decomp1.ch"
#line 935 "decomp1.ch"
                
#line 935 "decomp1.ch"
#line 935 "decomp1.ch"
            }
            
#line 935 "decomp1.ch"
#line 936 "decomp1.ch"
            break ;
            
#line 936 "decomp1.ch"
#line 938 "decomp1.ch"
        case metachop::ALINEA : 
#line 938 "decomp1.ch"
#line 938 "decomp1.ch"
            (list=SonTree(paramTree, 1));
#line 938 "decomp1.ch"
            
#line 938 "decomp1.ch"
#line 938 "decomp1.ch"
        _Case92 : 
#line 938 "decomp1.ch"
#line 938 "decomp1.ch"
            ;
#line 938 "decomp1.ch"
#line 938 "decomp1.ch"
            PrintString("Mark();");
#line 938 "decomp1.ch"
#line 938 "decomp1.ch"
            LNewLine(1);
#line 938 "decomp1.ch"
            
#line 938 "decomp1.ch"
#line 939 "decomp1.ch"
            lstat_dec1(list);
#line 939 "decomp1.ch"
#line 940 "decomp1.ch"
            PrintString("UnMark();");
#line 940 "decomp1.ch"
#line 940 "decomp1.ch"
            LNewLine(1);
#line 940 "decomp1.ch"
            
#line 940 "decomp1.ch"
#line 941 "decomp1.ch"
            break ;
            
#line 941 "decomp1.ch"
#line 943 "decomp1.ch"
        case metachop::BOX : 
#line 943 "decomp1.ch"
#line 943 "decomp1.ch"
            (list=SonTree(paramTree, 1));
#line 943 "decomp1.ch"
            
#line 943 "decomp1.ch"
#line 943 "decomp1.ch"
        _Case93 : 
#line 943 "decomp1.ch"
#line 943 "decomp1.ch"
            ;
#line 943 "decomp1.ch"
#line 943 "decomp1.ch"
            lstat_dec1(list);
#line 943 "decomp1.ch"
#line 944 "decomp1.ch"
            break ;
            
#line 944 "decomp1.ch"
#line 946 "decomp1.ch"
        case metachop::NEXT : 
#line 946 "decomp1.ch"
#line 946 "decomp1.ch"
            (ident=SonTree(paramTree, 1));
#line 946 "decomp1.ch"
            
#line 946 "decomp1.ch"
#line 946 "decomp1.ch"
        _Case94 : 
#line 946 "decomp1.ch"
#line 946 "decomp1.ch"
            ;
#line 946 "decomp1.ch"
#line 946 "decomp1.ch"
            PrintString("(");
#line 946 "decomp1.ch"
#line 946 "decomp1.ch"
            decomp(ident);
#line 946 "decomp1.ch"
            
#line 946 "decomp1.ch"
#line 946 "decomp1.ch"
            PrintString("?");
#line 946 "decomp1.ch"
#line 946 "decomp1.ch"
            decomp(ident);
#line 946 "decomp1.ch"
            
#line 946 "decomp1.ch"
#line 946 "decomp1.ch"
            PrintString(".Nextl():(PPTREE)0)");
#line 946 "decomp1.ch"
#line 947 "decomp1.ch"
#if 0
#line 947 "decomp1.ch"
#line 948 "decomp1.ch"
            (stat=FatherTree(paramTree));
#line 948 "decomp1.ch"
            
#line 948 "decomp1.ch"
#line 949 "decomp1.ch"
            if ( ((_inter = (PPTREE)stat,1) && 
#line 949 "decomp1.ch"
                    (NumberTree(_inter) == LIST) &&
#line 949 "decomp1.ch"
                    1) ) 
#line 949 "decomp1.ch"
#line 950 "decomp1.ch"
                (stat=SFatherTree(stat,-1 -LIST));
#line 950 "decomp1.ch"
            
#line 950 "decomp1.ch"
#line 951 "decomp1.ch"
            if ( ((_inter = (PPTREE)stat,1) && 
#line 951 "decomp1.ch"
                    (NumberTree(_inter) == metachop::COMPOUND) &&
#line 951 "decomp1.ch"
                    1) ) {
#line 951 "decomp1.ch"
#line 952 "decomp1.ch"
                            PrintString("FreeUnRef(NEXT_L(");
#line 952 "decomp1.ch"
#line 952 "decomp1.ch"
                            decomp(ident);
#line 952 "decomp1.ch"
                            
#line 952 "decomp1.ch"
#line 952 "decomp1.ch"
                            PrintString("))");
#line 952 "decomp1.ch"
#line 953 "decomp1.ch"
                            
#line 953 "decomp1.ch"
#line 953 "decomp1.ch"
                         } else 
#line 953 "decomp1.ch"
            {
#line 953 "decomp1.ch"
#line 954 "decomp1.ch"
                PrintString("NEXT_L(");
#line 954 "decomp1.ch"
#line 954 "decomp1.ch"
                decomp(ident);
#line 954 "decomp1.ch"
                
#line 954 "decomp1.ch"
#line 954 "decomp1.ch"
                PrintString(")");
#line 954 "decomp1.ch"
#line 955 "decomp1.ch"
                
#line 955 "decomp1.ch"
#line 955 "decomp1.ch"
            }
            
#line 955 "decomp1.ch"
#line 955 "decomp1.ch"
            
#line 955 "decomp1.ch"
#endif
            
#line 955 "decomp1.ch"
#line 957 "decomp1.ch"
            if ( statementf ) 
#line 957 "decomp1.ch"
#line 958 "decomp1.ch"
                PrintString(";");
#line 958 "decomp1.ch"
#line 959 "decomp1.ch"
            break ;
            
#line 959 "decomp1.ch"
#line 961 "decomp1.ch"
        case metachop::IN_LANG : 
#line 961 "decomp1.ch"
#line 961 "decomp1.ch"
            (ident=SonTree(paramTree, 1));
#line 961 "decomp1.ch"
            
#line 961 "decomp1.ch"
#line 961 "decomp1.ch"
            (stat=SonTree(paramTree, 2));
#line 961 "decomp1.ch"
            
#line 961 "decomp1.ch"
#line 961 "decomp1.ch"
        _Case95 : 
#line 961 "decomp1.ch"
#line 961 "decomp1.ch"
            ;
#line 961 "decomp1.ch"
#line 961 "decomp1.ch"
            PrintString("{");
#line 961 "decomp1.ch"
#line 961 "decomp1.ch"
            LNewLine(1);
#line 961 "decomp1.ch"
            
#line 961 "decomp1.ch"
#line 962 "decomp1.ch"
            Tab();
#line 962 "decomp1.ch"
            
#line 962 "decomp1.ch"
#line 963 "decomp1.ch"
            Mark();
#line 963 "decomp1.ch"
            PrintString("PLANG _oldLanguage = pCurrentLanguage;");
#line 963 "decomp1.ch"
            LNewLine(1);
#line 963 "decomp1.ch"
            
#line 963 "decomp1.ch"
            PrintString("SwitchLang(\"");
#line 963 "decomp1.ch"
            PrintString(Value(ident));
#line 963 "decomp1.ch"
            PrintString("\");");
#line 963 "decomp1.ch"
            LNewLine(1);
#line 963 "decomp1.ch"
            
#line 963 "decomp1.ch"
            if ( ((_inter = (PPTREE)ident,1) && 
#line 963 "decomp1.ch"
                    (NumberTree(_inter) == metachop::STRING) &&
#line 963 "decomp1.ch"
                    1) ) {
#line 963 "decomp1.ch"
#line 966 "decomp1.ch"
                            char    *oldLanguage = theLanguageName ;
                            
#line 966 "decomp1.ch"
#line 967 "decomp1.ch"
                            theLanguageName = AllocString(Value(ident));
#line 967 "decomp1.ch"
#line 968 "decomp1.ch"
                            SwitchLang(theLanguageName);
#line 968 "decomp1.ch"
#line 969 "decomp1.ch"
                            WRITE_START_LINE(stat);
#line 969 "decomp1.ch"
#line 970 "decomp1.ch"
                            decomp(stat);
#line 970 "decomp1.ch"
                            
#line 970 "decomp1.ch"
#line 971 "decomp1.ch"
                            free(theLanguageName);
#line 971 "decomp1.ch"
#line 972 "decomp1.ch"
                            theLanguageName = oldLanguage ;
#line 972 "decomp1.ch"
#line 973 "decomp1.ch"
                            
#line 973 "decomp1.ch"
#line 973 "decomp1.ch"
                         } else 
#line 973 "decomp1.ch"
            {
#line 973 "decomp1.ch"
#line 974 "decomp1.ch"
                WRITE_START_LINE(stat);
#line 974 "decomp1.ch"
#line 975 "decomp1.ch"
                decomp(stat);
#line 975 "decomp1.ch"
                
#line 975 "decomp1.ch"
#line 976 "decomp1.ch"
                
#line 976 "decomp1.ch"
#line 976 "decomp1.ch"
            }
            
#line 976 "decomp1.ch"
            PrintString(";");
#line 976 "decomp1.ch"
            LNewLine(1);
#line 976 "decomp1.ch"
            
#line 976 "decomp1.ch"
            PrintString("SwitchLangPoint(_oldLanguage);");
#line 976 "decomp1.ch"
            LNewLine(1);
#line 976 "decomp1.ch"
            
#line 976 "decomp1.ch"
            UnMark();
#line 976 "decomp1.ch"
            
#line 976 "decomp1.ch"
#line 980 "decomp1.ch"
            PrintString("}");
#line 980 "decomp1.ch"
#line 980 "decomp1.ch"
            LNewLine(1);
#line 980 "decomp1.ch"
            
#line 980 "decomp1.ch"
#line 981 "decomp1.ch"
            break ;
            
#line 981 "decomp1.ch"
#line 982 "decomp1.ch"
        case metachop::FOREACH : 
#line 982 "decomp1.ch"
#line 982 "decomp1.ch"
            (stat=SonTree(paramTree, 3));
#line 982 "decomp1.ch"
            
#line 982 "decomp1.ch"
#line 982 "decomp1.ch"
        _Case96 : 
#line 982 "decomp1.ch"
#line 982 "decomp1.ch"
            ;
#line 982 "decomp1.ch"
#line 982 "decomp1.ch"
            break ;
            
#line 982 "decomp1.ch"
#line 984 "decomp1.ch"
        case metachop::FORALLSONS : 
#line 984 "decomp1.ch"
#line 984 "decomp1.ch"
            (ident=SonTree(paramTree, 1));
#line 984 "decomp1.ch"
            
#line 984 "decomp1.ch"
#line 984 "decomp1.ch"
            (stat=SonTree(paramTree, 2));
#line 984 "decomp1.ch"
            
#line 984 "decomp1.ch"
#line 984 "decomp1.ch"
        _Case97 : 
#line 984 "decomp1.ch"
#line 984 "decomp1.ch"
            ;
#line 984 "decomp1.ch"
#line 984 "decomp1.ch"
            {
#line 984 "decomp1.ch"
#line 985 "decomp1.ch"
                PTREE   forAllSons ;
#line 985 "decomp1.ch"
                
#line 985 "decomp1.ch"
#line 986 "decomp1.ch"
                {
#line 986 "decomp1.ch"
                    /* [ metachop::COMPOUND
                        [ LIST 
                            [ metachop::DECLARATION
                                [ NIL ] 
                                [ metachop::TINT ]
                                [ LIST 
                                    [ metachop::TYP_AFF
                                        [ metachop::IDENT "_for_slot"]
                                        [ metachop::INITIALIZER [ metachop::INTEGER "1"]]
                                    ]
                                    [ metachop::TYP_AFF
                                        [ metachop::IDENT "_arity"]
                                        [ metachop::INITIALIZER
                                            [ metachop::EXP_LIST
                                                [ metachop::IDENT "treearity"]
                                                [ META "tree"]
                                            ]
                                        ]
                                    ]
                                ]
                            ]
                            [ metachop::DECLARATION
                                [ NIL ] 
                                [ metachop::TIDENT [ metachop::IDENT "MY_TREE"]]
                                [ LIST 
                                    [ metachop::TYP_AFF
                                        [ metachop::IDENT "_for_elem"]
                                        [ metachop::INITIALIZER
                                            [ metachop::CAST
                                                [ metachop::ABST_DECLARATOR
                                                    [ metachop::TIDENT [ metachop::IDENT "PPTREE"]]
                                                    [ NIL ] 
                                                ]
                                                [ metachop::INTEGER "0"]
                                            ]
                                        ]
                                    ]
                                ]
                            ]
                            [ metachop::FOR
                                [ NIL ] 
                                [ metachop::LEQU
                                    [ metachop::IDENT "_for_slot"]
                                    [ metachop::IDENT "_arity"]
                                ]
                                [ metachop::AINCR [ metachop::IDENT "_for_slot"]]
                                [ metachop::COMPOUND
                                    [ LIST 
                                        [ metachop::AFF
                                            [ metachop::IDENT "_for_elem"]
                                            [ metachop::EXP_LIST
                                                [ metachop::IDENT "SonTree"]
                                                [ metachop::EXP_SEQ
                                                    [ LIST 
                                                        [ META "tree"]
                                                        [ metachop::IDENT "_for_slot"]
                                                    ]
                                                ]
                                            ]
                                        ]
                                        [ metachop::IF
                                            [ metachop::AND
                                                [ metachop::IDENT "_for_elem"]
                                                [ metachop::NEQU
                                                    [ metachop::EXP_LIST
                                                        [ metachop::IDENT "NumberTree"]
                                                        [ metachop::IDENT "_for_elem"]
                                                    ]
                                                    [ metachop::IDENT "IN_LANGUAGE"]
                                                ]
                                            ]
                                            [ META "stat"]
                                            [ NIL ] 
                                        ]
                                        [ metachop::NONE ]
                                    ]
                                ]
                            ]
                            [ metachop::NONE ]
                        ]
                       ]
#line 986 "decomp1.ch"
                    */
#line 986 "decomp1.ch"
                    {   ptStackTree = 0 ;
#line 986 "decomp1.ch"
                        TheConstructor(stackTree,ptStackTree,-4,metachop::TINT,0,-2,MakeString("_for_slot"),metachop::IDENT,1,
                            -2,MakeString("1"),metachop::INTEGER,1,metachop::INITIALIZER,1,metachop::TYP_AFF,2,-2,MakeString("_arity"),metachop::IDENT,1,-2,MakeString("treearity"),metachop::IDENT,1,
                            -2,MakeString("tree"),META,1,metachop::EXP_LIST,2,metachop::INITIALIZER,1,metachop::TYP_AFF,2,-4,LIST,2,LIST,2,metachop::DECLARATION,3,-4,-2,MakeString("MY_TREE"),metachop::IDENT,1,metachop::TIDENT,1,
                            -2,MakeString("_for_elem"),metachop::IDENT,1,-2,MakeString("PPTREE"),metachop::IDENT,1,metachop::TIDENT,1,-4,metachop::ABST_DECLARATOR,2,-2,MakeString("0"),metachop::INTEGER,1,metachop::CAST,2,metachop::INITIALIZER,1,metachop::TYP_AFF,2,-4,LIST,2,metachop::DECLARATION,3,
                            -4,-2,MakeString("_for_slot"),metachop::IDENT,1,-2,MakeString("_arity"),metachop::IDENT,1,metachop::LEQU,2,-2,MakeString("_for_slot"),metachop::IDENT,1,metachop::AINCR,1,
                            -3);
                        TheConstructor(stackTree,ptStackTree,-2,MakeString("_for_elem"),metachop::IDENT,1,-2,MakeString("SonTree"),metachop::IDENT,1,
                            -2,MakeString("tree"),META,1,-2,MakeString("_for_slot"),metachop::IDENT,1,-4,LIST,2,LIST,2,metachop::EXP_SEQ,1,metachop::EXP_LIST,2,metachop::AFF,2,-2,MakeString("_for_elem"),metachop::IDENT,1,
                            -2,MakeString("NumberTree"),metachop::IDENT,1,-2,MakeString("_for_elem"),metachop::IDENT,1,metachop::EXP_LIST,2,-2,MakeString("IN_LANGUAGE"),metachop::IDENT,1,metachop::NEQU,2,metachop::AND,2,-2,MakeString("stat"),META,1,-4,metachop::IF,3,
                            metachop::NONE,0,-4,LIST,2,LIST,2,LIST,2,metachop::COMPOUND,1,metachop::FOR,4,metachop::NONE,0,-4,LIST,2,LIST,2,LIST,2,LIST,2,metachop::COMPOUND,1,-3) ;
                        forAllSons = PopTree ;
#line 986 "decomp1.ch"
                    }   }
#line 986 "decomp1.ch"
                
#line 986 "decomp1.ch"
#line 998 "decomp1.ch"
                metarep("tree", forAllSons, NoCommentCopyTree(ident));
#line 998 "decomp1.ch"
#line 999 "decomp1.ch"
                metarep("stat", forAllSons, NoCommentCopyTree(stat));
#line 999 "decomp1.ch"
#line 1000 "decomp1.ch"
                decomp(forAllSons);
#line 1000 "decomp1.ch"
                
#line 1000 "decomp1.ch"
#line 1001 "decomp1.ch"
                
#line 1001 "decomp1.ch"
#line 1001 "decomp1.ch"
            }
            
#line 1001 "decomp1.ch"
#line 1002 "decomp1.ch"
            break ;
            
#line 1002 "decomp1.ch"
#line 1003 "decomp1.ch"
        default : 
#line 1003 "decomp1.ch"
#line 1003 "decomp1.ch"
        _Case98 : 
#line 1003 "decomp1.ch"
#line 1003 "decomp1.ch"
            ;
#line 1003 "decomp1.ch"
#line 1003 "decomp1.ch"
            return DecompCplus::IntDecomp(paramTree, funcAlone);
            
#line 1003 "decomp1.ch"
    }
#line 1003 "decomp1.ch"
    
#line 1003 "decomp1.ch"
#line 1005 "decomp1.ch"
    equality = oldEquality ;
#line 1005 "decomp1.ch"
#line 1006 "decomp1.ch"
    statementf = oldStatement ;
#line 1006 "decomp1.ch"
#line 1007 "decomp1.ch"
    caseDesign = oldCaseDesign ;
#line 1007 "decomp1.ch"
#line 1008 "decomp1.ch"
    simpleCase = oldSimpleCase ;
#line 1008 "decomp1.ch"
#line 1009 "decomp1.ch"
    condDesign = oldCondDesign ;
#line 1009 "decomp1.ch"
#line 1010 "decomp1.ch"
    ifCase = oldIfCase ;
#line 1010 "decomp1.ch"
#line 1011 "decomp1.ch"
    return oldPostComment ;
    
#line 1011 "decomp1.ch"
#line 1012 "decomp1.ch"
    
#line 1012 "decomp1.ch"
#line 1012 "decomp1.ch"
}
#line 1012 "decomp1.ch"

#line 1014 "decomp1.ch"

#line 1014 "decomp1.ch"
void printheader ( PTREE name1 )
#line 1014 "decomp1.ch"
{
#line 1014 "decomp1.ch"
#line 1014 "decomp1.ch"
    int _nextVal ;
    
#line 1014 "decomp1.ch"
#line 1017 "decomp1.ch"
    WriteString("/*************************************************************************/");
#line 1017 "decomp1.ch"
#line 1018 "decomp1.ch"
    NewLine();
#line 1018 "decomp1.ch"
#line 1019 "decomp1.ch"
    WriteString("/*                                                                       */");
#line 1019 "decomp1.ch"
#line 1020 "decomp1.ch"
    NewLine();
#line 1020 "decomp1.ch"
#line 1021 "decomp1.ch"
    WriteString("/*        Produced by Metachop version 2.0  -    1989-1995               */");
#line 1021 "decomp1.ch"
#line 1022 "decomp1.ch"
    NewLine();
#line 1022 "decomp1.ch"
#line 1023 "decomp1.ch"
    WriteString("/*     Tree      Meta     Chopper      developped    by                  */");
#line 1023 "decomp1.ch"
#line 1024 "decomp1.ch"
    NewLine();
#line 1024 "decomp1.ch"
#line 1025 "decomp1.ch"
    WriteString("/*                  Eric Lavillonniere                                   */");
#line 1025 "decomp1.ch"
#line 1026 "decomp1.ch"
    NewLine();
#line 1026 "decomp1.ch"
#line 1027 "decomp1.ch"
    WriteString("/*                                                                       */");
#line 1027 "decomp1.ch"
#line 1028 "decomp1.ch"
    NewLine();
#line 1028 "decomp1.ch"
#line 1029 "decomp1.ch"
    WriteString("/*************************************************************************/");
#line 1029 "decomp1.ch"
#line 1030 "decomp1.ch"
    NewLine();
#line 1030 "decomp1.ch"
#line 1031 "decomp1.ch"
    NewLine();
#line 1031 "decomp1.ch"
#line 1032 "decomp1.ch"
    PrintString("#include \"token.h\"");
#line 1032 "decomp1.ch"
#line 1032 "decomp1.ch"
    LNewLine(1);
#line 1032 "decomp1.ch"
    
#line 1032 "decomp1.ch"
#line 1039 "decomp1.ch"
    PrintString("#define decomp ");
#line 1039 "decomp1.ch"
#line 1039 "decomp1.ch"
    WriteString(NameLang("decomp"));
#line 1039 "decomp1.ch"
#line 1039 "decomp1.ch"
    LNewLine(1);
#line 1039 "decomp1.ch"
    
#line 1039 "decomp1.ch"
#line 1040 "decomp1.ch"
    LNewLine(1);
#line 1040 "decomp1.ch"
    
#line 1040 "decomp1.ch"
#line 1041 "decomp1.ch"
    
#line 1041 "decomp1.ch"
#line 1041 "decomp1.ch"
}
#line 1041 "decomp1.ch"

#line 1043 "decomp1.ch"

#line 1043 "decomp1.ch"
void dec_function ( PTREE paramTree, PTREE sc, PTREE type, PTREE declarator, PTREE param, PTREE param_decl, PTREE stat )
#line 1043 "decomp1.ch"
{
#line 1043 "decomp1.ch"
    register PPTREE _inter ;
#line 1043 "decomp1.ch"

#line 1043 "decomp1.ch"
#line 1043 "decomp1.ch"
    int _retVal [2];
    
#line 1043 "decomp1.ch"
#line 1043 "decomp1.ch"
    PPTREE  _storeVal [2];
    
#line 1043 "decomp1.ch"
#line 1043 "decomp1.ch"
    int _nextVal ;
    
#line 1043 "decomp1.ch"
#line 1045 "decomp1.ch"
    
    PTREE   son, val, list ;
#line 1045 "decomp1.ch"
    
#line 1045 "decomp1.ch"
#line 1046 "decomp1.ch"
    char    str [5];
    
#line 1046 "decomp1.ch"
#line 1048 "decomp1.ch"
    inFunction = 1 ;
#line 1048 "decomp1.ch"
#line 1049 "decomp1.ch"
    _write(2, "+", 1);
#line 1049 "decomp1.ch"
#line 1050 "decomp1.ch"
#if 0
#line 1050 "decomp1.ch"
#line 1051 "decomp1.ch"
    GCManagerRetBeg(paramTree);
#line 1051 "decomp1.ch"
#line 1051 "decomp1.ch"
    
#line 1051 "decomp1.ch"
#endif
    
#line 1051 "decomp1.ch"
#line 1053 "decomp1.ch"
    _write(2, ">", 1);
#line 1053 "decomp1.ch"
#line 1056 "decomp1.ch"
    GenTree(paramTree);
#line 1056 "decomp1.ch"
#line 1057 "decomp1.ch"
    _write(2, ">", 1);
#line 1057 "decomp1.ch"
#line 1060 "decomp1.ch"
    LookForEach(paramTree, 0);
#line 1060 "decomp1.ch"
#line 1061 "decomp1.ch"
    _write(2, ">", 1);
#line 1061 "decomp1.ch"
#line 1064 "decomp1.ch"
    GCManager(paramTree);
#line 1064 "decomp1.ch"
#line 1065 "decomp1.ch"
    _write(2, ">", 1);
#line 1065 "decomp1.ch"
#line 1068 "decomp1.ch"
#if 0
#line 1068 "decomp1.ch"
#line 1069 "decomp1.ch"
    GCManagerFunc(paramTree);
#line 1069 "decomp1.ch"
#line 1070 "decomp1.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 1070 "decomp1.ch"
        ((stat=SonTree(_inter,6)),1) &&
#line 1070 "decomp1.ch"
        1);
#line 1070 "decomp1.ch"
    ;
#line 1070 "decomp1.ch"
#line 1071 "decomp1.ch"
    GCManagerRetEnd(paramTree, ((_inter = (PPTREE)type,1) && 
#line 1071 "decomp1.ch"
                                    (NumberTree(_inter) == metachop::TIDENT) &&
#line 1071 "decomp1.ch"
                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 1071 "decomp1.ch"
                                        (NumberTree(_inter) == metachop::IDENT) &&
#line 1071 "decomp1.ch"
                                        (!strcmp(Value(SonTree(_inter,1)),"PTREE")) &&
#line 1071 "decomp1.ch"
                                        1),
#line 1071 "decomp1.ch"
                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 1071 "decomp1.ch"
                                    1));
#line 1071 "decomp1.ch"
#line 1071 "decomp1.ch"
    
#line 1071 "decomp1.ch"
#endif
    
#line 1071 "decomp1.ch"
#line 1073 "decomp1.ch"
    needInter = 0 ;
#line 1073 "decomp1.ch"
#line 1075 "decomp1.ch"
    {
#line 1075 "decomp1.ch"
#line 1075 "decomp1.ch"
        PTREE   _Baum0 ;
#line 1075 "decomp1.ch"
        
#line 1075 "decomp1.ch"
#line 1075 "decomp1.ch"
        {
#line 1075 "decomp1.ch"
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 1075 "decomp1.ch"
            _ptRes0 = MakeTree(metachop::NODE_TREE, 1);
#line 1075 "decomp1.ch"
            {
#line 1075 "decomp1.ch"
                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 1075 "decomp1.ch"
                _ptRes1 = MakeTree(META, 1);
#line 1075 "decomp1.ch"
                _ptTree1 = MakeString("b") ;
#line 1075 "decomp1.ch"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1075 "decomp1.ch"
                _ptTree0 = _ptRes1;
#line 1075 "decomp1.ch"
            }
#line 1075 "decomp1.ch"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1075 "decomp1.ch"
            _Baum0 = _ptRes0;
#line 1075 "decomp1.ch"
        }
#line 1075 "decomp1.ch"
        
#line 1075 "decomp1.ch"
#line 1075 "decomp1.ch"
        
        ItPtree it((PPTREE)paramTree, _Baum0);
        
#line 1075 "decomp1.ch"
#line 1076 "decomp1.ch"
        PPTREE  _for_elem ;
        
#line 1076 "decomp1.ch"
#line 1077 "decomp1.ch"
        while ( (for_elem = it++) ) {
#line 1077 "decomp1.ch"
#line 1078 "decomp1.ch"
                                        needInter++ ;
#line 1078 "decomp1.ch"
#line 1079 "decomp1.ch"
                                        break ;
                                        
#line 1079 "decomp1.ch"
#line 1080 "decomp1.ch"
                                        
#line 1080 "decomp1.ch"
#line 1080 "decomp1.ch"
                                       }
#line 1080 "decomp1.ch"
#line 1081 "decomp1.ch"
        if ( !needInter ) {
#line 1081 "decomp1.ch"
#line 1081 "decomp1.ch"
                                PTREE   _Baum1 ;
#line 1081 "decomp1.ch"
                                
#line 1081 "decomp1.ch"
#line 1082 "decomp1.ch"
                                {
#line 1082 "decomp1.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 1082 "decomp1.ch"
                                    _ptRes0 = MakeTree(metachop::NODE_LIST, 1);
#line 1082 "decomp1.ch"
                                    {
#line 1082 "decomp1.ch"
                                        PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 1082 "decomp1.ch"
                                        _ptRes1 = MakeTree(META, 1);
#line 1082 "decomp1.ch"
                                        _ptTree1 = MakeString("b") ;
#line 1082 "decomp1.ch"
                                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1082 "decomp1.ch"
                                        _ptTree0 = _ptRes1;
#line 1082 "decomp1.ch"
                                    }
#line 1082 "decomp1.ch"
                                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1082 "decomp1.ch"
                                    _Baum1 = _ptRes0;
#line 1082 "decomp1.ch"
                                }
#line 1082 "decomp1.ch"
                                
#line 1082 "decomp1.ch"
#line 1082 "decomp1.ch"
                                
                                ItPtree it((PPTREE)paramTree, _Baum1);
                                
#line 1082 "decomp1.ch"
#line 1083 "decomp1.ch"
                                while ( (for_elem = it++) ) {
#line 1083 "decomp1.ch"
#line 1084 "decomp1.ch"
                                                                needInter++ ;
#line 1084 "decomp1.ch"
#line 1085 "decomp1.ch"
                                                                break ;
                                                                
#line 1085 "decomp1.ch"
#line 1086 "decomp1.ch"
                                                                
#line 1086 "decomp1.ch"
#line 1086 "decomp1.ch"
                                                               }
#line 1086 "decomp1.ch"
#line 1087 "decomp1.ch"
                                
#line 1087 "decomp1.ch"
#line 1087 "decomp1.ch"
                            }
#line 1087 "decomp1.ch"
#line 1088 "decomp1.ch"
        if ( cplusGen ) {
#line 1088 "decomp1.ch"
#line 1089 "decomp1.ch"
                            FuncToAnsi(paramTree);
#line 1089 "decomp1.ch"
#line 1090 "decomp1.ch"
                            
#line 1090 "decomp1.ch"
#line 1090 "decomp1.ch"
                         }
#line 1090 "decomp1.ch"
#line 1091 "decomp1.ch"
        _write(2, " ", 1);
#line 1091 "decomp1.ch"
#line 1092 "decomp1.ch"
        
#line 1092 "decomp1.ch"
#line 1092 "decomp1.ch"
    }
    
#line 1092 "decomp1.ch"
#line 1093 "decomp1.ch"
    
#line 1093 "decomp1.ch"
#line 1093 "decomp1.ch"
}
#line 1093 "decomp1.ch"

#line 1097 "decomp1.ch"

#line 1097 "decomp1.ch"
int ToSwitcher ( PTREE tree )
#line 1097 "decomp1.ch"
{
#line 1097 "decomp1.ch"
    register PPTREE _inter ;
#line 1097 "decomp1.ch"

#line 1097 "decomp1.ch"
#line 1097 "decomp1.ch"
    int _nextVal ;
    
#line 1097 "decomp1.ch"
#line 1100 "decomp1.ch"
debut : 
#line 1100 "decomp1.ch"
#line 1101 "decomp1.ch"
    switch ( NumberTree(tree) ) {
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        case metachop::NODE_TREE : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        _Case130 : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            ;
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            goto _Case131 ;
            
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        case metachop::PLU_AFF : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        _Case131 : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            ;
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            goto _Case132 ;
            
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        case metachop::EXPO_AFF : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        _Case132 : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            ;
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            goto _Case133 ;
            
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        case metachop::MUL_AFF : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        _Case133 : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            ;
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            goto _Case134 ;
            
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        case metachop::PLUS : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        _Case134 : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            ;
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            goto _Case135 ;
            
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        case metachop::MUL : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
        _Case135 : 
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            ;
#line 1101 "decomp1.ch"
#line 1101 "decomp1.ch"
            goto _Case136 ;
            
#line 1101 "decomp1.ch"
#line 1108 "decomp1.ch"
        case metachop::EXPO : 
#line 1108 "decomp1.ch"
#line 1108 "decomp1.ch"
        _Case136 : 
#line 1108 "decomp1.ch"
#line 1108 "decomp1.ch"
            ;
#line 1108 "decomp1.ch"
#line 1108 "decomp1.ch"
            return 1 ;
            
#line 1108 "decomp1.ch"
#line 1108 "decomp1.ch"
            goto _Case137 ;
            
#line 1108 "decomp1.ch"
#line 1110 "decomp1.ch"
        case metachop::EXP : 
#line 1110 "decomp1.ch"
#line 1110 "decomp1.ch"
        _Case137 : 
#line 1110 "decomp1.ch"
#line 1110 "decomp1.ch"
            ;
#line 1110 "decomp1.ch"
#line 1110 "decomp1.ch"
            ((_inter = (PPTREE)tree,1) && 
#line 1110 "decomp1.ch"
                ((tree=SonTree(_inter,1)),1) &&
#line 1110 "decomp1.ch"
                1);
#line 1110 "decomp1.ch"
            ;
#line 1110 "decomp1.ch"
#line 1111 "decomp1.ch"
            goto debut ;
            
#line 1111 "decomp1.ch"
#line 1111 "decomp1.ch"
            goto _Case138 ;
            
#line 1111 "decomp1.ch"
#line 1113 "decomp1.ch"
        case metachop::AFF : 
#line 1113 "decomp1.ch"
#line 1113 "decomp1.ch"
        _Case138 : 
#line 1113 "decomp1.ch"
#line 1113 "decomp1.ch"
            ;
#line 1113 "decomp1.ch"
#line 1113 "decomp1.ch"
            ((_inter = (PPTREE)tree,1) && 
#line 1113 "decomp1.ch"
                ((tree=SonTree(_inter,2)),1) &&
#line 1113 "decomp1.ch"
                1);
#line 1113 "decomp1.ch"
            ;
#line 1113 "decomp1.ch"
#line 1114 "decomp1.ch"
            goto debut ;
            
#line 1114 "decomp1.ch"
#line 1114 "decomp1.ch"
            goto _Case139 ;
            
#line 1114 "decomp1.ch"
#line 1115 "decomp1.ch"
        default : 
#line 1115 "decomp1.ch"
#line 1115 "decomp1.ch"
        _Case139 : 
#line 1115 "decomp1.ch"
#line 1115 "decomp1.ch"
            ;
#line 1115 "decomp1.ch"
#line 1115 "decomp1.ch"
            return 0 ;
            
#line 1115 "decomp1.ch"
    }
#line 1115 "decomp1.ch"
    
#line 1115 "decomp1.ch"
#line 1117 "decomp1.ch"
    
#line 1117 "decomp1.ch"
#line 1117 "decomp1.ch"
}
#line 1117 "decomp1.ch"

#line 1121 "decomp1.ch"

#line 1121 "decomp1.ch"
void PtreeToClass ( PTREE tree )
#line 1121 "decomp1.ch"
{
#line 1121 "decomp1.ch"
#line 1121 "decomp1.ch"
    int _nextVal ;
    
#line 1121 "decomp1.ch"
#line 1124 "decomp1.ch"
    
    PTREE   declarator ;
#line 1124 "decomp1.ch"
    
#line 1124 "decomp1.ch"
#line 1125 "decomp1.ch"
    int found = 0 ;
    
#line 1125 "decomp1.ch"
#line 1143 "decomp1.ch"
    
#line 1143 "decomp1.ch"
#line 1143 "decomp1.ch"
}
#line 1143 "decomp1.ch"

#line 1147 "decomp1.ch"

#line 1147 "decomp1.ch"
void FuncToAnsi ( PTREE tree )
#line 1147 "decomp1.ch"
{
#line 1147 "decomp1.ch"
    register PPTREE _inter ;
#line 1147 "decomp1.ch"

#line 1147 "decomp1.ch"
#line 1147 "decomp1.ch"
    int _nextVal ;
    
#line 1147 "decomp1.ch"
#line 1150 "decomp1.ch"
    
    PTREE   parameter, declarator, son ;
#line 1150 "decomp1.ch"
    
#line 1150 "decomp1.ch"
#line 1151 "decomp1.ch"
    PTREE   listDeclarator, listDecl ;
#line 1151 "decomp1.ch"
    
#line 1151 "decomp1.ch"
#line 1152 "decomp1.ch"
    PTREE   Declarator, Decl ;
#line 1152 "decomp1.ch"
    
#line 1152 "decomp1.ch"
#line 1153 "decomp1.ch"
    char    *ident ;
    
#line 1153 "decomp1.ch"
#line 1155 "decomp1.ch"
    ((_inter = (PPTREE)tree,1) && 
#line 1155 "decomp1.ch"
        ((parameter=SonTree(_inter,4)),1) &&
#line 1155 "decomp1.ch"
        ((declarator=SonTree(_inter,6)),1) &&
#line 1155 "decomp1.ch"
        1);
#line 1155 "decomp1.ch"
    ;
#line 1155 "decomp1.ch"
#line 1159 "decomp1.ch"
    if ( declarator && parameter ) {
#line 1159 "decomp1.ch"
#line 1162 "decomp1.ch"
                                        while ( parameter ) {
#line 1162 "decomp1.ch"
#line 1163 "decomp1.ch"
                                                                (son=sontree(parameter, 1));
#line 1163 "decomp1.ch"
                                                                
#line 1163 "decomp1.ch"
#line 1164 "decomp1.ch"
                                                                switch ( NumberTree(son) ) {
#line 1164 "decomp1.ch"
#line 1165 "decomp1.ch"
                                                                    case metachop::VAR_LIST : 
#line 1165 "decomp1.ch"
#line 1165 "decomp1.ch"
                                                                    _Case144 : 
#line 1165 "decomp1.ch"
#line 1165 "decomp1.ch"
                                                                        ;
#line 1165 "decomp1.ch"
#line 1165 "decomp1.ch"
                                                                        break ;
                                                                        
#line 1165 "decomp1.ch"
#line 1167 "decomp1.ch"
                                                                    default : 
#line 1167 "decomp1.ch"
#line 1167 "decomp1.ch"
                                                                    _Case145 : 
#line 1167 "decomp1.ch"
#line 1167 "decomp1.ch"
                                                                        ;
#line 1167 "decomp1.ch"
#line 1167 "decomp1.ch"
                                                                        {
#line 1167 "decomp1.ch"
#line 1168 "decomp1.ch"
                                                                            ident = AllocString(BrainyValue(parameter));
#line 1168 "decomp1.ch"
#line 1169 "decomp1.ch"
                                                                            (listDeclarator=declarator);
#line 1169 "decomp1.ch"
                                                                            
#line 1169 "decomp1.ch"
#line 1170 "decomp1.ch"
                                                                            while ( listDeclarator ) {
#line 1170 "decomp1.ch"
#line 1171 "decomp1.ch"
                                                                                                        (Declarator=(listDeclarator?listDeclarator.Nextl():(PPTREE)0));
#line 1171 "decomp1.ch"
                                                                                                        
#line 1171 "decomp1.ch"
#line 1172 "decomp1.ch"
                                                                                                        ((_inter = (PPTREE)Declarator,1) && 
#line 1172 "decomp1.ch"
                                                                                                            ((listDecl=SonTree(_inter,3)),1) &&
#line 1172 "decomp1.ch"
                                                                                                            1);
#line 1172 "decomp1.ch"
                                                                                                        ;
#line 1172 "decomp1.ch"
#line 1173 "decomp1.ch"
                                                                                                        while ( listDecl ) {
#line 1173 "decomp1.ch"
#line 1174 "decomp1.ch"
                                                                                                                            (Decl=(listDecl?listDecl.Nextl():(PPTREE)0));
#line 1174 "decomp1.ch"
                                                                                                                            
#line 1174 "decomp1.ch"
#line 1175 "decomp1.ch"
                                                                                                                            (son=Decl);
#line 1175 "decomp1.ch"
                                                                                                                            
#line 1175 "decomp1.ch"
#line 1176 "decomp1.ch"
                                                                                                                            while ( son && !(((_inter = (PPTREE)son,1) && 
#line 1176 "decomp1.ch"
                                                                                                                                                (NumberTree(_inter) == metachop::IDENT) &&
#line 1176 "decomp1.ch"
                                                                                                                                                1)) ) {
#line 1176 "decomp1.ch"
#line 1177 "decomp1.ch"
                                                                                                                                                      switch ( NumberTree(son) ) {
#line 1177 "decomp1.ch"
#line 1178 "decomp1.ch"
                                                                                                                                                      case metachop::RANGE_MODIFIER : 
#line 1178 "decomp1.ch"
#line 1178 "decomp1.ch"
                                                                                                                                                      _Case146 : 
#line 1178 "decomp1.ch"
#line 1178 "decomp1.ch"
                                                                                                                                                      ;
#line 1178 "decomp1.ch"
#line 1178 "decomp1.ch"
                                                                                                                                                      (son=sontree(son, 2));
#line 1178 "decomp1.ch"
                                                                                                                                                      
#line 1178 "decomp1.ch"
#line 1178 "decomp1.ch"
                                                                                                                                                      goto _Case147 ;
                                                                                                                                                      
#line 1178 "decomp1.ch"
#line 1179 "decomp1.ch"
                                                                                                                                                      default : 
#line 1179 "decomp1.ch"
#line 1179 "decomp1.ch"
                                                                                                                                                      _Case147 : 
#line 1179 "decomp1.ch"
#line 1179 "decomp1.ch"
                                                                                                                                                      ;
#line 1179 "decomp1.ch"
#line 1179 "decomp1.ch"
                                                                                                                                                      (son=sontree(son, 1));
#line 1179 "decomp1.ch"
                                                                                                                                                      
#line 1179 "decomp1.ch"
                                                                                                                                                      }
#line 1179 "decomp1.ch"
                                                                                                                                                      
#line 1179 "decomp1.ch"
#line 1181 "decomp1.ch"
                                                                                                                                                      
#line 1181 "decomp1.ch"
#line 1181 "decomp1.ch"
                                                                                                                                                      }
#line 1181 "decomp1.ch"
#line 1182 "decomp1.ch"
                                                                                                                            if ( son && !strcmp(BrainyValue(son), ident) ) {
#line 1182 "decomp1.ch"
#line 1183 "decomp1.ch"
                                                                                                                                                                                {
#line 1183 "decomp1.ch"
                                                                                                                                                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 1183 "decomp1.ch"
                                                                                                                                                                                {
#line 1183 "decomp1.ch"
                                                                                                                                                                                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 1183 "decomp1.ch"
                                                                                                                                                                                _ptRes1 = MakeTree(metachop::DECLARATOR, 2);
#line 1183 "decomp1.ch"
                                                                                                                                                                                _ptTree1 = StoreRef(CopyTree(sontree(Declarator, 2)));
#line 1183 "decomp1.ch"
                                                                                                                                                                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1183 "decomp1.ch"
                                                                                                                                                                                _ptTree1 = StoreRef(CopyTree(Decl));
#line 1183 "decomp1.ch"
                                                                                                                                                                                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1183 "decomp1.ch"
                                                                                                                                                                                _ptTree0 = _ptRes1;
#line 1183 "decomp1.ch"
                                                                                                                                                                                }
#line 1183 "decomp1.ch"
                                                                                                                                                                                ReplaceTree(parameter, 1, _ptTree0);
#line 1183 "decomp1.ch"
                                                                                                                                                                                }
#line 1183 "decomp1.ch"
                                                                                                                                                                                
#line 1183 "decomp1.ch"
#line 1184 "decomp1.ch"
                                                                                                                                                                                listDecl = (PPTREE) 0 ;
#line 1184 "decomp1.ch"
                                                                                                                                                                                
#line 1184 "decomp1.ch"
#line 1185 "decomp1.ch"
                                                                                                                                                                                listDeclarator = (PPTREE) 0 ;
#line 1185 "decomp1.ch"
                                                                                                                                                                                
#line 1185 "decomp1.ch"
#line 1186 "decomp1.ch"
                                                                                                                                                                                
#line 1186 "decomp1.ch"
#line 1186 "decomp1.ch"
                                                                                                                                                                                }
#line 1186 "decomp1.ch"
#line 1187 "decomp1.ch"
                                                                                                                            
#line 1187 "decomp1.ch"
#line 1187 "decomp1.ch"
                                                                                                                            }
#line 1187 "decomp1.ch"
#line 1188 "decomp1.ch"
                                                                                                        
#line 1188 "decomp1.ch"
#line 1188 "decomp1.ch"
                                                                                                      }
#line 1188 "decomp1.ch"
#line 1189 "decomp1.ch"
                                                                            free(ident);
#line 1189 "decomp1.ch"
#line 1190 "decomp1.ch"
                                                                            
#line 1190 "decomp1.ch"
#line 1190 "decomp1.ch"
                                                                        }
                                                                        
#line 1190 "decomp1.ch"
                                                                }
#line 1190 "decomp1.ch"
                                                                
#line 1190 "decomp1.ch"
#line 1192 "decomp1.ch"
                                                                (parameter?parameter.Nextl():(PPTREE)0);
#line 1192 "decomp1.ch"
#line 1193 "decomp1.ch"
                                                                
#line 1193 "decomp1.ch"
#line 1193 "decomp1.ch"
                                                             }
#line 1193 "decomp1.ch"
#line 1194 "decomp1.ch"
                                        
#line 1194 "decomp1.ch"
#line 1194 "decomp1.ch"
                                     }
#line 1194 "decomp1.ch"
#line 1197 "decomp1.ch"
    {
#line 1197 "decomp1.ch"
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 1197 "decomp1.ch"
        if (_ptTree0= fathertree(declarator)) {
#line 1197 "decomp1.ch"
            int rank = ranktree(declarator);
#line 1197 "decomp1.ch"
            ReplaceTree(_ptTree0,rank,(PPTREE) 0 );
#line 1197 "decomp1.ch"
        }
#line 1197 "decomp1.ch"
    }
#line 1197 "decomp1.ch"
    
#line 1197 "decomp1.ch"
#line 1198 "decomp1.ch"
    
#line 1198 "decomp1.ch"
#line 1198 "decomp1.ch"
}
#line 1198 "decomp1.ch"

#line 1200 "decomp1.ch"

#line 1200 "decomp1.ch"
void DecompMetachop::lstat_dec1 ( PTREE paramTree )
#line 1200 "decomp1.ch"
{
#line 1200 "decomp1.ch"
#line 1200 "decomp1.ch"
    int _nextVal ;
    
#line 1200 "decomp1.ch"
#line 1202 "decomp1.ch"
    
    PTREE   son ;
#line 1202 "decomp1.ch"
    
#line 1202 "decomp1.ch"
#line 1203 "decomp1.ch"
    PTREE   oldPostComment = (PTREE)0 ;
#line 1203 "decomp1.ch"
    
#line 1203 "decomp1.ch"
#line 1203 "decomp1.ch"
    (oldPostComment=postComment);
#line 1203 "decomp1.ch"
    
#line 1203 "decomp1.ch"
#line 1205 "decomp1.ch"
    while ( !((!paramTree)) ) {
#line 1205 "decomp1.ch"
#line 1206 "decomp1.ch"
                                    (son=(paramTree?paramTree.Nextl():(PPTREE)0));
#line 1206 "decomp1.ch"
                                    
#line 1206 "decomp1.ch"
#line 1207 "decomp1.ch"
                                    (postComment=son);
#line 1207 "decomp1.ch"
                                    
#line 1207 "decomp1.ch"
#line 1208 "decomp1.ch"
                                    DecompStat(son, 1);
#line 1208 "decomp1.ch"
#line 1209 "decomp1.ch"
                                    
#line 1209 "decomp1.ch"
#line 1209 "decomp1.ch"
                                }
#line 1209 "decomp1.ch"
#line 1210 "decomp1.ch"
    (postComment=oldPostComment);
#line 1210 "decomp1.ch"
    
#line 1210 "decomp1.ch"
#line 1211 "decomp1.ch"
    
#line 1211 "decomp1.ch"
#line 1211 "decomp1.ch"
}
#line 1211 "decomp1.ch"

#line 1213 "decomp1.ch"

#line 1213 "decomp1.ch"
void DecompMetachop::DecompStat ( PTREE stat, int withNewLine )
#line 1213 "decomp1.ch"
{
#line 1213 "decomp1.ch"
    register PPTREE _inter ;
#line 1213 "decomp1.ch"

#line 1213 "decomp1.ch"
#line 1213 "decomp1.ch"
    int _nextVal ;
    
#line 1213 "decomp1.ch"
#line 1215 "decomp1.ch"
    
    PTREE   son ;
#line 1215 "decomp1.ch"
    
#line 1215 "decomp1.ch"
#line 1217 "decomp1.ch"
    switch ( NumberTree(stat) ) {
#line 1217 "decomp1.ch"
#line 1219 "decomp1.ch"
        case metachop::STRING : 
#line 1219 "decomp1.ch"
#line 1219 "decomp1.ch"
        _Case151 : 
#line 1219 "decomp1.ch"
#line 1219 "decomp1.ch"
            ;
#line 1219 "decomp1.ch"
#line 1219 "decomp1.ch"
            PrintString("PrintString(");
#line 1219 "decomp1.ch"
#line 1219 "decomp1.ch"
            decomp(stat);
#line 1219 "decomp1.ch"
            
#line 1219 "decomp1.ch"
#line 1219 "decomp1.ch"
            PrintString(")");
#line 1219 "decomp1.ch"
#line 1220 "decomp1.ch"
            control_stat1(stat);
#line 1220 "decomp1.ch"
#line 1221 "decomp1.ch"
            if ( withNewLine ) 
#line 1221 "decomp1.ch"
#line 1222 "decomp1.ch"
                LNewLine(1);
#line 1222 "decomp1.ch"
            
#line 1222 "decomp1.ch"
#line 1223 "decomp1.ch"
            break ;
            
#line 1223 "decomp1.ch"
#line 1225 "decomp1.ch"
        case metachop::STRING_LIST : 
#line 1225 "decomp1.ch"
#line 1225 "decomp1.ch"
            (stat=SonTree(stat, 1));
#line 1225 "decomp1.ch"
            
#line 1225 "decomp1.ch"
#line 1225 "decomp1.ch"
        _Case152 : 
#line 1225 "decomp1.ch"
#line 1225 "decomp1.ch"
            ;
#line 1225 "decomp1.ch"
#line 1225 "decomp1.ch"
            while ( ((son=(stat?stat.Nextl():(PPTREE)0))) ) 
#line 1225 "decomp1.ch"
#line 1226 "decomp1.ch"
                DecompStat(son, withNewLine);
#line 1226 "decomp1.ch"
#line 1227 "decomp1.ch"
            break ;
            
#line 1227 "decomp1.ch"
#line 1229 "decomp1.ch"
        default : 
#line 1229 "decomp1.ch"
#line 1229 "decomp1.ch"
        _Case153 : 
#line 1229 "decomp1.ch"
#line 1229 "decomp1.ch"
            ;
#line 1229 "decomp1.ch"
#line 1229 "decomp1.ch"
            decomp(stat);
#line 1229 "decomp1.ch"
            
#line 1229 "decomp1.ch"
#line 1230 "decomp1.ch"
            control_stat1(stat);
#line 1230 "decomp1.ch"
#line 1231 "decomp1.ch"
            if ( withNewLine ) 
#line 1231 "decomp1.ch"
#line 1232 "decomp1.ch"
                LNewLine(1);
#line 1232 "decomp1.ch"
            
#line 1232 "decomp1.ch"
#line 1233 "decomp1.ch"
            break ;
            
#line 1233 "decomp1.ch"
    }
#line 1233 "decomp1.ch"
    
#line 1233 "decomp1.ch"
#line 1235 "decomp1.ch"
    
#line 1235 "decomp1.ch"
#line 1235 "decomp1.ch"
}
#line 1235 "decomp1.ch"

#line 1239 "decomp1.ch"

#line 1239 "decomp1.ch"
void DecompMetachop::copy ()
#line 1239 "decomp1.ch"
{
#line 1239 "decomp1.ch"
#line 1239 "decomp1.ch"
    int _nextVal ;
    
#line 1239 "decomp1.ch"
#line 1242 "decomp1.ch"
    
    const char  *str ;
    
#line 1242 "decomp1.ch"
#line 1244 "decomp1.ch"
    str = "\n\r Metachop version 2.0, CopyRight(C) 1989-95 Eric Lavillonniere \n\r";
#line 1244 "decomp1.ch"
#line 1245 "decomp1.ch"
    _write(2, str, strlen(str));
#line 1245 "decomp1.ch"
#line 1246 "decomp1.ch"
    str = " Metachop comes with ABSOLUTELY NO WARRANTY.\n\r";
#line 1246 "decomp1.ch"
#line 1247 "decomp1.ch"
    _write(2, str, strlen(str));
#line 1247 "decomp1.ch"
#line 1248 "decomp1.ch"
    str = " This is free software, and you are welcome to redistribute it \n\r";
#line 1248 "decomp1.ch"
#line 1249 "decomp1.ch"
    _write(2, str, strlen(str));
#line 1249 "decomp1.ch"
#line 1250 "decomp1.ch"
    str = " under certain conditions.\n\r";
#line 1250 "decomp1.ch"
#line 1251 "decomp1.ch"
    _write(2, str, strlen(str));
#line 1251 "decomp1.ch"
#line 1252 "decomp1.ch"
    str = " For details see file COPYING in metachop directory.\n\r\n\r";
#line 1252 "decomp1.ch"
#line 1253 "decomp1.ch"
    _write(2, str, strlen(str));
#line 1253 "decomp1.ch"
#line 1254 "decomp1.ch"
    
#line 1254 "decomp1.ch"
#line 1254 "decomp1.ch"
}
#line 1254 "decomp1.ch"

#line 1258 "decomp1.ch"

#line 1258 "decomp1.ch"
void DecompMetachop::ChopTree ( PTREE tree, int funcAlone )
#line 1258 "decomp1.ch"
{
#line 1258 "decomp1.ch"
#line 1258 "decomp1.ch"
    int _nextVal ;
    
#line 1258 "decomp1.ch"
#line 1263 "decomp1.ch"
    copy();
#line 1263 "decomp1.ch"
#line 1264 "decomp1.ch"
    SwitchLang("metachop");
#line 1264 "decomp1.ch"
#line 1267 "decomp1.ch"
    if ( simplifyExpression ) 
#line 1267 "decomp1.ch"
#line 1268 "decomp1.ch"
        clean_tree(tree);
#line 1268 "decomp1.ch"
#line 1272 "decomp1.ch"
    PtreeToClass(tree);
#line 1272 "decomp1.ch"
#line 1275 "decomp1.ch"
    DecompCplus::ptDecomp -> Decomp(tree, funcAlone);
#line 1275 "decomp1.ch"
#line 1276 "decomp1.ch"
    AddRef(tree);
#line 1276 "decomp1.ch"
#line 1279 "decomp1.ch"
    WriteString("/*Well done my boy */ ");
#line 1279 "decomp1.ch"
#line 1280 "decomp1.ch"
    NewLine();
#line 1280 "decomp1.ch"
#line 1281 "decomp1.ch"
    
#line 1281 "decomp1.ch"
#line 1281 "decomp1.ch"
}
#line 1281 "decomp1.ch"

#line 1285 "decomp1.ch"

#line 1285 "decomp1.ch"
char *MakeTreeGenDir ( PTREE paramTree, char *name, int level )
#line 1285 "decomp1.ch"
{
#line 1285 "decomp1.ch"
#line 1285 "decomp1.ch"
    int _nextVal ;
    
#line 1285 "decomp1.ch"
#line 1288 "decomp1.ch"
    
    PTREE   tree, inter ;
#line 1288 "decomp1.ch"
    
#line 1288 "decomp1.ch"
#line 1290 "decomp1.ch"
    if ( (!paramTree) ) {
#line 1290 "decomp1.ch"
#line 1291 "decomp1.ch"
                            WriteString(name);
#line 1291 "decomp1.ch"
#line 1291 "decomp1.ch"
                            PrintString("= (PPTREE) 0;");
#line 1291 "decomp1.ch"
#line 1291 "decomp1.ch"
                            LNewLine(1);
#line 1291 "decomp1.ch"
                            
#line 1291 "decomp1.ch"
#line 1292 "decomp1.ch"
                            
#line 1292 "decomp1.ch"
#line 1292 "decomp1.ch"
                          } else 
#line 1292 "decomp1.ch"
    {
#line 1292 "decomp1.ch"
#line 1293 "decomp1.ch"
        PrintString("{");
#line 1293 "decomp1.ch"
#line 1293 "decomp1.ch"
        LNewLine(1);
#line 1293 "decomp1.ch"
        
#line 1293 "decomp1.ch"
#line 1294 "decomp1.ch"
        Tab();
#line 1294 "decomp1.ch"
        
#line 1294 "decomp1.ch"
#line 1295 "decomp1.ch"
        Mark();
#line 1295 "decomp1.ch"
        (tree=LookMeta(paramTree, name));
#line 1295 "decomp1.ch"
        
#line 1295 "decomp1.ch"
        PrintString("/* ");
#line 1295 "decomp1.ch"
        Mark();
#line 1295 "decomp1.ch"
        (inter=copytree(paramTree));
#line 1295 "decomp1.ch"
        
#line 1295 "decomp1.ch"
        {
#line 1295 "decomp1.ch"
#line 1301 "decomp1.ch"
            ItPtree it (inter) ;
            
#line 1301 "decomp1.ch"
#line 1302 "decomp1.ch"
            PPTREE  _for_elem ;
            
#line 1302 "decomp1.ch"
#line 1303 "decomp1.ch"
            while ( (for_elem = it++) ) 
#line 1303 "decomp1.ch"
#line 1304 "decomp1.ch"
                replacetree(for_elem, 0, (PTREE)0);
#line 1304 "decomp1.ch"
#line 1305 "decomp1.ch"
            if ( !isVirtMod ) 
#line 1305 "decomp1.ch"
#line 1306 "decomp1.ch"
                DumpTree(inter);
#line 1306 "decomp1.ch"
#line 1307 "decomp1.ch"
            
#line 1307 "decomp1.ch"
#line 1307 "decomp1.ch"
        }
        
#line 1307 "decomp1.ch"
        UnMark();
#line 1307 "decomp1.ch"
        
#line 1307 "decomp1.ch"
        LNewLine(1);
#line 1307 "decomp1.ch"
        
#line 1307 "decomp1.ch"
        PrintString("*/");
#line 1307 "decomp1.ch"
        LNewLine(1);
#line 1307 "decomp1.ch"
        
#line 1307 "decomp1.ch"
        PrintString("{");
#line 1307 "decomp1.ch"
        Tab();
#line 1307 "decomp1.ch"
        
#line 1307 "decomp1.ch"
        Mark();
#line 1307 "decomp1.ch"
        PrintString("ptStackTree = 0 ;");
#line 1307 "decomp1.ch"
        LNewLine(1);
#line 1307 "decomp1.ch"
        
#line 1307 "decomp1.ch"
        MakeTreeGenDirRec(paramTree, -1);
#line 1307 "decomp1.ch"
        WriteString(name);
#line 1307 "decomp1.ch"
        PrintString(" = PopTree ;");
#line 1307 "decomp1.ch"
        LNewLine(1);
#line 1307 "decomp1.ch"
        
#line 1307 "decomp1.ch"
        UnMark();
#line 1307 "decomp1.ch"
        
#line 1307 "decomp1.ch"
        PrintString("}");
#line 1307 "decomp1.ch"
        UnMark();
#line 1307 "decomp1.ch"
        
#line 1307 "decomp1.ch"
#line 1317 "decomp1.ch"
        Tab();
#line 1317 "decomp1.ch"
        
#line 1317 "decomp1.ch"
#line 1318 "decomp1.ch"
        if ( tree ) {
#line 1318 "decomp1.ch"
#line 1319 "decomp1.ch"
                        Mark();
#line 1319 "decomp1.ch"
                        decomp(tree);
#line 1319 "decomp1.ch"
                        
#line 1319 "decomp1.ch"
                        UnMark();
#line 1319 "decomp1.ch"
                        
#line 1319 "decomp1.ch"
#line 1321 "decomp1.ch"
                        LNewLine(1);
#line 1321 "decomp1.ch"
                        
#line 1321 "decomp1.ch"
#line 1322 "decomp1.ch"
                        
#line 1322 "decomp1.ch"
#line 1322 "decomp1.ch"
                     }
#line 1322 "decomp1.ch"
#line 1323 "decomp1.ch"
        PrintString("}");
#line 1323 "decomp1.ch"
#line 1323 "decomp1.ch"
        LNewLine(1);
#line 1323 "decomp1.ch"
        
#line 1323 "decomp1.ch"
#line 1324 "decomp1.ch"
        
#line 1324 "decomp1.ch"
#line 1324 "decomp1.ch"
    }
    
#line 1324 "decomp1.ch"
#line 1325 "decomp1.ch"
    return (name);
    
#line 1325 "decomp1.ch"
#line 1326 "decomp1.ch"
    
#line 1326 "decomp1.ch"
#line 1326 "decomp1.ch"
}
#line 1326 "decomp1.ch"

#line 1326 "decomp1.ch"
#line 1326 "decomp1.ch"
static void decomp1_Anchor () { int i = 1;} 
#line 1326 "decomp1.ch"
/*Well done my boy */ 
#line 1326 "decomp1.ch"

