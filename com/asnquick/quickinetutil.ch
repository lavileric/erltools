language asn;

// #define DEBUG_SOCK_RAW 1
// #define DEBUG_SOCK 1
#ifdef BORLAND
#   define CHUNK_DIVIDE 2
#else 
#   define CHUNK_DIVIDE 2
#endif

#include "quickinetutil.h"
#include "token.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// constructor with a file, read the grammar
// parameter :
//             fileName : the file to be read
QInetUtil::QInetUtil ( EString fileName )
{
#   if 0
        Syntax(fileName);
#   endif
}

// Syntax : set syntax for user
// parameters :
//              fileSyntax : file where to read syntax
// return : the whole object
extern PTREE    nameModule ;
extern PTREE    listInclude ;

// Interpret : interpret a string with a grammar
// parameters :
//              message : the string to be interpreted
//              length : length of message
//              grammar : grammar for interpreting
//              channel : channel where to interpret
// return : the decoded tree
PTREE QInetUtil::Interpret ( EString message, GenGramm *grammar )
{
    int         start = 0 ;
    int         length = message.length();
    CoordString coordString (start, length) ;
    
    return grammar->Root(message, coordString, true);
}

// FullInterpret : interpret a string coded as hexa string with a grammar
// parameters :
//              message : the string to be interpreted
//              channel : channel of interpretation (if some)
// return : the decoded tree
PTREE QInetUtil::FullInterpret ( EString &message, EString channel )
{
    EString     binContent = GenGramm::ConvertStringToBin(message);
    GenGramm    *gramm = pvTabGramm [channel];
    
    if ( gramm ) 
        return Interpret(binContent, gramm);
    else 
        return PTREE(0);
}

// FullEncode : full encoding of a tree
// parameters :
//              tree : the tree to be encoded
//              channel : the channel
// return : the encoding
EString QInetUtil::FullEncode ( PTREE tree, EString channel )
{
    EString     result ;
    GenGramm    *gramm = pvTabGramm [channel];
    
    if ( gramm ) {
        gramm->Root(result, tree);
        return GenGramm::DecodeOctetString(result);
    }
    return result ;
}

static char writeBuffer [5000];

// InetWriteLow : low level write on inet
// parameters :
//              message : the message to be written
//              permute : tell to write on read socket
//              check : tell if we have to check if ok
//              oldMode : tell to write with old mode
// return : the length written
int QInetUtil::InetWriteLow ( PTREE message, bool permute, bool check, bool oldMode )
{
    int     count = 20 ;
    EString encodingString("v10012345");  // the encoding string
    int     length ;                      // length written
    
#   if !defined(VISUAL) && !defined(BORLAND) && !defined(HAS_POSIX)
        
        bool    pvpDShared = false ;
        
#   endif
    
    // if sockets are not opened do nothing
    if ( !pvpDShared && (permute && !pvIsin || !permute && !pvOsin) ) 
        return 0 ;
    {
    }
    EnterCritical();
    
    // encode tree
    Root(encodingString, message);
    
    // write only chunksized message
    length =  encodingString.length(); // length to write
    
    int lengthAdded ;
    
    if ( (unsigned int)length < (unsigned int)(SizeMin()) ) {
        lengthAdded =  SizeMin();
    } else 
        lengthAdded =  length ;
    
    EString lengthWritten ; // length written
    
    EncodeLength(lengthWritten, lengthAdded);
    memmove((char *)(encodingString.c_str()) + 4, (char *)(lengthWritten.c_str()), lengthWritten.length());
    
    char    *ptWriteBuffer = writeBuffer ; // write buffer 
    
    memcpy(ptWriteBuffer, (char *)(encodingString.c_str()), encodingString.length());
    LeaveCritical();
start : 
    
    // write to osin
    if ( !pvpDShared ) {
        if ( !permute ) {
            length =  pvOsin->write(ptWriteBuffer, 9 + lengthAdded, check);
        } else {
            length =  pvIsin->write(ptWriteBuffer, 9 + lengthAdded, check);
        }
        if ( length < 0 ) {
            char    mess [50];
            sprintf(mess, "Error on message write %d\n", length);
            _write(2, mess, strlen(mess));
#           ifdef BORLAND
                Sleep(500);
#           endif
            if ( count-- > 0 ) 
                goto start ;
        }
    } else {
        if ( check ) {
            if ( !WriteDirect(ptWriteBuffer, 9 + lengthAdded) ) {
                if ( count-- > 0 ) {
                    MSLEEP(100);
                    goto start ;
                } else 
                    return -1 ;
            }
        } else if ( !WriteDirect(ptWriteBuffer, 9 + lengthAdded, 3000) ) {
            if ( count-- > 0 ) {
                goto start ;
                MSLEEP(100);
            } else 
                return -1 ;
        }
    }
    
    // return number of char written
    return length ;
}

// InetReadLow : low level read on inet
// parameters :
//               permute : tell to read on write socket
// return : the asn1Value decoded with grammar
PTREE QInetUtil::InetReadOneLow ( bool permute, void *pCritical )
{
    
    PTREE           readResult ;          // result of read
    char            string [50];          // for error message
    int             correctionOffset(0);  // offset when error
    unsigned int    expectedLength = 0 ;  // expected length
    char            *buffer = (char *)(pvBuffer.c_str());
    
    // get the message
    long            length = 0 ;          // the remaining length
    
    // if sockets are not opened do nothing
    if ( !permute && !pvIsin || permute && !pvOsin ) 
        return PTREE(0);
error_solve : 
    
    // if nothing stored ahead read on socket
    if ( pvLength <= 0 || correctionOffset ) {
        if ( !permute ) 
            pvLength =  pvIsin->read(buffer + correctionOffset, INET_BUFFER_SIZE - correctionOffset, correctionOffset != 0);
        else 
            pvLength =  pvOsin->read(buffer + correctionOffset, INET_BUFFER_SIZE - correctionOffset, correctionOffset != 0);
    }
    
    // if correction offset adapt the length received
    if ( correctionOffset ) {
        
        // if we have not found data yet it is an error
        if ( pvLength + length < expectedLength && pvLength <= 0 ) {
            pvStart =  pvLength = 0 ;
        } else 
            pvLength += length ;
        
        // take data in
        correctionOffset =  0 ;
    }
    
    // if negative error
#   if 0
        if ( pvLength < 0 ) {
            sprintf(string, "Invalid length %d\n", pvLength);
            _write(2, string, strlen(string));
            pvLength =  0 ;
            return (PTREE)0 ;
        } else if ( !pvLength ) 
            return PTREE(0);
#   else 
        if ( !pvLength ) 
            return PTREE(0);
#   endif
    
    unsigned long   lengthAdded = 0 ;
    
    // analyze it and return the result
    {
        bool    newMode (false) ;
        if ( pvLength >= 4 && !strncmp(buffer + pvStart, "v100", 4) ) 
            newMode =  true ;
        else if ( pvLength >= 4 || strncmp("v100", buffer + pvStart, pvLength) ) {
#           if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
                if ( pCritical ) 
                    EnterCriticalSection((CRITICAL_SECTION *)pCritical);
#           endif
            PTREE   result ;
            char    *mess = DecompAsn().DecodeOctetString(buffer + pvStart, pvLength);
            EString lastSocket ;
            if ( !permute ) 
                lastSocket =  CompactItoa(pvIsin->LastSocket());
            else 
                lastSocket =  CompactItoa(pvOsin->OutputSock());
            result =  <CONS,PTREE(lastSocket),PTREE(mess)>;
            free(mess);
            pvStart =  pvLength = 0 ;
#           if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
                if ( pCritical ) 
                    LeaveCriticalSection((CRITICAL_SECTION *)pCritical);
#           endif
            return result ;
        }
        if ( newMode ) {
#           if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
                if ( pCritical ) 
                    EnterCriticalSection((CRITICAL_SECTION *)pCritical);
#           endif
            if ( pvLength >= 9 ) {
                long        max = 50000 ;
                int         start = pvStart + 4 ;
                int         length = 5 ;
                CoordString coord (start, length) ;
                lengthAdded =  DecodeLength(pvBuffer, coord);
            }
            length =  pvLength - 9 ;
            if ( pvLength >= 9 + lengthAdded ) {
                int         start = pvStart + 9 ;
                int         length = lengthAdded ;
                CoordString coordString (start, length) ;
                readResult =  Root(pvBuffer, coordString, true);
            } else 
                readResult =  ();
#           if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
                if ( pCritical ) 
                    LeaveCriticalSection((CRITICAL_SECTION *)pCritical);
#           endif
            
            // we found nothing may be the pdu has been split, try it
            if ( pvLength < 9 + lengthAdded ) {
                
                // if too far move data
                correctionOffset =  pvStart + pvLength ;
                if ( correctionOffset > INET_BUFFER_SIZE / 2 && pvStart != 0 ) {
                    memmove(buffer, buffer + pvStart, pvLength);
                    pvStart          =  0 ;
                    correctionOffset =  pvLength ;
                }
                
                // read more data
                length         =  pvLength ;
                expectedLength =  9 + lengthAdded ;
                goto error_solve ;
            }
        } else {
            pvStart =  pvLength = 0 ;
            return PTREE(0);
        }
    }
    
    // if necessary remove added length
    // length is length of remaining
    length =  pvLength - lengthAdded - 9 ;
    
    // if two message have been concatenated keep right pointers
    if ( !length ) {
        pvLength =  pvStart = 0 ;
    } else {
        pvStart  += pvLength - length ;
        pvLength =  length ;
    }
    return readResult ;
}

// InetWrite : write a packet on internet
// parameters :
//              permute : tell to write on read socket
//              check : tell if we have to check if ok
// return : the length written
int QInetUtil::InetWrite ( PTREE message, bool permute, bool check )
{
    int length ; // length written
    
    // write message
    length =  InetWriteLow(message, permute, check);
    
    // return length written
    return length ;
}


