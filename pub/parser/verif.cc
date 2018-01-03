/*************************************************************************/ 
/*                                                                       */ 
/*        Verif.c   - Built by Eric Lavillonniere on Tandon 386 - 89     */ 
/*                                                                       */ 
/*************************************************************************/ 
/* This file is part of metagen                                             
   
   Metagen is a syntaxic analyser generator with backtrack.
   
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
#include "token.h"

/*                  Verification module :
                 -------------------------
     
   We verify :
     
       - that all declared variables are really used
     
       - that all used variables are really declared
     
       - that we don't put twice a value in the son of a tree
     
   It doesn't work if the conditions are not totally independant
     
     */ 
typedef struct usedParam {
    int param ;
    struct usedParam *next ;
}   USED_PARAM,     *PUSED_PARAM ;

typedef struct condDecElem {
    PPTREE   p_tree ;
    struct condDecElem *t_val ;
    struct condDecElem *f_val ;
    PUSED_PARAM used_param ;
}   CONDDECELEM,    *PCONDDECELEM ;

typedef struct decElem {
    char    *string ;
    int used ;
    int nb_param ;
    PCONDDECELEM    condition ;
    PUSED_PARAM used_param ;
    struct decElem *equiv ;
    struct decElem *next ;
}   DECELEM,    *PDECELEM ;

typedef struct condValue {
    PPTREE   p_tree ;
    int condition ;
    struct condValue *next ;
}   COND_VALUE,     *PCOND_VALUE ;

static struct {
    DECELEM *list ;
    DECELEM *free ;
    char    *func_name ;
} header = {(PDECELEM)0, (PDECELEM)0, (char *)0 };
PUSED_PARAM usedParamFree = (PUSED_PARAM)0 ;
PCONDDECELEM    condDecElemFree = (PCONDDECELEM)0 ;
PCOND_VALUE conditionHeader = (PCOND_VALUE)0 ;
PCOND_VALUE conditionFree = (PCOND_VALUE)0 ;
char    message [255];
void    ManageCond (PCONDDECELEM, int, int, PCOND_VALUE, char *) ;

extern int compiledLine;
extern char * theFileName;
static inline void CNewLine()
{
    char string [10];
    NewLine();
    if ( compiledLine) {
        gotocol(1);
        WriteString("#line ");
        sprintf(string,"%d ",compiledLine);
        WriteString(string);
        WriteString("\"");
        WriteString(theFileName);
        WriteString("\"");
        NewLine();
    }
}

#define NewLine CNewLine

/******************************************************************
       Error : notify the user of an error
   *******************************************************************/ 
void Error ( int i, const char *name, int exit_ok, int nb )
{
    switch ( i ) {
        case 0 : 
            sprintf(message, "%s : Pointer %s not declared \n"
                , header.func_name, name);
            break ;
        case 1 : 
            sprintf(message, "%s : Use of a non existing son %d of %s \n"
                , header.func_name, nb, name);
            break ;
        case 2 : 
            sprintf(message, "%s : Position %d of %s used more than once\n"
                , header.func_name, nb, name);
            break ;
        case 3 : 
            sprintf(message, "%s : Pointer %s is not used \n"
                , header.func_name, name);
            break ;
        case 4 : 
            sprintf(message, "Use of tree node %s with a bad arity %d \n"
                , name, nb);
            break ;
        default : 
            sprintf(message, "Unknown error in %s number %d \n"
                , header.func_name, i);
            break ;
    }
    write(2, message, strlen(message));
    if ( exit_ok ) 
        exit(0);
}

/******************************************************************
       AllocCond : allocate a new condition cell
   *******************************************************************/ 
PCOND_VALUE AllocCond ( PPTREE pTree )
{
    PCOND_VALUE myPoint ;
    register PCOND_VALUE    point ;
    
    if ( conditionFree ) {
        myPoint = conditionFree ;
        conditionFree = conditionFree -> next ;
    } else 
        myPoint = (PCOND_VALUE)malloc(sizeof(COND_VALUE));
    myPoint -> p_tree = pTree ;
    myPoint -> condition = 1 ;
    myPoint -> next = (PCOND_VALUE)0 ;
    point = conditionHeader ;
    while ( point && point -> next ) 
        point = point -> next ;
    if ( !point ) 
        conditionHeader = myPoint ;
    else 
        point -> next = myPoint ;
    return myPoint;
}

/******************************************************************
       NegateCond : negate current condition
   *******************************************************************/ 
void NegateCond ()
{
    register PCOND_VALUE    point ;
    
    point = conditionHeader ;
    while ( point && point -> next ) 
        point = point -> next ;
    if ( point ) 
        point -> condition = !point -> condition ;
}

/******************************************************************
       FreeCond : free last cond cell
   *******************************************************************/ 
void FreeCond ()
{
    register PCOND_VALUE    point, trailPoint ;
    
    trailPoint = point = conditionHeader ;
    while ( point && point -> next ) {
        trailPoint = point ;
        point = point -> next ;
    }
    if ( trailPoint == point ) 
        conditionHeader = (PCOND_VALUE)0 ;
    if ( trailPoint ) {
        trailPoint -> next = (PCOND_VALUE)0 ;
        point -> next = conditionFree ;
        conditionFree = point ;
    }
}

/******************************************************************
       AllocDecElem : allocate a new declaration elem
   *******************************************************************/ 
PDECELEM AllocDecElem ()
{
    PDECELEM    myPoint ;
    
    if ( header.free ) {
        myPoint = header.free ;
        header.free = header.free -> next ;
    } else 
        myPoint = (PDECELEM)malloc(sizeof(DECELEM));
    myPoint -> string = (char *)0 ;
    myPoint -> used = myPoint -> nb_param = 0 ;
    myPoint -> used_param = (PUSED_PARAM)0 ;
    myPoint -> next = header.list ;
    myPoint -> equiv = myPoint ;
    myPoint -> condition = (PCONDDECELEM)0 ;
    header.list = myPoint ;
    return (myPoint);
}

/******************************************************************
       FreeDecElem : free a dec elem
   *******************************************************************/ 
void FreeDecElem ( PDECELEM decElem )
{
    decElem -> next = header.free ;
    header.free = decElem ;
}

/******************************************************************
       AllocUsedParam : allocate a new used param cell
   *******************************************************************/ 
PUSED_PARAM AllocUsedParam ()
{
    PUSED_PARAM myPoint ;
    
    if ( usedParamFree ) {
        myPoint = usedParamFree ;
        usedParamFree = usedParamFree -> next ;
    } else 
        myPoint = (PUSED_PARAM)malloc(sizeof(USED_PARAM));
    myPoint -> param = 0 ;
    myPoint -> next = (PUSED_PARAM)0 ;
    return (myPoint);
}

/******************************************************************
       FreeUsedParam : free a used param cell
   *******************************************************************/ 
void FreeUsedParam ( PUSED_PARAM usedParam )
{
    if ( !usedParam ) 
        return ;
    usedParam -> next = usedParamFree ;
    usedParamFree = usedParam ;
}

/******************************************************************
       FreeUsedParamList : Free a used param list
   *******************************************************************/ 
void FreeUsedParamList ( PUSED_PARAM usedParam )
{
    if ( !usedParam ) 
        return ;
    FreeUsedParam(usedParam -> next);
    FreeUsedParam(usedParam);
}

/******************************************************************
       AllocCondDecElem  : allocate a new cond dec elem cell
   *******************************************************************/ 
PCONDDECELEM AllocCondDecElem ()
{
    PCONDDECELEM    myPoint ;
    
    if ( condDecElemFree ) {
        myPoint = condDecElemFree ;
        condDecElemFree = condDecElemFree -> f_val ;
    } else 
        myPoint = (PCONDDECELEM)malloc(sizeof(CONDDECELEM));
    myPoint -> p_tree = (PPTREE)0 ;
    myPoint -> f_val = myPoint -> t_val = (PCONDDECELEM)0 ;
    myPoint -> used_param = (PUSED_PARAM)0 ;
    return (myPoint);
}

/******************************************************************
       FreeCondDecElem : free a CondDecElem tree;
   *******************************************************************/ 
void FreeCondDecElem ( PCONDDECELEM condDecElem )
{
    if ( !condDecElem ) 
        return ;
    FreeUsedParamList(condDecElem -> used_param);
    FreeCondDecElem(condDecElem -> f_val);
    FreeCondDecElem(condDecElem -> t_val);
    condDecElem -> f_val = condDecElemFree ;
    condDecElemFree = condDecElem ;
}

/******************************************************************
       InsertDecElem : insert a new pointer declaration in list
   *******************************************************************/ 
void InsertDecElem ( char *name )
{
    PDECELEM    pDecElem ;
    
    pDecElem = AllocDecElem();
    pDecElem -> string = name ;
}

/******************************************************************
       SearchDecElem : search the dec elem whose name is name
   *******************************************************************/ 
PDECELEM SearchDecElem ( char *name )
{
    register PDECELEM   pDecElem = header.list ;
    
    while ( pDecElem ) {
        if ( !strcmp(pDecElem -> string, name) ) 
            return (pDecElem);
        pDecElem = pDecElem -> next ;
    }
    Error(0, name, 1, 0);
    return (PDECELEM) 0;
}

/******************************************************************
       IsDecDecElem : search if dec elem whose name is name is declared
   *******************************************************************/ 
int IsDecDecElem ( char *name )
{
    register PDECELEM   pDecElem = header.list ;
    
    while ( pDecElem ) {
        if ( !strcmp(pDecElem -> string, name) ) 
            return (1);
        pDecElem = pDecElem -> next ;
    }
    return (0);
}

/******************************************************************
       InitDecElem : initialize a  dec elem
   *******************************************************************/ 
void InitDecElem ( char *name, int nb )
{
    PDECELEM    pDecElem = SearchDecElem(name);
    PDECELEM    pDecTrail ;
    
    pDecElem -> nb_param = nb ;
    FreeUsedParamList(pDecElem -> used_param);
    pDecElem -> used_param = (PUSED_PARAM)0 ;
    FreeCondDecElem(pDecElem -> condition);
    pDecElem -> condition = (PCONDDECELEM)0 ;
    if ( pDecElem -> equiv ) {
        pDecTrail = pDecElem -> equiv ;
        while ( pDecTrail -> equiv != pDecElem ) 
            pDecTrail = pDecTrail -> equiv ;
        pDecTrail -> equiv = pDecElem -> equiv ;
    }
    pDecElem -> equiv = pDecElem ;
}

/******************************************************************
       AddUsedParam : add a used param to a list
   *******************************************************************/ 
PUSED_PARAM AddUsedParam ( PUSED_PARAM pUsedParam, int nb, char *name )
{
    PUSED_PARAM pFirst = pUsedParam ;
    
    while ( pUsedParam ) {
        if ( pUsedParam -> param == nb ) {
            Error(2, name, 0, nb);
            return (pFirst);
        }
        pUsedParam = pUsedParam -> next ;
    }
    pUsedParam = AllocUsedParam();
    pUsedParam -> param = nb ;
    pUsedParam -> next = pFirst ;
    return (pUsedParam);
}

/******************************************************************
       RemoveUsedParam : remove a use param from a list
   *******************************************************************/ 
PUSED_PARAM RemoveUsedParam ( PUSED_PARAM pUsedParam, int nb )
{
    PUSED_PARAM pTrail, pFirst ;
    
    pFirst = pTrail = pUsedParam ;
    while ( pUsedParam ) {
        if ( pUsedParam -> param = nb ) {
            if ( pTrail == pFirst ) 
                pFirst = pUsedParam -> next ;
            else 
                pTrail -> next = pUsedParam -> next ;
            FreeUsedParam(pUsedParam);
            return (pFirst);
        }
        pTrail = pUsedParam ;
        pUsedParam = pUsedParam -> next ;
    }
    return (pFirst);
}

/******************************************************************
       CopyUsedParam : Copy a used param list
   *******************************************************************/ 
PUSED_PARAM CopyUsedParam ( PUSED_PARAM pUsedParam )
{
    PUSED_PARAM myPoint ;
    
    if ( !pUsedParam ) 
        return ((PUSED_PARAM)0);
    myPoint = AllocUsedParam();
    myPoint -> param = pUsedParam -> param ;
    myPoint -> next = CopyUsedParam(pUsedParam -> next);
    return (myPoint);
}

/******************************************************************
       CopyCondTree : Copy a cond tree
   *******************************************************************/ 
PCONDDECELEM CopyCondTree ( PCONDDECELEM pCondDecElem )
{
    PCONDDECELEM    pNewCondDecElem ;
    
    if ( !pCondDecElem ) 
        return ((PCONDDECELEM)0);
    pNewCondDecElem = AllocCondDecElem();
    pNewCondDecElem -> p_tree = pCondDecElem -> p_tree ;
    pNewCondDecElem -> used_param = CopyUsedParam(pCondDecElem
         -> used_param);
    pNewCondDecElem -> f_val = CopyCondTree(pCondDecElem -> f_val);
    pNewCondDecElem -> t_val = CopyCondTree(pCondDecElem -> t_val);
    return (pNewCondDecElem);
}

/******************************************************************
      CreerCondDecElem : insert or delete a param in a leaf of cond tree
   *******************************************************************/ 
void CreerCondDecElem ( PCONDDECELEM pCondDecElem, int nb, int add
        , PCOND_VALUE pCondValue, char *name )
{
    int condition ;
    
    if ( !pCondValue ) 
        if ( add ) 
            pCondDecElem -> used_param = AddUsedParam(pCondDecElem
                     -> used_param
                , nb, name);
        else 
            pCondDecElem -> used_param = RemoveUsedParam(pCondDecElem
                     -> used_param
                , nb);
    else {
        pCondDecElem -> f_val = AllocCondDecElem();
        pCondDecElem -> t_val = AllocCondDecElem();
        pCondDecElem -> p_tree = pCondValue -> p_tree ;
        pCondDecElem -> t_val -> used_param = CopyUsedParam(pCondDecElem
             -> used_param);
        pCondDecElem -> f_val -> used_param = pCondDecElem -> used_param ;
        pCondDecElem -> used_param = (PUSED_PARAM)0 ;
        condition = pCondValue -> condition ;
        pCondValue = pCondValue -> next ;
        if ( condition ) 
            CreerCondDecElem(pCondDecElem -> t_val, nb, add, pCondValue
                , name);
        else 
            CreerCondDecElem(pCondDecElem -> f_val, nb, add, pCondValue
                , name);
        return ;
    }
}

/******************************************************************
      ForAllLeaves : insert or delete a param in leaves of cond tree
   *******************************************************************/ 
void ForAllLeaves ( PCONDDECELEM pCondDecElem, int nb, int add
        , PCOND_VALUE pCondValue, char *name )
{
    
    /* supposition : cond always appear in same order . Otherwise
       we should test for every condition in stack */ 
    if ( pCondDecElem -> p_tree ) {
        ManageCond(pCondDecElem -> f_val, nb, add, pCondValue, name);
        ManageCond(pCondDecElem -> t_val, nb, add, pCondValue, name);
        return ;
    }
    CreerCondDecElem(pCondDecElem, nb, add, pCondValue, name);
}

/******************************************************************
      ManageCond : insert or delete a param in a cond tree
   *******************************************************************/ 
void ManageCond ( PCONDDECELEM pCondDecElem, int nb, int add
        , PCOND_VALUE pCondValue, char *name )
{
    while ( pCondValue && pCondDecElem -> p_tree == pCondValue -> p_tree ) {
        if ( pCondValue -> condition ) 
            pCondDecElem = pCondDecElem -> t_val ;
        else 
            pCondDecElem = pCondDecElem -> f_val ;
        pCondValue = pCondValue -> next ;
    }
    ForAllLeaves(pCondDecElem, nb, add, pCondValue, name);
}

/******************************************************************
       AddCondDecElem : add/rem a dec elem matching current conditions
   *******************************************************************/ 
void AddCondDecElem ( PDECELEM pDecElem, int nb, int add )
{
    PCONDDECELEM    pCondDecElemF, pCondDecElemT, pCondDecElem ;
    
    if ( !pDecElem -> condition ) {
        pCondDecElemF = AllocCondDecElem();
        pCondDecElemF -> used_param = pDecElem -> used_param ;
        pDecElem -> used_param = (PUSED_PARAM)0 ;
        pCondDecElemT = AllocCondDecElem();
        pCondDecElemT -> used_param = CopyUsedParam(pCondDecElemF
             -> used_param);
        pCondDecElem = AllocCondDecElem();
        pCondDecElem -> p_tree = conditionHeader -> p_tree ;
        pCondDecElem -> f_val = pCondDecElemF ;
        pCondDecElem -> t_val = pCondDecElemT ;
        pDecElem -> condition = pCondDecElem ;
        AddCondDecElem(pDecElem, nb, add);
    } else 
        ManageCond(pDecElem -> condition, nb, add, conditionHeader
            , pDecElem -> string);
}

/******************************************************************
       DeclareUsed : declare the use of one son slot in an allowed pos
   *******************************************************************/ 
void DeclareUsed ( PDECELEM pDecElem, int nb )
{
    
    if ( !pDecElem -> condition && !conditionHeader ) 
        pDecElem -> used_param = AddUsedParam(pDecElem -> used_param, nb
            , pDecElem -> string);
    else 
        AddCondDecElem(pDecElem, nb, 1);
    pDecElem -> used = 1 ;
}

/******************************************************************
       DeclareUnUsed : declare that a son slot is not used
   *******************************************************************/ 
void DeclareUnUsed ( PDECELEM pDecElem, int nb )
{
    PUSED_PARAM pUsedParam;
    
    pUsedParam = pDecElem -> used_param ;
    if ( !pDecElem -> condition && !conditionHeader ) 
        pDecElem -> used_param = RemoveUsedParam(pUsedParam, nb);
    else 
        AddCondDecElem(pDecElem, nb, 0);
}

/******************************************************************
       UseParam : declare the use of one son slot
   *******************************************************************/ 
void UseParam ( char *name, int nb )
{
    PDECELEM    pDecElem = SearchDecElem(name);
    register PDECELEM   pFollow ;
    
    pFollow = pDecElem ;
    if ( nb > pDecElem -> nb_param ) 
        Error(1, name, 1, nb);
    else {
        DeclareUsed(pDecElem, nb);
        pFollow = pDecElem -> equiv ;
        while ( pFollow != pDecElem ) {
            DeclareUsed(pFollow, nb);
            pFollow = pFollow -> equiv ;
        }
    }
}

/******************************************************************
       SetUse : declare that a pointer is used ( lists)
   *******************************************************************/ 
void SetUse ( char *name )
{
    PDECELEM    pDecElem = SearchDecElem(name);
    register PDECELEM   pFollow ;
    
    pDecElem -> used = 1 ;
    pFollow = pDecElem -> equiv ;
    while ( pFollow != pDecElem ) {
        pFollow -> used = 1 ;
        pFollow = pFollow -> equiv ;
    }
}

/******************************************************************
       MakeEquiv : make two pointers equivalent
   *******************************************************************/ 
void MakeEquiv ( char *name1, char *name2 )
{
    PDECELEM    pDecelem1 = SearchDecElem(name1);
    PDECELEM    pDecelem2 = SearchDecElem(name2);
    
    InitDecElem(pDecelem1 -> string, pDecelem2 -> nb_param);
    pDecelem1 -> used = 1 ;
    pDecelem1 -> used_param = CopyUsedParam(pDecelem2 -> used_param);
    pDecelem1 -> condition = CopyCondTree(pDecelem2 -> condition);
    pDecelem1 -> equiv = pDecelem2 -> equiv ;
    pDecelem2 -> equiv = pDecelem1 ;
}

/******************************************************************
       Reset : reset a son slot
   *******************************************************************/ 
void Reset ( char *name, int nb )
{
    PDECELEM    pDecElem = SearchDecElem(name);
    PDECELEM    pFollow ;
    
    pFollow = pDecElem ;
    if ( nb > pDecElem -> nb_param ) 
        Error(1, name, 1, nb);
    else {
        DeclareUnUsed(pDecElem, nb);
        pFollow = pDecElem -> equiv ;
        while ( pFollow != pDecElem ) {
            DeclareUnUsed(pFollow, nb);
            pFollow = pFollow -> equiv ;
        }
    }
}

/******************************************************************
       FuncName : initialize the name of current definition
   *******************************************************************/ 
void FuncName ( char *name )
{
    header.func_name = name ;
}

/******************************************************************
       FuncFree : free the memory used by the structures of a function
   *******************************************************************/ 
int warningOk = 1 ;

void FuncFree ()
{
    PDECELEM    pDecElem, oldDecElem ;
    
    oldDecElem = pDecElem = header.list ;
    while ( pDecElem ) {
        if ( warningOk ) {
            if ( !pDecElem -> used ) 
                Error(3, pDecElem -> string, 0, 0);
            FreeUsedParamList(pDecElem -> used_param);
            FreeCondDecElem(pDecElem -> condition);
            free(pDecElem -> string);
            pDecElem = pDecElem -> next ;
            FreeDecElem(header.list);
            header.list = pDecElem ;
        } else {
            if ( !pDecElem -> used ) {
                free(pDecElem -> string);
                if ( oldDecElem == pDecElem ) {
                    oldDecElem = pDecElem = pDecElem -> next ;
                    FreeDecElem(header.list);
                    header.list = oldDecElem ;
                } else {
                    oldDecElem -> next = pDecElem -> next ;
                    FreeDecElem(pDecElem);
                    pDecElem = oldDecElem -> next ;
                }
            } else {
                oldDecElem = pDecElem ;
                pDecElem = pDecElem -> next ;
            }
        }
    }
}

/******************************************************************
       FuncLibre : free the trees allocated by a function
   *******************************************************************/ 
void FuncLibre ()
{
    PDECELEM    pDecElem ;
    int i = 0 ;
    char    string [20];
    
    pDecElem = header.list ;
    if ( !pDecElem ) 
        return ;
    WriteString("{");
    NewLine();
    Tab();
    Mark();
    while ( pDecElem ) {
        i++ ;
        pDecElem = pDecElem -> next ;
    }
    WriteString("MulFreeTree(");
    itoa(i, string, 10);
    WriteString(string);
    pDecElem = header.list ;
    while ( pDecElem ) {
        WriteString(",");
        WriteString(pDecElem -> string);
        pDecElem = pDecElem -> next ;
    }
    WriteString(");");
    UnMark();
    NewLine();
    WriteString("}");
    NewLine();
}

