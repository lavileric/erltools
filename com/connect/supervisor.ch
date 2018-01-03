language asn;

// #define DISPLAY_TIME 1
#include "supervisor.h"
#include "inetutil.h"
#include "connect.h"
#include <time.h>

#if !defined(BORLAND3)
#   ifdef MOST_RECENT_STL
#       include <algorithm>
#   else 
#       include <algo.h>
#   endif
#else 
#   include <algorith.h>
#endif
#ifdef MOST_RECENT_STL
#   include <vector>
#else 
#   include <vector.h>
#endif

#include <fcntl.h>

QInetUtil   Supervisor::inetutil ;

// extern void DisplayTime (const char *) ;
// InsertEvent : insert an event 
// parameters :
//              sender : the sender
//              pcoName : name of pco
//              event : the event to be inserted
void SupervisorPco::InsertEvent ( const EString &sender, const EString &pcoName, const PTREE &event )
{
    SupervisorEvent *pEvent ; // the event to be inserted in array
    
    // create event and insert it
    if ( Supervised()[pcoName] && !Supervised()[pcoName]->OutputPco() ) {
        Supervisor::inetutil.EnterCritical();
        time_t  currentTime = time(0);
        if ( Event().size() < QUEUE_MAX || currentTime - pvLastAccess < 10 * 60 ) {
            pEvent =  new SupervisorEvent(event);
            pEvent->Supervised(Supervised()[pcoName]);
            pEvent->Sender(sender);
            
            // put time
            timeval tVal ;
            tVal.tv_sec  =  currentTime ;
            tVal.tv_usec =  GetMilliTime();
            pEvent->Time(tVal);
            
            // push event
            Event().push(pEvent);
            pvLastAccess =  currentTime ;
        } else {
            
            // open output file
            int mode ; // opening mode
            mode =  O_CREAT | O_APPEND | O_RDWR | O_BINARY ;
            int     output = _open("dispatcher.log", mode, S_IWRITE | S_IREAD);
            EString outputString ;
            outputString =  EString("Discarding one message on ") + pcoName + ", since more than " + CompactItoa(QUEUE_MAX) + "messages \n";
            
            // print ouputstring
            _write(output, outputString.c_str(), outputString.length());
            
            // close output file
            _close(output);
        }
        Supervisor::inetutil.LeaveCritical();
    }
}

// NumberEvent : return number of events in queue for a name
long SupervisorPco::NumberEvent ( const EString name )
{
    long    nbEvent = 0 ;
    
    if ( Supervised(name) ) {
        Supervisor::inetutil.EnterCritical();
        QueueEvent  newQueue = Event();
        int         size1 = Event().size();
        int         size2 = QueueEvent().size();
        while ( newQueue.size() ) {
            SupervisorEvent *event = newQueue.front();
            newQueue.pop();
            if ( name == event->Supervised()->Name() ) 
                nbEvent++ ;
        }
        Supervisor::inetutil.LeaveCritical();
    }
    return nbEvent ;
}

// NextEvent : get next event in pco
// return : the event found
SupervisorEvent *SupervisorPco::NextEvent ()
{
    if ( Event().size() > 0 ) {
        Supervisor::inetutil.EnterCritical();
        SupervisorEvent *supervisorEvent ; // the searched event
        supervisorEvent =  Event().front();
        Event().pop();
        Supervisor::inetutil.LeaveCritical();
        
        // return event
        return supervisorEvent ;
    } else 
        return (SupervisorEvent *)0 ;
}

// InsertPco : insert a new supervised PCO
// parameters :
//              name : name of new pco
//             outputPco : tell it is an output pco only 
void SupervisorPco::InsertPco ( const EString &name, bool outputPco )
{
    SupervisorElem  *supervisorElem ; // created elem
    
    // if element allready exists do allmost nothing
    if ( Supervised()[name] ) {
        Supervised()[name]->OutputPco(outputPco);
        return ;
    }
    
    // create elem
    supervisorElem =  new SupervisorElem ;
    supervisorElem->Name(name);
    supervisorElem->OutputPco(outputPco);
    
    // insert it
    Supervised().InsertRemove(supervisorElem);
}

// ClosePco : remove a new supervised PCO
// parameters :
//              name : name of new pco
void SupervisorPco::ClosePco ( const EString &name )
{
    SupervisorElem  *supervisorElem ; // created elem
    
    Supervisor::inetutil.EnterCritical();
    
    // do the job
    if ( (supervisorElem = Supervised()[name]) ) {
        
        // remove events for this pco
        QueueEvent      storeEvent ;       // temporary storing of events
        SupervisorEvent *supervisorEvent ; // the searched event
        
        // suppress events using pco
        while ( Event().size() > 0 ) {
            supervisorEvent =  Event().front();
            if ( supervisorEvent->Supervised() != supervisorElem ) 
                storeEvent.push(supervisorEvent);
            Event().pop();
        }
        
        // store back
        while ( storeEvent.size() > 0 ) {
            Event().push(storeEvent.front());
            storeEvent.pop();
        }
        
        // remove pco
        Supervised().Remove(supervisorElem);
    }
    Supervisor::inetutil.LeaveCritical();
}

// Clear : clear pco
void SupervisorPco::Clear ()
{
    
    int             index ;  // index
    SupervisorEvent *event ; // an event
    SupervisorElem  *pco ;   // a pco
    
    // clear event queue
    while ( (event = NextEvent()) ) {
        delete event ;
    }
    
    // clear pco queue
    while ( (index = Supervised().Size()) && index-- ) {
        pco =  Supervised()[index];
        Supervised().Erase(index);
        delete pco ;
    }
}

// PutEvent : put a new event in an entry
// parameters :
//              nameString : name of supervised which inserted
//              pcoString : name of pco from which event comes
//              inserted : elem to be inserted
void SupervisorEntry::PutEvent ( const EString &nameString, const EString &pcoString, const PTREE &inserted )
{
    
    // don't use the entry which emitted event
    // except for self pco
    if ( pcoString != "self" ) {
        if ( Name() == nameString ) 
            return ;
    } else {
        if ( Name() != nameString ) 
            return ;
    }
#   ifdef DISPATCH_DEBUG
        if ( Supervised(pcoString) ) {
            EString header = EString("Message From : ") + nameString + " inserted on " + Name() + " " + pcoString + "\n";
            _write(1, header.c_str(), header.length());
            header =  EString(" ==> ") + Value(inserted) + "\n";
            _write(1, header.c_str(), header.length());
        }
#   endif
    
    // insert
    Pco().InsertEvent(nameString, pcoString, inserted);
    
    // if pco in wait state send the event
    // the event queue will be empty if pcoString is not supervised or is output only
    if ( Wait() && !Pco().Event().empty() ) {
        GetEvent(true);
    }
}

// GetEvent : get an event for an entry
// parameters :
//              blocked : tell if blocked read
void SupervisorEntry::GetEvent ( bool blocked )
{
    
    SupervisorEvent *event ;          // event to be send
    PTREE           message ;         // message to be send
    char            *messageContent ; // content of encoded message
    int             lengthEncoded ;   // length of encoded message
    int             lookAhead = 0 ;   // for lookahead
    
    //QInetUtil       inetutil ;        // inetutil used here
    // get event
    if ( !(event = NextEvent()) ) {
        if ( blocked ) {
            Wait(true);
            return ;
        } else {
            if ( Socket() ) {
                
                // com with ip
                GetInetUtil().Osockinet(*Socket());
            } else if ( 0 ) {
                
                // com with shared memory
                EString out(Name());
                if ( !GetInetUtil().ConnectOutput(out) ) {
                    State(BROKEN);
                    return ;
                }
            }
            Supervisor::inetutil.EnterCritical();
            message =  parse (pas-evenement NULL);
#           ifdef DISPLAY_TIME
                EString trace("no event ");
                trace += Name();
                DisplayTime(trace.c_str());
#           endif
            if ( GetInetUtil().InetWriteLow(message, false, false, pvOldProtocol) < 0 ) {
                
                // DebugBreak();
                State(BROKEN);
            }
            
            // to avoid destroying socket
            GetInetUtil().ForgetOutput();
            Supervisor::inetutil.LeaveCritical();
            return ;
        }
    } else {
#       ifdef DISPATCH_DEBUG
            {
                EString header = EString(" On ") + Name() + " send " + "\n";
                _write(1, header.c_str(), header.length());
                header =  EString(" ==> ") + Value(event->Event()) + "\n";
                _write(1, header.c_str(), header.length());
            }
#       endif
#       ifdef DISPLAY_TIME
            EString trace("message for ");
            trace += Name();
            DisplayTime(trace.c_str());
#       endif
#       ifdef DISPLAY_TIME_CONTENT
            trace =  EString(" << ") + DecompAsn().DecodeStringFast(Value(event->Event())) + " >>\n";
            _write(1, trace.c_str(), trace.length());
#       endif
        if ( Socket() ) {
            
            // com with ip
            GetInetUtil().Osockinet(*Socket());
        } else if ( 0 ) {
            
            // com with shared memory
            EString out(Name());
            if ( !GetInetUtil().ConnectOutput(out) ) {
                State(BROKEN);
                return ;
            }
        }
        
        // we have an event so no longer wait
        Wait(false);
        
        // send 3 messages at once 
        int nbSend = 2 ;
        do {
            Supervisor::inetutil.EnterCritical();
            char    *ptString ; // string to be send
            char    *string ;   // the whole string
            ptString =  string = (char *)Value(event->Event());
            while ( ptString ) {
                
                // if string is too long send it by chunk
                if ( strlen(ptString) > CHUNK_SIZE ) {
                    char    keepC ; // to keep char were we put \0
                    keepC                    =  *(ptString + CHUNK_SIZE);
                    *(ptString + CHUNK_SIZE) =  '\0';
                    message                  =  parse (
                                      envoie-evenement-chunk {
                                          name $(<STRING,PTREE(Name())>),
                                          pco
                        $(<STRING,PTREE((const char *)*(event -> Supervised()))>),
                                          sender $(<STRING,PTREE(event -> Sender())>),
                                          content $(<HSTRING,PTREE(ptString)>)
                                      }
                    );
                    if ( GetInetUtil().InetWriteLow(message, false, false, pvOldProtocol) < 0 ) {
                        State(BROKEN);
                        
                        // to avoid destroying socket
                        GetInetUtil().ForgetOutput();
                        Supervisor::inetutil.LeaveCritical();
                        
                        // put back value
                        ptString  += CHUNK_SIZE ;
                        *ptString =  keepC ;
                        delete event ;
                        return ;
                    }
                    
                    // read acknowledgment     
                    if ( lookAhead >= LOOK_AHEAD ) {
                        if ( !Connection::LookAheadSynchro(name, 1, Supervisor::inetutil, Supervisor::inetutil.ListMess(), true) ) {
                            State(BROKEN);
                            
                            // to avoid destroying socket
                            GetInetUtil().ForgetOutput();
                            Supervisor::inetutil.LeaveCritical();
                            
                            // put back value
                            ptString  += CHUNK_SIZE ;
                            *ptString =  keepC ;
                            delete event ;
                            return ;
                        }
                    } else 
                        lookAhead++ ;
                    
                    // prepare next step
                    ptString  += CHUNK_SIZE ;
                    *ptString =  keepC ; // read synchro
                    
                    // pvInetUtil.InetReadLow();
                } else if ( ptString != string ) {
                    if ( Stamp() ) {
                        
                        // send event
                        message =  parse (
                                          envoie-evenement-chunk-end {
                                              name $(<STRING,PTREE(Name())>),
                                              pco
                            $(<STRING,PTREE((const char *)*(event -> Supervised()))>),
                                              sender $(<STRING,PTREE(event -> Sender())>),
                                              content $(<HSTRING,PTREE(ptString)>),
                                time $(<NUMB,PTREE(CompactItoa(event -> Time().tv_sec))>),
                                utime $(<NUMB,PTREE(CompactItoa(event -> Time().tv_usec))>)
                                          }
                        );
                    } else {
                        
                        // send event
                        message =  parse (
                                          envoie-evenement-chunk-end {
                                              name $(<STRING,PTREE(Name())>),
                                              pco
                            $(<STRING,PTREE((const char *)*(event -> Supervised()))>),
                                              sender $(<STRING,PTREE(event -> Sender())>),
                                              content $(<HSTRING,PTREE(ptString)>)
                                          }
                        );
                    }
                    if ( GetInetUtil().InetWriteLow(message, false, false, pvOldProtocol) < 0 ) {
                        delete event ;
                        State(BROKEN);
                        
                        // << EL 03/12/98
#                       if 0
                            if ( Ack() ) {
                                PTREE   ack = GetInetUtil().InetReadLow(true);
                                if ( ack == () ) {
                                    State(BROKEN);
                                    
                                    // to avoid destroying socket
                                    Supervisor::inetutil.ForgetOutput();
                                    Supervisor::inetutil.LeaveCritical();
                                    return ;
                                }
                            }
#                       endif
                        
                        // to avoid destroying socket
                        GetInetUtil().ForgetOutput();
                        Supervisor::inetutil.LeaveCritical();
                        return ;
                    }
                    ptString =  (char *)0 ;
                } else {
                    if ( Stamp() ) {
                        
                        // send event
                        message =  parse (
                                          envoie-evenement {
                                              name $(<STRING,PTREE(Name())>),
                                              pco
                            $(<STRING,PTREE((const char *)*(event -> Supervised()))>),
                                              sender $(<STRING,PTREE(event -> Sender())>),
                                              content $(<HSTRING,PTREE(ptString)>),
                                time $(<NUMB,PTREE(CompactItoa(event -> Time().tv_sec))>),
                                utime $(<NUMB,PTREE(CompactItoa(event -> Time().tv_usec))>)
                                          }
                        );
                    } else {
                        
                        // send event
                        message =  parse (
                                          envoie-evenement {
                                              name $(<STRING,PTREE(Name())>),
                                              pco
                            $(<STRING,PTREE((const char *)*(event -> Supervised()))>),
                                              sender $(<STRING,PTREE(event -> Sender())>),
                                              content $(<HSTRING,PTREE(ptString)>)
                                          }
                        );
                    }
#                   if 0
                        EString coord = "Sending to ";
                        coord += CompactItoa(Socket()->peerport());
                        coord += " ";
                        coord += CompactItoa(Socket()->localport());
                        coord += "\n";
                        PrintString(coord);
                        DumpTree(message);
#                   endif
                    if ( GetInetUtil().InetWriteLow(message, false, false, pvOldProtocol) < 0 ) {
                        delete event ;
                        State(BROKEN);
                        
                        // to avoid destroying socket
                        GetInetUtil().ForgetOutput();
                        Supervisor::inetutil.LeaveCritical();
                        return ;
                    }
                    ptString =  (char *)0 ;
                }
            }
            
            // delete message
            delete event ;
            
            // read remaining acknowledge
            if ( !Connection::LookAheadSynchro(name, lookAhead, Supervisor::inetutil, Supervisor::inetutil.ListMess(), true) ) {
                State(BROKEN);
                
                // to avoid destroying socket
                GetInetUtil().ForgetOutput();
                Supervisor::inetutil.LeaveCritical();
                return ;
            }
        } while ( false /* --nbSend >= 1 && (event = NextEvent())*/ );
    }
    
    // to avoid destroying socket
    GetInetUtil().ForgetOutput();
    Supervisor::inetutil.LeaveCritical();
}

// PutEvent : put a new event in a supervised pco
// parameters :
//              nameString : name of supervised which inserted 
//              pcoString : name of pco from which event comes
//              inserted : elem to be inserted
void Supervisor::PutEvent ( const EString &nameString, const EString &pcoString, const PTREE &inserted )
{
    
    int             entryIndex ;       // index in entry array
    SupervisorEntry *supervisorEntry ; // an entry
    
#   ifdef DISPATCH_DEBUG
        
        EString header = EString("Message From : ") + nameString + " on " + pcoString + "\n";
        
        _write(1, header.c_str(), header.length());
        header =  EString(" ==> ") + Value(inserted) + "\n";
        _write(1, header.c_str(), header.length());
#   endif
    
    // search all entries
    for ( entryIndex = entry.Size() - 1 ; entryIndex >= 0 ; entryIndex-- ) {
        
        // put event
        supervisorEntry =  entry [entryIndex];
        supervisorEntry->PutEvent(nameString, pcoString, inserted);
        
        // if entry is broken remove it (we cannot write on it)
        if ( supervisorEntry->State() == SupervisorEntry::BROKEN ) {
            ClosePco((const char *)(*supervisorEntry));
        }
    }
}

// GetEvent : get an event for an entry
// parameters :
//              name : name of supervised name to be searched
//              blocked : tell if blocked read
void Supervisor::GetEvent ( const EString &name, bool blocked )
{
    
    // go in entry whose name is name
    // get the first event
    {
        SupervisorEntry *supervisorEntry ; // entry with name name
        supervisorEntry =  entry [name];
        
        // if we found entry search event and send it
        if ( supervisorEntry ) {
            supervisorEntry->GetEvent(blocked);
            
            // if entry is broken remove it (we cannot write on it)
            if ( supervisorEntry->State() == SupervisorEntry::BROKEN ) {
                ClosePco((const char *)(*supervisorEntry));
            }
        }
    }
}

// GetEvent get next event of a supervised entry
// parameters :
//              name : name of supervised name to be searched
// return : the next supervised element
SupervisorEvent *Supervisor::NextEvent ( const EString &name )
{
    
    // go in entry whose name is name
    // get the first event
    {
        SupervisorEntry *supervisorEntry ; // entry with name name
        supervisorEntry =  entry [name];
        
        // if we found entry search event
        if ( supervisorEntry ) {
            return supervisorEntry->NextEvent();
        }
    }
    
    // we fail to find event, return 0
    return (SupervisorEvent *)0 ;
}

// Wait : put supervised name in wait state
// parameters :
//              name : name of supervised
void Supervisor::Wait ( const EString &name )
{
    
    // go in entry whose name is name
    // get the first event
    {
        SupervisorEntry *supervisorEntry ; // entry with name name
        supervisorEntry =  entry [name];
        
        // if we found entry put it in wait stat
        if ( supervisorEntry ) {
            supervisorEntry->Wait(true);
        }
    }
}

// InsertEntry : insert a new entry
// parameter :
//             name : name of entry to be inserted
//             osin : socket for communication with entry
void Supervisor::InsertEntry ( const EString &name, osockinet *osin )
{
    EString outMess("insert entry : ");
    
    outMess += name ;
    DisplayTime(outMess);
    
    // if entry does not exist create it
    if ( !Entry()[name] ) {
        SupervisorEntry *entry = new SupervisorEntry ; // created entry
        entry->Name(name).Socket(osin).Stamp(Stamp());
        if ( !osin ) {
            EString out (name) ;
            if ( entry->GetInetUtil().ConnectOutput(out) ) {
                DisplayTime("ok for insert");
                Entry().Insert(entry);
                PTREE   killMessage ;
                killMessage =  parse (kill-old $(<STRING,PTREE(CompactItoa(pvIndex++))>););
                entry->GetInetUtil().InetWriteLow(killMessage, false, false, false);
            } else {
                DisplayTime("not ok for insert");
                delete entry ;
            }
        } else 
            Entry().Insert(entry);
    } else {
        
        // try to kill old process
        {
            osockinet   *osin ;       // for killing
            PTREE       killMessage ; // the kill message
            
            // QInetUtil   inetUtil ;    // for writing
            QInetUtil & inetUtil =  Entry()[name]->GetInetUtil();
            
            // send it
            osin                 =  (osockinet *)Entry()[name]->Socket();
            if ( osin ) {
                
                // com with ip
                inetUtil.Osockinet(*osin);
                
                // kill message
                killMessage =  parse (kill $(<STRING,"">););
                inetUtil.InetWriteLow(killMessage, false, false, Entry()[name]->OldProtocol());
                Entry()[name]->Clear();
#               ifdef DISPLAY_TIME
                    {
                        EString message ;
                        message =  EString("Config : One old kill on ") + name + "index " + CompactItoa(pvIndex - 1) + "\n";
                        _write(1, message.c_str(), message.length());
                    }
#               endif
            } else {
                Entry()[name]->Clear();
                
                // kill message
                killMessage =  parse (kill-old $(<STRING,PTREE(CompactItoa(pvIndex++))>););
                EString out (name) ;
                entry [name]->GetInetUtil().ResetOutput();
                if ( !entry [name]->GetInetUtil().ConnectOutput(out) ) {
                    EString error = "New entry cannot be opened initialization failed\n";
                    _write(1, error.c_str(), error.length());
                    ClosePco(name, "");
                    return ;
                }
#               ifdef DISPLAY_TIME
                    {
                        EString message ;
                        message =  EString("Config : Two old kill on ") + name + "index " + CompactItoa(pvIndex - 1) + "\n";
                        _write(1, message.c_str(), message.length());
                    }
#               endif
                
                // write one for each process, we hope so
                int nbKill = 9 ;
                while ( nbKill-- ) {
                    inetUtil.InetWriteLow(killMessage, false, false, Entry()[name]->OldProtocol());
                }
            }
            
            // to avoid destroying socket
            inetUtil.ForgetOutput();
        }
        
        // replace entries
        Entry()[name]->Socket(osin);
    }
}

// InsertPco : insert a new supervised pco
// parameter :
//             name : name of entry
//             pcoName : name of pco
//             outputPco : tell it is an output pco only 
void Supervisor::InsertPco ( const EString &name, const EString &pcoName, bool outputPco )
{
    
    // if entry  does not exist , do nothing
    if ( Entry()[name] ) {
        Entry()[name]->InsertPco(pcoName, outputPco);
    }
}

// ClosePco : close a new supervised pco
// parameter :
//             name : name of entry
//             pco : name of pco
void Supervisor::ClosePco ( const EString &name, const EString &pco )
{
    SupervisorEntry *pSupervisorEntry ; // an entry
    
    // if entry  does not exist , do nothing
    if ( (pSupervisorEntry = Entry()[name]) ) {
        if ( pco == "" ) {
            entry.Remove(pSupervisorEntry);
            delete pSupervisorEntry ;
        } else {
            pSupervisorEntry->Pco().ClosePco(pco);
        }
    }
}

// Check : check that all entries have got correct sockets
// parmameters :
//               sockets : array of corrects sockets
void Supervisor::Check ( std::vector<SOCKET> &sockets )
{
    int indexEntry ; // index in entry array
    
    for ( indexEntry = 0 ; indexEntry < Entry().Size() ; indexEntry++ ) {
        SupervisorEntry *pSupervisorEntry ; // an entry
        pSupervisorEntry =  Entry()[indexEntry];
        
        // if socket is not found delete entry
        if ( pSupervisorEntry->Socket() ) {
            if ( find(sockets.begin(), sockets.end(), pSupervisorEntry->Socket()->OutputSock()) == sockets.end() ) {
                pSupervisorEntry->Socket(0);
                entry.Remove(pSupervisorEntry);
                delete pSupervisorEntry ;
                indexEntry-- ;
            }
        }
    }
}


