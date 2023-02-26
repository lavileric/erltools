/*************************************************************************/
/*                                                                       */
/*        dchop1.ch   - Built by Eric Lavillonniere on Tandon 386 - 93   */
/*                                                                       */
/*************************************************************************/
/* This file is part of c++  prettyprinter */
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
language cplus;

#ifdef FOR_METACHOP
    PTREE   postComment ;
#endif

#include "deccplus.h"
#include "memges.h"

int DecompCplus::OpTypeAlign ( PTREE tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <EXP_SEQ> : 
        case <INITIALIZER> : 
        case <BASE_LIST> : 
        case <STRING_LIST> : 
        case <EXCEPTION_LIST> : 
            return LIST_ALIGN ;
            break ;
        case <AFF> : 
        case <MUL_AFF> : 
        case <DIV_AFF> : 
        case <REM_AFF> : 
        case <MIN_AFF> : 
        case <PLU_AFF> : 
        case <LSH_AFF> : 
        case <RSH_AFF> : 
        case <AND_AFF> : 
        case <OR_AFF> : 
        case <XOR_AFF> : 
            return H_ALIGN ;
            break ;
        case <OR> : 
        case <AND> : 
            return V_ALIGN ;
            break ;
        case <COND_AFF> : 
            return COND_ALIGN ;
            break ;
        case <LOR> : 
        case <LXOR> : 
        case <LAND> : 
        case <EQU> : 
        case <NEQU> : 
        case <LEQU> : 
        case <GEQU> : 
        case <GT> : 
        case <LT> : 
        case <LSHI> : 
        case <RSHI> : 
        case <MINUS> : 
        case <PLUS> : 
        case <TYP_AFF> : 
        case <MUL> : 
        case <DIV> : 
        case <REM> : 
        case <DOT_MEMB> : 
        case <ARROW_MEMB> : 
        case <REF> : 
        case <ARROW> : 
            return H_ALIGN ;
            break ;
        default : return -1 ;
    }
}

int DecompCplus::OpType ( PTREE tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <LIST> : return 1000 ;
        case <EXP_SEQ> : 
        case <INITIALIZER> : 
        case <BASE_LIST> : 
        case <EXCEPTION_LIST> : 
            return 0 ;
            break ;
        case <AFF> : 
        case <MUL_AFF> : 
        case <DIV_AFF> : 
        case <REM_AFF> : 
        case <MIN_AFF> : 
        case <PLU_AFF> : 
        case <LSH_AFF> : 
        case <RSH_AFF> : 
        case <AND_AFF> : 
        case <OR_AFF> : 
        case <XOR_AFF> : 
            return 100 ;
            break ;
        case <COND_AFF> : 
            return 101 ;
            break ;
        case <OR> : 
            return 102 ;
            break ;
        case <AND> : 
            return 103 ;
            break ;
        case <LOR> : 
            return 104 ;
            break ;
        case <LXOR> : 
            return 105 ;
            break ;
        case <LAND> : 
            return 106 ;
            break ;
        case <EQU> : 
        case <NEQU> : 
            return 107 ;
            break ;
        case <LEQU> : 
        case <GEQU> : 
        case <GT> : 
        case <LT> : 
            return 108 ;
            break ;
        case <LSHI> : 
        case <RSHI> : 
            return 109 ;
            break ;
        case <MINUS> : 
        case <PLUS> : 
        case <TYP_AFF> : 
            
            // on met pas avec = car entraine des traitements 
            // particuliers 
            return 110 ;
            break ;
        case <MUL> : 
        case <DIV> : 
        case <REM> : 
            return 111 ;
            break ;
        case <DOT_MEMB> : 
        case <ARROW_MEMB> : 
            return 112 ;
            break ;
        case <EXP_ARRAY> : 
        case <REF> : 
        case <ARROW> : 
            return 15 ;
            break ;
        case <EXP> : 
            return 16 ;
            break ;
        default : return -1 ;
    }
}

int DecompCplus::IsTop ( PTREE tree, int internal )
{
    PTREE   treeOld ;
    
    switch ( tree ) {
        case <LABEL> : return -1 ;
        case <DECLARATION> : return -1 ;
        case <TYPEDEF> : return -1 ;
        case <IF> : return 1 ;
        case <WHILE> : return 2 ;
        case <FOR> : return 3 ;
        case <DO> : return 4 ;
        case <BREAK> : return 5 ;
        case <CONTINUE> : return 6 ;
        case <COMPOUND> : 
            if ( !internal && IsTop(tree ^ , 1) == -1 ) 
                return 7 ;
            else 
                return -1 ;
        case <GOTO> : return 8 ;
        case <STAT_VOID> : return 9 ;
        case <RETURN> : return 11 ;
        case <SWITCH> : return 12 ;
        case <INCLUDE_DIR> : return 14 ;
        case <IF_DIR> : return 15 ;
        case <IFDEF_DIR> : return 16 ;
        case <IFNDEF_DIR> : return 17 ;
        case <NO_PRETTY> : return 17 ;
        case <NOT_MANAGED> : return 17 ;
        case <AFF> : ;
        case <MUL_AFF> : ;
        case <DIV_AFF> : ;
        case <REM_AFF> : ;
        case <PLU_AFF> : ;
        case <MIN_AFF> : ;
        case <LSH_AFF> : ;
        case <RSH_AFF> : ;
        case <AND_AFF> : ;
        case <OR_AFF> : ;
        case <XOR_AFF> : ;
        case <COND_AFF> : 
        case <EXP_BRA> : 
        case <EXP_LIST> : 
            treeOld = tree ;
            tree    = tree ^ ;
            while ( tree ) {
                switch ( tree ) {
                    case <LABEL> : return -1 ;
                    case <DECLARATION> : return 101 ;
                    case <TYPEDEF> : return 102 ;
                    case <IF> : 
                    case <WHILE> : 
                    case <FOR> : 
                        if ( ranktree(treeOld) != 1 ) 
                            return 1 ;
                        else 
                            return -1 ;
                    case <DO> : 
                        if ( ranktree(treeOld) != 2 ) 
                            return 4 ;
                        else 
                            return -1 ;
                    case <BREAK> : return 5 ;
                    case <CONTINUE> : return 6 ;
                    case <COMPOUND> : return 7 ;
                    case <GOTO> : return -1 ;
                    case <STAT_VOID> : return 9 ;
                    case <RETURN> : return -1 ;
                    case <SWITCH> : return -1 ;
                    case <INCLUDE_DIR> : return 14 ;
                    case <IF_DIR> : 
                        if ( ranktree(treeOld) != 1 ) 
                            return 15 ;
                        else 
                            return -1 ;
                    case <IFDEF_DIR> : 
                        if ( ranktree(treeOld) != 1 ) 
                            return 16 ;
                        else 
                            return -1 ;
                    case <IFNDEF_DIR> : 
                        if ( ranktree(treeOld) != 1 ) 
                            return 17 ;
                        else 
                            return -1 ;
                    case <NOT_MANAGED> : return 17 ;
                    case <NO_PRETTY> : return 17 ;
                    case <AFF> : ;
                    case <MUL_AFF> : ;
                    case <DIV_AFF> : ;
                    case <REM_AFF> : ;
                    case <PLU_AFF> : ;
                    case <MIN_AFF> : ;
                    case <LSH_AFF> : ;
                    case <RSH_AFF> : ;
                    case <AND_AFF> : ;
                    case <OR_AFF> : ;
                    case <XOR_AFF> : ;
                    case <COND_AFF> : 
                    case <EXP_BRA> : 
                    case <EXP_LIST> : return -1 ;
                    default : 
                        treeOld = tree ;
                        tree    = tree ^ ;
                }
            }
            if ( internal || IsTop(tree ^ , 1) == -1 ) 
                return 19 ;
            else 
                return -1 ;
        case <LIST> : 
        case <ATTRIBUTS> : return -1 ;
        case <EXCEPTION_ANSI> : return 31 ;
        case <CATCH_ANSI> : return 32 ;
        case <THROW_ANSI> : return 33 ;
        case <NONE> : return 34 ;
        
        // case <CASE> : return 35 ;
        // case <DEFAULT> : return 36 ;
        default : return -1 ;
    }
}

/********************************************************************
       Treat : traitement des geometries
   *******************************************************************/
void DecompCplus::Treat ( PTREE tree )
{
    int oldNbTab = nbTab ;
    int x, y, dx, dy ;
    int x0, y0 ;
    
    // prepare the geometries on node
    DecompVirt(tree);
    CompleteCoordinates(tree);
    if ( tree == <ATTRIBUTS> ) 
        FreeCoord(tree);
    
    // decl and assignment alignment
    {
        ItPtree it (tree) ;
        PPTREE  _for_elem ;
        while ( (for_elem = it++) ) {
            switch ( for_elem ) {
                case <DECLARATION> : 
                    TraiterAlignTypeDecl(for_elem);
                    break ;
                case <AFF> : 
                case <MUL_AFF> : 
                case <DIV_AFF> : 
                case <REM_AFF> : 
                case <MIN_AFF> : 
                case <PLU_AFF> : 
                case <LSH_AFF> : 
                case <RSH_AFF> : 
                case <AND_AFF> : 
                case <OR_AFF> : 
                case <XOR_AFF> : 
                    TraiterAlignAff(for_elem);
                    it.SkipSon(1);
                    break ;
            }
        }
    }
    
    // make treatment on sequence if any
    TraiterSequence(tree);
    
    // treat geometries
    nbTab =  0 ;
    if ( tree ^ ) {
        GetCoord(tree, &x, &y, &dx, &dy);
        TreatGeometry(tree, -x + 3);
    } else 
        TreatGeometry(tree, 0);
    
    // end
    nbTab =  oldNbTab ;
    {
        ItPtree it(tree, <DECLARATION>);
        PPTREE  _for_elem ;
        while ( (for_elem = it++) ) {
            TraiterListDeclaration(for_elem);
        }
    }
    {
        ItPtree it(tree, <ENUM>);
        PPTREE  _for_elem ;
        while ( (for_elem = it++) ) {
            PTREE   elem = for_elem ;
            elem =  elem [2];
            TraiterDeclAlignEnum(elem);
        }
    }
    {
        PTREE   elem, param, stat ;
        foreach (<FUNC>,tree,{
            elem =  for_elem ;
            if ( elem == <FUNC,<>,<>,<>,param,<>,<>,<>,stat> && stat != () ) {
                TraiterListDeclarator(param);
            }
        })
    }
}

/********************************************************************
           TraiterGeometrie : positionne les geometries a partir
           d'un noeud jusqu'a  un noeud donne
   *******************************************************************/
int DecompCplus::TreatGeometrySpecific ( PTREE tree, int x0, int x )
{
    PTREE   tree1, tree2, cond ;
    
    // treat some specific nodes 
    switch ( tree ) {
        case <FUNC,<>,<>,<>,tree1,<>,<>,tree2> : 
            
            // treatement of parameters 
            // put two tabs for ":" in c++ method
            if ( tree1 && !IsVerticalDecl(tree1) ) 
                TraiterExpListParam(tree1, x0 + x /*, 2*/ );
            
            // treatement of initializer for constructor
            if ( tree2 ) 
                TraiterExpList(tree2, x0 + x);
            break ;
        case <IF_DIR,cond,tree1,tree2> : 
            {
                int x, y, dx, posMark ;
                TreatGeometry(tree1, 0);
                TreatGeometry(tree2, 0);
                
                // suppress indentation on condition
                GetCoord(cond, &x, &y, &dx, &posMark);
                PutCoord(cond, x, y, 10, posMark);
            }
            break ;
        case <EXP_ARRAY,<>,tree2> : 
        case <EXP_BRA,<>,tree2> : 
        case <EXP_LIST,<>,tree2> : 
            if ( tree2 == <EXP_SEQ> ) 
                TraiterExpListParam(tree2, x0 + x);
            else 
                TraiterMonoParam(tree2, x0 + x);
            break ;
        case <ASM,tree2> : 
            TraiterMonoParam(tree2, x0 + x);
            break ;
        case <TYP_LIST,<>,tree2> : 
        case <PARAM_TYPE,<>,tree2> : 
            TraiterExpListParam(tree2, x0 + x);
            break ;
        case <DECLARATION,<>,<>,tree2> : 
        case <ENUM,<>,tree2> : 
            if ( tree2 == <LIST> ) 
                TraiterExpList(tree2, x0 + x);
            break ;
        case <NEW,<>,<>,tree2> : 
            if ( tree2 ) 
                TraiterExpListParam(tree2, x0 + x);
            break ;
        case <FOR> : 
            TraiterForDeclaration(tree, x0);
            break ;
        default : 
            {
                return 0 ;
            }
    }
    return 1 ;
}

/********************************************************************
       computeTab : compute tab and realign if indicated
   *******************************************************************/
int DecompCplus::ComputeTabEnum ( PTREE list, int tabMax, int realign )
{
    PTREE   son, list1, type ;
    PTREE   declaration, listDecl ;
    int     x0, y0, x, y, dx, dy ;
    
    while ( list != () ) {
        son =  nextl(list);
        
        // in the case of a post attribute there is a comment            
        if ( son == <ATTRIBUTS,declaration,<>,list1> ) {
            int     ok = 0 ; //indicates that there is a goto            
            PTREE   att ;
            while ( list1 != () ) {
                att =  nextl(list1);
                if ( att == <GOTO> ) {
                    ok =  1 ;
                    break ;
                }
            }
            
            // compute the tab of this declaraction            
            if ( ok ) {
                int x ;
                int deltaLoop = 0 ;
            loop : 
                
                // get on most left part
                son = declaration ;
                declaration == <TYP_AFF,<>,son>;
                if ( son == () ) 
                    declaration == <TYP_AFF,son>;
                
                // get coordinates of this declaration
                GetCoordAbs(son, (), &x0, &y0);
                GetCoord(son, &x, &y, &dx, &dy);
                
                // compute tab    
                // add 2 to x0+dx for the "," which is    
                // unparsed by list    
                x =  x0 + dx + 3 + deltaLoop ;
                
                // if no decl alignment it is +4 ??? 16/08/00
                if ( !enumVert ) 
                    x += 1 ;
                
                // compute max or realign    
                if ( !realign && x > tabMax && x <= MAX_REALIGN ) 
                    tabMax =  x ;
                else if ( realign && x <= tabMax ) {
                    char    string [20];
                    sprintf(string, "%d", tabMax);
                    att += <,MakeString(string)>;
                } else if ( realign ) {
                    PTREE   subst = <STR," ">;
                    att += subst ;
                }
            }
        }
    }
    return tabMax ;
}

/********************************************************************
       traiterDeclAlign : treatment for list of declaration
   *******************************************************************/
void DecompCplus::TraiterDeclAlignEnum ( PTREE start )
{
    PTREE   list, son ;
    PTREE   listAttr ;
    int     found = 0 /* indicates whether there is a comment */ ;
    PTREE   father, upFather ;
    PTREE   comm ;
    int     ok ;
    PTREE   end ;
    
    // do treatement if enumVert or post
    list =  start ;
    if ( list != <LIST> ) 
        return ;
    
    bool    indent = false ;
    
    if ( enumVert ) 
        indent =  true ;
    else 
        while ( list != () ) {
            son =  list [1];
            if ( IsComm(son, POST) ) {
                indent =  true ;
                break ;
            }
            nextl(list);
        }
    
    // if no indent do nothing
    if ( !indent ) 
        return ;
    
    // else treatment
    if ( end != start ) {
        list =  start ;
        nextl(end);
        while ( list != () && list != end ) {
            son =  nextl(list);
            if ( IsComm(son, POST) ) {
                found    =  1 ;
                
                // put a tab  and a newline            
                // the unparsing of the attributes will            
                // put the comment before the newline and            
                // after the tab            
                listAttr =  () * <GOTO,"1"> * <NEWLINE,"1">;
                PutAttr(son, listAttr, POST_ATTR, PUT_END);
                
                // put the comment after the tab            
                comm =  GetComm(son);
                PutComm(son, ());
                PutComm(son ^ , comm);
            }
        }
        if ( found ) {
            PTREE   list, son ;
            
            // compute the aligment and realign            
            ComputeTabEnum(start, ComputeTabEnum(start, 0, 0), 1);
            found =  0 ;
        }
    }
}

/********************************************************************
       computeTab : compute tab and realign if indicated
   *******************************************************************/
int DecompCplus::ComputeTab ( PTREE list, int tabMax, int realign )
{
    PTREE   son, list1, type ;
    PTREE   declaration, listDecl ;
    int     x0, y0, x, y, dx, dy ;
    
    while ( list != () ) {
        son =  nextl(list);
        
        // in the case of a post attribute there is a comment            
        if ( son == <ATTRIBUTS,declaration,<>,list1> ) {
            int     ok = 0 ; //indicates that there is a goto            
            PTREE   att ;
            while ( list1 != () ) {
                att =  nextl(list1);
                if ( att == <GOTO> ) {
                    ok =  1 ;
                    break ;
                }
            }
            
            // compute the tab of this declaraction            
            if ( ok ) {
                int x ;
                int deltaLoop = 0 ;
                
                // get on last declaration
                if ( declaration == <DECLARATION,<>,type,listDecl> || declaration == <DECLARATOR,<>,type> ) {
                }
            loop : 
                while ( listDecl != <,<>,()> ) 
                    nextl(listDecl);
                if ( listDecl == <,<TYP_LIST,<>,listDecl>> ) {
                    deltaLoop++ ;
                    goto loop ;
                }
                son =  nextl(listDecl);
                
                // if there is no list of decl ( class declaration)
                // use type 
                if ( son == () ) 
                    son =  type ;
                
                // get coordinates of this declaration
                GetCoordAbs(son, (), &x0, &y0);
                GetCoord(son, &x, &y, &dx, &dy);
                
                // compute tab    
                // add 2 to x0+dx for the ";" which is    
                // unparsed by list    
                x =  x0 + dx + 3 + deltaLoop ;
                
                // if no decl alignment it is +4 ??? 16/08/00
                if ( !declAlign ) 
                    x += 1 ;
                
                // compute max or realign    
                if ( !realign && x > tabMax && x <= MAX_REALIGN ) 
                    tabMax =  x ;
                else if ( realign && x <= tabMax ) {
                    char    string [20];
                    sprintf(string, "%d", tabMax);
                    att += <,MakeString(string)>;
                } else if ( realign ) {
                    PTREE   subst = <STR," ">;
                    att += subst ;
                }
            }
        }
    }
    return tabMax ;
}

/********************************************************************
       traiterDeclAlign : treatment for list of declaration
   *******************************************************************/
void DecompCplus::TraiterDeclAlign ( PTREE start, PTREE end, bool declarator )
{
    PTREE   list, son ;
    PTREE   listAttr ;
    int     found = 0 /* indicates whether there is a comment */ ;
    PTREE   father, upFather ;
    PTREE   comm ;
    int     ok ;
    
    if ( end != start ) {
        list =  start ;
        nextl(end);
        while ( list != () && list != end ) {
            son =  nextl(list);
            if ( IsComm(son, POST) ) {
                found    =  1 ;
                
                // put a tab  and a newline            
                // the unparsing of the attributes will            
                // put the comment before the newline and            
                // after the tab            
                listAttr =  () * <GOTO,"1"> * <NEWLINE,"1">;
                PutAttr(son, listAttr, POST_ATTR, PUT_END);
                
                // put the comment after the tab            
                comm =  GetComm(son);
                PutComm(son, ());
                PutComm(son ^ , comm);
            }
        }
        if ( found ) {
            PTREE   list, son ;
            
            // compute the aligment and realign            
            ComputeTab(start, ComputeTab(start, 0, 0), 1);
            found =  0 ;
        }
    } else 
        nextl(end);
    
    // if not the upper declaration block of the function            
    // do nothing            
    if ( !declarator ) {
        PTREE   elem = start ;
        elem =  elem ^ <COMPOUND> ^ ;
        if ( elem != <FUNC> ) 
            return ;
    }
    
    // put a newline            
    // before a list of declaration            
    if ( start && end ) {
        son =  sontree(start, 1);
        if ( son == <ATTRIBUTS,<>,list,<>> ) 
            // there should already be a newline after the attribute            
            // so don't put one now            
            son += <,<>,list * <NEWLINE,"2">,<>>;
        else 
        {
            
            // put a newline after since when there is an attribute            
            // declaration is unparsed without it            
            upFather =  start ^ ;
            if ( upFather == <COMPOUND> ) 
                ok =  0 ;
            else 
                ok =  1 ;
            if ( !ok || IsComm(son, PRE) ) {
                replacetree(start, 1, <ATTRIBUTS,son,<LIST,<NEWLINE,"1">,()>,<LIST,<NEWLINE,"1">,()>>);
            } else {
                replacetree(start, 1, <ATTRIBUTS,son,<LIST,<NEWLINE,"2">,()>,<LIST,<NEWLINE,"1">,()>>);
            }
        }
    }
    
    // after a list of declaration put a newline            
    // if not last elem of the list            
    if ( end ) {
        PTREE   listAttr ;
        son      =  sontree(end, 1);
        listAttr =  () * <NEWLINE,"2">;
        PutAttr(son, listAttr, PRE_ATTR, PUT_END);
    }
}

/********************************************************************
       traiterListeDeclaration : treatment for list of declaration
   *******************************************************************/
void DecompCplus::TraiterListDeclaration ( PTREE tree )
{
    PTREE   father = tree ^ , fatherOld ;
    PTREE   son ;
    int     x0, y0 ;
    
    // look if it is the last of a list of declaration            
    // in this case align comments of declarations            
    if ( father != <LIST> ) 
        return ;
    nextl(father);
    son =  nextl(father);
    if ( son != <DECLARATION> ) {
        
        // mark tree coordinates
        fatherOld =  father = tree ^ ;
        GetCoordAbs(father, (), &x0, &y0);
        MarkCoordTree(father, x0, 0);
        
        // search boudaries
        while ( father && father == <LIST> ) {
            if ( father != <,<DECLARATION>> ) 
                break ;
            fatherOld =  father ;
            father    =  father ^ ;
        }
        
        // align comments at end of declaration
        TraiterDeclAlign(fatherOld, tree ^ );
        
        // unmark
        UnMarkCoordTree(tree ^ );
    }
}

/********************************************************************
       IsVerticalDecl : look if we have to do vertical declaration for declaration
   *******************************************************************/
bool DecompCplus::IsVerticalDecl ( PTREE father )
{
    bool    vertical = false ;
    
    // put comment on var on decl
    {
        PTREE   listDecl = father ;
        PTREE   oneElem, variable, comm ;
        while ( (oneElem = nextl(listDecl)) ) {
            if ( IsComm(oneElem, POST) ) 
                vertical =  true ;
            else 
            // search  comment on a son
            {
                PTREE   currElem = oneElem ;
                int     arity ;
                bool    search = true ;
                while ( search && (arity = currElem.TreeArity()) >= 1 ) {
                    search =  false ;
                    for (; arity > 0 ; arity-- ) {
                        PTREE   son = SonTree(currElem, arity);
                        if ( son != () ) {
                            if ( IsComm(son, POST) ) {
                                PTREE   listComm, comm ;
                                while ( (comm = NextComm(son, POST, 0)) ) {
                                    PTREE   nextComm ;
                                    PTREE   elemComm = comm ;
                                    if ( comm == <LIST,<>,nextComm> ) {
                                        comm     += nextComm ;
                                        listComm =  AddListList(listComm, elemComm);
                                    }
                                }
                                comm =  COMM_SON_VALUE((PPTREE)oneElem);
                                if ( comm == () ) 
                                    PutComm(COMM_FATHER_VALUE((PPTREE)oneElem), listComm);
                                else {
                                    listComm =  AddListList(listComm, comm);
                                    PutComm(COMM_FATHER_VALUE((PPTREE)oneElem), listComm);
                                }
                                vertical =  true ;
                                break ;
                            } else {
                                currElem =  son ;
                                search   =  true ;
                                break ;
                            }
                        }
                    }
                }
            }
        }
    }
    return vertical ;
}

/********************************************************************
       traiterListDeclarator : treatment for list of declarator
   *******************************************************************/
void DecompCplus::TraiterListDeclarator ( PTREE father )
{
    PTREE   tree, fatherOld ;
    PTREE   fatherFirst = father ;
    PTREE   son ;
    int     x0, y0 ;
    
    // look if it is the last of a list of declaration            
    // in this case align comments of declarations            
    if ( father != <LIST> || !IsVerticalDecl(father) ) 
        return ;
    while ( father ) {
        fatherOld =  father ;
        nextl(father);
    }
    fatherOld == <,tree>;
    father =  fatherOld ;
    
    // mark tree coordinates
    GetCoordAbs(father, (), &x0, &y0);
    MarkCoordTree(father, x0, 0);
    
    // align comments at end of declaration
    TraiterDeclAlign(fatherFirst, tree ^ , true /* declarator */ );
    
    // unmark
    UnMarkCoordTree(tree ^ );
}

/********************************************************************
       ComputeStart : compute the starting point of all declaration
   *******************************************************************/
int DecompCplus::ComputeStart ( PTREE start, PTREE end )
{
    int     x, y, dx, dy ;
    int     x0 = -1, y0 ;
    int     maxPos = 0 ;
    PTREE   son ;
    
    if ( end == start ) 
        return 0 ;
    nextl(end);
    
    // compute maximum for x
    while ( start && start != end ) {
        son =  nextl(start);
        if ( son == <DECLARATION,<>,<>,<LIST,son>> ) {
            GetCoord(son, &x, &y, &dx, &dy);
            if ( x0 < 0 ) {
                GetCoordAbs(son, (), &x0, &y0);
            }
            if ( x > maxPos && x + x0 <= MAX_REALIGN ) 
                maxPos =  x ;
        }
    }
    
    // return it (if not decl align return small impossible value)
    if ( !declAlign ) 
        return -1 ;
    else 
        return maxPos ;
}

/********************************************************************
       SetStart : set the starting point of all declaration
   *******************************************************************/
void DecompCplus::SetStart ( PTREE start, PTREE end, int pos )
{
    int     x0, y0 ;
    int     x, y, dx, dy ;
    PTREE   son, decl ;
    PTREE   list ;
    int     delta ;
    PTREE   listAttr ;
    char    string [10];
    int     first = 1 ;
    
    if ( end == start ) 
        return ;
    nextl(end);
    if ( !pos ) 
        return ;
    pos++ ;
    
    // set x for all nodes
    while ( start && start != end && start == <LIST> ) {
        son =  nextl(start);
        if ( son == <DECLARATION,<>,<>,<LIST,decl>> ) {
            GetCoord(decl, &x, &y, &dx, &dy);
            if ( (delta = pos - x) >= 0 ) {
                if ( first ) {
                    first =  0 ;
                    GetCoordAbs(son, (), &x0, &y0);
                    
                    // compute alignement pos
                    sprintf(string, "%d", pos + x0);
                }
                listAttr =  () * <GOTO,MakeString(string)>;
                PutAttr(decl, listAttr, PRE_ATTR, PUT_BEG);
                GetCoord(son, &x, &y, &dx, &dy);
                PutCoord(son, x, y, dx + delta, dy);
                list =  decl ^ <LIST>;
                while ( (decl = nextl(list)) ) {
                    GetCoord(decl, &x, &y, &dx, &dy);
                    PutCoord(decl, x + delta, y, dx, dy);
                }
            }
        }
    }
}

/********************************************************************
       TraiterAlignTypeDecl : alignment of type in declaration
   *******************************************************************/
void DecompCplus::TraiterAlignTypeDecl ( PTREE tree )
{
    PTREE   father = tree ^ , fatherOld ;
    PTREE   son ;
    int     x0, y0 ;
    
    // look if it is the last of a list of declaration            
    // in this case align comments of declarations            
    if ( father == <LIST> ) {
        nextl(father);
        if ( father == () || father == <LIST,son,father> && son != <DECLARATION> ) {
            
            // mark tree coordinates
            fatherOld =  father = tree ^ ;
            GetCoordAbs(father, (), &x0, &y0);
            MarkCoordTree(father, x0, 0);
            
            // search boudaries
            while ( father && father == <LIST> ) {
                if ( father != <,<DECLARATION>> ) 
                    break ;
                fatherOld =  father ;
                father    =  father ^ ;
            }
            
            // align declarations
            SetStart(fatherOld, tree ^ , ComputeStart(fatherOld, tree ^ ));
            
            // unmark
            UnMarkCoordTree(tree ^ );
        }
    }
}

/********************************************************************
       ComputeStartAff : compute the starting point of all assignment
   *******************************************************************/
int DecompCplus::ComputeStartAff ( PTREE start, PTREE end )
{
    int     x, y, dx, dy ;
    int     x0 = -1, y0 ;
    int     maxPos = 0 ;
    PTREE   son ;
    PTREE   name ;
    
    if ( end == start ) 
        return 0 ;
    nextl(end);
    
    // compute maximum for x
    while ( start && start != end ) {
        son =  nextl(start);
        if ( son == <,name> ) {
            GetCoord(name, &x, &y, &dx, &dy);
            if ( x0 < 0 ) {
                GetCoordAbs(son, (), &x0, &y0);
            }
            if ( x + dx > maxPos && x + dx + x0 <= MAX_REALIGN ) 
                maxPos =  x + dx ;
        }
    }
    
    // return it 
    return maxPos ;
}

/********************************************************************
       SetStartAff : set the starting point of all assignment
   *******************************************************************/
void DecompCplus::SetStartAff ( PTREE start, PTREE end, int pos )
{
    int     x0, y0 ;
    int     x, y, dx, dy ;
    PTREE   son, decl ;
    PTREE   list ;
    int     delta ;
    PTREE   listAttr ;
    char    string [10];
    int     first = 1 ;
    PTREE   name ;
    PTREE   assignment ;
    
    if ( end == start ) 
        return ;
    nextl(end);
    if ( !pos ) 
        return ;
    pos += 2 ;
    
    // set x for all nodes
    while ( start && start != end ) {
        son =  nextl(start);
        if ( son == <,name,assignment> ) {
            GetCoord(name, &x, &y, &dx, &dy);
            if ( (delta = pos - x - dx) >= 0 ) {
                if ( first ) {
                    first =  0 ;
                    GetCoordAbs(son, (), &x0, &y0);
                    
                    // compute alignement pos
                    sprintf(string, "%d", pos + x0);
                }
                listAttr =  () * <GOTO,MakeString(string)>;
                PutAttr(name, listAttr, POST_ATTR, PUT_END);
                GetCoord(son, &x, &y, &dx, &dy);
                PutCoord(son, x, y, dx + delta, dy);
                GetCoord(assignment, &x, &y, &dx, &dy);
                PutCoord(assignment, x + delta, y, dx, dy);
            }
        }
    }
}

/********************************************************************
       TraiterAlignAff : alignment of assignment
   *******************************************************************/
void DecompCplus::TraiterAlignAff ( PTREE tree )
{
    PTREE   father = tree ^ , fatherOld ;
    PTREE   son ;
    int     x0, y0 ;
    
    if ( !assignAlign ) 
        return ;
    
    // look if it is the last of a list of assignment           
    // in this case align comments of declarations            
    if ( father == <LIST> ) {
        bool    align = false ;
        nextl(father);
        
        // last of list
        if ( father == () ) 
            align =  true ;
        
        // last assignment 
        if ( father == <LIST,son> ) {
            switch ( son ) {
                case <AFF> : 
                case <MUL_AFF> : 
                case <DIV_AFF> : 
                case <REM_AFF> : 
                case <MIN_AFF> : 
                case <PLU_AFF> : 
                case <LSH_AFF> : 
                case <RSH_AFF> : 
                case <AND_AFF> : 
                case <OR_AFF> : 
                case <XOR_AFF> : break ;
                default : align = true ;
            }
        }
        
        // align case
        if ( align ) {
            
            // mark tree coordinates
            fatherOld =  father = tree ^ ;
            GetCoordAbs(father, (), &x0, &y0);
            MarkCoordTree(father, x0, 0);
            
            // search boudaries
            int stop = 0 ;
            while ( !stop && father && father == <LIST,son> ) {
                switch ( son ) {
                    case <AFF> : 
                    case <MUL_AFF> : 
                    case <DIV_AFF> : 
                    case <REM_AFF> : 
                    case <MIN_AFF> : 
                    case <PLU_AFF> : 
                    case <LSH_AFF> : 
                    case <RSH_AFF> : 
                    case <AND_AFF> : 
                    case <OR_AFF> : 
                    case <XOR_AFF> : 
                        fatherOld = father ;
                        father    = father ^ ;
                        break ;
                    default : 
                        stop = 1 ;
                        break ;
                }
            }
            
            // align declarations
            SetStartAff(fatherOld, tree ^ , ComputeStartAff(fatherOld, tree ^ ));
            
            // unmark
            UnMarkCoordTree(tree ^ );
        }
    }
}


