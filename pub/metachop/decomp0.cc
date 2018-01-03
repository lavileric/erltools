
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

#line 44 "decomp0.ch"
#line 44 "decomp0.ch"
char *Switcher ( PTREE paramTree, char *name, int level )
#line 44 "decomp0.ch"
{
#line 44 "decomp0.ch"
    register PPTREE _inter ;
#line 44 "decomp0.ch"
#line 44 "decomp0.ch"
#line 44 "decomp0.ch"
    int _nextVal ;
#line 44 "decomp0.ch"
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
#line 63 "decomp0.ch"
                PTREE   newTree = (PTREE)0 ;
#line 63 "decomp0.ch"
#line 63 "decomp0.ch"
#line 63 "decomp0.ch"
                (newTree=PTREE(name));
#line 63 "decomp0.ch"
#line 63 "decomp0.ch"
#line 64 "decomp0.ch"
                StoreRef(newTree);
#line 64 "decomp0.ch"
#line 65 "decomp0.ch"
                return Value(newTree);
#line 65 "decomp0.ch"
#line 66 "decomp0.ch"
#line 66 "decomp0.ch"
#line 66 "decomp0.ch"
            }
#line 66 "decomp0.ch"
#line 66 "decomp0.ch"
            goto _Case29 ;
#line 66 "decomp0.ch"
#line 68 "decomp0.ch"
        case metachop::IDENT : 
#line 68 "decomp0.ch"
#line 68 "decomp0.ch"
            (ident=SonTree(paramTree, 1));
#line 68 "decomp0.ch"
#line 68 "decomp0.ch"
#line 68 "decomp0.ch"
        _Case29 : 
#line 68 "decomp0.ch"
#line 68 "decomp0.ch"
            ;
#line 68 "decomp0.ch"
#line 68 "decomp0.ch"
            return BrainyValue(ident);
#line 68 "decomp0.ch"
#line 69 "decomp0.ch"
            break ;
#line 69 "decomp0.ch"
#line 71 "decomp0.ch"
        case metachop::FUNC : 
#line 71 "decomp0.ch"
#line 71 "decomp0.ch"
        _Case30 : 
#line 71 "decomp0.ch"
#line 71 "decomp0.ch"
            ;
#line 71 "decomp0.ch"
#line 71 "decomp0.ch"
            WriteString(name);
#line 71 "decomp0.ch"
#line 71 "decomp0.ch"
            PrintString(" = StoreRef(");
#line 71 "decomp0.ch"
#line 72 "decomp0.ch"
            decomp(paramTree);
#line 72 "decomp0.ch"
#line 73 "decomp0.ch"
            PrintString(")");
#line 73 "decomp0.ch"
#line 73 "decomp0.ch"
            LNewLine(1);
#line 73 "decomp0.ch"
#line 73 "decomp0.ch"
#line 74 "decomp0.ch"
            return name ;
#line 74 "decomp0.ch"
#line 74 "decomp0.ch"
            goto _Case31 ;
#line 74 "decomp0.ch"
#line 76 "decomp0.ch"
        case metachop::PARSE : 
#line 76 "decomp0.ch"
#line 76 "decomp0.ch"
            (son=SonTree(paramTree, 1));
#line 76 "decomp0.ch"
#line 76 "decomp0.ch"
#line 76 "decomp0.ch"
        _Case31 : 
#line 76 "decomp0.ch"
#line 76 "decomp0.ch"
            ;
#line 76 "decomp0.ch"
#line 76 "decomp0.ch"
            ((_inter = (PPTREE)son,1) && 
#line 76 "decomp0.ch"
                ((son=SonTree(_inter,2)),1) &&
#line 76 "decomp0.ch"
                1);
#line 76 "decomp0.ch"
            ;
#line 76 "decomp0.ch"
#line 77 "decomp0.ch"
            MakeTreeGenDir(son, name, 0);
#line 77 "decomp0.ch"
#line 78 "decomp0.ch"
            return name ;
#line 78 "decomp0.ch"
#line 78 "decomp0.ch"
            goto _Case32 ;
#line 78 "decomp0.ch"
#line 80 "decomp0.ch"
        case metachop::STRING : 
#line 80 "decomp0.ch"
#line 80 "decomp0.ch"
        _Case32 : 
#line 80 "decomp0.ch"
#line 80 "decomp0.ch"
            ;
#line 80 "decomp0.ch"
#line 80 "decomp0.ch"
            statementf = 0 ;
#line 80 "decomp0.ch"
#line 81 "decomp0.ch"
            WriteString(name);
#line 81 "decomp0.ch"
#line 81 "decomp0.ch"
            PrintString(" = MakeString(");
#line 81 "decomp0.ch"
#line 82 "decomp0.ch"
            decomp(paramTree);
#line 82 "decomp0.ch"
#line 83 "decomp0.ch"
            PrintString(") ");
#line 83 "decomp0.ch"
            PrintString(";");
#line 83 "decomp0.ch"
#line 83 "decomp0.ch"
            LNewLine(1);
#line 83 "decomp0.ch"
#line 83 "decomp0.ch"
#line 84 "decomp0.ch"
            return name ;
#line 84 "decomp0.ch"
#line 84 "decomp0.ch"
            goto _Case33 ;
#line 84 "decomp0.ch"
#line 86 "decomp0.ch"
        case metachop::NODE_TREE : 
#line 86 "decomp0.ch"
#line 86 "decomp0.ch"
        _Case33 : 
#line 86 "decomp0.ch"
#line 86 "decomp0.ch"
            ;
#line 86 "decomp0.ch"
#line 86 "decomp0.ch"
            MakeTreeGen(paramTree, name, level);
#line 86 "decomp0.ch"
#line 87 "decomp0.ch"
            return name ;
#line 87 "decomp0.ch"
#line 87 "decomp0.ch"
            goto _Case34 ;
#line 87 "decomp0.ch"
#line 89 "decomp0.ch"
        case metachop::PLU_AFF : 
#line 89 "decomp0.ch"
#line 89 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 89 "decomp0.ch"
#line 89 "decomp0.ch"
#line 89 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 89 "decomp0.ch"
#line 89 "decomp0.ch"
#line 89 "decomp0.ch"
        _Case34 : 
#line 89 "decomp0.ch"
#line 89 "decomp0.ch"
            ;
#line 89 "decomp0.ch"
#line 89 "decomp0.ch"
            name_ident = AllocString(BrainyValue(exp1));
#line 89 "decomp0.ch"
#line 90 "decomp0.ch"
            ReplaceTreeGen(exp2, name, name_ident, level);
#line 90 "decomp0.ch"
#line 91 "decomp0.ch"
            free(name_ident);
#line 91 "decomp0.ch"
#line 92 "decomp0.ch"
            return name ;
#line 92 "decomp0.ch"
#line 92 "decomp0.ch"
            goto _Case35 ;
#line 92 "decomp0.ch"
#line 94 "decomp0.ch"
        case metachop::EXPO_AFF : 
#line 94 "decomp0.ch"
#line 94 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 94 "decomp0.ch"
#line 94 "decomp0.ch"
#line 94 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 94 "decomp0.ch"
#line 94 "decomp0.ch"
#line 94 "decomp0.ch"
        _Case35 : 
#line 94 "decomp0.ch"
#line 94 "decomp0.ch"
            ;
#line 94 "decomp0.ch"
#line 94 "decomp0.ch"
            name_ident = AllocString(BrainyValue(exp1));
#line 94 "decomp0.ch"
#line 95 "decomp0.ch"
            AddListGen(exp2, name, name_ident, level);
#line 95 "decomp0.ch"
#line 96 "decomp0.ch"
            free(name_ident);
#line 96 "decomp0.ch"
#line 97 "decomp0.ch"
            return name ;
#line 97 "decomp0.ch"
#line 97 "decomp0.ch"
            goto _Case36 ;
#line 97 "decomp0.ch"
#line 99 "decomp0.ch"
        case metachop::MUL_AFF : 
#line 99 "decomp0.ch"
#line 99 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 99 "decomp0.ch"
#line 99 "decomp0.ch"
#line 99 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 99 "decomp0.ch"
#line 99 "decomp0.ch"
#line 99 "decomp0.ch"
        _Case36 : 
#line 99 "decomp0.ch"
#line 99 "decomp0.ch"
            ;
#line 99 "decomp0.ch"
#line 99 "decomp0.ch"
            name_ident = AllocString(BrainyValue(exp1));
#line 99 "decomp0.ch"
#line 100 "decomp0.ch"
            AddListGen1(exp2, name, name_ident, level);
#line 100 "decomp0.ch"
#line 101 "decomp0.ch"
            free(name_ident);
#line 101 "decomp0.ch"
#line 102 "decomp0.ch"
            return name ;
#line 102 "decomp0.ch"
#line 103 "decomp0.ch"
            break ;
#line 103 "decomp0.ch"
#line 105 "decomp0.ch"
        case metachop::PLUS : 
#line 105 "decomp0.ch"
#line 105 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 105 "decomp0.ch"
#line 105 "decomp0.ch"
#line 105 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 105 "decomp0.ch"
#line 105 "decomp0.ch"
#line 105 "decomp0.ch"
        _Case37 : 
#line 105 "decomp0.ch"
#line 105 "decomp0.ch"
            ;
#line 105 "decomp0.ch"
#line 105 "decomp0.ch"
            if ( ((_inter = (PPTREE)exp1,1) && 
#line 105 "decomp0.ch"
                    (NumberTree(_inter) == metachop::NODE_TREE) &&
#line 105 "decomp0.ch"
                    1) ) {
#line 105 "decomp0.ch"
#line 106 "decomp0.ch"
                            MakeTreeGen(exp1, name, level);
#line 106 "decomp0.ch"
#line 107 "decomp0.ch"
                            ReplaceTreeGen(exp2, (char *)0, name, level);
#line 107 "decomp0.ch"
#line 108 "decomp0.ch"
#line 108 "decomp0.ch"
#line 108 "decomp0.ch"
                         } else 
#line 108 "decomp0.ch"
            if ( ((_inter = (PPTREE)exp1,1) && 
#line 108 "decomp0.ch"
                    (NumberTree(_inter) == metachop::IDENT) &&
#line 108 "decomp0.ch"
                    1) ) {
#line 108 "decomp0.ch"
#line 109 "decomp0.ch"
                            WriteString(name);
#line 109 "decomp0.ch"
#line 109 "decomp0.ch"
                            PrintString(" = CopyTree (");
#line 109 "decomp0.ch"
#line 109 "decomp0.ch"
                            DumpBrainyValue(exp1);
#line 109 "decomp0.ch"
#line 109 "decomp0.ch"
#line 109 "decomp0.ch"
                            PrintString(");");
#line 109 "decomp0.ch"
#line 109 "decomp0.ch"
                            LNewLine(1);
#line 109 "decomp0.ch"
#line 109 "decomp0.ch"
#line 110 "decomp0.ch"
                            ReplaceTreeGen(exp2, (char *)0, name, level);
#line 110 "decomp0.ch"
#line 111 "decomp0.ch"
#line 111 "decomp0.ch"
#line 111 "decomp0.ch"
                         }
#line 111 "decomp0.ch"
#line 112 "decomp0.ch"
            return name ;
#line 112 "decomp0.ch"
#line 112 "decomp0.ch"
            goto _Case38 ;
#line 112 "decomp0.ch"
#line 114 "decomp0.ch"
        case metachop::EXPO : 
#line 114 "decomp0.ch"
#line 114 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 114 "decomp0.ch"
#line 114 "decomp0.ch"
#line 114 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 114 "decomp0.ch"
#line 114 "decomp0.ch"
#line 114 "decomp0.ch"
        _Case38 : 
#line 114 "decomp0.ch"
#line 114 "decomp0.ch"
            ;
#line 114 "decomp0.ch"
#line 114 "decomp0.ch"
            if ( ((_inter = (PPTREE)exp1,1) && 
#line 114 "decomp0.ch"
                    (NumberTree(_inter) == metachop::MUL) &&
#line 114 "decomp0.ch"
                    1) ) 
#line 114 "decomp0.ch"
#line 115 "decomp0.ch"
                Switcher(exp1, name, level);
#line 115 "decomp0.ch"
            else 
#line 116 "decomp0.ch"
            {
#line 116 "decomp0.ch"
#line 117 "decomp0.ch"
                WriteString(name);
#line 117 "decomp0.ch"
#line 117 "decomp0.ch"
                PrintString(" = (PPTREE) 0;");
#line 117 "decomp0.ch"
#line 117 "decomp0.ch"
                LNewLine(1);
#line 117 "decomp0.ch"
#line 117 "decomp0.ch"
#line 118 "decomp0.ch"
                AddListGen(exp1, (char *)0, name, level);
#line 118 "decomp0.ch"
#line 119 "decomp0.ch"
#line 119 "decomp0.ch"
#line 119 "decomp0.ch"
            }
#line 119 "decomp0.ch"
#line 120 "decomp0.ch"
            AddListGen(exp2, (char *)0, name, level);
#line 120 "decomp0.ch"
#line 121 "decomp0.ch"
            return name ;
#line 121 "decomp0.ch"
#line 121 "decomp0.ch"
            goto _Case39 ;
#line 121 "decomp0.ch"
#line 123 "decomp0.ch"
        case metachop::MUL : 
#line 123 "decomp0.ch"
#line 123 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 123 "decomp0.ch"
#line 123 "decomp0.ch"
#line 123 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 123 "decomp0.ch"
#line 123 "decomp0.ch"
#line 123 "decomp0.ch"
        _Case39 : 
#line 123 "decomp0.ch"
#line 123 "decomp0.ch"
            ;
#line 123 "decomp0.ch"
#line 123 "decomp0.ch"
            name_ident = Switcher(exp1, name, level);
#line 123 "decomp0.ch"
#line 124 "decomp0.ch"
            if ( strcmp(name, name_ident) ) {
#line 124 "decomp0.ch"
#line 125 "decomp0.ch"
                                                WriteString(name);
#line 125 "decomp0.ch"
#line 125 "decomp0.ch"
                                                PrintString(" = ");
#line 125 "decomp0.ch"
#line 125 "decomp0.ch"
                                                WriteString(name_ident);
#line 125 "decomp0.ch"
#line 125 "decomp0.ch"
                                                PrintString(";");
#line 125 "decomp0.ch"
#line 125 "decomp0.ch"
                                                LNewLine(1);
#line 125 "decomp0.ch"
#line 125 "decomp0.ch"
#line 126 "decomp0.ch"
#line 126 "decomp0.ch"
#line 126 "decomp0.ch"
                                               }
#line 126 "decomp0.ch"
#line 127 "decomp0.ch"
            AddListGen(exp2, (char *)0, name, level);
#line 127 "decomp0.ch"
#line 128 "decomp0.ch"
            return name ;
#line 128 "decomp0.ch"
#line 128 "decomp0.ch"
            goto _Case40 ;
#line 128 "decomp0.ch"
#line 130 "decomp0.ch"
        case metachop::EXP : 
#line 130 "decomp0.ch"
#line 130 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 130 "decomp0.ch"
#line 130 "decomp0.ch"
#line 130 "decomp0.ch"
        _Case40 : 
#line 130 "decomp0.ch"
#line 130 "decomp0.ch"
            ;
#line 130 "decomp0.ch"
#line 130 "decomp0.ch"
            Switcher(exp1, name, level);
#line 130 "decomp0.ch"
#line 131 "decomp0.ch"
            return name ;
#line 131 "decomp0.ch"
#line 132 "decomp0.ch"
            break ;
#line 132 "decomp0.ch"
#line 134 "decomp0.ch"
        case metachop::AFF : 
#line 134 "decomp0.ch"
#line 134 "decomp0.ch"
            (exp1=SonTree(paramTree, 1));
#line 134 "decomp0.ch"
#line 134 "decomp0.ch"
#line 134 "decomp0.ch"
            (exp2=SonTree(paramTree, 2));
#line 134 "decomp0.ch"
#line 134 "decomp0.ch"
#line 134 "decomp0.ch"
        _Case41 : 
#line 134 "decomp0.ch"
#line 134 "decomp0.ch"
            ;
#line 134 "decomp0.ch"
#line 134 "decomp0.ch"
            name_ident = AllocString(BrainyValue(exp1));
#line 134 "decomp0.ch"
#line 135 "decomp0.ch"
            switch ( NumberTree(exp2) ) {
#line 135 "decomp0.ch"
#line 137 "decomp0.ch"
                case metachop::IDENT : 
#line 137 "decomp0.ch"
#line 137 "decomp0.ch"
                _Case43 : 
#line 137 "decomp0.ch"
#line 137 "decomp0.ch"
                    ;
#line 137 "decomp0.ch"
#line 137 "decomp0.ch"
                    WriteString(name_ident);
#line 137 "decomp0.ch"
#line 137 "decomp0.ch"
                    PrintString(" = ");
#line 137 "decomp0.ch"
#line 137 "decomp0.ch"
                    DumpBrainyValue(exp2);
#line 137 "decomp0.ch"
#line 137 "decomp0.ch"
#line 137 "decomp0.ch"
                    PrintString(";");
#line 137 "decomp0.ch"
#line 137 "decomp0.ch"
                    LNewLine(1);
#line 137 "decomp0.ch"
#line 137 "decomp0.ch"
#line 138 "decomp0.ch"
                    break ;
#line 138 "decomp0.ch"
#line 140 "decomp0.ch"
                case metachop::NIL : 
#line 140 "decomp0.ch"
#line 140 "decomp0.ch"
                _Case44 : 
#line 140 "decomp0.ch"
#line 140 "decomp0.ch"
                    ;
#line 140 "decomp0.ch"
#line 140 "decomp0.ch"
                    WriteString(name_ident);
#line 140 "decomp0.ch"
#line 140 "decomp0.ch"
                    PrintString(" = (PPTREE) 0 ;");
#line 140 "decomp0.ch"
#line 140 "decomp0.ch"
                    LNewLine(1);
#line 140 "decomp0.ch"
#line 140 "decomp0.ch"
#line 141 "decomp0.ch"
                    break ;
#line 141 "decomp0.ch"
#line 143 "decomp0.ch"
                case metachop::NODE_TREE : 
#line 143 "decomp0.ch"
#line 143 "decomp0.ch"
                _Case45 : 
#line 143 "decomp0.ch"
#line 143 "decomp0.ch"
                    ;
#line 143 "decomp0.ch"
#line 143 "decomp0.ch"
                    MakeTreeGen(exp2, name, level);
#line 143 "decomp0.ch"
#line 144 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 144 "decomp0.ch"
#line 145 "decomp0.ch"
                                                        WriteString(name_ident);
#line 145 "decomp0.ch"
#line 145 "decomp0.ch"
                                                        PrintString(" = ");
#line 145 "decomp0.ch"
#line 145 "decomp0.ch"
                                                        WriteString(name);
#line 145 "decomp0.ch"
#line 145 "decomp0.ch"
                                                        PrintString(";");
#line 145 "decomp0.ch"
#line 146 "decomp0.ch"
                                                        LNewLine(1);
#line 146 "decomp0.ch"
#line 146 "decomp0.ch"
#line 147 "decomp0.ch"
#line 147 "decomp0.ch"
#line 147 "decomp0.ch"
                                                       }
#line 147 "decomp0.ch"
#line 148 "decomp0.ch"
                    break ;
#line 148 "decomp0.ch"
#line 150 "decomp0.ch"
                case metachop::PLUS : 
#line 150 "decomp0.ch"
#line 150 "decomp0.ch"
                _Case46 : 
#line 150 "decomp0.ch"
#line 150 "decomp0.ch"
                    ;
#line 150 "decomp0.ch"
#line 150 "decomp0.ch"
                    Switcher(exp2, name, level);
#line 150 "decomp0.ch"
#line 151 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 151 "decomp0.ch"
#line 152 "decomp0.ch"
                                                        WriteString(name_ident);
#line 152 "decomp0.ch"
#line 152 "decomp0.ch"
                                                        PrintString(" = ");
#line 152 "decomp0.ch"
#line 152 "decomp0.ch"
                                                        WriteString(name);
#line 152 "decomp0.ch"
#line 152 "decomp0.ch"
                                                        PrintString(";");
#line 152 "decomp0.ch"
#line 153 "decomp0.ch"
                                                        LNewLine(1);
#line 153 "decomp0.ch"
#line 153 "decomp0.ch"
#line 154 "decomp0.ch"
#line 154 "decomp0.ch"
#line 154 "decomp0.ch"
                                                       }
#line 154 "decomp0.ch"
#line 155 "decomp0.ch"
                    break ;
#line 155 "decomp0.ch"
#line 157 "decomp0.ch"
                case metachop::EXPO : 
#line 157 "decomp0.ch"
#line 157 "decomp0.ch"
                _Case47 : 
#line 157 "decomp0.ch"
#line 157 "decomp0.ch"
                    ;
#line 157 "decomp0.ch"
#line 157 "decomp0.ch"
                    PrintString("{");
#line 157 "decomp0.ch"
#line 157 "decomp0.ch"
                    LNewLine(1);
#line 157 "decomp0.ch"
#line 157 "decomp0.ch"
#line 158 "decomp0.ch"
                    Tab();
#line 158 "decomp0.ch"
#line 158 "decomp0.ch"
#line 159 "decomp0.ch"
                    Mark();
#line 159 "decomp0.ch"
                    PrintString("PPTREE ");
#line 159 "decomp0.ch"
                    WriteString(namePt);
#line 159 "decomp0.ch"
                    PrintString("= (PPTREE) 0 ;");
#line 159 "decomp0.ch"
                    LNewLine(1);
#line 159 "decomp0.ch"
#line 159 "decomp0.ch"
                    Switcher(exp2, namePt, level + 1);
#line 159 "decomp0.ch"
                    WriteString(name);
#line 159 "decomp0.ch"
                    PrintString(" = ");
#line 159 "decomp0.ch"
                    WriteString(namePt);
#line 159 "decomp0.ch"
                    PrintString(" ;");
#line 159 "decomp0.ch"
                    LNewLine(1);
#line 159 "decomp0.ch"
#line 159 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 159 "decomp0.ch"
#line 165 "decomp0.ch"
                                                        WriteString(name_ident);
#line 165 "decomp0.ch"
#line 165 "decomp0.ch"
                                                        PrintString("= ");
#line 165 "decomp0.ch"
#line 166 "decomp0.ch"
                                                        WriteString(name);
#line 166 "decomp0.ch"
#line 166 "decomp0.ch"
                                                        PrintString(";");
#line 166 "decomp0.ch"
#line 166 "decomp0.ch"
                                                        LNewLine(1);
#line 166 "decomp0.ch"
#line 166 "decomp0.ch"
#line 167 "decomp0.ch"
#line 167 "decomp0.ch"
#line 167 "decomp0.ch"
                                                       }
#line 167 "decomp0.ch"
                    PrintString(";");
#line 167 "decomp0.ch"
                    LNewLine(1);
#line 167 "decomp0.ch"
#line 167 "decomp0.ch"
                    UnMark();
#line 167 "decomp0.ch"
#line 167 "decomp0.ch"
#line 170 "decomp0.ch"
                    PrintString("}");
#line 170 "decomp0.ch"
#line 170 "decomp0.ch"
                    LNewLine(1);
#line 170 "decomp0.ch"
#line 170 "decomp0.ch"
#line 171 "decomp0.ch"
                    break ;
#line 171 "decomp0.ch"
#line 173 "decomp0.ch"
                case metachop::MUL : 
#line 173 "decomp0.ch"
#line 173 "decomp0.ch"
                _Case48 : 
#line 173 "decomp0.ch"
#line 173 "decomp0.ch"
                    ;
#line 173 "decomp0.ch"
#line 173 "decomp0.ch"
                    PrintString("{");
#line 173 "decomp0.ch"
#line 173 "decomp0.ch"
                    LNewLine(1);
#line 173 "decomp0.ch"
#line 173 "decomp0.ch"
#line 174 "decomp0.ch"
                    Tab();
#line 174 "decomp0.ch"
#line 174 "decomp0.ch"
#line 175 "decomp0.ch"
                    Mark();
#line 175 "decomp0.ch"
                    PrintString("PPTREE ");
#line 175 "decomp0.ch"
                    WriteString(namePt);
#line 175 "decomp0.ch"
                    PrintString("=(PPTREE) 0;");
#line 175 "decomp0.ch"
                    LNewLine(1);
#line 175 "decomp0.ch"
#line 175 "decomp0.ch"
                    Switcher(exp2, namePt, level + 1);
#line 175 "decomp0.ch"
                    WriteString(name);
#line 175 "decomp0.ch"
                    PrintString(" = ");
#line 175 "decomp0.ch"
                    WriteString(namePt);
#line 175 "decomp0.ch"
                    PrintString(";");
#line 175 "decomp0.ch"
                    LNewLine(1);
#line 175 "decomp0.ch"
#line 175 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 175 "decomp0.ch"
#line 181 "decomp0.ch"
                                                        WriteString(name_ident);
#line 181 "decomp0.ch"
#line 181 "decomp0.ch"
                                                        PrintString(" = ");
#line 181 "decomp0.ch"
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
                    PrintString(";");
#line 183 "decomp0.ch"
                    LNewLine(1);
#line 183 "decomp0.ch"
#line 183 "decomp0.ch"
                    UnMark();
#line 183 "decomp0.ch"
#line 183 "decomp0.ch"
#line 186 "decomp0.ch"
                    PrintString("}");
#line 186 "decomp0.ch"
#line 186 "decomp0.ch"
                    LNewLine(1);
#line 186 "decomp0.ch"
#line 186 "decomp0.ch"
#line 187 "decomp0.ch"
                    break ;
#line 187 "decomp0.ch"
#line 189 "decomp0.ch"
                case metachop::PLU_AFF : 
#line 189 "decomp0.ch"
#line 189 "decomp0.ch"
                _Case49 : 
#line 189 "decomp0.ch"
#line 189 "decomp0.ch"
                    ;
#line 189 "decomp0.ch"
#line 189 "decomp0.ch"
                    Switcher(exp2, name, level);
#line 189 "decomp0.ch"
#line 190 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 190 "decomp0.ch"
#line 191 "decomp0.ch"
                                                        WriteString(name_ident);
#line 191 "decomp0.ch"
#line 191 "decomp0.ch"
                                                        PrintString(" = ");
#line 191 "decomp0.ch"
#line 191 "decomp0.ch"
                                                        WriteString(name);
#line 191 "decomp0.ch"
#line 191 "decomp0.ch"
                                                        PrintString(";");
#line 191 "decomp0.ch"
#line 192 "decomp0.ch"
                                                        LNewLine(1);
#line 192 "decomp0.ch"
#line 192 "decomp0.ch"
#line 193 "decomp0.ch"
#line 193 "decomp0.ch"
#line 193 "decomp0.ch"
                                                       }
#line 193 "decomp0.ch"
#line 194 "decomp0.ch"
                    break ;
#line 194 "decomp0.ch"
#line 196 "decomp0.ch"
                case metachop::EXPO_AFF : 
#line 196 "decomp0.ch"
#line 196 "decomp0.ch"
                _Case50 : 
#line 196 "decomp0.ch"
#line 196 "decomp0.ch"
                    ;
#line 196 "decomp0.ch"
#line 196 "decomp0.ch"
                    Switcher(exp2, name, level);
#line 196 "decomp0.ch"
#line 197 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 197 "decomp0.ch"
#line 198 "decomp0.ch"
                                                        WriteString(name_ident);
#line 198 "decomp0.ch"
#line 198 "decomp0.ch"
                                                        PrintString(" = ");
#line 198 "decomp0.ch"
#line 198 "decomp0.ch"
                                                        WriteString(name);
#line 198 "decomp0.ch"
#line 198 "decomp0.ch"
                                                        PrintString(";");
#line 198 "decomp0.ch"
#line 199 "decomp0.ch"
                                                        LNewLine(1);
#line 199 "decomp0.ch"
#line 199 "decomp0.ch"
#line 200 "decomp0.ch"
#line 200 "decomp0.ch"
#line 200 "decomp0.ch"
                                                       }
#line 200 "decomp0.ch"
#line 201 "decomp0.ch"
                    break ;
#line 201 "decomp0.ch"
#line 203 "decomp0.ch"
                case metachop::MUL_AFF : 
#line 203 "decomp0.ch"
#line 203 "decomp0.ch"
                _Case51 : 
#line 203 "decomp0.ch"
#line 203 "decomp0.ch"
                    ;
#line 203 "decomp0.ch"
#line 203 "decomp0.ch"
                    Switcher(exp2, name, level);
#line 203 "decomp0.ch"
#line 204 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 204 "decomp0.ch"
#line 205 "decomp0.ch"
                                                        WriteString(name_ident);
#line 205 "decomp0.ch"
#line 205 "decomp0.ch"
                                                        PrintString(" = ");
#line 205 "decomp0.ch"
#line 205 "decomp0.ch"
                                                        WriteString(name);
#line 205 "decomp0.ch"
#line 205 "decomp0.ch"
                                                        PrintString(";");
#line 205 "decomp0.ch"
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
#line 210 "decomp0.ch"
                case metachop::NEXT : 
#line 210 "decomp0.ch"
#line 210 "decomp0.ch"
                _Case52 : 
#line 210 "decomp0.ch"
#line 210 "decomp0.ch"
                    ;
#line 210 "decomp0.ch"
#line 210 "decomp0.ch"
                    WriteString(name_ident);
#line 210 "decomp0.ch"
#line 210 "decomp0.ch"
                    PrintString(" = ");
#line 210 "decomp0.ch"
#line 210 "decomp0.ch"
                    decomp(exp2);
#line 210 "decomp0.ch"
#line 210 "decomp0.ch"
#line 210 "decomp0.ch"
                    PrintString(";");
#line 210 "decomp0.ch"
#line 210 "decomp0.ch"
                    LNewLine(1);
#line 210 "decomp0.ch"
#line 210 "decomp0.ch"
#line 211 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 211 "decomp0.ch"
#line 212 "decomp0.ch"
                                                        WriteString(name);
#line 212 "decomp0.ch"
#line 212 "decomp0.ch"
                                                        PrintString(" = ");
#line 212 "decomp0.ch"
#line 212 "decomp0.ch"
                                                        WriteString(name_ident);
#line 212 "decomp0.ch"
#line 212 "decomp0.ch"
                                                        PrintString(";");
#line 212 "decomp0.ch"
#line 213 "decomp0.ch"
                                                        LNewLine(1);
#line 213 "decomp0.ch"
#line 213 "decomp0.ch"
#line 214 "decomp0.ch"
#line 214 "decomp0.ch"
#line 214 "decomp0.ch"
                                                       }
#line 214 "decomp0.ch"
#line 215 "decomp0.ch"
                    break ;
#line 215 "decomp0.ch"
#line 217 "decomp0.ch"
                default : 
#line 217 "decomp0.ch"
#line 217 "decomp0.ch"
                _Case53 : 
#line 217 "decomp0.ch"
#line 217 "decomp0.ch"
                    ;
#line 217 "decomp0.ch"
#line 217 "decomp0.ch"
                    WriteString(name_ident);
#line 217 "decomp0.ch"
#line 217 "decomp0.ch"
                    PrintString(" = StoreRef(");
#line 217 "decomp0.ch"
#line 217 "decomp0.ch"
                    decomp(exp2);
#line 217 "decomp0.ch"
#line 217 "decomp0.ch"
#line 217 "decomp0.ch"
                    PrintString(");");
#line 217 "decomp0.ch"
#line 217 "decomp0.ch"
                    LNewLine(1);
#line 217 "decomp0.ch"
#line 217 "decomp0.ch"
#line 218 "decomp0.ch"
                    if ( strcmp(name_ident, name) ) {
#line 218 "decomp0.ch"
#line 219 "decomp0.ch"
                                                        WriteString(name);
#line 219 "decomp0.ch"
#line 219 "decomp0.ch"
                                                        PrintString(" = ");
#line 219 "decomp0.ch"
#line 219 "decomp0.ch"
                                                        WriteString(name_ident);
#line 219 "decomp0.ch"
#line 219 "decomp0.ch"
                                                        PrintString(";");
#line 219 "decomp0.ch"
#line 220 "decomp0.ch"
                                                        LNewLine(1);
#line 220 "decomp0.ch"
#line 220 "decomp0.ch"
#line 221 "decomp0.ch"
#line 221 "decomp0.ch"
#line 221 "decomp0.ch"
                                                       }
#line 221 "decomp0.ch"
#line 222 "decomp0.ch"
                    break ;
#line 222 "decomp0.ch"
            }
#line 222 "decomp0.ch"
#line 222 "decomp0.ch"
#line 224 "decomp0.ch"
            free(name_ident);
#line 224 "decomp0.ch"
#line 225 "decomp0.ch"
            return name ;
#line 225 "decomp0.ch"
#line 225 "decomp0.ch"
            goto _Case42 ;
#line 225 "decomp0.ch"
#line 227 "decomp0.ch"
        default : 
#line 227 "decomp0.ch"
#line 227 "decomp0.ch"
        _Case42 : 
#line 227 "decomp0.ch"
#line 227 "decomp0.ch"
            ;
#line 227 "decomp0.ch"
#line 227 "decomp0.ch"
            WriteString(name);
#line 227 "decomp0.ch"
#line 227 "decomp0.ch"
            PrintString(" = StoreRef(");
#line 227 "decomp0.ch"
#line 228 "decomp0.ch"
            decomp(paramTree);
#line 228 "decomp0.ch"
#line 229 "decomp0.ch"
            PrintString(");");
#line 229 "decomp0.ch"
#line 229 "decomp0.ch"
            LNewLine(1);
#line 229 "decomp0.ch"
#line 229 "decomp0.ch"
#line 230 "decomp0.ch"
            return name ;
#line 230 "decomp0.ch"
    }
#line 230 "decomp0.ch"
#line 230 "decomp0.ch"
#line 232 "decomp0.ch"
#line 232 "decomp0.ch"
#line 232 "decomp0.ch"
}
#line 232 "decomp0.ch"

#line 236 "decomp0.ch"
#line 236 "decomp0.ch"
void MakeTreeGen ( PTREE paramTree, char *name, int level )
#line 236 "decomp0.ch"
{
#line 236 "decomp0.ch"
    register PPTREE _inter ;
#line 236 "decomp0.ch"
#line 236 "decomp0.ch"
#line 236 "decomp0.ch"
    int _retVal [2];
#line 236 "decomp0.ch"
#line 236 "decomp0.ch"
    PPTREE  _storeVal [2];
#line 236 "decomp0.ch"
#line 236 "decomp0.ch"
    int _nextVal ;
#line 236 "decomp0.ch"
#line 239 "decomp0.ch"
    int nbParam, currParam, gennode ;
#line 239 "decomp0.ch"
#line 240 "decomp0.ch"
    char    string [5], namePt [10], resPt [10], *retName ;
#line 240 "decomp0.ch"
#line 241 "decomp0.ch"
    PTREE   ptTree, son ;
#line 241 "decomp0.ch"
#line 241 "decomp0.ch"
#line 243 "decomp0.ch"
    sprintf(namePt, "_ptTree%d", level);
#line 243 "decomp0.ch"
#line 244 "decomp0.ch"
    sprintf(resPt, "_ptRes%d", level);
#line 244 "decomp0.ch"
#line 245 "decomp0.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 245 "decomp0.ch"
        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 245 "decomp0.ch"
            ((ptTree=SonTree(_inter,2)),1) &&
#line 245 "decomp0.ch"
            1),
#line 245 "decomp0.ch"
            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 245 "decomp0.ch"
        1);
#line 245 "decomp0.ch"
    ;
#line 245 "decomp0.ch"
#line 249 "decomp0.ch"
    nbParam = 0 ;
#line 249 "decomp0.ch"
#line 250 "decomp0.ch"
    while ( !((!ptTree)) ) {
#line 250 "decomp0.ch"
#line 251 "decomp0.ch"
                                nbParam++ ;
#line 251 "decomp0.ch"
#line 252 "decomp0.ch"
                                (ptTree?ptTree.Nextl():(PPTREE)0);
#line 252 "decomp0.ch"
#line 253 "decomp0.ch"
#line 253 "decomp0.ch"
#line 253 "decomp0.ch"
                             }
#line 253 "decomp0.ch"
#line 254 "decomp0.ch"
    PrintString("{");
#line 254 "decomp0.ch"
#line 254 "decomp0.ch"
    LNewLine(1);
#line 254 "decomp0.ch"
#line 254 "decomp0.ch"
#line 255 "decomp0.ch"
    Tab();
#line 255 "decomp0.ch"
#line 255 "decomp0.ch"
#line 257 "decomp0.ch"
    Mark();
#line 257 "decomp0.ch"
    PrintString("PPTREE ");
#line 257 "decomp0.ch"
    WriteString(namePt);
#line 257 "decomp0.ch"
    PrintString("= (PPTREE) 0,");
#line 257 "decomp0.ch"
    WriteString(resPt);
#line 257 "decomp0.ch"
    PrintString("= (PPTREE) 0;");
#line 257 "decomp0.ch"
    LNewLine(1);
#line 257 "decomp0.ch"
#line 257 "decomp0.ch"
    WriteString(resPt);
#line 257 "decomp0.ch"
    PrintString(" = MakeTree(");
#line 257 "decomp0.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 257 "decomp0.ch"
        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 257 "decomp0.ch"
            ((son=SonTree(_inter,1)),1) &&
#line 257 "decomp0.ch"
            1),
#line 257 "decomp0.ch"
            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 257 "decomp0.ch"
        1);
#line 257 "decomp0.ch"
    ;
#line 257 "decomp0.ch"
    if ( ((_inter = (PPTREE)son,1) && 
#line 257 "decomp0.ch"
            (NumberTree(_inter) == metachop::QUALIFIED) &&
#line 257 "decomp0.ch"
            1) ) {
#line 257 "decomp0.ch"
#line 264 "decomp0.ch"
                    WriteString(Value(son [1]));
#line 264 "decomp0.ch"
#line 264 "decomp0.ch"
                    WriteString("::");
#line 264 "decomp0.ch"
#line 265 "decomp0.ch"
                    WriteString(Value(son [2]));
#line 265 "decomp0.ch"
#line 265 "decomp0.ch"
                    WriteString(",");
#line 265 "decomp0.ch"
#line 266 "decomp0.ch"
#line 266 "decomp0.ch"
#line 266 "decomp0.ch"
                 } else 
#line 266 "decomp0.ch"
    {
#line 266 "decomp0.ch"
#line 267 "decomp0.ch"
        if ( cplusGen ) {
#line 267 "decomp0.ch"
#line 268 "decomp0.ch"
                            WriteString(NameOfNodePlus(Value(son)));
#line 268 "decomp0.ch"
#line 268 "decomp0.ch"
                            PrintString(", ");
#line 268 "decomp0.ch"
#line 269 "decomp0.ch"
#line 269 "decomp0.ch"
#line 269 "decomp0.ch"
                         } else 
#line 269 "decomp0.ch"
        {
#line 269 "decomp0.ch"
#line 270 "decomp0.ch"
            WriteString(NameOfNode(Value(son)));
#line 270 "decomp0.ch"
#line 270 "decomp0.ch"
            PrintString(", ");
#line 270 "decomp0.ch"
#line 271 "decomp0.ch"
#line 271 "decomp0.ch"
#line 271 "decomp0.ch"
        }
#line 271 "decomp0.ch"
#line 272 "decomp0.ch"
#line 272 "decomp0.ch"
#line 272 "decomp0.ch"
    }
#line 272 "decomp0.ch"
    if ( nbParam > 99 ) {
#line 272 "decomp0.ch"
#line 274 "decomp0.ch"
                            WriteString(" Too many parameter for maketree");
#line 274 "decomp0.ch"
#line 275 "decomp0.ch"
                            nbParam = 99 ;
#line 275 "decomp0.ch"
#line 276 "decomp0.ch"
#line 276 "decomp0.ch"
#line 276 "decomp0.ch"
                          }
#line 276 "decomp0.ch"
    sprintf(string, "%d);", nbParam);
#line 276 "decomp0.ch"
    WriteString(string);
#line 276 "decomp0.ch"
    LNewLine(1);
#line 276 "decomp0.ch"
#line 276 "decomp0.ch"
    currParam = 1 ;
#line 276 "decomp0.ch"
    if ( !level ) 
#line 276 "decomp0.ch"
#line 281 "decomp0.ch"
        InitDecElem(name, nbParam);
#line 281 "decomp0.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 281 "decomp0.ch"
        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 281 "decomp0.ch"
            ((ptTree=SonTree(_inter,2)),1) &&
#line 281 "decomp0.ch"
            1),
#line 281 "decomp0.ch"
            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 281 "decomp0.ch"
        1);
#line 281 "decomp0.ch"
    ;
#line 281 "decomp0.ch"
    while ( !((!ptTree)) ) {
#line 281 "decomp0.ch"
#line 284 "decomp0.ch"
                                (son=(ptTree?ptTree.Nextl():(PPTREE)0));
#line 284 "decomp0.ch"
#line 284 "decomp0.ch"
#line 285 "decomp0.ch"
                                if ( !(((_inter = (PPTREE)son,1) && 
#line 285 "decomp0.ch"
                                            (NumberTree(_inter) == metachop::NIL) &&
#line 285 "decomp0.ch"
                                            1)) && !(((_inter = (PPTREE)son,1) && 
#line 285 "decomp0.ch"
                                                        (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 285 "decomp0.ch"
                                                        1)) ) {
#line 285 "decomp0.ch"
#line 286 "decomp0.ch"
                                                                retName = Switcher(son, namePt, level + 1);
#line 286 "decomp0.ch"
#line 287 "decomp0.ch"
                                                                sprintf(string, "%d", currParam);
#line 287 "decomp0.ch"
#line 288 "decomp0.ch"
                                                                PrintString("ReplaceTree(");
#line 288 "decomp0.ch"
#line 288 "decomp0.ch"
                                                                WriteString(resPt);
#line 288 "decomp0.ch"
#line 288 "decomp0.ch"
                                                                PrintString(", ");
#line 288 "decomp0.ch"
#line 289 "decomp0.ch"
                                                                WriteString(string);
#line 289 "decomp0.ch"
#line 289 "decomp0.ch"
                                                                PrintString(", ");
#line 289 "decomp0.ch"
#line 289 "decomp0.ch"
                                                                WriteString(retName);
#line 289 "decomp0.ch"
#line 290 "decomp0.ch"
                                                                PrintString(");");
#line 290 "decomp0.ch"
#line 290 "decomp0.ch"
                                                                LNewLine(1);
#line 290 "decomp0.ch"
#line 290 "decomp0.ch"
#line 291 "decomp0.ch"
#line 291 "decomp0.ch"
#line 291 "decomp0.ch"
                                                              }
#line 291 "decomp0.ch"
#line 292 "decomp0.ch"
                                currParam++ ;
#line 292 "decomp0.ch"
#line 293 "decomp0.ch"
#line 293 "decomp0.ch"
#line 293 "decomp0.ch"
                             }
#line 293 "decomp0.ch"
    WriteString(name);
#line 293 "decomp0.ch"
    PrintString(" = ");
#line 293 "decomp0.ch"
    WriteString(resPt);
#line 293 "decomp0.ch"
    PrintString(";");
#line 293 "decomp0.ch"
    LNewLine(1);
#line 293 "decomp0.ch"
#line 293 "decomp0.ch"
    UnMark();
#line 293 "decomp0.ch"
#line 293 "decomp0.ch"
#line 296 "decomp0.ch"
    PrintString("}");
#line 296 "decomp0.ch"
#line 296 "decomp0.ch"
    LNewLine(1);
#line 296 "decomp0.ch"
#line 296 "decomp0.ch"
#line 297 "decomp0.ch"
#line 297 "decomp0.ch"
#line 297 "decomp0.ch"
}
#line 297 "decomp0.ch"

#line 301 "decomp0.ch"
#line 301 "decomp0.ch"
void ReplaceTreeGen ( PTREE paramTree, char *name, char *mod_name, int level )
#line 301 "decomp0.ch"
{
#line 301 "decomp0.ch"
    register PPTREE _inter ;
#line 301 "decomp0.ch"
#line 301 "decomp0.ch"
#line 301 "decomp0.ch"
    int _retVal [2];
#line 301 "decomp0.ch"
#line 301 "decomp0.ch"
    PPTREE  _storeVal [2];
#line 301 "decomp0.ch"
#line 301 "decomp0.ch"
    int _nextVal ;
#line 301 "decomp0.ch"
#line 305 "decomp0.ch"
    int nbParam, currParam, gennode ;
#line 305 "decomp0.ch"
#line 306 "decomp0.ch"
    char    string [5], namePt [10], name1Pt [10], *retName ;
#line 306 "decomp0.ch"
#line 307 "decomp0.ch"
    int treeType ;
#line 307 "decomp0.ch"
#line 308 "decomp0.ch"
    PTREE   ptTree, son, ident ;
#line 308 "decomp0.ch"
#line 308 "decomp0.ch"
#line 310 "decomp0.ch"
    sprintf(namePt, "_ptTree%d", level);
#line 310 "decomp0.ch"
#line 311 "decomp0.ch"
    sprintf(name1Pt, "_sonTree%d", level);
#line 311 "decomp0.ch"
#line 312 "decomp0.ch"
    PrintString("{");
#line 312 "decomp0.ch"
#line 312 "decomp0.ch"
    LNewLine(1);
#line 312 "decomp0.ch"
#line 312 "decomp0.ch"
#line 313 "decomp0.ch"
    Tab();
#line 313 "decomp0.ch"
#line 313 "decomp0.ch"
#line 315 "decomp0.ch"
    Mark();
#line 315 "decomp0.ch"
    PrintString("PPTREE ");
#line 315 "decomp0.ch"
    WriteString(namePt);
#line 315 "decomp0.ch"
    PrintString("= (PPTREE) 0,");
#line 315 "decomp0.ch"
    WriteString(name1Pt);
#line 315 "decomp0.ch"
    PrintString("= (PPTREE) 0 ;");
#line 315 "decomp0.ch"
    LNewLine(1);
#line 315 "decomp0.ch"
#line 315 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 315 "decomp0.ch"
            (NumberTree(_inter) == metachop::IDENT) &&
#line 315 "decomp0.ch"
            1) || ((_inter = (PPTREE)paramTree,1) && 
#line 315 "decomp0.ch"
                        (NumberTree(_inter) == metachop::NIL) &&
#line 315 "decomp0.ch"
                        1) ) {
#line 315 "decomp0.ch"
#line 318 "decomp0.ch"
                                PrintString("if (");
#line 318 "decomp0.ch"
#line 318 "decomp0.ch"
                                WriteString(namePt);
#line 318 "decomp0.ch"
#line 318 "decomp0.ch"
                                PrintString("= fathertree(");
#line 318 "decomp0.ch"
#line 319 "decomp0.ch"
                                WriteString(mod_name);
#line 319 "decomp0.ch"
#line 319 "decomp0.ch"
                                PrintString(")) {");
#line 319 "decomp0.ch"
#line 319 "decomp0.ch"
                                LNewLine(1);
#line 319 "decomp0.ch"
#line 319 "decomp0.ch"
#line 320 "decomp0.ch"
                                Tab();
#line 320 "decomp0.ch"
#line 320 "decomp0.ch"
#line 322 "decomp0.ch"
                                Mark();
#line 322 "decomp0.ch"
                                PrintString("int rank = ranktree(");
#line 322 "decomp0.ch"
                                WriteString(mod_name);
#line 322 "decomp0.ch"
                                PrintString(");");
#line 322 "decomp0.ch"
                                LNewLine(1);
#line 322 "decomp0.ch"
#line 322 "decomp0.ch"
                                PrintString("ReplaceTree(");
#line 322 "decomp0.ch"
                                WriteString(namePt);
#line 322 "decomp0.ch"
                                PrintString(",rank,");
#line 322 "decomp0.ch"
                                if ( !(((_inter = (PPTREE)paramTree,1) && 
#line 322 "decomp0.ch"
                                            (NumberTree(_inter) == metachop::NIL) &&
#line 322 "decomp0.ch"
                                            1)) ) 
#line 322 "decomp0.ch"
#line 326 "decomp0.ch"
                                    decomp(paramTree);
#line 326 "decomp0.ch"
#line 326 "decomp0.ch"
                                else 
#line 326 "decomp0.ch"
#line 328 "decomp0.ch"
                                    PrintString("(PPTREE) 0 ");
#line 328 "decomp0.ch"
                                    PrintString(");");
#line 328 "decomp0.ch"
#line 328 "decomp0.ch"
                                LNewLine(1);
#line 328 "decomp0.ch"
#line 328 "decomp0.ch"
                                UnMark();
#line 328 "decomp0.ch"
#line 328 "decomp0.ch"
#line 331 "decomp0.ch"
                                PrintString("}");
#line 331 "decomp0.ch"
#line 331 "decomp0.ch"
                                LNewLine(1);
#line 331 "decomp0.ch"
#line 331 "decomp0.ch"
#line 332 "decomp0.ch"
                                if ( name ) {
#line 332 "decomp0.ch"
#line 333 "decomp0.ch"
                                                WriteString(name);
#line 333 "decomp0.ch"
#line 333 "decomp0.ch"
                                                WriteString(" = ");
#line 333 "decomp0.ch"
#line 334 "decomp0.ch"
                                                if ( !(((_inter = (PPTREE)paramTree,1) && 
#line 334 "decomp0.ch"
                                                            (NumberTree(_inter) == metachop::NIL) &&
#line 334 "decomp0.ch"
                                                            1)) ) 
#line 334 "decomp0.ch"
#line 335 "decomp0.ch"
                                                    decomp(paramTree);
#line 335 "decomp0.ch"
#line 335 "decomp0.ch"
                                                else 
#line 335 "decomp0.ch"
#line 337 "decomp0.ch"
                                                    PrintString("(PPTREE) 0");
#line 337 "decomp0.ch"
                                                    PrintString(";");
#line 337 "decomp0.ch"
#line 337 "decomp0.ch"
#line 338 "decomp0.ch"
                                                LNewLine(1);
#line 338 "decomp0.ch"
#line 338 "decomp0.ch"
#line 339 "decomp0.ch"
#line 339 "decomp0.ch"
#line 339 "decomp0.ch"
                                             }
#line 339 "decomp0.ch"
#line 340 "decomp0.ch"
#line 340 "decomp0.ch"
#line 340 "decomp0.ch"
                             } else 
#line 340 "decomp0.ch"
    {
#line 340 "decomp0.ch"
#line 341 "decomp0.ch"
        ((_inter = (PPTREE)paramTree,1) && 
#line 341 "decomp0.ch"
            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 341 "decomp0.ch"
                ((ptTree=SonTree(_inter,2)),1) &&
#line 341 "decomp0.ch"
                1),
#line 341 "decomp0.ch"
                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 341 "decomp0.ch"
            1);
#line 341 "decomp0.ch"
        ;
#line 341 "decomp0.ch"
#line 344 "decomp0.ch"
        currParam = 1 ;
#line 344 "decomp0.ch"
#line 345 "decomp0.ch"
        sprintf(string, "%d);", currParam);
#line 345 "decomp0.ch"
#line 346 "decomp0.ch"
        while ( !((!ptTree)) ) {
#line 346 "decomp0.ch"
#line 347 "decomp0.ch"
                                    (son=(ptTree?ptTree.Nextl():(PPTREE)0));
#line 347 "decomp0.ch"
#line 347 "decomp0.ch"
#line 348 "decomp0.ch"
                                    {
#line 348 "decomp0.ch"
                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 348 "decomp0.ch"
                                        _ptRes0 = MakeTree(LIST, 2);
#line 348 "decomp0.ch"
                                        ident = _ptRes0;
#line 348 "decomp0.ch"
                                    }
#line 348 "decomp0.ch"
#line 348 "decomp0.ch"
#line 349 "decomp0.ch"
                                    if ( !(((_inter = (PPTREE)son,1) && 
#line 349 "decomp0.ch"
                                                (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 349 "decomp0.ch"
                                                1)) ) {
#line 349 "decomp0.ch"
#line 350 "decomp0.ch"
                                                        sprintf(string, "%d", currParam);
#line 350 "decomp0.ch"
#line 351 "decomp0.ch"
                                                        ((_inter = (PPTREE)son,1) && 
#line 351 "decomp0.ch"
                                                            (NumberTree(_inter) == metachop::NODE_TREE) &&
#line 351 "decomp0.ch"
                                                            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 351 "decomp0.ch"
                                                                ((ident=SonTree(_inter,1)),1) &&
#line 351 "decomp0.ch"
                                                                1),
#line 351 "decomp0.ch"
                                                                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 351 "decomp0.ch"
                                                            1);
#line 351 "decomp0.ch"
                                                        ;
#line 351 "decomp0.ch"
#line 352 "decomp0.ch"
                                                        if ( !((!ident)) ) 
#line 352 "decomp0.ch"
#line 353 "decomp0.ch"
                                                            retName = Switcher(son, namePt, level + 1);
#line 353 "decomp0.ch"
                                                        else 
#line 354 "decomp0.ch"
                                                        {
#line 354 "decomp0.ch"
#line 355 "decomp0.ch"
                                                            WriteString(name1Pt);
#line 355 "decomp0.ch"
#line 355 "decomp0.ch"
                                                            PrintString(" = SonTree(");
#line 355 "decomp0.ch"
#line 356 "decomp0.ch"
                                                            WriteString(mod_name);
#line 356 "decomp0.ch"
#line 356 "decomp0.ch"
                                                            PrintString(",");
#line 356 "decomp0.ch"
#line 357 "decomp0.ch"
                                                            WriteString(string);
#line 357 "decomp0.ch"
#line 357 "decomp0.ch"
                                                            PrintString(");");
#line 357 "decomp0.ch"
#line 357 "decomp0.ch"
                                                            LNewLine(1);
#line 357 "decomp0.ch"
#line 357 "decomp0.ch"
#line 358 "decomp0.ch"
                                                            ReplaceTreeGen(son, namePt, name1Pt, level + 1);
#line 358 "decomp0.ch"
#line 359 "decomp0.ch"
                                                            retName = namePt ;
#line 359 "decomp0.ch"
#line 360 "decomp0.ch"
#line 360 "decomp0.ch"
#line 360 "decomp0.ch"
                                                        }
#line 360 "decomp0.ch"
#line 361 "decomp0.ch"
                                                        if ( name ) {
#line 361 "decomp0.ch"
#line 362 "decomp0.ch"
                                                                        WriteString(name);
#line 362 "decomp0.ch"
#line 362 "decomp0.ch"
                                                                        WriteString(" = ");
#line 362 "decomp0.ch"
#line 363 "decomp0.ch"
#line 363 "decomp0.ch"
#line 363 "decomp0.ch"
                                                                     }
#line 363 "decomp0.ch"
#line 364 "decomp0.ch"
                                                        PrintString("ReplaceTree(");
#line 364 "decomp0.ch"
#line 364 "decomp0.ch"
                                                        WriteString(mod_name);
#line 364 "decomp0.ch"
#line 364 "decomp0.ch"
                                                        PrintString(", ");
#line 364 "decomp0.ch"
#line 365 "decomp0.ch"
                                                        WriteString(string);
#line 365 "decomp0.ch"
#line 365 "decomp0.ch"
                                                        PrintString(", ");
#line 365 "decomp0.ch"
#line 366 "decomp0.ch"
                                                        WriteString(retName);
#line 366 "decomp0.ch"
#line 366 "decomp0.ch"
                                                        PrintString(")");
#line 366 "decomp0.ch"
                                                        PrintString(";");
#line 366 "decomp0.ch"
#line 366 "decomp0.ch"
                                                        LNewLine(1);
#line 366 "decomp0.ch"
#line 366 "decomp0.ch"
#line 367 "decomp0.ch"
#line 367 "decomp0.ch"
#line 367 "decomp0.ch"
                                                      }
#line 367 "decomp0.ch"
#line 368 "decomp0.ch"
                                    currParam++ ;
#line 368 "decomp0.ch"
#line 369 "decomp0.ch"
#line 369 "decomp0.ch"
#line 369 "decomp0.ch"
                                 }
#line 369 "decomp0.ch"
#line 370 "decomp0.ch"
#line 370 "decomp0.ch"
#line 370 "decomp0.ch"
    }
#line 370 "decomp0.ch"
    UnMark();
#line 370 "decomp0.ch"
#line 370 "decomp0.ch"
#line 372 "decomp0.ch"
    PrintString("}");
#line 372 "decomp0.ch"
#line 372 "decomp0.ch"
    LNewLine(1);
#line 372 "decomp0.ch"
#line 372 "decomp0.ch"
#line 373 "decomp0.ch"
#line 373 "decomp0.ch"
#line 373 "decomp0.ch"
}
#line 373 "decomp0.ch"

#line 377 "decomp0.ch"
#line 377 "decomp0.ch"
void AddListGen ( PTREE paramTree, char *name, char *name_mod, int level )
#line 377 "decomp0.ch"
{
#line 377 "decomp0.ch"
#line 377 "decomp0.ch"
    int _nextVal ;
#line 377 "decomp0.ch"
#line 380 "decomp0.ch"
    char    string [5];
#line 380 "decomp0.ch"
#line 381 "decomp0.ch"
    char    namePt [10];
#line 381 "decomp0.ch"
#line 382 "decomp0.ch"
    char    *nameTree ;
#line 382 "decomp0.ch"
#line 384 "decomp0.ch"
    sprintf(namePt, "_ptTree%d", level);
#line 384 "decomp0.ch"
#line 385 "decomp0.ch"
    PrintString("{");
#line 385 "decomp0.ch"
#line 385 "decomp0.ch"
    LNewLine(1);
#line 385 "decomp0.ch"
#line 385 "decomp0.ch"
#line 386 "decomp0.ch"
    Tab();
#line 386 "decomp0.ch"
#line 386 "decomp0.ch"
#line 388 "decomp0.ch"
    Mark();
#line 388 "decomp0.ch"
    PrintString("PPTREE ");
#line 388 "decomp0.ch"
    WriteString(namePt);
#line 388 "decomp0.ch"
    PrintString("= (PPTREE) 0 ;");
#line 388 "decomp0.ch"
    LNewLine(1);
#line 388 "decomp0.ch"
#line 388 "decomp0.ch"
    nameTree = Switcher(paramTree, namePt, level + 1);
#line 388 "decomp0.ch"
    if ( name ) {
#line 388 "decomp0.ch"
#line 391 "decomp0.ch"
                    WriteString(name);
#line 391 "decomp0.ch"
#line 391 "decomp0.ch"
                    PrintString(" = ");
#line 391 "decomp0.ch"
#line 392 "decomp0.ch"
#line 392 "decomp0.ch"
#line 392 "decomp0.ch"
                 }
#line 392 "decomp0.ch"
    WriteString(name_mod);
#line 392 "decomp0.ch"
    PrintString(" = AddList( ");
#line 392 "decomp0.ch"
    WriteString(name_mod);
#line 392 "decomp0.ch"
    PrintString(",");
#line 392 "decomp0.ch"
    WriteString(nameTree);
#line 392 "decomp0.ch"
    PrintString(")");
#line 392 "decomp0.ch"
    PrintString(";");
#line 392 "decomp0.ch"
    LNewLine(1);
#line 392 "decomp0.ch"
#line 392 "decomp0.ch"
    UnMark();
#line 392 "decomp0.ch"
#line 392 "decomp0.ch"
#line 396 "decomp0.ch"
    PrintString("}");
#line 396 "decomp0.ch"
#line 396 "decomp0.ch"
    LNewLine(1);
#line 396 "decomp0.ch"
#line 396 "decomp0.ch"
#line 397 "decomp0.ch"
#line 397 "decomp0.ch"
#line 397 "decomp0.ch"
}
#line 397 "decomp0.ch"

#line 402 "decomp0.ch"
#line 402 "decomp0.ch"
void AddListGen1 ( PTREE paramTree, char *name, char *name_mod, int level )
#line 402 "decomp0.ch"
{
#line 402 "decomp0.ch"
    register PPTREE _inter ;
#line 402 "decomp0.ch"
#line 402 "decomp0.ch"
#line 402 "decomp0.ch"
    int _nextVal ;
#line 402 "decomp0.ch"
#line 405 "decomp0.ch"
    char    string [5];
#line 405 "decomp0.ch"
#line 406 "decomp0.ch"
    char    namePt [10];
#line 406 "decomp0.ch"
#line 407 "decomp0.ch"
    char    *nameTree ;
#line 407 "decomp0.ch"
#line 408 "decomp0.ch"
    PTREE   exp1, exp2 ;
#line 408 "decomp0.ch"
#line 408 "decomp0.ch"
#line 410 "decomp0.ch"
    sprintf(namePt, "_ptTree%d", level);
#line 410 "decomp0.ch"
#line 411 "decomp0.ch"
    PrintString("{");
#line 411 "decomp0.ch"
#line 411 "decomp0.ch"
    LNewLine(1);
#line 411 "decomp0.ch"
#line 411 "decomp0.ch"
#line 412 "decomp0.ch"
    Tab();
#line 412 "decomp0.ch"
#line 412 "decomp0.ch"
#line 414 "decomp0.ch"
    Mark();
#line 414 "decomp0.ch"
    PrintString("PPTREE ");
#line 414 "decomp0.ch"
    WriteString(namePt);
#line 414 "decomp0.ch"
    PrintString("= (PPTREE) 0 ;");
#line 414 "decomp0.ch"
    LNewLine(1);
#line 414 "decomp0.ch"
#line 414 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 414 "decomp0.ch"
            (NumberTree(_inter) == metachop::MUL) &&
#line 414 "decomp0.ch"
            ((exp1=SonTree(_inter,1)),1) &&
#line 414 "decomp0.ch"
            ((exp2=SonTree(_inter,2)),1) &&
#line 414 "decomp0.ch"
            1) ) {
#line 414 "decomp0.ch"
#line 416 "decomp0.ch"
                    AddListGen1(exp1, (char *)0, name_mod, level + 1);
#line 416 "decomp0.ch"
#line 417 "decomp0.ch"
                    AddListGen1(exp2, (char *)0, name_mod, level + 1);
#line 417 "decomp0.ch"
#line 418 "decomp0.ch"
#line 418 "decomp0.ch"
#line 418 "decomp0.ch"
                 } else 
#line 418 "decomp0.ch"
    {
#line 418 "decomp0.ch"
#line 419 "decomp0.ch"
        nameTree = Switcher(paramTree, namePt, level + 1);
#line 419 "decomp0.ch"
#line 420 "decomp0.ch"
        WriteString(name_mod);
#line 420 "decomp0.ch"
#line 420 "decomp0.ch"
        PrintString(" =  AddList( ");
#line 420 "decomp0.ch"
#line 420 "decomp0.ch"
        WriteString(name_mod);
#line 420 "decomp0.ch"
#line 421 "decomp0.ch"
        PrintString(",");
#line 421 "decomp0.ch"
#line 421 "decomp0.ch"
        WriteString(nameTree);
#line 421 "decomp0.ch"
#line 421 "decomp0.ch"
        PrintString(");");
#line 421 "decomp0.ch"
#line 421 "decomp0.ch"
        LNewLine(1);
#line 421 "decomp0.ch"
#line 421 "decomp0.ch"
#line 422 "decomp0.ch"
#line 422 "decomp0.ch"
#line 422 "decomp0.ch"
    }
#line 422 "decomp0.ch"
    if ( name ) {
#line 422 "decomp0.ch"
#line 424 "decomp0.ch"
                    WriteString(name);
#line 424 "decomp0.ch"
#line 424 "decomp0.ch"
                    PrintString(" = ");
#line 424 "decomp0.ch"
#line 424 "decomp0.ch"
                    WriteString(name_mod);
#line 424 "decomp0.ch"
#line 424 "decomp0.ch"
                    PrintString(";");
#line 424 "decomp0.ch"
#line 424 "decomp0.ch"
                    LNewLine(1);
#line 424 "decomp0.ch"
#line 424 "decomp0.ch"
#line 425 "decomp0.ch"
#line 425 "decomp0.ch"
#line 425 "decomp0.ch"
                 }
#line 425 "decomp0.ch"
    UnMark();
#line 425 "decomp0.ch"
#line 425 "decomp0.ch"
#line 427 "decomp0.ch"
    PrintString("}");
#line 427 "decomp0.ch"
#line 427 "decomp0.ch"
    LNewLine(1);
#line 427 "decomp0.ch"
#line 427 "decomp0.ch"
#line 428 "decomp0.ch"
#line 428 "decomp0.ch"
#line 428 "decomp0.ch"
}
#line 428 "decomp0.ch"

#line 433 "decomp0.ch"
#line 433 "decomp0.ch"
void SwitcherTop ( PTREE paramTree, char *name, int level )
#line 433 "decomp0.ch"
{
#line 433 "decomp0.ch"
    register PPTREE _inter ;
#line 433 "decomp0.ch"
#line 433 "decomp0.ch"
#line 433 "decomp0.ch"
    int _retVal [2];
#line 433 "decomp0.ch"
#line 433 "decomp0.ch"
    PPTREE  _storeVal [2];
#line 433 "decomp0.ch"
#line 433 "decomp0.ch"
    int _nextVal ;
#line 433 "decomp0.ch"
#line 436 "decomp0.ch"
    PTREE   exp1 ;
#line 436 "decomp0.ch"
#line 436 "decomp0.ch"
#line 437 "decomp0.ch"
    int allocated = 0 ;
#line 437 "decomp0.ch"
#line 438 "decomp0.ch"
    char    *pName ;
#line 438 "decomp0.ch"
#line 440 "decomp0.ch"
    Switcher(paramTree, name, level);
#line 440 "decomp0.ch"
#line 441 "decomp0.ch"
#if 0
#line 441 "decomp0.ch"
#line 442 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 442 "decomp0.ch"
            (NumberTree(_inter) == metachop::PLU_AFF) &&
#line 442 "decomp0.ch"
            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 442 "decomp0.ch"
                (NumberTree(_inter) == metachop::NIL) &&
#line 442 "decomp0.ch"
                1),
#line 442 "decomp0.ch"
                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 442 "decomp0.ch"
            1) ) {
#line 442 "decomp0.ch"
#line 442 "decomp0.ch"
    _If60 : 
#line 442 "decomp0.ch"
#line 442 "decomp0.ch"
        ;
#line 442 "decomp0.ch"
#line 442 "decomp0.ch"
        goto _If61 ;
#line 442 "decomp0.ch"
#line 442 "decomp0.ch"
    } else 
#line 445 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 445 "decomp0.ch"
            (NumberTree(_inter) == metachop::PLU_AFF) &&
#line 445 "decomp0.ch"
            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 445 "decomp0.ch"
                (NumberTree(_inter) == metachop::IDENT) &&
#line 445 "decomp0.ch"
                1),
#line 445 "decomp0.ch"
                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 445 "decomp0.ch"
            1) ) {
#line 445 "decomp0.ch"
#line 445 "decomp0.ch"
    _If61 : 
#line 445 "decomp0.ch"
#line 445 "decomp0.ch"
        ;
#line 445 "decomp0.ch"
#line 445 "decomp0.ch"
        pName = name ;
#line 445 "decomp0.ch"
#line 445 "decomp0.ch"
    } else 
#line 447 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 447 "decomp0.ch"
            (NumberTree(_inter) == metachop::EXPO_AFF) &&
#line 447 "decomp0.ch"
            1) ) {
#line 447 "decomp0.ch"
#line 447 "decomp0.ch"
    _If62 : 
#line 447 "decomp0.ch"
#line 447 "decomp0.ch"
        ;
#line 447 "decomp0.ch"
#line 447 "decomp0.ch"
        ;
#line 447 "decomp0.ch"
#line 447 "decomp0.ch"
        goto _If63 ;
#line 447 "decomp0.ch"
#line 447 "decomp0.ch"
    } else 
#line 448 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 448 "decomp0.ch"
            (NumberTree(_inter) == metachop::MUL_AFF) &&
#line 448 "decomp0.ch"
            1) ) {
#line 448 "decomp0.ch"
#line 448 "decomp0.ch"
    _If63 : 
#line 448 "decomp0.ch"
#line 448 "decomp0.ch"
        ;
#line 448 "decomp0.ch"
#line 448 "decomp0.ch"
        ;
#line 448 "decomp0.ch"
#line 448 "decomp0.ch"
        goto _If64 ;
#line 448 "decomp0.ch"
#line 448 "decomp0.ch"
    } else 
#line 450 "decomp0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 450 "decomp0.ch"
            (NumberTree(_inter) == metachop::PLU_AFF) &&
#line 450 "decomp0.ch"
            1) ) {
#line 450 "decomp0.ch"
#line 450 "decomp0.ch"
    _If64 : 
#line 450 "decomp0.ch"
#line 450 "decomp0.ch"
        ;
#line 450 "decomp0.ch"
#line 450 "decomp0.ch"
        ((_inter = (PPTREE)paramTree,1) && 
#line 450 "decomp0.ch"
            ((exp1=SonTree(_inter,1)),1) &&
#line 450 "decomp0.ch"
            1);
#line 450 "decomp0.ch"
        ;
#line 450 "decomp0.ch"
#line 451 "decomp0.ch"
        pName = AllocString(BrainyValue(exp1));
#line 451 "decomp0.ch"
#line 452 "decomp0.ch"
        allocated = 1 ;
#line 452 "decomp0.ch"
#line 452 "decomp0.ch"
    } else 
#line 454 "decomp0.ch"
    if ( 1 ) {
#line 454 "decomp0.ch"
#line 454 "decomp0.ch"
    _If65 : 
#line 454 "decomp0.ch"
#line 454 "decomp0.ch"
        ;
#line 454 "decomp0.ch"
#line 454 "decomp0.ch"
        pName = name ;
#line 454 "decomp0.ch"
#line 454 "decomp0.ch"
    }
#line 454 "decomp0.ch"
#line 456 "decomp0.ch"
    if ( pName ) {
#line 456 "decomp0.ch"
#line 457 "decomp0.ch"
                    PrintString("{");
#line 457 "decomp0.ch"
#line 457 "decomp0.ch"
                    LNewLine(1);
#line 457 "decomp0.ch"
#line 457 "decomp0.ch"
#line 458 "decomp0.ch"
                    Tab();
#line 458 "decomp0.ch"
#line 458 "decomp0.ch"
#line 459 "decomp0.ch"
                    Mark();
#line 459 "decomp0.ch"
                    PrintString("PPTREE _SwitcherTree = ");
#line 459 "decomp0.ch"
                    WriteString(pName);
#line 459 "decomp0.ch"
                    PrintString(";");
#line 459 "decomp0.ch"
                    LNewLine(1);
#line 459 "decomp0.ch"
#line 459 "decomp0.ch"
                    Switcher(paramTree, name, level);
#line 459 "decomp0.ch"
                    if ( strcmp(pName, "for_elem") ) {
#line 459 "decomp0.ch"
#line 462 "decomp0.ch"
                                                            PrintString("AddRef(");
#line 462 "decomp0.ch"
#line 462 "decomp0.ch"
                                                            WriteString(pName);
#line 462 "decomp0.ch"
#line 462 "decomp0.ch"
                                                            PrintString(");");
#line 462 "decomp0.ch"
#line 462 "decomp0.ch"
                                                            LNewLine(1);
#line 462 "decomp0.ch"
#line 462 "decomp0.ch"
#line 463 "decomp0.ch"
                                                            PrintString("if (_SwitcherTree) FreeRef( _SwitcherTree);");
#line 463 "decomp0.ch"
#line 463 "decomp0.ch"
                                                            LNewLine(1);
#line 463 "decomp0.ch"
#line 463 "decomp0.ch"
#line 464 "decomp0.ch"
#line 464 "decomp0.ch"
#line 464 "decomp0.ch"
                                                        }
#line 464 "decomp0.ch"
                    UnMark();
#line 464 "decomp0.ch"
#line 464 "decomp0.ch"
#line 466 "decomp0.ch"
                    PrintString("}");
#line 466 "decomp0.ch"
#line 466 "decomp0.ch"
                    LNewLine(1);
#line 466 "decomp0.ch"
#line 466 "decomp0.ch"
#line 467 "decomp0.ch"
#line 467 "decomp0.ch"
#line 467 "decomp0.ch"
                  } else 
#line 467 "decomp0.ch"
    {
#line 467 "decomp0.ch"
#line 468 "decomp0.ch"
        Switcher(paramTree, name, level);
#line 468 "decomp0.ch"
#line 469 "decomp0.ch"
#line 469 "decomp0.ch"
#line 469 "decomp0.ch"
    }
#line 469 "decomp0.ch"
#line 470 "decomp0.ch"
    if ( allocated ) 
#line 470 "decomp0.ch"
#line 471 "decomp0.ch"
        free(pName);
#line 471 "decomp0.ch"
#line 471 "decomp0.ch"
#line 471 "decomp0.ch"
#endif
#line 471 "decomp0.ch"
#line 473 "decomp0.ch"
#line 473 "decomp0.ch"
#line 473 "decomp0.ch"
}
#line 473 "decomp0.ch"

#line 473 "decomp0.ch"
#line 473 "decomp0.ch"
static void decomp0_Anchor () { int i = 1;} 
#line 473 "decomp0.ch"
/*Well done my boy */ 
#line 473 "decomp0.ch"

