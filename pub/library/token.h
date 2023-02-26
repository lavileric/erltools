/*************************************************************************/
/*                                                                       */
/*        token.h - Built by Eric Lavillonniere on Tandon 386 - 89  */
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
/*
   Eric Lavillonniere - 26 January 1994
     Add Functions for storing position in tree GetPosComment ....
   Eric Lavillonniere - 12 October 1993
     Remove arity tab since it is coded in the nodes
   Eric Lavillonniere - 4 October 1993
     Modify *_EXIT macros. They dont call any longer sprintf
   Jean-Philippe Jouve - 29 September 1993
     Add facilities for debugging ;
     Add GetErrorLine GetErrorToken ResetError ;
   */
#ifndef TOKEN_LOADED
#   define TOKEN_LOADED 1
#   include "smtoken.h"
#   include <stdio.h>
#   include <string.h>
#   include <sys/types.h>
#   include <sys/stat.h>
#   define _far 
#   define __far 
#   if 1
#       define PARAM(y) y
#   else 
#       define PARAM(y) ()
#   endif
#   if defined(DEFINE_LOWER_UPPER)
#       undef toupper
#       undef tolower
#       define toupper(x) ((x>='a' && x<= 'z')? x+'A'-'a':x)
#       define tolower(x) ((x>='A' && x<= 'Z')? x+'a'-'A':x)
#   endif
#   if defined(INCLUDE_WINSOCK2)
#       ifndef NO_WINSOCK2
#           include <winsock2.h>
#       endif
#   endif
    
    // pthread
#   ifdef HAS_P_THREAD
#       include <pthread.h>
        typedef void    *(*LPTHREAD_START_ROUTINE)(void *) ;
#       define LPVOID void *
#       define DWORD int 
#       define WINAPI 
#       define HANDLE_SEMAPHORE pthread_mutex_t  *
#   endif
    
    // ipc functionnalities
#   ifdef HAS_IPC_FUNCT
#   endif
    
    // posix semaphore
#   ifdef HAS_POSIX_SEMAPHORE
#       include <semaphore.h>
#       define HANDLE_SEMAPHORE_POSIX sem_t *
#       define SEM_OPEN sem_open
#       define SEM_UNLINK sem_unlink
#       define SEM_WAIT sem_wait
#       define SEM_POST sem_post
#   endif
    
    // signal
#   if defined(HAS_SIGNAL)
#       include <signal.h>
#       include <setjmp.h>
#       define SIZE_JUMP 64
        typedef void    (*PT_SIGN)(int) ;
        extern jmp_buf  erljump [];
        extern int      erljumppos ;
        extern PT_SIGN  jumpfunc [SIZE_JUMP];
#   endif
    
    // most recent stl
#   if defined(MOST_RECENT_STL)
        using namespace std ;
#   endif
    
    typedef struct lex_struct {
        int     Value ;
        EString stringVal ;
        
        char *string ()
        {
            return (char *)(stringVal.c_str());
        }
        
        void AddChar ( char c )
        {
            stringVal += c ;
        }
        
        void AddString ( const char *string )
        {
            stringVal += string ;
        }
        
        unsigned int length ()
        {
            return stringVal.length();
        }
        
        void Erase ()
        {
            stringVal =  "";
        } //    char    string [MAXLENGTH];
    }   LEX_STRUCT ;
    
#   define UP_CASE 1
#   define LO_CASE 0
#   define MAX_TOKEN 2048 /* the number maximum of token */
    extern int  tabValue ;    /* la valeur du tab */ 
    extern int  rightMargin ; /* la valeur de la marge droite */ 
#   define SON_POS(tree, n) ((void **) ((char *) tree+2 * sizeof(int)	\
                                                   					+ 2*sizeof(PPTREE) + (n - 1) * sizeof (PPTREE)))
#   define TAB_SPACE tabValue
#   define TAB_VALUE(col, n) ( (col) + (n) * TAB_SPACE - (col) % TAB_SPACE)
#   define EQTYPE(x, y) ((x==y) || (x==POST && y == PREPOST))
    
    typedef struct list_tree {
        PPTREE          tree ;
        struct list_tree *Next ;
    }   LIST_TREE,  *PLIST_TREE ;
    
    /**************************************************************
               Functions of auxpars
       ***************************************************************/
    PLIST_TREE  _fastcall AllocListTree (PPTREE, PLIST_TREE) ;
    void        MulFreeTree (int, ...) ;
    void        _fastcall RemRef (PPTREE) ;    /* del a reference on a tree */ 
    void        _fastcall FreeUnRef (PPTREE) ; /* free a tree not referenced */ 
    PPTREE      _fastcall PSet (PPTREE, PPTREE) ;
    PPTREE      _fastcall SReplaceTree (PPTREE, int, PPTREE) ;
    PPTREE      _fastcall SFatherTree (PPTREE, int) ;
    int         _fastcall NumberRef (PPTREE) ;
    PPTREE      _fastcall ListElem (PPTREE) ;
    PPTREE      _fastcall MakeTreeRef (PPTREE reference) ;
    PPTREE      _fastcall GetTreeRef (PPTREE reference) ;
    PPTREE      _fastcall CommString (char *) ;
    PPTREE      ListPermutate (PPTREE list) ;
    PPTREE      ListFind (PPTREE, PPTREE) ;    /* first elem is list */ 
    char        *_fastcall BrainyValue (PPTREE) ;
    char        *_fastcall NameOfNode (char *) ;
    char        *_fastcall NameOfNodePlus (char *) ;
    char        *_fastcall NameOfNodeStrip (char *) ;
    char        *_fastcall NameLang (const char *) ;
    void        _fastcall TabInt () ;
    void        _fastcall TabVirtInt () ;
    void        _fastcall Tab () ;
    void        _fastcall NTab (int) ;
    void        _fastcall Space (int) ;
    void        _fastcall Mark () ;
    void        _fastcall UnMarkInt () ;
    void        _fastcall ClearMar () ;
    void        _fastcall UnMarkVirtInt () ;
    void        _fastcall UnMark () ;
    void        _fastcall GotoMarkInt () ;
    void        _fastcall GotoMarkVirtInt () ;
    void        _fastcall GotoMark () ;
    void        _fastcall GotoColInt (int) ;
    void        _fastcall GotoColVirtInt (int) ;
    void        _fastcall GotoCol (int) ;
    int         _fastcall Beginning () ;
    int         _fastcall GetString (const char *, int) ;
    int         _fastcall GetStringS (const char *, int) ;
    
    // char        *_fastcall GetLexString () ;
    char        _fastcall NextChar () ;
    void        _fastcall UnputBuf () ;
    void        _fastcall UnputChar (int) ;
    int         _fastcall ExtUnputBuf () ;
    PPTREE      _fastcall AddListList (PPTREE, PPTREE) ;
    void        _fastcall PrintError (const char *, const char *, int, int, int, int, int) ;
    void        _fastcall FreeTree (PPTREE) ;
    void        _fastcall FreeTreeRec (PPTREE) ;
    void        _fastcall CommTerm () ;
    void        _fastcall DumpError () ;
    int         _fastcall GetErrorLine () ;
    int         _fastcall GetTypeErr () ;
    char        *_fastcall GetErrorToken () ;
    char        *_fastcall GetExpectedToken () ;
    void        _fastcall ResetError () ;
    void        begin_comment () ;
    void        store_comment_line (int) ;
    int         AddConstVal (const char *, int) ;
    void        Flush () ;
    int         PrePost () ;
    int         FindConst (const char *) ;
    
    //inline void MetaInit ()
    //{
    //    MetaInit((char *)0);
    //}
    void        MetaEnd () ;
    EString     FindFile (const char *name, const char *env, int here) ;
    void        ClearStoreRef () ;
    void        ClearTreeStoreRef () ;
    long        CurrFilePosition () ;
    void        CurrFilePosition (long pos) ;
#   define MAXLENGTH 512
    
    typedef struct commElem {
        int            type, collected ;
        struct commElem *next ;
        PPTREE         content ;
    }   COMM_ELEM,  *PCOMM_ELEM ;
    
    typedef struct file_position {
        int                 marker ;
        char                charAhead ;
        long                position ;
        int                 oldPos, oldPosStock, lexElvalue ;
        char                *string, *stringStock, *lexElstring ;
        int                 line, col ;
        char                firstOnLine, tokenAhead, flagNewLine ;
        PPTREE              lastTree ;
        PCOMM_ELEM          comm ;
        int                 nbRef ;  /* number of references on this context */ 
        struct file_position *next ; /* next file_pos in list */ 
    }   FILE_POSITION,  *PFILE_POSITION ;
    
    extern PFILE_POSITION   lastContextPos ;
    PFILE_POSITION          _fastcall SavePos () ;
    int                     _fastcall RestorePos (PFILE_POSITION) ;
    void                    _fastcall FreePos (PFILE_POSITION) ;
    PCOMM_ELEM              _fastcall LookComm (int *) ;
    void                    _fastcall AddComm (register PCOMM_ELEM, int, PPTREE, PPTREE) ;
    PPTREE                  NextComm (PPTREE, int, PPTREE) ;
    PPTREE                  NextCommContent (PPTREE, PPTREE) ;
    void                    Frame (PPTREE) ;
#   define SON_READ(dad, n) LCacheRead((void **) (((char *)dad) + 2 * sizeof(int) + (n+1) * sizeof(PPTREE)))
#   define COMM_POS(node) ((char *) node + 2* sizeof(int) + sizeof(PPTREE))
#   define COMM_SON(node) (SonTree(tree,0))
#   define COMM_FATHER_VALUE(node) (NumberTree(SonTree(node,0)) != GEO ? node :\
                                                                                                          SonTree(node,0))
#   define COMM_SON_VALUE(node) (SonTree(COMM_FATHER_VALUE(node),0))
#   define COMM_POS_VALUE(node) (NumberTree(COMM_SON(node)) != GEO ? COMM_POS(node) :\
                                                                                                          COMM_POS(COMM_SON(node)))
#   define TERM_OR_META(x, y) (lexEl.Value == x || lexEl.Value ==META \
                                                                                                 || (PrintError(GetLexString(),y,oldLine,line,col,1,0),0))
#   define BUILD_TERM_META(x) (lexEl.Value ==META ?\
                                                                                         ( x =MakeTree(META,1),ReplaceTree(x,1,CommString(lexEl.string()))) \
                                                                                         : (x= CommString(lexEl.string())))
    extern char *currentLanguage ;
    extern int  ptStockBuf ;
    
    class CPTREE {
        
        private :
        
            PPTREE  *cStock ;
        
        public :
        
            CPTREE ( PPTREE *pt )
            {
                cStock =  pt ;
                if ( *pt ) 
                    AddRef(*pt);
            }
            
            ~CPTREE ()
            {
                if ( *cStock ) 
                    FreeRef(*cStock);
            }
    };
    
    /**************************************************************
               Functions of gesttok
       ***************************************************************/
    typedef struct stringElem {
        struct stringElem *next ;
        int              Value ;
        char             *string ;
    }   STRINGELEM ;
    
    typedef struct keyElem {
        struct keyElem *next ;
        char          *Value ;
        char          *string ;
    }   KEYELEM ;
    
    typedef struct _node {
        char        *name ;
        int         number ;
        int         arity ;
        struct _node *next ;
    }   NODE,   *PNODE ;
    
    typedef struct {
        char    *name ;
        int     offset ;
    }   OVER_LANG ;
    
    typedef struct over__lang {
        char             *name ;
        int              offset ;
        struct over__lang *next ;
    }   LOVER_LANG,     *PLOVER_LANG ;
    
    typedef struct lang {
        char        *name ;
        
        /* EL suppression le 12/10/93
           int (* FuncArity) (); */
        int         languageMask ;
        int         *arityNode ;
        STRINGELEM  *listConst ;
        PPTREE      (*parse_entry)(int) ;
        int         nbNode ;
        struct lang  *Next ;
        OVER_LANG   *overLang ;
    }   LANG,   *PLANG ;
    
    PLANG           GetLang (char *) ;
    PLANG           GetNodeLang (PPTREE) ;
    void            SwitchLangPoint (PLANG) ;
    void            SwitchLangMask (int) ;
    void            PatchNode (PPTREE, PLANG, int) ;
    extern PLANG    pCurrentLanguage ;
    extern int      isVirtMod ;
    extern int      currCol ;
    extern int      currLine ;
    extern int      firstError ;
    extern int      _inhibited ;
    char            *SymboName (const char *, int) ;
    PPTREE          AddToken (char *, char *, PPTREE) ;
    char            *NameConst (int) ;
    void            DumpToken (PPTREE, int, int, int) ;
    void            DumpConst (STRINGELEM *) ;
    int             AddConst (const char *) ;
    char            *AddKey (char *) ;
    
    typedef struct descript_elem {
        int                 numb ;   /* number of elem */ 
        char                *name ;  /* name of token */ 
        int                 offset ; /* number of procedure which get it */ 
        PPTREE              proc ;   /* lex procedure which get it */ 
        struct descript_elem *next ;
    }   DESCRIPT_ELEM,  *PDESCRIPT_ELEM ;
    
    /**************************************************************
               Functions of decomp
       ***************************************************************/
    void    _fastcall WriteStringInt (const char *, int len) ;
    void    _fastcall WriteStringVirtInt (const char *, int len) ;
    void    _fastcall WriteString (const char *, int len) ;
    void    _fastcall PrintString (const char *, int len) ;
    
    inline void _fastcall WriteStringInt ( const char *string )
    {
        if ( !string ) 
            return ;
        WriteStringInt(string, strlen(string));
    }
    
    inline void _fastcall WriteStringVirtInt ( const char *string )
    {
        if ( !string ) 
            return ;
        WriteStringVirtInt(string, strlen(string));
    }
    
    inline void _fastcall WriteString ( const char *string )
    {
        if ( !string ) 
            return ;
        WriteString(string, strlen(string));
    }
    
    inline void _fastcall PrintString ( const char *string )
    {
        if ( !string ) 
            return ;
        PrintString(string, strlen(string));
    }
    
    void    SepBefore () ;
    void    SepAfter () ;
    void    NoSep () ;
    
    /**************************************************************
               Functions of verif
       ***************************************************************/
    void    InsertDecElem (char *) ;
    void    SetUse (char *) ;
    void    UseParam (char *, int) ;
    void    InitDecElem (char *, int) ;
    int     IsDecDecElem (register char *) ;
    void    FuncName (char *) ;
    void    FuncFree () ;
    PPTREE  PrintComm (PPTREE, int, PPTREE) ;
    PPTREE  PrintCommVirt (PPTREE, int, PPTREE) ;
    PPTREE  PrintCommEInt (PPTREE, int, PPTREE, const char *, const char *, const char *) ;
    PPTREE  PrintCommEVirtInt (PPTREE, int, PPTREE, const char *, const char *, const char *) ;
    PPTREE  GetComm (PPTREE) ;
    PPTREE  PutComm (PPTREE, PPTREE) ;
    char    *IsComm (PPTREE, int) ;
    int     SizeComm (PPTREE) ;
#   define PrintCommE(x, y, z, t, u, v) (\
                                                                                         isVirtMod? PrintCommEVirtInt(x,y,z,t,u,v):PrintCommEInt(x,y,z,t,u,v))
    
    typedef struct var_struct {
        char             *name ;
        PPTREE           father ;
        int              slot ;
        PPTREE           elem ;
        struct var_struct *next ;
    }   VAR,    *PVAR ;
    
    /**************************************************************
              manipulation sur les coordonnees
       ***************************************************************/
    int         _fastcall GetMark () ;
    void        PutCoord (PPTREE, int, int, int, int) ;
    void        PutFlag (PPTREE, int) ;
    int         GetCoord (PPTREE, int *, int *, int *, int *) ;
    void        GetCoordAbs (PPTREE, PPTREE, int *, int *) ;
    void        MarkCoordTree (PPTREE, int, int) ;
    void        UnMarkCoordTree (PPTREE) ;
    int         GetFlag (PPTREE, int *) ;
    void        FreeCoord (PPTREE) ;
    
    /**************************************************************
               definition necessaires pour le bon fonctionnement
               du parseur
       ***************************************************************/
    /* EL le 26/1/94 rajout des methodes pour gerer les positions << */
    int         store_pos_as_comment (int, int, int) ;
    extern int  lexCallLex ; /* flags which tells that lex is calling lex */ 
    extern int  dumpCoord ;  /* flag that says if we must put
                                coord commentaries */ 
#   define POS_STUB "\002"
#   define POS_STUB_FORMAT "\002 %d %d"
# ifdef DUMP_COORD
#   define PUT_COORD_CALL {\
                                                                                                                                                 if (dumpCoord) {\
                                                                                                                                                     store_pos_as_comment(oldLine,oldCol,1);\
                                                                                                                                                 }}
#   define PUT_COORD_AFTER_COMMENTS_CALL {\
                                                                                                                                                 if (lexCallLex && dumpCoord) \
                                                                                                                                                     store_pos_as_comment (oldLineEntry, oldColEntry,0);\
                                                                                                                                                 lexCallLex = 0 ;}
# else 
#   define PUT_COORD_CALL {}
#   define PUT_COORD_AFTER_COMMENTS_CALL {}
# endif
#   define PUT_COORD \
                                                                                         /* put coords comment */\
                                                                                         WriteString("PUT_COORD_CALL;");\
                                                                                         NewLine();
#   define PUT_COORD_AFTER_COMMENTS \
                                                                                         /* put coords comment */\
                                                                                         WriteString("PUT_COORD_AFTER_COMMENTS_CALL;");\
                                                                                         NewLine();
#   define SEE_TOKEN(x, y) (lexEl.Value == x || \
                                                                                             (PrintError(GetLexString(),y,oldLine,line,col,1,0),0))
#   define TOKEN_EXIT(y, x) {\
                                                                                             PrintError(GetLexString(),x,oldLine,line,col,1,error_free);\
                                                                                             goto y ;\
                                                                                         } 
#   define CASE_EXIT(y, x) {\
                                                                                             PrintError(GetLexString(),x,oldLine,line,col,1,error_free);\
                                                                                             goto y ;\
                                                                                         }
#   define PROG_EXIT(y, x) {\
                                                                                             PrintError(GetLexString(),x,oldLine,line,col,2,error_free);\
                                                                                             goto y ;\
                                                                                         }
#   define LEX_EXIT_GOTO(y, x) {\
                                                                                             PrintError(GetLexString(),x,oldLine,line,col,0,error_free);\
                                                                                             goto y;\
                                                                                     }
#   define LEX_EXIT(y, x) {\
                                                                                             PrintError(GetLexString(),x,oldLine,line,col,0,0);\
                                                                                     }
#   define GET_ARRAY_VALUE(_tab, nb) (_tab[(nb)>>3] & (1 << ((nb) & 0x7)))
#   define SET_ARRAY_VALUE(_tab, nb) (_tab[(nb)>>3] \
                                                                                                         |= (1 << ((nb) & 0x7)))
#   define NOTHING 
#   define PUSH_CALL_QUICK(x) ( \
                                                                                             ((_value = ((_retValue = (x(0))) != (PPTREE) -1)) ? FreeTreeRec(_retValue) :0),\
                                                                                             _value)
#   define PUSH_CALL(x) \
                                                                                         (_filePosition = SavePos(),_value = ( (_retValue = x(0)) != (PPTREE) -1)\
                                                                                             ,FreeTreeRec(_retValue),RestorePos(_filePosition),\
                                                                                             FreePos(_filePosition),_value)
#   define PUSH_CALL_AFF(y, x) \
                                                                                         (_filePosition = SavePos(),_value = ((y x(0)) != (PPTREE) -1)\
                                                                                             ,_value || RestorePos(_filePosition),FreePos(_filePosition),_value)
#   define PUSH_CALL_AFF_QUICK(y, x) ((y x(0)) != (PPTREE) -1)
#   define PUSH_CALL_VERIF(x, lexOffset, lexFct, arrayEntry) \
                                                                                         ((tokenAhead == lexOffset || (lexFct(),TRACE_LEX(1))),\
                                                                                             (GET_ARRAY_VALUE(ptTokenArray [arrayEntry],lexEl.Value) \
                                                                                                   ? PUSH_CALL(x) : 0))
#   define PUSH_CALL_AFF_VERIF(y, x, lexOffset, lexFct, arrayEntry) \
                                                                                         ((tokenAhead == lexOffset || (lexFct(),TRACE_LEX(1))),\
                                                                                             (GET_ARRAY_VALUE(ptTokenArray [arrayEntry],lexEl.Value) \
                                                                                                   ? /* PUSH_CALL_AFF(y,x)*/\
                                                                                         (_filePosition = SavePos(),_value = ((y x(0)) != (PPTREE) -1)\
                                                                                             ,_value || RestorePos(_filePosition),\
                                                                                                                FreePos(_filePosition),_value) : 0))
#   define QUICK_CALL(x, lexOffset, lexFct, arrayEntry) \
                                                                                         ((tokenAhead == lexOffset || (lexFct(),TRACE_LEX(1))),\
                                                                                             (GET_ARRAY_VALUE(ptTokenArray [arrayEntry],lexEl.Value) \
                                                                                                   ? x : (PPTREE) -1))
#   define LEX_FUNCTION(arrayEntry, gramm) \
                                                                                                    (((gramm *)(rootGrammar()))->*(ptTokenFuncArray[arrayEntry]))
#   define LEX_FUNCTION_OFFSET(arrayEntry) (ptTokenNbFuncArray[arrayEntry])
#   define NPUSH_CALL_VERIF(x, arrayEntry, gramm) \
                                                                                         ( LEX_FUNCTION_OFFSET(arrayEntry) ?\
                                                                                         ((tokenAhead == LEX_FUNCTION_OFFSET(arrayEntry) \
                                                                                                         || (LEX_FUNCTION(arrayEntry,gramm)(),TRACE_LEX(1))),\
                                                                                             (GET_ARRAY_VALUE(ptTokenArray [arrayEntry],lexEl.Value) \
                                                                                                   ? PUSH_CALL(x) : 0))\
                                                                                             : PUSH_CALL(x))
#   define NPUSH_CALL_AFF_VERIF(y, x, arrayEntry, gramm) \
                                                                                             ( LEX_FUNCTION_OFFSET(arrayEntry) ?\
                                                                                             ((tokenAhead == LEX_FUNCTION_OFFSET(arrayEntry)\
                                                                                                                     || (LEX_FUNCTION(arrayEntry,gramm)(),TRACE_LEX(1))),\
                                                                                             (GET_ARRAY_VALUE(ptTokenArray [arrayEntry],lexEl.Value) \
                                                                                                   ? /* PUSH_CALL_AFF(y,x)*/\
                                                                                                 (_filePosition = SavePos(),_value = ((y x(0)) != (PPTREE) -1)\
                                                                                                 ,_value || RestorePos(_filePosition),\
                                                                                                                FreePos(_filePosition),_value) : 0))\
                                                                                                 /* PUSH_CALL_AFF(y,x)*/\
                                                                                             :(_filePosition = SavePos(),_value = ((y x(0)) != (PPTREE) -1)\
                                                                                                 ,_value || RestorePos(_filePosition),\
                                                                                                                FreePos(_filePosition),_value))
#   define NQUICK_CALL(x, arrayEntry, gramm) \
                                                                                         (LEX_FUNCTION_OFFSET(arrayEntry) ?\
                                                                                         ((tokenAhead == LEX_FUNCTION_OFFSET(arrayEntry) \
                                                                                                         || (LEX_FUNCTION(arrayEntry,gramm)(),TRACE_LEX(1))),\
                                                                                             (GET_ARRAY_VALUE(ptTokenArray [arrayEntry],lexEl.Value) \
                                                                                                   ? x : (PPTREE) -1))\
                                                                                          : x)
#   define TRACE_ENTER 1
#   define TRACE_RETURN 2
#   define TRACE_EXIT 3
#   define TRACE_MAX_DEPTH 40
#   ifdef ERL_DEBUG
        int _fastcall TraceRule (char *, int, PPTREE) ;
        int TraceLex () ;
#       define TRACE_LEX(x) TraceLex()
#       define TRACE_RULE(name, state, tree) TraceRule(name,state,tree)
#   else 
#       define TRACE_LEX(x) 1
#       define TRACE_RULE(name, state, tree) 1
#   endif
#   define PRE 1
#   define POST 2
#   define PREPOST 3
#   define META 4
#   define PRIORITY 5
#   define IN_LANGUAGE 5  /* used as maximum of common node */
    extern int      *tabArity ;
    extern int      (*FuncArity)() ;
    extern PPTREE   the_parse_entry (int) ;
#   define Arity(x) (*FuncArity)(x)
#   define _arityNode tabArity
    extern STRINGELEM   *listConst ;
    
    /* definitions used by metachop generator */
#   define PSET(x, y) (x = PSet(x,y))
#   define NEXT_L(x) (AddRef(_nextVal= x ? SonTree( x ,1):(PPTREE)0),PSET(x , x?SonTree(x,2):(PPTREE)0),RemRef(_nextVal),_nextVal)
#   define meta_father(x) (SearchVar(x))->father
#   define meta_pos(x) (SearchVar(x))->slot
#   define meta_elem(x) (SearchVar(x))->elem
#   define foreach(x, y, z) ForeachTree(x,y,z,(PPTREE)0,-1)
#   define PushTree(x) (stackTree[ptStackTree++] = x )
#   define PopTree (stackTree[--ptStackTree])
#   define gotocol(x) GotoCol(x)
#   define freevar FreeVar
#   define dumperror DumpError
    void    InitComp () ;
    void    InitOutput () ;
#   if !defined(VARARGS_2)
        void    TheConstructor (PPTREE(&stackTree)[1024], int &ptStackTree, int va_alist, ...) ;
        void    TheConstructor (int va_alist, ...) ;
#   else 
        void    TheConstructor (PPTREE(&stackTree)[1024], int &ptStackTree, int NodeType, ...) ;
        void    TheConstructor (int, ...) ;
#   endif
    void                AddLang (const char *, int *, STRINGELEM *, PPTREE(*func)(int), int, OVER_LANG *) ;
    extern int          oldLine ;
    extern int          oldCol ;
    extern int          oldLineEntry ;
    extern int          oldColEntry ;
    extern char         errStr [512];
    extern char         *_ptString ;
    extern int          _nbCharact ;
    
    // extern char         *stringlex ;
    extern LEX_STRUCT   lexEl ;
    extern int          line ;
    extern char         c ;
    extern int          tokenAhead ;
    extern int          ptStockBuf ;
    extern int          input ;
    extern int          col ;
    extern int          firstOnLine ;
    extern PPTREE       _lastTree ;
    extern int          _funcLevel ;
    extern PCOMM_ELEM   listComm ;
    extern int          input, output ;
#   define OUTPUT_IN_STRING -333
    extern EString  outputString ;
    extern int      keepOutputString ;
    
    inline void StartOutputString ()
    {
        Flush();
        keepOutputString =  output ;
        output           =  OUTPUT_IN_STRING ;
        outputString     =  "";
    }
    
    inline EString &EndOutputString ()
    {
        if ( output == OUTPUT_IN_STRING ) {
            Flush();
            output =  keepOutputString ;
            
            // suppress \n of last flush
            if ( outputString.length() > 0 && outputString [outputString.length() - 1] == '\n' ) 
                outputString.length(outputString.length() - 1);
        }
        return outputString ;
    }
    
#   if defined(ITOA)
        char    *itoa (int, char *, int) ;
#   endif
#   define NUMBER_TREE 1
#   include "memges.h"
    
    /**************************************************************
               GetLexString : get last string lex recognized
       ***************************************************************/
    extern char stockBuf [];
    extern int  ptStockBuf ;
    static char *zeroString = (char *)0 ;
    
    inline char *GetLexString ()
    {
        stockBuf [++ptStockBuf] =  c ;
        stockBuf [++ptStockBuf] =  '\0';
        ptStockBuf              -= 2 ;
        
        // ELV 05/17
        //        if ( tokenAhead ) 
        if ( tokenAhead && tokenAhead != -1 ) 
            return (stockBuf);
        else {
            if ( !zeroString ) 
                zeroString =  AllocString("\0");
            return (zeroString);
        }
    }
    
#   include "ptree.h"
    
    inline PPTREE StoreRef ( PTREE &pTree )
    {
        return StoreRef((PPTREE)pTree);
    }
    
    /**************************************************************
               definitions of outil.dec
       ***************************************************************/
    void    _fastcall PullComment (PPTREE) ;             /* pull comment for terminals */ 
    void    _fastcall SqueezeMeta (PPTREE) ;             /* change <TERM,<META>> with <META> */ 
    PTREE   MetaRep (const char *, PPTREE, PPTREE) ;     /* replace meta in second parameter with third */ 
    int     CompareTree (PTREE, PTREE, PTREE, int) ;     /* looks if two trees are equal */ 
    int     QCompareTree (PPTREE, PPTREE, PPTREE, int) ; /* idem but quick */ 
    void    FreeVar () ;                                 /* free meta pointer */ 
    PVAR    SearchVar (register char *) ;                /* give the structure associated to a meta pointer */ 
    PTREE   find (PTREE, PTREE) ;                        /* give the pointer on a PTREE matching a pattern in
                                                            in a tree */ 
    PTREE   metafind (PTREE, PTREE) ;
    void    replace (PTREE, PTREE, PTREE) ;              /* replace occurence of first parameter
                                                            in second parameter with third */ 
    void    DumpTree (PPTREE) ;
    void    CLDumpTree (PPTREE) ;
    void    DumpNode (PPTREE) ;
    void    InLang (char *, PTREE) ;
    char    *MakeTreeGenDir (PTREE paramTree, char *name, int level = 0) ;
    
    /* EL le 26/1/94 rajout des methodes pour gerer les positions << */
    char    *IsPosComment (const PTREE &) ;
    bool    IsCommNotPos (const PTREE &, int) ;
    int     GetPosCommentContent (const PTREE &, int *, int *) ;
    int     SearchPos (const PTREE &, int *, int *) ;
    int     SearchEndPos (const PTREE &, int *, int *) ;
    void    SetPos (const PTREE &, int, int, int) ;
    void    AddPos (const PTREE &, int, int, int) ;
    void    SetPosCommentContent (const PTREE &, int, int) ;
    PTREE   DestroyComment (const PTREE &) ;
    void    DestroyPosComment (const PTREE &) ;
    void    DestroyPosCommentRec (const PTREE &) ;
    void    TrimPosComment (const PTREE &) ;
    int     GetStartPos (const PTREE &, int *, int *, bool opposite = false) ;
    int     GetEndPos (const PTREE &, int *, int *, bool opposite = false) ;
    /*>>*/
#   include "itptree.h"
    
    inline PPTREE NextTree ( PPTREE elem, PPTREE stop )
    {
        return ItPtree::NextTree(elem, stop, 1);
    }
    
    inline PPTREE SNextTree ( PPTREE elem, PPTREE stop )
    {
        return ItPtree::SNextTree(elem, stop, 1);
    }
    
    inline PPTREE FSNextTree ( PPTREE elem, PPTREE stop )
    {
        return ItPtree::FSNextTree(elem, stop);
    }
    
    inline PPTREE FindNext ( PPTREE elem, PPTREE start, PPTREE stop )
    {
        return ItPtree::FindNext(elem, start, stop);
    }
    
    void            SetForReading () ;
    void            InsertDescript (int, const char *, int, PPTREE) ;
    void            FreeDescriptList () ;
    void            SearchToken (PTREE, int) ;
    PTREE           GetTokensFunctionName (PTREE) ;
    PTREE           GetTokensFunction (PTREE) ;
    PTREE           FuncAccelerator (PTREE) ;
    PDESCRIPT_ELEM  FindStringDescript (const char *, PPTREE) ;
    void            FreeDescriptList () ;
    void            FreeArrayEntry () ;
    int             LexNumber (PTREE) ;
    void            MakeTreeGenDirRec (PTREE &paramTree, int nbTreeParam = 0) ;
    
    // extern PPTREE   stackTree [1024];
    extern int      ptStackTree ;
#   define ReadFile ReadFileMeta
#   define LanguageName LanguageNameMeta
    PPTREE  ReadFile (char *) ;
    char    *_fastcall LanguageName (int i) ;
    
    inline PTREE metarep ( const char *str, PTREE top, PTREE rep )
    {
        return MetaRep(str, top, rep);
    }
    
    // StripFile : strip file out of a directory name
    // parameters :
    //              pathName : the path name to be stripped
    // return : stripped name 
    EString         StripFile (const EString &pathName) ;
    extern PTREE    listInclude ;
    extern char     *localDir ;
    
    // ReadInclude : read included files
    // parameters :
    //              name : the name of searched file
    //              here : tell if we have to look in local directory
    // return : found tree
    PTREE           ReadInclude (const char *name, int here) ;
#   include "parser.h"
    PPTREE      _fastcall MakeTreeClass (const TreeClass &classVal) ;
    extern void (*ptMetaExit)(int, const char *) ; // function called on exit
    
    // MetaExit : function call on exit
    // parameters :
    //              level : level of exit
    //              string : a string displayed before exiting
    void        MetaExit (int level, const char *string) ;
    extern bool _inhibit_exit_on_error ;           // exit with error > 20 or not
#   define NO_PRIO (-100000)
    
    // emulate posix with ip
#   ifndef BLOCK_EMULATE_POSIX_SEMAPHORE
#       ifdef EMULATE_POSIX_SEMAPHORE
#           define HAS_POSIX_SEMAPHORE 1 
#           include <semaphore.h>
#           include <sys/types.h>
#           include <sys/ipc.h>
#           include <sys/sem.h>
#           include <sys/shm.h>
#           include <sys/time.h>
#           include <setjmp.h>
#           include "errno.h"
#           define HANDLE_SEMAPHORE_POSIX int
#           define HANDLE_SHARED_POSIX int
#           define WAIT_OBJECT_0 ((DWORD) 1)
#           define WAIT_TIMEOUT ((DWORD) 2)
#           define INFINITE -1
#           define FILE_MAP_ALL_ACCESS 0
            
            union semun {
                int             val ;
                struct semid_ds  *buf ;
                unsigned short  *array ;
                struct seminfo   *__buf ;
            };
            void                    SEM_INIT (HANDLE_SEMAPHORE_POSIX handle, int val) ;
            DWORD                   SEM_POST (HANDLE_SEMAPHORE_POSIX handle, int val = -1, bool undo = true, int timer = 0) ;
            HANDLE_SEMAPHORE_POSIX  SEM_OPEN (const char *name, int style = 0, int right = 0, int initVal = 0, bool justOpen = false) ;
            HANDLE_SEMAPHORE_POSIX  SEM_GET (const char *name, int style = 0, int right = 0, int initVal = 0) ;
            void                    SEM_UNLINK (const char *name) ;
            void                    SEM_WAIT (HANDLE_SEMAPHORE_POSIX handle) ;
            
            inline int SEM_VAL ( HANDLE_SEMAPHORE_POSIX handle )
            {
                return semctl(handle, 0, GETVAL, 0);
            }
            
            HANDLE_SHARED_POSIX SHM_OPEN (const char *name, int initVal = 0, bool justOpen = false) ;
            
            // #define WaitForSingleObject(x, y) ((DWORD) (y==INFINITE?(SEM_POST(x,-1,false),WAIT_OBJECT_0):((new ErlSemaph(&x,y)) -> Success()?WAIT_OBJECT_0:WAIT_TIMEOUT)))
#           define WaitForSingleObject(x, y) ((DWORD) (y==INFINITE?SEM_POST(x,-1,false):SEM_POST(x,-1,false,y)))
#           define WaitForSingleObjectU(x, y) ((DWORD) (y==INFINITE?SEM_POST(x,-1,true):SEM_POST(x,-1,true,y)))
#           define ReleaseSemaphore(x, y, z) (SEM_POST(x,y,false),1)
#           define ReleaseSemaphoreU(x, y, z) (SEM_POST(x,y,true),1)
#           define OpenSemaphore(x, y, z) SEM_OPEN(z,0,0,0,true)
#           define CreateSemaphore(x, y, z, t) SEM_OPEN(t,0,0,y)
#           define FlushViewOfFile(x, y) x
#           define CreateFileMapping(x, y, t, u, v, w) SHM_OPEN(w,v) 
#           define OpenFileMapping(x, y, z) SHM_OPEN(z,0,true)
#           define MapViewOfFile(x, y, z, t, u) shmat(x,0,0)
#           define UnmapViewOfFile(x) shmdt(x)
#           define CloseHandle(x) x;
#       endif
#       include "semaphop.h"
#   endif
    
    // posix def
#   if defined(HAS_POSIX_SEMAPHORE) && defined(HAS_POSIX_CRITICAL)
#       define HAS_POSIX 1
#   endif
    extern char *metaNullString ;
    
    inline char *NULL_STRING ()
    {
        if ( !metaNullString ) 
            metaNullString =  AllocString("");
        return metaNullString ;
    }
    
    static int  dummyThread ;
#   ifdef HAS_P_THREAD
#       if defined(SET_THREAD_STACK)
#           define ESetStackSize(_pAttribute, _size) pthread_attr_setstacksize(_pAttribute, _size)
#           define EAttrDestroy(_pAttribute) pthread_attr_destroy(&myAttributes)
#       else 
#           define ESetStackSize(_pAttribute, _size) dummyThread=1 
#           define EAttrDestroy(_pAttribute) dummyThread=1
#       endif
#       if 1
            template <typename RETURN_TYPE,typename ARGS_TYPE> 
                inline pthread_t TECREATE_THREAD ( int _size, int prioLevel, RETURN_TYPE(*_threadFunction)(ARGS_TYPE), ARGS_TYPE _paramPointer )
                {
                    pthread_t         myThreadPid ;
                    struct sched_param prio ;
                    int               policy ;
                    int               myErr ;
                    pthread_attr_t    myAttributes ;
                    
                    pthread_attr_init(&myAttributes);
                    myErr =  pthread_getschedparam(pthread_self(), &policy, &prio);
                    if ( _size > 0 ) 
                        ESetStackSize(&myAttributes, _size);
                    pthread_attr_setschedpolicy(&myAttributes, SCHED_OTHER);
                    pthread_attr_setdetachstate(&myAttributes, PTHREAD_CREATE_JOINABLE);
                    pthread_attr_setscope(&myAttributes, PTHREAD_SCOPE_PROCESS);
                    myErr =  pthread_create(&myThreadPid, &myAttributes, (LPTHREAD_START_ROUTINE)_threadFunction, (_paramPointer));
                    if ( prioLevel != NO_PRIO ) {
                        prio.sched_priority =  prioLevel ;
                        myErr               =  pthread_setschedparam(myThreadPid, SCHED_OTHER, &prio);
                    }
                    EAttrDestroy(&myAttributes);
                    return myThreadPid ;
                }
                
            inline pthread_t ECREATE_THREAD ( int _size, int prioLevel, LPTHREAD_START_ROUTINE _threadFunction, void *_paramPointer )
            {
                return TECREATE_THREAD<void *, void *> (_size, prioLevel, _threadFunction, _paramPointer);
            }
#       else 
            inline pthread_t ECREATE_THREAD ( int _size, int prioLevel, LPTHREAD_START_ROUTINE _threadFunction, LPVOID _paramPointer )
            {
                pthread_t         myThreadPid ;
                struct sched_param prio ;
                int               policy ;
                int               myErr ;
                pthread_attr_t    myAttributes ;
                
                pthread_attr_init(&myAttributes);
                myErr =  pthread_getschedparam(pthread_self(), &policy, &prio);
                if ( _size > 0 ) 
                    ESetStackSize(&myAttributes, _size);
                pthread_attr_setschedpolicy(&myAttributes, SCHED_OTHER);
                pthread_attr_setdetachstate(&myAttributes, PTHREAD_CREATE_JOINABLE);
                pthread_attr_setscope(&myAttributes, PTHREAD_SCOPE_PROCESS);
                myErr =  pthread_create(&myThreadPid, &myAttributes, (LPTHREAD_START_ROUTINE)_threadFunction, (_paramPointer));
                if ( prioLevel != NO_PRIO ) {
                    prio.sched_priority =  prioLevel ;
                    myErr               =  pthread_setschedparam(myThreadPid, SCHED_OTHER, &prio);
                }
                EAttrDestroy(&myAttributes);
                return myThreadPid ;
            }
#       endif
#   endif
    extern bool emacsCompatibleError ;
    
    /******************************************************************
           AddRef : add a reference to a tree
       ******************/
    /***************************************************/
    inline void FastAddRef ( PPTREE tree )
    {
        register int    *node ;
        
        if ( !tree || tree == (PPTREE) -1 ) 
            return ;
        node =  (int *)CacheAddrReadM(tree);
        node++ ;
        *node =  (*node & REF_MASK) + 1 | *node & ~(REF_MASK);
        if ( !(*node & REF_MASK) ) {
            MetaExit(2, "Abort : Invalid (null) Reference Number\n");
        }
    }
    
    /******************************************************************
          RemRef : remove a reference to a tree
       ***************/
    /******************************************************/
    inline void FastRemRef ( PPTREE tree )
    {
        register int    *node ;
        
        if ( !tree || tree == (PPTREE) -1 ) 
            return ;
        node =  (int *)CacheAddrReadM(tree);
        node++ ;
        *node =  (*node & REF_MASK) - 1 | *node & ~(REF_MASK);
    }
    
    inline void DisplayInteractive ( EString &displayed, int *toBeErased )
    {
        EString message ;
        
        // erase previous message            
        while ( (*toBeErased)-- ) 
            message << '\b';
        
        // add new
        message << displayed ;
        
        // display
        _write(output, message.c_str(), message.length());
        
        // compute length to be erased
        *toBeErased =  displayed.length();
    }
    
    /**************************************************************
        ListToVector : stack a list in a vector
       ****************/
    /*************************************************/
    void        ListToVector (std::vector<PTREE> &vect, PTREE list) ;
    
    /* -- */
    extern bool emacsCompatibleError ;
#   ifdef EOF
#       undef EOF
#   endif
#   define EOF ((char) 255) 
    extern bool symbString ;
#endif /* TOKEN_LOADED  */ 
