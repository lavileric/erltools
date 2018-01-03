#ifndef ssnmp_dll_definition
#define ssnmp_dll_definition 1
#include "tabsort.h"
#undef EXTERN_FUNC_VOID
#undef EXTERN_FUNC_PTREE
#if defined(VISUAL)
#define EXTERN_FUNC_VOID extern "C" _declspec(dllimport) void 
#define EXTERN_FUNC_PTREE extern "C" _declspec(dllimport) PPTREE 
#elif defined(BORLAND)
#define EXTERN_FUNC_VOID void __declspec(dllimport)  
#define EXTERN_FUNC_PTREE PPTREE __declspec(dllimport)  
#endif
EXTERN_FUNC_VOID    ssnmpSetParam (TabSortString(*pptStackString)[]
    , TabSortEqual<TREE> (*pptStackPtree)[], bool *pptStackInitialized
    , void(*ptMetaExit)(int, const char *)) ;
EXTERN_FUNC_PTREE   ssnmpRootDecode (EString &ruleName, EString &val
    , CoordString &coord, bool checkTag) ;
EXTERN_FUNC_VOID    ssnmpRootEncode (EString &ruleName, EString &resString
    , PTREE val) ;
#endif
