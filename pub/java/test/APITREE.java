class APITREE extends PTREE {
    APITREE ( PTREE tree )
    {
        super(tree.NumberTree(), tree.Arity());
        
        int index ;
        
        for ( index = 0 ; index < Arity() ; index++ ) {
            pvSons [index + 2] = tree.SonTree(index + 1);
        }
        
        PTREE   son ;
        
        son = tree.Father();
        if ( !(son.Empty()) ) 
            pvSons [1] = son ;
        son = tree.SonTree( - 1);
        if ( !(son.Empty()) ) 
            pvSons [0] = son ;
        keepTree = tree ;
    }
    
    APITREE ()
    {
        this(new PTREE());
    }
    
    PTREE GetTree ()
    {
        return keepTree ;
    }
    
    private PTREE   keepTree ;
}
