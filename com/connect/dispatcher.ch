language asn;

// #define DISPLAY_TIME 1
#include "token.h"

#ifdef MOST_RECENT_STL
#   include <list>
#   include <stack>
#   include <set>
#else 
#   include <list.h>
#   include <stack.h>
#   include <set.h>
#endif

// #include <algo.h>
#include <fcntl.h>

// #include <set.h>
// #include <algo.h>
#include "supervisor.h"
#include "../asn/decasn.h"
#include "../asnext/asnext.h"
#include "inetutil.h"
#include "quickinetutil.h"
#include "connect.h"

#define VERSION "4.1" 

#if defined(INCLUDE_SIGNAL)
#   include "signal.h"
#endif
#ifndef DONT_LOOP
#   define DONT_LOOP false
#endif

#include <time.h>
#include <sys/timeb.h>

class KeepChunk {
    
    public :
    
        typedef list<PTREE>     StackChunk ;
        
        StackChunk              tab ;  // chunks of messages received
        StackChunk::iterator    iter ; // iterator on chunk
};

class KeepStarted {
    
    public :
    
        typedef map<EString, int, LessString>   TabStarted ;
        
        TabStarted  tab ; // started counter
};
static DecompAsn                decompAsn ;                                    // an asn decompiler

// DecompAsn                       *DecompAsn::ptDecomp = 0 ;                     // pt for asn decompiler
static Supervisor               supervisor ;                                   // the supervisor
static asn                      *pars_asn ;                                    // an asn parser

// int                             prettyPrint = 0 ;                              // is it just a pretty print for asn
KeepChunk                       chunks ;                                       // the chunks
KeepStarted                     tabStarted ;                                   // counter on pco watcher
static const char               *sizePacket = "0";                             // size min for packets
static set<int, less<int> >     reservedPort ;                                 // port reserved 

// create inetutil for communication
static QInetUtil                &inetUtil = Supervisor::inetutil ;
static isockinet                &isin = *new isockinet(sockbuf::sock_stream);  // input socket
void                            SendVersion (PTREE input) ;

// SendChunks : put together and send some chunks of message
// parameters :
//              input : the last content
// return : the whole message
void SendChunks ( PTREE input )
{
    
    EString name ;         // name of testeur
    EString pco ;          // pco to be declared
    EString wholeContent ; // the whole content
    
    inetUtil.EnterCritical();
    
    // get name and pco
    name =  Value(InetUtil::GetNamedValue("name", input));
    pco  =  Value(InetUtil::GetNamedValue("pco", input));
    
    // search for chunks in store
    for ( chunks.iter = chunks.tab.begin() ; chunks.iter != chunks.tab.end() ;) {
        PTREE   chunkElem ; // a chunk
        
        // get chunk
        chunkElem =  *chunks.iter ;
        
        // if ok add to message and destroy
        char    *val1 = (char *)name.c_str();
        char    *val2 = (char *)pco.c_str();
        char    *val11 = Value(InetUtil::GetNamedValue("name", chunkElem));
        char    *val21 = Value(InetUtil::GetNamedValue("pco", chunkElem));
        if ( !strcmp(val1, val11) && !strcmp(val2, val21) ) {
            
            // add
            wholeContent += Value(InetUtil::GetNamedValue("content", chunkElem));
            
            // destroy chunk
            list<PTREE> ::iterator  destroyed ; // pos to be destroyed
            destroyed =  chunks.iter++ ;
            chunks.tab.erase(destroyed); // chunks.iter = chunks.tab.begin();
        } else 
            chunks.iter++ ;
    }
    inetUtil.LeaveCritical();
    
    // add last chunk
    wholeContent += Value(InetUtil::GetNamedValue("content", input));
    
    // insert content
    PTREE   wholeTree = PTREE(wholeContent);
    
    supervisor.PutEvent(name, pco, wholeTree);
}

//              name : name to clean 
void RemoveChunks ( char *name )
{
    
    EString pco ;          // pco to be declared
    EString wholeContent ; // the whole content
    
    // search for chunks in store
    for ( chunks.iter = chunks.tab.begin() ; chunks.iter != chunks.tab.end() ;) {
        PTREE   chunkElem ; // a chunk
        
        // get chunk
        chunkElem =  *chunks.iter ;
        
        // if ok add to message and destroy
        char    *val11 = Value(InetUtil::GetNamedValue("name", chunkElem));
        if ( !strcmp(name, val11) ) {
            
            // destroy chunk
            list<PTREE> ::iterator  destroyed ; // pos to be destroyed
            destroyed =  chunks.iter++ ;
            chunks.tab.erase(destroyed);
        } else 
            chunks.iter++ ;
    }
}

int nbCall = 0 ;

// DeclarationTesteur : declaration of a testeur
// parameters :
//              input : the content send
//              isin : input socket for dispatcher
void DeclarationTesteur ( PTREE input, isockinet &isin )
{
    
    PTREE       name ;      // name of testeur
    PTREE       address ;   // address of testeur
    PTREE       ipAddress ; // ip address of tester
    PTREE       ack ;       // ack 
    osockinet   *osin = (osockinet *)0 ;
    
    /* if (nbCall++ == 2) mtrace();
       if (nbCall == 8) {MetaEnd(); exit(0);}*/
    // get input values
    name      =  InetUtil::GetNamedValue("name", input);
    address   =  InetUtil::GetNamedValue("address", input);
    ipAddress =  InetUtil::GetNamedValue("ip-address", input);
    ack       =  InetUtil::GetNamedValue("ack", input);
#   ifdef DISPLAY_TIME
        {
            EString toBeDisplayed = EString("Config : ") + "DeclarationTesteur " + Value(name) + " " + Value(address) + " " + Value(ipAddress) + " ";
            DisplayTime(toBeDisplayed.c_str());
        }
#   endif
    if ( atoi(Value(address)) != -1 || atoi(Value(ipAddress)) != -1 ) {
        osockinet   *osin = new osockinet(sockbuf::sock_stream);  // output socket
        InetUtil    lInetUtil ;                                   // for writing
        closesocket(osin->OutputSock());
        osin->OutputSock(inetUtil.LastSocket());
        
        // insert entry
        supervisor.InsertEntry(Value(name), osin);
#       if 0
            
            // if no addres we have to find it for client
            if ( !atoi(Value(address)) ) {
                isockinet   *pIsin ;    // input socket
                int         localPort ; // connection port
                
                // find a port number for input
                pIsin     =  new isockinet(sockbuf::sock_stream);
                localPort =  dispatcherPort + 1 ;
                sockerr inetError("no info", 0); // error return
#               if defined(ON_W)
                    {
                        inetError =  (*pIsin)->bind(0);
                        if ( !inetError.errnoval() ) {
                            struct sockaddr_in sockAddr ;
                            int               sizeSock = sizeof(struct sockaddr_in );
                            getsockname((*pIsin)->Socket(), (struct sockaddr *)(&sockAddr), &sizeSock);
                            localPort =  ntohs(sockAddr.sin_port);
                        }
                    }
#               else 
                    while ( 1 ) {
                        set<int, less<int> > ::iterator iter ;
                        iter =  reservedPort.find(localPort);
                        if ( iter == reservedPort.end() ) {
                            {
                                inetError =  (*pIsin)->bind(localPort);
                            }
                            if ( inetError.errnoval() ) {
                                if ( inetError.errnoval() != EADDRINUSE ) {
                                    char    message [50]; // error message
                                    sprintf(message, "Unknown error during socket bind \n");
                                    _write(2, message, strlen(message)); // throw ;
                                    
                                    // delete pIsin ;
                                    // pIsin = new isockinet(sockbuf::sock_stream);
                                    localPort =  0 ;
                                    break ;
                                }
                                localPort++ ;
                                continue ;
                            }
                        } else {
                            localPort++ ;
                            continue ;
                        }
                        break ;
                    }
#               endif
                
                // tell that the port is reserved
                if ( localPort ) 
                    reservedPort.insert(localPort);
                
                // disconnect found port
                delete pIsin ;
                
                // send address of found port 
                PTREE   message ; // message to be send
                message =  parse (
                    declaration-testeur  {
                            name "",
                            ip-address "",
                            address $(<NUMB,PTREE(CompactItoa(localPort))>)
                    }
                );
                osockinet   *osin = new osockinet(sockbuf::sock_stream);  // output socket
                InetUtil    lInetUtil ;                                   // for writing
                closesocket(osin->OutputSock());
                osin->OutputSock(inetUtil.LastSocket());
                
                // send message
                lInetUtil.Osockinet(*osin);
                lInetUtil.InetWriteLow(message, false, false, false);
                
                // to avoid destroying socket
                lInetUtil.ForgetOutput();
                osin->OutputSock((SOCKET)0);
                delete osin ;
#               ifdef DISPLAY_TIME
                    {
                        EString toBeDisplayed
                            = EString("Config : ") + "Send port " + Value(name) + " " + Value(address) + " " + Value(ipAddress) + " " + CompactItoa(localPort);
                        DisplayTime(toBeDisplayed.c_str());
                    }
#               endif
                return ;
            }
            
            // free indicated port
            reservedPort.erase(atoi(Value(address)));
            
            // create a socket for new entry
            osin =  new osockinet(sockbuf::sock_stream); // output socket
            sockerr inetError("no info", 0); // error return
            
            // EL 09/08/99 wait socket to be put in order
            MSLEEP(2);
            if ( Value(ipAddress) ) 
                inetError =  (*osin)->connect(atoi(Value(address)), inet_addr(Value(ipAddress)), 0);
            else 
                inetError =  (*osin)->connect(atoi(Value(address)), 0, 0);
            if ( inetError.errnoval() ) {
#               ifdef DISPLAY_TIME
                    {
                        EString toBeDisplayed = EString("DeclarationTesteur failed on : ");
                        toBeDisplayed += CompactItoa(atoi(Value(address)));
                        DisplayTime(toBeDisplayed.c_str());
                    }
#               endif
                EString errMess("Invalid socket to call back\n");
                _write(2, errMess.c_str(), errMess.length());
                delete osin ;
                return ;
            }
            {
                EString errMess("For process ");
                errMess += EString(Value(name)) + " open socket : " + CompactItoa((*osin)->OutputSock()) + "\n";
                _write(2, errMess.c_str(), errMess.length());
            }
#           ifdef DISPLAY_TIME
                {
                    EString toBeDisplayed = EString("DeclarationTesteur succeeded");
                    DisplayTime(toBeDisplayed.c_str());
                }
#           endif
            
            // set no delay
            // (*osin) -> setnodelay();
            // add this output socket to looked at socket
            isin.AddInputSock((*osin)->OutputSock());
            (*osin)->setrcvbuf(64 * 1024);
            (*osin)->setsndbuf(64 * 1024);
            (*osin)->setnodelay();
            (*osin)->setlinger(true, 5);
#       endif
    } else {
        
        // insert entry
        supervisor.InsertEntry(Value(name), osin);
    }
    
    // if acknowledgement set it
    if ( supervisor.Entry()[Value(name)] ) {
        if ( ack == <TRUE> ) {
            supervisor.Entry()[Value(name)]->Ack(true);
        } else {
            supervisor.Entry()[Value(name)]->Ack(false);
        }
    }
    
    // remove chunks from old apps
    RemoveChunks(Value(name));
#   if 0
        
        // if old appli declare them as using old protocol
        if ( EString("script_ihm") == Value(name) || EString("ScrTimCom") == Value(name) /* || EString("bdScript") == Value(name)*/ ) {
            supervisor.Entry()[Value(name)]->OldProtocol(true);
        }
#   endif
    
    // send version to tell that it is a new dispatcher ( version > 4.0 )
    SendVersion(input);
}

// DeclarationPCO : declaration of a pco
// parameters :
//              input : the content send
void DeclarationPCO ( PTREE input )
{
    
    PTREE   name = InetUtil::GetNamedValue("name", input);              // name of testeur
    PTREE   pco = InetUtil::GetNamedValue("pco", input);                // pco to be declared
    PTREE   outputPco = InetUtil::GetNamedValue("output-only", input);  // tell if output only
    
    // look if output pco only
    bool    bOutputPco ;                                                // tell if output only
    
#   ifdef DISPLAY_TIME
        {
            EString toBeDisplayed = EString("Config : ") + "DeclarationPco " + Value(name) + " " + Value(pco);
            DisplayTime(toBeDisplayed.c_str());
        }
#   endif
    in "asn" {
        if ( outputPco == <TRUE> ) 
            bOutputPco =  true ;
        else 
            bOutputPco =  false ;
    }
    
    // insert pco
    supervisor.InsertPco(Value(name), Value(pco), bOutputPco);
    
    // declare that somebody else is watching pco
    tabStarted.tab [Value(pco)] =  tabStarted.tab [Value(pco)] + 1 ;
}

// ClosePCO : closing of a pco
// parameters :
//              input : the content send
//              isin : input socket for dispatcher
void ClosePCO ( PTREE input, isockinet &isin )
{
    
    PTREE   name = InetUtil::GetNamedValue("name", input);  // name of testeur
    PTREE   pco = InetUtil::GetNamedValue("pco", input);    // pco to be declared
    
#   ifdef DISPLAY_TIME
        {
            EString toBeDisplayed = EString("Config : ") + "Close Pco " + Value(name) + " " + Value(pco);
            DisplayTime(toBeDisplayed.c_str());
        }
#   endif
    
    // remove socket pco from looked at socket if name of pco is "" (all pcos)
    if ( supervisor.Entry()[Value(name)] && EString("") == Value(pco) ) {
        osockinet   *osin ; // output socket for deleted entry
        osin =  (osockinet *)supervisor.Entry()[Value(name)]->Socket();
        if ( osin ) {
            {
                EString errMess("For process ");
                errMess += EString(Value(name)) + " close socket : " + CompactItoa((*osin)->OutputSock()) + "\n";
                _write(2, errMess.c_str(), errMess.length());
            }
            
            // remove socket
            isin.RemoveInputSock((*osin)->OutputSock());
        }
    }
    
    // close pco
    supervisor.ClosePco(Value(name), Value(pco));
}

// TestPCO : test of a pco
// parameters :
//              input : the content send
void TestPCO ( PTREE input )
{
    
    PTREE           name = InetUtil::GetNamedValue("name", input);  // name of tsteur
    PTREE           pco = InetUtil::GetNamedValue("pco", input);    // pco to be tested
    SupervisorEntry *entry ;                                        // entry
    bool            supervised ;                                    // tell if entry is
                                                                    // supervised
    PTREE           message ;                                       // message send
    
#   ifdef DISPLAY_TIME
        {
            EString toBeDisplayed = EString("Config : ") + "TestPco " + Value(name) + " " + Value(pco);
            DisplayTime(toBeDisplayed.c_str());
        }
#   endif
    
    // search if entry is supervised
    supervised =  false ;
    if ( (entry = supervisor.Entry()[Value(name)]) ) {
        supervised =  entry->Supervised(Value(pco));
        
        // send a message accordingly
        EString okPco("ok");
        if ( supervised ) {
            message =  parse (
                test-pco  {
                              name
                        $(<STRING,PTREE(Value(name))>),
                              pco
                        $(<STRING,PTREE(Value(pco))>),
                              state TRUE,
                              size-packet
                        $(<NUMB,PTREE(sizePacket)>)
                }
            );
        } else {
            message =  parse (
                test-pco  {
                              name
                        $(<STRING,MakeString(Value(name))>),
                              pco
                        $(<STRING,MakeString(Value(pco))>),
                              state FALSE
                }
            );
            okPco   =  "nok";
        }
#       ifdef DISPLAY_TIME
            {
                EString toBeDisplayed = EString("ResultTest : ") + okPco ;
                DisplayTime(toBeDisplayed.c_str());
            }
#       endif
        
        // send answer
        {
            QInetUtil & inetUtil =  supervisor.Entry()[Value(name)]->GetInetUtil(); // for writing
            
            // send the message
            if ( entry->Socket() ) 
                inetUtil.Osockinet(*entry->Socket());
            inetUtil.InetWriteLow(message, false, false, entry->OldProtocol());
            
            // for avoiding destruction of socket
            inetUtil.ForgetOutput();
        }
#       if 0
            {
                InetUtil    inetUtil ; // for writing
                inetUtil.Osockinet(*entry->Socket());
                inetUtil.InetWriteLow(message, false, false, entry->OldProtocol());
                
                // for avoiding destruction of socket
                inetUtil.ForgetOutput();
            }
#       endif
    }
}

// ComputeNumber : compute number of app connected on a pco
// parameters :
//              input : the content send
void ComputeNumber ( PTREE input )
{
    
    PTREE                       name ;             // name of tsteur
    PTREE                       pco ;              // pco to be tsted
    TabSort<SupervisorEntry>    *entryTab ;        // array of supervisor entry
    SupervisorEntry             *entry ;           // entry
    PTREE                       message ;          // message send
    int                         indSupervisor ;    // index in the supervisor 
                                                   // entries
    int                         nbSupervised = 0 ; // number of entry 
                                                   // supervising pco
    
    // get name and pco
    name     =  InetUtil::GetNamedValue("name", input);
    pco      =  InetUtil::GetNamedValue("pco", input);
    entryTab =  &supervisor.Entry();
    
    // construct the message for anwer
    message  =  parse (
        number-connect {
            name $(name),
            pco  $(pco),
            number
              $(<NUMB,PTREE(CompactItoa(tabStarted.tab[Value(pco)]))>)
        }
    );
    
    // send answer
    if ( (entry = (*entryTab)[Value(name)]) ) {
        QInetUtil & inetUtil =  (*entryTab)[Value(name)]->GetInetUtil(); // for writing
        
        // send the message
        if ( entry->Socket() ) 
            inetUtil.Osockinet(*entry->Socket());
        else if ( 0 ) {
            EString out (Value(name)) ;
            inetUtil.ConnectOutput(out);
        }
        inetUtil.InetWriteLow(message, false, false, entry->OldProtocol());
        
        // for avoiding destruction of socket
        inetUtil.ForgetOutput();
    }
}

// SendVersion : send version of dispatcher
// parameters :
//              input : the content send
void SendVersion ( PTREE input )
{
    
    PTREE                       name ;      // name of tsteur
    TabSort<SupervisorEntry>    *entryTab ; // array of supervisor entry
    SupervisorEntry             *entry ;    // entry
    PTREE                       message ;   // message send
    
    // get name and pco
    name     =  InetUtil::GetNamedValue("name", input);
    entryTab =  &supervisor.Entry();
    
    // construct the message for anwer
    message  =  parse (version $(<STRING,PTREE(VERSION)>));
    
    // send answer
    if ( (entry = (*entryTab)[Value(name)]) ) {
        QInetUtil & inetUtil =  (*entryTab)[Value(name)]->GetInetUtil(); // for writing
        
        // send the message
        if ( entry->Socket() ) 
            inetUtil.Osockinet(*entry->Socket());
        inetUtil.InetWriteLow(message, false, false, entry->OldProtocol());
        
        // for avoiding destruction of socket
        inetUtil.ForgetOutput();
    }
}

// EventSend : send an event
// parameters :
//              input : the content send
void EventSend ( PTREE input )
{
    
    PTREE   name = InetUtil::GetNamedValue("name", input);        // name of testeur
    PTREE   pco = InetUtil::GetNamedValue("pco", input);          // pco to be declared
    PTREE   content = InetUtil::GetNamedValue("content", input);  // content to be send
    
#   ifdef DISPLAY_TIME
        {
            EString mess("");
            mess += EString("send on ") + Value(name) + "/" + Value(pco);
            DisplayTime(mess.c_str());
        }
#   endif
    
    // insert content
    supervisor.PutEvent(Value(name), Value(pco), content);
}

// GetEvent : get next event for a tester
// parameters :
//              input : the content send
//              bloque : indique si attente de message
void GetEvent ( PTREE input, bool blocked )
{
    PTREE   name ; // name of tester
    
    // get name of tester
    name =  InetUtil::GetNamed("name", input);
#   ifdef DISPLAY_TIME
        {
            EString mess("");
            mess += EString("received  ") + Value(name [2]);
            if ( blocked ) 
                mess += " blocked";
            else 
                mess += " not blocked";
            DisplayTime(mess.c_str());
        }
#   endif
    
    // insert content
    supervisor.GetEvent(Value(name [2]), blocked);
}

// KillProc : kill a process
// parameters :
//              process : the process to be killed
void KillProc ( QInetUtil &inetutil, char *process )
{
    
    osockinet   *osin ;       // for killing
    PTREE       killMessage ; // the kill message
    PTREE       killMessageShort ;
    
#   ifdef DISPLAY_TIME
        {
            EString toBeDisplayed = EString("Config : ") + "Kill " + process ;
            DisplayTime(toBeDisplayed.c_str());
        }
#   endif
    killMessage      =  parse (kill $(<STRING,PTREE(CompactItoa(supervisor.GetIndex()))>););
    killMessageShort =  parse (kill $(<STRING,"">););
    
    // if no recipient it is for the dispatcher
    if ( !strcmp(process, "dispatcher") ) {
        
        // kill all processes on bus
        int nbProcess ; // number of processes
        nbProcess =  supervisor.Entry().Size();
        while ( nbProcess-- ) {
            QInetUtil & inetUtil =  supervisor.Entry()[nbProcess]->GetInetUtil(); // for writing
            osin                 =  (osockinet *)supervisor.Entry()[nbProcess]->Socket();
            if ( osin ) 
                inetUtil.Osockinet(*osin);
            else if ( 0 ) {
                EString out(supervisor.Entry()[nbProcess]->Name());
                if ( !inetUtil.ConnectOutput(out) ) 
                    continue ;
            }
            PTREE   sendMessage ;
            if ( osin ) 
                sendMessage =  killMessageShort ;
            else 
                sendMessage =  killMessage ;
            inetUtil.InetWriteLow(sendMessage, false, false, supervisor.Entry()[nbProcess]->OldProtocol());
            
            // to avoid destroying socket
            inetUtil.ForgetOutput();
#           ifdef DISPLAY_TIME
                {
                    EString message ;
                    message =  EString("Config : now kill on ") + supervisor.Entry()[nbProcess]->Name() + "\n";
                    _write(1, message.c_str(), message.length());
                }
#           endif
        }
        
        // closesocket(inetutil.InputSock()[0]);
        // inetutil.RemoveInputSock(inetutil.InputSock() [0]);
        supervisor.Freeze();
        
        // kill dispatcher
        MetaExit(0, "Received Kill Order\n");
    } else {
        
        // write kill
        if ( supervisor.Entry()[process] ) {
            QInetUtil & inetUtil =  supervisor.Entry()[process]->GetInetUtil(); // for writing
            osin                 =  (osockinet *)supervisor.Entry()[process]->Socket();
            if ( osin ) 
                inetUtil.Osockinet(*osin);
            else if ( 0 ) {
                EString out (process) ;
                inetUtil.ConnectOutput(out);
            }
            if ( osin ) {
                inetUtil.InetWriteLow(killMessageShort, false, false, supervisor.Entry()[process]->OldProtocol());
            } else {
                inetUtil.InetWriteLow(killMessage, false, false, supervisor.Entry()[process]->OldProtocol());
            }
            
            // to avoid destroying socket
            inetUtil.ForgetOutput();
#           ifdef DISPLAY_TIME
                {
                    EString message ;
                    message =  EString("Config : now kill on ") + process + "\n";
                    _write(1, message.c_str(), message.length());
                }
#           endif
        }
    }
}

// KillProc : kill a process
// parameters :
//              bus : bus where to kill
void KillProcBus ( char *bus )
{
    osockinet   *osin ; // for killing
    
    {
        PTREE   killMessage ; // the kill message
        
        // write kill
        killMessage =  parse (kill $(<STRING,PTREE(CompactItoa(supervisor.GetIndex()))>););
        
        // search the entries supervising a bus and kill them
        int indexEntry ; // index in entries
        indexEntry =  supervisor.Entry().Size();
        while ( indexEntry-- >= 0 ) {
            SupervisorEntry *pEntry = supervisor.Entry()[indexEntry];
            if ( pEntry && pEntry->Supervised(bus) ) {
                QInetUtil   inetUtil = pEntry->GetInetUtil(); // for writing
                osin =  (osockinet *)(pEntry->Socket());
                if ( osin ) 
                    inetUtil.Osockinet(*osin);
                inetUtil.InetWriteLow(killMessage, false, false, pEntry->OldProtocol());
                
                // to avoid destroying socket
                inetUtil.ForgetOutput();
            }
        }
    }
}

// Enumerate : enumerate all appli on buses
void Enumerate ( PTREE input )
{
    
    TabSort<SupervisorEntry>        *pTabEntry ; // tab of entries (clients of dispatcher)
    int                             indexEntry ; // index in entry tab
    map<EString, int, LessString>   bus ;        // all the known buses
    EString                         busName ;    // name of a bus
    
    // get all applis
    pTabEntry =  &supervisor.Entry();
    
    // compute all the known bus
    
    TabSort<SupervisorElem>     *pTabBus ; // all the supervised bus of an entry
    int                         indexBus ; // index in bus tab
    
    // loop on the entries searching for buses
    for ( indexEntry = 0 ; indexEntry < pTabEntry->Size() ; indexEntry++ ) {
        pTabBus =  &(*pTabEntry)[indexEntry]->Pco().Supervised();
        for ( indexBus = 0 ; indexBus < pTabBus->Size() ; indexBus++ ) {
            busName =  (*pTabBus)[indexBus]->Name();
            if ( bus.find(busName) == bus.end() ) {
                bus [busName] =  0 ;
            }
        }
    }
    
    // compute the response
    
    PTREE                                       response ;  // the response 
    PTREE                                       listBus ;   // the list of all buses
    PTREE                                       listAppli ; // list appli
    map<EString, int, LessString> ::iterator    iterBus ;   // iterator on buses
    
    for ( iterBus = bus.begin() ; iterBus != bus.end() ; iterBus++ ) {
        listAppli =  ();
        
        // search all the client of this bus
        for ( indexEntry = 0 ; indexEntry < pTabEntry->Size() ; indexEntry++ ) {
            if ( (*pTabEntry)[indexEntry]->Supervised((*iterBus).first) ) {
                
                // compute the number of message for this bus
                long    nbEvent = (*pTabEntry)[indexEntry]->Pco().NumberEvent((*iterBus).first);
                
                // insert entry
                listAppli *= <STRING,PTREE((*pTabEntry)[indexEntry]->Name() + "(" + CompactItoa(nbEvent) + ")")>;
            }
        }
        listBus *= parse (
            {bus $(<STRING,PTREE((*iterBus).first)>),
            					connected $(<SEQUENCE_VALUE,listAppli>)}
        );
    }
    
    // create a pseudo bus to indicate shared memory appli
    // search all the client of this bus
    listAppli =  ();
    for ( indexEntry = 0 ; indexEntry < pTabEntry->Size() ; indexEntry++ ) {
        if ( !(*pTabEntry)[indexEntry]->Socket() ) {
            listAppli *= <STRING,PTREE((*pTabEntry)[indexEntry]->Name())>;
        }
    }
    listBus  *= parse (
        {bus $(<STRING,"ShM">),
        					connected $(<SEQUENCE_VALUE,listAppli>)}
    );
    response =  parse (enumerate { enumeration $(<SEQUENCE_VALUE,listBus>)});
    
    // send response
    
    PTREE       name ;  // name of client 
    osockinet   *osin ; // for responding
    
    name =  InetUtil::GetNamedValue("name", input);
    if ( supervisor.Entry()[Value(name)] ) {
        QInetUtil & inetUtil =  supervisor.Entry()[Value(name)]->GetInetUtil(); // for writing
        osin                 =  (osockinet *)supervisor.Entry()[Value(name)]->Socket();
        if ( osin ) {
            inetUtil.Osockinet(*osin);
        } else if ( 0 ) {
            EString out (Value(name)) ;
            if ( !inetUtil.ConnectOutput(out) ) 
                return ;
        }
        inetUtil.InetWriteLow(response, false, false, supervisor.Entry()[Value(name)]->OldProtocol());
        
        // to avoid destroying socket
        inetUtil.ForgetOutput();
    }
}

#ifdef LEAK
#   ifdef VISUAL
#       include <crtdbg.h>
        _CrtMemState    histid1 ;
        _CrtMemState    histid2 ;
        _CrtMemState    histid3 ;
        static int      fileOut ;
        static int      nbReport ;
        static bool     firstRun = true ;
        static int      posFreed = 0 ;
        static int      indicator = 0 ;
#       define MAX_FREED 800000
        vector<int>     notFreed ;
        
        int OurReportingFunction ( int reportType, char *userMessage, int *retVal )
        {
#           if 0
                if ( nbReport++ <= 1000 ) {
                    _write(fileOut, userMessage, strlen(userMessage));
                    
                    // write(fileOut,"\n",1); *retVal = 0;
                    return 0 ;
                }
#           endif
            
            char    *ptMessage = userMessage ;
            
            if ( *ptMessage == '{' ) {
                while ( *ptMessage != '}' ) {
                    ptMessage++ ;
                }
                EString numb(userMessage + 1, ptMessage - userMessage - 1);
                if ( firstRun && posFreed < MAX_FREED ) {
                    notFreed [posFreed++] =  atoi(numb.c_str());
                } else if ( !firstRun ) {
                    vector<int> ::iterator  iter ;
                    iter =  lower_bound(notFreed.begin(), notFreed.end(), atoi(numb.c_str()));
                    if ( iter != notFreed.end() && *iter == atoi(numb.c_str()) ) {
                        _write(fileOut, userMessage, strlen(userMessage));
                        indicator =  1 ;
                    }
                } else {
                    EString error("out of memory leak\n");
                    _write(2, error.c_str(), error.length());
                }
            } else if ( indicator-- > 0 ) {
                _write(fileOut, userMessage, strlen(userMessage));
            }
            /*
               * By setting retVal to zero, we are instructing _CrtDbgReport
               * to continue with normal execution after generating the report.
               * If we wanted _CrtDbgReport to start the debugger, we would set
               * retVal to one.
               */
            *retVal =  0 ;
            return 0 ;
        }
        
#   else 
        static long histid1 ;   // history before test
        static long histid2 ;   // history after test
        static long orig_size ; // first size
        static long last_size ; // last size
#   endif
#endif

//#define LEAK 1
// InitCheck : init for leak checking
void InitCheck ()
{
#   ifdef LEAK
#       ifdef VISUAL
            if ( notFreed.begin() != notFreed.end() ) 
                notFreed.erase(notFreed.begin(), notFreed.end());
            
            int index = 0 ;
            
            _CrtSetBreakAlloc(350000);
            while ( index++ < MAX_FREED ) {
                notFreed.push_back(0);
            }
            _CrtMemCheckpoint(&histid1);
            firstRun =  true ;
            
            char    *marker = (char *)malloc(333);
            
#       else 
            
            // store original size
            orig_size =  malloc_inuse(&histid1);
#       endif
#   endif
}

// DoCheck : check leaks
void DoCheck ()
{
#   ifdef LEAK
#       ifdef VISUAL
            nbReport =  0 ;
            _CrtSetReportHook(OurReportingFunction);
            
            // Send all reports to STDOUT
            _CrtSetReportMode(_CRT_WARN, 0 /* _CRTDBG_MODE_FILE */ );
            
            // _CrtSetReportFile( _CRT_WARN, _CRTDBG_FILE_STDOUT );
            // _CrtSetReportMode( _CRT_ERROR,  _CRTDBG_MODE_FILE  );
            //  _CrtSetReportFile( _CRT_ERROR, _CRTDBG_FILE_STDOUT );
            // _CrtSetReportMode( _CRT_ASSERT,  _CRTDBG_MODE_FILE  );
            // _CrtSetReportFile( _CRT_ASSERT, _CRTDBG_FILE_STDOUT );
            fileOut =  _open("c:\\leak.out", O_CREAT | O_APPEND | O_RDWR | O_BINARY, S_IWRITE | S_IREAD);
#       endif
        
        // check size
        {
            
            // garbage trees
            ClearStoreRef();
#           ifdef VISUAL
                _CrtMemCheckpoint(&histid2);
                if ( _CrtMemDifference(&histid3, &histid1, &histid2) ) {
                    _CrtMemDumpAllObjectsSince(&histid1);
                } else 
                    printf("nothing\n");
                
                // _CrtMemCheckpoint(&histid1);
                // _CrtCheckMemory( );
                if ( firstRun ) {
                    sort(notFreed.begin(), notFreed.end());
                }
                firstRun =  false ;
                _close(fileOut);
#           else 
                
                // get last size
                last_size =  malloc_inuse(&histid2);
                
                // compare it to old size and send message if necessary
                if ( last_size > orig_size ) 
                    malloc_list(2, histid1, histid2);
                else 
                    printf("nothing\n");
                orig_size =  last_size ;
                histid1   =  histid2 ;
#           endif
        }
#   endif
}

#if 0
    static long histid1, histid2 ;
    static long orig_size, last_size ;
#endif

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int nbConn = 0 ;

// main proc
// return : ok
void DispatcherStep ()
{
    
    PTREE       grammar ;         // grammar for message parsing
    char        *messageContent ; // content of message
    PTREE       octetTLV ;        // encoding of tree as tlv  
    PTREE       result ;          // the decoded value 
    PTREE       asn1Value ;       // the asn1 value
    PTREE       modifiedTlv ;     // the tlv modified after interpretation
    PTREE       type ;            // the type found
    PTREE       selector ;        // message selector
    PTREE       input ;           // entry as input
    osockinet   *osin ;           // for responding
    PTREE       message ;         // message
    int         lengthEncoded ;   // length encoded
    bool        hasAcknowledged ; // has send acknowledgement
    
    // get message and analyze it 
    {
        
        // get asn1Value
        unsigned int    nbSock = inetUtil.NbSock();
        asn1Value =  inetUtil.Pop();
        asn1Value == <ANY,asn1Value>;
        if ( asn1Value == PTREE(0) ) 
            asn1Value =  inetUtil.InetReadLow();
        
        // if some sockets where destroyed do some cleansing
        if ( inetUtil.NbSock() != nbSock ) {
            std::vector<SOCKET>     inputSock ; // input sockets
            inputSock =  inetUtil.InputSock();
            supervisor.Check(inputSock);
        }
        if ( asn1Value == () ) 
            return ;
        hasAcknowledged =  false ;
        
        // write acknowledgement
        selector        =  ();
        input           =  ();
        
        // decode
        if ( asn1Value == <NAMED_VALUE,selector,input> ) {
            
            // interpret it 
            switch ( selector ) {
                case <IDENT,"reception-evenement-bloque"> : 
                    GetEvent(input, true);
                    break ;
                case <IDENT,"reception-evenement"> : 
                    GetEvent(input, false);
                    break ;
                case <IDENT,"envoie-evenement-chunk-end"> : 
                    SendChunks(input);
                    break ;
                case <IDENT,"envoie-evenement-chunk"> : 
                    {
                        PTREE   acknowledgment ; // the acknowledgement
                        PTREE   name ;           // name
                        
                        // store this chunk
                        chunks.tab.push_back(input);
                        
                        // write acknowledgment
                        acknowledgment =  parse (acknowledgement NULL);
                        name           =  InetUtil::GetNamedValue("name", input);
                        if ( supervisor.Entry()[Value(name)] ) {
                            QInetUtil & inetUtil =  supervisor.Entry()[Value(name)]->GetInetUtil(); // for writing
                            osin                 =  (osockinet *)supervisor.Entry()[Value(name)]->Socket();
                            if ( osin ) {
                                inetUtil.Osockinet(*osin).InetWriteLow(acknowledgment, false, false, supervisor.Entry()[Value(name)]->OldProtocol());
                            } else if ( 0 ) {
                                
                                // com with shared memory
                                // EString out (Value(name)) ;
                                // inetUtil.ConnectOutput(out);
                                inetUtil.InetWriteLow(acknowledgment, false, false, supervisor.Entry()[Value(name)]->OldProtocol());
                            }
                            
                            // to avoid destroying socket
                            inetUtil.ForgetOutput();
                        }
                    }
                    break ;
                case <IDENT,"envoie-evenement"> : 
                    {
                        EventSend(input);
                    }
                    break ;
                case <IDENT,"number-connect"> : 
                    ComputeNumber(input);
                    break ;
                case <IDENT,"declaration-testeur"> : 
                    nbConn++ ;
                    
                    // if (nbConn == 4) InitCheck();
                    // if (nbConn == 8 || nbConn == 12) DoCheck();
                    DeclarationTesteur(input, isin);
                    break ;
                case <IDENT,"declaration-pco"> : 
                    DeclarationPCO(input);
                    break ;
                case <IDENT,"close-pco"> : 
                    ClosePCO(input, isin);
                    break ;
                case <IDENT,"test-pco"> : 
                    TestPCO(input);
                    break ;
                case <IDENT,"version"> : 
                    SendVersion(input);
                    break ;
                case <IDENT,"enumerate"> : 
                    Enumerate(input);
                    break ;
                case <IDENT,"acknowledgement"> : break ;
                case <IDENT,"named-acknowledgement"> : break ;
                case <IDENT,"kill"> : 
                    KillProc(inetUtil, Value(input));
                    break ;
                case <IDENT,"kill-bus"> : 
                    KillProcBus(Value(input));
                    break ;
                default : 
                    {
                        
                        // we did not recognize selector : error message
                        char    string [512]; // space for error message
                        sprintf(string, "Unknown event %s\n", Value(selector));
                        _write(2, string, strlen(string));
                        DumpTree(asn1Value);
                    }
            }
        }
    }
}

//int             Dumper::pvFile = 0 ;
//unsigned int    Dumper::pvCall = 0 ;
//unsigned int    Dumper::pvDepth = 0 ;
// main proc
// return : ok
int main ( int argc, char **argv )
{
    
    PTREE       grammar ;         // grammar for message parsing
    char        *messageContent ; // content of message
    PTREE       octetTLV ;        // encoding of tree as tlv  
    PTREE       result ;          // the decoded value 
    PTREE       asn1Value ;       // the asn1 value
    PTREE       modifiedTlv ;     // the tlv modified after interpretation
    PTREE       type ;            // the type found
    PTREE       selector ;        // message selector
    PTREE       input ;           // entry as input
    osockinet   *osin ;           // for responding
    PTREE       message ;         // message
    int         lengthEncoded ;   // length encoded
    bool        hasAcknowledged ; // has send acknowledgement
    
    {
        
        // open output file
        int mode ; // opening mode
        mode =  O_CREAT | O_APPEND | O_RDWR | O_BINARY ;
        int output = _open("dispatcher.log", mode, S_IWRITE | S_IREAD);
        int iCurrentYear = 0, iCurrentMonth = 0, iCurrentDay = 0 ;
        int iHour = 0, iMin = 0, iSec = 0 ;
        
        // initialize meta
        MetaInit("dispatcher");
#       ifdef VISUAL
            
            /* Get UNIX-style time and display as number and string. */
            time_t  ltime ;
            tm      *today ;
            time(&ltime);
            today =  localtime(&ltime);
            if ( today ) {
                iCurrentYear  =  today->tm_year ;
                iCurrentMonth =  today->tm_mon + 1 ;
                iCurrentDay   =  today->tm_mday ;
                iHour         =  today->tm_hour ;
                iMin          =  today->tm_min ;
                iSec          =  today->tm_sec ;
            }
#       endif
        EString outputString ;
        outputString
            =  EString("Starting dispatcher ") + VERSION + " " + CompactItoa(iCurrentDay) + ":" + CompactItoa(iCurrentMonth) + ":" + CompactItoa(iCurrentYear) + " "
                + CompactItoa(iHour) + ":" + CompactItoa(iMin) + ":" + CompactItoa(iSec) + "\n";
        
        // print ouputstring
        _write(output, outputString.c_str(), outputString.length());
        
        // close output file
        _close(output);
    }
#   if 0
        
        int i ;
        
        i =  1 ;
        
        Dumper  initDumper ;
        int     file = _open("titi", _O_RDWR | _O_CREAT | _O_TRUNC, _S_IREAD | _S_IWRITE);
        
        initDumper.File(file);
#   endif
    
    // may get size of packets
    if ( argc >= 2 ) {
        sizePacket =  *(argv + 1);
        if ( EString("-stamp") == sizePacket ) {
            supervisor.Stamp(true);
            if ( argc >= 3 ) {
                sizePacket =  *(argv + 2);
            }
        }
    }
    
    // initialize decompasn pt
    DecompAsn::ptDecomp =  &decompAsn ;
    
    // pars_asn = new asn ;
    // SwitchLang("asn");
    asn().AsLanguage();
    //	inetUtil = *new  InetUtil ();
    //	isin = *new isockinet(sockbuf::sock_stream);
    // ignore sigpipe signal
#   if defined(INCLUDE_SIGNAL)
        signal(SIGPIPE, SIG_IGN);
#   endif
#   if 1
        
        // kill previous dispatcher
        {
            Connection  *pConnect = new Connection ;
            
            // try to connect on dispatcher
            pConnect->Open("dispatcher-killer", "127.0.0.1", (char *)0, dispatcherPort, 2);
            
            // if succeed, kill it
            if ( pConnect->Connected() ) {
                pConnect->OpenChannel("blaster");
                PTREE   killMessage ; // kill message
                killMessage =  parse (kill "dispatcher";);
                pConnect->SendRaw(killMessage);
                SLEEP(3);
            }
            delete pConnect ;
            
            // delete pConnect ;
            // wait a little
            MSLEEP(500);
        }
#   endif
    
    // open socket
    bool    firstTry = true ;
    
    while ( 1 ) {
        const sockerr   &inetError = isin->bind(dispatcherPort);
        if ( inetError.errnoval() ) {
            char    message [50]; // error message
            if ( firstTry ) {
                sprintf(message, "Problem on %d trying again .", dispatcherPort);
                firstTry =  false ;
            } else {
                strcpy(message, ".");
            }
            _write(2, message, strlen(message));
            SLEEP(1);
            continue ;
        }
        break ;
    }
    cout << "localhost = " << isin->localhost() << endl << "localport = " << isin->localport() << endl ;
    inetUtil.Isockinet(isin);
    inetUtil.SizeMin(atoi(sizePacket));
    isin->setrcvbuf(128 * 1024);
    isin->setnodelay();
    isin->setlinger(true, 5);
    
    // set time to look
    {
        ::timeval   tval ;
        tval.tv_sec  =  1 ;
        tval.tv_usec =  0 ;
        inetUtil.TimeVal(tval);
    }
    
    // create grammar for data exchanging
    grammar =  InetUtil::TransferGrammar();
#   if 0
        orig_size =  malloc_inuse(&histid1);
#   endif
    
    EString shareName("dispatcher");
    
    DisplayTime("first");
    inetUtil.ThreadInput(shareName);
    DisplayTime("second");
    inetUtil.DirectInput(shareName, 4000, 64, false);
    DisplayTime("last");
    
    // file scrutation
    if ( !DONT_LOOP ) {
        while ( 1 ) {
            DispatcherStep();
        }
    } else 
        return 0 ;
    
    // return ok
    MetaExit(0, "TheEnd");
}


