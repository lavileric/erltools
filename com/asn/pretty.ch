language asn;

#include "asndef.h"
#include "asn.h"
#include "malloc.h"

#define MAX_REALIGN rightMargin - 10

/********************************************************************
       computeSeq : compute and realign if indicated
                    do the computation for the tag part 
   *******************************************************************/
void DecompAsn::ComputeSeq ( PTREE list, int *tabMax1, int *tabMax2, int realign )
{
    PTREE   tag, son, type, inter, name ;
    PTREE   ref ;
    int     x0, x0init, y0, x, y, dx, dy ;
    
    while ( list != () ) {
        son =  nextl(list);
        
        // compute position of tag
        if ( son == <ELEMENT_TYPE,<NAMED_TYPE,name,<TYP,tag,type>>> ) {
            if ( tag ) {
                GetCoordAbs(tag, (), &x0, &y0);
                ref =  tag ;
            } else {
                GetCoordAbs(type, (), &x0, &y0);
                ref =  type ;
            }
            
            // compute max or realign    
            if ( !realign && x0 > *tabMax1 && x0 <= MAX_REALIGN ) 
                *tabMax1 =  x0 ;
            else if ( realign ) {
                char    string [10];
                
                // compute the diff between current tab and max
                // x0 = (*tabMax1 - x0) / TAB_SPACE ;
                x0 =  *tabMax1 - x0 ;
                
                // x0 must be greater than 0 otherwise allready in place
                if ( x0 > 0 ) {
                    sprintf(string, "%d", *tabMax1 + 1);
                    inter =  () * <GOTO,MakeString(string)>;
                    PutAttr(ref, inter, PRE_ATTR, PUT_BEG);
                }
            }
        }
    }
}

/********************************************************************
       computeSeqTy : compute tab and realign if indicated
                     do the computation for the type part 
   *******************************************************************/
void DecompAsn::ComputeSeqTy ( PTREE list, int *tabMax1, int *tabMax2, int realign )
{
    PTREE   son, type, inter, tag ;
    int     x0, y0, x, y, dx, dy ;
    
    while ( list != () ) {
        son =  nextl(list);
        
        // compute position of tag
        if ( son == <ELEMENT_TYPE,<NAMED_TYPE,<>,<TYP,tag,type>>> && tag != () ) {
            GetCoordAbs(type, (), &x0, &y0);
            
            // compute max or realign    
            if ( !realign && x0 > *tabMax1 && x0 <= MAX_REALIGN ) 
                *tabMax1 =  x0 ;
            else if ( realign ) {
                char    string [10];
                
                // if pos is not good put good one
                if ( *tabMax1 - x0 > 0 ) {
                    sprintf(string, "%d", *tabMax1 + 1);
                    inter =  () * <GOTO,MakeString(string)>;
                    PutAttr(type, inter, PRE_ATTR, PUT_BEG);
                }
            }
        }
    }
}

/********************************************************************
       computeChoice : compute and realign if indicated
                    do the computation for the tag part 
   *******************************************************************/
void DecompAsn::ComputeChoice ( PTREE list, int *tabMax1, int *tabMax2, int realign )
{
    PTREE   tag, son, type, inter, name ;
    PTREE   ref ;
    int     x0, x0init, y0, x, y, dx, dy ;
    
    while ( list != () ) {
        son =  nextl(list);
        
        // compute position of tag
        if ( son == <NAMED_TYPE,name,<TYP,tag,type>> ) {
            if ( tag ) {
                GetCoordAbs(tag, (), &x0, &y0);
                ref =  tag ;
            } else {
                GetCoordAbs(type, (), &x0, &y0);
                ref =  type ;
            }
            
            // compute max or realign    
            if ( !realign && x0 > *tabMax1 && x0 <= MAX_REALIGN ) 
                *tabMax1 =  x0 ;
            else if ( realign ) {
                char    string [10];
                
                // compute the diff between current tab and max
                // x0 = (*tabMax1 - x0) / TAB_SPACE ;
                x0 =  *tabMax1 - x0 ;
                
                // x0 must be greater than 0 otherwise allready in place
                if ( x0 > 0 ) {
                    sprintf(string, "%d", *tabMax1 + 1);
                    inter =  () * <GOTO,MakeString(string)>;
                    PutAttr(ref, inter, PRE_ATTR, PUT_BEG);
                }
            }
        }
    }
}

/********************************************************************
       computeChoiceTy : compute tab and realign if indicated
                     do the computation for the type part 
   *******************************************************************/
void DecompAsn::ComputeChoiceTy ( PTREE list, int *tabMax1, int *tabMax2, int realign )
{
    PTREE   tag, son, type, inter ;
    int     x0, y0, x, y, dx, dy ;
    
    while ( list != () ) {
        son =  nextl(list);
        
        // compute position of tag
        if ( son == <NAMED_TYPE,<>,<TYP,tag,type>> && tag != () ) {
            GetCoordAbs(type, (), &x0, &y0);
            
            // compute max or realign    
            if ( !realign && x0 > *tabMax1 && x0 <= MAX_REALIGN ) 
                *tabMax1 =  x0 ;
            else if ( realign ) {
                char    string [10];
                
                // if pos is not good put good one
                if ( *tabMax1 - x0 > 0 ) {
                    sprintf(string, "%d", *tabMax1 + 1);
                    inter =  () * <GOTO,MakeString(string)>;
                    PutAttr(type, inter, PRE_ATTR, PUT_BEG);
                }
            }
        }
    }
}

void DecompAsn::TraiterAlign ( PTREE tree )
{
    int     max1 = 0, max2 = 0 ;
    int     x0, y0 ;
    PTREE   list ;
    PTREE   elem ;
    
    foreach ((),tree,{
        switch ( for_elem ) {
            case <SEQUENCE,list> : 
            case <SET,list> : 
                
                // store coordinates of tree
                GetCoordAbs(for_elem, (), &x0, &y0);
                MarkCoordTree(for_elem, x0, y0);
                
                // align tag part
                max1 = max2 = 0 ;
                ComputeSeq(list, &max1, &max2, 0);
                ComputeSeq(list, &max1, &max2, 1);
                
                // align type part
                elem = for_elem ;
                foreach ((),elem,
                    
                    // keep coordinates on for_elem since
                    // there will be used in DecompVirt
                    if ( (PPTREE)elem != for_elem ) 
                        FreeCoord(for_elem);
                )
                DecompVirt(for_elem);
                CompleteCoordinates(for_elem);
                max1 = max2 = 0 ;
                ComputeSeqTy(list, &max1, &max2, 0);
                ComputeSeqTy(list, &max1, &max2, 1);
                
                // unstore coordinates of tree
                elem = for_elem ;
                foreach ((),elem,
                    
                    // keep coordinates on for_elem since
                    // there will be used in DecompVirt
                    if ( (PPTREE)elem != for_elem ) 
                        FreeCoord(for_elem);
                )
                DecompVirt(for_elem);
                CompleteCoordinates(for_elem);
                UnMarkCoordTree(for_elem);
                
                //                goto for_continue ;
                break ;
            case <CHOICE,list> : 
                GetCoordAbs(for_elem, (), &x0, &y0);
                MarkCoordTree(for_elem, x0, y0);
                
                // align tag part
                max1 = max2 = 0 ;
                ComputeChoice(list, &max1, &max2, 0);
                ComputeChoice(list, &max1, &max2, 1);
                
                // align type part
                elem = for_elem ;
                foreach ((),elem,
                    
                    // keep coordinates on for_elem since
                    // there will be used in DecompVirt
                    if ( (PPTREE)elem != for_elem ) 
                        FreeCoord(for_elem);
                )
                DecompVirt(for_elem);
                CompleteCoordinates(for_elem);
                max1 = max2 = 0 ;
                ComputeChoiceTy(list, &max1, &max2, 0);
                ComputeChoiceTy(list, &max1, &max2, 1);
                
                // recompute coordinates
                elem = for_elem ;
                foreach ((),elem,
                    
                    // keep coordinates on for_elem since
                    // there will be used in DecompVirt
                    if ( (PPTREE)elem != for_elem ) 
                        FreeCoord(for_elem);
                )
                DecompVirt(for_elem);
                CompleteCoordinates(for_elem);
                UnMarkCoordTree(for_elem);
                
                // goto for_continue ;
                break ;
        }
    })
}

int DecompAsn::OpTypeAlign ( PTREE tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <SUBTYPE_SPEC> : 
        case <IMPORTS> : 
        case <EXPORTS> : 
        case <OBJECT_IDENTIFIER_VALUE> : 
            return LIST_ALIGN ;
            break ;
        case <REF_VALUE> : 
        case <REF_TYP> : 
            return H_ALIGN ;
            break ;
        default : return -1 ;
    }
}

int DecompAsn::OpType ( PTREE tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <LIST> : return 100 ;
        case <SUBTYPE_SPEC> : return 1 ;
        case <BITSTRING> : return 2 ;
        case <INTEGER> : return 3 ;
        case <ENUMERATED> : return 4 ;
        case <IMPORTS> : return 5 ;
        case <EXPORTS> : return 6 ;
        case <OBJECT_IDENTIFIER_VALUE> : return 7 ;
        case <REF_VALUE> : return 8 ;
        case <REF_TYP> : return 9 ;
        case <SEQUENCE_OF> : return 10 ;
        case <SET_OF> : return 10 ;
        default : return -1 ;
    }
}

int DecompAsn::IsTop ( PTREE tree, int internal )
{
    return -1 ;
}

/********************************************************************
       Treat : traitement des geometries
   *******************************************************************/
void DecompAsn::Treat ( PTREE tree )
{
    int oldNbTab = nbTab ;
    int x, y, dx, dy ;
    int x0, y0 ;
    
    // prepare the geometries on node
    DecompVirt(tree);
    CompleteCoordinates(tree);
    if ( tree == <ATTRIBUTS> ) 
        FreeCoord(tree);
    
    // alignment in seq and choice
    TraiterAlign(tree);
    
    // prepare the geometries on node
    DecompVirt(tree);
    CompleteCoordinates(tree);
    if ( tree == <ATTRIBUTS> ) 
        FreeCoord(tree);
    
    // treat geometries
    nbTab =  0 ;
    if ( tree ^ ) {
        GetCoord(tree, &x, &y, &dx, &dy);
        TreatGeometry(tree, -x + 3);
    } else 
        TreatGeometry(tree, 0);
}

/********************************************************************
       PropragateDelta : propagate a delta on right son and up
   *******************************************************************/
void DecompAsn::PropagateDelta ( PTREE tree, int delta )
{
    int     x, y, dx, dy = 0, y0, colRef ;
    PTREE   elem ;
    PTREE   father = tree ^ ;
    int     rank ;
    int     arity ;
    
    while ( father != () && father != (PTREE) -1 ) {
        
        // 
        if ( tree == <ATTRIBUTS> ) 
            return ;
        
        // compute pos
        rank  =  ranktree(tree);
        arity =  treearity(father);
        
        // update all right brothers
        while ( ++rank <= arity ) {
            
            // if box is multiline don't go further
            GetCoord(elem, &x, &y, &dx, &colRef);
            if ( y & 0x2 ) {
                return ;
            }
            elem =  father [rank];
            GetCoord(elem, &x, &y, &dx, &colRef);
            
            // if there is a newline don't go further
            if ( y & 0x4 ) 
                return ;
            
            // if multiline box delta will not propagate further
            if ( y & 0x2 ) {
                PutCoord(elem, x + delta, y, dx - delta, dy);
                return ;
            } else 
                PutCoord(elem, x + delta, y, dx, dy);
        }
        
        // go up
        tree   =  father ;
        father =  tree ^ ;
    }
}

/********************************************************************
       TreatGeometrySpecific : treatment of specific geometry
   *******************************************************************/
int DecompAsn::TreatGeometrySpecific ( PTREE tree, int x0, int x )
{
    PTREE   preAttr, postAttr, constraint, content, val ;
    PTREE   name, tag, type, namedType ;
    int     y, dx, dy, y0, colRef, delta = 0 ;
    
    switch ( tree ) {
        case <TYP,<>,<>,type> : 
        case <ELEMENT_TYPE> : 
            if ( type == () ) {
                tree == <ELEMENT_TYPE,<NAMED_TYPE,name,<TYP,tag,type>>>;
            }
        case <NAMED_TYPE> : 
            if ( type == () ) {
                tree == <NAMED_TYPE,name,<TYP,tag,type>>;
            }
            {
                GetCoord(type, &x, &y, &dx, &colRef);
                GetCoordAbs(type, (), &x0, &y0);
                if ( x0 + dx > rightMargin ) {
                    
                    // put a newline before type
                    {
                        GetCoord(tree, &x, &y, &dx, &colRef);
                        GetCoord(type, &x, &y, &dx, &dy);
                        preAttr  =  () * <NEWLINE,"1"> * <TAB,"1"> * <MARK>;
                        postAttr =  () * <UNMARK>;
                        colRef   =  TAB_VALUE(colRef, 1);
                        delta    =  colRef - x0 ;
                        if ( delta < 0 ) {
                            
                            // since we put a newline suppress a possible
                            // alignment attribute
                            // if ( type == <ATTRIBUTS> ) 
                            //    type += <,<>,(),()>;
                            // do pos modificatons
                            PropagateDelta(type, delta);
                            CleanAttributs(type);
                            PutAttr(type, copytree(preAttr), PRE_ATTR, PUT_BEG);
                            PutAttr(type, copytree(postAttr), POST_ATTR, PUT_END);
                            TraitMark(type, colRef);
                            PutCoord(type, x + delta, y | 0x3, dx, dy);
                            if ( tree != <TYP> ) 
                                Treat(tree);
                        }
                    }
                }
            }
            
            // if it is an ELEMENT_TYPE we must propagate it ouselves
            // on NAMED_TYPE since there are two levels and  general proc
            // wont take it into account
            if ( tree == <ELEMENT_TYPE,<NAMED_TYPE>> ) {
                namedType =  tree [1];
                GetCoord(namedType, &x, &y, &dx, &colRef);
                PutCoord(namedType, x, y |= 2, dx + delta, colRef);
            }
            
            // maybe type is still to big
            if ( tree != <TYP> ) 
                Treat(type);
            break ;
        case <SEQUENCE_OF,constraint,content> : 
        case <SET_OF,constraint,content> : 
            {
                GetCoord(tree, &x, &y, &dx, &colRef);
                preAttr  =  () * <NEWLINE,"1"> * <TAB,"1"> * <MARK>;
                postAttr =  () * <UNMARK>;
                val      =  constraint ;
                GetCoord(val, &x, &y, &dx, &dy);
                GetCoordAbs(val, (), &x0, &y0);
                if ( x0 + dx > rightMargin ) {
                    PutAttr(val, copytree(preAttr), PRE_ATTR, PUT_BEG);
                    PutAttr(val, copytree(postAttr), POST_ATTR, PUT_END);
                    colRef =  TAB_VALUE(colRef, 1);
                    delta  =  colRef - x0 ;
                    PutCoord(val, x + delta, y | 0x3, dx, dy);
                    TraitMark(val, colRef);
                }
                val =  content ;
                GetCoord(val, &x, &y, &dx, &dy);
                GetCoordAbs(val, (), &x0, &y0);
                if ( x0 + dx + delta > rightMargin ) {
                    CleanAttributs(val);
                    PutAttr(val, preAttr, PRE_ATTR, PUT_BEG);
                    PutAttr(val, postAttr, POST_ATTR, PUT_END);
                    colRef =  TAB_VALUE(colRef, 1);
                    delta  =  colRef - x0 ;
                    PutCoord(val, x + delta, y | 0x3, dx, dy);
                    TraitMark(val, colRef);
                    Treat(val);
                }
                PropagateDelta(tree, delta);
            }
            break ;
        case <OPTIONAL> : 
        case <DEFAULT> : 
            {
                GetCoord(tree, &x, &y, &dx, &colRef);
                preAttr  =  () * <NEWLINE,"1"> * <TAB,"1"> * <MARK>;
                postAttr =  () * <UNMARK>;
                PutAttr(tree, preAttr, PRE_ATTR, PUT_BEG);
                PutAttr(tree, postAttr, POST_ATTR, PUT_END);
                GetCoord(tree, &x, &y, &dx, &dy);
                GetCoordAbs(tree, (), &x0, &y0);
                colRef =  TAB_VALUE(colRef, 1);
                delta  =  colRef - x0 ;
                PutCoord(tree, x + delta, y | 0x3, dx, dy);
                TraitMark(tree, colRef);
            }
            break ;
        case <BITSTRING> : 
        case <INTEGER> : 
        case <ENUMERATED> : 
            TraiterExpListParam(tree, x0);
            break ;
        default : return 0 ;
    }
    return 1 ;
}


