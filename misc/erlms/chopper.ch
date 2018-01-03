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
language msc;

#include "token.h"
#include <sys/types.h>
#include "compute.h"
#include "msc.h"
#include "deccplus.h"
#include <fcntl.h>

int     ChopTree (PTREE, bool, char *) ;
void    decomp (PTREE) ;
void    copy () ;

class QuickProgErlms : public msc {
    
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

int main ( int argc, char **argv )
{
    PTREE       tree ;
    char        name [50];
    char        *ptName ;
    DecompCplus decomp ;
    bool        noHeader = false ;
    
    DecompCplus::ptDecomp =  &decomp ;
    MetaInit();
    msc().AsLanguage();
    ReadIncludeSN("c.set", 1);
    if ( argc < 2 ) {
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(0);
    } else {
        ptName =  *(argv + 1);
        if ( argc >= 3 && !strcmp(ptName, "-c") ) {
            noHeader =  true ;
            ptName   =  *(argv + 2);
        }
    }
    
    //    dumpCoord = 0 ;
    tree =  msc().ReadFile(ptName);
    AddRef(tree);
    
    // if allready an error return
    if ( !firstError ) 
        return 1 ;
    
    // print copyright
    copy();
    
    // compute
    firstError &= !ChopTree(tree, noHeader, ptName);
    MetaEnd();
    if ( firstError ) 
        return 0 ;
    else 
        return 1 ;
}


