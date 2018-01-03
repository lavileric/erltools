language asn;

#include "token.h"
#include "supervisor.h"
#include "../asn/decasn.h"
#include "../asnext/asnext.h"
#include "inetutil.h"
#include "connect.h"

#ifdef MOST_RECENT_STL
#   include <list>
#   include <stack>
#else 
#   include <list.h>
#   include <stack.h>
#endif
#if defined(INCLUDE_SIGNAL)
#   include "signal.h"
#endif

static DecompAsn    decompAsn ; // an asn decompiler

// DecompAsn           *DecompAsn::ptDecomp = 0 ; // pt for asn decompiler
// int                 prettyPrint = 0 ;          // is it just a pretty print
// for asn ( no use here)
// main proc
// parameters :
//              argc : number of parameters
//              argv : the parameters
// return : ok
int main ( int argc, char **argv )
{
    
    EString     nameToKill ;        // name of app to kill
    bool        pvKillBus = false ; // tell to kill the apps on a bus
    int         index = 1 ;         // starting index for analyzing command
    const char  *srcAddr ;          // host address
    const char  *destAddr ;         // remote addr
    
    srcAddr  =  "127.0.0.1";
    destAddr =  (char *)0 ;
    
    // get parameters
    if ( argc < 2 ) {
        EString error ; // error string
        error =  "Invalid Parameters : -bus bus | name ";
        MetaExit(1, error.c_str());
    } else {
    start : 
        nameToKill = *(argv + index);
        if ( nameToKill == "-bus" ) {
            nameToKill =  *(argv + ++index);
            pvKillBus  =  true ;
        } else if ( nameToKill == "-connect" ) {
            
            // get addresses
            srcAddr  =  *(argv + ++index);
            destAddr =  *(argv + ++index);
            index++ ;
            goto start ;
        }
    }
    
    // initialize decompasn pt
    DecompAsn::ptDecomp =  &decompAsn ;
    
    // pars_asn = new asn ;
    // initialize meta
    MetaInit();
    
    // SwitchLang("asn");
    asn().AsLanguage();
    
    // ignore sigpipe signal
#   if defined(INCLUDE_SIGNAL)
        signal(SIGPIPE, SIG_IGN);
#   endif
    
    // 
    {
        Connection  *pConnect ; // the connection
        int         maxTry = -1 ;
        
        // try to connect on dispatcher
        do {
            if ( 0 && maxTry < 2 ) {
                delete pConnect ;
                SLEEP(1);
            }
            pConnect =  new Connection ;
            pConnect->Open("killapp", srcAddr, destAddr, dispatcherPort, 9);
        } while ( !pConnect->Connected() && maxTry-- >= 0 );
        
        // if succeed, kill it
        if ( pConnect->Connected() ) {
            pConnect->OpenChannel("blaster");
            PTREE   killMessage ; // kill message
            if ( pvKillBus ) {
                killMessage =  parse (
                    kill-bus
                      $(<STRING,PTREE(nameToKill)>);
                );
            } else {
                killMessage =  parse (kill $(<STRING,PTREE(nameToKill)>););
            }
            pConnect->SendRaw(killMessage);
            SLEEP(3);
        }
        delete pConnect ;
    }
    
    // return ok
    MetaExit(0, "The End");
}


