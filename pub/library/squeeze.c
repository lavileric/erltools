/* This file is part of metachop                                            
   
   Metachop provide the tools to prettyprint or modify trees generated
   by metagen.
   
   It runs on dos and unix. It generates c code. */
/* Copyright(C) 1989 Eric Lavillonniere */
/* This file is part of metachop                                            
   
   Metachop provide the tools to prettyprint or modify trees generated
   by metagen.
   
   It runs on dos and unix. It generates c code. */
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
/*
   static int _list_first;
   define SqueezeRec(father,pos)
   PPTREE father;
   int pos ;
   {
    ATREE res,name;
    int my_list_first = _list_first;
    if (match(<>,())) return;
    if (treearity(<>) == 1 && match(<>,<,res=<META>>) && father) {
     ReplaceTree(father,pos,res);
    } else if (match(<>,<IN_LANGUAGE,name,res>)) {
     in Value(name) SqueezeRec(res,(PPTREE) 0,-1);
    } else {
     forallsons(<>,{
   	  if (for_elem)  {
   		  if (match(<>,<LIST>) && ranktree(for_elem) == 2) */
/* second son of list */
/*           _list_first = 0;
   else */
/* otherwise */
/*
   			  _list_first = 1;
   		  SqueezeRec(for_elem,<>,ranktree(for_elem));
   	  }
     })
     if (match(<>,<LIST,res=<META>,()>) && father && my_list_first) {
   	  ReplaceTree(father,pos,res);
     }
    }
    _list_first = my_list_first;
   }
   
   define SqueezeMeta()
   {
    _list_first = 1;
    SqueezeRec(<>,(PPTREE)0,-1);
   }
   
   define PullComment()
   {
    ATREE inter;
    inter = <META,"toto">;
    foreach(inter,_current, {
     ATREE list_dest,list_source,son;
     ATREE term;
     if(for_elem && treearity(for_elem) == 1 
   		&& match(for_elem,<,term = <TERM_TREE>>)) {
   	  list_source = SonTree(term,0);
   	  if (list_source) {
   		  list_dest = SonTree(for_elem,0);
   		  ReplaceTree(for_elem,0,AddList(list_dest,list_source));
   	  }
     }
    })
   }   */
/******************************************************************
   SqueezeMeta : if a meta is the daughter of a unary node
   	change father with meta
   	idem daughter of list of length 1
    *******************************************************************/
static int  _list_first ;

void _fastcall SqueezeRec ( register PPTREE _current, PPTREE father, int pos )
{
    PPTREE  res = (PPTREE)0, name ;
    int     my_list_first = _list_first, for_slot, arity, node_number ;
    
tail_recur : 
    if ( !_current || (node_number = NumberTree(_current)) == TERM_TREE ) 
        return ;
    if ( (arity = treearity(_current)) == 1 && NumberTree((res = SonTree(_current, 1))) == META && father ) {
        ReplaceTree(father, pos, res);
        SqueezeRec(res, father, pos);
    } else {
#       if 1
            {
                if ( node_number == LIST && !SonTree(_current, 2) && NumberTree((res = SonTree(_current, 1))) == META && my_list_first && father ) 
                    ReplaceTree(father, pos, res);
                else {
                    for ( for_slot = 1 ; for_slot <= arity ; for_slot++ ) {
                        res =  SonTree(_current, for_slot);
                        if ( node_number != LIST || for_slot == 1 ) {
                            _list_first =  1 ;
                            SqueezeRec(res, _current, for_slot);
                        } else {
                            
                            /* 2nd of list*/
                            _list_first   =  0 ;
                            father        =  _current ;
                            _current      =  res ;
                            pos           =  for_slot ;
			    res           =  (PPTREE) 0 ;
                            my_list_first =  0 ;
                            goto tail_recur ;
                            
                            // SqueezeRec(res, _current, for_slot);
                        }
                    }
                }
            }
#       else 
            {
                for ( for_slot = 1 ; for_slot <= arity ; for_slot++ ) {
                    res =  SonTree(_current, for_slot);
                    if ( node_number == LIST && for_slot == 2 ) 
                        /* 2nd of list*/
                        _list_first =  0 ;
                    else 
                        _list_first =  1 ;
                    SqueezeRec(res, _current, for_slot);
                }
                if ( node_number == LIST && !SonTree(_current, 2) && NumberTree((res = SonTree(_current, 1))) == META && my_list_first && father ) 
                    ReplaceTree(father, pos, res);
            }
#       endif
    }
    _list_first =  my_list_first ;
}

void _fastcall SqueezeMeta ( register PPTREE _current )
{
    _list_first =  1 ;
    SqueezeRec(_current, (PPTREE)0, -1);
}

void _fastcall PullComment ( PPTREE _current )
{
    PPTREE  list_source, list_dest, father ;
    int     arity, for_slot, node_number ;
    PPTREE  comm ;
    
debut : 
    if ( !_current ) 
        return ;
#   if 0
        
        /* frame all comments of the node */
        comm =  COMM_SON_VALUE(_current);
        while ( comm ) {
            PPTREE  son = SonTree(SonTree(comm, 1), 1);
            if ( SonTree(son, 2) ) 
                Frame(son);
            comm =  SonTree(comm, 2);
        }
#   endif
    if ( (node_number = NumberTree(_current)) == TERM_TREE ) {
        list_source =  SonTree(_current, 0);
        if ( list_source ) {
            father =  FatherTree(_current);
            replacetree(father, 0, AddListList(SonTree(father, 0), list_source));
        }
    } else {
        arity =  treearity(_current);
        for ( for_slot = arity - 1 ; for_slot > 0 ; for_slot-- ) 
            PullComment(SonTree(_current, for_slot));
        if ( arity > 0 ) {
            _current =  SonTree(_current, arity);
            goto debut ;
        }
    }
}
