language asn;

#include "token.h"
#include <stdio.h>
#include "../asn/decasn.h"
#include "../asnext/asnext.h"
#include "../connect/erlsock.h"
#include "quickinetutil.h"
#include "quickconnect.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ihm.h"

DecompAsn       *DecompAsn::ptDecomp = 0 ;   // pt for asn decompiler
static asn      *pars_asn ;                  // an asn parser
int             prettyPrint = 0 ;            // is it just a pretty print
                                             // for asn ( no use here)
static PTREE    grammar ;                    // grammar for message parsing

// must be set before parsing
char            *parseLanguage = (char *)0 ; // the parse language

// parser entry for chopb as a C prog for a whole prog
// parameters :
//             error_free : tell if exit on error
// return : parsed tree    
static  PPTREE getTree ( int error_free )
{
    return asn().program(error_free);
}

// main proc
// return : ok
int main ( int argc, char **argv )
{
    
    PTREE       message ;           // message received
    DecompAsn   decompAsn ;         // decomp asn instance
    QConnection connection ;        // first connection
    char        *name ;             // name of spy
    char        *channel ;          // channel to spy
    char        *syntax ;           // transfer syntax
    bool        raw = false ;       // tell how we dump PDU
    bool        uraw = false ;      // another way of dumping PDU
    bool        enumerate = false ; // enumerate appli on bus
    int         offset = 1 ;        // offset for input
    
    // initialize decompasn pt
    DecompAsn::ptDecomp =  &decompAsn ;
    pars_asn            =  new asn ;
    
    // initialize meta
    MetaInit();
    SwitchLang("asn");
    
    // get parameters
    if ( argc < 2 ) {
        MetaExit(1, "Invalid Parameters : [ raw | uraw | enumerate ] name \n");
    } else {
        name =  *(argv + offset);
    }
    
    // look if raw mode
    if ( EString("raw") == name ) {
        offset++ ;
        raw  =  true ;
        name =  *(argv + offset);
    } else if ( EString("uraw") == name ) {
        offset++ ;
        uraw =  true ;
        name =  *(argv + offset);
    } else if ( EString("enumerate") == name ) {
        offset++ ;
        enumerate =  true ;
        name      =  *(argv + offset);
    }
    
    int     posArgv ;       // current pos in argv
    
    // open connection
    EString myName = name ; // name of connnection
    
    connection.Open(myName);
    connection.OpenChannel("SPY");
    
    // if enumerate do it now
    if ( enumerate ) {
        PTREE   mess = parse (enumerate { name $(<STRING,PTREE(myName)>)});
        SLEEP(2);
        connection.SendRaw(mess);
        mess =  connection.Receive();
        PTREE   enumeration ; // the enumeration
        PTREE   bus ;         // a bus
        PTREE   listAppli ;   // list of appli
        enumeration =  QInetUtil::GetNamedValue("enumeration", mess);
        enumeration == <SEQUENCE_VALUE,enumeration>;
        while ( (bus = nextl(enumeration)) ) {
            PrintString(Value(QInetUtil::GetNamedValue("bus", bus)));
            listAppli =  QInetUtil::GetNamedValue("connected", bus);
            listAppli == <SEQUENCE_VALUE,listAppli>;
            <NL>
                <T> {{
                        while ( listAppli ) {
                            PrintString(Value(listAppli)) <NL>
                            nextl(listAppli);
                        }
                    }}
        }
        exit(0);
    }
    
    // open connection
    connection.OpenChannel("TDISPATCHER").Syntax("TDISPATCHER", new GenGramm);
    connection.OpenChannel("Ihm").Syntax("Ihm", new Grammihm);
    
    // spy it
    while ( 1 ) {
        
        // receive reponse
        message =  connection.Receive(true);
        
        // print sender and channel
        EString ref = EString("============  ") + connection.SenderName() + " -- " + connection.SenderChannel() + "  ==============";
        PrintString((const char *)ref) <NL>
        if ( uraw ) {
            PrintString("raw") <NL>
        } else {
            <NL,2>
        }
        
        // DumpTree(message);
#       if 0
            
            // print it
            if ( raw ) 
                DumpTree(message);
            else if ( uraw ) {
                EString outString ; // string to send to output
                outString =  *((EString *)(*connection.FullEncode(message, connection.SenderChannel())));
                PrintString((const char *)outString) <NL>
            } else 
                connection.Decomp(connection.SenderChannel())->ExtDecomp(message);
#       endif
        decompAsn.ExtDecomp(message);
        <NL,2>
    }
    <NL>
    
    // return ok
    MetaExit(0, "The End");
    return 0 ;
}


