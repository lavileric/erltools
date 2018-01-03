language toto;

void AddListGen1 ( PTREE paramTree, char *name, char *name_mod, int level )
{
    char    string [5];
    char    namePt [10];
    char    *nameTree ;
    PTREE   exp1, exp2 ;
    
    sprintf(namePt, "_ptTree%d", level);
    "{" <NL>
        <T> {{
                "PPTREE " WriteString(namePt) "= (PPTREE) 0 ;" <NL>
                if ( paramTree == <MUL,exp1,exp2> ) {
                    AddListGen1(exp1, (char *)0, name_mod, level + 1);
                    AddListGen1(exp2, (char *)0, name_mod, level + 1);
                } else {
                    nameTree =  Switcher(paramTree, namePt, level + 1);
                    WriteString(name_mod) " =  AddList( " WriteString(name_mod) "," WriteString(nameTree) ");" <NL>
                }
                if ( name ) {
                    WriteString(name) " = " WriteString(name_mod) ";" <NL>
                }
            }}
    "}" <NL>
}

toto ()
{
    WriteString(string) WriteString("\"") WriteString(theFileName)  <T> "toto"  <T>     <T> WriteString("\"");
}


