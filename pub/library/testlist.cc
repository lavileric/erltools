
#line 1 "testlist.ch"
/*************************************************************************/
#line 1 "testlist.ch"
/*                                                                       */
#line 1 "testlist.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 1 "testlist.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 1 "testlist.ch"
/*                  Eric Lavillonniere                                   */
#line 1 "testlist.ch"
/*                                                                       */
#line 1 "testlist.ch"
/*************************************************************************/
#line 1 "testlist.ch"
#line 1 "testlist.ch"
#include "token.h"
#line 1 "testlist.ch"
extern int _retVal[50];
#line 1 "testlist.ch"
extern PPTREE _storeVal[50],_nextVal;
#line 1 "testlist.ch"
extern PPTREE stackTree[1024];
#line 1 "testlist.ch"
extern int ptStackTree;
#line 1 "testlist.ch"
#define decomp decomp_metalang
#line 1 "testlist.ch"
#line 1 "testlist.ch"
#ifndef for_elem
#line 1 "testlist.ch"
#line 1 "testlist.ch"
#define for_elem _for_elem
#line 1 "testlist.ch"
#endif
#ifdef INCONNU
#line 1 "testlist.ch"
#line 1 "testlist.ch"
PTREE   for_elem ;
#line 1 "testlist.ch"
#line 1 "testlist.ch"
#endif
#include "tablist.h"

#line 5 "testlist.ch"
#line 5 "testlist.ch"
main ()
#line 5 "testlist.ch"
{
#line 5 "testlist.ch"
#line 7 "testlist.ch"
    PTREE   list ;
#line 7 "testlist.ch"
#line 7 "testlist.ch"
#line 9 "testlist.ch"
    MetaInit();
#line 9 "testlist.ch"
#line 10 "testlist.ch"
    output = 2 ;
#line 10 "testlist.ch"
#line 11 "testlist.ch"
    {
#line 11 "testlist.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 11 "testlist.ch"
        _ptTree0 = (PPTREE) 0;
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("10") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("4") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("4") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("1") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("10") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("9") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("3") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("9") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("10") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("20") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("20") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("21") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        {
#line 11 "testlist.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 11 "testlist.ch"
            _ptTree1 = MakeString("3") ;
#line 11 "testlist.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 11 "testlist.ch"
        }
#line 11 "testlist.ch"
        list = _ptTree0;
#line 11 "testlist.ch"
        ;
#line 11 "testlist.ch"
    }
#line 11 "testlist.ch"
#line 11 "testlist.ch"
#line 14 "testlist.ch"
    TabList tablist (list) ;
#line 14 "testlist.ch"
#line 16 "testlist.ch"
    tablist.Sort();
#line 16 "testlist.ch"
#line 17 "testlist.ch"
    tablist.Debug();
#line 17 "testlist.ch"
#line 18 "testlist.ch"
}
#line 18 "testlist.ch"
/*Well done my boy */ 
#line 18 "testlist.ch"

