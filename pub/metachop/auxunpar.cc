
#line 29 "auxunpar.ch"
/*************************************************************************/
#line 29 "auxunpar.ch"
/*                                                                       */
#line 29 "auxunpar.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 29 "auxunpar.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 29 "auxunpar.ch"
/*                  Eric Lavillonniere                                   */
#line 29 "auxunpar.ch"
/*                                                                       */
#line 29 "auxunpar.ch"
/*************************************************************************/
#line 29 "auxunpar.ch"

#line 29 "auxunpar.ch"
#include "token.h"
#line 29 "auxunpar.ch"
#define decomp decomp_metachop
#line 29 "auxunpar.ch"

#line 29 "auxunpar.ch"
#ifndef for_elem
#line 29 "auxunpar.ch"
#line 29 "auxunpar.ch"
#define for_elem _for_elem

#line 29 "auxunpar.ch"
#line 29 "auxunpar.ch"

#line 29 "auxunpar.ch"
#endif
#ifdef INCONNU
#line 29 "auxunpar.ch"
#line 29 "auxunpar.ch"
PTREE   for_elem ;
#line 29 "auxunpar.ch"

#line 29 "auxunpar.ch"
#line 29 "auxunpar.ch"

#line 29 "auxunpar.ch"
#endif
#include "decmetac.h"
#include <fcntl.h>

static char stringNumb [200];
extern char *nameDefine ;
int nbVerify = 0 ;
int nbFor = 0 ;
extern int  compiledLine ;
extern char *theFileName ;
void    StackFunction (char *name, PTREE tree) ;
extern int  storeValMax ;
extern int  retValMax ;

#include "newline.h"

#line 50 "auxunpar.ch"

#line 50 "auxunpar.ch"
void EqualTree ( const char *ident, const char *dest, int level, PTREE tree, int son )
#line 50 "auxunpar.ch"
{
#line 50 "auxunpar.ch"
    register PPTREE _inter ;
#line 50 "auxunpar.ch"

#line 50 "auxunpar.ch"
#line 50 "auxunpar.ch"
    int _retVal [2];
    
#line 50 "auxunpar.ch"
#line 50 "auxunpar.ch"
    PPTREE  _storeVal [2];
    
#line 50 "auxunpar.ch"
#line 50 "auxunpar.ch"
    int _nextVal ;
    
#line 50 "auxunpar.ch"
#line 53 "auxunpar.ch"
    PTREE   ptTree ;
#line 53 "auxunpar.ch"
    
#line 53 "auxunpar.ch"
#line 54 "auxunpar.ch"
    int currentSon ;
    
#line 54 "auxunpar.ch"
#line 55 "auxunpar.ch"
    char    *interString ;
    
#line 55 "auxunpar.ch"
#line 57 "auxunpar.ch"
    Mark();
#line 57 "auxunpar.ch"
#line 58 "auxunpar.ch"
    PrintString("(");
#line 58 "auxunpar.ch"
#line 59 "auxunpar.ch"
    if ( level ) {
#line 59 "auxunpar.ch"
#line 60 "auxunpar.ch"
                    if ( level > storeValMax ) 
#line 60 "auxunpar.ch"
#line 61 "auxunpar.ch"
                        storeValMax = level ;
#line 61 "auxunpar.ch"
#line 62 "auxunpar.ch"
                    if ( level > retValMax ) 
#line 62 "auxunpar.ch"
#line 63 "auxunpar.ch"
                        retValMax = level ;
#line 63 "auxunpar.ch"
#line 64 "auxunpar.ch"
                    _itoa(level, stringNumb, 10);
#line 64 "auxunpar.ch"
#line 65 "auxunpar.ch"
                    PrintString("_retVal[");
#line 65 "auxunpar.ch"
#line 65 "auxunpar.ch"
                    WriteString(stringNumb);
#line 65 "auxunpar.ch"
#line 65 "auxunpar.ch"
                    PrintString("]=((_storeVal[");
#line 65 "auxunpar.ch"
#line 65 "auxunpar.ch"
                    WriteString(stringNumb);
#line 65 "auxunpar.ch"
#line 65 "auxunpar.ch"
                    PrintString("]=_inter,_inter=SonTree(_inter,");
#line 65 "auxunpar.ch"
#line 66 "auxunpar.ch"
                    _itoa(son, stringNumb, 10);
#line 66 "auxunpar.ch"
#line 67 "auxunpar.ch"
                    WriteString(stringNumb);
#line 67 "auxunpar.ch"
#line 67 "auxunpar.ch"
                    PrintString(")");
#line 67 "auxunpar.ch"
#line 68 "auxunpar.ch"
                    if ( dest ) {
#line 68 "auxunpar.ch"
#line 69 "auxunpar.ch"
                                    PrintString(",(");
#line 69 "auxunpar.ch"
#line 69 "auxunpar.ch"
                                    WriteString(dest);
#line 69 "auxunpar.ch"
#line 69 "auxunpar.ch"
                                    PrintString("=_inter)");
#line 69 "auxunpar.ch"
#line 70 "auxunpar.ch"
                                    
#line 70 "auxunpar.ch"
#line 70 "auxunpar.ch"
                                 }
#line 70 "auxunpar.ch"
#line 71 "auxunpar.ch"
                    PrintString(",1) &&");
#line 71 "auxunpar.ch"
#line 72 "auxunpar.ch"
                    
#line 72 "auxunpar.ch"
#line 72 "auxunpar.ch"
                  } else 
#line 72 "auxunpar.ch"
    {
#line 72 "auxunpar.ch"
#line 73 "auxunpar.ch"
        PrintString("(_inter = (PPTREE)");
#line 73 "auxunpar.ch"
#line 74 "auxunpar.ch"
        if ( ident ) 
#line 74 "auxunpar.ch"
#line 75 "auxunpar.ch"
            WriteString(ident);
#line 75 "auxunpar.ch"
#line 76 "auxunpar.ch"
        if ( dest ) {
#line 76 "auxunpar.ch"
#line 77 "auxunpar.ch"
                        PrintString(",(");
#line 77 "auxunpar.ch"
#line 77 "auxunpar.ch"
                        WriteString(dest);
#line 77 "auxunpar.ch"
#line 77 "auxunpar.ch"
                        PrintString("=_inter))");
#line 77 "auxunpar.ch"
#line 78 "auxunpar.ch"
                        
#line 78 "auxunpar.ch"
#line 78 "auxunpar.ch"
                     }
#line 78 "auxunpar.ch"
#line 79 "auxunpar.ch"
        PrintString(",1) && ");
#line 79 "auxunpar.ch"
#line 80 "auxunpar.ch"
        
#line 80 "auxunpar.ch"
#line 80 "auxunpar.ch"
    }
    
#line 80 "auxunpar.ch"
#line 81 "auxunpar.ch"
    LNewLine(1);
#line 81 "auxunpar.ch"
    
#line 81 "auxunpar.ch"
#line 82 "auxunpar.ch"
    Tab();
#line 82 "auxunpar.ch"
    
#line 82 "auxunpar.ch"
#line 83 "auxunpar.ch"
    Mark();
#line 83 "auxunpar.ch"
#line 84 "auxunpar.ch"
    switch ( NumberTree(tree) ) {
#line 84 "auxunpar.ch"
#line 86 "auxunpar.ch"
        case LIST : 
#line 86 "auxunpar.ch"
#line 86 "auxunpar.ch"
        _Case8 : 
#line 86 "auxunpar.ch"
#line 86 "auxunpar.ch"
            ;
#line 86 "auxunpar.ch"
#line 86 "auxunpar.ch"
            {
#line 86 "auxunpar.ch"
#line 87 "auxunpar.ch"
                PrintString("(NumberTree(_inter) == LIST) &&");
#line 87 "auxunpar.ch"
#line 87 "auxunpar.ch"
                LNewLine(1);
#line 87 "auxunpar.ch"
                
#line 87 "auxunpar.ch"
#line 88 "auxunpar.ch"
                strcpy(stringNumb, "_Ver");
#line 88 "auxunpar.ch"
#line 89 "auxunpar.ch"
                _itoa(nbVerify++, stringNumb + 4, 10);
#line 89 "auxunpar.ch"
#line 90 "auxunpar.ch"
                strcpy(stringNumb + strlen(stringNumb), nameDefine);
#line 90 "auxunpar.ch"
#line 91 "auxunpar.ch"
                WriteString(stringNumb);
#line 91 "auxunpar.ch"
#line 91 "auxunpar.ch"
                PrintString("(_inter) )");
#line 91 "auxunpar.ch"
#line 91 "auxunpar.ch"
                LNewLine(1);
#line 91 "auxunpar.ch"
                
#line 91 "auxunpar.ch"
#line 92 "auxunpar.ch"
                StackFunction(AllocString(stringNumb), (PTREE)SonTree(tree, 1));
#line 92 "auxunpar.ch"
#line 93 "auxunpar.ch"
                if ( level ) {
#line 93 "auxunpar.ch"
#line 94 "auxunpar.ch"
                                PrintString(",");
#line 94 "auxunpar.ch"
#line 94 "auxunpar.ch"
                                LNewLine(1);
#line 94 "auxunpar.ch"
                                
#line 94 "auxunpar.ch"
#line 95 "auxunpar.ch"
                                if ( level > storeValMax ) 
#line 95 "auxunpar.ch"
#line 96 "auxunpar.ch"
                                    storeValMax = level ;
#line 96 "auxunpar.ch"
#line 97 "auxunpar.ch"
                                if ( level > retValMax ) 
#line 97 "auxunpar.ch"
#line 98 "auxunpar.ch"
                                    retValMax = level ;
#line 98 "auxunpar.ch"
#line 99 "auxunpar.ch"
                                _itoa(level, stringNumb, 10);
#line 99 "auxunpar.ch"
#line 100 "auxunpar.ch"
                                PrintString("(_inter=_storeVal[");
#line 100 "auxunpar.ch"
#line 100 "auxunpar.ch"
                                WriteString(stringNumb);
#line 100 "auxunpar.ch"
#line 100 "auxunpar.ch"
                                PrintString("],1),_retVal[");
#line 100 "auxunpar.ch"
#line 100 "auxunpar.ch"
                                WriteString(stringNumb);
#line 100 "auxunpar.ch"
#line 100 "auxunpar.ch"
                                PrintString("]) &&");
#line 100 "auxunpar.ch"
#line 101 "auxunpar.ch"
                                UnMark();
#line 101 "auxunpar.ch"
#line 102 "auxunpar.ch"
                                LNewLine(1);
#line 102 "auxunpar.ch"
                                
#line 102 "auxunpar.ch"
#line 103 "auxunpar.ch"
                                
#line 103 "auxunpar.ch"
#line 103 "auxunpar.ch"
                              } else 
#line 103 "auxunpar.ch"
#line 104 "auxunpar.ch"
                    UnMark();
#line 104 "auxunpar.ch"
                
#line 104 "auxunpar.ch"
#line 105 "auxunpar.ch"
                
#line 105 "auxunpar.ch"
#line 105 "auxunpar.ch"
            }
            
#line 105 "auxunpar.ch"
#line 106 "auxunpar.ch"
            break ;
            
#line 106 "auxunpar.ch"
#line 108 "auxunpar.ch"
        case metachop::NODE_TREE : 
#line 108 "auxunpar.ch"
#line 108 "auxunpar.ch"
        _Case9 : 
#line 108 "auxunpar.ch"
#line 108 "auxunpar.ch"
            ;
#line 108 "auxunpar.ch"
#line 108 "auxunpar.ch"
            {
#line 108 "auxunpar.ch"
#line 109 "auxunpar.ch"
                if ( (ptTree=SonTree(tree, 1)) ) {
#line 109 "auxunpar.ch"
#line 110 "auxunpar.ch"
                                                        (ptTree=SonTree(ptTree, 1));
#line 110 "auxunpar.ch"
                                                        
#line 110 "auxunpar.ch"
#line 111 "auxunpar.ch"
                                                        if ( ((_inter = (PPTREE)ptTree,1) && 
#line 111 "auxunpar.ch"
                                                                (NumberTree(_inter) == metachop::IDENT) &&
#line 111 "auxunpar.ch"
                                                                1) ) {
#line 111 "auxunpar.ch"
#line 112 "auxunpar.ch"
                                                                        PrintString("(NumberTree(_inter) == ");
#line 112 "auxunpar.ch"
#line 113 "auxunpar.ch"
                                                                        if ( cplusGen ) {
#line 113 "auxunpar.ch"
#line 114 "auxunpar.ch"
                                                                                            WriteString(NameOfNodePlus(Value(SonTree(ptTree, 1))));
#line 114 "auxunpar.ch"
#line 115 "auxunpar.ch"
                                                                                            
#line 115 "auxunpar.ch"
#line 115 "auxunpar.ch"
                                                                                         } else 
#line 115 "auxunpar.ch"
                                                                        {
#line 115 "auxunpar.ch"
#line 116 "auxunpar.ch"
                                                                            WriteString(NameOfNode(Value(SonTree(ptTree, 1))));
#line 116 "auxunpar.ch"
#line 117 "auxunpar.ch"
                                                                            
#line 117 "auxunpar.ch"
#line 117 "auxunpar.ch"
                                                                        }
                                                                        
#line 117 "auxunpar.ch"
#line 118 "auxunpar.ch"
                                                                        PrintString(") &&");
#line 118 "auxunpar.ch"
#line 118 "auxunpar.ch"
                                                                        LNewLine(1);
#line 118 "auxunpar.ch"
                                                                        
#line 118 "auxunpar.ch"
#line 119 "auxunpar.ch"
                                                                        
#line 119 "auxunpar.ch"
#line 119 "auxunpar.ch"
                                                                     } else 
#line 119 "auxunpar.ch"
                                                        if ( ((_inter = (PPTREE)ptTree,1) && 
#line 119 "auxunpar.ch"
                                                                (NumberTree(_inter) == metachop::QUALIFIED) &&
#line 119 "auxunpar.ch"
                                                                1) ) {
#line 119 "auxunpar.ch"
#line 120 "auxunpar.ch"
                                                                        PrintString("(NumberTree(_inter) == ");
#line 120 "auxunpar.ch"
#line 120 "auxunpar.ch"
                                                                        WriteString(Value(ptTree [1]));
#line 120 "auxunpar.ch"
#line 120 "auxunpar.ch"
                                                                        WriteString("::");
#line 120 "auxunpar.ch"
#line 121 "auxunpar.ch"
                                                                        WriteString(Value(ptTree [2]));
#line 121 "auxunpar.ch"
#line 121 "auxunpar.ch"
                                                                        PrintString(") &&");
#line 121 "auxunpar.ch"
#line 121 "auxunpar.ch"
                                                                        LNewLine(1);
#line 121 "auxunpar.ch"
                                                                        
#line 121 "auxunpar.ch"
#line 122 "auxunpar.ch"
                                                                        
#line 122 "auxunpar.ch"
#line 122 "auxunpar.ch"
                                                                     }
#line 122 "auxunpar.ch"
#line 123 "auxunpar.ch"
                                                        currentSon = 1 ;
#line 123 "auxunpar.ch"
#line 124 "auxunpar.ch"
                                                        (tree=SonTree(SonTree(tree, 1), 2));
#line 124 "auxunpar.ch"
                                                        
#line 124 "auxunpar.ch"
#line 128 "auxunpar.ch"
                                                        while ( tree ) {
#line 128 "auxunpar.ch"
#line 129 "auxunpar.ch"
                                                                            (ptTree=SonTree(tree, 1));
#line 129 "auxunpar.ch"
                                                                            
#line 129 "auxunpar.ch"
#line 133 "auxunpar.ch"
                                                                            if ( !(((_inter = (PPTREE)ptTree,1) && 
#line 133 "auxunpar.ch"
                                                                                        (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 133 "auxunpar.ch"
                                                                                        1)) ) {
#line 133 "auxunpar.ch"
#line 134 "auxunpar.ch"
                                                                                                if ( ((_inter = (PPTREE)ptTree,1) && 
#line 134 "auxunpar.ch"
                                                                                                        (NumberTree(_inter) == metachop::IDENT) &&
#line 134 "auxunpar.ch"
                                                                                                        1) ) {
#line 134 "auxunpar.ch"
#line 134 "auxunpar.ch"
                                                                                                _If10 : 
#line 134 "auxunpar.ch"
#line 134 "auxunpar.ch"
                                                                                                    ;
#line 134 "auxunpar.ch"
#line 134 "auxunpar.ch"
                                                                                                    goto _If11 ;
                                                                                                    
#line 134 "auxunpar.ch"
#line 134 "auxunpar.ch"
                                                                                                } else 
#line 137 "auxunpar.ch"
                                                                                                if ( ((_inter = (PPTREE)ptTree,1) && 
#line 137 "auxunpar.ch"
                                                                                                        (NumberTree(_inter) == metachop::AFF) &&
#line 137 "auxunpar.ch"
                                                                                                        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 137 "auxunpar.ch"
                                                                                                            (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 137 "auxunpar.ch"
                                                                                                            1),
#line 137 "auxunpar.ch"
                                                                                                            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 137 "auxunpar.ch"
                                                                                                        1) ) {
#line 137 "auxunpar.ch"
#line 137 "auxunpar.ch"
                                                                                                _If11 : 
#line 137 "auxunpar.ch"
#line 137 "auxunpar.ch"
                                                                                                    ;
#line 137 "auxunpar.ch"
#line 137 "auxunpar.ch"
                                                                                                    ((_inter = (PPTREE)ptTree,1) && 
#line 137 "auxunpar.ch"
                                                                                                        (NumberTree(_inter) == metachop::AFF) &&
#line 137 "auxunpar.ch"
                                                                                                        ((ptTree=SonTree(_inter,1)),1) &&
#line 137 "auxunpar.ch"
                                                                                                        1);
#line 137 "auxunpar.ch"
                                                                                                    ;
#line 137 "auxunpar.ch"
#line 138 "auxunpar.ch"
                                                                                                    PrintString("((");
#line 138 "auxunpar.ch"
#line 138 "auxunpar.ch"
                                                                                                    WriteString(Value(SonTree(ptTree, 1)));
#line 138 "auxunpar.ch"
#line 138 "auxunpar.ch"
                                                                                                    PrintString("=SonTree(_inter,");
#line 138 "auxunpar.ch"
#line 139 "auxunpar.ch"
                                                                                                    _itoa(currentSon, stringNumb, 10);
#line 139 "auxunpar.ch"
#line 140 "auxunpar.ch"
                                                                                                    WriteString(stringNumb);
#line 140 "auxunpar.ch"
#line 140 "auxunpar.ch"
                                                                                                    PrintString(")),1) &&");
#line 140 "auxunpar.ch"
#line 140 "auxunpar.ch"
                                                                                                    LNewLine(1);
#line 140 "auxunpar.ch"
                                                                                                    
#line 140 "auxunpar.ch"
#line 140 "auxunpar.ch"
                                                                                                } else 
#line 143 "auxunpar.ch"
                                                                                                if ( ((_inter = (PPTREE)ptTree,1) && 
#line 143 "auxunpar.ch"
                                                                                                        (NumberTree(_inter) == metachop::AFF) &&
#line 143 "auxunpar.ch"
                                                                                                        1) ) {
#line 143 "auxunpar.ch"
#line 143 "auxunpar.ch"
                                                                                                _If12 : 
#line 143 "auxunpar.ch"
#line 143 "auxunpar.ch"
                                                                                                    ;
#line 143 "auxunpar.ch"
#line 143 "auxunpar.ch"
                                                                                                    EqualTree((const char *)0, interString = AllocString(BrainyValue(ptTree)), level + 1, PTREE(SonTree(ptTree, 2)), currentSon);
#line 143 "auxunpar.ch"
#line 145 "auxunpar.ch"
                                                                                                    free(interString);
#line 145 "auxunpar.ch"
#line 145 "auxunpar.ch"
                                                                                                } else 
#line 148 "auxunpar.ch"
                                                                                                if ( ((_inter = (PPTREE)ptTree,1) && 
#line 148 "auxunpar.ch"
                                                                                                        (NumberTree(_inter) == metachop::NIL) &&
#line 148 "auxunpar.ch"
                                                                                                        1) ) {
#line 148 "auxunpar.ch"
#line 148 "auxunpar.ch"
                                                                                                _If13 : 
#line 148 "auxunpar.ch"
#line 148 "auxunpar.ch"
                                                                                                    ;
#line 148 "auxunpar.ch"
#line 148 "auxunpar.ch"
                                                                                                    PrintString("(!SonTree(_inter,");
#line 148 "auxunpar.ch"
#line 149 "auxunpar.ch"
                                                                                                    _itoa(currentSon, stringNumb, 10);
#line 149 "auxunpar.ch"
#line 150 "auxunpar.ch"
                                                                                                    WriteString(stringNumb);
#line 150 "auxunpar.ch"
#line 150 "auxunpar.ch"
                                                                                                    PrintString(")) &&");
#line 150 "auxunpar.ch"
#line 150 "auxunpar.ch"
                                                                                                    LNewLine(1);
#line 150 "auxunpar.ch"
                                                                                                    
#line 150 "auxunpar.ch"
#line 150 "auxunpar.ch"
                                                                                                } else 
#line 153 "auxunpar.ch"
                                                                                                if ( ((_inter = (PPTREE)ptTree,1) && 
#line 153 "auxunpar.ch"
                                                                                                        (NumberTree(_inter) == metachop::STRING) &&
#line 153 "auxunpar.ch"
                                                                                                        1) ) {
#line 153 "auxunpar.ch"
#line 153 "auxunpar.ch"
                                                                                                _If14 : 
#line 153 "auxunpar.ch"
#line 153 "auxunpar.ch"
                                                                                                    ;
#line 153 "auxunpar.ch"
#line 153 "auxunpar.ch"
                                                                                                    PrintString("(!strcmp(Value(SonTree(_inter,");
#line 153 "auxunpar.ch"
#line 154 "auxunpar.ch"
                                                                                                    _itoa(currentSon, stringNumb, 10);
#line 154 "auxunpar.ch"
#line 155 "auxunpar.ch"
                                                                                                    WriteString(stringNumb);
#line 155 "auxunpar.ch"
#line 155 "auxunpar.ch"
                                                                                                    PrintString(")),");
#line 155 "auxunpar.ch"
#line 155 "auxunpar.ch"
                                                                                                    decomp(ptTree);
#line 155 "auxunpar.ch"
                                                                                                    
#line 155 "auxunpar.ch"
#line 155 "auxunpar.ch"
                                                                                                    PrintString(")) &&");
#line 155 "auxunpar.ch"
#line 155 "auxunpar.ch"
                                                                                                    LNewLine(1);
#line 155 "auxunpar.ch"
                                                                                                    
#line 155 "auxunpar.ch"
#line 155 "auxunpar.ch"
                                                                                                } else 
#line 157 "auxunpar.ch"
                                                                                                if ( 1 ) {
#line 157 "auxunpar.ch"
#line 157 "auxunpar.ch"
                                                                                                _If15 : 
#line 157 "auxunpar.ch"
#line 157 "auxunpar.ch"
                                                                                                    ;
#line 157 "auxunpar.ch"
#line 157 "auxunpar.ch"
                                                                                                    EqualTree((const char *)0, (const char *)0, level + 1, ptTree, currentSon);
#line 157 "auxunpar.ch"
#line 157 "auxunpar.ch"
                                                                                                }
#line 157 "auxunpar.ch"
#line 159 "auxunpar.ch"
                                                                                                
#line 159 "auxunpar.ch"
#line 159 "auxunpar.ch"
                                                                                              }
#line 159 "auxunpar.ch"
#line 160 "auxunpar.ch"
                                                                            (tree=SonTree(tree, 2));
#line 160 "auxunpar.ch"
                                                                            
#line 160 "auxunpar.ch"
#line 161 "auxunpar.ch"
                                                                            currentSon++ ;
#line 161 "auxunpar.ch"
#line 162 "auxunpar.ch"
                                                                            
#line 162 "auxunpar.ch"
#line 162 "auxunpar.ch"
                                                                        }
#line 162 "auxunpar.ch"
#line 163 "auxunpar.ch"
                                                        WriteString("1)");
#line 163 "auxunpar.ch"
#line 164 "auxunpar.ch"
                                                        if ( level ) {
#line 164 "auxunpar.ch"
#line 165 "auxunpar.ch"
                                                                        PrintString(",");
#line 165 "auxunpar.ch"
#line 165 "auxunpar.ch"
                                                                        LNewLine(1);
#line 165 "auxunpar.ch"
                                                                        
#line 165 "auxunpar.ch"
#line 166 "auxunpar.ch"
                                                                        if ( level > storeValMax ) 
#line 166 "auxunpar.ch"
#line 167 "auxunpar.ch"
                                                                            storeValMax = level ;
#line 167 "auxunpar.ch"
#line 168 "auxunpar.ch"
                                                                        if ( level > retValMax ) 
#line 168 "auxunpar.ch"
#line 169 "auxunpar.ch"
                                                                            retValMax = level ;
#line 169 "auxunpar.ch"
#line 170 "auxunpar.ch"
                                                                        _itoa(level, stringNumb, 10);
#line 170 "auxunpar.ch"
#line 171 "auxunpar.ch"
                                                                        PrintString("(_inter=_storeVal[");
#line 171 "auxunpar.ch"
#line 171 "auxunpar.ch"
                                                                        WriteString(stringNumb);
#line 171 "auxunpar.ch"
#line 171 "auxunpar.ch"
                                                                        PrintString("],1),_retVal[");
#line 171 "auxunpar.ch"
#line 171 "auxunpar.ch"
                                                                        WriteString(stringNumb);
#line 171 "auxunpar.ch"
#line 171 "auxunpar.ch"
                                                                        PrintString("]) &&");
#line 171 "auxunpar.ch"
#line 172 "auxunpar.ch"
                                                                        UnMark();
#line 172 "auxunpar.ch"
#line 173 "auxunpar.ch"
                                                                        LNewLine(1);
#line 173 "auxunpar.ch"
                                                                        
#line 173 "auxunpar.ch"
#line 174 "auxunpar.ch"
                                                                        
#line 174 "auxunpar.ch"
#line 174 "auxunpar.ch"
                                                                      } else 
#line 174 "auxunpar.ch"
#line 175 "auxunpar.ch"
                                                            UnMark();
#line 175 "auxunpar.ch"
                                                        
#line 175 "auxunpar.ch"
#line 176 "auxunpar.ch"
                                                        
#line 176 "auxunpar.ch"
#line 176 "auxunpar.ch"
                                                     }
#line 176 "auxunpar.ch"
#line 177 "auxunpar.ch"
                break ;
                
#line 177 "auxunpar.ch"
#line 178 "auxunpar.ch"
                
#line 178 "auxunpar.ch"
#line 178 "auxunpar.ch"
            }
            
#line 178 "auxunpar.ch"
    }
#line 178 "auxunpar.ch"
    
#line 178 "auxunpar.ch"
#line 180 "auxunpar.ch"
    UnMark();
#line 180 "auxunpar.ch"
#line 181 "auxunpar.ch"
    
#line 181 "auxunpar.ch"
#line 181 "auxunpar.ch"
}
#line 181 "auxunpar.ch"

#line 185 "auxunpar.ch"

#line 185 "auxunpar.ch"
void DumpAFunction ( char *name, PTREE tree )
#line 185 "auxunpar.ch"
{
#line 185 "auxunpar.ch"
#line 185 "auxunpar.ch"
    int _nextVal ;
    
#line 185 "auxunpar.ch"
#line 188 "auxunpar.ch"
    WriteString(name);
#line 188 "auxunpar.ch"
#line 188 "auxunpar.ch"
    WriteString("(tree)");
#line 188 "auxunpar.ch"
#line 189 "auxunpar.ch"
    NewLine();
#line 189 "auxunpar.ch"
#line 190 "auxunpar.ch"
    WriteString("PPTREE tree;");
#line 190 "auxunpar.ch"
#line 191 "auxunpar.ch"
    NewLine();
#line 191 "auxunpar.ch"
#line 192 "auxunpar.ch"
    WriteString("{");
#line 192 "auxunpar.ch"
#line 193 "auxunpar.ch"
    NewLine();
#line 193 "auxunpar.ch"
#line 194 "auxunpar.ch"
    Tab();
#line 194 "auxunpar.ch"
#line 195 "auxunpar.ch"
    Mark();
#line 195 "auxunpar.ch"
#line 196 "auxunpar.ch"
    WriteString("register PPTREE _ptTree;");
#line 196 "auxunpar.ch"
#line 197 "auxunpar.ch"
    NewLine();
#line 197 "auxunpar.ch"
#line 198 "auxunpar.ch"
    WriteString("int _retVal[50];");
#line 198 "auxunpar.ch"
#line 199 "auxunpar.ch"
    NewLine();
#line 199 "auxunpar.ch"
#line 200 "auxunpar.ch"
    WriteString("PPTREE _storeVal[50],_inter;");
#line 200 "auxunpar.ch"
#line 201 "auxunpar.ch"
    NewLine();
#line 201 "auxunpar.ch"
#line 202 "auxunpar.ch"
    WriteString("while (tree) {");
#line 202 "auxunpar.ch"
#line 203 "auxunpar.ch"
    NewLine();
#line 203 "auxunpar.ch"
#line 204 "auxunpar.ch"
    Tab();
#line 204 "auxunpar.ch"
#line 205 "auxunpar.ch"
    Mark();
#line 205 "auxunpar.ch"
#line 206 "auxunpar.ch"
    WriteString("_ptTree = SonTree(tree,1) ;");
#line 206 "auxunpar.ch"
#line 207 "auxunpar.ch"
    NewLine();
#line 207 "auxunpar.ch"
#line 208 "auxunpar.ch"
    if ( tree ) {
#line 208 "auxunpar.ch"
#line 209 "auxunpar.ch"
                    WriteString("if (");
#line 209 "auxunpar.ch"
#line 210 "auxunpar.ch"
                    Mark();
#line 210 "auxunpar.ch"
#line 211 "auxunpar.ch"
                    while ( tree ) {
#line 211 "auxunpar.ch"
#line 212 "auxunpar.ch"
                                        WriteString("!");
#line 212 "auxunpar.ch"
#line 213 "auxunpar.ch"
                                        EqualTree("_ptTree", (char *)0, 0, PTREE(SonTree(tree, 1)), 0);
#line 213 "auxunpar.ch"
#line 214 "auxunpar.ch"
                                        WriteString(" &&");
#line 214 "auxunpar.ch"
#line 215 "auxunpar.ch"
                                        NewLine();
#line 215 "auxunpar.ch"
#line 216 "auxunpar.ch"
                                        (tree=SonTree(tree, 2));
#line 216 "auxunpar.ch"
                                        
#line 216 "auxunpar.ch"
#line 217 "auxunpar.ch"
                                        
#line 217 "auxunpar.ch"
#line 217 "auxunpar.ch"
                                    }
#line 217 "auxunpar.ch"
#line 218 "auxunpar.ch"
                    WriteString("1) ");
#line 218 "auxunpar.ch"
#line 219 "auxunpar.ch"
                    UnMark();
#line 219 "auxunpar.ch"
#line 220 "auxunpar.ch"
                    NewLine();
#line 220 "auxunpar.ch"
#line 221 "auxunpar.ch"
                    Tab();
#line 221 "auxunpar.ch"
#line 222 "auxunpar.ch"
                    WriteString("return(0);");
#line 222 "auxunpar.ch"
#line 223 "auxunpar.ch"
                    NewLine();
#line 223 "auxunpar.ch"
#line 224 "auxunpar.ch"
                    
#line 224 "auxunpar.ch"
#line 224 "auxunpar.ch"
                 }
#line 224 "auxunpar.ch"
#line 225 "auxunpar.ch"
    WriteString("tree = SonTree(tree,2);");
#line 225 "auxunpar.ch"
#line 226 "auxunpar.ch"
    UnMark();
#line 226 "auxunpar.ch"
#line 227 "auxunpar.ch"
    NewLine();
#line 227 "auxunpar.ch"
#line 228 "auxunpar.ch"
    WriteString("}");
#line 228 "auxunpar.ch"
#line 229 "auxunpar.ch"
    NewLine();
#line 229 "auxunpar.ch"
#line 230 "auxunpar.ch"
    WriteString("return(1);");
#line 230 "auxunpar.ch"
#line 231 "auxunpar.ch"
    UnMark();
#line 231 "auxunpar.ch"
#line 232 "auxunpar.ch"
    NewLine();
#line 232 "auxunpar.ch"
#line 233 "auxunpar.ch"
    WriteString("}");
#line 233 "auxunpar.ch"
#line 234 "auxunpar.ch"
    NewLine();
#line 234 "auxunpar.ch"
#line 235 "auxunpar.ch"
    
#line 235 "auxunpar.ch"
#line 235 "auxunpar.ch"
}
#line 235 "auxunpar.ch"

typedef struct funcElem {
    char    *name ;
    PPTREE  tree ;
    struct funcElem *next ;
}   FUNC_ELEM,  *PFUNC_ELEM ;

PFUNC_ELEM  listFunc, listFuncFree = (PFUNC_ELEM)0 ;

#line 247 "auxunpar.ch"

#line 247 "auxunpar.ch"
PFUNC_ELEM AllocFuncElem ()
#line 247 "auxunpar.ch"
{
#line 247 "auxunpar.ch"
#line 247 "auxunpar.ch"
    int _nextVal ;
    
#line 247 "auxunpar.ch"
#line 250 "auxunpar.ch"
    PFUNC_ELEM  ptFunc ;
    
#line 250 "auxunpar.ch"
#line 252 "auxunpar.ch"
    if ( listFuncFree ) {
#line 252 "auxunpar.ch"
#line 253 "auxunpar.ch"
                            ptFunc = listFuncFree ;
#line 253 "auxunpar.ch"
#line 254 "auxunpar.ch"
                            listFuncFree = listFuncFree -> next ;
#line 254 "auxunpar.ch"
#line 255 "auxunpar.ch"
                            
#line 255 "auxunpar.ch"
#line 255 "auxunpar.ch"
                         } else 
#line 255 "auxunpar.ch"
#line 256 "auxunpar.ch"
        ptFunc = (PFUNC_ELEM)malloc(sizeof(FUNC_ELEM));
#line 256 "auxunpar.ch"
    
#line 256 "auxunpar.ch"
#line 257 "auxunpar.ch"
    return (ptFunc);
    
#line 257 "auxunpar.ch"
#line 258 "auxunpar.ch"
    
#line 258 "auxunpar.ch"
#line 258 "auxunpar.ch"
}
#line 258 "auxunpar.ch"

#line 262 "auxunpar.ch"

#line 262 "auxunpar.ch"
void StackFunction ( char *name, PTREE tree )
#line 262 "auxunpar.ch"
{
#line 262 "auxunpar.ch"
#line 262 "auxunpar.ch"
    int _nextVal ;
    
#line 262 "auxunpar.ch"
#line 265 "auxunpar.ch"
    PFUNC_ELEM  pFuncElem = AllocFuncElem();
    
#line 265 "auxunpar.ch"
#line 267 "auxunpar.ch"
    AddRef(tree);
#line 267 "auxunpar.ch"
#line 268 "auxunpar.ch"
    pFuncElem -> name = name ;
#line 268 "auxunpar.ch"
#line 269 "auxunpar.ch"
    pFuncElem -> tree = tree ;
#line 269 "auxunpar.ch"
#line 270 "auxunpar.ch"
    pFuncElem -> next = listFunc ;
#line 270 "auxunpar.ch"
#line 271 "auxunpar.ch"
    listFunc = pFuncElem ;
#line 271 "auxunpar.ch"
#line 272 "auxunpar.ch"
    
#line 272 "auxunpar.ch"
#line 272 "auxunpar.ch"
}
#line 272 "auxunpar.ch"

#line 276 "auxunpar.ch"

#line 276 "auxunpar.ch"
void FreeHeadFunc ()
#line 276 "auxunpar.ch"
{
#line 276 "auxunpar.ch"
#line 276 "auxunpar.ch"
    int _nextVal ;
    
#line 276 "auxunpar.ch"
#line 279 "auxunpar.ch"
    PFUNC_ELEM  funcElem = listFunc ;
    
#line 279 "auxunpar.ch"
#line 281 "auxunpar.ch"
    listFunc = listFunc -> next ;
#line 281 "auxunpar.ch"
#line 282 "auxunpar.ch"
    funcElem -> next = listFuncFree ;
#line 282 "auxunpar.ch"
#line 283 "auxunpar.ch"
    listFuncFree = funcElem ;
#line 283 "auxunpar.ch"
#line 284 "auxunpar.ch"
    
#line 284 "auxunpar.ch"
#line 284 "auxunpar.ch"
}
#line 284 "auxunpar.ch"

static int  _glob_level ;

#line 291 "auxunpar.ch"

#line 291 "auxunpar.ch"
void LookForEach ( PTREE paramTree, int level )
#line 291 "auxunpar.ch"
{
#line 291 "auxunpar.ch"
    register PPTREE _inter ;
#line 291 "auxunpar.ch"

#line 291 "auxunpar.ch"
#line 291 "auxunpar.ch"
    int _nextVal ;
    
#line 291 "auxunpar.ch"
#line 293 "auxunpar.ch"
    PTREE   tree ;
#line 293 "auxunpar.ch"
    
#line 293 "auxunpar.ch"
#line 294 "auxunpar.ch"
    ItPtree it (paramTree) ;
    
#line 294 "auxunpar.ch"
#line 295 "auxunpar.ch"
    PPTREE  _for_elem ;
    
#line 295 "auxunpar.ch"
#line 297 "auxunpar.ch"
    _glob_level = level ;
#line 297 "auxunpar.ch"
#line 298 "auxunpar.ch"
    {
#line 298 "auxunpar.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 298 "auxunpar.ch"
        _ptRes0 = MakeTree(metachop::FOREACH, 3);
#line 298 "auxunpar.ch"
        {
#line 298 "auxunpar.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 298 "auxunpar.ch"
            _ptRes1 = MakeTree(META, 1);
#line 298 "auxunpar.ch"
            _ptTree1 = MakeString("name") ;
#line 298 "auxunpar.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 298 "auxunpar.ch"
            _ptTree0 = _ptRes1;
#line 298 "auxunpar.ch"
        }
#line 298 "auxunpar.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 298 "auxunpar.ch"
        {
#line 298 "auxunpar.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 298 "auxunpar.ch"
            _ptRes1 = MakeTree(META, 1);
#line 298 "auxunpar.ch"
            _ptTree1 = MakeString("name1") ;
#line 298 "auxunpar.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 298 "auxunpar.ch"
            _ptTree0 = _ptRes1;
#line 298 "auxunpar.ch"
        }
#line 298 "auxunpar.ch"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 298 "auxunpar.ch"
        {
#line 298 "auxunpar.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 298 "auxunpar.ch"
            _ptRes1 = MakeTree(META, 1);
#line 298 "auxunpar.ch"
            _ptTree1 = MakeString("name2") ;
#line 298 "auxunpar.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 298 "auxunpar.ch"
            _ptTree0 = _ptRes1;
#line 298 "auxunpar.ch"
        }
#line 298 "auxunpar.ch"
        ReplaceTree(_ptRes0, 3, _ptTree0);
#line 298 "auxunpar.ch"
        tree = _ptRes0;
#line 298 "auxunpar.ch"
    }
#line 298 "auxunpar.ch"
    
#line 298 "auxunpar.ch"
#line 299 "auxunpar.ch"
    it.Searched(tree);
#line 299 "auxunpar.ch"
#line 300 "auxunpar.ch"
    while ( for_elem = it++ ) {
#line 300 "auxunpar.ch"
#line 301 "auxunpar.ch"
                                    PTREE   father ;
#line 301 "auxunpar.ch"
                                    
#line 301 "auxunpar.ch"
#line 302 "auxunpar.ch"
                                    (father=FatherTree(for_elem));
#line 302 "auxunpar.ch"
                                    
#line 302 "auxunpar.ch"
#line 303 "auxunpar.ch"
                                    DumpForeach(for_elem, ++_glob_level);
#line 303 "auxunpar.ch"
#line 304 "auxunpar.ch"
                                    it.Current(father);
#line 304 "auxunpar.ch"
#line 305 "auxunpar.ch"
                                    
#line 305 "auxunpar.ch"
#line 305 "auxunpar.ch"
                                }
#line 305 "auxunpar.ch"
#line 306 "auxunpar.ch"
    
#line 306 "auxunpar.ch"
#line 306 "auxunpar.ch"
}
#line 306 "auxunpar.ch"

extern int  inDefine ;

#line 313 "auxunpar.ch"

#line 313 "auxunpar.ch"
void DumpForeach ( PTREE paramTree, int level )
#line 313 "auxunpar.ch"
{
#line 313 "auxunpar.ch"
    register PPTREE _inter ;
#line 313 "auxunpar.ch"

#line 313 "auxunpar.ch"
#line 313 "auxunpar.ch"
    PTREE   _Baum5 ;
#line 313 "auxunpar.ch"
    
#line 313 "auxunpar.ch"
#line 313 "auxunpar.ch"
    PTREE   _Baum4 ;
#line 313 "auxunpar.ch"
    
#line 313 "auxunpar.ch"
#line 313 "auxunpar.ch"
    int ptStackTree ;
    
#line 313 "auxunpar.ch"
#line 313 "auxunpar.ch"
    PPTREE  stackTree [1024];
    
#line 313 "auxunpar.ch"
#line 313 "auxunpar.ch"
    int _nextVal ;
    
#line 313 "auxunpar.ch"
#line 315 "auxunpar.ch"
    PTREE   son, statement, inter1, inter2 ;
#line 315 "auxunpar.ch"
    
#line 315 "auxunpar.ch"
#line 316 "auxunpar.ch"
    int oldDefine = inDefine ;
    
#line 316 "auxunpar.ch"
#line 317 "auxunpar.ch"
    char    new_ident [15];
    
#line 317 "auxunpar.ch"
#line 318 "auxunpar.ch"
    char    variable ;
    
#line 318 "auxunpar.ch"
#line 319 "auxunpar.ch"
    PTREE   searched ;
#line 319 "auxunpar.ch"
    
#line 319 "auxunpar.ch"
#line 320 "auxunpar.ch"
    PTREE   stated ;
#line 320 "auxunpar.ch"
    
#line 320 "auxunpar.ch"
#line 321 "auxunpar.ch"
    PTREE   iterator ;
#line 321 "auxunpar.ch"
    
#line 321 "auxunpar.ch"
#line 322 "auxunpar.ch"
    PTREE   treatment ;
#line 322 "auxunpar.ch"
    
#line 322 "auxunpar.ch"
#line 325 "auxunpar.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 325 "auxunpar.ch"
        ((son=SonTree(_inter,1)),1) &&
#line 325 "auxunpar.ch"
        1);
#line 325 "auxunpar.ch"
    ;
#line 325 "auxunpar.ch"
#line 326 "auxunpar.ch"
    if ( !(((_inter = (PPTREE)son,1) && 
#line 326 "auxunpar.ch"
                (NumberTree(_inter) == metachop::NIL) &&
#line 326 "auxunpar.ch"
                1)) ) 
#line 326 "auxunpar.ch"
#line 327 "auxunpar.ch"
        (searched=copytree(son));
#line 327 "auxunpar.ch"
    
#line 327 "auxunpar.ch"
    else 
#line 328 "auxunpar.ch"
    {
#line 328 "auxunpar.ch"
#line 329 "auxunpar.ch"
        {
#line 329 "auxunpar.ch"
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 329 "auxunpar.ch"
            _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 329 "auxunpar.ch"
            _ptTree0 = MakeString("(PPTREE) 0") ;
#line 329 "auxunpar.ch"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 329 "auxunpar.ch"
            searched = _ptRes0;
#line 329 "auxunpar.ch"
        }
#line 329 "auxunpar.ch"
        
#line 329 "auxunpar.ch"
#line 330 "auxunpar.ch"
        
#line 330 "auxunpar.ch"
#line 330 "auxunpar.ch"
    }
    
#line 330 "auxunpar.ch"
#line 333 "auxunpar.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 333 "auxunpar.ch"
        ((stated=SonTree(_inter,2)),1) &&
#line 333 "auxunpar.ch"
        1);
#line 333 "auxunpar.ch"
    ;
#line 333 "auxunpar.ch"
#line 334 "auxunpar.ch"
    (stated=copytree(stated));
#line 334 "auxunpar.ch"
    
#line 334 "auxunpar.ch"
#line 337 "auxunpar.ch"
    sprintf(new_ident, "_iterator%d", level);
#line 337 "auxunpar.ch"
#line 338 "auxunpar.ch"
    {
#line 338 "auxunpar.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 338 "auxunpar.ch"
        _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 338 "auxunpar.ch"
        _ptTree0 = StoreRef(MakeString(new_ident));
#line 338 "auxunpar.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 338 "auxunpar.ch"
        iterator = _ptRes0;
#line 338 "auxunpar.ch"
    }
#line 338 "auxunpar.ch"
    
#line 338 "auxunpar.ch"
#line 341 "auxunpar.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 341 "auxunpar.ch"
        ((treatment=SonTree(_inter,3)),1) &&
#line 341 "auxunpar.ch"
        1);
#line 341 "auxunpar.ch"
    ;
#line 341 "auxunpar.ch"
#line 342 "auxunpar.ch"
    (treatment=copytree(treatment));
#line 342 "auxunpar.ch"
    
#line 342 "auxunpar.ch"
#line 343 "auxunpar.ch"
    {
#line 343 "auxunpar.ch"
        /* [ metachop::COMPOUND
            [ LIST 
                [ metachop::DECLARATION
                    [ NIL ] 
                    [ metachop::TIDENT [ metachop::IDENT "ItPtree"]]
                    [ LIST 
                        [ metachop::TYP_LIST
                            [ META "iterator"]
                            [ LIST 
                                [ metachop::ABST_DECLARATOR
                                    [ metachop::TIDENT [ META "stated"]]
                                    [ NIL ] 
                                ]
                                [ metachop::ABST_DECLARATOR
                                    [ metachop::TIDENT [ META "searched"]]
                                    [ NIL ] 
                                ]
                            ]
                            [ NIL ] 
                        ]
                    ]
                ]
                [ metachop::DECLARATION
                    [ NIL ] 
                    [ metachop::TIDENT [ metachop::IDENT "PPTREE"]]
                    [ LIST 
                        [ metachop::IDENT "_for_elem"]
                    ]
                ]
                [ metachop::EXP_LIST
                    [ metachop::REF
                        [ META "iterator"]
                        [ metachop::IDENT "AllSearch"]
                    ]
                    [ metachop::INTEGER "1"]
                ]
                [ metachop::WHILE
                    [ metachop::AFF
                        [ metachop::IDENT "_for_elem"]
                        [ metachop::AINCR [ META "iterator"]]
                    ]
                    [ metachop::COMPOUND
                        [ LIST 
                            [ META "treatment"]
                            [ metachop::EXP_LIST
                                [ metachop::REF
                                    [ META "iterator"]
                                    [ metachop::IDENT "Current"]
                                ]
                                [ metachop::IDENT "_for_elem"]
                            ]
                            [ metachop::CONTINUE [ NIL ] ]
                            [ metachop::LABEL
                                [ META "for_continue"]
                                [ metachop::EXP_LIST
                                    [ metachop::REF
                                        [ META "iterator"]
                                        [ metachop::IDENT "Current"]
                                    ]
                                    [ metachop::IDENT "_for_elem"]
                                ]
                            ]
                            [ metachop::EXP_LIST
                                [ metachop::REF
                                    [ META "iterator"]
                                    [ metachop::IDENT "SkipSon"]
                                ]
                                [ metachop::INTEGER "1"]
                            ]
                            [ metachop::CONTINUE [ NIL ] ]
                            [ metachop::LABEL
                                [ META "for_break"]
                                [ metachop::BREAK [ NIL ] ]
                            ]
                            [ metachop::NONE ]
                        ]
                    ]
                ]
                [ metachop::NONE ]
            ]
           ]
#line 343 "auxunpar.ch"
        */
#line 343 "auxunpar.ch"
        {   ptStackTree = 0 ;
#line 343 "auxunpar.ch"
            TheConstructor(stackTree,ptStackTree,-4,-2,MakeString("ItPtree"),metachop::IDENT,1,metachop::TIDENT,1,
                -2,MakeString("iterator"),META,1,-2,MakeString("stated"),META,1,metachop::TIDENT,1,-4,metachop::ABST_DECLARATOR,2,
                -2,MakeString("searched"),META,1,metachop::TIDENT,1,-4,metachop::ABST_DECLARATOR,2,-4,LIST,2,LIST,2,-4,metachop::TYP_LIST,3,-4,LIST,2,metachop::DECLARATION,3,-4,-2,MakeString("PPTREE"),metachop::IDENT,1,metachop::TIDENT,1,-2,MakeString("_for_elem"),metachop::IDENT,1,-4,LIST,2,metachop::DECLARATION,3,
                -2,MakeString("iterator"),META,1,-2,MakeString("AllSearch"),metachop::IDENT,1,metachop::REF,2,-2,MakeString("1"),metachop::INTEGER,1,metachop::EXP_LIST,2,
                -2,MakeString("_for_elem"),metachop::IDENT,1,-2,MakeString("iterator"),META,1,metachop::AINCR,1,metachop::AFF,2,-2,MakeString("treatment"),META,1,
                -3);
            TheConstructor(stackTree,ptStackTree,-2,MakeString("iterator"),META,1,-2,MakeString("Current"),metachop::IDENT,1,metachop::REF,2,-2,MakeString("_for_elem"),metachop::IDENT,1,metachop::EXP_LIST,2,
                -4,metachop::CONTINUE,1,-2,MakeString("for_continue"),META,1,-2,MakeString("iterator"),META,1,
                -2,MakeString("Current"),metachop::IDENT,1,metachop::REF,2,-2,MakeString("_for_elem"),metachop::IDENT,1,metachop::EXP_LIST,2,metachop::LABEL,2,-2,MakeString("iterator"),META,1,-2,MakeString("SkipSon"),metachop::IDENT,1,metachop::REF,2,
                -2,MakeString("1"),metachop::INTEGER,1,metachop::EXP_LIST,2,-4,metachop::CONTINUE,1,-2,MakeString("for_break"),META,1,-4,metachop::BREAK,1,metachop::LABEL,2,
                metachop::NONE,0,-4,LIST,2,LIST,2,LIST,2,LIST,2,LIST,2,LIST,2,LIST,2,LIST,2,metachop::COMPOUND,1,metachop::WHILE,2,metachop::NONE,0,-4,LIST,2,LIST,2,LIST,2,LIST,2,LIST,2,metachop::COMPOUND,1,-3) ;
            statement = PopTree ;
#line 343 "auxunpar.ch"
        }   {
#line 343 "auxunpar.ch"
                register PPTREE _inter ;
#line 343 "auxunpar.ch"
            
#line 343 "auxunpar.ch"
#line 343 "auxunpar.ch"
                MetaRep("iterator", statement, iterator);
#line 343 "auxunpar.ch"
#line 343 "auxunpar.ch"
                MetaRep("stated", statement, stated);
#line 343 "auxunpar.ch"
#line 343 "auxunpar.ch"
                MetaRep("searched", statement, searched);
#line 343 "auxunpar.ch"
#line 343 "auxunpar.ch"
                MetaRep("treatment", statement, treatment);
#line 343 "auxunpar.ch"
#line 343 "auxunpar.ch"
            }
#line 343 "auxunpar.ch"
    }
#line 343 "auxunpar.ch"
    
#line 343 "auxunpar.ch"
#line 362 "auxunpar.ch"
    {
#line 362 "auxunpar.ch"
        /* [ metachop::GOTO [ metachop::IDENT "for_break"]]
#line 362 "auxunpar.ch"
        */
#line 362 "auxunpar.ch"
        {   ptStackTree = 0 ;
#line 362 "auxunpar.ch"
            TheConstructor(stackTree,ptStackTree,-2,MakeString("for_break"),metachop::IDENT,1,metachop::GOTO,1,-3) ;
            inter1 = PopTree ;
#line 362 "auxunpar.ch"
        }   }
#line 362 "auxunpar.ch"
    
#line 362 "auxunpar.ch"
#line 363 "auxunpar.ch"
    {
#line 363 "auxunpar.ch"
        /* [ metachop::GOTO [ metachop::IDENT "for_continue"]]
#line 363 "auxunpar.ch"
        */
#line 363 "auxunpar.ch"
        {   ptStackTree = 0 ;
#line 363 "auxunpar.ch"
            TheConstructor(stackTree,ptStackTree,-2,MakeString("for_continue"),metachop::IDENT,1,metachop::GOTO,1,-3) ;
            inter2 = PopTree ;
#line 363 "auxunpar.ch"
        }   }
#line 363 "auxunpar.ch"
    
#line 363 "auxunpar.ch"
#line 365 "auxunpar.ch"
    {
#line 365 "auxunpar.ch"
#line 365 "auxunpar.ch"
        ItPtree it (statement) ;
        
#line 365 "auxunpar.ch"
#line 366 "auxunpar.ch"
        PPTREE  _for_elem ;
        
#line 366 "auxunpar.ch"
#line 367 "auxunpar.ch"
        while ( for_elem = it++ ) {
#line 367 "auxunpar.ch"
#line 368 "auxunpar.ch"
                                        if ( qcomparetree(for_elem, inter1) ) {
#line 368 "auxunpar.ch"
#line 368 "auxunpar.ch"
                                                                                    PTREE   _Baum1 ;
#line 368 "auxunpar.ch"
                                                                                    
#line 368 "auxunpar.ch"
#line 368 "auxunpar.ch"
                                                                                    PTREE   _Baum0 ;
#line 368 "auxunpar.ch"
                                                                                    
#line 368 "auxunpar.ch"
#line 369 "auxunpar.ch"
                                                                                    sprintf(new_ident, "for_break%d", level);
#line 369 "auxunpar.ch"
#line 370 "auxunpar.ch"
                                                                                    {
#line 370 "auxunpar.ch"
                                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 370 "auxunpar.ch"
                                                                                        _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 370 "auxunpar.ch"
                                                                                        _ptTree0 = MakeString("for_break") ;
#line 370 "auxunpar.ch"
                                                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 370 "auxunpar.ch"
                                                                                        _Baum0 = _ptRes0;
#line 370 "auxunpar.ch"
                                                                                    }
#line 370 "auxunpar.ch"
                                                                                    
#line 370 "auxunpar.ch"
#line 370 "auxunpar.ch"
                                                                                    {
#line 370 "auxunpar.ch"
                                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 370 "auxunpar.ch"
                                                                                        _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 370 "auxunpar.ch"
                                                                                        _ptTree0 = StoreRef(MakeString(new_ident));
#line 370 "auxunpar.ch"
                                                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 370 "auxunpar.ch"
                                                                                        _Baum1 = _ptRes0;
#line 370 "auxunpar.ch"
                                                                                    }
#line 370 "auxunpar.ch"
                                                                                    
#line 370 "auxunpar.ch"
#line 370 "auxunpar.ch"
                                                                                    replace(_Baum0, for_elem, _Baum1);
#line 370 "auxunpar.ch"
#line 371 "auxunpar.ch"
                                                                                    
#line 371 "auxunpar.ch"
#line 371 "auxunpar.ch"
                                                                                 } else 
#line 371 "auxunpar.ch"
                                        if ( qcomparetree(for_elem, inter2) ) {
#line 371 "auxunpar.ch"
#line 371 "auxunpar.ch"
                                                                                    PTREE   _Baum3 ;
#line 371 "auxunpar.ch"
                                                                                    
#line 371 "auxunpar.ch"
#line 371 "auxunpar.ch"
                                                                                    PTREE   _Baum2 ;
#line 371 "auxunpar.ch"
                                                                                    
#line 371 "auxunpar.ch"
#line 372 "auxunpar.ch"
                                                                                    sprintf(new_ident, "for_continue%d", level);
#line 372 "auxunpar.ch"
#line 373 "auxunpar.ch"
                                                                                    {
#line 373 "auxunpar.ch"
                                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 373 "auxunpar.ch"
                                                                                        _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 373 "auxunpar.ch"
                                                                                        _ptTree0 = MakeString("for_continue") ;
#line 373 "auxunpar.ch"
                                                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 373 "auxunpar.ch"
                                                                                        _Baum2 = _ptRes0;
#line 373 "auxunpar.ch"
                                                                                    }
#line 373 "auxunpar.ch"
                                                                                    
#line 373 "auxunpar.ch"
#line 373 "auxunpar.ch"
                                                                                    {
#line 373 "auxunpar.ch"
                                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 373 "auxunpar.ch"
                                                                                        _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 373 "auxunpar.ch"
                                                                                        _ptTree0 = StoreRef(MakeString(new_ident));
#line 373 "auxunpar.ch"
                                                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 373 "auxunpar.ch"
                                                                                        _Baum3 = _ptRes0;
#line 373 "auxunpar.ch"
                                                                                    }
#line 373 "auxunpar.ch"
                                                                                    
#line 373 "auxunpar.ch"
#line 373 "auxunpar.ch"
                                                                                    replace(_Baum2, for_elem, _Baum3);
#line 373 "auxunpar.ch"
#line 374 "auxunpar.ch"
                                                                                    
#line 374 "auxunpar.ch"
#line 374 "auxunpar.ch"
                                                                                 } else 
#line 374 "auxunpar.ch"
                                        if ( ((_inter = (PPTREE)for_elem,1) && 
#line 374 "auxunpar.ch"
                                                (NumberTree(_inter) == metachop::FOREACH) &&
#line 374 "auxunpar.ch"
                                                1) ) {
#line 374 "auxunpar.ch"
#line 375 "auxunpar.ch"
                                                        it.SkipSon(1);
#line 375 "auxunpar.ch"
#line 376 "auxunpar.ch"
                                                        continue ;
                                                        
#line 376 "auxunpar.ch"
#line 377 "auxunpar.ch"
                                                        
#line 377 "auxunpar.ch"
#line 377 "auxunpar.ch"
                                                     }
#line 377 "auxunpar.ch"
#line 378 "auxunpar.ch"
                                        
#line 378 "auxunpar.ch"
#line 378 "auxunpar.ch"
                                    }
#line 378 "auxunpar.ch"
#line 379 "auxunpar.ch"
        
#line 379 "auxunpar.ch"
#line 379 "auxunpar.ch"
    }
    
#line 379 "auxunpar.ch"
#line 380 "auxunpar.ch"
    sprintf(new_ident, "for_break%d", level);
#line 380 "auxunpar.ch"
#line 381 "auxunpar.ch"
    {
#line 381 "auxunpar.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 381 "auxunpar.ch"
        _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 381 "auxunpar.ch"
        _ptTree0 = StoreRef(MakeString(new_ident));
#line 381 "auxunpar.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 381 "auxunpar.ch"
        _Baum4 = _ptRes0;
#line 381 "auxunpar.ch"
    }
#line 381 "auxunpar.ch"
    
#line 381 "auxunpar.ch"
#line 381 "auxunpar.ch"
    metarep("for_break", statement, _Baum4);
#line 381 "auxunpar.ch"
#line 382 "auxunpar.ch"
    sprintf(new_ident, "for_continue%d", level);
#line 382 "auxunpar.ch"
#line 383 "auxunpar.ch"
    {
#line 383 "auxunpar.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 383 "auxunpar.ch"
        _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 383 "auxunpar.ch"
        _ptTree0 = StoreRef(MakeString(new_ident));
#line 383 "auxunpar.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 383 "auxunpar.ch"
        _Baum5 = _ptRes0;
#line 383 "auxunpar.ch"
    }
#line 383 "auxunpar.ch"
    
#line 383 "auxunpar.ch"
#line 383 "auxunpar.ch"
    metarep("for_continue", statement, _Baum5);
#line 383 "auxunpar.ch"
#line 384 "auxunpar.ch"
    {
#line 384 "auxunpar.ch"
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 384 "auxunpar.ch"
        if (_ptTree0= fathertree(paramTree)) {
#line 384 "auxunpar.ch"
            int rank = ranktree(paramTree);
#line 384 "auxunpar.ch"
            ReplaceTree(_ptTree0,rank,statement);
#line 384 "auxunpar.ch"
        }
#line 384 "auxunpar.ch"
    }
#line 384 "auxunpar.ch"
    
#line 384 "auxunpar.ch"
#line 385 "auxunpar.ch"
    
#line 385 "auxunpar.ch"
#line 385 "auxunpar.ch"
}
#line 385 "auxunpar.ch"

#line 389 "auxunpar.ch"

#line 389 "auxunpar.ch"
void DumpFunction ()
#line 389 "auxunpar.ch"
{
#line 389 "auxunpar.ch"
#line 389 "auxunpar.ch"
    int _nextVal ;
    
#line 389 "auxunpar.ch"
#line 392 "auxunpar.ch"
    char    *name ;
    
#line 392 "auxunpar.ch"
#line 393 "auxunpar.ch"
    PTREE   tree1 ;
#line 393 "auxunpar.ch"
    
#line 393 "auxunpar.ch"
#line 394 "auxunpar.ch"
    PTREE   tree ;
#line 394 "auxunpar.ch"
    
#line 394 "auxunpar.ch"
#line 396 "auxunpar.ch"
    while ( listFunc ) {
#line 396 "auxunpar.ch"
#line 397 "auxunpar.ch"
                            name = listFunc -> name ;
#line 397 "auxunpar.ch"
#line 398 "auxunpar.ch"
                            (tree=listFunc -> tree);
#line 398 "auxunpar.ch"
                            
#line 398 "auxunpar.ch"
#line 399 "auxunpar.ch"
                            FreeHeadFunc();
#line 399 "auxunpar.ch"
#line 400 "auxunpar.ch"
                            (tree1=tree);
#line 400 "auxunpar.ch"
                            
#line 400 "auxunpar.ch"
#line 401 "auxunpar.ch"
                            DumpAFunction(name, tree);
#line 401 "auxunpar.ch"
#line 402 "auxunpar.ch"
                            
#line 402 "auxunpar.ch"
#line 402 "auxunpar.ch"
                        }
#line 402 "auxunpar.ch"
#line 403 "auxunpar.ch"
    
#line 403 "auxunpar.ch"
#line 403 "auxunpar.ch"
}
#line 403 "auxunpar.ch"

#line 403 "auxunpar.ch"
#line 403 "auxunpar.ch"
static void auxunpar_Anchor () { int i = 1;} 
#line 403 "auxunpar.ch"
/*Well done my boy */ 
#line 403 "auxunpar.ch"

