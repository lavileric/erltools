static  EString DoubleBackSlash ( char *fileName )
{
    EString result ;
    
    if ( fileName ) 
        while ( *fileName ) {
            result += *fileName ;
            if ( *fileName == '\\' ) 
                result += '\\';
            fileName++ ;
        }
    return result ;
}

static  inline void CNewLine ()
{
    char    string [10];
    
    NewLine();
    if ( compiledLine ) {
        gotocol(1);
        WriteString("#line ");
        sprintf(string, "%d ", compiledLine);
        WriteString(string);
        WriteString("\"");
        WriteString(DoubleBackSlash(theFileName));
        WriteString("\"");
        NewLine();
    }
}

static  inline void CLNewLine ( int i )
{
    char    string [10];
    
    NewLine();
    if ( compiledLine ) {
        gotocol(1);
        WriteString("#line ");
        sprintf(string, "%d ", compiledLine);
        WriteString(string);
        WriteString("\"");
        WriteString(DoubleBackSlash(theFileName));
        WriteString("\"");
        LNewLine(i);
    }
}

#define NewLine CNewLine
#define LNewLine CLNewLine

