language asn;

// #define DEBUG_SOCK_RAW 1
// #define DEBUG_SOCK 1
#define CHUNK_DIVIDE 2

#include "token.h"
#include "inetutil.h"
#include <decasn.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// constructor with a file, read the grammar
// parameter :
//             fileName : the file to be read
InetUtil::InetUtil ( EString fileName )
{
    Syntax(fileName);
}

// Syntax : set syntax for user
// parameters :
//              fileSyntax : file where to read syntax
// return : the whole object
extern PTREE    nameModule ;
extern PTREE    listInclude ;

InetUtil &InetUtil::Syntax ( EString fileSyntax, DecompAsn &decompAsn )
{
    
    int     keepInput ;       // save input
    PTREE   transferGrammar ; // transfer grammar
    
    // DecompAsn * pDecAsn;
    // pDecAsn = pvTabDecompAsn["Ihm"];
    // read the syntax file
    nameModule =  ();
    
    asn *pAsn = new asn ;
    
    transferGrammar =  pAsn->ReadFile((const char *)fileSyntax);
    listInclude     =  pAsn->Includes();
    delete pAsn ;
    
    // if bad tree return
    if ( transferGrammar == (PTREE) -1 || transferGrammar == () ) {
        EString error = EString("Invalid Tranfer Grammar : ") + fileSyntax + "\n";
        MetaExit(1, error.c_str());
    }
    
    // store grammar
    decompAsn.StoreGrammar(transferGrammar);
    
    // 
    return *this ;
}

// Interpret : interpret a string with a grammar
// parameters :
//              message : the string to be interpreted
//              length : length of message
//              grammar : grammar for interpreting
//              channel : channel where to interpret
// return : the decoded tree
PTREE InetUtil::Interpret ( char *message, long &length, PTREE grammar, EString channel )
{
    
    PTREE   octetTLV ;    // the tlv tree
    PTREE   result ;      // result of decoding
    PTREE   asn1Value ;   // asn1Value
    PTREE   modifiedTlv ; // modifiedTlv
    PTREE   type ;        // type
    
    DecompAsn & decompAsn =  GetAsn(channel); // decompasn for channel
    
    // get tlv
    if ( decompAsn.FastEncode() ) {
        octetTLV =  decompAsn.GetTLVShallow(message, &length, true);
    } else {
        octetTLV =  decompAsn.GetTLV(message, &length);
    }
    if ( octetTLV == <CODING,<>,<>,<>,()> ) {
        
        // get value
        // << EL 04/98
        asn1Value =  decompAsn.DecodeValue(grammar, (PTREE)0, 0, octetTLV, false);
        
        // interpret it 
        asn1Value == <NAMED_VALUE,<TOP_ENTRY>,asn1Value>;
        
        // return value
        return asn1Value ;
    }
    
    // get nothing, return null pointer
    return (PTREE)0 ;
}

// FullInterpret : interpret a string coded as hexa string with a grammar
// parameters :
//              message : the string to be interpreted
//              channel : channel of interpretation (if some)
// return : the decoded tree
PTREE InetUtil::FullInterpret ( char *message, EString channel )
{
    
    char    *string ;                      // intermediate string
    long    length = strlen(message) / 2 ; // length of binary string
    PTREE   content ;                      // the interpreted content
    
    string  =  pvDecompAsn.ConvertStringToBin(message, 2 * length);
    content =  Interpret(string, length, GetRoot(channel), channel);
    free(string);
    return content ;
}

// FullEncode : full encoding of a tree
// parameters :
//              tree : the tree to be encoded
//              channel : the channel
// return : the encoding
Coding *InetUtil::FullEncode ( PTREE tree, EString channel )
{
    
    // encode tree
    return GetAsn(channel).EncodeValue(GetRoot(channel), tree);
}

static char charWrite [CHUNK_SIZE];

// InetWriteLow : low level write on inet
// parameters :
//              message : the message to be written
//              permute : tell to write on read socket
//              check : tell if we have to check if ok
//              oldMode : tell to write with old mode
// return : the length written
int InetUtil::InetWriteLow ( PTREE message, bool permute, bool check, bool oldMode )
{
    
    Coding  *encoding ;       // the encoding
    EString *encodingString ; // the encoding string
    int     length ;          // length written
    int     count = 20 ;
    
#   if defined(DEBUG_SOCK)
        output =  1 ;
        ">> =========================";
        DumpTree(message);
#   endif
    
    // if sockets are not opened do nothing
    if ( permute && !pvIsin || !permute && !pvOsin ) 
        return 0 ;
    EnterCritical();
    
    // encode tree
    encoding       =  pvDecompAsn.EncodeValue(TransferGrammar(), message);
    encodingString =  encoding->GetRawString();
    LeaveCritical();
start : 
    EnterCritical();
    
    // write only chunksized message
    length =  encodingString->length(); // length to write
    
    char    *toWriteData = (char *)(encodingString->c_str());  // to write
    char    *toWrite ;                                         // other things to write
    
    memcpy(charWrite, "v100", 4);
    
    int lengthAdded ;
    
    if ( (unsigned int)length < (unsigned int)(SizeMin()) ) {
        lengthAdded =  SizeMin();
    } else 
        lengthAdded =  length ;
    
    char    *lengthWritten = pvDecompAsn.EncodeLengthFast(lengthAdded);
    int     lengthLength = strlen(lengthWritten) / 2 ;
    
    lengthWritten =  pvDecompAsn.ConvertStringToBin(lengthWritten, 2 * lengthLength);
    memcpy(charWrite + 4, lengthWritten, lengthLength);
    free(lengthWritten);
    if ( lengthLength < 5 ) 
        lengthLength =  5 ;
    memcpy(charWrite + 9, toWriteData, length);
    toWrite =  charWrite ;
    if ( oldMode ) {
        toWrite += 9 ;
        if ( length > CHUNK_SIZE / CHUNK_DIVIDE ) {
            lengthAdded =  length - 9 ;
        } else {
            lengthAdded =  CHUNK_SIZE / CHUNK_DIVIDE - 9 ;
        }
    }
    LeaveCritical();
    
    // write to osin
    if ( !permute ) {
        length =  pvOsin->write(toWrite, 9 + lengthAdded, check);
    } else {
        length =  pvIsin->write(toWrite, 9 + lengthAdded, check);
    }
    if ( length < 0 ) {
        char    mess [50];
        sprintf(mess, "Error on message write %d\n", length);
        write(2, mess, strlen(mess));
        MSLEEP(500);
        if ( count-- > 0 ) 
            goto start ;
    }
    EnterCritical();
#   if 0
        toWrite =  charWrite ;
        
        // keep counter of number of write
        int counterWrite = 4 ;
        
        // try to write 3 times
        while ( counterWrite-- ) {
            
            // write to osin
            if ( !permute ) 
                length =  pvOsin->write(toWrite, length, check);
            else 
                length =  pvIsin->write(toWrite, length, check);
            if ( length < 0 ) {
                char    mess [50];
                sprintf(mess, "Error on message write %d\n", length);
                _write(2, mess, strlen(mess));
            } else 
                break ;
            SLEEP(1);
        }
#   endif
    if ( length >= 0 ) {
#       if defined(DEBUG_SOCK)
            output =  1 ;
            char    string [50];
            int     errno = 0 ;
            if ( permute ) 
                sprintf(string, "\n write %d %d %d ", pvIsin->Socket(), length, errno);
            else 
                sprintf(string, "\n write %d %d %d ", pvOsin->Socket(), length, errno);
            PrintString(string) <NL>
#       endif
#       if defined(DEBUG_SOCK_RAW)
            char    *mess = DecompAsn().DecodeOctetString(toWrite, length);
            PrintString(mess) <NL>
            free(mess);
#       endif
    }
    delete encoding ;
    LeaveCritical();
    
    // return number of char written
    return length ;
}

// InetReadOneLow : low level read on inet
// parameters :
//               permute : tell to read on write socket
// return : the asn1Value decoded with grammar
PTREE InetUtil::InetReadOneLow ( bool permute, void *pCritical )
{
    
    PTREE           readResult ;          // result of read
    char            string [50];          // for error message
    int             correctionOffset(0);  // offset when error
    unsigned int    expectedLength(0);    // expected length
    
    // get the message
    long            length ;              // the remaining length
    
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
        
        /* EString error ("correction : ");
           error += CompactItoa(length);
           error += " " ;
           error += CompactItoa(pvLength);
           _write(1,error.c_str(),error.length());*/
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
        bool    newMode (true) ;
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
                long    max = 50000 ;
                pvDecompAsn.DecodeLength(buffer + pvStart + 4, &max, (long int *)&lengthAdded);
            }
            length =  pvLength - 9 ;
            if ( pvLength >= 9 + lengthAdded ) 
                readResult =  Interpret(buffer + pvStart + 9, length, TransferGrammar());
            else 
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
                
                // wait a little so that remaining of packet comes
                // MSLEEP(100);
                goto error_solve ;
            }
        } else {
            pvStart =  pvLength = 0 ;
            return PTREE(0);
            
            // EL 16/07/98
            // old mode is obsolete
#           if 0
                length =  pvLength ;
                if ( pvLength >= CHUNK_SIZE / CHUNK_DIVIDE ) 
                    readResult =  Interpret(buffer + pvStart, length, TransferGrammar());
                else 
                    readResult =  ();
                
                // we found nothing may be the pdu has been split, try it
                if ( pvLength < CHUNK_SIZE / CHUNK_DIVIDE || readResult == () ) {
                    
                    // if too far move data
                    correctionOffset =  pvStart + pvLength ;
                    if ( correctionOffset > INET_BUFFER_SIZE / 2 && pvStart != 0 ) {
                        memmove(buffer, buffer + pvStart, pvLength);
                        pvStart          =  0 ;
                        correctionOffset =  pvLength ;
                    }
                    
                    // read more data
                    length =  pvLength ;
                    goto error_solve ;
                }
                lengthAdded =  pvLength - length ;
                if ( lengthAdded < CHUNK_SIZE / CHUNK_DIVIDE ) 
                    lengthAdded =  CHUNK_SIZE / CHUNK_DIVIDE ;
                lengthAdded -= 9 ;
#           endif
        }
    }
#   if defined(DEBUG_SOCK)
        output =  1 ;
        "<< =========================";
        DumpTree(readResult);
#   endif
#   if defined(DEBUG_SOCK)
        output =  1 ;
        
        int errno = 0 ;
        
        if ( permute ) {
            sprintf(string, "\n read %d %d %d", pvOsin->Socket(), pvLength, errno);
        } else {
            sprintf(string, "\n read %d %d %d", pvIsin->Socket(), pvLength, errno);
        }
        PrintString(string) <NL>
#   endif
#   if defined(DEBUG_SOCK_RAW)
        
        char    *mess = DecompAsn().DecodeOctetString(buffer + pvStart, pvLength);
        
        PrintString(mess) <NL>
        free(mess);
#   endif
    
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
int InetUtil::InetWrite ( PTREE message, bool permute, bool check )
{
    int length ; // length written
    
    // write message
    length =  InetWriteLow(message, permute, check);
    
    // return length written
    return length ;
}

PTREE   InetUtil::grammar = (PTREE)0 ; // the grammar for transfer

#ifdef FOR_METACHOP
    PTREE   grammar ; // the grammar
#endif

// TransferGrammar : get transfer grammar
// return : the grammar
PTREE InetUtil::TransferGrammar ()
{
    
    // if grammar allready there return it
    if ( grammar ) 
        return grammar ;
    
    // create grammar for data exchanging
    grammar =  parse (
                   CHOICE {
                       declaration-testeur [0] SEQUENCE {
                               name IA5String,
                               ip-address IA5String,
                               address INTEGER,
                ack BOOLEAN DEFAULT FALSE
                           },
                       declaration-pco [1] SEQUENCE {
                               name IA5String,
                               pco IA5String,
                output-only BOOLEAN DEFAULT false;
                           },
                       test-pco [2] SEQUENCE {
                               name IA5String,
                               pco IA5String,
                               state BOOLEAN OPTIONAL,
                               size-packet INTEGER OPTIONAL
                           },
                       envoie-evenement [3] SEQUENCE {
                               name IA5String,
                               pco IA5String,
                               sender IA5String OPTIONAL,
                               content OCTET STRING,
        		       time [0] INTEGER OPTIONAL,
                               utime [1] INTEGER OPTIONAL,
        		       ctime [2] INTEGER OPTIONAL,
                               cutime [3] INTEGER OPTIONAL
                           },
                       reception-evenement [4] SEQUENCE {
                               name IA5String
                           },
                       reception-evenement-bloque [5] SEQUENCE {
                               name IA5String
                           },
                       envoie-evenement-chunk [6] SEQUENCE {
                               name IA5String,
                               pco IA5String,
                               sender IA5String OPTIONAL,
                               content OCTET STRING
                           },
                       envoie-evenement-chunk-end [7] SEQUENCE {
                               name IA5String,
                               pco IA5String,
                               sender IA5String OPTIONAL,
                               content OCTET STRING,
        		       time [0] INTEGER OPTIONAL,
                               utime [1] INTEGER OPTIONAL
                           },
                       close-pco [8] SEQUENCE {
                               name IA5String,
                               pco IA5String OPTIONAL
                           },
                       number-connect [9] SEQUENCE {
                               name IA5String,
                               pco IA5String,
                               number INTEGER OPTIONAL
                           },
                       kill [10] IA5String,
                       kill-bus [11] IA5String,
              enumerate [12] SEQUENCE {
                  name IA5String OPTIONAL,
               enumeration SEQUENCE OF SEQUENCE {
                    bus IA5String,connected SEQUENCE OF IA5String } OPTIONAL
              },
                       acknowledgement [1000] NULL,
           named-acknowledgement [1002] IA5String ,
                       pas-evenement   [1001] NULL ,
        version [1003] IA5String
                 }
    );
    
    // return gramar
    return grammar ;
}

// GetAsn : get DecompAsn for a channel
// paramaters :
//              channel : the channel to look for
// return : the decompAsn
DecompAsn &InetUtil::GetAsn ( EString channel )
{
    
    // get asn for a channel in array
    DecompAsn   *pDecompAsn = pvTabDecompAsn [channel];
    
    // if decomp asn is not initialized return default one
    if ( pDecompAsn ) 
        return *pDecompAsn ;
    else {
        pvDecompAsn.FastEncode(true);
        return pvDecompAsn ;
    }
}

// GetRoot : get Root for a channel
// paramaters :
//              channel : the channel to look for
// return : the root tree for grammar
PTREE InetUtil::GetRoot ( EString channel )
{
    PTREE   rootName ; // root name in grammar
    
    rootName =  <IDENT,PTREE("Root")>;
    return GetAsn(channel).FindTyp(rootName);
}


