/*************************************************************************/
/*                                                                       */
/*        dchop0.ch - Built by Eric Lavillonniere on Tandon 386 - 89   */
/*                                                                       */
/*************************************************************************/
/* This file is part of metachop                                            
   
   Metachop provide the tools to prettyprint or modify trees generated
   by metagen.
   
   It runs on dos and unix. It generates c code. */
/* Copyright(C) 1989 Eric Lavillonniere */
/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING. If not, write to 
   the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
   
   */
language metachop;

#include "decmetac.h"

extern char *nameDefine ;
int         inDefine ;
extern int  statementf ;
int         needInter ;
extern int  compiledLine ;
extern char *theFileName ;

#include "newline.h"

/******************************************************************
       Switcher : switch between generic functions
   *******************************************************************/
char *Switcher ( PTREE paramTree, char *name, int level )
{
    PTREE   ident, exp1, exp2, son ;
    char    *name_ident, string ;
    char    namePt [10];
    
    sprintf(namePt, "_ptTree%d", level);
    switch ( paramTree ) {
        case <NIL> : 
            WriteString(name) " = (PPTREE) 0;" <NL>
            return name ;
            break ;
        case <QUALIFIED> : 
            {
                EString name ;
                name =  EString(Value(paramTree [1])) + "::" + Value(paramTree [2]);
                PTREE   newTree = PTREE(name);
                StoreRef(newTree);
                return Value(newTree);
            }
        case <IDENT,ident> : 
            return BrainyValue(ident);
            break ;
        case <FUNC> : 
            WriteString(name) " = StoreRef(";
            decomp(paramTree);
            ")" <NL>
            return name ;
        case <PARSE,son> : 
            son == <,<>,son>;
            MakeTreeGenDir(son, name, 0);
            return name ;
        case <STRING> : 
            statementf = 0 ;
            WriteString(name) " = MakeString(";
            decomp(paramTree);
            ") " ";" <NL>
            return name ;
        case <NODE_TREE> : 
            MakeTreeGen(paramTree, name, level);
            return name ;
        case <PLU_AFF,exp1,exp2> : 
            name_ident = AllocString(value(exp1));
            ReplaceTreeGen(exp2, name, name_ident, level);
            free(name_ident);
            return name ;
        case <EXPO_AFF,exp1,exp2> : 
            name_ident = AllocString(value(exp1));
            AddListGen(exp2, name, name_ident, level);
            free(name_ident);
            return name ;
        case <MUL_AFF,exp1,exp2> : 
            name_ident = AllocString(value(exp1));
            AddListGen1(exp2, name, name_ident, level);
            free(name_ident);
            return name ;
            break ;
        case <PLUS,exp1,exp2> : 
            if ( exp1 == <NODE_TREE> ) {
                MakeTreeGen(exp1, name, level);
                ReplaceTreeGen(exp2, (char *)0, name, level);
            } else if ( exp1 == <IDENT> ) {
                WriteString(name) " = CopyTree (" value(exp1) ");" <NL>
                ReplaceTreeGen(exp2, (char *)0, name, level);
            }
            return name ;
        case <EXPO,exp1,exp2> : 
            if ( exp1 == <MUL> ) 
                Switcher(exp1, name, level);
            else {
                WriteString(name) " = (PPTREE) 0;" <NL>
                AddListGen(exp1, (char *)0, name, level);
            }
            AddListGen(exp2, (char *)0, name, level);
            return name ;
        case <MUL,exp1,exp2> : 
            name_ident = Switcher(exp1, name, level);
            if ( strcmp(name, name_ident) ) {
                WriteString(name) " = " WriteString(name_ident) ";" <NL>
            }
            AddListGen(exp2, (char *)0, name, level);
            return name ;
        case <EXP,exp1> : 
            Switcher(exp1, name, level);
            return name ;
            break ;
        case <AFF,exp1,exp2> : 
            name_ident = AllocString(value(exp1));
            switch ( exp2 ) {
                case <IDENT> : 
                    WriteString(name_ident) " = " value(exp2) ";" <NL>
                    break ;
                case <NIL> : 
                    WriteString(name_ident) " = (PPTREE) 0 ;" <NL>
                    break ;
                case <NODE_TREE> : 
                    MakeTreeGen(exp2, name, level);
                    if ( strcmp(name_ident, name) ) {
                        WriteString(name_ident) " = " WriteString(name) ";" <NL>
                    }
                    break ;
                case <PLUS> : 
                    Switcher(exp2, name, level);
                    if ( strcmp(name_ident, name) ) {
                        WriteString(name_ident) " = " WriteString(name) ";" <NL>
                    }
                    break ;
                case <EXPO> : 
                    "{" <NL>
                        <T> {{
                                "PPTREE " WriteString(namePt) "= (PPTREE) 0 ;" <NL>
                                Switcher(exp2, namePt, level + 1);
                                WriteString(name) " = " WriteString(namePt) " ;" <NL>
                                if ( strcmp(name_ident, name) ) {
                                    WriteString(name_ident) "= " WriteString(name) ";" <NL>
                                }
                                ";" <NL>
                            }}
                    "}" <NL>
                    break ;
                case <MUL> : 
                    "{" <NL>
                        <T> {{
                                "PPTREE " WriteString(namePt) "=(PPTREE) 0;" <NL>
                                Switcher(exp2, namePt, level + 1);
                                WriteString(name) " = " WriteString(namePt) ";" <NL>
                                if ( strcmp(name_ident, name) ) {
                                    WriteString(name_ident) " = " WriteString(name) ";" <NL>
                                }
                                ";" <NL>
                            }}
                    "}" <NL>
                    break ;
                case <PLU_AFF> : 
                    Switcher(exp2, name, level);
                    if ( strcmp(name_ident, name) ) {
                        WriteString(name_ident) " = " WriteString(name) ";" <NL>
                    }
                    break ;
                case <EXPO_AFF> : 
                    Switcher(exp2, name, level);
                    if ( strcmp(name_ident, name) ) {
                        WriteString(name_ident) " = " WriteString(name) ";" <NL>
                    }
                    break ;
                case <MUL_AFF> : 
                    Switcher(exp2, name, level);
                    if ( strcmp(name_ident, name) ) {
                        WriteString(name_ident) " = " WriteString(name) ";" <NL>
                    }
                    break ;
                case <NEXT> : 
                    WriteString(name_ident) " = " @exp2 ";" <NL>
                    if ( strcmp(name_ident, name) ) {
                        WriteString(name) " = " WriteString(name_ident) ";" <NL>
                    }
                    break ;
                default : 
                    WriteString(name_ident) " = StoreRef(" @exp2 ");" <NL>
                    if ( strcmp(name_ident, name) ) {
                        WriteString(name) " = " WriteString(name_ident) ";" <NL>
                    }
                    break ;
            }
            free(name_ident);
            return name ;
        default : 
            WriteString(name) " = StoreRef(";
            decomp(paramTree);
            ");" <NL>
            return name ;
    }
}

/******************************************************************
       MakeTreeGen : Generates a maketree
   *******************************************************************/
void MakeTreeGen ( PTREE paramTree, char *name, int level )
{
    int     nbParam, currParam, gennode ;
    char    string [5], namePt [10], resPt [10], *retName ;
    PTREE   ptTree, son ;
    
    sprintf(namePt, "_ptTree%d", level);
    sprintf(resPt, "_ptRes%d", level);
    paramTree == <,<,<>,ptTree>>;
    
    /* the list attached to node,skip ident
       <NODE_TREE,node_name,list> */
    nbParam =  0 ;
    while ( ptTree != () ) {
        nbParam++ ;
        nextl(ptTree);
    }
    "{" <NL>
        <T> {{
                "PPTREE " WriteString(namePt) "= (PPTREE) 0," WriteString(resPt) "= (PPTREE) 0;" <NL>
                WriteString(resPt) " = MakeTree(";
                paramTree == <,<,son>>;
                
                /* name of node */
                if ( son == <QUALIFIED> ) {
                    WriteString(Value(son [1])) WriteString("::") WriteString(Value(son [2])) WriteString(",");
                } else {
                    if ( cplusGen ) {
                        WriteString(NameOfNodePlus(Value(son))) ", ";
                    } else {
                        WriteString(NameOfNode(Value(son))) ", ";
                    }
                }
                if ( nbParam > 99 ) {
                    WriteString(" Too many parameter for maketree");
                    nbParam =  99 ;
                }
                sprintf(string, "%d);", nbParam);
                WriteString(string) <NL>
                currParam =  1 ;
                if ( !level ) 
                    InitDecElem(name, nbParam);
                paramTree == <,<,<>,ptTree>>;
                while ( ptTree != () ) {
                    son =  nextl(ptTree);
                    if ( son != <NIL> && son != <DEF_IDENT> ) {
                        retName =  Switcher(son, namePt, level + 1);
                        sprintf(string, "%d", currParam);
                        "ReplaceTree(" WriteString(resPt) ", " WriteString(string) ", " WriteString(retName) ");" <NL>
                    }
                    currParam++ ;
                }
                WriteString(name) " = " WriteString(resPt) ";" <NL>
            }}
    "}" <NL>
}

/******************************************************************
       ReplaceTreeGen : Generates a replacetree
   *******************************************************************/
void ReplaceTreeGen ( PTREE paramTree, char *name, char *mod_name, int level )
{
    int     nbParam, currParam, gennode ;
    char    string [5], namePt [10], name1Pt [10], *retName ;
    int     treeType ;
    PTREE   ptTree, son, ident ;
    
    sprintf(namePt, "_ptTree%d", level);
    sprintf(name1Pt, "_sonTree%d", level);
    "{" <NL>
        <T> {{
                "PPTREE " WriteString(namePt) "= (PPTREE) 0," WriteString(name1Pt) "= (PPTREE) 0 ;" <NL>
                if ( paramTree == <IDENT> || paramTree == <NIL> ) {
                    "if (" WriteString(namePt) "= fathertree(" WriteString(mod_name) ")) {" <NL>
                        <T> {{
                                "int rank = ranktree(" WriteString(mod_name) ");" <NL>
                                "ReplaceTree(" WriteString(namePt) ",rank,";
                                if ( paramTree != <NIL> ) 
                                    @paramTree 
                                else 
                                    "(PPTREE) 0 " ");" 
                                <NL>
                            }}
                    "}" <NL>
                    if ( name ) {
                        WriteString(name) WriteString(" = ");
                        if ( paramTree != <NIL> ) 
                            @paramTree 
                        else 
                            "(PPTREE) 0" ";" 
                        <NL>
                    }
                } else {
                    paramTree == <,<,<>,ptTree>>;
                    
                    /* the list attached to node,skip ident */
                    currParam =  1 ;
                    sprintf(string, "%d);", currParam);
                    while ( ptTree != () ) {
                        son   =  nextl(ptTree);
                        ident =  <LIST,(),()>;
                        if ( son != <DEF_IDENT> ) {
                            sprintf(string, "%d", currParam);
                            son == <NODE_TREE,<,ident>>;
                            if ( ident != () ) 
                                retName =  Switcher(son, namePt, level + 1);
                            else {
                                WriteString(name1Pt) " = SonTree(" WriteString(mod_name) "," WriteString(string) ");" <NL>
                                ReplaceTreeGen(son, namePt, name1Pt, level + 1);
                                retName =  namePt ;
                            }
                            if ( name ) {
                                WriteString(name) WriteString(" = ");
                            }
                            "ReplaceTree(" WriteString(mod_name) ", " WriteString(string) ", " WriteString(retName) ")" ";" <NL>
                        }
                        currParam++ ;
                    }
                }
            }}
    "}" <NL>
}

/******************************************************************
       AddListGen : generates an addlist
   *******************************************************************/
void AddListGen ( PTREE paramTree, char *name, char *name_mod, int level )
{
    char    string [5];
    char    namePt [10];
    char    *nameTree ;
    
    sprintf(namePt, "_ptTree%d", level);
    "{" <NL>
        <T> {{
                "PPTREE " WriteString(namePt) "= (PPTREE) 0 ;" <NL>
                nameTree =  Switcher(paramTree, namePt, level + 1);
                if ( name ) {
                    WriteString(name) " = ";
                }
                WriteString(name_mod) " = AddList( " WriteString(name_mod) "," WriteString(nameTree) ")" ";" <NL>
            }}
    "}" <NL>
}

/******************************************************************
       AddListGen1 : generates an addlist **
                   addlist elem to name_mod
   *******************************************************************/
void AddListGen1 ( PTREE paramTree, char *name, char *name_mod, int level )
{
    char    string [5];
    char    namePt [10];
    char    *nameTree ;
    PTREE   exp1, exp2 ;
    
    sprintf(namePt, "_ptTree%d", level);
    "{" <NL>
        <T> {{
                "PPTREE " WriteString(namePt) "= (PPTREE) 0 ;" <NL>
                if ( paramTree == <MUL,exp1,exp2> ) {
                    AddListGen1(exp1, (char *)0, name_mod, level + 1);
                    AddListGen1(exp2, (char *)0, name_mod, level + 1);
                } else {
                    nameTree =  Switcher(paramTree, namePt, level + 1);
                    WriteString(name_mod) " =  AddList( " WriteString(name_mod) "," WriteString(nameTree) ");" <NL>
                }
                if ( name ) {
                    WriteString(name) " = " WriteString(name_mod) ";" <NL>
                }
            }}
    "}" <NL>
}

/******************************************************************
       Appel du Switcher en faisant les manipulations necessaires sur
         les references 
   *******************************************************************/
void SwitcherTop ( PTREE paramTree, char *name, int level )
{
    PTREE   exp1 ;
    int     allocated = 0 ;
    char    *pName ;
    
    Switcher(paramTree, name, level);
#   if 0
        switch ( paramTree ) {
            case <PLU_AFF,<>,<NIL>> : 
            case <PLU_AFF,<>,<IDENT>> : 
                pName = name ;
                break ;
            case <EXPO_AFF> : ;
            case <MUL_AFF> : ;
            case <PLU_AFF> : 
                paramTree == <,exp1>;
                pName     = AllocString(value(exp1));
                allocated = 1 ;
                break ;
            default : pName = name ;
        }
        if ( pName ) {
            "{" <NL>
                <T> {{
                        "PPTREE _SwitcherTree = " WriteString(pName) ";" <NL>
                        Switcher(paramTree, name, level);
                        if ( strcmp(pName, "for_elem") ) {
                            "AddRef(" WriteString(pName) ");" <NL>
                            "if (_SwitcherTree) FreeRef( _SwitcherTree);" <NL>
                        }
                    }}
            "}" <NL>
        } else {
            Switcher(paramTree, name, level);
        }
        if ( allocated ) 
            free(pName);
#   endif
}


