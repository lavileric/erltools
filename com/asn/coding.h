#ifndef CODING_FILE
#define CODING_FILE 1
#include "token.h"
#include "asn.h"
class Coding ;
#include "asndef.h"
#ifdef MOST_RECENT_STL
#include <stack>
#include <vector>
#else 
#include <stack.h>
#include <vector.h>
#endif

class CodingFreeListContainer {
    
    public :
    
#if defined(STL_3)
        typedef stack<Coding *, vector<Coding *> >  CodingList ;
#else 
        typedef stack<vector<Coding *> >    CodingList ;
#endif
        
        // constructor
        CodingFreeListContainer ()
            : pvListLocked(false)
        {
            pvCodingListValid = true ;
            codingList = new CodingList ;
        }
        
        // destructor
        ~CodingFreeListContainer ()
        {
            pvCodingListValid = false ;
            if ( !pvListLocked && codingList ) 
                delete codingList ;
            codingList = 0 ;
        }
        
        void FreeList ( CodingList *list )
        {
            if ( pvCodingListValid ) {
                if ( !pvListLocked ) 
                    delete codingList ;
                codingList = list ;
                pvListLocked = true ;
            }
        }
        
        CodingList *FreeList ()
        {
            return codingList ;
        }
        
        CodingList  *codingList ;
        bool        pvListLocked ;
        static bool pvCodingListValid ;
};

// 
// Coding is used to construct the result of the coding
// of an asn1 structure
//

class Coding {
    
    public :
    
        // constructor
        // return : .
        Coding ()
            : topTree(0),  codingTree(0)
        {
            codingString = 0 ;
            AddLevel();
        }
        
        // constructor initializing  with atree
        // return : .
        Coding ( PPTREE tree )
            : topTree(tree),  codingTree(tree)
        {
            codingString = 0 ;
        }
        
        // copy constructor
        Coding ( Coding &cod )
            : codingTree(cod.topTree),  topTree(cod.topTree)
        {
            if ( cod.codingString ) {
                codingString = new EString(*cod.codingString);
            } else {
                codingString = 0 ;
            }
        }
        
        // operator =
        Coding &operator= ( const Coding &cod )
        {
            
            // dont affect to ourself
            if ( &cod == this ) 
                return *this ;
            
            // do the job
            codingTree = topTree = cod.topTree ;
            if ( codingString ) 
                delete codingString ;
            if ( cod.codingString ) {
                codingString = new EString(*cod.codingString);
            } else {
                codingString = 0 ;
            }
            
            // return object
            return *this ;
        }
        
        // destructor
        // return : .
        ~Coding ()
        {
            codingTree = topTree = 0 ;
            if ( codingString ) {
                delete codingString ;
                codingString = 0 ;
            }
        }
        
        // put a new tag at current level
        void    PutTag (const char *) ;
        
        void TakeTag ( char *tag )
        {
            PutTag(tag);
            free(tag);
        }
        
        void    TakeTag (PTREE) ;
        
        // put a new length at current level
        void    PutLength (char *) ;
        
        void TakeLength ( char *length )
        {
            PutLength(length);
            free(length);
        }
        
        // put a new content at current level
        // a string
        void    PutContent (const char *) ;
        
        void TakeContent ( char *content )
        {
            PutContent(content);
            free(content);
        }
        
        // put a new content at current level
        // a tree
        void    TakeContent (PTREE) ;
        
        // add a level
        void    AddLevel () ;
        
        // SetSpec : replace top node with a special top node 
        void    SetSpec () ;
        
        // add a blind level : tagged node
        void    AddBlindLevel () ;
        
        // get String from tree
                operator EString *() ;
        
        // get val from tree
        EString *GetVal () ;
        
        // get tree from coding
        PPTREE GetPointer ()
        {
            return (PPTREE)codingTree ;
        }
        
        // set tree 
        PPTREE SetPointer ( PPTREE tree )
        {
            return (PPTREE)(codingTree = tree);
        }
        
        // go to next coding element
        PPTREE  Next () ;
        
        // reset the read pointer
        void Reset ()
        {
            codingTree = topTree ;
        }
        
        // get length of element
        int Length () ;
        
        // get whole length of element
        int WholeLength () ;
        
        // tell if the current pointer is on a simple value
        int IsSimpleValue () ;
        
        // Allocate : allocate a new coding element
        // return : a new coding object
        static  Coding *Allocate ()
        {
            if ( !CodingFreeListContainer::pvCodingListValid || pvCodingFreeList.codingList -> empty() ) {
                return new Coding ;
            } else {
                Coding  *retCoding ; // returned coding
                retCoding = pvCodingFreeList.codingList -> top();
                pvCodingFreeList.codingList -> pop();
                return retCoding ;
            }
        }
        
        // Free : free a coding element
        // parameters :
        //              coding : the coding to be freed
        static  void Free ( Coding *coding )
        {
            
            // if unused coding keep it
            coding -> codingTree = 0 ;
            if ( coding -> topTree.NumberTree() == asn::CODING
                    && NumberRef(coding -> topTree) == 1
                    && !FatherTree(coding -> topTree) ) {
                if ( coding -> topTree [1] ) 
                    coding -> topTree.ReplaceTree(1, (PPTREE)0);
                if ( coding -> topTree [2] ) 
                    coding -> topTree.ReplaceTree(2, (PPTREE)0);
                if ( coding -> topTree [3] ) 
                    coding -> topTree.ReplaceTree(3, (PPTREE)0);
                if ( coding -> topTree [4] ) 
                    coding -> topTree.ReplaceTree(4, (PPTREE)0);
                coding -> codingTree = coding -> topTree ;
            } else {
                coding -> topTree = 0 ;
                coding -> AddLevel();
            }
            if ( coding -> codingString ) {
                delete coding -> codingString ;
                coding -> codingString = 0 ;
            }
            if ( CodingFreeListContainer::pvCodingListValid ) 
                pvCodingFreeList.codingList -> push(coding);
            else 
                delete coding ;
        }
        
        void FreeList ( CodingFreeListContainer::CodingList *list )
        {
            pvCodingFreeList.FreeList(list);
        }
        
        CodingFreeListContainer::CodingList *FreeList ()
        {
            return pvCodingFreeList.FreeList();
        }
        
        // GetRawString : get raw string out of coding
        // return : 
        //      a pointer on a string representing codingTree
        EString *GetRawString () ;
    
    private :
    
        PTREE                           codingTree ;       // the tree used to store the 
                                                           // coding structure
        PTREE                           topTree ;          // the root of tree
        EString                         *codingString ;    // the string associated with 
        
        // the codingTree
        // constructed after a cast 
        // to String *
        static CodingFreeListContainer  pvCodingFreeList ; // free list for managing allocation
};
#endif
