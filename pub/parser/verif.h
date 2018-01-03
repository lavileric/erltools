/*************************************************************************/
/*                                                                       */
/*        Verif.h   - Built by Loic Fournier  08/01/98                   */
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
    int             param ;
    struct usedParam *next ;
}   USED_PARAM,     *PUSED_PARAM ;

typedef struct condDecElem {
    PPTREE            p_tree ;
    struct condDecElem *t_val ;
    struct condDecElem *f_val ;
    PUSED_PARAM       used_param ;
}   CONDDECELEM,    *PCONDDECELEM ;

typedef struct decElem {
    char            *string ;
    int             used ;
    int             nb_param ;
    PCONDDECELEM    condition ;
    PUSED_PARAM     used_param ;
    struct decElem   *equiv ;
    struct decElem   *next ;
}   DECELEM,    *PDECELEM ;

typedef struct condValue {
    PPTREE          p_tree ;
    int             condition ;
    struct condValue *next ;
}   COND_VALUE,     *PCOND_VALUE ;

static struct {
    DECELEM *list ;
    DECELEM *free ;
    char    *func_name ;
} header = {(PDECELEM)0, (PDECELEM)0, (char *)0 };
