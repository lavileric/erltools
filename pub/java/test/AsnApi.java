import java.io.*;
import java.util.*;
import java.net.URL;

class PackApi {
    
    // constructor
    // parameters :
    //              name : name for connection
    PackApi ( String name, String locAddr, String destAddr, int destPort )
    {
        
        // initialize decompasn pt
        // DecompAsn::ptDecomp = &decompAsn ;
        // initialize meta
        // MetaInit();
        // open channel
        // asn().AsLanguage();
        pvpConnection = new QConnection();
        pvpGrammIhm = new Grammihm();
        pvpConnection.Open(name, locAddr, destAddr, destPort, - 1)
                .OpenChannel(
                "Wired")
            .Syntax(
            "Wired", pvpGrammIhm);
    }
    
    // GetMessage : get a message
    //              blocked : tell if we wait for message
    // return : the message found
    APITREE GetMessage ( boolean blocked )
    {
        PTREE   message ; // message received
        
        // receive reponse
        message = pvpConnection.Receive(blocked);
        
        // treat message
        
        PTREE   selector ; // selector
        PTREE   content ;  // content
        PTREE   response ; // response
        
        if ( message.NumberTree() == asn.NAMED_VALUE ) {
            selector = message.SonTree(1);
            content = message.SonTree(2);
            if ( selector.Value().compareTo("executionScenario") == 0 ) {
                PTREE   ref ; // interpreter ref
                
                // get name
                lockName = pvName = QInetUtil.GetNamedValue("nom", content);
                
                // get commun
                lockCommun = pvCommun
                    = QInetUtil.GetNamedValue("commun", content);
                
                // get reference
                lockRef = pvRef
                    = QInetUtil.GetNamedValue("handle", content);
                
                // get status
                lockStatus = pvStatus
                    = QInetUtil.GetNamedValue("statut", content);
                
                // look if really a response and return it
                response = QInetUtil.GetNamedValue("masque", content);
                if ( !(response.Empty()) ) {
                    
                    // lock tree and return it
                    lockTree = response ;
                    return new APITREE(lockTree);
                }
            } else if ( content.Value().compareTo("fin") == 0 ) {
                System.out.println("Killed process PackApi");
                SimWired.PackApi.End(true);
                if ( SimWired.PackApi.End() ) {
                    System.out.println("End :TRUE!!!!!!");
                } else {
                    System.out.println("End :FALSE!!!!!!");
                }
                /*				Thread.currentThread().stop();
                   URL dataURL;
                   try
                   {
                   		// Envoi de la requete au serveur
                   		//dataURL = new URL("http://"+machine+":"+port+"/fin_execution/"+commun);
                   		dataURL = new URL("http://pccle:8182/get/end.html");
                   }
                   catch (IOException e)
                   {
                   	System.out.println("Exception URL dans run");
                   }
                   
                   // affiche le document HTML
                   System.out.println("Load new page html");
                   getAppletContext().showDocument(dataURL);
                   //System.exit(0);
                   */ 
            }
        }
        return new APITREE();
    }
    
    // StripFrame : strip frames of their choice list values
    // parameter : 
    //              tree : the tree to be stripped
    static  void StripFrame ( PTREE tree )
    {
        while ( true ) {
            switch ( tree.NumberTree() ) {
                case asn.NAMED_VALUE : 
                    {
                        if ( tree.Value().compareTo("listeChoix") == 0 ) {
                            PTREE   father = tree.Father().Father();
                            if ( father.NumberTree() == PTREE.LIST ) 
                                father.ReplaceTree(2, new PTREE());
                            return ;
                        } else {
                            tree = tree.SonTree(2);
                            continue ;
                        }
                    }
                case asn.SEQUENCE_VALUE : 
                    {
                        tree = tree.SonTree(1);
                        continue ;
                    }
                case PTREE.LIST : 
                    {
                        PTREE   elem ;
                        while ( !(tree.Empty()) ) {
                            elem = tree.SonTree(1);
                            tree = tree.SonTree(2);
                            StripFrame(elem);
                        }
                    }
                    break ;
                default : break ;
            }
            break ;
        }
    }
    
    // SendMessage : send a message
    // parameters :
    //       pMasqueSaisie : pointer on masque saisie to be send
    void SendMessage ( APITREE pMasqueSaisieA )
    {
        
        PTREE   message ;           // message to be send
        PTREE   masqueSaisie ;      // the masque saisie
        PTREE   commun = pvCommun ; // common
        PTREE   pMasqueSaisie ;     // real one
        
        pMasqueSaisie = pMasqueSaisieA.GetTree();
        
        // store parameters for future use
        oldLockName = lockName ;
        oldLockCommun = lockCommun ;
        oldLockRef = lockRef ;
        oldLockStatus = lockStatus ;
        oldLockTree = lockTree ;
        
        // send message
        /*message = parse (
               executionScenario {
                   type executerMasque,
                   commun $(commun),
                   paramSuppl {
                      masque   $(masqueSaisie)
                   }
               }
           );*/
        masqueSaisie = pMasqueSaisie ;
        
        PTREE   typeParam ;
        PTREE   communParam ;
        PTREE   masqueParam ;
        
        typeParam
            = asn.CreateNamedNode("type"
                , asn.CreateIdent("executerMasque"));
        communParam = asn.CreateNamedNode("commun", commun);
        masqueParam = asn.CreateNamedNode("masque", masqueSaisie);
        
        PTREE   list = new PTREE();
        
        list.AddList(masqueParam);
        
        PTREE   top ;
        
        top = new PTREE(asn.SEQUENCE_VALUE, 1);
        top.ReplaceTree(1, list);
        top = asn.CreateNamedNode("paramSuppl", top);
        list = new PTREE();
        list.AddList(typeParam).AddList(communParam).AddList(top);
        top = new PTREE(asn.SEQUENCE_VALUE, 1);
        top.ReplaceTree(1, list);
        message = asn.CreateNamedNode("executionScenario", top);
        
        // send response after stripping
        {
            PTREE   topTree = message ;
            PTREE   copiedMessage = message.CopyTree();
            PTREE   transformedMessage = copiedMessage ;
            StripFrame(transformedMessage);
            pvpConnection.Send("Wired", copiedMessage);
        }
    }
    
    // GetEntry : get an entry in message
    // parameters :
    //              message : the message to be searched
    //              name : the entry to be searched for
    // return : the found entry
    APITREE GetEntry ( APITREE message, String name )
    {
        PTREE   mask ; // the mask
        
        if ( name == null ) {
            mask = QInetUtil.GetNamed("listeChampsSaisie", message);
            return new APITREE(mask);
        } else {
            return new APITREE(QInetUtil.GetNamed(name, message));
        }
    }
    
    APITREE GetEntry ( APITREE message )
    {
        return GetEntry(message, null);
    }
    
    // GetEntryValue : get value of an entry in message
    // parameters :
    //              message : the message to be searched
    //              name : the entry to be searched for
    // return : the found entry
    APITREE GetEntryValue ( APITREE message, String name )
    {
        PTREE   entry ; // the entry
        
        entry = GetEntry(message, name);
        
        // if found entry go on value
        if ( entry.NumberTree() == asn.NAMED_VALUE ) {
            entry = entry.SonTree(2);
            if ( entry.NumberTree() == asn.SEQUENCE_VALUE
                    && entry.SonTree(1).NumberTree() == PTREE.LIST ) {
                entry = entry.SonTree(1).SonTree(1);
            }
            return new APITREE(entry);
        }
        
        // return found value or ()
        return new APITREE();
    }
    
    APITREE GetEntryValue ( APITREE message )
    {
        return GetEntryValue(message, null);
    }
    
    // IsTrue : test if node contains a true node
    // parameters :
    //              pNode : node to be tested
    // return : true if node contains <TRUE>
    boolean IsTrue ( APITREE pNode )
    {
        PTREE   node = pNode ; // the node
        
        // if node is asn.1 <TRUE> return true
        if ( node.NumberTree() == asn.TRUE ) 
            return true ;
        else 
            return false ;
    }
    
    // GetNextEntry : get the next entry
    // parameters :
    //              pPrevious : the previous entry
    // return : the next entry
    APITREE GetNextEntry ( APITREE pPrevious )
    {
        
        PTREE   father ;               // father of entry
        PTREE   previous = pPrevious ; // previous
        
        father = previous ;
        while ( father.NumberTree() != PTREE.LIST ) 
            father = father.Father();
        if ( father.NumberTree() == PTREE.LIST
                && father.SonTree(2).NumberTree() == PTREE.LIST ) {
            return new APITREE(father.SonTree(2).SonTree(1));
        }
        return new APITREE();
    }
    
    // ErrorMessage : get error message if error
    // return : the error message
    String ErrorMessage ()
    {
        PTREE   status ; // the status
        
        status = QInetUtil.GetNamedValue("ok", pvStatus);
        
        // if no error return (char *) 0 otherwise the error message
        if ( status.NumberTree() == asn.TRUE ) 
            return null ;
        else 
            return QInetUtil.GetNamedValue("message", pvStatus).Value();
    }
    
    // End : state end of applet
    // return : return if end of applet
    boolean End ()
    {
        return pvEnd ;
    }
    
    // End : set state end of applet
    // parameters :
    //              end : state
    void End ( boolean end )
    {
        pvEnd = end ;
    }
    
    // PutOrdre : set the ordre of next send message
    // parameters :
    //              tree : tree to be set
    //              ordre : ordre to put
    void PutOrdre ( APITREE treeA, String ordre )
    {
        
        PTREE   ordreTree ; // ordre as tree
        PTREE   tree ;      // real one
        
        tree = treeA.GetTree();
        
        // if null type do nothing
        if ( ordre == null ) 
            return ;
        ordreTree = asn.CreateNamedNode("ordre", asn.CreateIdent(ordre));
        
        // replace it in tree
        PTREE   ordrePt ; // pointer on ordre
        
        ordrePt = QInetUtil.GetNamed("ordre", tree);
        if ( !(ordrePt.Empty()) ) 
            ordrePt.ReplaceTree(ordreTree);
    }
    
    // PutValue : set a value
    // parameters :
    //              pMessage : where to set value
    //              val : the value to put
    void PutValue ( APITREE pMessageA, String val )
    {
        
        PTREE   newVal ;   // the new value
        PTREE   message ;  // message
        PTREE   field ;    // field part of message
        PTREE   pMessage ; // real one
        
        message = pMessage = pMessageA.GetTree();
        
        // if champ val inside get on it
        field = QInetUtil.GetNamedValue("champ", message);
        if ( !(field.Empty()) ) 
            message = field ;
        
        // field keep value of message
        field = message ;
        
        // compute newVal
        newVal = asn.CreateNamedNode("valeur", new PTREE(val));
        
        // get on the list (inside the champ attribute there is a list)
        if ( (message.NumberTree() == asn.NAMED_VALUE
                && message.SonTree(2).NumberTree() == asn.SEQUENCE_VALUE
                && ((message = message.SonTree(2).SonTree(1)) != null))
                || (message.NumberTree() == asn.SEQUENCE_VALUE
                        && ((message = message.SonTree(1)) != null)
                        && !(message.Empty())) ) 
            ;
        else {
            
            // restore message which is not a list
            message = field ;
            
            // since not a list construct the whole entry (it should be a champ)
            if ( message.NumberTree() == asn.NAMED_VALUE ) {
                PTREE   newTree = new PTREE();
                newTree.AddList(newVal);
                PTREE   top = new PTREE(asn.SEQUENCE_VALUE, 1);
                top.ReplaceTree(1, newTree);
                message.ReplaceTree(2, top);
                return ;
            }
        }
        
        // search the value field in this list
        PTREE   oldValue ; // the old value
        
        oldValue = QInetUtil.GetNamed("valeur", message);
        
        // if no old value add the new one otherwise replace the old one
        // valeur field is replaced
        if ( oldValue.Empty() ) {
            message.AddList(newVal);
        } else {
            oldValue.ReplaceTree(newVal);
        }
    }
    
    // PutValue : set a value
    // parameters :
    //              pMessage : where to set value
    //              val : the value to put
    void PutValue ( APITREE pMessageA, int val )
    {
        
        PTREE   newVal ;   // the new value
        PTREE   message ;  // message
        PTREE   field ;    // field part of message
        PTREE   pMessage ; // real one
        
        message = pMessage = pMessageA.GetTree();
        
        // if champ val inside get on it
        field = QInetUtil.GetNamedValue("champ", message);
        if ( !(field.Empty()) ) 
            message = field ;
        else 
            field = message ;
        
        // compute newVal
        newVal
            = asn.CreateNamedNode("valeur"
                , asn.CreateNumb(Integer.toString(val)));
        
        // get on the list (inside the champ attribute there is a list)
        if ( (message.NumberTree() == asn.NAMED_VALUE
                && message.SonTree(2).NumberTree() == asn.SEQUENCE_VALUE
                && ((message = message.SonTree(2).SonTree(1)) != null))
                || (message.NumberTree() == asn.SEQUENCE_VALUE
                        && ((message = message.SonTree(1)) != null)
                        && !(message.Empty())) ) 
            ;
        else {
            
            // restore message which is not a list
            message = field ;
            
            // since not a list construct the whole entry (it should be a champ)
            if ( message.NumberTree() == asn.NAMED_VALUE ) {
                PTREE   newTree = new PTREE();
                newTree.AddList(newVal);
                PTREE   top = new PTREE(asn.SEQUENCE_VALUE, 1);
                top.ReplaceTree(1, newTree);
                message.ReplaceTree(2, top);
                return ;
            }
        }
        
        // search the value field in this list
        PTREE   oldValue ; // the old value
        
        oldValue = QInetUtil.GetNamed("valeur", message);
        
        // if no old value add the new one otherwise replace the old one
        // valeur field is replaced
        if ( oldValue.Empty() ) {
            message.AddList(newVal);
        } else {
            oldValue.ReplaceTree(newVal);
        }
    }
    
    // PutValue : set a value
    // parameters :
    //              pMessage : where to set value
    //              val : the value to put
    void PutValue ( APITREE pMessageA, boolean val )
    {
        
        PTREE   newVal ;   // the new value
        PTREE   message ;  // message
        PTREE   field ;    // field part of message
        PTREE   pMessage ; // the real one
        
        message = pMessage = pMessageA.GetTree();
        
        // if champ val inside get on it
        field = QInetUtil.GetNamedValue("champ", message);
        if ( !(field.Empty()) ) 
            message = field ;
        else 
            field = message ;
        
        // compute newVal
        newVal = asn.CreateBoolean(val);
        
        // get on the list (inside the champ attribute there is a list)
        if ( (message.NumberTree() == asn.NAMED_VALUE
                && message.SonTree(2).NumberTree() == asn.SEQUENCE_VALUE
                && ((message = message.SonTree(2).SonTree(1)) != null))
                || (message.NumberTree() == asn.SEQUENCE_VALUE
                        && ((message = message.SonTree(1)) != null)
                        && !(message.Empty())) ) 
            ;
        else {
            
            // restore message which is not a list
            message = field ;
            
            // since not a list construct the whole entry (it should be a champ)
            if ( message.NumberTree() == asn.NAMED_VALUE ) {
                PTREE   newTree = new PTREE();
                newTree.AddList(newVal);
                PTREE   top = new PTREE(asn.SEQUENCE_VALUE, 1);
                top.ReplaceTree(1, newTree);
                message.ReplaceTree(2, top);
                return ;
            }
        }
        
        // search the value field in this list
        PTREE   oldValue ; // the old value
        
        oldValue = QInetUtil.GetNamed("etat", message);
        
        // if no old value add the new one otherwise replace the old one
        // valeur field is replaced
        if ( oldValue.Empty() ) {
            message.AddList(newVal);
        } else {
            oldValue.ReplaceTree(newVal);
        }
    }
    
    // PutValue : set a value
    // parameters :
    //              pMessage : where to set value
    //              pVal : the value to be put
    void PutValue ( APITREE pMessageA, APITREE pVal )
    {
        
        PTREE   newVal ;     // the new value
        PTREE   message ;    // message
        PTREE   val = pVal ; // new val
        PTREE   field ;      // field part of message
        PTREE   pMessage ;   // the real one
        
        message = pMessage = pMessageA.GetTree();
        
        // if champ val inside get on it
        field = QInetUtil.GetNamedValue("champ", message);
        if ( !(field.Empty()) ) 
            message = field ;
        else 
            field = message ;
        
        // compute newVal
        newVal = asn.CreateNamedNode("listeChampSaisie", val);
        
        // get on the list (inside the champ attribute there is a list)
        if ( (message.NumberTree() == asn.NAMED_VALUE
                && message.SonTree(2).NumberTree() == asn.SEQUENCE_VALUE
                && ((message = message.SonTree(2).SonTree(1)) != null))
                || (message.NumberTree() == asn.SEQUENCE_VALUE
                        && ((message = message.SonTree(1)) != null)
                        && !(message.Empty())) ) 
            ;
        else {
            
            // restore message which is not a list
            message = field ;
            
            // since not a list construct the whole entry (it should be a champ)
            if ( message.NumberTree() == asn.NAMED_VALUE ) {
                PTREE   newTree = new PTREE();
                newTree.AddList(newVal);
                PTREE   top = new PTREE(asn.SEQUENCE_VALUE, 1);
                top.ReplaceTree(1, newTree);
                message.ReplaceTree(2, top);
                return ;
            }
        }
        
        // search the value field in this list
        PTREE   oldValue ; // the old value
        
        oldValue = QInetUtil.GetNamed("listeChampsSaisie", message);
        
        // if no old value add the new one otherwise replace the old one
        // valeur field is replaced
        if ( oldValue.Empty() ) {
            message.AddList(newVal);
        } else {
            oldValue.ReplaceTree(newVal);
        }
    }
    
    // Value : get content of a PTREE
    // parameters :
    //              tree : tree where to search value
    // return : the value
    String TreeValue ( APITREE tree )
    {
        return tree.Value();
    }
    
    // GetName : return name of frame
    // return : the name
    String GetName ()
    {
        return pvName.Value();
    }
    
    // RestoreOldFrame : restore the frame send
    // return : the old frame
    APITREE RestoreOldFrame ()
    {
        
        // restore old parameters
        lockName = oldLockName ;
        lockCommun = oldLockCommun ;
        lockRef = oldLockRef ;
        lockStatus = oldLockStatus ;
        lockTree = oldLockTree ;
        pvName = lockName ;
        pvCommun = lockCommun ;
        pvRef = lockRef ;
        pvStatus = lockStatus ;
        
        // return old tree
        return new APITREE(lockTree);
    }
    
    // WaitTime : wait time before returning a message
    // parameters :
    //              timeOut : the time in seconds
    //              utime : the time in micro seconds
    void WaitTime ( int timeOut, int uTimeOut )
    {
        
        // set timeout
        pvpConnection.TimeVal(timeOut, uTimeOut / 1000);
    }
    
    // FastEncode : set fast mode 
    // parameters :
    //              mode : mode fast or not
    void FastEncode ( boolean mode ) {}
    
    public QConnection  pvpConnection ; // the connection used by the api
    public Grammihm     pvpGrammIhm ;   // ihm grammar
    public PTREE        pvRef ;         // the message reference
    public PTREE        pvCommun ;      // commun part
    public PTREE        pvStatus ;      // the status
    public PTREE        pvName ;        // name of current frame
    
    // locking variables
    static PTREE        lockName ;      // for locking name 
    static PTREE        lockCommun ;    // for locking commun reference
    static PTREE        lockRef ;       // for locking ref
    static PTREE        lockStatus ;    // for locking status
    static PTREE        lockTree ;      // for locking  tree
    static PTREE        oldLockName ;   // for locking name 
    static PTREE        oldLockCommun ; // for locking commun reference
    static PTREE        oldLockRef ;    // for locking ref
    static PTREE        oldLockStatus ; // for locking status
    static PTREE        oldLockTree ;   // for locking  tree
    boolean             pvEnd ;         // state of applet
}
