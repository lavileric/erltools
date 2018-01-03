#ifndef INETUTIL_FILE
#   define INETUTIL_FILE 1
#   include "erlsock.h"
#   include "ptree.h"
#   include "token.h"
#   include "asn.h"
#   include "decasn.h"
#   include "metainetutil.h"
#   include <stdio.h>
#   ifdef MOST_RECENT_STL
#       include <map>
#       include <list>
#   else 
#       include <map.h>
#       include <list.h>
#   endif
#   define INET_BUFFER_SIZE 50000
#   define LOOK_AHEAD 2
    
    class InetUtil : public MetaInetUtil {
        
        public :
        
            // constructor 
            InetUtil () {}
            
            // destructor
            ~InetUtil ()
            {
                
                // free decompAsn array
                mapDecompAsn::iterator  iter ;
                
                for ( iter = pvTabDecompAsn.begin() ; iter != pvTabDecompAsn.end() ; iter++ ) 
                    if ( (*iter).second ) 
                        delete(*iter).second ;
            }
            
            // constructor with a file, read the grammar
            // parameter :
            //             fileName : the file to be read
                            InetUtil (EString fileName) ;
            
            // Interpret : interpret a string with a grammar
            // parameters :
            //              message : the string to be interpreted
            //              length : length of message
            //              grammar : grammar for decoding
            // return : the decoded tree
            PTREE           Interpret (char *message, long &length, PTREE grammar, EString channel = " ") ;
            
            // FullInterpret : interpret a string coded as hexa string with user grammar
            // parameters :
            //              message : the string to be interpreted
            //              channel : channel of interpretation (if some)
            // return : the decoded tree
            PTREE           FullInterpret (char *message, EString channel = " ") ;
            
            // FullEncode : full encoding of a tree
            // parameters :
            //              tree : the tree to be encoded
            //              channel : channel of interpretation (if some)
            // return : the encoding
            Coding          *FullEncode (PTREE tree, EString channel = " ") ;
            
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
            
            // TransferGrammar : get transfer grammar
            // return : the grammar
            static PTREE    TransferGrammar () ;
            
            // Syntax : set syntax for user
            // parameters :
            //              fileSyntax : file where to read syntax
            // return : the whole object
            InetUtil &Syntax ( EString fileSyntax )
            {
                return Syntax(fileSyntax, pvDecompAsn);
            }
            
            // CloseChannel : remove a channel
            // parameters :
            //              channel : channel to be removed
            // return : the whole object
            InetUtil &CloseChannel ( EString &channel )
            {
                DecompAsn               *pDecompAsn ;
                mapDecompAsn::iterator  iter = pvTabDecompAsn.find(channel);
                
                if ( iter != pvTabDecompAsn.end() ) {
                    pDecompAsn = (*iter).second ;
                    pvTabDecompAsn.erase(iter);
                    delete pDecompAsn ;
                }
                return *this ;
            }
            
            // Syntax : set syntax for user for a particular channel
            // parameters :
            //              channel : channel where to put syntax
            //              fileSyntax : file where to read syntax
            // return : the whole object
            InetUtil &Syntax ( EString channel, EString fileSyntax )
            {
                DecompAsn   *pDecompAsn = pvTabDecompAsn [channel];
                
                if ( !pDecompAsn ) {
                    pvTabDecompAsn [channel] = pDecompAsn = new DecompAsn ;
                }
                return Syntax(fileSyntax, *pDecompAsn);
            }
            
            // Decomp : get decompiler on a given channel
            // parameters :
            //              channel : the channel where to get the asn decompiler
            // return : the decompiler
            DecompAsn *Decomp ( const EString &channel )
            {
                return pvTabDecompAsn [channel];
            }
            
            // FastEncode : tell if fast encode
            //              channel : channel to look for
            bool FastEncode ( const EString &channel )
            {
                DecompAsn   *pDecompAsn ; // decomp on channel
                
                if ( pDecompAsn = Decomp(channel) ) {
                    return pDecompAsn->FastEncode();
                }
                return false ;
            }
            
            // FastEncode : set fast encode
            // parameters :
            //              channel : channel to look for
            //              fastSpeed : tell if fast encode
            void FastEncode ( const EString &channel, bool fastSpeed )
            {
                DecompAsn   *pDecompAsn ; // decomp on channel
                
                if ( pDecompAsn = Decomp(channel) ) {
                    pDecompAsn->FastEncode(fastSpeed);
                }
            }
        
        private :
        
            typedef map<EString, DecompAsn *, LessString>   mapDecompAsn ;
            
            static PTREE    grammar ;                   // the tranfer grammar
            DecompAsn       pvDecompAsn ;               // unparsing of asn prog
            mapDecompAsn    pvTabDecompAsn ;            // decomp asn by channel
            
            // in the buffer
            char            buffer [INET_BUFFER_SIZE];  // buffer for misc 
                                                        // purpose
            
            // Syntax : set syntax for user for a DecompAsn
            // parameters :
            //              fileSyntax : file where to read syntax
            //              decompAsn : decomp asn to store syntax
            // return : the whole object
            InetUtil        &Syntax (EString fileSyntax, DecompAsn &decompAsn) ;
            
            // GetAsn : get DecompAsn for a channel
            // paramaters :
            //              channel : the channel to look for
            // return : the decompAsn
            DecompAsn       &GetAsn (EString channel) ;
            
            // GetRoot : get Root for a channel
            // paramaters :
            //              channel : the channel to look for
            // return : the root tree for grammar
            PTREE           GetRoot (EString channel) ;
    };
#endif
