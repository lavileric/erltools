/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
/* Copyright(C) 1995 Eric Lavillonniere */
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
language java;

#include "token.h"
#include <sys/types.h>
#include "java.h"
#include <fcntl.h>
#include "decjava.h"

int     ChopTree (PTREE) ;
void    decomp (PTREE) ;
void    copy () ;

class QuickProgErlms : public java {
    
    public :
    
        QuickProgErlms ()
        {
        }
        
        ~QuickProgErlms ()
        {
        }
        
        virtual PPTREE main_entry ( int error_free )
        {
            return quick_prog(error_free);
        }
};

static  void ReadIncludeSN ( const char *name, int here )
{
    QuickProgErlms().ReadInclude(name, here);
}

DecompJava  *DecompJava::ptDecomp ;

int main ( int argc, char **argv )
{
    PTREE       tree ;
    char        name [50];
    char        *ptName ;
    DecompJava  decomp ;
    bool        noHeader = false ;
    bool        dumpTree = false ;
    
    DecompJava::ptDecomp  =  &decomp ;
    DecompCplus::ptDecomp =  &decomp ;
    MetaInit((char *)0);
    java().AsLanguage();
    ReadIncludeSN("c.set", 1);
    
    int offset = 0 ;
    
    while ( true ) {
        if ( argc - offset < 2 ) {
            sprintf(name, "Bad name for your source file \n");
            _write(2, name, strlen(name));
            exit(0);
        } else {
            ptName =  *(argv + 1 + offset);
            if ( EString("-flat") == ptName ) {
                decomp.FlatFunct(true);
            } else if ( EString("-c") == ptName ) {
                noHeader =  true ;
            } else if ( EString("-dumptree") == ptName ) {
                dumpTree =  true ;
            } else 
                break ;
            offset += 1 ;
        }
    }
    dumpCoord =  0 ;
    tree      =  java().ReadFile(ptName);
    AddRef(tree);
    
    // if allready an error return
    if ( !firstError ) 
        return 1 ;
    
    // suppress none without comments
    foreach (<NONE>,tree,{
        PTREE   list = for_elem ;
        PTREE   nil ;
        if ( !IsComm(list, POST) && !IsComm(list, PRE) ) {
            list     =  list ^ ;
            for_elem =  list ^ ;
            list     += nil ;
        }
    })
    
    // print copyright
    // copy();
    // compute
    if ( dumpTree ) {
        <NL>
        DumpTree(tree);
        <NL>
    }
    firstError &= !ChopTree(tree);
    MetaEnd();
    if ( firstError ) 
        return 0 ;
    else 
        return 1 ;
}

int ChopTree ( PTREE tree )
{
    
    // DumpTree(tree);
    DecompJava::ptDecomp->ChopTree(tree);
    
    // DumpTree(tree);
    return 0 ;
}

/******************************************************************
   
     copy : copyright ;
   
   *******************************************************************/
void copy ()
{
    const char  *str ; // string used as intermediate pointer
    
    // display all necessary warning
    // warning vary depending on erlms or erlmsch
    // c/c++ version
    str =  "\n\r Java PrettyPrinter version 1.0, CopyRight(C) 99 Eric Lavillonniere \n\r";
    _write(output, str, strlen(str));
    str =  " Java PrettyPrinter  comes with ABSOLUTELY NO WARRANTY.\n\r";
    _write(output, str, strlen(str));
    str =  " This is free software, and you are welcome to redistribute it \n\r";
    _write(output, str, strlen(str));
    str =  " under certain conditions.\n\r";
    _write(output, str, strlen(str));
    str =  " For details see file COPYING in Java directory.\n\r\n\r";
    _write(output, str, strlen(str));
}


