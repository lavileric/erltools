#pragma once
 
/*************************************************************************/
 
/*                                                                       */
 
/*        Produced by Metachop version 2.0  -    1989-1995               */
 
/*     Tree      Meta     Chopper      developped    by                  */
 
/*                  Eric Lavillonniere                                   */
 
/*                                                                       */
 
/*************************************************************************/
 
 
#include "token.h"
 
extern int _retVal[50];
 
extern PPTREE _storeVal[50],_nextVal;
 
extern PPTREE stackTree[1024];
 
extern int ptStackTree;
 
#define decomp decomp_asn
 
 
#ifndef for_elem
 
 
#define for_elem _for_elem
 
#endif
#ifdef INCONNU
 
 
PTREE   for_elem ;
 
 
#endif
#include "token.h"
#include <list.h>
#include <stack.h>
#include "supervisor.h"
#include "../asn/decasn.h"
#include "../asnext/asnext.h"
#include "inetutil.h"
#include "connect.h"
#include <list>

#if defined(INCLUDE_SIGNAL)
 
 
#include "signal.h"
 
#endif

class KeepChunk {
    
    public :
    
        typedef list<PTREE>    StackChunk ;
        
        StackChunk  tab ;
        StackChunk::iterator   iter ;
};

class KeepStarted {
    
    public :
    
        typedef map<EString, int, LessString>    TabStarted ;
        
        TabStarted  tab ;
};
static DecompAsn    decompAsn ;
DecompAsn   *DecompAsn::ptDecomp = 0 ;
static Supervisor   supervisor ;
static asn  *pars_asn ;
int prettyPrint = 0 ;
KeepChunk   chunks ;
KeepStarted tabStarted ;
static char *sizePacket = "0";

 
 
void DeclarationTesteur ( PTREE input, isockinet &isin )
 
{
 
 
    PTREE   name ;
 
 
 
    PTREE   address ;
 
 
 
    (name=InetUtil::GetNamedValue("name", input));
 
 
 
    (address=InetUtil::GetNamedValue("address", input));
 
 
 
    PTREE   ipAddress = (PTREE)0 ;
 
 
 
    osockinet   *osin = new osockinet(sockbuf::sock_stream);
 
 
    sockerr inetError("no info", 0);
 
 
    (ipAddress=InetUtil::GetNamedValue("ip-address", input));
 
 
 
    if ( Value(ipAddress) ) 
 
 
        inetError = (*osin) -> connect(atoi(Value(address)), inet_addr(Value(ipAddress)), 0);
 
    else 
 
 
        inetError = (*osin) -> connect(atoi(Value(address)), 0, 0);
 
 
 
    if ( inetError.errnoval() ) {
 
 
                                    EString errMess("Invalid socket to call back\n");
 
 
                                    write(2, errMess.c_str(), errMess.Size());
 
 
                                    return ;
 
 
                                  }
 
 
    isin.AddInputSock((*osin) -> OutputSock());
 
 
    supervisor.InsertEntry(Value(name), osin);
 
 
#if 0
 
 
    if ( EString("script_ihm") == Value(name) || EString("ScrTimCom") == Value(name) ) {
 
 
supervisor.Entry()[Value(name)] -> OldProtocol(true);
 
 
                                                                                               }
 
#endif
 
 
}
 

 
 
void DeclarationPCO ( PTREE input )
 
{
 
 
    PTREE   name = (PTREE)0 ;
 
 
 
    PTREE   pco = (PTREE)0 ;
 
 
 
    (name=InetUtil::GetNamedValue("name", input));
 
 
 
    (pco=InetUtil::GetNamedValue("pco", input));
 
 
 
    supervisor.InsertPco(Value(name), Value(pco));
 
 
    tabStarted.tab [Value(pco)] = tabStarted.tab [Value(pco)] + 1 ;
 
 
}
 

 
 
void ClosePCO ( PTREE input, isockinet &isin )
 
{
 
 
    PTREE   name = (PTREE)0 ;
 
 
 
    PTREE   pco = (PTREE)0 ;
 
 
 
    (name=InetUtil::GetNamedValue("name", input));
 
 
 
    (pco=InetUtil::GetNamedValue("pco", input));
 
 
 
    if ( supervisor.Entry()[Value(name)] ) {
 
 
                                                osockinet   *osin ;
 
 
                                                osin = (osockinet *)supervisor.Entry()[Value(name)] -> Socket();
 
 
                                                isin.RemoveInputSock((*osin) -> OutputSock());
 
 
                                               }
 
 
    supervisor.ClosePco(Value(name));
 
 
}
 

 
 
void TestPCO ( PTREE input )
 
{
 
 
    PTREE   name = (PTREE)0 ;
 
 
 
    PTREE   pco = (PTREE)0 ;
 
 
 
    SupervisorEntry *entry ;
 
 
    bool    supervised ;
 
 
    PTREE   message ;
 
 
 
    (name=InetUtil::GetNamedValue("name", input));
 
 
 
    (pco=InetUtil::GetNamedValue("pco", input));
 
 
 
    supervised = false ;
 
 
    if ( entry = supervisor.Entry()[Value(name)] ) {
 
 
                                                            supervised = entry -> Supervised(Value(pco));
 
 
                                                            if ( supervised ) {
 
 
{
 
    /* [ asn::NAMED_VALUE
        [ asn::IDENT [asn::ASN_SYMBOL <> "test-pco"]]
        [ asn::SEQUENCE_VALUE
            [ LIST 
                [ asn::NAMED_VALUE
                    [ asn::IDENT [asn::ASN_SYMBOL <> "name"]]
                    [ META "meta0"]
                ]
                [ asn::NAMED_VALUE
                    [ asn::IDENT [asn::ASN_SYMBOL <> "pco"]]
                    [ META "meta1"]
                ]
                [ asn::NAMED_VALUE
                    [ asn::IDENT [asn::ASN_SYMBOL <> "state"]]
                    [ asn::TRUE ]
                ]
                [ asn::NAMED_VALUE
                    [ asn::IDENT [asn::ASN_SYMBOL <> "size-packet"]]
                    [ META "meta2"]
                ]
            ]
        ]
       ]
 
    */
 
    TheConstructor(-2,ALLOCATE_CLASS(AsnSymbol("test-pco")),asn::IDENT,1,-2,ALLOCATE_CLASS(AsnSymbol("name")),asn::IDENT,1,
        -2,MakeString("meta0"),META,1,asn::NAMED_VALUE,2,-2,ALLOCATE_CLASS(AsnSymbol("pco")),asn::IDENT,1,-2,MakeString("meta1"),META,1,asn::NAMED_VALUE,2,
        -2,ALLOCATE_CLASS(AsnSymbol("state")),asn::IDENT,1,asn::TRUE,0,asn::NAMED_VALUE,2,-2,ALLOCATE_CLASS(AsnSymbol("size-packet")),asn::IDENT,1,-2,MakeString("meta2"),META,1,asn::NAMED_VALUE,2,-4,LIST,2,LIST,2,LIST,2,LIST,2,asn::SEQUENCE_VALUE,1,asn::NAMED_VALUE,2,-3) ;
    message = PopTree ;
 
    {
 
 
        PTREE   _Baum2 ;
 
 
 
        PTREE   _Baum1 ;
 
 
 
        PTREE   _Baum0 ;
 
 
 
        {
 
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
 
            _ptRes0 = MakeTree(asn::STRING, 1);
 
            _ptTree0 = StoreRef(PTREE(Value(name)));
 
            ReplaceTree(_ptRes0, 1, _ptTree0);
 
            _Baum0 = _ptRes0;
 
        }
 
 
 
        MetaRep("meta0", message, _Baum0);
 
 
        {
 
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
 
            _ptRes0 = MakeTree(asn::STRING, 1);
 
            _ptTree0 = StoreRef(PTREE(Value(pco)));
 
            ReplaceTree(_ptRes0, 1, _ptTree0);
 
            _Baum1 = _ptRes0;
 
        }
 
 
 
        MetaRep("meta1", message, _Baum1);
 
 
        {
 
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
 
            _ptRes0 = MakeTree(asn::NUMB, 1);
 
            _ptTree0 = StoreRef(PTREE(sizePacket));
 
            ReplaceTree(_ptRes0, 1, _ptTree0);
 
            _Baum2 = _ptRes0;
 
        }
 
 
 
        MetaRep("meta2", message, _Baum2);
 
 
    }
 
}
 
 
 
                                                                               } else 
 
                                                            {
 
 
                                                                {
 
                                                                    /* [ asn::NAMED_VALUE
                                                                        [ asn::IDENT [asn::ASN_SYMBOL <> "test-pco"]]
                                                                        [ asn::SEQUENCE_VALUE
[ LIST 
    [ asn::NAMED_VALUE
        [ asn::IDENT [asn::ASN_SYMBOL <> "name"]]
        [ META "meta0"]
    ]
    [ asn::NAMED_VALUE
        [ asn::IDENT [asn::ASN_SYMBOL <> "pco"]]
        [ META "meta1"]
    ]
    [ asn::NAMED_VALUE
        [ asn::IDENT [asn::ASN_SYMBOL <> "state"]]
        [ asn::FALSE ]
    ]
]
                                                                        ]
                                                                       ]
 
                                                                    */
 
                                                                    TheConstructor(-2,ALLOCATE_CLASS(AsnSymbol("test-pco")),asn::IDENT,1,-2,ALLOCATE_CLASS(AsnSymbol("name")),asn::IDENT,1,
                                                                        -2,MakeString("meta0"),META,1,asn::NAMED_VALUE,2,-2,ALLOCATE_CLASS(AsnSymbol("pco")),asn::IDENT,1,-2,MakeString("meta1"),META,1,asn::NAMED_VALUE,2,
                                                                        -2,ALLOCATE_CLASS(AsnSymbol("state")),asn::IDENT,1,asn::FALSE,0,asn::NAMED_VALUE,2,-4,LIST,2,LIST,2,LIST,2,asn::SEQUENCE_VALUE,1,asn::NAMED_VALUE,2,-3) ;
                                                                    message = PopTree ;
 
                                                                    {
 
 
                                                                        PTREE   _Baum1 ;
 
 
 
                                                                        PTREE   _Baum0 ;
 
 
 
                                                                        {
 
PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
 
_ptRes0 = MakeTree(asn::STRING, 1);
 
_ptTree0 = StoreRef(MakeString(Value(name)));
 
ReplaceTree(_ptRes0, 1, _ptTree0);
 
_Baum0 = _ptRes0;
 
                                                                        }
 
 
 
                                                                        MetaRep("meta0", message, _Baum0);
 
 
                                                                        {
 
PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
 
_ptRes0 = MakeTree(asn::STRING, 1);
 
_ptTree0 = StoreRef(MakeString(Value(pco)));
 
ReplaceTree(_ptRes0, 1, _ptTree0);
 
_Baum1 = _ptRes0;
 
                                                                        }
 
 
 
                                                                        MetaRep("meta1", message, _Baum1);
 
 
                                                                    }
 
                                                                }
 
 
 
                                                            }
 
 
                                                            {
 
 
                                                                InetUtil    inetUtil ;
 
 
                                                                inetUtil.Osockinet(*entry -> Socket()).InetWriteLow(message, false, false, entry -> OldProtocol());
 
 
                                                                inetUtil.ForgetOutput();
 
 
                                                            }
 
 
                                                        }
 
 
}
 

 
 
void ComputeNumber ( PTREE input )
 
{
 
 
    PTREE   name ;
 
 
 
    PTREE   pco ;
 
 
 
    TabSort<SupervisorEntry>   *entryTab ;
 
 
    SupervisorEntry *entry ;
 
 
    PTREE   message ;
 
 
 
    int indSupervisor ;
 
 
    int nbSupervised = 0 ;
 
 
    (name=InetUtil::GetNamedValue("name", input));
 
 
 
    (pco=InetUtil::GetNamedValue("pco", input));
 
 
 
    entryTab = &supervisor.Entry();
 
 
    {
 
        /* [ asn::NAMED_VALUE
            [ asn::IDENT [asn::ASN_SYMBOL <> "number-connect"]]
            [ asn::SEQUENCE_VALUE
                [ LIST 
                    [ asn::NAMED_VALUE
                        [ asn::IDENT [asn::ASN_SYMBOL <> "name"]]
                        [ META "name"]
                    ]
                    [ asn::NAMED_VALUE
                        [ asn::IDENT [asn::ASN_SYMBOL <> "pco"]]
                        [ META "pco"]
                    ]
                    [ asn::NAMED_VALUE
                        [ asn::IDENT [asn::ASN_SYMBOL <> "number"]]
                        [ META "meta0"]
                    ]
                ]
            ]
           ]
 
        */
 
        TheConstructor(-2,ALLOCATE_CLASS(AsnSymbol("number-connect")),asn::IDENT,1,-2,ALLOCATE_CLASS(AsnSymbol("name")),asn::IDENT,1,
            -2,MakeString("name"),META,1,asn::NAMED_VALUE,2,-2,ALLOCATE_CLASS(AsnSymbol("pco")),asn::IDENT,1,-2,MakeString("pco"),META,1,asn::NAMED_VALUE,2,
            -2,ALLOCATE_CLASS(AsnSymbol("number")),asn::IDENT,1,-2,MakeString("meta0"),META,1,asn::NAMED_VALUE,2,-4,LIST,2,LIST,2,LIST,2,asn::SEQUENCE_VALUE,1,asn::NAMED_VALUE,2,-3) ;
        message = PopTree ;
 
        {
 
 
            PTREE   _Baum0 ;
 
 
 
            MetaRep("name", message, name);
 
 
            MetaRep("pco", message, pco);
 
 
            {
 
                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
 
                _ptRes0 = MakeTree(asn::NUMB, 1);
 
                _ptTree0 = StoreRef(PTREE(CompactItoa(tabStarted.tab [Value(pco)])));
 
                ReplaceTree(_ptRes0, 1, _ptTree0);
 
                _Baum0 = _ptRes0;
 
            }
 
 
 
            MetaRep("meta0", message, _Baum0);
 
 
        }
 
    }
 
 
 
    if ( entry = (*entryTab)[Value(name)] ) {
 
 
                                                    InetUtil    inetUtil ;
 
 
                                                    inetUtil.Osockinet(*entry -> Socket()).InetWriteLow(message, false, false, entry -> OldProtocol());
 
 
                                                    inetUtil.ForgetOutput();
 
 
                                                  }
 
 
}
 

 
 
void EventSend ( PTREE input )
 
{
 
 
    PTREE   name = (PTREE)0 ;
 
 
 
    PTREE   pco = (PTREE)0 ;
 
 
 
    PTREE   content = (PTREE)0 ;
 
 
 
    (name=InetUtil::GetNamedValue("name", input));
 
 
 
    (pco=InetUtil::GetNamedValue("pco", input));
 
 
 
    (content=InetUtil::GetNamedValue("content", input));
 
 
 
    supervisor.PutEvent(Value(name), Value(pco), content);
 
 
}
 

 
 
void SendChunks ( PTREE input )
 
{
 
 
    EString name ;
 
 
    EString pco ;
 
 
    EString wholeContent ;
 
 
    name = Value(InetUtil::GetNamedValue("name", input));
 
 
    pco = Value(InetUtil::GetNamedValue("pco", input));
 
 
 
    for ( chunks.iter = chunks.tab.begin() ; chunks.iter != chunks.tab.end() ; ) {
 
 
PTREE   chunkElem ;
 
 
 
(chunkElem=*chunks.iter);
 
 
 
char    *val1 = (char *)name.c_str();
 
 
char    *val2 = (char *)pco.c_str();
 
 
char    *val11 = Value(InetUtil::GetNamedValue("name", chunkElem));
 
 
char    *val21 = Value(InetUtil::GetNamedValue("pco", chunkElem));
 
 
if ( !strcmp(val1, val11) && !strcmp(val2, val21) ) {
 
 
                                                                wholeContent += Value(InetUtil::GetNamedValue("content", chunkElem));
 
 
                                                                list<PTREE> ::iterator    destroyed ;
 
 
                                                                destroyed = chunks.iter++ ;
 
 
                                                                chunks.tab.erase(destroyed);
 
 
                                                            } else 
 
 
    chunks.iter++ ;
 
 
 
                                                                                           }
 
 
 
    wholeContent += Value(InetUtil::GetNamedValue("content", input));
 
 
    PTREE   wholeTree = (PTREE)0 ;
 
 
 
    (wholeTree=PTREE(wholeContent));
 
 
 
    supervisor.PutEvent(name, pco, wholeTree);
 
 
}
 

 
 
void GetEvent ( PTREE input, bool blocked )
 
{
 
 
    PTREE   name ;
 
 
 
    (name=InetUtil::GetNamed("name", input));
 
 
 
    supervisor.GetEvent(Value(name [2]), blocked);
 
 
}
 

 
 
void KillProc ( InetUtil &inetutil, char *process )
 
{
 
 
    osockinet   *osin ;
 
 
    PTREE   killMessage ;
 
 
 
    {
 
        /* [ asn::NAMED_VALUE
            [ asn::IDENT [asn::ASN_SYMBOL <> "kill"]]
            [ asn::STRING ""]
           ]
 
        */
 
        TheConstructor(-2,ALLOCATE_CLASS(AsnSymbol("kill")),asn::IDENT,1,-2,MakeString(""),asn::STRING,1,asn::NAMED_VALUE,2,-3) ;
        killMessage = PopTree ;
 
        }
 
 
 
    if ( !strcmp(process, "dispatcher") ) {
 
 
                                                int nbProcess ;
 
 
                                                nbProcess = supervisor.Entry().Size();
 
 
                                                while ( nbProcess-- ) {
 
 
                                                                        InetUtil    inetUtil ;
 
 
                                                                        osin = (osockinet *)supervisor.Entry()[nbProcess] -> Socket();
 
 
                                                                        inetUtil.Osockinet(*osin).InetWriteLow(killMessage, false, false, supervisor.Entry()[nbProcess] -> OldProtocol());
 
 
                                                                        inetUtil.ForgetOutput();
 
 
                                                                       }
 
 
SLEEP(3);
 
 
                                                closesocket(inetutil.InputSock()[0]);
 
 
                                                MetaExit(0, "Received Kill Order\n");
 
 
                                              } else 
 
    {
 
 
        if ( supervisor.Entry()[process] ) {
 
 
                                                InetUtil    inetUtil ;
 
 
                                                osin = (osockinet *)supervisor.Entry()[process] -> Socket();
 
 
                                                inetUtil.Osockinet(*osin).InetWriteLow(killMessage, false, false, supervisor.Entry()[process] -> OldProtocol());
 
 
                                                inetUtil.ForgetOutput();
 
 
                                              }
 
 
    }
 
 
}
 

 
 
void KillProcBus ( char *bus )
 
{
 
 
    osockinet   *osin ;
 
 
    {
 
 
        PTREE   killMessage ;
 
 
 
        {
 
            /* [ asn::NAMED_VALUE
                [ asn::IDENT [asn::ASN_SYMBOL <> "kill"]]
                [ asn::STRING ""]
               ]
 
            */
 
            TheConstructor(-2,ALLOCATE_CLASS(AsnSymbol("kill")),asn::IDENT,1,-2,MakeString(""),asn::STRING,1,asn::NAMED_VALUE,2,-3) ;
            killMessage = PopTree ;
 
            }
 
 
 
        int indexEntry ;
 
 
        indexEntry = supervisor.Entry().Size();
 
 
        while ( indexEntry-- >= 0 ) {
 
 
                                        SupervisorEntry *pEntry = supervisor.Entry()[indexEntry];
 
 
                                        if ( pEntry && pEntry -> Supervised(bus) ) {
 
 
InetUtil    inetUtil ;
 
 
osin = (osockinet *)(pEntry -> Socket());
 
 
inetUtil.Osockinet(*osin).InetWriteLow(killMessage, false, false, pEntry -> OldProtocol());
 
 
inetUtil.ForgetOutput();
 
 
                                                                                       }
 
 
                                      }
 
 
    }
 
 
}
 

 
 
main ( int argc, char **argv )
 
{
 
    register PPTREE _inter ;
 
 
 
    PTREE   grammar ;
 
 
 
    char    *messageContent ;
 
 
    PTREE   octetTLV ;
 
 
 
    PTREE   result ;
 
 
 
    PTREE   asn1Value ;
 
 
 
    PTREE   modifiedTlv ;
 
 
 
    PTREE   type ;
 
 
 
    PTREE   selector ;
 
 
 
    PTREE   input ;
 
 
 
    osockinet   *osin ;
 
 
    PTREE   message ;
 
 
 
    int lengthEncoded ;
 
 
    bool    hasAcknowledged ;
 
 
    if ( argc >= 2 ) {
 
 
                        sizePacket = *(argv + 1);
 
 
                       }
 
 
    DecompAsn::ptDecomp = &decompAsn ;
 
 
    MetaInit();
 
 
    asn().AsLanguage();
 
 
#if defined(INCLUDE_SIGNAL)
 
 
    signal(SIGPIPE, SIG_IGN);
 
#endif
 
 
#if 1
 
 
    {
 
 
        Connection  *pConnect = new Connection ;
 
 
        pConnect -> Open("dispatcher-killer", "127.0.0.1", (char *)0, dispatcherPort, 2);
 
 
        if ( pConnect -> Connected() ) {
 
 
                                            pConnect -> OpenChannel("blaster");
 
 
                                            PTREE   killMessage ;
 
 
 
                                            {
 
                                                /* [ asn::NAMED_VALUE
                                                    [ asn::IDENT [asn::ASN_SYMBOL <> "kill"]]
                                                    [ asn::STRING "dispatcher"]
                                                   ]
 
                                                */
 
                                                TheConstructor(-2,ALLOCATE_CLASS(AsnSymbol("kill")),asn::IDENT,1,-2,MakeString("dispatcher"),asn::STRING,1,asn::NAMED_VALUE,2,-3) ;
                                                killMessage = PopTree ;
 
                                                }
 
 
 
                                            pConnect -> SendRaw(killMessage);
 
 
SLEEP(3);

 
 
                                         }
 
 
        delete pConnect ;
 
 
SLEEP(3);
 
 
    }
 
#endif
 
 
    isockinet   isin (sockbuf::sock_stream) ;
 
 
    bool    firstTry = true ;
 
 
    while ( 1 ) {
 
 
                    const sockerr   &inetError = isin -> bind(dispatcherPort);
 
 
                    if ( inetError.errnoval() ) {
 
 
                                                    char    message [50];
 
 
                                                    if ( firstTry ) {
 
 
                                                                        sprintf(message, "Problem on %d trying again .", dispatcherPort);
 
 
                                                                        firstTry = false ;
 
 
                                                                     } else 
 
                                                    {
 
 
                                                        strcpy(message, ".");
 
 
                                                    }
 
 
                                                    write(2, message, strlen(message));
 
 
SLEEP(3);
 
 
                                                    continue ;
 
 
                                                  }
 
 
                    break ;
 
 
                 }
 
 
    cout << "localhost = " << isin -> localhost() << endl << "localport = " << isin -> localport() << endl ;
 
 
    InetUtil    inetUtil ;
 
 
    inetUtil.Isockinet(isin);
 
 
    inetUtil.SizeMin(atoi(sizePacket));
 
 
    (grammar=InetUtil::TransferGrammar());
 
 
 
#if 0
 
 
    long    histid1, histid2 ;
 
 
    long    orig_size, last_size ;
 
 
    orig_size = malloc_inuse(&histid1);
 
#endif
 
 
    int counter = 64 ;
 
 
    while ( 1 ) {
 
 
                    {
 
 
                        if ( !--counter ) {
 
 
                                                counter = 64 ;
 
 
                                             }
 
 
                        unsigned int   nbSock = inetUtil.NbSock();
 
 
                        (asn1Value=inetUtil.InetReadLow());
 
 
 
                        if ( inetUtil.NbSock() != nbSock ) {
 
 
                                                                vector<SOCKET>     inputSock ;
 
 
                                                                inputSock = inetUtil.InputSock();
 
 
                                                                supervisor.Check(inputSock);
 
 
                                                              }
 
 
                        if ( (!asn1Value) ) 
 
 
                            continue ;
 
 
                        hasAcknowledged = false ;
 
 
                        selector = (PPTREE) 0 ;
 
 
 
                        input = (PPTREE) 0 ;
 
 
 
                        ((_inter = (PPTREE)asn1Value,1) && 
 
                            (NumberTree(_inter) == asn::NAMED_VALUE) &&
 
                            ((selector=SonTree(_inter,1)),1) &&
 
                            ((input=SonTree(_inter,2)),1) &&
 
                            1);
 
                        ;
 
 
#if 0
 
 
                        DumpTree(asn1Value);
 
#endif
 
 
                        if ( !((!asn1Value)) ) {
 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"reception-evenement-bloque")) &&
 
                                                            1) ) {
 
 
                                                    _If0 : 
 
 
                                                        ;
 
 
                                                        GetEvent(input, true);
 
 
#if 0
 
 
                                                        {
 
 
                                                            asn1Value = (PPTREE) 0 ;
 
 
 
                                                            selector = (PPTREE) 0 ;
 
 
 
                                                            input = (PPTREE) 0 ;
 
 
 
                                                            message = (PPTREE) 0 ;
 
 
 
                                                            ClearStoreRef();
 
 
                                                            last_size = malloc_inuse(&histid2);
 
 
                                                            if ( last_size > orig_size ) 
 
 
                                                                malloc_list(2, histid1, histid2);
 
                                                            else 
 
 
                                                                printf("nothing \n");
 
 
 
                                                            orig_size = last_size ;
 
 
                                                            histid1 = histid2 ;
 
 
                                                        }
 
#endif
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"reception-evenement")) &&
 
                                                            1) ) {
 
 
                                                    _If1 : 
 
 
                                                        ;
 
 
                                                        GetEvent(input, false);
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"envoie-evenement-chunk-end")) &&
 
                                                            1) ) {
 
 
                                                    _If2 : 
 
 
                                                        ;
 
 
                                                        SendChunks(input);
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"envoie-evenement-chunk")) &&
 
                                                            1) ) {
 
 
                                                    _If3 : 
 
 
                                                        ;
 
 
                                                        {
 
 
                                                            PTREE   acknowledgment ;
 
 
 
                                                            PTREE   name ;
 
 
 
                                                            chunks.tab.push_back(input);
 
 
                                                            {
 
                                                                /* [ asn::NAMED_VALUE
                                                                    [ asn::IDENT [asn::ASN_SYMBOL <> "acknowledgement"]]
                                                                    [ asn::NULL_VALUE ]
                                                                   ]
 
                                                                */
 
                                                                TheConstructor(-2,ALLOCATE_CLASS(AsnSymbol("acknowledgement")),asn::IDENT,1,asn::NULL_VALUE,0,asn::NAMED_VALUE,2,-3) ;
                                                                acknowledgment = PopTree ;
 
                                                                }
 
 
 
                                                            (name=InetUtil::GetNamedValue("name", input));
 
 
 
                                                            if ( supervisor.Entry()[Value(name)] ) {
 
 
InetUtil    inetUtil ;
 
 
osin = (osockinet *)supervisor.Entry()[Value(name)] -> Socket();
 
 
inetUtil.Osockinet(*osin).InetWriteLow(acknowledgment, false, false, supervisor.Entry()[Value(name)] -> OldProtocol());
 
 
inetUtil.ForgetOutput();
 
 
                                                                                                       }
 
 
                                                        }
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"envoie-evenement")) &&
 
                                                            1) ) {
 
 
                                                    _If4 : 
 
 
                                                        ;
 
 
                                                        EventSend(input);
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"number-connect")) &&
 
                                                            1) ) {
 
 
                                                    _If5 : 
 
 
                                                        ;
 
 
                                                        ComputeNumber(input);
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"declaration-testeur")) &&
 
                                                            1) ) {
 
 
                                                    _If6 : 
 
 
                                                        ;
 
 
                                                        DeclarationTesteur(input, isin);
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"declaration-pco")) &&
 
                                                            1) ) {
 
 
                                                    _If7 : 
 
 
                                                        ;
 
 
                                                        DeclarationPCO(input);
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"close-pco")) &&
 
                                                            1) ) {
 
 
                                                    _If8 : 
 
 
                                                        ;
 
 
                                                        ClosePCO(input, isin);
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"test-pco")) &&
 
                                                            1) ) {
 
 
                                                    _If9 : 
 
 
                                                        ;
 
 
                                                        TestPCO(input);
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"acknowledgement")) &&
 
                                                            1) ) {
 
 
                                                    _If10 : 
 
 
                                                        ;
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"kill")) &&
 
                                                            1) ) {
 
 
                                                    _If11 : 
 
 
                                                        ;
 
 
                                                        KillProc(inetUtil, Value(input));
 
 
                                                    } else 
 
                                                    if ( ((_inter = (PPTREE)selector,1) && 
 
                                                            (NumberTree(_inter) == asn::IDENT) &&
 
                                                            (!strcmp(Value(SonTree(_inter,1)),"kill-bus")) &&
 
                                                            1) ) {
 
 
                                                    _If12 : 
 
 
                                                        ;
 
 
                                                        KillProcBus(Value(input));
 
 
                                                    } else 
 
                                                    if ( 1 ) {
 
 
                                                    _If13 : 
 
 
                                                        ;
 
 
                                                        {
 
 
                                                            char    string [512];
 
 
                                                            sprintf(string, "Unknown event %s\n", Value(selector));
 
 
                                                            write(2, string, strlen(string));
 
 
                                                        }
 
 
                                                    }
 
 
                                                 }
 
 
                    }
 
 
                 }
 
 
    MetaExit(0, "TheEnd");
 
 
}
 
/*Well done my boy */ 

