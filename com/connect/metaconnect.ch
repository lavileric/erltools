language asn;

#include "metaconnect.h"
#include <time.h>

// IsLookAhead : search if message is searched lookahead
// parameters :
//               name : name of appli
//               message : received message
// return 0 not good 1 good 2 good to be saved
int MetaConnection::IsLookAhead ( EString &name, PTREE &message )
{
    
    PTREE   ident ;   // ident for message
    PTREE   content ; // content of message
    
    if ( message == <NAMED_VALUE,ident,content> ) {
        switch ( ident ) {
            case <IDENT,"acknowledgement"> : 
                {
                    
                    // cant guess who send it 
                    return 1 ;
                }
                break ;
            case <IDENT,"named-acknowledgement"> : 
                {
                    
                    // cant guess who send it 
                    if ( name == "" || name == Value(content) ) {
                        return 1 ;
                    } else {
                        return 0 ;
                    }
                }
                break ;
            case <IDENT,"envoie-evenement-chunk"> : 
            case <IDENT,"envoie-evenement-chunk-end"> : 
                {
                    
                    // get sender 
                    EString sender = Value(MetaInetUtil::GetNamedValue("name", message));
                    
                    // cant guess who send it 
                    if ( name == "" || sender == name ) {
                        return 2 ;
                    } else {
                        return 0 ;
                    }
                }
                break ;
        }
    }
    
    // not searched elem
    return 0 ;
}

// LookAheadSynchro : get look ahead synchro
// parameters :
//              name : name for look ahead
//              nbSynchro : nb of synchro
//              util : the util object
//              listMess : the list of message
//              lookTimeOut : look if time out
//              lookTimeVal : look time out val
//              dispatchRefNumber : ref number for dispatcher (used for kill)
bool MetaConnection::LookAheadSynchro ( EString &name, int nbSynchro, MetaInetUtil &util, list<PTREE> &listMess, bool lookTimeOut, int lookTimeVal
    , int dispatchRefNumber )
{
    
    // if shared input no use waiting ack
    if ( !nbSynchro || util.SharedInput() ) 
        return true ;
    
    // first scan the inetutil list
    list<PTREE> ::iterator  iter ;
    EString                 empty("");
    int                     type ;
    
    for ( iter = listMess.begin() ; iter != listMess.end() ;) {
        PTREE   content = *iter ;
        if ( (type = IsLookAhead(name, content)) ) {
            if ( type == 2 ) {
                content =  <ANY,content>;
                *iter   =  content ;
                nbSynchro-- ;
                if ( nbSynchro <= 0 ) 
                    return true ;
            } else {
                list<PTREE> ::iterator  deleted ;
                deleted =  iter++ ;
                listMess.erase(deleted);
                nbSynchro-- ;
                if ( nbSynchro <= 0 ) 
                    return true ;
                else 
                    continue ;
            }
        }
        iter++ ;
    }
    if ( lookTimeVal < 0 ) 
        lookTimeVal =  MAX_WAIT_ACK ;
    
    // read remaining synchro
    while ( nbSynchro-- ) {
        PTREE   received ; // received tree
        received =  util.InetReadLow(true);
        time_t  startTime = time(0);
        
        // could block on chunk if two start at same time
        while ( !(type = IsLookAhead(name, received)) ) {
            PTREE   messContent ;
            bool    storeTree = true ; // tells if have to store tree
            if ( received == <NAMED_VALUE,<IDENT,"kill">,messContent> ) {
                if ( !strcmp(Value(messContent), "") ) 
                    return false ;
                else 
                    storeTree =  false ;
            }
            if ( received == <NAMED_VALUE,<IDENT,"kill-old">,messContent> ) {
                if ( dispatchRefNumber != -1 && atoi(Value(messContent)) != dispatchRefNumber ) 
                    return false ;
                else 
                    storeTree =  false ;
            }
            if ( received != PTREE(0) && storeTree ) 
                util.Push(received);
            if ( lookTimeOut && time(0) - startTime > lookTimeVal ) {
                return false ;
            }
            received =  util.InetReadLow(true);
            if ( received != PTREE(0) ) {
                startTime =  time(0);
            }
        }
        
        // a chunk to be kept
        if ( type == 2 ) {
            received =  <ANY,received>;
            util.Push(received);
        }
    }
    return true ;
}

// SearchChunkEnd : get chunk end 
// parameters :
//              name : name for look ahead
//              util : the util object
//              sendUtil : the util for sending acks
//              listMess : the list of message
//              chunks : where to store messages
//              oldProtocol : type of protocol
PTREE MetaConnection::SearchChunkEnd ( EString &name, MetaInetUtil &util, MetaInetUtil &sendUtil, list<PTREE> &chunks, bool oldProtocol )
{
    
    // first scan the inetutil list
    list<PTREE> ::iterator  iter ;
    EString                 empty("");
    int                     type ;
    
    list<PTREE> & listMess =  util.ListMess();
    
    PTREE   acknowledgment ; // the acknowledgement
    
    // construct acknowledgment
    acknowledgment =  parse (acknowledgement NULL);
start : 
    for ( iter = listMess.begin() ; iter != listMess.end() ; iter++ ) {
        PTREE   content = *iter ;
        PTREE   selector ;
        content =  <ANY,content>;
        content =  <NAMED_VALUE,selector>;
        switch ( selector ) {
            case <IDENT,"envoie-evenement-chunk-end"> : 
                {
                    listMess.erase(iter);
                    return content ;
                }
                break ;
            case <IDENT,"envoie-evenement-chunk"> : 
                {
                    sendUtil.InetWriteLow(acknowledgment, false, false, oldProtocol);
                    listMess.erase(iter);
                    chunks.push_back(content);
                    goto start ;
                }
                break ;
        }
    }
    
    // read remaining synchro
    {
        PTREE   received ; // received tree
        time_t  startTime = time(0);
        
        // could block on chunk if two start at same time
        while ( true ) {
            received =  util.InetReadLow(true);
            PTREE   selector ;
            received =  <NAMED_VALUE,selector>;
            switch ( selector ) {
                case <IDENT,"envoie-evenement-chunk-end"> : return received ;
                case <IDENT,"envoie-evenement-chunk"> : 
                    {
                        sendUtil.InetWriteLow(acknowledgment, false, false, oldProtocol);
                        chunks.push_back(received);
                        goto start ;
                    }
                    break ;
            }
            PTREE   messContent ;
            if ( received == <NAMED_VALUE,<IDENT,"kill">,messContent> && !strcmp(Value(messContent), "") ) 
                return received ;
            if ( received != PTREE(0) ) 
                util.Push(received);
            if ( time(0) - startTime > MAX_WAIT_ACK ) {
                return PTREE(0);
            }
            received =  util.InetReadLow(true);
        }
    }
}


