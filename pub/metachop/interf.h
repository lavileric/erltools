// #ifdef __cplusplus
// RIEN DEBUT_CPLUSPLUS ;
// #endif

#ifndef INTERF_METACHOP
#define INTERF_METACHOP

char    *Switcher( PPTREE, char *, int );
void    SwitcherTop( PPTREE, char *, int );
char    *MakeTreeGenDir( PPTREE, char *, int );
PPTREE   switch_body( PPTREE );

void control_stat(PPTREE);
void FuncToAnsi(PPTREE);
void GCManager(PPTREE);
void GCManagerFunc(PPTREE);
void GCManagerRetBeg(PPTREE);
void GCManagerRetEnd(PPTREE,int);
void GenTree(PPTREE);
void comm (PPTREE,int);
void DumpFunction ();
void MakeTreeGenDirRec (PPTREE);
void LookForEach (PPTREE,int);

void control_stat(PPTREE);
void printheader(PPTREE);
void dec_function(PPTREE,PPTREE,PPTREE,PPTREE,PPTREE,PPTREE,PPTREE);
int ToSwitcher(PPTREE);
int classify_case(PPTREE);
void node(PPTREE);
void lstat_dec(PPTREE);

void InsertVar(char * , PPTREE,int,PPTREE);

void MakeTreeGen(PPTREE,char *,int);
void ReplaceTreeGen(PPTREE,char *,char *,int);
void AddListGen(PPTREE,char *,char *,int);
void AddListGen1(PPTREE,char *,char *,int);

void StackFunction(char * ,PPTREE);
void FreeHeadFunc();
void DumpForeach (PPTREE,int,int);
void DumpAFunction (char * , PPTREE);

#if 0
PPTREE    GetTree();
#endif
PPTREE LookMeta(PPTREE,char *);

// void decomp_metachop (PPTREE);
void PtreeToClass(PPTREE);
extern "C" {
extern PPTREE (*the_parse_entry_pt) (int);
PPTREE bri_parse_entry_metachop (int);
}

extern int cplusGen;

#endif

// #ifdef __cplusplus
// RIEN FIN_CPLUSPLUS ;
// #endif





