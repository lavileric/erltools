#ifndef SUPERVISOR_FILE
#   define SUPERVISOR_FILE 1
#   include <tabsort.h>
#   define QUEUE_MAX 5000
#   include "erlsock.h"
#   include "decasn.h"
#   ifdef MOST_RECENT_STL
#       include <list>
#       include <stack>
#       include <queue>
#   else 
#       include <list.h>
#       include <stack.h>
#   endif
#   ifdef BORLAND3
#       include <queue.h>
#   endif
#   include "inetutil.h"
#   include "quickinetutil.h"
    
    class SupervisorElem {
        
        public :
        
            // constructor
            SupervisorElem ()
                : pvOutputPco(false)
            {}
            
            // destructor 
            ~SupervisorElem () {}
            
            // Pco : set pco supervised
            // parameters :
            //              paramName : name of pco
            // return : the class
            SupervisorElem &Name ( const EString &paramName )
            {
                name = (EString)paramName ;
                return *this ;
            }
            
            // Pco : get name of pco supervised
            // return : name supervised
            const EString &Name () const
            {
                return name ;
            }
            
            // operator const char * : get name of pco
            // return : name of pco
            operator const char *() const
            {
                return (const char *)Name();
            }
            
            // OuputPco : output pco modifier
            // parameters :
            //               ouputPco : new value for output pco
            // return : the whole object
            SupervisorElem &OutputPco ( bool outputPco )
            {
                
                // set variable
                pvOutputPco = outputPco ;
                
                // return object
                return *this ;
            }
            
            // OuputPco : output pco accessor
            bool OutputPco () const
            {
                return pvOutputPco ;
            }
        
        private :
        
            EString name ;        // name of pco supervised
            bool    pvOutputPco ; // tell if only output pco
    };
    
    class SupervisorEvent {
        
        public :
        
            // constructor 
            // parameters :
            //              event : the starting event 
            SupervisorEvent ( const PTREE &event = PTREE(0) )
                : pEvent(event)
            {}
            
            // destructor
            ~SupervisorEvent () {}
            
            // SupervisorElem : set SupervisorElem
            // parameters :
            //               pSupervisor : supervisor elem to be set
            // return : the class
            SupervisorEvent &Supervised ( SupervisorElem *pSupervisor )
            {
                pSupervised = pSupervisor ;
                return *this ;
            }
            
            // SupervisorElem : get SupervisorElem
            // return : the supervisor elem
            const SupervisorElem *Supervised ()
            {
                return pSupervised ;
            }
            
            // Event : set event
            // parameters :
            //               pEventParam : event to be set
            // return : the class
            SupervisorEvent &Event ( const PTREE &pEventParam )
            {
                pEvent = pEventParam ;
                return *this ;
            }
            
            // Event : get event
            // parameters :
            // return : the event
            const PTREE &Event ()
            {
                return pEvent ;
            }
            
            // Sender : get sender of event
            // return : the sender
            const EString &Sender () const
            {
                return pvSender ;
            }
            
            // Sender : put sender of event
            SupervisorEvent &Sender ( const EString &sender )
            {
                pvSender = (EString)sender ;
                return *this ;
            }
            
            // Time : get time of event
            // return : the time
            const timeval &Time () const
            {
                return pvTime ;
            }
            
            // Time : put time of event
            // return : the object
            SupervisorEvent &Time ( const struct timeval &time )
            {
                pvTime.tv_sec = time.tv_sec ;
                pvTime.tv_usec = time.tv_usec ;
                return *this ;
            }
        
        private :
        
            SupervisorElem  *pSupervised ; // elem where the event will go
            PTREE           pEvent ;       // the event
            EString         pvSender ;     // sender of event
            struct timeval   pvTime ;      // time at which event was stored
            
            // copy constructor : invalidate it since private
            // parameters :
            //              supervisorEvent : supervisorEvent to copy
            SupervisorEvent ( const SupervisorEvent &supervisorEvent ) {}
            
            // operator = : invalidate it since private
            // parameters :
            //              supervisorEvent : supervisorEvent to copy
            // return : the new supervisorEvent
            SupervisorEvent &operator= ( const SupervisorEvent &supervisorEvent )
            {
                return *this ;
            }
    };
    
    class SupervisorPco {
#       if !defined(STL_2) && !defined(STL_3)
            typedef queue<list<SupervisorEvent *> >     QueueEvent ;
#       else 
            typedef queue<SupervisorEvent *, list<SupervisorEvent *> >  QueueEvent ;
#       endif
        
        public :
        
            // constructor
            SupervisorPco ()
                : pvLastAccess(0)
            {}
            
            //destructor
            ~SupervisorPco ()
            {
                Clear();
            }
            
            // Supervised : access to supervised array
            // return : the array
            TabSort<SupervisorElem> &Supervised ()
            {
                return supervised ;
            }
            
            // Event : access to event array
            // return : the array
            QueueEvent &Event ()
            {
                return event ;
            }
            
            // InsertEvent : insert an event 
            // parameters :
            //              sender : the sender
            //              pcoName : name of pco
            //              event : the event to be inserted
            void            InsertEvent (const EString &sender, const EString &pcoName, const PTREE &event) ;
            
            // NextEvent : get next event in pco
            // return : the event found or 0
            SupervisorEvent *NextEvent () ;
            
            // InsertPco : insert a new supervised PCO
            // parameters :
            //              name : name of new pco
            //             outputPco : tell it is an output pco only 
            void            InsertPco (const EString &name, bool outputPco) ;
            
            // ClosePco : remove a new supervised PCO
            // parameters :
            //              name : name of deleted pco
            void            ClosePco (const EString &name) ;
            
            // Clear : clear the pco 
            void            Clear () ;
            
            // tell if a pco is supervised
            bool Supervised ( const EString &pco )
            {
                if ( supervised [pco] || pco == "self" ) 
                    return true ;
                else 
                    return false ;
            }
            
            // NumberEvent : return number of events in queue
            long NumberEvent () const
            {
                return event.size();
            }
            
            // NumberEvent : return number of events in queue for a name
            long    NumberEvent (const EString name) ;
        
        private :
        
#           if 0
                TabSortEqual<SupervisorEvent>   event ; // list of event
#           else 
                QueueEvent  event ;
#           endif
            
            time_t                      pvLastAccess ; // last access for this pco
            TabSort<SupervisorElem>     supervised ;   // list of supervised elem
            
            // copy constructor : invalidate it since private
            // parameters :
            //              supervisorPco : supervisorPco to copy
            SupervisorPco ( const SupervisorPco &supervisorPco ) {}
            
            // operator = : invalidate it since private
            // parameters :
            //              supervisorPco : supervisorPco to copy
            // return : the new supervisorPco
            SupervisorPco &operator= ( const SupervisorPco &supervisorPco )
            {
                return *this ;
            }
    };
    
    class SupervisorEntry {
        
        public :
        
            enum SupervisorState { BROKEN = 1, VALID = 2 };
            
            // constructor
            SupervisorEntry ()
                : pvState(VALID),  pvOldProtocol(false),  pvAck(false)
            {
                pvWaitState = false ;
            }
            
            //destructor
            ~SupervisorEntry ()
            {
                if ( psocket ) {
                    GetInetUtil().ForgetOutput();
                    
                    // socket will be disconnect on inetutil input
                    // of dispatcher prevent from double disconnect
                    psocket->OutputSock(0);
                    delete psocket ;
                    psocket = 0 ;
                }
            }
            
            // Name : set name supervised
            //              paramName : name to be supervised
            // return : the class
            SupervisorEntry &Name ( const EString &paramName )
            {
                name = (EString)paramName ;
                return *this ;
            }
            
            // Name : get name supervised
            // return : name supervised
            const EString &Name () const
            {
                return name ;
            }
            
            // Socket : set socket for supervisor entry
            // parameters :
            //              socket : the socket of entry
            // return : the class
            SupervisorEntry &Socket ( osockinet *socket )
            {
                psocket = socket ;
                return *this ;
            }
            
            // Socket : get socket of supervised
            // return :socket for supervised
            osockinet *Socket ()
            {
                return psocket ;
            }
            
            // Pco : access to supervised array
            // return : the array
            SupervisorPco &Pco ()
            {
                return pco ;
            }
            
            // const char * : return name of entry
            // return : the name
            operator const char *() const
            {
                return (const char *)Name();
            }
            
            // InsertPco : insert a new supervised pco
            // parameter :
            //             pcoName : name of pco
            //             outputPco : tell it is an output pco only 
            void InsertPco ( const EString &pcoName, bool outputPco )
            {
                
                // insert
                Pco().InsertPco(pcoName, outputPco);
            }
            
            // PutEvent : put a new event in a supervised pco
            // parameters :
            //              nameString : name of supervised which inserted 
            //              pcoString : name of pco from which event comes
            //              inserted : elem to be inserted
            void    PutEvent (const EString &nameString, const EString &pcoString, const PTREE &inserted) ;
            
            // GetEvent : get an event for an entry
            // parameters :
            //              blocked : tell if blocked read
            void    GetEvent (bool blocked) ;
            
            // Clear : clear an entry
            void Clear ()
            {
                Pco().Clear();
                if ( psocket ) {
                    delete psocket ;
                    psocket = 0 ;
                }
                Wait(false);
            }
            
            // return next supervised element
            // return : the next supervised element
            SupervisorEvent *NextEvent ()
            {
                return Pco().NextEvent();
            }
            
            // Wait : put entry in wait state
            // parameters :
            //              stat : the value to be set
            // return : reference on class
            SupervisorEntry &Wait ( bool stat )
            {
                pvWaitState = stat ;
                return *this ;
            }
            
            // get wait state
            // return : wait state
            bool Wait ()
            {
                return pvWaitState ;
            }
            
            // tell if a pco is supervised
            bool Supervised ( const EString &pco )
            {
                return Pco().Supervised(pco);
            }
            
            // State : give state of entry
            // return : the state of entry
            SupervisorState State () const
            {
                return pvState ;
            }
            
            // State : set state of entry
            // parameters :
            //              state : the new state of entry
            // return : the whole object
            const SupervisorEntry &State ( SupervisorState state )
            {
                pvState = state ;
                return *this ;
            }
            
            // OldProtocol : set an entry in old protocol
            // parameters :
            //               oldProtocol : tell if old protocol
            // return : the object
            SupervisorEntry &OldProtocol ( bool oldProtocol )
            {
                
                // set protcocol
                pvOldProtocol = oldProtocol ;
                
                // return object
                return *this ;
            }
            
            // OldProtocol : get old protocol
            // return : if old protocol is true
            bool OldProtocol () const
            {
                return pvOldProtocol ;
            }
            
            // Ack : tells to acknowledge message
            // parameters :
            //               ack : the new value for ack
            // return : the whole object
            SupervisorEntry &Ack ( bool ack )
            {
                
                // set variable
                pvAck = ack ;
                
                // return object
                return *this ;
            }
            
            // OuputPco : output pco accessor
            bool Ack () const
            {
                return pvAck ;
            }
            
            // get quickinetutil 
            QInetUtil &GetInetUtil ()
            {
                return pvQuickInetUtil ;
            }
            
            // Stamp : tells if stamp
            SupervisorEntry &Stamp ( bool stamp )
            {
                pvStamp = stamp ;
                return *this ;
            }
            
            // Stamp : gets stamp
            bool Stamp ()
            {
                return pvStamp ;
            }
        
        private :
        
            EString         name ;            // name of thing to be supervised
            osockinet       *psocket ;        // socket where to send
            SupervisorPco   pco ;             // the pco
            bool            pvWaitState ;     // tell if waiting an event
            SupervisorState pvState ;         // state of entry (valid or not)
            bool            pvOldProtocol ;   // tell that in old protocol
            bool            pvAck ;           // tells to acknowledge messages
            QInetUtil       pvQuickInetUtil ; // quick inet util for output
            bool            pvStamp ;         // stamp time or not
            
            // copy constructor : invalidate it since private
            // parameters :
            //              supervisorEntry : supervisorEntry to copy
            SupervisorEntry ( const SupervisorEntry &supervisorEntry ) {}
            
            // operator = : invalidate it since private
            // parameters :
            //              supervisorEntry : supervisorEntry to copy
            // return : the new supervisorEntry
            SupervisorEntry &operator= ( const SupervisorEntry &supervisorEntry )
            {
                return *this ;
            }
    };
    
    class Supervisor {
        
        public :
        
            // constructor
            Supervisor ()
                : pvIndex(1)
            {}
            
            // destructor
            ~Supervisor ()
            {
                Freeze();
            }
            
            // NextEvent get next event of a supervised entry
            // parameters :
            //              name : name of supervised name to be searched
            // return : the next supervised element
            SupervisorEvent *NextEvent (const EString &name) ;
            
            // Wait : put supervised name in wait state
            // parameters :
            //              name : name of supervised 
            void            Wait (const EString &name) ;
            
            // PutEvent : put a new event in a supervised pco
            // parameters :
            //              nameString : name of supervised which inserted 
            //              pcoString : name of pco from which event comes
            //              inserted : elem to be inserted
            void            PutEvent (const EString &nameString, const EString &pcoString, const PTREE &inserted) ;
            
            // GetEvent : get an event for an entry
            // parameters :
            //              name : name of supervised name to be searched
            //              blocked : tell if blocked read
            void            GetEvent (const EString &name, bool blocked) ;
            
            // InsertEntry : insert a new entry
            // parameter :
            //             name : name of entry to be inserted
            //             osin : socket for entry
            void            InsertEntry (const EString &name, osockinet *osin) ;
            
            // InsertPco : insert a new supervised pco
            // parameter :
            //             name : name of entry
            //             pco : name of pco
            //             outputPco : tell it is an output pco only 
            void            InsertPco (const EString &name, const EString &pco, bool outputPco) ;
            
            // ClosePco : close a supervised pco
            // parameter :
            //             name : name of entry
            //             pco : name of pco
            void            ClosePco (const EString &name, const EString &pco = EString("")) ;
            
            // Entry : Get entry array
            // return : the entry array
            TabSort<SupervisorEntry> &Entry ()
            {
                return entry ;
            }
            
            // Check : check that all entries have got correct sockets
            // parameters :
            //               sockets : array of corrects sockets
            void    Check (std::vector<SOCKET> &sockets) ;
            
            int GetIndex ()
            {
                return pvIndex++ ;
            }
            
            void Freeze ()
            {
                
                // free all entry
                for ( int index = Entry().Size() ; index-- > 0 ;) {
                    delete Entry()[index];
                    Entry().Erase(index);
                }
                inetutil.Freeze();
            }
            
            // Stamp : tells if stamp
            Supervisor &Stamp ( bool stamp )
            {
                pvStamp = stamp ;
                return *this ;
            }
            
            // Stamp : gets stamp
            bool Stamp ()
            {
                return pvStamp ;
            }
        
        public :
        
            static QInetUtil    inetutil ;
        
        private :
        
            int                         pvIndex ;
            bool                        pvStamp ; // stamp time or not
            TabSort<SupervisorEntry>    entry ;   // list of entry
            
            // copy constructor : invalidate it since private
            // parameters :
            //              supervisor : supervisor to copy
            Supervisor ( const Supervisor &supervisor ) {}
            
            // operator = : invalidate since private
            // parameters :
            //              supervisor : operand
            // return : the new supervisor
            Supervisor &operator= ( const Supervisor &supervisor )
            {
                return *this ;
            }
    };
#endif
