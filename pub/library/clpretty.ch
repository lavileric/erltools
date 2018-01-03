/*************************************************************************/
/*                                                                       */
/*        clpretty.ch   - Built by Eric Lavillonniere on Tandon 486 - 96 */
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
language pretty;

#include "clpretty.h"

/********************************************************************
       PutAttr : put attributes on a node
   *******************************************************************/
void clpretty::PutAttr ( PTREE tree, PTREE listAttr, int attr, int pos )
{
    
    PTREE   father = tree ^ ;       // father of tree where to put attribute
    int     rank = ranktree(tree);  // rank of tree where to put attribute
    PTREE   oldListAttr ;           // old list of attributes
    
    // if node is allready an attribute put attributes on it
    if ( tree == <ATTRIBUTS> ) 
        father =  tree ;
    
    // get old attribute
    oldListAttr =  ();
    if ( attr == POST_ATTR ) {
        father == <ATTRIBUTS,<>,<>,oldListAttr>;
    } else {
        father == <ATTRIBUTS,<>,oldListAttr>;
    }
    
    // compute new attribute
    {
        if ( oldListAttr ) {
            if ( pos == PUT_BEG ) {
                oldListAttr =  AddListList(copytree(listAttr), oldListAttr);
            } else {
                oldListAttr =  AddListList(oldListAttr, copytree(listAttr));
            }
        } else 
            oldListAttr =  copytree(listAttr);
    }
    
    // replace in tree
    if ( father == <ATTRIBUTS> ) {
        if ( attr == PRE_ATTR ) {
            father += <,<>,oldListAttr>;
        } else {
            father += <,<>,<>,oldListAttr>;
        }
    } else {
        if ( attr == PRE_ATTR ) {
            replacetree(father, rank, <ATTRIBUTS,tree,oldListAttr,()>);
        } else {
            replacetree(father, rank, <ATTRIBUTS,tree,(),oldListAttr>);
        }
    }
}

/********************************************************************
           CompleteCoordinates : put coordinates on nodes where there
                                 are none for example most of the lists
   *******************************************************************/
void clpretty::CompleteCoordinates ( PTREE currTree )
{
    
    int     x ;                      // relative x coordinate
    int     y ;                      // relative y coordinate
    int     dx ;                     // width
    int     maxDx = 0 ;              // max width
    int     posMark ;                // position of mark
    int     oldCurrMark = currMark ; // old position of mark
    int     withCoordinate ;         // indicates if tree has coordinates
    PTREE   inter ;                  // intermediate tree
    
    // special treatment for ATTRIBUTS
    if ( currTree == <ATTRIBUTS,inter> ) {
        CompleteCoordinates(inter);
        GetCoord(inter, &x, &y, &dx, &posMark);
        PutCoord(currTree, x, y, dx, posMark);
        return ;
    }
    withCoordinate =  GetCoord(currTree, &x, &y, &dx, &posMark);
    
    // if there are coordinate store mark
    if ( withCoordinate ) {
        currMark =  posMark ;
    }
    
    // treat all sons of tree
    forallsons (currTree,
        CompleteCoordinates(for_elem)
    )
    
    // if tree has not got coordinates treat it 
    if ( !withCoordinate && currTree != <TERM_TREE> ) {
        int multiLine = 0 ;
        int newLine = 0 ;
        
        // compute width of tree
        {
            
            // compute max of width for all sons
            forallsons (currTree,{
                GetCoord(for_elem, &x, &y, &dx, &posMark);
                multiLine |= y & 0x2 ;
                newLine   |= y & 0x4 ;
                if ( !dx ) {
                    if ( for_elem == <TERM_TREE> ) 
                        dx =  strlen(Value(for_elem));
                }
                if ( x + dx > maxDx ) 
                    maxDx =  x + dx ;
            })
        }
        
        // put coords on tree
        if ( newLine ) 
            multiLine =  0x2 ;
        PutCoord(currTree, 0, newLine | multiLine, maxDx, currMark);
    }
    
    // restore mark
    currMark =  oldCurrMark ;
}

/********************************************************************
           GetBoxSize : get size of a box by the sons
   *******************************************************************/
int clpretty::GetBoxSize ( PTREE box )
{
    int x, y, dx, posMark ;
    int maxDx = -10000 ;
    
    GetCoord(box, &x, &y, &dx, &posMark);
    if ( dx <= 1 ) {
        if ( box == <TERM_TREE> ) 
            return x + strlen(Value(box));
        else {
            forallsons (box,{
                dx =  GetBoxSize(for_elem);
                if ( dx > maxDx ) 
                    maxDx =  dx ;
            })
            return x + maxDx ;
        }
    } else 
        return x + dx ;
}

/********************************************************************
       TraitMark : changement des marques suite a indentation
   *******************************************************************/
void clpretty::TraitMark ( PTREE tree, int newMark )
{
    int x, y, dx, dy ;
    
    foreach ((),tree,{
        if ( GetCoord(for_elem, &x, &y, &dx, &dy) ) 
            PutCoord(for_elem, x, y, dx, newMark);
    })
}

/********************************************************************
       TraiterExp3 : traitement du ?:
   *******************************************************************/
void clpretty::TraiterExp3 ( PTREE tree, int x0 )
{
    PTREE   son1, son2, list1, list2 ;
    PTREE   refTree ;
    char    string [3];
    int     posRef, colRef, x, y, dx, dy, delta, ret, y0 ;
    PTREE   postAttribute ; // post attribute
    PTREE   preAttribute ;  // pre attribute
    int     maxDx = 0 ;     // width of node     
    
    // mark tree coordinates
    GetCoord(tree, &x, &y, &dx, &colRef);
    x0 += x ;
    if ( x0 + dx <= rightMargin ) 
        return ;
    MarkCoordTree(tree, x0, 0);
    
    // 
    tree == <,<>,son1,son2>;
    
    // compute attributes on  2nd son
    if ( colRef == markTab ) {
        posRef =  TAB_VALUE(colRef, nbTab + 1);
        sprintf(string, "%d", nbTab + 1);
    } else {
        posRef =  TAB_VALUE(colRef, 1);
        strcpy(string, "1");
    }
    preAttribute  =  () * <NEWLINE,"1"> * <TAB,MakeString(string)> * <MARK> * <STR,"   ">;
    postAttribute =  () * <NEWLINE,"1">;
    PutAttr(son1, preAttribute, PRE_ATTR, PUT_BEG);
    PutAttr(son1, postAttribute, POST_ATTR, PUT_END);
    
    // compute attributes on 3d son
    postAttribute =  () * <UNMARK>;
    PutAttr(son2, postAttribute, POST_ATTR, PUT_END);
    
    // compute new coords on 2nd son
    GetCoord(son1, &x, &y, &dx, &dy);
    GetCoordAbs(son1, (), &x0, &y0);
    delta =  posRef + 3 - x0 ;
    PutCoord(son1, x + delta, y, dx, dy);
    if ( x + delta + dx > maxDx ) 
        maxDx =  x + delta + dx ;
    TraitMark(son1, posRef);
    
    // compute new coords on 3d son
    delta =  posRef - x0 - dx ;
    GetCoord(son2, &x, &y, &dx, &dy);
    PutCoord(son2, x + delta, y, dx, dy);
    if ( x + delta + dx > maxDx ) 
        maxDx =  x + delta + dx ;
    TraitMark(son2, posRef);
    
    // compute  new coords on tree
    GetCoord(sontree(tree, 1), &x, &y, &dx, &dy);
    if ( x + dx > maxDx ) 
        maxDx =  x + dx ;
    GetCoord(tree, &x, &y, &dx, &dy);
    PutCoord(tree, x, y, maxDx, dy);
    
    // unmark 
    UnMarkCoordTree(tree);
}

/********************************************************************
       TraiterForDeclaration : traitement du for:
   *******************************************************************/
void clpretty::TraiterForDeclaration ( PTREE tree, int x0 )
{
    PTREE   son0, son1, son2 ;
    PTREE   listAttrib ;
    int     delta = 0 ;
    int     x, y, dx, colRef, colRefOrg ;
    int     aTreatment = 0 ;
    
    // mark tree coordinates
    GetCoord(tree, &x, &y, &dx, &colRefOrg);
    x0 += x ;
    if ( x0 + dx <= rightMargin ) 
        return ;
    MarkCoordTree(tree, x0, 0);
    
    // 
    tree == <,son0,son1,son2>;
    
    // first son 
    {
        GetCoord(son1, &x, &y, &dx, &colRef);
        colRef =  TAB_VALUE(colRef, 1);
        if ( x0 + x + dx >= rightMargin && (delta = colRef - x0 - x) < 0 ) {
            listAttrib =  () * <NEWLINE,"1"> * <TAB,"1"> * <MARK>;
            PutAttr(son1, listAttrib, PRE_ATTR, PUT_BEG);
            listAttrib =  () * <UNMARK>;
            PutAttr(son1, listAttrib, POST_ATTR, PUT_END);
            PutCoord(son1, x + delta, y, dx, colRef);
            TraitMark(son1, colRef);
            aTreatment =  1 ;
        }
    }
    
    // second son 
    if (son2 != ()) {
        GetCoord(son2, &x, &y, &dx, &colRef);
        colRef =  TAB_VALUE(colRef, 1);
        if ( x0 + x + dx >= rightMargin && (delta = colRef - x0 - x) < 0 || aTreatment ) {
            listAttrib =  () * <NEWLINE,"1"> * <TAB,"1"> * <MARK>;
            PutAttr(son2, listAttrib, PRE_ATTR, PUT_BEG);
            listAttrib =  () * <UNMARK>;
            PutAttr(son2, listAttrib, POST_ATTR, PUT_END);
            TraitMark(son2, colRef);
            aTreatment =  1 ;
        }
        PutCoord(son2, x + delta, y, dx, colRef);
    }
    
    // prepare indentation of first son
    if ( aTreatment ) {
        char    string [10];
        GetCoord(son0, &x, &y, &dx, &colRefOrg);
        sprintf(string, "%d", colRefOrg);
        listAttrib =  () * <TAB_VIRT,MakeString(string),"1">;
        PutAttr(son0, listAttrib, PRE_ATTR, PUT_BEG);
    }
    
    // unmark 
    UnMarkCoordTree(tree);
}

/*********************************************************************
       AddTree : add a tree to the array
   *******************************************************************/
void clpretty::AddTree ( PTREE tree, int delta )
{
    
    // allocates enough space
    if ( currTabTree >= sizeTabTree ) {
        if ( sizeTabTree && (tabTree = (PPTREE_DELTA)realloc(tabTree, sizeof(TREE_DELTA) * (sizeTabTree + 10)))
                || (tabTree = (PPTREE_DELTA)malloc(sizeof(TREE_DELTA) * 10)) ) 
            sizeTabTree += 10 ;
    }
    
    // if tree is allready here change it
    for ( int i = 0 ; i < currTabTree ; i++ ) 
        if ( tabTree [i].tree == tree ) {
            tabTree [i].delta =  delta ;
            return ;
        }
    
    // put tree
    if ( currTabTree < sizeTabTree ) {
        tabTree [currTabTree].tree  =  tree ;
        tabTree [currTabTree].delta =  delta ;
        currTabTree++ ;
    }
}

/*********************************************************************
       FindDelta : find delta of a tree in array
   *******************************************************************/
int clpretty::FindDelta ( PTREE tree )
{
    
    // search a father of tree in array
    // if found it return the delta
    tree =  fathertree(tree);
    
    int i ;
    
    while ( tree ) {
        for ( i = 0 ; i < currTabTree ; i++ ) 
            if ( tabTree [i].tree == tree ) 
                return tabTree [i].delta ;
        tree =  fathertree(tree);
    }
    
    // if nothing is found return 0
    return 0 ;
}

/********************************************************************
       TraiterExpList : traitement des EXP_SEQ
   *******************************************************************/
void clpretty::TraiterExpList ( PTREE tree, int x0, int valTab, int inParam )
{
    PTREE   list, inter ;
    PTREE   postAttribute ;          // post attribute
    int     y0 ;
    int     x, y, dx, dy ;
    int     xRef ;
    int     posMark ;
    PTREE   listElem ;               // the list of elem to be indented
    PTREE   currElem ;               // current elem of list
    PTREE   refTree ;                // the first elem of list
    PTREE   lastTree ;               // last treated element of list
    int     posRef ;                 // ref column where we go 
                                     // if we put a carriage return
    int     colRef ;                 // beginning column of first elem
    PTREE   father ;                 // father of tree to be replaced
    int     rank ;                   // rank of tree to be replaced
    int     hasIndented = 0 ;        // indicates if we have allready 
                                     // indented something
    int     deltaInhibitIndent = 0 ; // first indentation inhibited because
                                     // delta was too small
    int     delta = 0 ;              // current delta resulting from
                                     // last indentation
    int     deltaRef = 0 ;           // delta which would result 
    
    // if we put a newline after current elem
    int     ret = 1 ;                // return value
    int     oldNbTab = nbTab ;       // keep nbTab
    int     rightX = 0 ;             // right position of box
    PTREE   hasToPutVirt = ();
    
    // mark tree coordinates
    GetCoord(tree, &x, &y, &dx, &y);
    x0 += x ;
    if ( x0 + dx <= rightMargin ) 
        return ;
    MarkCoordTree(tree, x0, 0);
    
    // we are either on the list or a node containing a list
    // get first elem of list knowing this
    if ( tree != <LIST> ) {
        tree == <,listElem =  <,refTree>>;
    } else {
        tree == <,refTree>;
        listElem =  tree ;
    }
    if ( listElem != <LIST> ) 
        return ;
    
    // get coords of first elem and use them to compute
    // the indentation position posRef
    GetCoord(refTree, &x, &y, &dx, &colRef);
    //if there has been a mark, since we put marktab we don't
    //have to put extra tabs
    if ( colRef != markTab ) 
        nbTab =  0 ;
    nbTab  += valTab ;
    posRef =  TAB_VALUE(colRef, nbTab);
    delta  =  0 ;
    
    // treat each elem of list
    while ( listElem ) {
        currElem =  nextl(listElem);
        GetCoordAbs(currElem, (), &x0, &y0);
        GetCoord(currElem, &x, &y, &dx, &dy);
        
        // if x0  <= rightX there has been a NewLine ( a comment)
        // delta must be recomputed
        if ( x0 <= rightX ) {
            delta =  0 ;
        }
        rightX =  x0 + dx ;
        
        // if first is too big remember that we will have to 
        // put a double indentation
        if ( !lastTree && x0 + dx + delta > rightMargin ) {
            if ( inParam && x0 + dx > posRef ) {
                
                // put attr
                postAttribute =  () * <NEWLINE,"1">;
                {
                    char    string [10];
                    sprintf(string, "%d", nbTab);
                    postAttribute *= <TAB,MakeString(string)> * <MARK>;
                }
                hasIndented =  1 ;
                PutAttr(currElem, postAttribute, PRE_ATTR, PUT_BEG);
                
                // update coords
                // correction EL le 11/05/96
#               if 0
                    delta =  posRef - x0 - dx ;
#               else 
                    delta =  posRef - x0 ;
#               endif
                PutCoord(currElem, x + delta, y, dx, dy);
                
                // treat mark
                TraitMark(currElem, posRef);
            } else 
                hasToPutVirt =  currElem ;
        }
        
        // if elem is too big and if it is not the first elem of list
        // we can put a newline on preceding element
        if ( x0 + dx + delta > rightMargin && lastTree ) {
            
            // on fait la transformation que si on gagne   
            // en position : ce n'est pas le cas avec   
            // un premier element de 1 caractere   
            if ( deltaRef < 0 ) {
                
                // put attr
                postAttribute =  () * <NEWLINE,"1">;
                if ( !hasIndented ) {
                    {
                        char    string [10];
                        sprintf(string, "%d", nbTab);
                        postAttribute *= <TAB,MakeString(string)> * <MARK>;
                    }
                    hasIndented =  1 ;
                }
                PutAttr(lastTree, postAttribute, POST_ATTR, PUT_END);
                
                // update coords
                delta =  deltaRef ;
                PutCoord(currElem, x + delta, y, dx, dy);
                
                // treat mark
                TraitMark(currElem, posRef);
            } else {
                deltaInhibitIndent =  1 ;
                
                // treat mark
                TraitMark(currElem, colRef);
            }
        } else if ( hasIndented ) {
            
            // put new coord
            PutCoord(currElem, x + delta, y, dx, dy);
            
            // treat mark
            TraitMark(currElem, posRef);
        } else if ( deltaInhibitIndent ) {
            
            // treat mark
            TraitMark(currElem, colRef);
        }
        
        // if box is more than one line high there are newline inside it
        // indentation will do nothing
        //        if ( y & 0x2 ) {
        //            delta = deltaRef = posRef - colRef ;
        //        } else 
        deltaRef =  posRef - x0 - dx ;
        lastTree =  currElem ;
    }
    
    // if we have indented anything we must unmark after the last
    // elem of the list
    if ( hasIndented ) {
        list =  () * <UNMARK>;
        PutAttr(lastTree, list, POST_ATTR, PUT_END);
    }
    
    // if we have indented and if it is necessary put a TAB_VIRT
    if ( hasIndented && hasToPutVirt ) {
        char    string [10];
        sprintf(string, "%d", colRef);
        list =  () * <TAB_VIRT,MakeString(string),"1">;
        PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
    }
    
    // update list
    listElem =  tree ;
    if ( tree != <LIST> ) 
        tree == <,listElem>;
    UpdateSize(listElem, OpType(listElem));
    
    // udpate coordinates on top tree
    if ( tree != <LIST> ) {
        int yy ;
        GetCoord(tree, &xRef, &yy, &dx, &posMark);
        GetCoord(sontree(tree, 1), &x, &y, &dx, &posMark);
        
        // if not multiline box update now
        if ( !(yy & 0x2) ) 
            PutCoord(tree, xRef, y, x + dx, posMark);
    }
    
    // unmark 
    UnMarkCoordTree(tree);
    nbTab =  oldNbTab ;
}

/********************************************************************
       TraiterMonoParam : function call with only one param
   *******************************************************************/
void clpretty::TraiterMonoParam ( PTREE tree, int x0 )
{
    PTREE   list, inter ;
    PTREE   postAttribute ;          // post attribute
    int     y0 ;
    int     x, y, dx ;
    int     xRef ;
    int     posMark ;
    PTREE   listElem ;               // the list of elem to be indented
    PTREE   refTree ;                // the first elem of list
    PTREE   lastTree ;               // last treated element of list
    int     posRef ;                 // ref column where we go 
                                     // if we put a carriage return
    int     colRef ;                 // beginning column of first elem
    PTREE   father ;                 // father of tree to be replaced
    int     rank ;                   // rank of tree to be replaced
    int     hasIndented = 0 ;        // indicates if we have allready 
                                     // indented something
    int     deltaInhibitIndent = 0 ; // first indentation inhibited because
                                     // delta was too small
    int     delta ;                  // current delta resulting from
                                     // last indentation
    int     deltaRef ;               // delta which would result 
                                     // if we put a newline after current elem
    int     ret = 1 ;                // return value
    int     oldNbTab = nbTab ;       // keep nbTab
    int     rightX = 0 ;             // right position of box
    PTREE   hasToPutVirt = ();
    
    // mark tree coordinates
    GetCoord(tree, &x, &y, &dx, &colRef);
    x0 += x ;
    if ( x0 + dx <= rightMargin ) 
        return ;
    //if there has been a mark, since we put marktab we don't
    //have to put extra tabs
    nbTab =  1 ;
    if ( colRef != markTab ) 
        nbTab =  0 ;
    nbTab  += 1 ;
    posRef =  TAB_VALUE(colRef, nbTab);
    delta  =  0 ;
    {
        
        // put attr
        postAttribute =  () * <NEWLINE,"1">;
        {
            char    string [10];
            sprintf(string, "%d", nbTab);
            postAttribute *= <TAB,MakeString(string)> * <MARK>;
        }
        hasIndented =  1 ;
        PutAttr(tree, postAttribute, PRE_ATTR, PUT_BEG);
        
        // update coords
        delta =  posRef - x0 ;
        PutCoord(tree, x + delta, y, dx, colRef);
        
        // treat mark
        TraitMark(tree, posRef);
    }
    list =  () * <UNMARK>;
    PutAttr(tree, list, POST_ATTR, PUT_END);
    nbTab =  oldNbTab ;
}

// TraiterExpListParam : the same as TraiterExpList except
// that if necessary we put a newLine before first elem
void clpretty::TraiterExpListParam ( PTREE tree, int x0 )
{
    TraiterExpList(tree, x0, 1, 1);
}

/********************************************************************
       Treat : treatment of geometry
   *******************************************************************/
void clpretty::Treat ( PTREE tree )
{
    int     oldNbTab = nbTab ;
    int     x, y, dx, dy ;
    int     x0, y0 ;
    PTREE   content ;
    
    // prepare the geometries on node
    DecompVirt(tree);
    CompleteCoordinates(tree);
    if ( tree == <ATTRIBUTS> ) 
        FreeCoord(tree);
    
    // treat geometries
    nbTab =  0 ;
    if ( tree ^ ) {
        GetCoord(tree, &x, &y, &dx, &dy);
        TreatGeometry(tree, -x + 3);
    } else 
        TreatGeometry(tree, 0);
    
    // end
    nbTab =  oldNbTab ;
}

/********************************************************************
           TraiterGeometrie : positionne les geometries a partir
           d'un noeud jusqu'a  un noeud donne
   *******************************************************************/
void clpretty::TreatGeometryDepth ( PTREE tree, int x0, unsigned int depth )
{
    int     x, y, dx, posMark ;
    int     xRef, yRef, dxRef, posMarkRef ;
    int     success = 0 ; // did we success in framing the node
    PTREE   preAttribute ;
    PTREE   elem ;
    PTREE   list ;
    PTREE   tree1, tree2 ;
    
    // check depth
    if ( depth > 1024 ) 
        return ;
    depth += 1 ;
    
    // get coordinates of tree
    if ( GetCoordOrg(tree, &x, &y, &dx, &posMark) ) {
        
        // if tree is too big try to shorten it 
        if ( x0 + x + dx > rightMargin ) {
            
            // if the node is one we can shorten do it
            // y == 0 if node is not allready treated and one line box
            // y == 0x1 if treated y== 0x2 if multiline
            if ( !(y & 0x1) ) {
                switch ( OpTypeAlign(tree) ) {
                    case H_ALIGN : 
                        TraiterExp2H(tree, x0);
                        break ;
                    case V_ALIGN : 
                        TraiterExp2V(tree, x0);
                        break ;
                    case COND_ALIGN : 
                        TraiterExp3(tree, x0);
                        break ;
                    case LIST_ALIGN : 
                        TraiterExpList(tree, x0);
                        break ;
                }
            }
            
            // if specific treatement maybe we have to recompute whole
            // size
            if ( TreatGeometrySpecific(tree, x0, x) ) {
                int maxDx = 0 ;
                GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
                forallsons (tree,{
                    elem =  for_elem ;
                    dx   =  GetBoxSize(elem);
                    if ( dx > maxDx ) 
                        maxDx =  dx ;
                })
                PutCoord(tree, xRef, yRef |= 1, maxDx, posMarkRef);
            }
            
            // if tree is still to large, try to shorten all the sons
            if ( treearity(tree) > 0 ) {
                GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
                if ( x0 + xRef + dxRef > rightMargin ) {
                    int maxDx = 0 ;
                    forallsons (tree,{
                        elem =  for_elem ;
                        TreatGeometryDepth(elem, x0 + xRef, depth);
                        dx =  GetBoxSize(elem);
                        if ( dx > maxDx ) 
                            maxDx =  dx ;
                    })
                    PutCoord(tree, xRef, yRef |= 1, maxDx, posMarkRef);
                }
            }
            
            // if still no success try to put at column 0
            GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
            if ( x0 + xRef + dxRef > rightMargin ) {
                if ( IsTop(tree) != -1 && x0 + xRef > 3 ) {
                    
                    // destroy all old attributs and coords
                    CleanAttributs(tree);
                    
                    // decomp at column 0
                    list =  () * <GOTO,"3"> * <MARK>;
                    PutAttr(tree, list, PRE_ATTR, PUT_END);
                    list =  () * <UNMARK>;
                    PutAttr(tree, list, POST_ATTR, PUT_END);
                    
                    // sizing of tree
                    Treat(tree ^ );
                    
                    // since it is put at zero don't take it's size any longer
                    GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
                    PutCoord(tree, xRef, yRef, 3, posMarkRef);
                }
            }
        }
    } else if ( tree == <ATTRIBUTS,tree,preAttribute> ) {
        int     gotTabVirt = 0 ;
        int     oldNbTab = nbTab ;
        int     oldMarkTab = markTab ;
        PTREE   elem ;
        while ( (elem = nextl(preAttribute)) ) {
            switch ( elem ) {
                case <TAB_VIRT,tree1,tree2> : 
                    gotTabVirt = 1 ;
                    break ;
            }
        }
        if ( gotTabVirt ) {
            GetCoord(tree, &x, &y, &dx, &posMark);
            markTab =  atoi(Value(tree1));
            if ( oldMarkTab == -1 || posMark == oldMarkTab ) 
                nbTab += atoi(Value(tree2));
            else 
                nbTab =  1 ;
        }
        TreatGeometry(tree, x0);
        
        // restore nbTab;
        nbTab   =  oldNbTab ;
        markTab =  oldMarkTab ;
    }
}

/********************************************************************
       UpdateSize : update sizes following treatment
   *******************************************************************/
void clpretty::UpdateSize ( PTREE tree, int type )
{
    int x, y, dx, dy ;
    int maxDx ;
    int xRef, yRef, dxRef, dyRef ;
    
    if ( OpType(tree) == type ) {
        
        // update sons
        UpdateSize(SonTreeAttr(tree, 1), type);
        UpdateSize(SonTreeAttr(tree, 2), type);
        
        // get max
        GetCoord(sontree(tree, 1), &x, &y, &dx, &dy);
        maxDx =  x + dx ;
        GetCoord(sontree(tree, 2), &x, &y, &dx, &dy);
        if ( x + dx > maxDx ) 
            maxDx =  x + dx ;
        
        // update node
        GetCoord(tree, &x, &y, &dx, &dy);
        PutCoord(tree, x, y | 1, maxDx, dy);
    }
}

/********************************************************************
       traiterExp2H : traitement des expressions d'arite 2
             de type +
   *******************************************************************/
void clpretty::TraiterExp2H ( PTREE tree, int x0 )
{
    
    int     y0 ;                // absolute y0
    int     x ;                 // relative x
    int     y ;                 // relative y
    int     dx ;                // width
    int     lastMark ;          // column of last mark
    int     deltaRef ;          // x delta if we indented after last tree
    int     delta ;             // x delta due to last indentation
    PTREE   lastTree ;          // last tree treated
    PTREE   attributeList ;     // list of attribute to be put on node
    PTREE   father ;            // father of tree where to put attribute
    PTREE   treeWithAttribute ; // tree with attributes added
    int     posTree ;           // pos of tree where attribute are put
    PTREE   preAttribute ;      // attributes to be put in front of node
    PTREE   postAttribute ;     // attributes to be put after node
    PTREE   firstElem = ();     // first element
    int     hasIndented = 0 ;   // indicates if we have indented any node
    int     priority ;          // priority of top node 
    int     nPriority ;         // priority of current node
    int     posRef ;            // position used as indentation column
    int     colRef ;            // initial position of mark
    int     ret = 1 ;           // ret value
    int     maxDx = 0 ;         // max width    
    PTREE   list ;              // a list
    int     oldNbTab = nbTab ;  // old nbTab
    PTREE   hasToPutVirt = ();  // must put a tab virt
    int     deltaLoc ;          // local delta
    PTREE   inter ;             // intermediate tree    
    
    // mark tree coordinates
    GetCoord(tree, &x, &y, &dx, &colRef);
    x0 += x ;
    MarkCoordTree(tree, x0, 0);
    
    // compute priority of top node and indent column
    priority =  OpType(tree);
    if ( colRef != markTab ) 
        nbTab =  0 ;
    posRef      =  TAB_VALUE(colRef, nbTab + 1);
    deltaRef    =  delta = 0 ;
    currTabTree =  0 ;
    
    // add top
    AddTree(tree, 0);
    
    // indent everything
    foreach ((),tree,{
        nPriority =  OpType(for_elem);
        GetCoord(for_elem, &x, &y, &dx, &lastMark);
        if ( nPriority != priority ) {
            GetCoordAbs(for_elem, (), &x0, &y0);
            
            // if first is too big remember that we will have to 
            // put a double indentation
            if ( (!lastTree || deltaRef >= 0) && x0 + dx + delta > rightMargin ) {
                if ( !hasToPutVirt ) {
                    hasToPutVirt =  for_elem ;
                    lastTree     =  for_elem ;
                } else {
                    char    string [10];
                    sprintf(string, "%d", colRef);
                    list =  () * <TAB_VIRT,MakeString(string),"1">;
                    PutAttr(for_elem, list, PRE_ATTR, PUT_END);
                    lastTree =  for_elem ;
                    for_elem =  for_elem ^ ;
                }
            } else {
                
                // if element is after right margin if it is not the
                // first element encountered
                if ( x0 + dx + delta > rightMargin && lastTree && deltaRef < -1 ) {
                    
                    // put attr
                    attributeList =  () * <NEWLINE,"1">;
                    if ( !hasIndented ) {
                        {
                            char    string [3];
                            sprintf(string, "%d", nbTab + 1);
                            attributeList *= <TAB,MakeString(string)> * <MARK>;
                        }
                        hasIndented =  1 ;
                    }
                    PutAttr(lastTree, attributeList, POST_ATTR, PUT_END);
                    
                    // update coords of trees from lastTree to for_elem
                    delta =  deltaRef ;
                    inter =  SNextTree(lastTree, ());
                    while ( 1 ) {
                        father =  inter ^ ;
                        while ( inter && father == <ATTRIBUTS> && ranktree(inter) != 1 ) {
                            inter  =  SNextTree(father, ());
                            father =  inter ^ ;
                        }
                        if ( inter != (PTREE)for_elem ) 
                            AddTree(inter, delta);
                        else {
                            deltaLoc =  delta - FindDelta(inter);
                            PutCoord(inter, x + deltaLoc, y, dx, lastMark);
                            break ;
                        }
                        inter =  NextTree(inter, ());
                    }
                    
                    // treat mark
                    TraitMark(for_elem, posRef);
                } else if ( hasIndented ) {
                    
                    // modify following pos
                    deltaLoc =  delta - FindDelta(for_elem);
                    PutCoord(for_elem, x + deltaLoc, y, dx, lastMark);
                    
                    // treat mark
                    TraitMark(for_elem, posRef);
                }
                lastTree =  for_elem ;
            }
            
            // if box is more than one line high there are newline inside it
            // indentation will do nothing
            if ( y & 0x2 ) {
                delta =  deltaRef = posRef - colRef ;
            } else 
                deltaRef =  posRef - x0 - dx ;
            
            // continue
            goto for_continue ;
        } else if ( hasIndented ) {
            AddTree(for_elem, delta);
        }
    })
    
    // if we put a mark we must unmark
    if ( hasIndented ) {
        list =  () * <UNMARK>;
        PutAttr(lastTree, list, POST_ATTR, PUT_BEG);
    }
    
    // if we have indented and if it is necessary put a TAB_VIRT
    if ( hasIndented && hasToPutVirt ) {
        char    string [10];
        sprintf(string, "%d", colRef);
        list =  () * <TAB_VIRT,MakeString(string),"1">;
        PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
    }
    
    // take into account the delta stored on intermediate nodes
    for ( int nbNode = 0 ; nbNode < currTabTree ; nbNode++ ) {
        GetCoord(tabTree [nbNode].tree, &x, &y, &dx, &lastMark);
        deltaLoc =  tabTree [nbNode].delta - FindDelta(tabTree [nbNode].tree);
        PutCoord(tabTree [nbNode].tree, x + deltaLoc, y, dx, lastMark);
    }
    
    // update main nodes
    UpdateSize(tree, OpType(tree));
    
    // unmark
    UnMarkCoordTree(tree);
    nbTab =  oldNbTab ;
}

/********************************************************************
       traiterExp2V : traitement des expressions d'arite 2
             de type && et ||
   *******************************************************************/
void clpretty::TraiterExp2V ( PTREE tree, int x0 )
{
    
    int     y0 ;                // absolute y0
    int     x ;                 // relative x
    int     y ;                 // relative y
    int     dx ;                // width
    int     lastMark ;          // column of last mark
    int     deltaRef ;          // x delta if we indented after last tree
    int     delta ;             // x delta due to last indentation
    PTREE   lastTree ;          // last tree treated
    PTREE   attributeList ;     // list of attribute to be put on node
    PTREE   father ;            // father of tree where to put attribute
    PTREE   treeWithAttribute ; // tree with attributes added
    int     posTree ;           // pos of tree where attribute are put
    PTREE   preAttribute ;      // attributes to be put in front of node
    PTREE   postAttribute ;     // attributes to be put after node
    PTREE   firstElem = ();     // first element
    int     hasIndented = 0 ;   // indicates if we have indented any node
    int     priority ;          // priority of top node 
    int     nPriority ;         // priority of current node
    int     posRef ;            // position used as indentation column
    int     colRef ;            // initial position of mark
    int     ret = 1 ;           // ret value
    PTREE   list ;              // a list    
    PTREE   hasToPutVirt ;      // has to put a TAB VIRT    
    int     oldNbTab = nbTab ;  // old value of nbTab
    int     deltaLoc ;          // local delta
    PTREE   inter ;             // intermediate tree    
    
    // mark tree coordinates
    GetCoord(tree, &x, &y, &dx, &colRef);
    x0 += x ;
    MarkCoordTree(tree, x0, 0);
    colRef =  x0 ;
    
    // put attributes
    list   =  () * <MARK>;
    PutAttr(tree, list, PRE_ATTR, PUT_END);
    list =  () * <UNMARK>;
    PutAttr(tree, list, POST_ATTR, PUT_BEG);
    TraitMark(tree, colRef);
    
    // compute priority of top node and indent column
    priority =  OpType(tree);
    if ( markTab != colRef ) 
        nbTab =  0 ;
    posRef   =  TAB_VALUE(x0, nbTab + 1);
    deltaRef =  delta = 0 ;
    
    // indent everything
    AddTree(tree, 0);
    foreach ((),tree,{
        
        // treatment
        nPriority =  OpType(for_elem);
        GetCoord(for_elem, &x, &y, &dx, &lastMark);
        if ( nPriority != priority ) {
            GetCoordAbs(for_elem, (), &x0, &y0);
            
            // if first is too big remember that we will have to 
            // put a double indentation
            if ( !lastTree || deltaRef >= 0 ) {
                if ( !hasToPutVirt ) {
                    hasToPutVirt =  for_elem ;
                    lastTree     =  for_elem ;
                } else {
                    char    string [10];
                    sprintf(string, "%d", colRef);
                    list =  () * <TAB_VIRT,MakeString(string),"1">;
                    PutAttr(for_elem, list, PRE_ATTR, PUT_END);
                    lastTree =  for_elem ;
                    for_elem =  for_elem ^ ;
                }
            } else {
                
                // if element is not the first element encountered
                if ( lastTree && deltaRef < -1 ) {
                    
                    // if element is not allready indented
                    if ( lastTree != <ATTRIBUTS> ) {
                        
                        // put attr
                        attributeList =  () * <NEWLINE,"1">;
                        if ( !hasIndented ) {
                            char    string [10];
                            sprintf(string, "%d", nbTab + 1);
                            attributeList *= <TAB,MakeString(string)> * <MARK>;
                            hasIndented   =  1 ;
                        }
                        PutAttr(lastTree, attributeList, POST_ATTR, PUT_END);
                        
                        // update coords of trees from lastTree to for_elem
                        delta =  deltaRef ;
                        inter =  SNextTree(lastTree, ());
                        while ( 1 ) {
                            father =  inter ^ ;
                            while ( inter && father == <ATTRIBUTS> && ranktree(inter) != 1 ) {
                                inter  =  SNextTree(father, ());
                                father =  inter ^ ;
                            }
                            if ( inter != (PTREE)for_elem ) 
                                AddTree(inter, delta);
                            else {
                                deltaLoc =  delta - FindDelta(inter);
                                PutCoord(inter, x + deltaLoc, y, dx, lastMark);
                                break ;
                            }
                            inter =  NextTree(inter, ());
                        }
                        
                        // update mark
                        TraitMark(for_elem, posRef);
                    }
                } else if ( hasIndented ) {
                    
                    // modify following pos
                    deltaLoc =  delta - FindDelta(for_elem);
                    PutCoord(for_elem, x + deltaLoc, y, dx, lastMark);
                    
                    // update mark
                    TraitMark(for_elem, posRef);
                }
                lastTree =  for_elem ;
            }
            
            // if box is more than one line high there are newline inside it
            // indentation will do nothing
            if ( y & 0x2 ) {
                delta =  deltaRef = posRef - colRef ;
            } else 
                deltaRef =  posRef - x0 - dx ;
            
            // continue
            goto for_continue ;
        } else if ( hasIndented ) {
            AddTree(for_elem, delta);
        }
    })
    
    // if we put a mark we must unmark
    if ( hasIndented ) {
        list =  () * <UNMARK>;
        PutAttr(lastTree, list, POST_ATTR, PUT_BEG);
    }
    
    // if we have indented and if it is necessary put a TAB_VIRT
    if ( hasIndented && hasToPutVirt ) {
        char    string [10];
        sprintf(string, "%d", colRef);
        list =  () * <TAB_VIRT,MakeString(string),"1">;
        PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
    }
    
    // take into account the delta stored on intermediate nodes
    for ( int nbNode = 0 ; nbNode < currTabTree ; nbNode++ ) {
        GetCoord(tabTree [nbNode].tree, &x, &y, &dx, &lastMark);
        deltaLoc =  tabTree [nbNode].delta - FindDelta(tabTree [nbNode].tree);
        PutCoord(tabTree [nbNode].tree, x + deltaLoc, y, dx, lastMark);
    }
    
    // update main nodes
    UpdateSize(tree, OpType(tree));
    
    // unmark tree
    UnMarkCoordTree(tree);
    nbTab =  oldNbTab ;
}

static  inline void LNewLineOrg ( int i )
{
    LNewLine(i);
}

void clpretty::LNewLine ( int i )
{
    if ( currCol > maxX ) 
        maxX =  currCol ;
    LNewLineOrg(i);
}

/******************************************************************
       mise a jour des coordonnees d'un arbre
   *******************************************************************/
void clpretty::DecompVirt ( const PTREE &paramTree )
{
    int x0, y0, x, y, dx, dy ;
    
    GetCoord(paramTree, &x, &y, &dx, &dy);
    GetCoordAbs(paramTree, 0, &x0, &y0);
    
    PTREE   father ;
    
    father =  paramTree ^ ;
    while ( father == <ATTRIBUTS> ) 
        father =  father ^ ;
    GetCoordAbs(father, 0, &xFather, &yFather);
    isVirtMod =  1 ;
    GotoCol(dy + 1);
    
    /* dy+1 car gotocol soustrait 1 */
    Mark();
    currCol  =  x0 ;
    currLine =  y0 ;
    maxX     =  0 ;
    Decomp(paramTree);
    UnMark();
    isVirtMod =  0 ;
    currLine  =  currCol = 0 ;
}

void clpretty::TraitAttribut ( PTREE tree )
{
    PTREE   son ;
    int     i ;
    
    switch ( tree ) {
        case <NEWLINE,son> : 
            LNewLine(atoi(value(son)));
            break ;
        case <TAB,son> : 
            i = atoi(value(son));
            while ( i-- > 0 ) 
                    <T> 
            break ;
        case <STR,son> : 
            value(son)
            break ;
        case <MARK> : 
            Mark();
            break ;
        case <UNMARK> : 
            UnMark();
            break ;
        case <GOTO,son> : 
            GotoCol(atoi(value(son)));
            break ;
    }
}

/*********************************************************************
       DecompList : decompilation of lists
   *********************************************************************/
void clpretty::DecompList ( PTREE list, const char *sep, const char *term, int nbNl )
{
    PTREE   elem ;
    int     nbNewLine ;
    
    while ( list == <LIST> ) {
        if ( (elem = list.Nextl()) ) 
            Decomp(elem);
        if ( list ) {
            if ( sep ) 
                PrintString(sep) 
            if ( (nbNewLine = nbNl) ) 
                LNewLine(nbNewLine);
        }
    }
    if ( term ) 
        PrintString(term) 
}

/******************************************************************
       commAtBeginning : search if comment is at beginning
   *******************************************************************/
int clpretty::commAtBeginning ( PTREE tree )
{
    PTREE   father ;
    
    if ( (tree ^ ) == <ATTRIBUTS> ) 
        father =  tree ^ 2 ;
    else 
        father =  tree ^ ;
    if ( father == () ) 
        return 1 ;
    if ( father == <LIST> ) {
        father =  father ^ 2 ;
        if ( father == () ) {
            return 1 ;
        }
    }
    return 0 ;
}

/******************************************************************
       comm :: comment display
   *******************************************************************/
int clpretty::comm ( PTREE paramTree, int type )
{
    char        *comment ;
    PTREE       father ;
    const char  *intStartComment, *intMiddleComment, *intEndComment, *intPlusComment ;
    
    intStartComment  =  startComment ? startComment : "/*";
    intMiddleComment =  middleComment ? middleComment : "  ";
    intEndComment    =  endComment ? endComment : "*/";
    intPlusComment   =  plusComment ? plusComment : "//";
    if ( paramTree == () || inhibateComment ) 
        return 0 ;
    if ( type == PRE && (comment = IsComm(paramTree, PRE)) ) {
        PTREE   inter = (PTREE)0 ;
        int     beginning = Beginning();
        if ( !commAtBeginning(paramTree) ) {
            
            // if the prefix comment is at beginning of line    
            // put a NL ( not in middle of text ) if    
            // the first character of comment is space    
            if ( beginning ) {
                if ( *comment == *(intPlusComment + 1) && *(comment + 1) == ' ' ) 
                    LNewLine(2);
                else if ( *comment == ' ' ) 
                    LNewLine(2);
                else 
                    <NL>
            } else 
                <S> 
        }
        do {
            if ( inter ) 
                comment =  BrainyValue(inter);
            {{
                if ( *comment == *(intPlusComment + 1) ) 
                    inter =  PrintCommE(paramTree, PRE, inter, intPlusComment + 1, intPlusComment + 1, "");
                else 
                    inter =  PrintCommE(paramTree, PRE, inter, intMiddleComment, intStartComment, intEndComment);
            }}
            
            // idem    
            if ( beginning || *comment == *(intPlusComment + 1) ) {
                <NL>
            } else 
                <S> 
        } while ( inter );
        return 1 ;
    } else if ( type == POST && (comment = IsComm(paramTree, POST)) && paramTree != postInhibitor ) {
        PTREE   inter = (PTREE)0 ;
        {{
            do {
                if ( inter ) 
                    comment =  BrainyValue(inter);
                <S,1> {{
                        if ( *comment == *(intPlusComment + 1) ) 
                            inter =  PrintCommE(paramTree, POST, inter, intPlusComment + 1, intPlusComment + 1, "");
                        else 
                            inter =  PrintCommE(paramTree, POST, inter, intMiddleComment, intStartComment, intEndComment);
                      }}
                if ( PrePost() && inter || *comment == *(intPlusComment + 1) ) {
                    <NL>
                } else 
                    <S> 
            } while ( inter );
        }}
        return 1 ;
    }
    return 0 ;
}

/******************************************************************
       decomp : tree unparsing
   *******************************************************************/
void clpretty::Decomp ( const PTREE &paramTree, int funcAlone )
{
    PTREE   exp, stat, name ;
    int     oldXFather = xFather, oldYFather = yFather ;
    int     oldMaxX = maxX ;
    int     begCurrCol = currCol, begCurrLine = currLine ;
    int     theMark = GetMark();
    int     startNewLine ; // whether we progressed of one line
                           // since last call to Decomp
    
    startNewLine =  lastLineOn == currLine ? 0 : (lastLineOn = currLine, 0x4);
    if ( paramTree == () ) 
        return ;
    
    /* les variables dynamiques xFather et yFather designe les
       coordonnees du pere */
    if ( isVirtMod && paramTree != <ATTRIBUTS> ) {
        xFather =  currCol, yFather =  currLine ;
        maxX =  currCol ;
    }
    {
        int commPre = 0 ;
        
        // protect a comment in the middle of a line with //
        // it will produce a newline. We want to put the commented part
        // under it
        if ( !Beginning() && (commPre = (int)(long)IsComm(paramTree, PRE)) ) {
            Mark();
            
            // since we have put a mark comm will think that we are at the
            // beginning of the line and will put a newline,
            // prevent this
            currCol++ ;
            comm(paramTree, PRE);
        } else 
            comm(paramTree, PRE);
        IntDecomp(paramTree, funcAlone);
        comm(paramTree, POST);
        if ( commPre ) {
            UnMark(); // <NL>
        }
    }
    if ( isVirtMod && paramTree != <ATTRIBUTS> ) {
        xFather =  oldXFather, yFather =  oldYFather ;
        
        // perhaps we didn't got a newline in this node   
        // update the maxX   
        if ( currCol > maxX ) 
            maxX =  currCol ;
        
        // put coord on node   
        // second coordinate indicates if box is higher than one line
        PutCoord(paramTree, begCurrCol - xFather, (currLine - begCurrLine > 0 ? 2 : 0) | startNewLine, maxX - begCurrCol, theMark);
        
        // father will have max of current length and of this son   
        if ( maxX < oldMaxX ) 
            maxX =  oldMaxX ;
    }
}

//
// cleaning of the attributs nodes
//
void clpretty::CleanAttributs ( PTREE tree )
{
    PTREE   son ;
    int     x, y, dx, posMark ;
    
    foreach ((),tree,{
        if ( for_elem == <ATTRIBUTS,son> && for_elem ^ ) {
            replacetree(for_elem ^ , ranktree(for_elem), son);
            for_elem =  son ;
        }
        if ( GetCoord(for_elem, &x, &y, &dx, &posMark) ) {
            FreeCoord(for_elem);
        }
    })
}

// DisplayError : display an error on standard error
// parameters :
//              printList : the list to be printed
//              current : tell if to display on current output
void clpretty::DisplayError ( PTREE printList, bool current )
{
    PTREE   elem ;
    int     oldOutput = output ;
    PTREE   oldList = printList ;
    
    if ( current ) {
        Flush();
        <NL,2>
        if ( !emacsCompatibleError ) {
            "====> ";
        } else {
            "==================================" <NL>
        }
        while ( (elem = nextl(printList)) || printList != () ) {
            switch ( elem ) {
                case <TERM_TREE> : 
                    value(elem)
                    break ;
                default : 
                    <NL>
                    Decomp(elem, true);
                    <NL>
                    break ;
            }
        }
        <NL,2>
    }
    printList =  oldList ;
    output    =  2 ;
    if ( !emacsCompatibleError ) {
        "====> ";
    } else {
        "===================================" <NL,2>
    }
    while ( printList == <LIST> && (elem = nextl(printList)) ) {
        switch ( elem ) {
            case <TERM_TREE> : 
                value(elem)
                break ;
            default : 
                <NL>
                Decomp(elem, true);
                <NL>
                break ;
        }
    }
    <NL,2>
    output =  oldOutput ;
}


