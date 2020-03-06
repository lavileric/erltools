/*************************************************************************/
/*                                                                       */
/*        dchop3.ch - Built by Eric Lavillonniere on Tandon 386 - 89     */
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
#include "memges.h"
#include "test.h"

extern char *currentLanguage ;
extern int  cplusGen ;
/****************************************************************************
     LookMeta : search in tree for $(tree to be parsed)
   ****************************************************************************/
extern int  line ;

static  void DestroyComments ( PTREE tree )
{
    foreach ((),tree,{
        DestroyPosComment(for_elem);
    })
}

// tree : the tree to be searched
// nameVar : the name of variable to which tree will be assigned
PTREE LookMeta ( PTREE tree, char *nameVar )
{
    char    *theValue ;
    PTREE   ret, aux, inter1, catcher /* prevent gc */ ;
    PTREE   retListStat ; // the list of statements to be 
                          // inserted after the tree construction
    char    name [20];
    int     varNumber = 0 ;
    ItPtree it (tree) ;
    PPTREE  _for_elem ;
    
    retListStat =  ();
    while ( (for_elem = it++) ) {
        if ( for_elem == <META,<TERM_TREE>> ) {
            theValue =  Value(for_elem);
            if ( *theValue == '(' ) {
                theValue =  AllocString(theValue + 1);
                in "metachop" ret =  metachop().ReadInString(theValue);
                
                /* decomp (ret) */
                if ( ret == (PTREE) -1 ) {
                    char    string [MAXLENGTH];
                    *(theValue + strlen(theValue) - 1) =  '\0';
                    strcpy(string, "Error while parsing : ");
                    strcat(string, theValue);
                    strcat(string, "\n");
                    line =  0 ;
                    PrintError(string, "", 0, 0, 0, 3, 1);
                    exit(0);
                }
                if ( ret == <IDENT> ) {
                    catcher =  ret ; // prevent gc
                    ret == <,ret>; // ret is now on string 
                    
                    // replace the content of each metavariable
                    // with the name an <IDENT> so that the foreach
                    // don't get over them again and then generates
                    // the appropriate metarep
                    {
                        ItPtree it (tree) ;
                        PPTREE  _for_elem ;
                        while ( (for_elem = it++) ) {
                            if ( for_elem == <META> && !strcmp(Value(for_elem) + 1, theValue) ) {
                                for_elem += <,CopyTree(ret)>;
                            }
                        }
                    }
                    
                    // generate a metarep which will replace in the variable
                    // all the meta by the tree whose name is the name
                    // indicated in ret
                    in "metachop" {
                        inter1      =  parse (
                            MetaRep ( $(<STRING,MakeString(Value(ret))>),
                                $(<IDENT,MakeString(nameVar)>),
                                $(fathertree(ret)));
                        );
                        retListStat *= inter1 ;
                    }
                } else {
                    sprintf(name, "meta%d", varNumber++);
                    aux      =  <META,MakeString(name)>;
                    
                    // put a metavariable instead of construction
                    // in tree
                    for_elem =  for_elem += aux ;
                    it.Current(for_elem);
                    
                    // then generates metachop statement which
                    // will replace metavariable by the construction
                    in "metachop" {
                        inter1      =  parse (
                            MetaRep ( $(<STRING,MakeString(name)>),
                                $(<IDENT,MakeString(nameVar)>),
                                $(ret));
                        );
                        retListStat *= inter1 ;
                    }
                }
                free(theValue);
            }
        }
    }
    
    // if some statements were added put a compound around them
    // and expand them
    if ( retListStat != () ) {
        DestroyComments(retListStat);
        in "metachop" {
            if ( retListStat == <LIST> ) {
                retListStat =  <COMPOUND,retListStat>;
            }
            GenTree(retListStat);
            GCManager(retListStat);
        }
    }
    return retListStat ;
}

/****************************************************************************
       englob : put an instruction in a list
   ***************************************************************************/
void englob ( PTREE tree )
{
    PTREE   father, temporary ;
    int     rank ;
    
    father =  tree ^ ;
    if ( father != <LIST> ) {
        rank      =  ranktree(tree);
        temporary =  <COMPOUND,tree * ()>;
        replacetree(father, rank, temporary);
    }
}

/****************************************************************************
       GenTree : generalize the use of trees
                 replace each complex tree usage by an affectation to a
                 variable and putting the variable instead of the original
                 expression
   ***************************************************************************/
void GenTree ( PTREE tree )
{
    PTREE   ptTree, temporary, list, theList ;
    PTREE   compoundTree ;
    char    varName [20];
    char    str [5];
    int     inList ;    // put at zero when we find a tree construction
                        // put at one when we find a <LIST> and kept
                        // so while we are in list ( going upward)
                        // this flag is used to find the <LIST> node
                        // under the compound and just above the construction
                        // that is the statement around the tree construction
    int     massageIt ; // indicates that we have found a <EXP_SEQ>
                        // or a <FOREACH> above the construction
                        // and under a compound so we must treat it
    int     varNumber = 0 ;
    ItPtree it (tree) ;
    PPTREE  _for_elem ;
    PTREE   elem ;
    
    while ( (for_elem = it++) ) {
        elem =  for_elem ;
        switch ( elem ) {
            case <PARSE,temporary> : 
            case <NODE_TREE> : 
            case <NODE_LIST> : 
            case <NIL> : 
                ptTree    = for_elem ;
                massageIt = 0 ;
                inList    = 0 ;
                while ( ptTree != <COMPOUND> ) {
                    if ( !(ptTree = ptTree ^ ) ) {
                        
                        // we didn't find a compound above so cannot treat it
                        massageIt =  0 ;
                        break ;
                    }
                    switch ( ptTree ) {
                        case <EXP_SEQ> : 
                        case <FOREACH> : 
                        case <RETURN> : 
                            massageIt = 1 ;
                            inList    = 0 ;
                            break ;
                        case <LIST> : 
                            
                            // first list element in the list of the compound
                            // before the statement containing
                            // the complex tree usage
                            if ( !inList ) {
                                inList  =  1 ;
                                theList =  ptTree ;
                            }
                            break ;
                        case <EQU> : 
                        case <NEQU> : 
                            it.SkipSon(1);
                            goto for_continue ;
                        default : 
                            inList = 0 ;
                            break ;
                    }
                }
                
                // do the job now
                compoundTree = ptTree ;
                if ( massageIt ) {
                    PTREE   keep ; // inhibe GC 
                    
                    // declare a new tree variable
                    compoundTree == <,list>;
                    sprintf(varName, "_Baum%d", varNumber++);
                    temporary    =  parse (
                        PTREE $(<LIST,
                        <IDENT,MakeString(varName)>,()>);
                    );
                    compoundTree += <,temporary * list>;
                    
                    // replace use of complicated tree construction
                    // with the new variable
                    ptTree       =  <IDENT,MakeString(varName)>;
                    keep         =  for_elem ;
                    for_elem     += ptTree ;
                    
                    // insert statement for the affectation of 
                    // the new variable
                    temporary    =  parse (
                        $(<IDENT,
                        MakeString(varName)>) = $(for_elem)
                    );
                    theList      =  theList ^ ;
                    
                    // there is a father since there 
                    // is at least the declaration we have
                    // just inserted , in front of the instruction 
                    theList == <,<>,ptTree>;
                    theList += <,<>,temporary * ptTree>;
                    it.Current(temporary);
                }
                it.SkipSon(1);
                continue ;
            case <FOREACH,temporary> : 
                
                // in a foreach don't replace a nil in first
                // place by anything
                if ( temporary == <NIL> ) 
                    it.Current(temporary);
                break ;
            default : break ;
        }
    for_continue : 
        ;
    }
}

/****************************************************************************
       CreateGCClass : create class for automatic GC
   **************************************************************************/
PTREE CreateGCClass ( char *name )
{
    char    *nName = (char *)malloc(strlen(name) + 3);
    PTREE   pattern ;
    
    // create a new variable with two _ prepended
    strcpy(nName, "__");
    strcat(nName, name);
    
    // create the assignment statement for this new variable
    // put () after & otherwise the 1 arity node is destroyed
    pattern =  parse (
        CPTREE $(<IDENT,MakeString(nName)>) (
             &($(<IDENT,MakeString(nName+2)>)));
    );
    
    // find really the affection part in statement
    pattern =  find(<TYP_AFF_CALL,<META,"x">,<META,"y">>, pattern);
    
    // return assignment statement
    free(nName);
    return pattern ;
}

/****************************************************************************
       FullCreateGCClass : complete class declaration  for automatic GC
   **************************************************************************/
// list is the list of CPTREE to be declared
// the function returns the declaration with the CPTREE in front of them
PTREE FullCreateGCClass ( PTREE list )
{
    PTREE   pattern, temporary, father ;
    int     rank ;
    
    pattern   =  parse (CPTREE a1,a2;);
    temporary =  find(<LIST,<META,"x">,<META,"y">>, pattern);
    temporary += list ;
    return pattern ;
}

/****************************************************************************
          GCManager : automatic gc of trees
   **************************************************************************/
void GCManager ( PTREE tree )
{
    PTREE   list, pt_list, list_decl, son, son_decl, pattern, temporary, list_init, listClassInit ;
    int     somethingDone = 0 ;
    ItPtree it(tree, <COMPOUND,<META,"B">>);
    PPTREE  _for_elem ;
    
    while ( (for_elem = it++) ) {
        for_elem == <,list>;
        pt_list       =  list ;
        listClassInit =  ();
        list_init     =  ();
        while ( pt_list != () ) {
            son =  nextl(pt_list);
            
            // after each group of declarations add the associated
            // initialisations
            if ( son != <DECLARATION> ) {
                
                /* dans instruction suivant on renverse l'ordre */
                if ( listClassInit ) {
                    list_init *= FullCreateGCClass(listClassInit);
                }
                if ( list_init ) {
                    
                    // temporary go on last list node whose son is
                    // a declaration
                    temporary =  son ^ ^ ;
                    
                    // list contains only statements
                    temporary == <,<>,list>;
                    while ( (son = nextl(list_init)) ) {
                        list =  son * list ;
                    }
                    temporary += <,<>,list>;
                }
                listClassInit =  list_init = ();
            }
            if ( son == <DECLARATION,<>,<TIDENT,<IDENT,"PTREE">>,list_decl> ) {
                somethingDone =  1 ;
                while ( list_decl != () ) {
                    son_decl =  nextl(list_decl);
#                   if 0
                        if ( son_decl != <TYP_AFF> ) {
                            
                            // declaration without initialisation
                            // put (PTREE)0 in it
                            temporary =  son_decl ^ ;
                            pattern   =  parse (PTREE $(son_decl) = (PTREE) 0;);
                            pattern   =  find(<TYP_AFF,<META,"x">,<META,"y">>, pattern);
                            temporary += <,pattern>;
                        } else {
                        }
#                   endif
                    if ( son_decl == <TYP_AFF> ) {
                        
                        // declaration with initialization 
                        // put it after the declaration part
                        // otherwise complex tree initialization 
                        // cannot be generated
                        son_decl == <,<>,<,temporary>>;
                        pattern   =  parse (
                            $(<IDENT,
                                MakeString(Value(son_decl))>)
                                    = $(temporary)
                        );
                        list_init =  pattern * list_init ;
                        pattern   =  parse (PTREE $toto = (PTREE) 0;);
                        pattern   =  find(<TYP_AFF,<META,"x">,<META,"y">>, pattern);
                        pattern == <,<>,pattern>;
                        son_decl += <,<>,pattern>;
                    }
#                   if 0
                        if ( !cplusGen ) {
                            temporary =  parse (
                                if ($(<IDENT,MakeString(Value(son_decl))>))
                                    FreeRef($(<IDENT,
                                        MakeString(Value(son_decl))>));
                            );
                            list      *= temporary ;
                        } else {
                            listClassInit *= CreateGCClass(Value(son_decl));
                        }
#                   endif
                }
            }
        }
    }
}

/****************************************************************************
       GCManagerFunc : automatic gc of trees parameters of function
   ***************************************************************************/
void GCManagerFunc ( PTREE tree )
{
    PTREE   list, pt_list, son, son_decl, old, temporary, inter1, addref, list_decl, type, list_insert, param, list_name, name ;
    int     somethingDone = 0 ;
    
    tree == <,<>,type,<>,param,<>,pt_list,<>,<COMPOUND,list>>;
    
    // search the first statement
    old =  temporary = list ;
    while ( temporary == <,<DECLARATION>> ) {
        old =  temporary ;
        nextl(temporary);
    }
    
    // do the modification for all the parameters
    while ( pt_list != () ) {
        son =  nextl(pt_list);
        if ( son == <,<>,<TIDENT,<IDENT,"PTREE">>,list_decl> ) {
            somethingDone =  1 ;
            while ( (name = nextl(list_decl)) && name == <IDENT> ) {
                if ( !cplusGen ) {
                    addref =  parse (AddRef( $(copytree(name))));
                    if ( old == temporary ) 
                        list =  addref * list ;
                    else {
                        temporary =  addref * temporary ;
                        old       += <,<>,temporary>;
                    }
                    inter1 =  parse (
                        if ( $(copytree(name)))
                            FreeRef($(copytree(name)));
                    );
                    list   *= inter1 ;
                } else {
                    list_insert =  list_insert * CreateGCClass(Value(name));
                    list_name   *= copytree(name);
                }
            }
        }
    }
    
    // if it's an ansi code or c++ code some parameters are directly
    // declared inside params
    while ( (son = nextl(param)) ) {
        if ( son == <DECLARATOR,<TIDENT,<IDENT,"PTREE">>,name> && name == <IDENT> && !ListFind(list_name, name) ) {
            somethingDone =  1 ;
            if ( !cplusGen ) {
                addref =  parse (AddRef( $(copytree(name))));
                if ( old == temporary ) 
                    list =  addref * list ;
                else {
                    temporary =  addref * temporary ;
                    old       += <,<>,temporary>;
                }
                inter1 =  parse (
                    if ( $(copytree(name)))
                        FreeRef($(copytree(name)));
                );
                list   *= inter1 ;
            } else {
                list_insert =  list_insert * CreateGCClass(Value(name));
                list_name   *= copytree(name);
            }
        }
    }
    
    // insert the declaration
    if ( cplusGen && somethingDone ) {
        list_insert =  FullCreateGCClass(list_insert);
        if ( old == temporary ) 
            list =  list_insert * list ;
        else 
            old += <,<>,list_insert * temporary>;
    }
    if ( somethingDone ) 
        tree += <,<>,<>,<>,<>,<>,<>,<>,<,list>>;
}

/****************************************************************************
       GCManagerRet : automatic gc of trees when there are return values
   ***************************************************************************/
void GCManagerRetBeg ( PTREE tree )
{
    PTREE   list, construct ;
    int     retATree = 0 ;
    
    if ( !cplusGen ) {
        foreach (<RETURN,<META,"toto">>,tree,{
            retATree =  1 ;
            goto for_break ;
        })
        
        // we had retLabel and all the GC on parameters will be
        // added after this label
        if ( retATree ) {
            tree == <,<>,<>,<>,<>,<>,<>,<>,<,list>>;
            construct =  parse (_retLabel :;);
            list      *= construct /* there is at least a return */ ;
            tree      += <,<>,<>,<>,<>,<>,<>,<>,<,list>>;
        }
    }
}

void GCManagerRetEnd ( PTREE tree, int retTree )
{
    PTREE   sonde, list, construct, son, temporary, ptFather, ptStat, ptListDecl, ptDecl, list_name ;
    MY_TREE tabTree [50];
    int     indTabTree, found = 0 ;
    char    *ptString ;
    
    if ( !cplusGen ) {
        sonde =  parse (_retLabel:;);
        tree == <,<>,<>,<>,<>,<>,<>,<>,<,list>>;
        while ( list != () ) {
            son =  nextl(list);
            if ( qcomparetree(son, sonde) ) {
                found    =  1 ;
                ptFather =  son ^ ; /* on supprime la partie _retLabel : */ 
                if ( list ) {
                    list == <,son,temporary>;
                    list =  ptFather += <,son,temporary>;
                } else {
                    son += ();
                }
                break ;
            }
        }
        
        /* on va rajouter les FreeRef devant
           chaque return */
        if ( found && list != () ) {
            ItPtree it(tree, <RETURN,<META,"toto">>);
            PPTREE  _for_elem ;
            sonde =  list ;
            while ( (for_elem = it++) ) {
                ptFather   =  for_elem ^ ;
                list       =  CopyTree(sonde);
                indTabTree =  0 ;
                
                // compute all the compound above current statement
                while ( ptFather != () ) {
                    if ( ptFather == <COMPOUND> ) 
                        tabTree [indTabTree++] =  ptFather ;
                    ptFather =  ptFather ^ ;
                }
                indTabTree -= 2 ;
                
                // foreach statement above the current statement compound
                // add the declared to be freed
                while ( indTabTree >= 0 ) {
                    ptStat =  tabTree [indTabTree--];
                    ptStat == <,ptStat>;
                    while ( (ptListDecl = nextl(ptStat)) ) {
                        if ( ptListDecl == <DECLARATION,<>,<TIDENT,<IDENT,"PTREE">>,ptListDecl> ) 
                            while ( (ptDecl = nextl(ptListDecl)) && ptDecl == <IDENT> ) {
                                temporary =  parse (
                                    if ($(copytree(ptDecl)))
                                        FreeRef($(copytree(ptDecl)));
                                );
                                list      *= temporary ;
                                if ( ListFind(list_name, ptDecl) ) {
                                    "Twice use of " WriteString(Value(ptDecl)) " at different levels in " WriteString(Value(SonTree(tree, 3))) <NL>
                                    exit(0);
                                } else {
                                    list_name *= copytree(ptDecl);
                                }
                            }
                    }
                }
                
                // free all PTREE before returning value         
                if ( !retTree ) {
                    construct =  parse ({$(list);});
                    list      *= for_elem ;
                } else {
                    construct =  parse (
                        {
                                  PTREE _retValueTree = (PTREE) 0 ;
                                  _retValueTree = $(SonTree(for_elem,1)) ;
                                  {$(list);}
                                  RemRef(_retValueTree) ;
                                  return _retValueTree ;
                              }
                    );
                }
                for_elem =  for_elem += construct ;
                it.Current(for_elem);
                it.SkipSon(1);
            }
        }
    } else {
        if ( retTree ) {
            ItPtree it(tree, <RETURN,<META,"toto">>);
            PPTREE  _for_elem ;
            while ( (for_elem = it++) ) {
                PTREE   newVal = parse (StoreRef($(sontree(for_elem,1))););
                for_elem += <,newVal>;
                it.Current(newVal);
                it.SkipSon(1);
            }
        }
    }
}


