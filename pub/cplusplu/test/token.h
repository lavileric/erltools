#ifndef TOKEN_LOADED

#define TOKEN_LOADED 1

#include <stdio.h>
#include <string.h>

#ifndef SONY
#include <malloc.h>
#endif

/* #ifdef inconnu
typedef int void;
#endif */
typedef void * PTREE;


#define UP_CASE 1
#define LO_CASE 0

#ifdef SUN
#include <sys/types.h>
#include <sys/stat.h>
#define O_BINARY 0
#define PARAM(y) ()
#else
#define PARAM(y) y
#endif

/* on first int language and number of node
   on second int arity and number of references */

#define NODE_MASK ~(~0x3ff)
#define REF_MASK  ~(~0xfff)
#define LANG_MASK ~(~0x03f)
#define NODE_BIT  10
#define LANG_BIT  6
#define REF_BIT   12

#define LIST        0
#define TERM_TREE   ( -2 & NODE_MASK )
#define GEO         ( -3 & NODE_MASK )

#define ENTETE_SIZE 2*sizeof(int)+2*sizeof(PTREE)
#define PPTREE PTREE

#define SON_POS(tree,n) ((long) tree+2 * sizeof(int)  \
						+ 2*sizeof(PTREE) + (n - 1) * sizeof (PTREE))
#define TAB_SPACE 4

// TAB_VALUE go n tab after current column
#define TAB_VALUE(col,n) ( (col) + (n) * TAB_SPACE - (col) % TAB_SPACE)
#define EQTYPE(x,y) ((x==y) || (x==POST && y == PREPOST))

typedef struct a_tree {
        int tree1 ;
	int nb_ref;
	struct a_tree * father;
	struct  a_tree * the_annot;
        struct a_tree * tree2 ;
        struct a_tree * tree3 ;
        struct a_tree * tree4 ;
        struct a_tree * tree5 ;
        struct a_tree * tree6 ;
        struct a_tree * tree7 ;
} TREE,*PPTREE ;

typedef struct list_tree {
		PPTREE tree;
		struct list_tree * Next;
} LIST_TREE,*PLIST_TREE;

/**************************************************************
        Functions of auxpars
***************************************************************/

PLIST_TREE _fastcall AllocListTree PARAM((PTREE,PLIST_TREE));
void _fastcall MulFreeTree PARAM((PLIST_TREE));
void _fastcall AddRef  PARAM((PTREE));      /* add a reference on a tree */
void _fastcall RemRef  PARAM((PTREE));      /* del a reference on a tree */
void _fastcall FreeRef PARAM((PTREE));      /* del a reference on a tree and free it */
void _fastcall FreeUnRef PARAM((PTREE));    /* free a tree not referenced */
PTREE _fastcall PSet PARAM((PTREE,PTREE));
PTREE _fastcall MakeTree PARAM((int,int));
PTREE _fastcall ReplaceTree PARAM((PTREE,int,PTREE));
PTREE _fastcall SReplaceTree PARAM((PTREE,int,PTREE));
PTREE _fastcall SonTree PARAM((PTREE,int));
PTREE _fastcall FatherTree PARAM((PTREE));
PTREE _fastcall ListElem PARAM((PTREE));
PTREE _fastcall AddList PARAM((PTREE,PTREE));
PTREE _fastcall MakeString PARAM((char *));
PTREE _fastcall CommString PARAM((char *));
char * _fastcall AllocString PARAM((char *));
char * _fastcall Value PARAM((PTREE));
int _fastcall NumberTree PARAM((PTREE));
int _fastcall ListLength PARAM((PTREE));
char * _fastcall BrainyValue PARAM((PTREE));
int EqualTree PARAM((char * , char *, int , PTREE, int));
PTREE _fastcall CopyTree PARAM((PTREE));
char * _fastcall NameOfNode PARAM((char *));
char * _fastcall NameLang PARAM(( char *));
char * _fastcall LanguageName();
void _fastcall TabInt();
void _fastcall TabVirtInt();
void _fastcall Tab();
void _fastcall Mark();
void _fastcall UnMarkInt();
void _fastcall ClearMar();
void _fastcall UnMarkVirtInt();
void _fastcall UnMark();
void _fastcall GotoMarkInt();
void _fastcall GotoMarkVirtInt();
void _fastcall GotoMark();
void _fastcall GotoColInt PARAM((int));
void _fastcall GotoColVirtInt PARAM((int));
void _fastcall GotoCol PARAM((int));
int _fastcall Beginning();
void _fastcall NewLineInt();
void _fastcall NewLineVirtInt();
void _fastcall NewLine();
int  _fastcall GetString PARAM((char *,int));
int  _fastcall GetStringS PARAM((char *,int));
char * _fastcall GetLexString ();
char _fastcall NextChar();
void _fastcall UnputBuf();
void _fastcall UnputChar PARAM((int));
int _fastcall ExtUnputBuf ();
void _fastcall DumpBrainyValueInt PARAM((PTREE));
void _fastcall DumpBrainyValueVirtInt PARAM((PTREE));
void _fastcall DumpBrainyValue PARAM((PTREE));
int _fastcall PosTree PARAM((PTREE));
PTREE _fastcall AddListList PARAM((PTREE,PTREE));
void _fastcall PrintError PARAM((char *,int));
void _fastcall FreeTree PARAM((PTREE));
void _fastcall CommTerm ();


#define MAXLENGTH 512

typedef struct lex_struct {
        int Value;
        char string [MAXLENGTH];
} LEX_STRUCT;


typedef struct commElem {
        int type,collected;
        struct commElem *next ;
		PPTREE content;
} COMM_ELEM, *PCOMM_ELEM ;

typedef struct file_position {
        char charAhead;
        long position;
        int oldPos,oldPosStock,lexElvalue;
        char * string,* stringStock,*lexElstring;
        int line,col;
	char firstOnLine,tokenAhead,flagNewLine;
		PPTREE lastTree;
        PCOMM_ELEM comm;
} FILE_POSITION,*PFILE_POSITION;

PFILE_POSITION _fastcall SavePos();
int _fastcall RestorePos  PARAM((PFILE_POSITION));
void _fastcall FreePos();
PCOMM_ELEM _fastcall LookComm PARAM((int *));
void _fastcall AddComm PARAM((register PCOMM_ELEM,int,PTREE,PTREE));

#define COMM_POS(node) ((long) node + 2* sizeof(int) + sizeof(PTREE))
#define COMM_SON(node) (PTREE) LCacheRead(COMM_POS(node))
#define COMM_SON_VALUE(node) (NumberTree(COMM_SON(node)) != GEO ? COMM_SON(node) :\
					 COMM_SON(COMM_SON(node)))
#define COMM_POS_VALUE(node) (NumberTree(COMM_SON(node)) != GEO ? COMM_POS(node) :\
					 COMM_POS(COMM_SON(node)))

extern char * currentLanguage;
extern int ptStockBuf ;

/**************************************************************
        Functions of gesttok
***************************************************************/
typedef struct stringElem {
        struct stringElem * next;
        int Value;
        char * string;
} STRINGELEM;

typedef struct keyElem {
        struct keyElem * next;
        char * Value;
        char * string;
} KEYELEM;

typedef struct _node {
        char * name;
        int number;
        int arity;
        struct _node * next ;
} NODE , *PNODE;

typedef struct {
	char * name ;
	int offset;
} OVER_LANG ;

typedef struct over__lang {
	char * name;
	int offset;
	struct over__lang * next;
} LOVER_LANG,* PLOVER_LANG;

typedef struct lang {
	char * name;
	int (* FuncArity) ();
	int languageMask;
	int * arityNode ;
	STRINGELEM * listConst;
	PPTREE (* parse_entry) ();
	int nbNode;
	struct lang * Next;
	OVER_LANG * overLang;
} LANG,*PLANG;

extern PLANG pCurrentLanguage ;
extern int isVirtMod;

char * SymboName PARAM(( char *,int));
PTREE AddToken PARAM((char *,char *,PTREE));
char * NameConst PARAM((int));
void DumpToken PARAM((PTREE,int,int,int));
void DumpConst PARAM((STRINGELEM *));
AddConst PARAM((char *));
char * AddKey  PARAM((char *));

/**************************************************************
        Functions of decomp
***************************************************************/
void _fastcall WriteStringInt PARAM((char *));
void _fastcall PrintString PARAM((char *));
void _fastcall WriteStringVirtInt PARAM((char *));
void _fastcall WriteString PARAM((char*));
void SepBefore();
void SepAfter();
void NoSep();

/**************************************************************
        Functions of verif
***************************************************************/
InsertDecElem PARAM((char *));
SetUse PARAM((char *));
UseParam PARAM((char *,int));
InitDecElem PARAM((char *,int));

PTREE PrintComm PARAM((PTREE,int,PTREE));
PTREE PrintCommVirt PARAM((PTREE,int,PTREE));
PTREE PrintCommEInt PARAM((PTREE,int,PTREE,char *,char * , char *));
PTREE PrintCommEVirtInt PARAM((PTREE,int,PTREE,char *, char *, char *));
PTREE GetComm  PARAM((PTREE));
PTREE PutComm  PARAM((PTREE,PTREE));
char * IsComm PARAM((PTREE,int));

#define PrintCommE(x,y,z,t,u,v) (\
	isVirtMod? PrintCommEVirtInt(x,y,z,t,u,v):PrintCommEInt(x,y,z,t,u,v))

typedef struct var_struct {
	char * name;
	PPTREE father;
	int slot;
	PPTREE elem;
	struct var_struct * next;
} VAR,*PVAR;


#ifdef SUN
#undef toupper
#undef tolower
#define toupper(x) ((x>='a' && x<= 'z')? x+'A'-'a':x)
#define tolower(x) ((x>='A' && x<= 'Z')? x+'a'-'A':x)
#endif

/**************************************************************
		manipulation sur les coordonnees
 ***************************************************************/

 void PutCoord PARAM((PTREE,int,int,int,int));
 void PutFlag  PARAM((PTREE,int));
 int  GetCoord PARAM((PTREE,int * ,int * ,int * ,int * ));
 void  GetCoordAbs PARAM((PTREE,PTREE,int * ,int * ));
 int  GetFlag  PARAM((PTREE,int *));
 void FreeCoord PARAM((PTREE));

/**************************************************************
		definition necessaires pour le bon fonctionnement
		du parseur
***************************************************************/

#define TOKEN_EXIT(y,x) {\
		sprintf (errStr ," Unexpected \"%s\"  at line %d  instead of %s\n",GetLexString(),oldLine,x);\
		PrintError(errStr,error_free);\
		goto y ;\
	} else { \
		tokenAhead = 0 ;\
	}
#define CASE_EXIT(y,x) {\
	sprintf (errStr ," Unexpected \"%s\"  at line %d  instead of %s\n",GetLexString(),oldLine,x);\
	PrintError(errStr,error_free);\
	goto y ;\
	}
#define PROG_EXIT(y,x) {\
	sprintf (errStr," Bad %s at line %d \n",x,oldLine);\
	PrintError(errStr,error_free);\
	goto y ;\
	}
#define PUSH_CALL(x) \
	(_filePosition = SavePos(),_value = ( x(0) != (PTREE) -1)\
		,RestorePos(_filePosition),FreePos(_filePosition),_value)
#define NOTHING
#define PUSH_CALL_AFF(y,x) \
	(_filePosition = SavePos(),_value = ((y x(0)) != (PTREE) -1)\
		,_value || RestorePos(_filePosition),FreePos(_filePosition),_value)

#define PRE     1
#define POST    2
#define PREPOST     3
#define META    4
#define IN_LANGUAGE     5  /* used as maximum of common node */

extern int *tabArity;
extern int ( *FuncArity) ();
extern PTREE the_parse_entry_metachop ();
#define Arity(x) (*FuncArity)(x)
#define _arityNode  tabArity
extern STRINGELEM * listConst;

/**************************************************************
		definitions of outil.dec
***************************************************************/

void _fastcall PullComment PARAM((PTREE)); /* pull comment for terminals */
void _fastcall SqueezeMeta PARAM((PTREE)); /* change <TERM,<META>> with <META> */
PTREE MetaRep PARAM((char *,PTREE,PTREE)); /* replace meta in second parameter with third */
CompareTree PARAM((PTREE,PTREE,PTREE,int)) ; /* looks if two trees are equal */
FreeVar(); /* free meta pointer */
PVAR SearchVar(); /* give the structure associated to a meta pointer */
PTREE find PARAM((PTREE,PTREE)) ;/* give the pointer on a ptree matching a pattern in
								in a tree */
PTREE metafind() ;
replace PARAM ((PTREE,PTREE,PTREE)); /* replace occurence of first parameter
						 in second parameter with third */



PTREE FindNext PARAM((PTREE,PTREE,PTREE));
PTREE NextTree PARAM((PTREE,PTREE));
PTREE SNextTree PARAM((PTREE,PTREE));
PTREE FSNextTree PARAM((PTREE,PTREE));
void DumpTree PARAM((PTREE));
PTREE ReadFile PARAM((char *));
PLANG GetNodeLang PARAM((PTREE));
PLANG GetLang PARAM((char *));

/* definitions used by metachop generator */

#define PSET(x,y) x = PSet(x,y)
#define NEXT_L(x) (AddRef(_nextVal= x ? SonTree( x ,1):(PTREE)0),PSET(x , x?SonTree(x,2):(PTREE)0),RemRef(_nextVal),_nextVal)
#define meta_father(x)  (SearchVar(x))->father
#define meta_pos(x) (SearchVar(x))->slot
#define meta_elem(x) (SearchVar(x))->elem
#define foreach(x,y,z) ForeachTree(x,y,z,(PTREE)0,-1)
#define metarep MetaRep
#define PushTree(x) (stackTree[ptStackTree] = x,AddRef(stackTree[ptStackTree++]))
#define PopTree (RemRef(stackTree[--ptStackTree]),stackTree[ptStackTree])
#define treearity(x) (x?CacheRead((long)x+sizeof(int))>>REF_BIT:0)
/* #define treearity(x) (x && NumberTree(x) != TERM_TREE ? Arity(NumberTree(x)):0)*/
#define forallsons(x,y) {int for_slot=1,_arity=treearity(x);PTREE for_elem = (PTREE) 0 ;\
	for(;for_slot<=_arity;for_slot++) { PSET(for_elem , SonTree(x,for_slot));\
		 if (for_elem && NumberTree(for_elem) != IN_LANGUAGE) y;}FreeRef(for_elem);}
#define replacetree(x,y,z) ReplaceTree(x,y,z)
#define sontree(x,y) SonTree(x,y)
#define fathertree(x) FatherTree(x)
#define ranktree(x) PosTree(x)
#define numbertree(x) NumberTree(x)
#define gotocol(x) GotoCol(x)
#define comparetree(x,y) CompareTree(x,y,(PTREE)0,-1)
#define qcomparetree(x,y) QCompareTree(x,y,(PTREE)0,-1)
#define freevar FreeVar

#endif
