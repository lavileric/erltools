/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 93     */
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

#include <stdio.h>
#include <stdlib.h>
#include "deccplus.h"
#include <fcntl.h>

class SDecomp : public DecompCplus {
    
    public :
    
        SDecomp ()
            : DecompCplus()
        {
        }
        
        virtual ~SDecomp ()
        {
        }
        
        virtual void copy ( void )
        {
        }
};
DecompCplus *DecompCplus::ptDecomp = 0 ;
int         nbOpenComment = 0 ;
char        *DecToIdent (PTREE) ;
int         hasGotError = 0 ;

typedef struct type_def {
    char           *name ;
    struct type_def *next ;
}   TYP_DEF,    *PTYP_DEF ;

PTYP_DEF    listTypDef = (PTYP_DEF)0 ;

/**************************************************************
       AllocTypDef : declare an ident as typedef
   ***************************************************************/
void AllocTypDef ( char *name )
{
    PTYP_DEF    point = (PTYP_DEF)malloc(sizeof(TYP_DEF));
    
    point->next =  listTypDef ;
    point->name =  AllocString(name);
    listTypDef  =  point ;
}

/**************************************************************
       IsTypDef
   ***************************************************************/
int IsTypDef ( char *name )
{
    register PTYP_DEF   point = listTypDef ;
    
    while ( point ) {
        if ( !strcmp(point->name, name) ) 
            return 1 ;
        point =  point->next ;
    }
    return 0 ;
}

/**************************************************************
       TypDef : called on a typedef tree
   ***************************************************************/
void TypDef ( PTREE tree )
{
    PTREE   list = tree ;
    
    while ( list ) {
        tree =  SonTree(list, 1);
        list =  SonTree(list, 2);
        while ( tree != <TERM_TREE> ) {
            if ( tree != <RANGE_MODIFIER,<>,tree> ) 
                tree == <,tree>;
        }
        AllocTypDef(BrainyValue(tree));
    }
}

typedef struct range_modif {
    char              *name ;
    struct range_modif *next ;
}   RANGE_MODIF,    *PRANGE_MODIF ;

PRANGE_MODIF    listRangeModifier = (PRANGE_MODIF)0 ;

/**************************************************************
       AllocTypDef : declare an ident as typedef
   ***************************************************************/
static  void AllocRange ( char *name )
{
    PRANGE_MODIF    point = (PRANGE_MODIF)malloc(sizeof(RANGE_MODIF));
    
    point->next       =  listRangeModifier ;
    point->name       =  AllocString(name);
    listRangeModifier =  point ;
}

/**************************************************************
       IsRange
   ***************************************************************/
int IsRange ( char *name )
{
    register PRANGE_MODIF   point = listRangeModifier ;
    
    while ( point ) {
        if ( !strcmp(point->name, name) ) 
            return 1 ;
        point =  point->next ;
    }
    return 0 ;
}

/**************************************************************
       RangeModif : call on a new range modifier
   ***************************************************************/
void Range ( PTREE tree )
{
    AllocRange(BrainyValue(tree));
}

/**************************************************************
       AnalyseRange : analyse a string containing a range modifier
   ***************************************************************/
void AnalyseRange ( char *content )
{
    AllocRange(content);
}

/**************************************************************
       AnalyzeTab : modify tab value
   ***************************************************************/
void AnalyzeTab ( PPTREE tree )
{
    int i ;
    
    sscanf(value(tree), "%d", &i);
    tabValue =  i ;
}

/**************************************************************
       AnalyzeMargin : modify margin value
   ***************************************************************/
void AnalyzeMargin ( PPTREE tree )
{
    int i ;
    
    sscanf(value(tree), "%d", &i);
    rightMargin =  i ;
}

/**************************************************************
       AnalyzeMode : put in ansi or ritchie mode
   ***************************************************************/
int ansiMode = 0 ;

void AnalyzeMode ( PPTREE tree )
{
    ansiMode =  !strcmp(value(tree), "ansi");
}

/**************************************************************
       AnalyzeEnumVert : put enum vertical or not
   ***************************************************************/
bool    enumVert = false ;

void AnalyzeEnumVert ( PPTREE tree )
{
    EString mode = EString(Value(tree)).ToUpper();
    
    enumVert =  mode == "TRUE";
}

/**************************************************************
       AnalyzeParameterFunctUnd : parameter function under
   ***************************************************************/
bool    parameterUnderTab = false ;

void AnalyzeParameterFunctUnd ( PPTREE tree )
{
    EString mode = EString(Value(tree)).ToUpper();
    
    parameterUnderTab =  mode == "TRUE";
}

/**************************************************************
       AnalyzeTabDirective : tabulates #*
   ***************************************************************/
bool    tabDirective = true ;

void AnalyzeTabDirective ( PPTREE tree )
{
    EString mode = EString(Value(tree)).ToUpper();
    
    tabDirective =  mode == "TRUE";
}

/**************************************************************
       AnalyzeSpaceArrow : put a space around arrow
   ***************************************************************/
bool    spaceArrow = false ;

void AnalyzeSpaceArrow ( PPTREE tree )
{
    EString mode = EString(Value(tree)).ToUpper();
    
    spaceArrow =  mode == "TRUE";
}

/**************************************************************
       AnalyzeBraceAlign : align brace on code or not
   ***************************************************************/
bool    braceAlign = false ;
bool    braceAlignTabFunc = false ;
bool    braceAlignNoFunc = false ;

void AnalyzeBraceAlign ( PPTREE tree )
{
    braceAlign        =  !strcmp(value(tree), "code");
    braceAlignTabFunc =  !strcmp(value(tree), "code_tab_func");
    braceAlignNoFunc  =  !strcmp(value(tree), "code_no_func");
    if ( braceAlignTabFunc ) {
        braceAlign       =  true ;
        braceAlignNoFunc =  false ;
    }
    if ( braceAlignNoFunc ) {
        braceAlign        =  true ;
        braceAlignTabFunc =  false ;
    }
    if ( braceAlign || braceAlignTabFunc || braceAlignNoFunc ) 
        ansiMode =  1 ;
}

/**************************************************************
       AnalyzeIndentFunctionType : indent the type of a function
   ***************************************************************/
int indentFunctionType = 0 ;

void AnalyzeIndentFunctionType ( PPTREE tree )
{
    indentFunctionType =  !strcmp(value(tree), "On") || !strcmp(value(tree), "ON") || !strcmp(value(tree), "on");
}

/**************************************************************
       AnalyzeAssignAlign : tell if assignments are to be aligned
   ***************************************************************/
int assignAlign = 0 ;

void AnalyzeAssignAlign ( PPTREE tree )
{
    assignAlign =  !strcmp(value(tree), "On") || !strcmp(value(tree), "ON") || !strcmp(value(tree), "on");
}

/**************************************************************
       AnalyzeDeclAlign : tell if decl type are to be aligned
   ***************************************************************/
int declAlign = 1 ;

void AnalyzeDeclAlign ( PPTREE tree )
{
    declAlign =  !strcmp(value(tree), "On") || !strcmp(value(tree), "ON") || !strcmp(value(tree), "on");
}

/**************************************************************
       AnalyzeSimplify : simplify or not
   ***************************************************************/
void AnalyzeSimplify ( PPTREE tree )
{
    DecompCplus::ptDecomp->simplifyExpression =  !strcmp(value(tree), "On") || !strcmp(value(tree), "ON") || !strcmp(value(tree), "on");
}

/**************************************************************
       AnalyzeSingleSwitchIndent : indent single instruction in switch or
                                   not
   ***************************************************************/
int singleSwitchIndent = 1 ;

void AnalyzeSingleSwitchIndent ( PPTREE tree )
{
    singleSwitchIndent =  !strcmp(value(tree), "On") || !strcmp(value(tree), "ON") || !strcmp(value(tree), "on");
}

/**************************************************************
       AnalyzeComment : get beginning and end of comment ;
   ***************************************************************/
//    char    *startComment = 0, *middleComment = 0, *endComment = 0, 
//        *plusComment = 0 ;
void AnalyzeComment ( PPTREE tree )
{
    tree =  sontree(tree, 1);
    switch ( NumberTree(tree) ) {
        case COMMENT_START_cplus : 
            DecompCplus::ptDecomp->startComment = AllocString(value(tree));
            break ;
        case COMMENT_MIDDLE_cplus : 
            DecompCplus::ptDecomp->middleComment = AllocString(value(tree));
            break ;
        case COMMENT_END_cplus : 
            DecompCplus::ptDecomp->endComment = AllocString(value(tree));
            break ;
        case COMMENT_PLUS_cplus : 
            DecompCplus::ptDecomp->plusComment = AllocString(value(tree));
            break ;
    }
}

/**************************************************************
       DeclToIdent : extract ident of a declarator
   ***************************************************************/
char *DecToIdent ( PTREE tree )
{
    while ( NumberTree(tree) == RANGE_MODIFIER_cplus ) 
        tree =  SonTree(tree, 2);
    return AllocString(BrainyValue(tree));
}

extern int  ptOldBuf, line, col, posBufInput, lBufInput, tokenAhead ;
extern long posFileInput ;

/**************************************************************
       ReadIncludeS : read an include file
   ***************************************************************/
void ReadIncludeS ( const char *name, int here )
{
    FreeTree(QuickCplus().ReadInclude(name, here));
}

/**************************************************************
      AnalyzeFuncHeader : analyze func header
   ***************************************************************/
void AnalyzeFuncHeader ( PPTREE tree )
{
    DecompCplus::ptDecomp->funcHeader =  AllocString(value(tree));
}

/**************************************************************
      AnalyzeParameters : analyze parameters
   ***************************************************************/
void AnalyzeParameters ( PPTREE tree )
{
    DecompCplus::ptDecomp->parameters =  AllocString(value(tree));
}


