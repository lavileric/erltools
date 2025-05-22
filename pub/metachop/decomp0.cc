
#line 29 "decomp0.ch"
/*************************************************************************/
#line 29 "decomp0.ch"
/*                                                                       */
#line 29 "decomp0.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 29 "decomp0.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 29 "decomp0.ch"
/*                  Eric Lavillonniere                                   */
#line 29 "decomp0.ch"
/*                                                                       */
#line 29 "decomp0.ch"
/*************************************************************************/
#line 29 "decomp0.ch"

#line 29 "decomp0.ch"
#include "token.h"
#line 29 "decomp0.ch"
#define decomp decomp_metachop
#line 29 "decomp0.ch"

#line 29 "decomp0.ch"
#ifndef for_elem
#line 29 "decomp0.ch"
#line 29 "decomp0.ch"
#define for_elem _for_elem

#line 29 "decomp0.ch"
#line 29 "decomp0.ch"

#line 29 "decomp0.ch"
#endif
#ifdef INCONNU
#line 29 "decomp0.ch"
#line 29 "decomp0.ch"
PTREE   for_elem ;
#line 29 "decomp0.ch"

#line 29 "decomp0.ch"
#line 29 "decomp0.ch"

#line 29 "decomp0.ch"
#endif
#include "decmetac.h"

extern char *nameDefine ;
int inDefine ;
extern int  statementf ;
int needInter ;
extern int  compiledLine ;
extern char *theFileName ;

#include "newline.h"

#line 45 "decomp0.ch"

#line 45 "decomp0.ch"
char *Switcher ( PTREE paramTree, char *name, int level )
#line 45 "decomp0.ch"
{
#line 45 "decomp0.ch"
    register PPTREE _inter ;
#line 45 "decomp0.ch"

#line 45 "decomp0.ch"
#line 45 "decomp0.ch"
    int _nextVal ;
    
#line 45 "decomp0.ch"
#line 48 "decomp0.ch"
    
    PTREE   ident, exp1, exp2, son ;
#line 48 "decomp0.ch"
    
#line 48 "decomp0.ch"
#line 49 "decomp0.ch"
    char    *name_ident, string ;
    
#line 49 "decomp0.ch"
#line 50 "decomp0.ch"
    char    namePt [10];
    
#line 50 "decomp0.ch"
#line 52 "decomp0.ch"
    sprintf(namePt, "_ptTree%d", level);
#line 52 "decomp0.ch"
#line 53 "decomp0.ch"
    switch ( NumberTree(paramTree) ) {
#line 53 "decomp0.ch"
#line 55 "decomp0.ch"
        case metachop::NIL : 
#line 55 "decomp0.ch"
#line 55 "decomp0.ch"
        _Case27 : 
#line 55 "decomp0.ch"
#line 55 "decomp0.ch"
            ;
#line 55 "decomp0.ch"
#line 55 "decomp0.ch"
            WriteString(name);
#line 55 "decomp0.ch"
#line 55 "decomp0.ch"
            PrintString(" = (PPTREE) 0;");
#line 55 "decomp0.ch"
#line 55 "decomp0.ch"
            LNewLine(1);
#line 55 "decomp0.ch"
            
#line 55 "decomp0.ch"
#line 56 "decomp0.ch"
            return name ;
            
#line 56 "decomp0.ch"
#line 57 "decomp0.ch"
            break ;
            
#line 57 "decomp0.ch"
#line 59 "decomp0.ch"
        case metachop::QUALIFIED : 
#line 59 "decomp0.ch"
#line 59 "decomp0.ch"
        _Case28 : 
#line 59 "decomp0.ch"
#line 59 "decomp0.ch"
            ;
#line 59 "decomp0.ch"
#line 59 "decomp0.ch"
            {
#line 59 "decomp0.ch"
#line 60 "decomp0.ch"
                EString name ;
                
#line 60 "decomp0.ch"
#line 61 "decomp0.ch"
                name = EString(Value(paramTree [1])) + "::" + Value(paramTree [2]);
#line 61 "decomp0.ch"
#line 62 "decomp0.ch"
                PTREE   newTree = (PTREE)0 ;
#line 62 "decomp0.ch"
                
#line 62 "decomp0.ch"
#line 62 "decomp0.ch"
                (newTree=PTREE(name));
#line 62 "decomp0.ch"
                
#line 62 "decomp0.ch"
#line 63 "decomp0.ch"
                StoreRef(newTree);
#line 63 "decomp0.ch"
#line 64 "decomp0.ch"
                return Value(newTree);
                
#line 64 "decomp0.ch"
#line 65 "decomp0.ch"
                
#line 65 "decomp0.ch"
#line 65 "decomp0.ch"
            }
            
#line 65 "decomp0.ch"
#line 65 "decomp0.ch"
            goto _Case29 ;
            
#line 65 "decomp0.ch"
#line 67 "decomp0.ch"
        case metachop::IDENT : 
#line 67 "decomp0.ch"
#line 67 "decomp0.ch"
            (ident=SonTree(paramTree, 1));
#line 67 "decomp0.ch"
            
#line 67 "decomp0.ch"
#line 67 "decomp0.ch"
        _Case29 : 
#line 67 "decomp0.ch"
#line 67 "decomp0.ch"
            ;
#line 67 "decomp0.ch"
#line 67 "decomp0.ch"
            return BrainyValue(ident);
            
#line 67 "decomp0.ch"
#line 68 "decomp0.ch"
            break ;
            
#line 68 "decomp0.ch"
#line 70 "decomp0.ch"
        case metachop::FUNC : 
#line 70 "decomp0.ch"
#line 70 "decomp0.ch"
        _Case30 : 
#line 70 "decomp0.ch"
#line 70 "decomp0.ch"
            ;
#line 70 "decomp0.ch"
#line 70 "decomp0.ch"
            WriteString(name);
#line 70 "decomp0.ch"
#line 70 "decomp0.ch"
            PrintString(" = StoreRef(");
#line 70 "decomp0.ch"
#line 71 "decomp0.ch"
            decomp(paramTree);
#line 71 "decomp0.ch"
#line 72 "decomp0.ch"
            PrintString(")");
#line 72 "decomp0.ch"
#line 72 "decomp0.ch"
            LNewLine(1);
#line 72 "decomp0.ch"
            
#line 72 "decomp0.ch"
#line 73 "decomp0.ch"
            return name ;
            
#line 73 "decomp0.ch"
#line 73 "decomp0.ch"
            goto _Case31 ;
            
#line 73 "decomp0.ch"
#line 75 "decomp0.ch"
        case metachop::PARSE : 
#line 75 "decomp0.ch"
#line 75 "decomp0.ch"
            (son=SonTree(paramTree, 1));
#line 75 "decomp0.ch"
            
#line 75 "decomp0.ch"
#line 75 "decomp0.ch"
        _Case31 : 
#line 75 "decomp0.ch"
#line 75 "decomp0.ch"
            ;
#line 75 "decomp0.ch"
#line 75 "decomp0.ch"
            ((_inter = (PPTREE)son,1) && 
#line 75 "decomp0.ch"
                ((son=SonTree(_inter,2)),1) &&
#line 75 "decomp0.ch"
                1);
#line 75 "decomp0.ch"
            ;
#line 75 "decomp0.ch"
#line 76 "decomp0.ch"
            MakeTreeGenDir(son, name, 0);
#line 76 "decomp0.ch"
#line 77 "decomp0.ch"
            return name ;
            
#line 77 "decomp0.ch"
#line 77 "decomp0.ch"
            goto _Case32 ;
            
#line 77 "decomp0.ch"
#line 79 "decomp0.ch"
        case metachop::STRING : 
#line 79 "decomp0.ch"
#line 79 "decomp0.ch"
        _Case32 : 
#line 79 "decomp0.ch"
#line 79 "decomp0.ch"
            ;
#line 79 "decomp0.ch"
#line 79 "decomp0.ch"
            statementf = 0 ;
#line 79 "decomp0.ch"
#line 80 "decomp0.ch"
            WriteString(name);
#line 80 "decomp0.ch"
#line 80 "decomp0.ch"
            PrintString(" = MakeString(");
#line 80 "decomp0.ch"
#line 81 "decomp0.ch"
            decomp(paramTree);
#line 81 "decomp0.ch"
#line 82 "decomp0.ch"
            PrintString(") ");
#line 82 "decomp0.ch"
            PrintString(";");
#line 82 "decomp0.ch"
#line 82 "decomp0.ch"
            LNewLine(1);
#line 82 "decomp0.ch"
            
#line 82 "decomp0.ch"
#line 83 "decomp0.ch"
            return name ;
            
#line 83 "decomp0.ch"
#line 83 "decomp0.ch"
            goto _Case33 ;
            
#line 83 "decomp0.ch"
#line 85 "decomp0.ch"
        case metachop::NODE_TREE : 
#line 85 "decomp0.ch"
#line 85 "decomp0.ch"
        _Case33 : 
#line 85 "decomp0.ch"
#line 85 "decomp0.ch"
            ;
#line 85 "decomp0.ch"
#line 85 "decomp0.ch"
            MakeTreeGen(paramTree, name, level);
#line 85 "decomp0.ch"
#line 86 "decomp0.ch"
            return name ;
            
#line 86 "decomp0.ch"
#line 86 "decomp0.ch"
            goto _Case34 ;
            
#line 86 "decomp0.ch"
#line 88 "decomp0.ch"
        case metachop::PLU_AFF : 
#line 88 "decomp0.ch"
#line 88 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 88 "decomp0.ch"
            
#line 88 "decomp0.ch"
#line 88 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 88 "decomp0.ch"
            
#line 88 "decomp0.ch"
#line 88 "decomp0.ch"
        _Case34 : 
#line 88 "decomp0.ch"
#line 88 "decomp0.ch"
            ;
#line 88 "decomp0.ch"
#line 88 "decomp0.ch"
            name_ident = AllocString(BrainyValue(exp1));
#line 88 "decomp0.ch"
#line 89 "decomp0.ch"
            ReplaceTreeGen(exp2, name, name_ident, level);
#line 89 "decomp0.ch"
#line 90 "decomp0.ch"
            free(name_ident);
#line 90 "decomp0.ch"
#line 91 "decomp0.ch"
            return name ;
            
#line 91 "decomp0.ch"
#line 91 "decomp0.ch"
            goto _Case35 ;
            
#line 91 "decomp0.ch"
#line 93 "decomp0.ch"
        case metachop::EXPO_AFF : 
#line 93 "decomp0.ch"
#line 93 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 93 "decomp0.ch"
            
#line 93 "decomp0.ch"
#line 93 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 93 "decomp0.ch"
            
#line 93 "decomp0.ch"
#line 93 "decomp0.ch"
        _Case35 : 
#line 93 "decomp0.ch"
#line 93 "decomp0.ch"
            ;
#line 93 "decomp0.ch"
#line 93 "decomp0.ch"
            name_ident = AllocString(BrainyValue(exp1));
#line 93 "decomp0.ch"
#line 94 "decomp0.ch"
            AddListGen(exp2, name, name_ident, level);
#line 94 "decomp0.ch"
#line 95 "decomp0.ch"
            free(name_ident);
#line 95 "decomp0.ch"
#line 96 "decomp0.ch"
            return name ;
            
#line 96 "decomp0.ch"
#line 96 "decomp0.ch"
            goto _Case36 ;
            
#line 96 "decomp0.ch"
#line 98 "decomp0.ch"
        case metachop::MUL_AFF : 
#line 98 "decomp0.ch"
#line 98 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 98 "decomp0.ch"
            
#line 98 "decomp0.ch"
#line 98 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 98 "decomp0.ch"
            
#line 98 "decomp0.ch"
#line 98 "decomp0.ch"
        _Case36 : 
#line 98 "decomp0.ch"
#line 98 "decomp0.ch"
            ;
#line 98 "decomp0.ch"
#line 98 "decomp0.ch"
            name_ident = AllocString(BrainyValue(exp1));
#line 98 "decomp0.ch"
#line 99 "decomp0.ch"
            AddListGen1(exp2, name, name_ident, level);
#line 99 "decomp0.ch"
#line 100 "decomp0.ch"
            free(name_ident);
#line 100 "decomp0.ch"
#line 101 "decomp0.ch"
            return name ;
            
#line 101 "decomp0.ch"
#line 102 "decomp0.ch"
            break ;
            
#line 102 "decomp0.ch"
#line 104 "decomp0.ch"
        case metachop::PLUS : 
#line 104 "decomp0.ch"
#line 104 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 104 "decomp0.ch"
            
#line 104 "decomp0.ch"
#line 104 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 104 "decomp0.ch"
            
#line 104 "decomp0.ch"
#line 104 "decomp0.ch"
        _Case37 : 
#line 104 "decomp0.ch"
#line 104 "decomp0.ch"
            ;
#line 104 "decomp0.ch"
#line 104 "decomp0.ch"
            if ( ((_inter = (PPTREE)exp1,1) && 
#line 104 "decomp0.ch"
                    (NumberTree(_inter) == metachop::NODE_TREE) &&
#line 104 "decomp0.ch"
                    1) ) {
#line 104 "decomp0.ch"
#line 105 "decomp0.ch"
                            MakeTreeGen(exp1, name, level);
#line 105 "decomp0.ch"
#line 106 "decomp0.ch"
                            ReplaceTreeGen(exp2, (char *)0, name, level);
#line 106 "decomp0.ch"
#line 107 "decomp0.ch"
                            
#line 107 "decomp0.ch"
#line 107 "decomp0.ch"
                         } else 
#line 107 "decomp0.ch"
            if ( ((_inter = (PPTREE)exp1,1) && 
#line 107 "decomp0.ch"
                    (NumberTree(_inter) == metachop::IDENT) &&
#line 107 "decomp0.ch"
                    1) ) {
#line 107 "decomp0.ch"
#line 108 "decomp0.ch"
                            WriteString(name);
#line 108 "decomp0.ch"
#line 108 "decomp0.ch"
                            PrintString(" = CopyTree (");
#line 108 "decomp0.ch"
#line 108 "decomp0.ch"
                            DumpBrainyValue(exp1);
#line 108 "decomp0.ch"
                            
#line 108 "decomp0.ch"
#line 108 "decomp0.ch"
                            PrintString(");");
#line 108 "decomp0.ch"
#line 108 "decomp0.ch"
                            LNewLine(1);
#line 108 "decomp0.ch"
                            
#line 108 "decomp0.ch"
#line 109 "decomp0.ch"
                            ReplaceTreeGen(exp2, (char *)0, name, level);
#line 109 "decomp0.ch"
#line 110 "decomp0.ch"
                            
#line 110 "decomp0.ch"
#line 110 "decomp0.ch"
                         }
#line 110 "decomp0.ch"
#line 111 "decomp0.ch"
            return name ;
            
#line 111 "decomp0.ch"
#line 111 "decomp0.ch"
            goto _Case38 ;
            
#line 111 "decomp0.ch"
#line 113 "decomp0.ch"
        case metachop::EXPO : 
#line 113 "decomp0.ch"
#line 113 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 113 "decomp0.ch"
            
#line 113 "decomp0.ch"
#line 113 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 113 "decomp0.ch"
            
#line 113 "decomp0.ch"
#line 113 "decomp0.ch"
        _Case38 : 
#line 113 "decomp0.ch"
#line 113 "decomp0.ch"
            ;
#line 113 "decomp0.ch"
#line 113 "decomp0.ch"
            if ( ((_inter = (PPTREE)exp1,1) && 
#line 113 "decomp0.ch"
                    (NumberTree(_inter) == metachop::MUL) &&
#line 113 "decomp0.ch"
                    1) ) 
#line 113 "decomp0.ch"
#line 114 "decomp0.ch"
                Switcher(exp1, name, level);
#line 114 "decomp0.ch"
            else 
#line 115 "decomp0.ch"
            {
#line 115 "decomp0.ch"
#line 116 "decomp0.ch"
                WriteString(name);
#line 116 "decomp0.ch"
#line 116 "decomp0.ch"
                PrintString(" = (PPTREE) 0;");
#line 116 "decomp0.ch"
#line 116 "decomp0.ch"
                LNewLine(1);
#line 116 "decomp0.ch"
                
#line 116 "decomp0.ch"
#line 117 "decomp0.ch"
                AddListGen(exp1, (char *)0, name, level);
#line 117 "decomp0.ch"
#line 118 "decomp0.ch"
                
#line 118 "decomp0.ch"
#line 118 "decomp0.ch"
            }
            
#line 118 "decomp0.ch"
#line 119 "decomp0.ch"
            AddListGen(exp2, (char *)0, name, level);
#line 119 "decomp0.ch"
#line 120 "decomp0.ch"
            return name ;
            
#line 120 "decomp0.ch"
#line 120 "decomp0.ch"
            goto _Case39 ;
            
#line 120 "decomp0.ch"
#line 122 "decomp0.ch"
        case metachop::MUL : 
#line 122 "decomp0.ch"
#line 122 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 122 "decomp0.ch"
            
#line 122 "decomp0.ch"
#line 122 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 122 "decomp0.ch"
            
#line 122 "decomp0.ch"
#line 122 "decomp0.ch"
        _Case39 : 
#line 122 "decomp0.ch"
#line 122 "decomp0.ch"
            ;
#line 122 "decomp0.ch"
#line 122 "decomp0.ch"
            name_ident = Switcher(exp1, name, level);
#line 122 "decomp0.ch"
#line 123 "decomp0.ch"
            if ( strcmp(name, name_ident) ) {
#line 123 "decomp0.ch"
#line 124 "decomp0.ch"
                                                WriteString(name);
#line 124 "decomp0.ch"
#line 124 "decomp0.ch"
                                                PrintString(" = ");
#line 124 "decomp0.ch"
#line 124 "decomp0.ch"
                                                WriteString(name_ident);
#line 124 "decomp0.ch"
#line 124 "decomp0.ch"
                                                PrintString(";");
#line 124 "decomp0.ch"
#line 124 "decomp0.ch"
                                                LNewLine(1);
#line 124 "decomp0.ch"
                                                
#line 124 "decomp0.ch"
#line 125 "decomp0.ch"
                                                
#line 125 "decomp0.ch"
#line 125 "decomp0.ch"
                                               }
#line 125 "decomp0.ch"
#line 126 "decomp0.ch"
            AddListGen(exp2, (char *)0, name, level);
#line 126 "decomp0.ch"
#line 127 "decomp0.ch"
            return name ;
            
#line 127 "decomp0.ch"
#line 127 "decomp0.ch"
            goto _Case40 ;
            
#line 127 "decomp0.ch"
#line 129 "decomp0.ch"
        case metachop::EXP : 
#line 129 "decomp0.ch"
#line 129 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 129 "decomp0.ch"
            
#line 129 "decomp0.ch"
#line 129 "decomp0.ch"
        _Case40 : 
#line 129 "decomp0.ch"
#line 129 "decomp0.ch"
            ;
#line 129 "decomp0.ch"
#line 129 "decomp0.ch"
            Switcher(exp1, name, level);
#line 129 "decomp0.ch"
#line 130 "decomp0.ch"
            return name ;
            
#line 130 "decomp0.ch"
#line 131 "decomp0.ch"
            break ;
            
#line 131 "decomp0.ch"
#line 133 "decomp0.ch"
        case metachop::AFF : 
#line 133 "decomp0.ch"
#line 133 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 133 "decomp0.ch"
            
#line 133 "decomp0.ch"
#line 133 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 133 "decomp0.ch"
            
#line 133 "decomp0.ch"
#line 133 "decomp0.ch"
        _Case41 : 
#line 133 "decomp0.ch"
#line 133 "decomp0.ch"
            ;
#line 133 "decomp0.ch"
#line 133 "decomp0.ch"
            name_ident = AllocString(BrainyValue(exp1));
#line 133 "decomp0.ch"
#line 134 "decomp0.ch"
            switch ( NumberTree(exp2) ) {
#line 134 "decomp0.ch"
#line 136 "decomp0.ch"
                case metachop::IDENT : 
#line 136 "decomp0.ch"
#line 136 "decomp0.ch"
                _Case43 : 
#line 136 "decomp0.ch"
#line 136 "decomp0.ch"
                    ;
#line 136 "decomp0.ch"
#line 136 "decomp0.ch"
                    WriteString(name_ident);
#line 136 "decomp0.ch"
#line 136 "decomp0.ch"
                    PrintString(" = ");
#line 136 "decomp0.ch"
#line 136 "decomp0.ch"
                    DumpBrainyValue(exp2);
#line 136 "decomp0.ch"
                    
#line 136 "decomp0.ch"
#line 136 "decomp0.ch"
                    PrintString(";");
#line 136 "decomp0.ch"
#line 136 "decomp0.ch"
                    LNewLine(1);
#line 136 "decomp0.ch"
                    
#line 136 "decomp0.ch"
#line 137 "decomp0.ch"
                    break ;
                    
#line 137 "decomp0.ch"
#line 139 "decomp0.ch"
                case metachop::NIL : 
#line 139 "decomp0.ch"
#line 139 "decomp0.ch"
                _Case44 : 
#line 139 "decomp0.ch"
#line 139 "decomp0.ch"
                    ;
#line 139 "decomp0.ch"
#line 139 "decomp0.ch"
                    WriteString(name_ident);
#line 139 "decomp0.ch"
#line 139 "decomp0.ch"
                    PrintString(" = (PPTREE) 0 ;");
#line 139 "decomp0.ch"
#line 139 "decomp0.ch"
                    LNewLine(1);
#line 139 "decomp0.ch"
                    
#line 139 "decomp0.ch"
#line 140 "decomp0.ch"
                    break ;
                    
#line 140 "decomp0.ch"
#line 142 "decomp0.ch"
                case metachop::NODE_TREE : 
#line 142 "decomp0.ch"
#line 142 "decomp0.ch"
                _Case45 : 
#line 142 "decomp0.ch"
#line 142 "decomp0.ch"
                    ;
#line 142 "decomp0.ch"
#line 142 "decomp0.ch"
                    MakeTreeGen(exp2, name, level);
#line 142 "decomp0.ch"
#line 143 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 143 "decomp0.ch"
#line 144 "decomp0.ch"
                                                        WriteString(name_ident);
#line 144 "decomp0.ch"
#line 144 "decomp0.ch"
                                                        PrintString(" = ");
#line 144 "decomp0.ch"
#line 144 "decomp0.ch"
                                                        WriteString(name);
#line 144 "decomp0.ch"
#line 144 "decomp0.ch"
                                                        PrintString(";");
#line 144 "decomp0.ch"
#line 144 "decomp0.ch"
                                                        LNewLine(1);
#line 144 "decomp0.ch"
                                                        
#line 144 "decomp0.ch"
#line 145 "decomp0.ch"
                                                        
#line 145 "decomp0.ch"
#line 145 "decomp0.ch"
                                                       }
#line 145 "decomp0.ch"
#line 146 "decomp0.ch"
                    break ;
                    
#line 146 "decomp0.ch"
#line 148 "decomp0.ch"
                case metachop::PLUS : 
#line 148 "decomp0.ch"
#line 148 "decomp0.ch"
                _Case46 : 
#line 148 "decomp0.ch"
#line 148 "decomp0.ch"
                    ;
#line 148 "decomp0.ch"
#line 148 "decomp0.ch"
                    Switcher(exp2, name, level);
#line 148 "decomp0.ch"
#line 149 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 149 "decomp0.ch"
#line 150 "decomp0.ch"
                                                        WriteString(name_ident);
#line 150 "decomp0.ch"
#line 150 "decomp0.ch"
                                                        PrintString(" = ");
#line 150 "decomp0.ch"
#line 150 "decomp0.ch"
                                                        WriteString(name);
#line 150 "decomp0.ch"
#line 150 "decomp0.ch"
                                                        PrintString(";");
#line 150 "decomp0.ch"
#line 150 "decomp0.ch"
                                                        LNewLine(1);
#line 150 "decomp0.ch"
                                                        
#line 150 "decomp0.ch"
#line 151 "decomp0.ch"
                                                        
#line 151 "decomp0.ch"
#line 151 "decomp0.ch"
                                                       }
#line 151 "decomp0.ch"
#line 152 "decomp0.ch"
                    break ;
                    
#line 152 "decomp0.ch"
#line 154 "decomp0.ch"
                case metachop::EXPO : 
#line 154 "decomp0.ch"
#line 154 "decomp0.ch"
                _Case47 : 
#line 154 "decomp0.ch"
#line 154 "decomp0.ch"
                    ;
#line 154 "decomp0.ch"
#line 154 "decomp0.ch"
                    PrintString("{");
#line 154 "decomp0.ch"
#line 154 "decomp0.ch"
                    LNewLine(1);
#line 154 "decomp0.ch"
                    
#line 154 "decomp0.ch"
#line 155 "decomp0.ch"
                    Tab();
#line 155 "decomp0.ch"
                    
#line 155 "decomp0.ch"
#line 156 "decomp0.ch"
                    Mark();
#line 156 "decomp0.ch"
                    PrintString("PPTREE ");
#line 156 "decomp0.ch"
                    WriteString(namePt);
#line 156 "decomp0.ch"
                    PrintString("= (PPTREE) 0 ;");
#line 156 "decomp0.ch"
                    LNewLine(1);
#line 156 "decomp0.ch"
                    
#line 156 "decomp0.ch"
                    Switcher(exp2, namePt, level + 1);
#line 156 "decomp0.ch"
                    WriteString(name);
#line 156 "decomp0.ch"
                    PrintString(" = ");
#line 156 "decomp0.ch"
                    WriteString(namePt);
#line 156 "decomp0.ch"
                    PrintString(" ;");
#line 156 "decomp0.ch"
                    LNewLine(1);
#line 156 "decomp0.ch"
                    
#line 156 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 156 "decomp0.ch"
#line 160 "decomp0.ch"
                                                        WriteString(name_ident);
#line 160 "decomp0.ch"
#line 160 "decomp0.ch"
                                                        PrintString("= ");
#line 160 "decomp0.ch"
#line 160 "decomp0.ch"
                                                        WriteString(name);
#line 160 "decomp0.ch"
#line 160 "decomp0.ch"
                                                        PrintString(";");
#line 160 "decomp0.ch"
#line 160 "decomp0.ch"
                                                        LNewLine(1);
#line 160 "decomp0.ch"
                                                        
#line 160 "decomp0.ch"
#line 161 "decomp0.ch"
                                                        
#line 161 "decomp0.ch"
#line 161 "decomp0.ch"
                                                       }
#line 161 "decomp0.ch"
                    PrintString(";");
#line 161 "decomp0.ch"
                    LNewLine(1);
#line 161 "decomp0.ch"
                    
#line 161 "decomp0.ch"
                    UnMark();
#line 161 "decomp0.ch"
                    
#line 161 "decomp0.ch"
#line 164 "decomp0.ch"
                    PrintString("}");
#line 164 "decomp0.ch"
#line 164 "decomp0.ch"
                    LNewLine(1);
#line 164 "decomp0.ch"
                    
#line 164 "decomp0.ch"
#line 165 "decomp0.ch"
                    break ;
                    
#line 165 "decomp0.ch"
#line 167 "decomp0.ch"
                case metachop::MUL : 
#line 167 "decomp0.ch"
#line 167 "decomp0.ch"
                _Case48 : 
#line 167 "decomp0.ch"
#line 167 "decomp0.ch"
                    ;
#line 167 "decomp0.ch"
#line 167 "decomp0.ch"
                    PrintString("{");
#line 167 "decomp0.ch"
#line 167 "decomp0.ch"
                    LNewLine(1);
#line 167 "decomp0.ch"
                    
#line 167 "decomp0.ch"
#line 168 "decomp0.ch"
                    Tab();
#line 168 "decomp0.ch"
                    
#line 168 "decomp0.ch"
#line 169 "decomp0.ch"
                    Mark();
#line 169 "decomp0.ch"
                    PrintString("PPTREE ");
#line 169 "decomp0.ch"
                    WriteString(namePt);
#line 169 "decomp0.ch"
                    PrintString("=(PPTREE) 0;");
#line 169 "decomp0.ch"
                    LNewLine(1);
#line 169 "decomp0.ch"
                    
#line 169 "decomp0.ch"
                    Switcher(exp2, namePt, level + 1);
#line 169 "decomp0.ch"
                    WriteString(name);
#line 169 "decomp0.ch"
                    PrintString(" = ");
#line 169 "decomp0.ch"
                    WriteString(namePt);
#line 169 "decomp0.ch"
                    PrintString(";");
#line 169 "decomp0.ch"
                    LNewLine(1);
#line 169 "decomp0.ch"
                    
#line 169 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 169 "decomp0.ch"
#line 173 "decomp0.ch"
                                                        WriteString(name_ident);
#line 173 "decomp0.ch"
#line 173 "decomp0.ch"
                                                        PrintString(" = ");
#line 173 "decomp0.ch"
#line 173 "decomp0.ch"
                                                        WriteString(name);
#line 173 "decomp0.ch"
#line 173 "decomp0.ch"
                                                        PrintString(";");
#line 173 "decomp0.ch"
#line 173 "decomp0.ch"
                                                        LNewLine(1);
#line 173 "decomp0.ch"
                                                        
#line 173 "decomp0.ch"
#line 174 "decomp0.ch"
                                                        
#line 174 "decomp0.ch"
#line 174 "decomp0.ch"
                                                       }
#line 174 "decomp0.ch"
                    PrintString(";");
#line 174 "decomp0.ch"
                    LNewLine(1);
#line 174 "decomp0.ch"
                    
#line 174 "decomp0.ch"
                    UnMark();
#line 174 "decomp0.ch"
                    
#line 174 "decomp0.ch"
#line 177 "decomp0.ch"
                    PrintString("}");
#line 177 "decomp0.ch"
#line 177 "decomp0.ch"
                    LNewLine(1);
#line 177 "decomp0.ch"
                    
#line 177 "decomp0.ch"
#line 178 "decomp0.ch"
                    break ;
                    
#line 178 "decomp0.ch"
#line 180 "decomp0.ch"
                case metachop::PLU_AFF : 
#line 180 "decomp0.ch"
#line 180 "decomp0.ch"
                _Case49 : 
#line 180 "decomp0.ch"
#line 180 "decomp0.ch"
                    ;
#line 180 "decomp0.ch"
#line 180 "decomp0.ch"
                    Switcher(exp2, name, level);
#line 180 "decomp0.ch"
#line 181 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 181 "decomp0.ch"
#line 182 "decomp0.ch"
                                                        WriteString(name_ident);
#line 182 "decomp0.ch"
#line 182 "decomp0.ch"
                                                        PrintString(" = ");
#line 182 "decomp0.ch"
#line 182 "decomp0.ch"
                                                        WriteString(name);
#line 182 "decomp0.ch"
#line 182 "decomp0.ch"
                                                        PrintString(";");
#line 182 "decomp0.ch"
#line 182 "decomp0.ch"
                                                        LNewLine(1);
#line 182 "decomp0.ch"
                                                        
#line 182 "decomp0.ch"
#line 183 "decomp0.ch"
                                                        
#line 183 "decomp0.ch"
#line 183 "decomp0.ch"
                                                       }
#line 183 "decomp0.ch"
#line 184 "decomp0.ch"
                    break ;
                    
#line 184 "decomp0.ch"
#line 186 "decomp0.ch"
                case metachop::EXPO_AFF : 
#line 186 "decomp0.ch"
#line 186 "decomp0.ch"
                _Case50 : 
#line 186 "decomp0.ch"
#line 186 "decomp0.ch"
                    ;
#line 186 "decomp0.ch"
#line 186 "decomp0.ch"
                    Switcher(exp2, name, level);
#line 186 "decomp0.ch"
#line 187 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 187 "decomp0.ch"
#line 188 "decomp0.ch"
                                                        WriteString(name_ident);
#line 188 "decomp0.ch"
#line 188 "decomp0.ch"
                                                        PrintString(" = ");
#line 188 "decomp0.ch"
#line 188 "decomp0.ch"
                                                        WriteString(name);
#line 188 "decomp0.ch"
#line 188 "decomp0.ch"
                                                        PrintString(";");
#line 188 "decomp0.ch"
#line 188 "decomp0.ch"
                                                        LNewLine(1);
#line 188 "decomp0.ch"
                                                        
#line 188 "decomp0.ch"
#line 189 "decomp0.ch"
                                                        
#line 189 "decomp0.ch"
#line 189 "decomp0.ch"
                                                       }
#line 189 "decomp0.ch"
#line 190 "decomp0.ch"
                    break ;
                    
#line 190 "decomp0.ch"
#line 192 "decomp0.ch"
                case metachop::MUL_AFF : 
#line 192 "decomp0.ch"
#line 192 "decomp0.ch"
                _Case51 : 
#line 192 "decomp0.ch"
#line 192 "decomp0.ch"
                    ;
#line 192 "decomp0.ch"
#line 192 "decomp0.ch"
                    Switcher(exp2, name, level);
#line 192 "decomp0.ch"
#line 193 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 193 "decomp0.ch"
#line 194 "decomp0.ch"
                                                        WriteString(name_ident);
#line 194 "decomp0.ch"
#line 194 "decomp0.ch"
                                                        PrintString(" = ");
#line 194 "decomp0.ch"
#line 194 "decomp0.ch"
                                                        WriteString(name);
#line 194 "decomp0.ch"
#line 194 "decomp0.ch"
                                                        PrintString(";");
#line 194 "decomp0.ch"
#line 194 "decomp0.ch"
                                                        LNewLine(1);
#line 194 "decomp0.ch"
                                                        
#line 194 "decomp0.ch"
#line 195 "decomp0.ch"
                                                        
#line 195 "decomp0.ch"
#line 195 "decomp0.ch"
                                                       }
#line 195 "decomp0.ch"
#line 196 "decomp0.ch"
                    break ;
                    
#line 196 "decomp0.ch"
#line 198 "decomp0.ch"
                case metachop::NEXT : 
#line 198 "decomp0.ch"
#line 198 "decomp0.ch"
                _Case52 : 
#line 198 "decomp0.ch"
#line 198 "decomp0.ch"
                    ;
#line 198 "decomp0.ch"
#line 198 "decomp0.ch"
                    WriteString(name_ident);
#line 198 "decomp0.ch"
#line 198 "decomp0.ch"
                    PrintString(" = ");
#line 198 "decomp0.ch"
#line 198 "decomp0.ch"
                    decomp(exp2);
#line 198 "decomp0.ch"
                    
#line 198 "decomp0.ch"
#line 198 "decomp0.ch"
                    PrintString(";");
#line 198 "decomp0.ch"
#line 198 "decomp0.ch"
                    LNewLine(1);
#line 198 "decomp0.ch"
                    
#line 198 "decomp0.ch"
#line 199 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 199 "decomp0.ch"
#line 200 "decomp0.ch"
                                                        WriteString(name);
#line 200 "decomp0.ch"
#line 200 "decomp0.ch"
                                                        PrintString(" = ");
#line 200 "decomp0.ch"
#line 200 "decomp0.ch"
                                                        WriteString(name_ident);
#line 200 "decomp0.ch"
#line 200 "decomp0.ch"
                                                        PrintString(";");
#line 200 "decomp0.ch"
#line 200 "decomp0.ch"
                                                        LNewLine(1);
#line 200 "decomp0.ch"
                                                        
#line 200 "decomp0.ch"
#line 201 "decomp0.ch"
                                                        
#line 201 "decomp0.ch"
#line 201 "decomp0.ch"
                                                       }
#line 201 "decomp0.ch"
#line 202 "decomp0.ch"
                    break ;
                    
#line 202 "decomp0.ch"
#line 204 "decomp0.ch"
                default : 
#line 204 "decomp0.ch"
#line 204 "decomp0.ch"
                _Case53 : 
#line 204 "decomp0.ch"
#line 204 "decomp0.ch"
                    ;
#line 204 "decomp0.ch"
#line 204 "decomp0.ch"
                    WriteString(name_ident);
#line 204 "decomp0.ch"
#line 204 "decomp0.ch"
                    PrintString(" = StoreRef(");
#line 204 "decomp0.ch"
#line 204 "decomp0.ch"
                    decomp(exp2);
#line 204 "decomp0.ch"
                    
#line 204 "decomp0.ch"
#line 204 "decomp0.ch"
                    PrintString(");");
#line 204 "decomp0.ch"
#line 204 "decomp0.ch"
                    LNewLine(1);
#line 204 "decomp0.ch"
                    
#line 204 "decomp0.ch"
#line 205 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 205 "decomp0.ch"
#line 206 "decomp0.ch"
                                                        WriteString(name);
#line 206 "decomp0.ch"
#line 206 "decomp0.ch"
                                                        PrintString(" = ");
#line 206 "decomp0.ch"
#line 206 "decomp0.ch"
                                                        WriteString(name_ident);
#line 206 "decomp0.ch"
#line 206 "decomp0.ch"
                                                        PrintString(";");
#line 206 "decomp0.ch"
#line 206 "decomp0.ch"
                                                        LNewLine(1);
#line 206 "decomp0.ch"
                                                        
#line 206 "decomp0.ch"
#line 207 "decomp0.ch"
                                                        
#line 207 "decomp0.ch"
#line 207 "decomp0.ch"
                                                       }
#line 207 "decomp0.ch"
#line 208 "decomp0.ch"
                    break ;
                    
#line 208 "decomp0.ch"
            }
#line 208 "decomp0.ch"
            
#line 208 "decomp0.ch"
#line 210 "decomp0.ch"
            free(name_ident);
#line 210 "decomp0.ch"
#line 211 "decomp0.ch"
            return name ;
            
#line 211 "decomp0.ch"
#line 211 "decomp0.ch"
            goto _Case42 ;
            
#line 211 "decomp0.ch"
#line 213 "decomp0.ch"
        default : 
#line 213 "decomp0.ch"
#line 213 "decomp0.ch"
        _Case42 : 
#line 213 "decomp0.ch"
#line 213 "decomp0.ch"
            ;
#line 213 "decomp0.ch"
#line 213 "decomp0.ch"
            WriteString(name);
#line 213 "decomp0.ch"
#line 213 "decomp0.ch"
            PrintString(" = StoreRef(");
#line 213 "decomp0.ch"
#line 214 "decomp0.ch"
            decomp(paramTree);
#line 214 "decomp0.ch"
#line 215 "decomp0.ch"
            PrintString(");");
#line 215 "decomp0.ch"
#line 215 "decomp0.ch"
            LNewLine(1);
#line 215 "decomp0.ch"
            
#line 215 "decomp0.ch"
#line 216 "decomp0.ch"
            return name ;
            
#line 216 "decomp0.ch"
    }
#line 216 "decomp0.ch"
    
#line 216 "decomp0.ch"
#line 218 "decomp0.ch"
    
#line 218 "decomp0.ch"
#line 218 "decomp0.ch"
}
#line 218 "decomp0.ch"

#line 222 "decomp0.ch"

#line 222 "decomp0.ch"
void MakeTreeGen ( PTREE paramTree, char *name, int level )
#line 222 "decomp0.ch"
{
#line 222 "decomp0.ch"
    register PPTREE _inter ;
#line 222 "decomp0.ch"

#line 222 "decomp0.ch"
#line 222 "decomp0.ch"
    int _retVal [2];
    
#line 222 "decomp0.ch"
#line 222 "decomp0.ch"
    PPTREE  _storeVal [2];
    
#line 222 "decomp0.ch"
#line 222 "decomp0.ch"
    int _nextVal ;
    
#line 222 "decomp0.ch"
#line 225 "decomp0.ch"
    
    int nbParam, currParam, gennode ;
    
#line 225 "decomp0.ch"
#line 226 "decomp0.ch"
    char    string [20], namePt [20], resPt [20], *retName ;
    
#line 226 "decomp0.ch"
#line 227 "decomp0.ch"
    PTREE   ptTree, son ;
#line 227 "decomp0.ch"
    
#line 227 "decomp0.ch"
#line 229 "decomp0.ch"
    sprintf(namePt, "_ptTree%d", level);
#line 229 "decomp0.ch"
#line 230 "decomp0.ch"
    sprintf(resPt, "_ptRes%d", level);
#line 230 "decomp0.ch"
#line 231 "decomp0.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 231 "decomp0.ch"
        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 231 "decomp0.ch"
            ((ptTree=SonTree(_inter,2)),1) &&
#line 231 "decomp0.ch"
            1),
#line 231 "decomp0.ch"
            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 231 "decomp0.ch"
        1);
#line 231 "decomp0.ch"
    ;
#line 231 "decomp0.ch"
#line 235 "decomp0.ch"
    nbParam = 0 ;
#line 235 "decomp0.ch"
#line 236 "decomp0.ch"
    while ( !((!ptTree)) ) {
#line 236 "decomp0.ch"
#line 237 "decomp0.ch"
                                nbParam++ ;
#line 237 "decomp0.ch"
#line 238 "decomp0.ch"
                                (ptTree?ptTree.Nextl():(PPTREE)0);
#line 238 "decomp0.ch"
#line 239 "decomp0.ch"
                                
#line 239 "decomp0.ch"
#line 239 "decomp0.ch"
                             }
#line 239 "decomp0.ch"
#line 240 "decomp0.ch"
    PrintString("{");
#line 240 "decomp0.ch"
#line 240 "decomp0.ch"
    LNewLine(1);
#line 240 "decomp0.ch"
    
#line 240 "decomp0.ch"
#line 241 "decomp0.ch"
    Tab();
#line 241 "decomp0.ch"
    
#line 241 "decomp0.ch"
#line 242 "decomp0.ch"
    Mark();
#line 242 "decomp0.ch"
    PrintString("PPTREE ");
#line 242 "decomp0.ch"
    WriteString(namePt);
#line 242 "decomp0.ch"
    PrintString("= (PPTREE) 0,");
#line 242 "decomp0.ch"
    WriteString(resPt);
#line 242 "decomp0.ch"
    PrintString("= (PPTREE) 0;");
#line 242 "decomp0.ch"
    LNewLine(1);
#line 242 "decomp0.ch"
    
#line 242 "decomp0.ch"
    WriteString(resPt);
#line 242 "decomp0.ch"
    PrintString(" = MakeTree(");
#line 242 "decomp0.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 242 "decomp0.ch"
        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 242 "decomp0.ch"
            ((son=SonTree(_inter,1)),1) &&
#line 242 "decomp0.ch"
            1),
#line 242 "decomp0.ch"
            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 242 "decomp0.ch"
        1);
#line 242 "decomp0.ch"
    ;
#line 242 "decomp0.ch"
    if ( ((_inter = (PPTREE)son,1) && 
#line 242 "decomp0.ch"
            (NumberTree(_inter) == metachop::QUALIFIED) &&
#line 242 "decomp0.ch"
            1) ) {
#line 242 "decomp0.ch"
#line 248 "decomp0.ch"
                    WriteString(Value(son [1]));
#line 248 "decomp0.ch"
#line 248 "decomp0.ch"
                    WriteString("::");
#line 248 "decomp0.ch"
#line 248 "decomp0.ch"
                    WriteString(Value(son [2]));
#line 248 "decomp0.ch"
#line 248 "decomp0.ch"
                    WriteString(",");
#line 248 "decomp0.ch"
#line 249 "decomp0.ch"
                    
#line 249 "decomp0.ch"
#line 249 "decomp0.ch"
                 } else 
#line 249 "decomp0.ch"
    {
#line 249 "decomp0.ch"
#line 250 "decomp0.ch"
        if ( cplusGen ) {
#line 250 "decomp0.ch"
#line 251 "decomp0.ch"
                            WriteString(NameOfNodePlus(Value(son)));
#line 251 "decomp0.ch"
#line 251 "decomp0.ch"
                            PrintString(", ");
#line 251 "decomp0.ch"
#line 252 "decomp0.ch"
                            
#line 252 "decomp0.ch"
#line 252 "decomp0.ch"
                         } else 
#line 252 "decomp0.ch"
        {
#line 252 "decomp0.ch"
#line 253 "decomp0.ch"
            WriteString(NameOfNode(Value(son)));
#line 253 "decomp0.ch"
#line 253 "decomp0.ch"
            PrintString(", ");
#line 253 "decomp0.ch"
#line 254 "decomp0.ch"
            
#line 254 "decomp0.ch"
#line 254 "decomp0.ch"
        }
        
#line 254 "decomp0.ch"
#line 255 "decomp0.ch"
        
#line 255 "decomp0.ch"
#line 255 "decomp0.ch"
    }
    
#line 255 "decomp0.ch"
    if ( nbParam > 99 ) {
#line 255 "decomp0.ch"
#line 257 "decomp0.ch"
                            WriteString(" Too many parameter for maketree");
#line 257 "decomp0.ch"
#line 258 "decomp0.ch"
                            nbParam = 99 ;
#line 258 "decomp0.ch"
#line 259 "decomp0.ch"
                            
#line 259 "decomp0.ch"
#line 259 "decomp0.ch"
                          }
#line 259 "decomp0.ch"
    sprintf(string, "%d);", nbParam);
#line 259 "decomp0.ch"
    WriteString(string);
#line 259 "decomp0.ch"
    LNewLine(1);
#line 259 "decomp0.ch"
    
#line 259 "decomp0.ch"
    currParam = 1 ;
#line 259 "decomp0.ch"
    if ( !level ) 
#line 259 "decomp0.ch"
#line 264 "decomp0.ch"
        InitDecElem(name, nbParam);
#line 264 "decomp0.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 264 "decomp0.ch"
        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 264 "decomp0.ch"
            ((ptTree=SonTree(_inter,2)),1) &&
#line 264 "decomp0.ch"
            1),
#line 264 "decomp0.ch"
            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 264 "decomp0.ch"
        1);
#line 264 "decomp0.ch"
    ;
#line 264 "decomp0.ch"
    while ( !((!ptTree)) ) {
#line 264 "decomp0.ch"
#line 267 "decomp0.ch"
                                (son=(ptTree?ptTree.Nextl():(PPTREE)0));
#line 267 "decomp0.ch"
                                
#line 267 "decomp0.ch"
#line 268 "decomp0.ch"
                                if ( !(((_inter = (PPTREE)son,1) && 
#line 268 "decomp0.ch"
                                            (NumberTree(_inter) == metachop::NIL) &&
#line 268 "decomp0.ch"
                                            1)) && !(((_inter = (PPTREE)son,1) && 
#line 268 "decomp0.ch"
                                                        (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 268 "decomp0.ch"
                                                        1)) ) {
#line 268 "decomp0.ch"
#line 269 "decomp0.ch"
                                                                retName = Switcher(son, namePt, level + 1);
#line 269 "decomp0.ch"
#line 270 "decomp0.ch"
                                                                sprintf(string, "%d", currParam);
#line 270 "decomp0.ch"
#line 271 "decomp0.ch"
                                                                PrintString("ReplaceTree(");
#line 271 "decomp0.ch"
#line 271 "decomp0.ch"
                                                                WriteString(resPt);
#line 271 "decomp0.ch"
#line 271 "decomp0.ch"
                                                                PrintString(", ");
#line 271 "decomp0.ch"
#line 271 "decomp0.ch"
                                                                WriteString(string);
#line 271 "decomp0.ch"
#line 271 "decomp0.ch"
                                                                PrintString(", ");
#line 271 "decomp0.ch"
#line 271 "decomp0.ch"
                                                                WriteString(retName);
#line 271 "decomp0.ch"
#line 271 "decomp0.ch"
                                                                PrintString(");");
#line 271 "decomp0.ch"
#line 271 "decomp0.ch"
                                                                LNewLine(1);
#line 271 "decomp0.ch"
                                                                
#line 271 "decomp0.ch"
#line 272 "decomp0.ch"
                                                                
#line 272 "decomp0.ch"
#line 272 "decomp0.ch"
                                                              }
#line 272 "decomp0.ch"
#line 273 "decomp0.ch"
                                currParam++ ;
#line 273 "decomp0.ch"
#line 274 "decomp0.ch"
                                
#line 274 "decomp0.ch"
#line 274 "decomp0.ch"
                             }
#line 274 "decomp0.ch"
    WriteString(name);
#line 274 "decomp0.ch"
    PrintString(" = ");
#line 274 "decomp0.ch"
    WriteString(resPt);
#line 274 "decomp0.ch"
    PrintString(";");
#line 274 "decomp0.ch"
    LNewLine(1);
#line 274 "decomp0.ch"
    
#line 274 "decomp0.ch"
    UnMark();
#line 274 "decomp0.ch"
    
#line 274 "decomp0.ch"
#line 277 "decomp0.ch"
    PrintString("}");
#line 277 "decomp0.ch"
#line 277 "decomp0.ch"
    LNewLine(1);
#line 277 "decomp0.ch"
    
#line 277 "decomp0.ch"
#line 278 "decomp0.ch"
    
#line 278 "decomp0.ch"
#line 278 "decomp0.ch"
}
#line 278 "decomp0.ch"

#line 282 "decomp0.ch"

#line 282 "decomp0.ch"
void ReplaceTreeGen ( PTREE paramTree, char *name, char *mod_name, int level )
#line 282 "decomp0.ch"
{
#line 282 "decomp0.ch"
    register PPTREE _inter ;
#line 282 "decomp0.ch"

#line 282 "decomp0.ch"
#line 282 "decomp0.ch"
    int _retVal [2];
    
#line 282 "decomp0.ch"
#line 282 "decomp0.ch"
    PPTREE  _storeVal [2];
    
#line 282 "decomp0.ch"
#line 282 "decomp0.ch"
    int _nextVal ;
    
#line 282 "decomp0.ch"
#line 285 "decomp0.ch"
    
    int nbParam, currParam, gennode ;
    
#line 285 "decomp0.ch"
#line 286 "decomp0.ch"
    char    string [20], namePt [20], name1Pt [20], *retName ;
    
#line 286 "decomp0.ch"
#line 287 "decomp0.ch"
    int treeType ;
    
#line 287 "decomp0.ch"
#line 288 "decomp0.ch"
    PTREE   ptTree, son, ident ;
#line 288 "decomp0.ch"
    
#line 288 "decomp0.ch"
#line 290 "decomp0.ch"
    sprintf(namePt, "_ptTree%d", level);
#line 290 "decomp0.ch"
#line 291 "decomp0.ch"
    sprintf(name1Pt, "_sonTree%d", level);
#line 291 "decomp0.ch"
#line 292 "decomp0.ch"
    PrintString("{");
#line 292 "decomp0.ch"
#line 292 "decomp0.ch"
    LNewLine(1);
#line 292 "decomp0.ch"
    
#line 292 "decomp0.ch"
#line 293 "decomp0.ch"
    Tab();
#line 293 "decomp0.ch"
    
#line 293 "decomp0.ch"
#line 294 "decomp0.ch"
    Mark();
#line 294 "decomp0.ch"
    PrintString("PPTREE ");
#line 294 "decomp0.ch"
    WriteString(namePt);
#line 294 "decomp0.ch"
    PrintString("= (PPTREE) 0,");
#line 294 "decomp0.ch"
    WriteString(name1Pt);
#line 294 "decomp0.ch"
    PrintString("= (PPTREE) 0 ;");
#line 294 "decomp0.ch"
    LNewLine(1);
#line 294 "decomp0.ch"
    
#line 294 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 294 "decomp0.ch"
            (NumberTree(_inter) == metachop::IDENT) &&
#line 294 "decomp0.ch"
            1) || ((_inter = (PPTREE)paramTree,1) && 
#line 294 "decomp0.ch"
                        (NumberTree(_inter) == metachop::NIL) &&
#line 294 "decomp0.ch"
                        1) ) {
#line 294 "decomp0.ch"
#line 296 "decomp0.ch"
                                PrintString("if (");
#line 296 "decomp0.ch"
#line 296 "decomp0.ch"
                                WriteString(namePt);
#line 296 "decomp0.ch"
#line 296 "decomp0.ch"
                                PrintString("= fathertree(");
#line 296 "decomp0.ch"
#line 296 "decomp0.ch"
                                WriteString(mod_name);
#line 296 "decomp0.ch"
#line 296 "decomp0.ch"
                                PrintString(")) {");
#line 296 "decomp0.ch"
#line 296 "decomp0.ch"
                                LNewLine(1);
#line 296 "decomp0.ch"
                                
#line 296 "decomp0.ch"
#line 297 "decomp0.ch"
                                Tab();
#line 297 "decomp0.ch"
                                
#line 297 "decomp0.ch"
#line 298 "decomp0.ch"
                                Mark();
#line 298 "decomp0.ch"
                                PrintString("int rank = ranktree(");
#line 298 "decomp0.ch"
                                WriteString(mod_name);
#line 298 "decomp0.ch"
                                PrintString(");");
#line 298 "decomp0.ch"
                                LNewLine(1);
#line 298 "decomp0.ch"
                                
#line 298 "decomp0.ch"
                                PrintString("ReplaceTree(");
#line 298 "decomp0.ch"
                                WriteString(namePt);
#line 298 "decomp0.ch"
                                PrintString(",rank,");
#line 298 "decomp0.ch"
                                if ( !(((_inter = (PPTREE)paramTree,1) && 
#line 298 "decomp0.ch"
                                            (NumberTree(_inter) == metachop::NIL) &&
#line 298 "decomp0.ch"
                                            1)) ) 
#line 298 "decomp0.ch"
#line 301 "decomp0.ch"
                                    decomp(paramTree);
#line 301 "decomp0.ch"
                                
#line 301 "decomp0.ch"
                                else 
#line 301 "decomp0.ch"
#line 303 "decomp0.ch"
                                    PrintString("(PPTREE) 0 ");
#line 303 "decomp0.ch"
                                    PrintString(");");
#line 303 "decomp0.ch"
                                
#line 303 "decomp0.ch"
                                LNewLine(1);
#line 303 "decomp0.ch"
                                
#line 303 "decomp0.ch"
                                UnMark();
#line 303 "decomp0.ch"
                                
#line 303 "decomp0.ch"
#line 306 "decomp0.ch"
                                PrintString("}");
#line 306 "decomp0.ch"
#line 306 "decomp0.ch"
                                LNewLine(1);
#line 306 "decomp0.ch"
                                
#line 306 "decomp0.ch"
#line 307 "decomp0.ch"
                                if ( name ) {
#line 307 "decomp0.ch"
#line 308 "decomp0.ch"
                                                WriteString(name);
#line 308 "decomp0.ch"
#line 308 "decomp0.ch"
                                                WriteString(" = ");
#line 308 "decomp0.ch"
#line 309 "decomp0.ch"
                                                if ( !(((_inter = (PPTREE)paramTree,1) && 
#line 309 "decomp0.ch"
                                                            (NumberTree(_inter) == metachop::NIL) &&
#line 309 "decomp0.ch"
                                                            1)) ) 
#line 309 "decomp0.ch"
#line 310 "decomp0.ch"
                                                    decomp(paramTree);
#line 310 "decomp0.ch"
                                                
#line 310 "decomp0.ch"
                                                else 
#line 310 "decomp0.ch"
#line 312 "decomp0.ch"
                                                    PrintString("(PPTREE) 0");
#line 312 "decomp0.ch"
                                                    PrintString(";");
#line 312 "decomp0.ch"
                                                
#line 312 "decomp0.ch"
#line 313 "decomp0.ch"
                                                LNewLine(1);
#line 313 "decomp0.ch"
                                                
#line 313 "decomp0.ch"
#line 314 "decomp0.ch"
                                                
#line 314 "decomp0.ch"
#line 314 "decomp0.ch"
                                             }
#line 314 "decomp0.ch"
#line 315 "decomp0.ch"
                                
#line 315 "decomp0.ch"
#line 315 "decomp0.ch"
                             } else 
#line 315 "decomp0.ch"
    {
#line 315 "decomp0.ch"
#line 316 "decomp0.ch"
        ((_inter = (PPTREE)paramTree,1) && 
#line 316 "decomp0.ch"
            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 316 "decomp0.ch"
                ((ptTree=SonTree(_inter,2)),1) &&
#line 316 "decomp0.ch"
                1),
#line 316 "decomp0.ch"
                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 316 "decomp0.ch"
            1);
#line 316 "decomp0.ch"
        ;
#line 316 "decomp0.ch"
#line 319 "decomp0.ch"
        currParam = 1 ;
#line 319 "decomp0.ch"
#line 320 "decomp0.ch"
        sprintf(string, "%d);", currParam);
#line 320 "decomp0.ch"
#line 321 "decomp0.ch"
        while ( !((!ptTree)) ) {
#line 321 "decomp0.ch"
#line 322 "decomp0.ch"
                                    (son=(ptTree?ptTree.Nextl():(PPTREE)0));
#line 322 "decomp0.ch"
                                    
#line 322 "decomp0.ch"
#line 323 "decomp0.ch"
                                    {
#line 323 "decomp0.ch"
                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 323 "decomp0.ch"
                                        _ptRes0 = MakeTree(LIST, 2);
#line 323 "decomp0.ch"
                                        ident = _ptRes0;
#line 323 "decomp0.ch"
                                    }
#line 323 "decomp0.ch"
                                    
#line 323 "decomp0.ch"
#line 324 "decomp0.ch"
                                    if ( !(((_inter = (PPTREE)son,1) && 
#line 324 "decomp0.ch"
                                                (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 324 "decomp0.ch"
                                                1)) ) {
#line 324 "decomp0.ch"
#line 325 "decomp0.ch"
                                                        sprintf(string, "%d", currParam);
#line 325 "decomp0.ch"
#line 326 "decomp0.ch"
                                                        ((_inter = (PPTREE)son,1) && 
#line 326 "decomp0.ch"
                                                            (NumberTree(_inter) == metachop::NODE_TREE) &&
#line 326 "decomp0.ch"
                                                            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 326 "decomp0.ch"
                                                                ((ident=SonTree(_inter,1)),1) &&
#line 326 "decomp0.ch"
                                                                1),
#line 326 "decomp0.ch"
                                                                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 326 "decomp0.ch"
                                                            1);
#line 326 "decomp0.ch"
                                                        ;
#line 326 "decomp0.ch"
#line 327 "decomp0.ch"
                                                        if ( !((!ident)) ) 
#line 327 "decomp0.ch"
#line 328 "decomp0.ch"
                                                            retName = Switcher(son, namePt, level + 1);
#line 328 "decomp0.ch"
                                                        else 
#line 329 "decomp0.ch"
                                                        {
#line 329 "decomp0.ch"
#line 330 "decomp0.ch"
                                                            WriteString(name1Pt);
#line 330 "decomp0.ch"
#line 330 "decomp0.ch"
                                                            PrintString(" = SonTree(");
#line 330 "decomp0.ch"
#line 330 "decomp0.ch"
                                                            WriteString(mod_name);
#line 330 "decomp0.ch"
#line 330 "decomp0.ch"
                                                            PrintString(",");
#line 330 "decomp0.ch"
#line 330 "decomp0.ch"
                                                            WriteString(string);
#line 330 "decomp0.ch"
#line 330 "decomp0.ch"
                                                            PrintString(");");
#line 330 "decomp0.ch"
#line 330 "decomp0.ch"
                                                            LNewLine(1);
#line 330 "decomp0.ch"
                                                            
#line 330 "decomp0.ch"
#line 331 "decomp0.ch"
                                                            ReplaceTreeGen(son, namePt, name1Pt, level + 1);
#line 331 "decomp0.ch"
#line 332 "decomp0.ch"
                                                            retName = namePt ;
#line 332 "decomp0.ch"
#line 333 "decomp0.ch"
                                                            
#line 333 "decomp0.ch"
#line 333 "decomp0.ch"
                                                        }
                                                        
#line 333 "decomp0.ch"
#line 334 "decomp0.ch"
                                                        if ( name ) {
#line 334 "decomp0.ch"
#line 335 "decomp0.ch"
                                                                        WriteString(name);
#line 335 "decomp0.ch"
#line 335 "decomp0.ch"
                                                                        WriteString(" = ");
#line 335 "decomp0.ch"
#line 336 "decomp0.ch"
                                                                        
#line 336 "decomp0.ch"
#line 336 "decomp0.ch"
                                                                     }
#line 336 "decomp0.ch"
#line 337 "decomp0.ch"
                                                        PrintString("ReplaceTree(");
#line 337 "decomp0.ch"
#line 337 "decomp0.ch"
                                                        WriteString(mod_name);
#line 337 "decomp0.ch"
#line 337 "decomp0.ch"
                                                        PrintString(", ");
#line 337 "decomp0.ch"
#line 337 "decomp0.ch"
                                                        WriteString(string);
#line 337 "decomp0.ch"
#line 337 "decomp0.ch"
                                                        PrintString(", ");
#line 337 "decomp0.ch"
#line 337 "decomp0.ch"
                                                        WriteString(retName);
#line 337 "decomp0.ch"
#line 337 "decomp0.ch"
                                                        PrintString(")");
#line 337 "decomp0.ch"
                                                        PrintString(";");
#line 337 "decomp0.ch"
#line 337 "decomp0.ch"
                                                        LNewLine(1);
#line 337 "decomp0.ch"
                                                        
#line 337 "decomp0.ch"
#line 338 "decomp0.ch"
                                                        
#line 338 "decomp0.ch"
#line 338 "decomp0.ch"
                                                      }
#line 338 "decomp0.ch"
#line 339 "decomp0.ch"
                                    currParam++ ;
#line 339 "decomp0.ch"
#line 340 "decomp0.ch"
                                    
#line 340 "decomp0.ch"
#line 340 "decomp0.ch"
                                 }
#line 340 "decomp0.ch"
#line 341 "decomp0.ch"
        
#line 341 "decomp0.ch"
#line 341 "decomp0.ch"
    }
    
#line 341 "decomp0.ch"
    UnMark();
#line 341 "decomp0.ch"
    
#line 341 "decomp0.ch"
#line 343 "decomp0.ch"
    PrintString("}");
#line 343 "decomp0.ch"
#line 343 "decomp0.ch"
    LNewLine(1);
#line 343 "decomp0.ch"
    
#line 343 "decomp0.ch"
#line 344 "decomp0.ch"
    
#line 344 "decomp0.ch"
#line 344 "decomp0.ch"
}
#line 344 "decomp0.ch"

#line 348 "decomp0.ch"

#line 348 "decomp0.ch"
void AddListGen ( PTREE paramTree, char *name, char *name_mod, int level )
#line 348 "decomp0.ch"
{
#line 348 "decomp0.ch"
#line 348 "decomp0.ch"
    int _nextVal ;
    
#line 348 "decomp0.ch"
#line 351 "decomp0.ch"
    
    char    string [20];
    
#line 351 "decomp0.ch"
#line 352 "decomp0.ch"
    char    namePt [20];
    
#line 352 "decomp0.ch"
#line 353 "decomp0.ch"
    char    *nameTree ;
    
#line 353 "decomp0.ch"
#line 355 "decomp0.ch"
    sprintf(namePt, "_ptTree%d", level);
#line 355 "decomp0.ch"
#line 356 "decomp0.ch"
    PrintString("{");
#line 356 "decomp0.ch"
#line 356 "decomp0.ch"
    LNewLine(1);
#line 356 "decomp0.ch"
    
#line 356 "decomp0.ch"
#line 357 "decomp0.ch"
    Tab();
#line 357 "decomp0.ch"
    
#line 357 "decomp0.ch"
#line 358 "decomp0.ch"
    Mark();
#line 358 "decomp0.ch"
    PrintString("PPTREE ");
#line 358 "decomp0.ch"
    WriteString(namePt);
#line 358 "decomp0.ch"
    PrintString("= (PPTREE) 0 ;");
#line 358 "decomp0.ch"
    LNewLine(1);
#line 358 "decomp0.ch"
    
#line 358 "decomp0.ch"
    nameTree = Switcher(paramTree, namePt, level + 1);
#line 358 "decomp0.ch"
    if ( name ) {
#line 358 "decomp0.ch"
#line 361 "decomp0.ch"
                    WriteString(name);
#line 361 "decomp0.ch"
#line 361 "decomp0.ch"
                    PrintString(" = ");
#line 361 "decomp0.ch"
#line 362 "decomp0.ch"
                    
#line 362 "decomp0.ch"
#line 362 "decomp0.ch"
                 }
#line 362 "decomp0.ch"
    WriteString(name_mod);
#line 362 "decomp0.ch"
    PrintString(" = AddList( ");
#line 362 "decomp0.ch"
    WriteString(name_mod);
#line 362 "decomp0.ch"
    PrintString(",");
#line 362 "decomp0.ch"
    WriteString(nameTree);
#line 362 "decomp0.ch"
    PrintString(")");
#line 362 "decomp0.ch"
    PrintString(";");
#line 362 "decomp0.ch"
    LNewLine(1);
#line 362 "decomp0.ch"
    
#line 362 "decomp0.ch"
    UnMark();
#line 362 "decomp0.ch"
    
#line 362 "decomp0.ch"
#line 365 "decomp0.ch"
    PrintString("}");
#line 365 "decomp0.ch"
#line 365 "decomp0.ch"
    LNewLine(1);
#line 365 "decomp0.ch"
    
#line 365 "decomp0.ch"
#line 366 "decomp0.ch"
    
#line 366 "decomp0.ch"
#line 366 "decomp0.ch"
}
#line 366 "decomp0.ch"

#line 371 "decomp0.ch"

#line 371 "decomp0.ch"
void AddListGen1 ( PTREE paramTree, char *name, char *name_mod, int level )
#line 371 "decomp0.ch"
{
#line 371 "decomp0.ch"
    register PPTREE _inter ;
#line 371 "decomp0.ch"

#line 371 "decomp0.ch"
#line 371 "decomp0.ch"
    int _nextVal ;
    
#line 371 "decomp0.ch"
#line 374 "decomp0.ch"
    
    char    string [5];
    
#line 374 "decomp0.ch"
#line 375 "decomp0.ch"
    char    namePt [10];
    
#line 375 "decomp0.ch"
#line 376 "decomp0.ch"
    char    *nameTree ;
    
#line 376 "decomp0.ch"
#line 377 "decomp0.ch"
    PTREE   exp1, exp2 ;
#line 377 "decomp0.ch"
    
#line 377 "decomp0.ch"
#line 379 "decomp0.ch"
    sprintf(namePt, "_ptTree%d", level);
#line 379 "decomp0.ch"
#line 380 "decomp0.ch"
    PrintString("{");
#line 380 "decomp0.ch"
#line 380 "decomp0.ch"
    LNewLine(1);
#line 380 "decomp0.ch"
    
#line 380 "decomp0.ch"
#line 381 "decomp0.ch"
    Tab();
#line 381 "decomp0.ch"
    
#line 381 "decomp0.ch"
#line 382 "decomp0.ch"
    Mark();
#line 382 "decomp0.ch"
    PrintString("PPTREE ");
#line 382 "decomp0.ch"
    WriteString(namePt);
#line 382 "decomp0.ch"
    PrintString("= (PPTREE) 0 ;");
#line 382 "decomp0.ch"
    LNewLine(1);
#line 382 "decomp0.ch"
    
#line 382 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 382 "decomp0.ch"
            (NumberTree(_inter) == metachop::MUL) &&
#line 382 "decomp0.ch"
            ((exp1=SonTree(_inter,1)),1) &&
#line 382 "decomp0.ch"
            ((exp2=SonTree(_inter,2)),1) &&
#line 382 "decomp0.ch"
            1) ) {
#line 382 "decomp0.ch"
#line 384 "decomp0.ch"
                    AddListGen1(exp1, (char *)0, name_mod, level + 1);
#line 384 "decomp0.ch"
#line 385 "decomp0.ch"
                    AddListGen1(exp2, (char *)0, name_mod, level + 1);
#line 385 "decomp0.ch"
#line 386 "decomp0.ch"
                    
#line 386 "decomp0.ch"
#line 386 "decomp0.ch"
                 } else 
#line 386 "decomp0.ch"
    {
#line 386 "decomp0.ch"
#line 387 "decomp0.ch"
        nameTree = Switcher(paramTree, namePt, level + 1);
#line 387 "decomp0.ch"
#line 388 "decomp0.ch"
        WriteString(name_mod);
#line 388 "decomp0.ch"
#line 388 "decomp0.ch"
        PrintString(" =  AddList( ");
#line 388 "decomp0.ch"
#line 388 "decomp0.ch"
        WriteString(name_mod);
#line 388 "decomp0.ch"
#line 388 "decomp0.ch"
        PrintString(",");
#line 388 "decomp0.ch"
#line 388 "decomp0.ch"
        WriteString(nameTree);
#line 388 "decomp0.ch"
#line 388 "decomp0.ch"
        PrintString(");");
#line 388 "decomp0.ch"
#line 388 "decomp0.ch"
        LNewLine(1);
#line 388 "decomp0.ch"
        
#line 388 "decomp0.ch"
#line 389 "decomp0.ch"
        
#line 389 "decomp0.ch"
#line 389 "decomp0.ch"
    }
    
#line 389 "decomp0.ch"
    if ( name ) {
#line 389 "decomp0.ch"
#line 391 "decomp0.ch"
                    WriteString(name);
#line 391 "decomp0.ch"
#line 391 "decomp0.ch"
                    PrintString(" = ");
#line 391 "decomp0.ch"
#line 391 "decomp0.ch"
                    WriteString(name_mod);
#line 391 "decomp0.ch"
#line 391 "decomp0.ch"
                    PrintString(";");
#line 391 "decomp0.ch"
#line 391 "decomp0.ch"
                    LNewLine(1);
#line 391 "decomp0.ch"
                    
#line 391 "decomp0.ch"
#line 392 "decomp0.ch"
                    
#line 392 "decomp0.ch"
#line 392 "decomp0.ch"
                 }
#line 392 "decomp0.ch"
    UnMark();
#line 392 "decomp0.ch"
    
#line 392 "decomp0.ch"
#line 394 "decomp0.ch"
    PrintString("}");
#line 394 "decomp0.ch"
#line 394 "decomp0.ch"
    LNewLine(1);
#line 394 "decomp0.ch"
    
#line 394 "decomp0.ch"
#line 395 "decomp0.ch"
    
#line 395 "decomp0.ch"
#line 395 "decomp0.ch"
}
#line 395 "decomp0.ch"

#line 400 "decomp0.ch"

#line 400 "decomp0.ch"
void SwitcherTop ( PTREE paramTree, char *name, int level )
#line 400 "decomp0.ch"
{
#line 400 "decomp0.ch"
    register PPTREE _inter ;
#line 400 "decomp0.ch"

#line 400 "decomp0.ch"
#line 400 "decomp0.ch"
    int _retVal [2];
    
#line 400 "decomp0.ch"
#line 400 "decomp0.ch"
    PPTREE  _storeVal [2];
    
#line 400 "decomp0.ch"
#line 400 "decomp0.ch"
    int _nextVal ;
    
#line 400 "decomp0.ch"
#line 403 "decomp0.ch"
    
    PTREE   exp1 ;
#line 403 "decomp0.ch"
    
#line 403 "decomp0.ch"
#line 404 "decomp0.ch"
    int allocated = 0 ;
    
#line 404 "decomp0.ch"
#line 405 "decomp0.ch"
    char    *pName ;
    
#line 405 "decomp0.ch"
#line 407 "decomp0.ch"
    Switcher(paramTree, name, level);
#line 407 "decomp0.ch"
#line 408 "decomp0.ch"
#if 0
#line 408 "decomp0.ch"
#line 409 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 409 "decomp0.ch"
            (NumberTree(_inter) == metachop::PLU_AFF) &&
#line 409 "decomp0.ch"
            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 409 "decomp0.ch"
                (NumberTree(_inter) == metachop::NIL) &&
#line 409 "decomp0.ch"
                1),
#line 409 "decomp0.ch"
                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 409 "decomp0.ch"
            1) ) {
#line 409 "decomp0.ch"
#line 409 "decomp0.ch"
    _If60 : 
#line 409 "decomp0.ch"
#line 409 "decomp0.ch"
        ;
#line 409 "decomp0.ch"
#line 409 "decomp0.ch"
        goto _If61 ;
        
#line 409 "decomp0.ch"
#line 409 "decomp0.ch"
    } else 
#line 412 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 412 "decomp0.ch"
            (NumberTree(_inter) == metachop::PLU_AFF) &&
#line 412 "decomp0.ch"
            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 412 "decomp0.ch"
                (NumberTree(_inter) == metachop::IDENT) &&
#line 412 "decomp0.ch"
                1),
#line 412 "decomp0.ch"
                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 412 "decomp0.ch"
            1) ) {
#line 412 "decomp0.ch"
#line 412 "decomp0.ch"
    _If61 : 
#line 412 "decomp0.ch"
#line 412 "decomp0.ch"
        ;
#line 412 "decomp0.ch"
#line 412 "decomp0.ch"
        pName = name ;
#line 412 "decomp0.ch"
#line 412 "decomp0.ch"
    } else 
#line 414 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 414 "decomp0.ch"
            (NumberTree(_inter) == metachop::EXPO_AFF) &&
#line 414 "decomp0.ch"
            1) ) {
#line 414 "decomp0.ch"
#line 414 "decomp0.ch"
    _If62 : 
#line 414 "decomp0.ch"
#line 414 "decomp0.ch"
        ;
#line 414 "decomp0.ch"
#line 414 "decomp0.ch"
        ;
#line 414 "decomp0.ch"
#line 414 "decomp0.ch"
        goto _If63 ;
        
#line 414 "decomp0.ch"
#line 414 "decomp0.ch"
    } else 
#line 415 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 415 "decomp0.ch"
            (NumberTree(_inter) == metachop::MUL_AFF) &&
#line 415 "decomp0.ch"
            1) ) {
#line 415 "decomp0.ch"
#line 415 "decomp0.ch"
    _If63 : 
#line 415 "decomp0.ch"
#line 415 "decomp0.ch"
        ;
#line 415 "decomp0.ch"
#line 415 "decomp0.ch"
        ;
#line 415 "decomp0.ch"
#line 415 "decomp0.ch"
        goto _If64 ;
        
#line 415 "decomp0.ch"
#line 415 "decomp0.ch"
    } else 
#line 417 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 417 "decomp0.ch"
            (NumberTree(_inter) == metachop::PLU_AFF) &&
#line 417 "decomp0.ch"
            1) ) {
#line 417 "decomp0.ch"
#line 417 "decomp0.ch"
    _If64 : 
#line 417 "decomp0.ch"
#line 417 "decomp0.ch"
        ;
#line 417 "decomp0.ch"
#line 417 "decomp0.ch"
        ((_inter = (PPTREE)paramTree,1) && 
#line 417 "decomp0.ch"
            ((exp1=SonTree(_inter,1)),1) &&
#line 417 "decomp0.ch"
            1);
#line 417 "decomp0.ch"
        ;
#line 417 "decomp0.ch"
#line 418 "decomp0.ch"
        pName = AllocString(BrainyValue(exp1));
#line 418 "decomp0.ch"
#line 419 "decomp0.ch"
        allocated = 1 ;
#line 419 "decomp0.ch"
#line 419 "decomp0.ch"
    } else 
#line 421 "decomp0.ch"
    if ( 1 ) {
#line 421 "decomp0.ch"
#line 421 "decomp0.ch"
    _If65 : 
#line 421 "decomp0.ch"
#line 421 "decomp0.ch"
        ;
#line 421 "decomp0.ch"
#line 421 "decomp0.ch"
        pName = name ;
#line 421 "decomp0.ch"
#line 421 "decomp0.ch"
    }
#line 421 "decomp0.ch"
#line 423 "decomp0.ch"
    if ( pName ) {
#line 423 "decomp0.ch"
#line 424 "decomp0.ch"
                    PrintString("{");
#line 424 "decomp0.ch"
#line 424 "decomp0.ch"
                    LNewLine(1);
#line 424 "decomp0.ch"
                    
#line 424 "decomp0.ch"
#line 425 "decomp0.ch"
                    Tab();
#line 425 "decomp0.ch"
                    
#line 425 "decomp0.ch"
#line 426 "decomp0.ch"
                    Mark();
#line 426 "decomp0.ch"
                    PrintString("PPTREE _SwitcherTree = ");
#line 426 "decomp0.ch"
                    WriteString(pName);
#line 426 "decomp0.ch"
                    PrintString(";");
#line 426 "decomp0.ch"
                    LNewLine(1);
#line 426 "decomp0.ch"
                    
#line 426 "decomp0.ch"
                    Switcher(paramTree, name, level);
#line 426 "decomp0.ch"
                    if ( strcmp(pName, "for_elem") ) {
#line 426 "decomp0.ch"
#line 429 "decomp0.ch"
                                                            PrintString("AddRef(");
#line 429 "decomp0.ch"
#line 429 "decomp0.ch"
                                                            WriteString(pName);
#line 429 "decomp0.ch"
#line 429 "decomp0.ch"
                                                            PrintString(");");
#line 429 "decomp0.ch"
#line 429 "decomp0.ch"
                                                            LNewLine(1);
#line 429 "decomp0.ch"
                                                            
#line 429 "decomp0.ch"
#line 430 "decomp0.ch"
                                                            PrintString("if (_SwitcherTree) FreeRef( _SwitcherTree);");
#line 430 "decomp0.ch"
#line 430 "decomp0.ch"
                                                            LNewLine(1);
#line 430 "decomp0.ch"
                                                            
#line 430 "decomp0.ch"
#line 431 "decomp0.ch"
                                                            
#line 431 "decomp0.ch"
#line 431 "decomp0.ch"
                                                        }
#line 431 "decomp0.ch"
                    UnMark();
#line 431 "decomp0.ch"
                    
#line 431 "decomp0.ch"
#line 433 "decomp0.ch"
                    PrintString("}");
#line 433 "decomp0.ch"
#line 433 "decomp0.ch"
                    LNewLine(1);
#line 433 "decomp0.ch"
                    
#line 433 "decomp0.ch"
#line 434 "decomp0.ch"
                    
#line 434 "decomp0.ch"
#line 434 "decomp0.ch"
                  } else 
#line 434 "decomp0.ch"
    {
#line 434 "decomp0.ch"
#line 435 "decomp0.ch"
        Switcher(paramTree, name, level);
#line 435 "decomp0.ch"
#line 436 "decomp0.ch"
        
#line 436 "decomp0.ch"
#line 436 "decomp0.ch"
    }
    
#line 436 "decomp0.ch"
#line 437 "decomp0.ch"
    if ( allocated ) 
#line 437 "decomp0.ch"
#line 438 "decomp0.ch"
        free(pName);
#line 438 "decomp0.ch"
#line 438 "decomp0.ch"
    
#line 438 "decomp0.ch"
#endif
    
#line 438 "decomp0.ch"
#line 440 "decomp0.ch"
    
#line 440 "decomp0.ch"
#line 440 "decomp0.ch"
}
#line 440 "decomp0.ch"

#line 440 "decomp0.ch"
#line 440 "decomp0.ch"
static void decomp0_Anchor () { int i = 1;} 
#line 440 "decomp0.ch"
/*Well done my boy */ 
#line 440 "decomp0.ch"
