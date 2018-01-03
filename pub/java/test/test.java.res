class Grammtest {
    public Grammtest () {}
    
    public PTREE Root ( EString val, CoordString coord, boolean checkTag )
    {
        int         codedLength = coord.length ;
        int         codedPos = coord.pos ;
        PTREE       __resCoding = new PTREE();
        CoordString codedCoord = new CoordString(coord.pos, coord.length);
        
        if ( CompareTag("\200", val, new CoordString(coord.pos, 1)) ) {
            if ( !TakeTagged(val, 1, coord, codedCoord) ) 
                return new PTREE(0);
            {
                checkTag = false ;
                __resCoding = Identification(val, codedCoord, checkTag);
                return CreateNamedNode("identification", __resCoding);
            }
        } else if ( CompareTag("\201", val, new CoordString(coord.pos, 1)) ) {
            if ( !TakeTagged(val, 1, coord, codedCoord) ) 
                return new PTREE(0);
            {
                checkTag = false ;
                __resCoding = Identification(val, codedCoord, checkTag);
                return CreateNamedNode("commande", __resCoding);
            }
        } else if ( CompareTag("\237\042", val
                    , new CoordString(coord.pos, 2)) ) {
            if ( !TakeTagged(val, 2, coord, codedCoord) ) 
                return new PTREE(0);
            {
                checkTag = false ;
                __resCoding = GetBoolean(val, codedCoord, checkTag);
                return CreateNamedNode("allDebug", __resCoding);
            }
        } else if ( CompareTag("\237\043", val
                    , new CoordString(coord.pos, 2)) ) {
            if ( !TakeTagged(val, 2, coord, codedCoord) ) 
                return new PTREE(0);
            {
                checkTag = false ;
                __resCoding = GetNullType(val, codedCoord, checkTag);
                return CreateNamedNode("info", __resCoding);
            }
        }
        ;
        ;
        return __resCoding ;
    }
    
    public void Root ( EString resString, PTREE val )
    {
        if ( val.Value().GetString().compareTo("identification") == 0 ) {
            val = val.SonTree(2);
            Identification(__valString, val);
            PutTag(__valString, new EString("\200"), true);
            resString.AddString(__valString);
        } else if ( val.Value().GetString().compareTo("commande") == 0 ) {
            val = val.SonTree(2);
            Identification(__valString, val);
            PutTag(__valString, new EString("\201"), true);
            resString.AddString(__valString);
        } else if ( val.Value().GetString().compareTo("allDebug") == 0 ) {
            val = val.SonTree(2);
            boolean __val = false ;
            if ( val.NumberTree() == asn.TRUE ) {
                __val = true ;
            }
            EncodeBoolean(__valString, __val);
            ;
            PutTag(__valString, new EString("\237\042"), true);
            resString.AddString(__valString);
        } else if ( val.Value().GetString().compareTo("info") == 0 ) {
            val = val.SonTree(2);
            EncodeNullType(__valString);
            ;
            PutTag(__valString, new EString("\237\043"), true);
            resString.AddString(__valString);
        }
        ;
        ;
    }
    
    public PTREE Identification ( EString val, CoordString coord
        , boolean checkTag )
    {
        int         codedLength = coord.length ;
        int         codedPos = coord.pos ;
        PTREE       __resCoding = new PTREE();
        CoordString codedCoord = new CoordString(coord.pos, coord.length);
        CoordString embeddedCodedCoord
            = new CoordString(coord.pos, coord.length);
        
        if ( checkTag ) {
            if ( CompareTag("\020", val, new CoordString(coord.pos, 1)) ) {
                if ( !TakeTagged(val, 1, coord, codedCoord) ) 
                    return new PTREE(0);
            } else 
                return new PTREE(0);
        }
        checkTag = true ;
        
        boolean __analyze = false ;
        PTREE   __listSequence ;
        PTREE   __listSequencef ;
        
        __listSequence = new PTREE();
        __listSequencef = new PTREE();
        if ( codedCoord.length > 0 ) {
            if ( CompareTag("\200", val, new CoordString(codedCoord.pos, 1)) ) {
                if ( !TakeTagged(val, 1, codedCoord, embeddedCodedCoord) ) 
                    return new PTREE(0);
                checkTag = false ;
                __resCoding = __Rule0(val, embeddedCodedCoord, checkTag);
                PTREE   __headTree = CreateNamedNode("ordre", __resCoding);
                AddToList(__listSequence, __headTree, __listSequencef);
            } else {
                codedCoord.length = 0 ;
            }
        }
        if ( codedCoord.length > 0 ) {
            if ( CompareTag("\201", val, new CoordString(codedCoord.pos, 1)) ) {
                if ( !TakeTagged(val, 1, codedCoord, embeddedCodedCoord) ) 
                    return new PTREE(0);
                checkTag = false ;
                __resCoding
                    = MessageDebug(val, embeddedCodedCoord, checkTag);
                PTREE   __headTree
                    = CreateNamedNode("question", __resCoding);
                AddToList(__listSequence, __headTree, __listSequencef);
            } else {
            }
        }
        if ( codedCoord.length > 0 ) {
            if ( CompareTag("\202", val, new CoordString(codedCoord.pos, 1)) ) {
                if ( !TakeTagged(val, 1, codedCoord, embeddedCodedCoord) ) 
                    return new PTREE(0);
                checkTag = false ;
                __resCoding
                    = MessageDebug(val, embeddedCodedCoord, checkTag);
                PTREE   __headTree
                    = CreateNamedNode("reponse", __resCoding);
                AddToList(__listSequence, __headTree, __listSequencef);
            } else {
            }
        }
        if ( codedCoord.length > 0 ) {
            if ( CompareTag("\203", val, new CoordString(codedCoord.pos, 1)) ) {
                if ( !TakeTagged(val, 1, codedCoord, embeddedCodedCoord) ) 
                    return new PTREE(0);
                checkTag = false ;
                __resCoding = __Rule1(val, embeddedCodedCoord, checkTag);
                PTREE   __headTree
                    = CreateNamedNode("accesMenus", __resCoding);
                AddToList(__listSequence, __headTree, __listSequencef);
            } else {
            }
        }
        
        PTREE   __retValue = new PTREE(asn.SEQUENCE_VALUE, 1);
        
        __retValue.ReplaceTree(1, __listSequence);
        return __retValue ;
        ;
        ;
        return __resCoding ;
    }
    
    public void Identification ( EString resString, PTREE val )
    {
        {
            EString __sequenceString = new EString();
            val = val.SonTree(1);
            if ( val.Value().GetString().compareTo("ordre") == 0 ) {
                PutSonNext  __putSonNext = new PutSonNext(val);
                __Rule0(__valString, val);
                PutTag(__valString, new EString("\200"), true);
                __sequenceString.AddString(__valString);
            } else {
                val = new PTREE(0);
            }
            if ( val.Value().GetString().compareTo("question") == 0 ) {
                PutSonNext  __putSonNext = new PutSonNext(val);
                MessageDebug(__valString, val);
                PutTag(__valString, new EString("\201"), true);
                __sequenceString.AddString(__valString);
            } else {
            }
            if ( val.Value().GetString().compareTo("reponse") == 0 ) {
                PutSonNext  __putSonNext = new PutSonNext(val);
                MessageDebug(__valString, val);
                PutTag(__valString, new EString("\202"), true);
                __sequenceString.AddString(__valString);
            } else {
            }
            if ( val.Value().GetString().compareTo("accesMenus") == 0 ) {
                PutSonNext  __putSonNext = new PutSonNext(val);
                __Rule1(__valString, val);
                PutTag(__valString, new EString("\203"), true);
                __sequenceString.AddString(__valString);
            } else {
            }
            PutTag(__sequenceString, "\060", false);
            resString.AddString(__sequenceString);
        }
        ;
        ;
    }
    
    public PTREE MessageDebug ( EString val, CoordString coord
        , boolean checkTag )
    {
        int         codedLength = coord.length ;
        int         codedPos = coord.pos ;
        PTREE       __resCoding = new PTREE();
        CoordString codedCoord = new CoordString(coord.pos, coord.length);
        CoordString embeddedCodedCoord
            = new CoordString(coord.pos, coord.length);
        
        if ( checkTag ) {
            if ( CompareTag("\020", val, new CoordString(coord.pos, 1)) ) {
                if ( !TakeTagged(val, 1, coord, codedCoord) ) 
                    return new PTREE(0);
            } else 
                return new PTREE(0);
        }
        checkTag = true ;
        
        boolean __analyze = false ;
        PTREE   __listSequence ;
        PTREE   __listSequencef ;
        
        __listSequence = new PTREE();
        __listSequencef = new PTREE();
        if ( codedCoord.length > 0 ) {
            if ( CompareTag("\200", val, new CoordString(codedCoord.pos, 1)) ) {
                if ( !TakeTagged(val, 1, codedCoord, embeddedCodedCoord) ) 
                    return new PTREE(0);
                checkTag = false ;
                __resCoding = __Rule2(val, embeddedCodedCoord, checkTag);
                PTREE   __headTree
                    = CreateNamedNode("affichage", __resCoding);
                AddToList(__listSequence, __headTree, __listSequencef);
            } else {
            }
        }
        
        PTREE   __retValue = new PTREE(asn.SEQUENCE_VALUE, 1);
        
        __retValue.ReplaceTree(1, __listSequence);
        return __retValue ;
        ;
        ;
        return __resCoding ;
    }
    
    public void MessageDebug ( EString resString, PTREE val )
    {
        {
            EString __sequenceString = new EString();
            val = val.SonTree(1);
            if ( val.Value().GetString().compareTo("affichage") == 0 ) {
                PutSonNext  __putSonNext = new PutSonNext(val);
                __Rule2(__valString, val);
                PutTag(__valString, new EString("\200"), true);
                __sequenceString.AddString(__valString);
            } else {
            }
            PutTag(__sequenceString, "\060", false);
            resString.AddString(__sequenceString);
        }
        ;
        ;
    }
    
    public PTREE __Rule0 ( EString val, CoordString coord, boolean checkTag )
    {
        int         codedLength = coord.length ;
        int         codedPos = coord.pos ;
        PTREE       __resCoding = new PTREE();
        String      enumeratedList [2][]
            = {{ EString(0), "valider"}
                , { EString(1), "changerMotDePasse"}, { null, null }};
        CoordString codedCoord = new CoordString(coord.pos, coord.length);
        
        if ( checkTag ) {
            if ( CompareTag("\012", val, new CoordString(coord.pos, 1)) ) {
                if ( !TakeTagged(val, 1, coord, codedCoord) ) 
                    return new PTREE(0);
            }
        }
        checkTag = false ;
        return GetEnumerated(GetInteger(val, coodedCoord, checkTag)
            , enumeratedList);
        ;
        ;
        return __resCoding ;
    }
    
    public void __Rule0 ( EString resString, PTREE val )
    {
        String  enumeratedList [2][]
            = {{ EString(0), "valider"}
                , { EString(1), "changerMotDePasse"}, { null, null }};
        
        EncodeEnumerated(resString, enumeratedList, Value(val));
        ;
        ;
    }
    
    public PTREE __Rule1 ( EString val, CoordString coord, boolean checkTag )
    {
        int         codedLength = coord.length ;
        int         codedPos = coord.pos ;
        PTREE       __resCoding = new PTREE();
        CoordString codedCoord = new CoordString(coord.pos, coord.length);
        
        if ( checkTag ) {
            if ( CompareTag("\020", val, new CoordString(coord.pos, 1)) ) {
                if ( !TakeTagged(val, 1, coord, codedCoord) ) 
                    return new PTREE(0);
            } else 
                return new PTREE(0);
        }
        checkTag = true ;
        
        PTREE   __listSequence = new PTREE();
        PTREE   __listSequencef = new PTREE();
        
        while ( codedCoord.length > 0 ) {
            __resCoding = GetIA5String(val, codedCoord, checkTag);
            if ( __resCoding == PTREE(0) ) 
                return __resCoding ;
            AddToList(__listSequence, __resCoding, __listSequencef);
        }
        
        PTREE   __retValue = new PTREE(asn.SEQUENCE_VALUE, 1);
        
        __retValue.ReplaceTree(1, __listSequence);
        return __retValue ;
        ;
        ;
        return __resCoding ;
    }
    
    public void __Rule1 ( EString resString, PTREE val )
    {
        {
            EString __sequenceString = new EString();
            val = val.SonTree(1);
            while ( !(val.Empty()) ) {
                __valString = "";
                PutSonNext  __putSonNext = new PutSonNext(val);
                {
                    EncodeIA5String(__valString, val.Value());
                    ;
                }
                __sequenceString.AddString(__valString);
            }
            PutTag(__sequenceString, "\060", false);
            resString.AddString(__sequenceString);
        }
        ;
        ;
    }
}

;
