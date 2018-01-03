/*************************************************************************/
/*                                                                       */
/*        dchop2.ch - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
/* This file is part of metachop                                            
   
   Netachop provide the tools to prettyprint or modify trees generated
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

extern int  equality, caseDesign, simpleCase, ifCase, condDesign, condCase, inDefine ;
extern char *ptEquality, *ptCase, *ptCond ;
extern char tabLabel [], *ptTab, *nameDefine ;
extern char stringNumb [];
extern int  nbLabel ;
extern char *currentLanguage ;

// last is the last clause of case 
PTREE switch_el ( PTREE paramTree, int last )
{
    PTREE   lstat, cond, list, ident, output, list_output, temporary, tree, tree1, son ;
    char    *oldPtCase, *name, *name1 ;
    int     i ;
    
    /* we must have a case node ; construct it if necessary */
    if ( paramTree == <DEFAULT,lstat> ) {
        PTREE   rep = <CASE,<DEF_IDENT>,lstat>;
        paramTree =  paramTree += rep ;
    }
    paramTree == <,cond,lstat>;
    if ( !ifCase ) {
        if ( cond == <IDENT> ) {
            output =  parse (default : $stat_list ;);
        } else if ( cond == <DEF_IDENT> ) {
            output =  parse (default : $stat_list ;);
        } else {
            cond == <AFF,<>,cond>;
            output =  parse (case $cond : $stat_list ;);
            switch ( cond ) {
                case <NODE_LIST> : 
                    tree = <IDENT,"LIST">;
                    metarep("cond", output, tree);
                    break ;
                case <NODE_TREE,<LIST,tree>> : 
                    if ( tree == <IDENT> ) {
                        if ( cplusGen ) 
                            tree =  <IDENT,MakeString(NameOfNodePlus(Value(tree)))>;
                        else 
                            tree =  <IDENT,MakeString(NameOfNode(Value(tree)))>;
                    } else if ( tree == <QUALIFIED> ) {
                        EString name = EString(Value(tree [1])) + "::" + Value(tree [2]);
                        tree =  <IDENT,MakeString(name.c_str())>;
                    }
                    metarep("cond", output, tree);
                    break ;
            }
        }
        list_output =  ();
        paramTree == <,cond>;
        if ( cond == (ident = <IDENT>) || cond == <AFF,ident,cond> ) {
            tree1       =  <IDENT,MakeString(ptCase)>;
            list_output *= <AFF,ident,tree1>;
        }
        if ( cond == <NODE_TREE,list> && list != () ) {
            i =  1 ;
            nextl(list);
            while ( list != () ) {
                if ( list == <,<AFF,ident>> || list == <,(ident = <IDENT>)> ) {
                    temporary =  parse ($aff1 = SonTree($var1,$var2));
                    metarep("aff1", temporary, NoCommentCopyTree(ident));
                    tree1 =  <IDENT,MakeString(ptCase)>;
                    metarep("var1", temporary, tree1);
                    _itoa(i, stringNumb, 10);
                    tree1 =  <INTEGER,MakeString(stringNumb)>;
                    metarep("var2", temporary, tree1);
                    list_output *= temporary ;
                }
                i++ ;
                nextl(list);
            }
        }
        temporary =  parse ($label :;);
        strcpy(stringNumb, "_Case");
        _itoa(nbLabel++, stringNumb + 5, 10);
        tree1 =  <IDENT,MakeString(stringNumb)>;
        metarep("label", temporary, tree1);
        list_output *= temporary ;
        son         =  ();
        while ( lstat != () ) {
            son         =  nextl(lstat);
            list_output *= son ;
        }
        if ( son != <BREAK> && !last ) {
            strcpy(stringNumb, "_Case");
            _itoa(nbLabel, stringNumb + 5, 10);
            list_output *= <GOTO,<IDENT,MakeString(stringNumb)>>;
        }
        metarep("stat_list", output, list_output);
    } else {
        list_output =  ();
        output      =  parse (if($cond) $stat ;);
        if ( cond == <IDENT> || cond == <DEF_IDENT> || cond == <AFF,<>,<DEF_IDENT>> ) {
            temporary =  parse (1);
            metarep("cond", output, temporary);
        } else {
            cond == <AFF,<>,cond>;
            metarep("cond", output, NoCommentCopyTree(cond));
            condDesign =  0 ;
        }
        paramTree == <,cond>;
        if ( cond == (ident = <IDENT>) || cond == <AFF,ident> ) {
            
            /* done here we used a shortcut just above */
            temporary =  parse ($ident = $value);
            metarep("ident", temporary, NoCommentCopyTree(ident));
            ident =  <IDENT,MakeString(ptCase)>;
            metarep("value", temporary, NoCommentCopyTree(ident));
            list_output *= temporary ;
        }
        temporary =  parse ($label :;);
        strcpy(stringNumb, "_If");
        _itoa(nbLabel++, stringNumb + 3, 10);
        tree1 =  <IDENT,MakeString(stringNumb)>;
        metarep("label", temporary, tree1);
        list_output *= temporary ;
        temporary   =  ();
        
        /* insert all the statements except the last one */
        while ( lstat != () ) {
            temporary =  nextl(lstat);
            if ( lstat != () ) 
                list_output *= temporary ;
        }
        
        /* if it's not break and not last clause goto next clause */
        if ( temporary != <BREAK> && !last ) {
            if ( temporary ) 
                list_output *= temporary ;
            strcpy(stringNumb, "_If");
            _itoa(nbLabel, stringNumb + 3, 10);
            list_output *= <GOTO,<IDENT,MakeString(stringNumb)>>;
        } else if ( temporary != <BREAK> ) 
            list_output *= temporary ;
        
        /* wrap in a compound and put in the if */
        temporary =  parse ({;});
        temporary += <,list_output>;
        metarep("stat", output, temporary);
    }
    return (output);
}

PTREE switch_body ( PTREE paramTree )
{
    PTREE   son, temporary, current, ident, tree ;
    int     first = 1, last ;
    
    current =  ();
    while ( paramTree != () ) {
        son  =  nextl(paramTree);
        last =  paramTree == () ? 1 : 0 ;
        son  =  switch_el(son, last);
        if ( first ) {
            if ( ifCase ) {
                temporary =  current = son ;
            } else {
                temporary =  parse (
                    switch(NumberTree(($tree)))
                        { case $cond : $stat;}
                );
                ident     =  <IDENT,MakeString(ptCase)>;
                metarep("tree", temporary, ident);
                current *= son ;
            }
            first =  0 ;
        } else if ( ifCase ) {
            current += <,<>,<>,son>;
            current =  son ;
        } else 
            current *= son ;
    }
    if ( !ifCase ) {
        
        /* FreeTree(SonTree(temporary,2));*/
        temporary += <,<>,current>;
    }
    return (temporary);
}

void node ( PTREE paramTree )
{
    if ( equality ) 
        EqualTree(ptCond, ptEquality, 0, paramTree, 0);
    else 
        EqualTree(ptCond, (char *)0, 0, paramTree, 0);
}

int classify_case ( PTREE paramTree )
{
    PTREE   list, cond, list1, temporary ;
    
    paramTree == <,<>,list>;
    while ( list != () ) {
        if ( list != <,<DEFAULT>> ) {
            list == <,<,cond>>;
            
            /* condition ) switch */
            if ( cond != <IDENT> ) {
                cond == <AFF,<>,cond>;
                switch ( cond ) {
                    case <NODE_LIST,()> : ;
                    case <DEF_IDENT> : break ;
                    case <NODE_TREE,list1> : 
                        if ( list1 != <,<IDENT>> && list1 != <,<QUALIFIED>> ) 
                            return 0 ;
                        nextl(list1);
                        while ( list1 ) {
                            temporary =  nextl(list1);
                            switch ( temporary ) {
                                case <IDENT> : 
                                case <AFF,<>,<DEF_IDENT>> : 
                                case <DEF_IDENT> : continue ;
                                default : return 0 ;
                            }
                        }
                        break ;
                    default : 
                        return 0 ;
                        break ;
                }
            }
        }
        nextl(list);
    }
    return 1 ;
}


