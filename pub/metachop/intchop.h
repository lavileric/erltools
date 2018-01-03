// #ifdef __cplusplus
// RIEN DEBUT_CPLUSPLUS ;
// #endif

#ifndef INTERF_NETACHOP
#define INTERF_NETACHOP

char    *Switcher( PTREE, char *, int );
void    SwitcherTop( PTREE, char *, int );
char    *MakeTreeGenDir( PTREE, char *, int );
PTREE   switch_body( PTREE );

// PTREE   ReadInString( char *);
// void    ReadIncludeS(char *,int);

void control_stat(PTREE);
void FuncToAnsi(PTREE);
void GCManager(PTREE);
void GCManagerFunc(PTREE);
void GCManagerRetBeg(PTREE);
void GCManagerRetEnd(PTREE,int);
void GenTree(PTREE);
void comm (PTREE,int);
void DumpFunction ();
void MakeTreeGenDirRec (PTREE);
void LookForEach (PTREE,int);

// void control_stat(PTREE);
void printheader(PTREE);
void dec_function(PTREE,PTREE,PTREE,PTREE,PTREE,PTREE,PTREE);
int ToSwitcher(PTREE);
int classify_case(PTREE);
// void follow_if_dir(PTREE);
void node(PTREE);
void lstat_dec(PTREE);

void InsertVar(char * , PTREE,int,PTREE);

void MakeTreeGen(PTREE,char *,int);
void ReplaceTreeGen(PTREE,char *,char *,int);
void AddListGen(PTREE,char *,char *,int);
void AddListGen1(PTREE,char *,char *,int);

void StackFunction(char * ,PTREE);
void FreeHeadFunc();
void DumpForeach (PTREE,int);
void DumpAFunction (char * , PTREE);


PTREE    GetTree();
/* void ChopTree( PTREE ); */
PTREE LookMeta(PTREE,char *);

// void decomp_netachop (PTREE);
void PtreeToClass(PTREE);
void EqualTree(const char*,const char*,int,PTREE,int);
// void AnalyseRange(char *);
// int IsRange(char *) ;
extern PPTREE (*the_parse_entry_pt) (int);
PPTREE bri_parse_entry_netachop (int);

extern int cplusGen;

#endif

// #ifdef __cplusplus
// RIEN FIN_CPLUSPLUS ;
// #endif
