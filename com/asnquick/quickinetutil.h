#ifndef QINETUTIL_FILE
#   define QINETUTIL_FILE 1
#   include "erlsock.h"
#   include "ptree.h"
#   include "token.h"
#   include "asn.h"
    
    // #include "decasn.h"
#   include <stdio.h>
#   ifdef MOST_RECENT_STL
#       include <map>
#   else 
#       include <map.h>
#   endif
#   define INET_BUFFER_SIZE 50000
#   define LOOK_AHEAD 2
#   include "level2.h"
#   include "metainetutil.h"
    
    class QInetUtil : public Grammlevel2, public MetaInetUtil {
        
        public :
        
            // constructor 
            QInetUtil ()
                : Grammlevel2(),  MetaInetUtil()
            {
                pvBuffer.Resize(INET_BUFFER_SIZE);
                pvBuffer.length(INET_BUFFER_SIZE - 1);
            }
            
            // destructor
            ~QInetUtil ()
            {
                
                // free decompAsn array
#               if 0
                    
                    mapDecompAsn::iterator  iter ;
                    
                    for ( iter = pvTabGramm.begin() ; iter != pvTabGramm.end() ; iter++ ) 
                        if ( (*iter).second ) 
                            delete(*iter).second ;
#               endif
                if ( pvIsin ) {
                    delete pvIsin ;
                    pvIsin = 0 ;
                }
                if ( pvOsin ) {
                    delete pvOsin ;
                    pvOsin = 0 ;
                }
            }
            
            // constructor with a file, read the grammar
            // parameter :
            //             fileName : the file to be read
                            QInetUtil (EString fileName) ;
            
            // Interpret : interpret a string with a grammar
            // parameters :
            //              message : the string to be interpreted
            //              length : length of message
            //              grammar : grammar for decoding
            // return : the decoded tree
            PTREE           Interpret (EString message, GenGramm *grammar) ;
            
            // FullInterpret : interpret a string coded as hexa string with user grammar
            // parameters :
            //              message : the string to be interpreted
            //              channel : channel of interpretation (if some)
            // return : the decoded tree
            PTREE           FullInterpret (EString &message, EString channel = " ") ;
            
            // FullEncode : full encoding of a tree
            // parameters :
            //              tree : the tree to be encoded
            //              channel : channel of interpretation (if some)
            // return : the encoding
            EString         FullEncode (PTREE tree, EString channel = " ") ;
            
            // InetReadLow : low level read on inet
            //               permute : tell to read on write socket
            // return : the asn1Value decoded with grammar
            virtual PTREE   InetReadOneLow (bool permute = false, void *pCritical = 0) ;
            
            // InetWriteLow : low level write on inet
            // parameters :
            //              message : the message to be written
            //               permute : tell to write on read socket
            //              check : tell if we have to check if ok
            //              oldMode : tell to write with old mode
            // return : the length writen
            int             InetWriteLow (PTREE message, bool permute = false, bool check = false, bool oldMode = false) ;
            
            // InetWrite : write a packet on internet
            // parameters :
            //              message : message to be send
            //               permute : tell to write on read socket
            //              check : tell if we have to check if ok
            // return : the length writen
            int             InetWrite (PTREE message, bool permute = false, bool check = false) ;
            
            // GetNamed : get first named value in a tree
            // parameters :
            //              name : name to be searched
            //              tree : tree where to search
            // return : the named value found
            static  PTREE GetNamed ( const EString &name, PTREE tree )
            {
                return MetaInetUtil::GetNamed(name, tree);
            }
            
            // GetNamedContent : get content of first named value in a tree
            // parameters :
            //              name : name to be searched
            //              tree : tree where to search
            // return : the named value found
            static  PTREE GetNamedValue ( EString name, PTREE tree )
            {
                return MetaInetUtil::GetNamedValue(name, tree);
            }
            
            // Syntax : set syntax for user
            // parameters :
            //              fileSyntax : file where to read syntax
            // return : the whole object
            QInetUtil &Syntax ( EString fileSyntax )
            {
#               if 0
                    return Syntax(fileSyntax, pvDecompAsn);
#               endif
                return *this ;
            }
            
            // RemoveChannel : remove a channel
            // parameters :
            //              channel : channel to be removed
            // return : whole object
            QInetUtil &RemoveChannel ( EString &channel )
            {
                mapDecompAsn::iterator  iter ;
                
                iter = pvTabGramm.find(channel);
                if ( iter != pvTabGramm.end() ) 
                    pvTabGramm.erase(iter);
                return *this ;
            }
            
            // Syntax : set syntax for user for a particular channel
            // parameters :
            //              channel : channel where to put syntax
            //              genGramm : a grammar
            // return : the whole object
            QInetUtil &Syntax ( EString channel, GenGramm *genGramm )
            {
                pvTabGramm [channel] = genGramm ;
                return *this ;
            }
            
            // Decomp : get decompiler on a given channel
            // parameters :
            //              channel : the channel where to get the asn decompiler
            // return : the decompiler
#           if 0
                DecompAsn *Decomp ( const EString &channel )
                {
                    return pvTabGramm [channel];
                }
#           endif
            
            // FastEncode : tell if fast encode
            //              channel : channel to look for
            bool FastEncode ( const EString &channel )
            {
#               if 0
                    
                    DecompAsn   *pDecompAsn ; // decomp on channel
                    
                    if ( pDecompAsn = Decomp(channel) ) {
                        return pDecompAsn->FastEncode();
                    }
                    return false ;
#               endif
                return true ;
            }
            
            // FastEncode : set fast encode
            // parameters :
            //              channel : channel to look for
            //              fastSpeed : tell if fast encode
            void FastEncode ( const EString &channel, bool fastSpeed ) {}
            
            // OutputSock : output socket
            // return : the output socket
            SOCKET OutputSock ()
            {
                if ( pvOsin ) 
                    return pvOsin->OutputSock();
                else 
                    return (SOCKET) -1 ;
            }
            
            // InetSharedRead : read a value in shared memory
            // parameters :
            //				pRead : string pointer
            // return : the read tree
            virtual PTREE InetSharedRead ( char *pRead )
            {
                if ( !strncmp(pRead, "v100", 4) ) {
                    EString     lengthString(pRead, 9);
                    int         lengthAdded ;
                    CoordString coord(4, 5);
                    lengthAdded = DecodeLength(lengthString, coord);
                    EString     contentString(pRead, 9 + lengthAdded);
                    CoordString coordString(9, lengthAdded);
                    return Root(contentString, coordString, true);
                }
                return PTREE(0);
            }
        
        private :
        
            typedef map<EString, GenGramm *, LessString>    mapDecompAsn ;
            
            // static PTREE    grammar ;        // the tranfer grammar
            // DecompAsn       pvDecompAsn ;    // unparsing of asn prog
            mapDecompAsn    pvTabGramm ; // decomp asn by channel
            EString         pvBuffer ;   // buffer for misc 
        // purpose
    };
#endif
