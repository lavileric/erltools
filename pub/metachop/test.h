#define INT int

void ShowVar ( PPTREE tree )
{
    register int    arity, i ;
    char            stringNumb [50];
    int             nbVar ;
    
debut : 
    if ( !tree || tree == (PPTREE) -1 ) 
        return ;
    nbVar = CacheRead((char *)tree + sizeof(INT)) & REF_MASK ;
    if ( nbVar ) {
        sprintf(stringNumb, "Valeur non nulle .... %d\n", nbVar);
        write(2, stringNumb, strlen(stringNumb));
    }
    if ( (arity = NumberTree(tree)) == TERM_TREE || arity == IN_LANGUAGE ) 
        return ;
    arity = treearity(tree);
    for ( i = 1 ; i < arity ; i++ ) 
        ShowVar(SonTree(tree, i));
    if ( arity > 0 ) {
        tree = SonTree(tree, arity);
        goto debut ;
    }
}

PPTREE      varTree ;
static int  nbVar ;

void CountRec ( PPTREE tree )
{
    register int    arity, i ;
    
debut : 
    if ( !tree || tree == (PPTREE) -1 ) 
        return ;
    nbVar += CacheRead((char *)tree + sizeof(INT)) & REF_MASK ;
    if ( (arity = NumberTree(tree)) == TERM_TREE || arity == IN_LANGUAGE ) 
        return ;
    arity = treearity(tree);
    for ( i = 1 ; i < arity ; i++ ) 
        CountRec(SonTree(tree, i));
    if ( arity > 0 ) {
        tree = SonTree(tree, arity);
        goto debut ;
    }
}

int CountVar ( PPTREE tree )
{
    nbVar = 0 ;
    CountRec(tree);
    {
        return nbVar ;
    }
}

int VerifRec ( PPTREE tree )
{
    register int    arity, i ;
    
debut : 
    if ( !tree || tree == (PPTREE) -1 ) 
        return 1 ;
    if ( CacheRead((char *)tree + sizeof(INT)) & REF_MASK < 0 ) 
        return 0 ;
    if ( (arity = NumberTree(tree)) == TERM_TREE || arity == IN_LANGUAGE ) 
        return 1 ;
    arity = treearity(tree);
    for ( i = 1 ; i < arity ; i++ ) 
        VerifRec(SonTree(tree, i));
    if ( arity > 0 ) {
        tree = SonTree(tree, arity);
        goto debut ;
    }
    return 1 ;
}

void VerifVar ( PPTREE tree, char *string )
{
    nbVar = 0 ;
    if ( !VerifRec(tree) ) 
        write(2, string, strlen(string));
}

void ShowDiff ( int old, int newVar, char *string )
{
    char    string_dif [50];
    
    sprintf(string_dif, "Difference -> %d %d <- %s \n", old, newVar, string);
    write(2, string_dif, strlen(string_dif));
    WriteString("========>");
    WriteString(string_dif);
    NewLine();
}

/*Well done my boy */
/******************************************************************
   	DumpTreeN : Dump a tree on screen  with number of variables on him
   *******************************************************************/
#define INT int /* cheating the parser */

static char varValue [10];

void DumpTreeN ( PPTREE tree )
{
    register PPTREE _inter ;
    int             i, test ;
    PPTREE          name1 = (PPTREE)0, son = (PPTREE)0 ;
    
    if ( !tree ) {
        WriteString("[ NIL ] ");
        return ;
    }
    sprintf(varValue, "%d", CacheRead((char *)tree + sizeof(INT)) & REF_MASK);
    switch ( NumberTree(tree) ) {
        case TERM_TREE : 
        _Case4 : 
            ;
            WriteString("\"");
            DumpBrainyValue(tree);
            WriteString("\"");
            WriteString("(");
            WriteString(varValue);
            WriteString(")");
            break ;
        case LIST : 
        _Case5 : 
            ;
            WriteString("[ LIST ");
            NewLine();
            Tab();
            Mark();
            while ( tree ) {
                sprintf(varValue, "%d", CacheRead((char *)tree + sizeof(INT)) & REF_MASK);
                WriteString("(");
                WriteString(varValue);
                WriteString(")");
                Mark();
                son = sontree(tree, 1);
                tree = sontree(tree, 2);
                DumpTreeN(son);
                NewLine();
                UnMark();
            }
            UnMark();
            WriteString("]");
            break ;
        case IN_LANGUAGE : 
        _Case6 : 
            ;
            {
                ((_inter = tree, 1) && (name1 = SonTree(_inter, 1), 1) && (tree = SonTree(_inter, 2), 1));
                {
                    char    *_oldLanguage = currentLanguage ;
                    SwitchLang(Value(name1));
                    {
                        WriteString("[ IN_LANGUAGE");
                        WriteString("(");
                        WriteString(varValue);
                        WriteString(")");
                        NewLine();
                        Tab();
                        Mark();
                        WriteString("[ \"");
                        DumpBrainyValue(name1);
                        WriteString("\" ]");
                        NewLine();
                        DumpTreeN(tree);
                        NewLine();
                        UnMark();
                        WriteString("]");
                    }
                    SwitchLang(_oldLanguage);
                }
            }
            break ;
        default : 
        _Case7 : 
            ;
            WriteString("[ ");
            WriteString(NameConst(NumberTree(tree)));
            WriteString("(");
            WriteString(varValue);
            WriteString(")");
            if ( test = treearity(tree) > 1 || treearity(tree) == 1 && treearity(sontree(tree, 1)) > 1 ) {
                NewLine();
                Tab();
            } else 
                WriteString(" ");
            Mark();
            for ( i = 1 ; i <= treearity(tree) ; i++ ) {
                DumpTreeN(sontree(tree, i));
                if ( test ) 
                    NewLine();
            }
            UnMark();
            WriteString("]");
    }
}
