#ifndef level2_dll_definition
#define level2_dll_definition 1
#include "tabsort.h"
#undef EXTERN_FUNC_VOID
#undef EXTERN_FUNC_PTREE
#if defined(VISUAL)
#define EXTERN_FUNC_VOID extern "C" _declspec(dllimport) void 
#define EXTERN_FUNC_PTREE extern "C" _declspec(dllimport) PPTREE 
#elif defined(BORLAND)
#define EXTERN_FUNC_VOID void __declspec(dllimport)  
#define EXTERN_FUNC_PTREE PPTREE __declspec(dllimport)  
#else
#define EXTERN_FUNC_VOID extern "C" void   
#define EXTERN_FUNC_PTREE extern "C" PPTREE   
#endif
EXTERN_FUNC_VOID level2SetParam ( char * metaName,
TabSortString ** pptStackString    ,
TabSortEqual<TREE> ** pptStackPtree  ,
bool * pptStackInitialized  ,  void (*ptMetaExit) ( int, const char *));  EXTERN_FUNC_PTREE level2RootDecode(EString & ruleName, EString & val  , CoordString & coord, bool checkTag) ;
EXTERN_FUNC_VOID  level2RootEncode(EString & ruleName , EString & resString  , PTREE val) ;
#endif
