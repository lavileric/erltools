/*************************************************************************/
/*                                                                       */
/*        ptree.h - Built by Eric Lavillonniere on Tandon 486 - 96       */
/*                                                                       */
/*************************************************************************/
/* This file is part of metagen                                             
   
   Metagen is a syntaxic analyser generator with backtrack.
   
   It runs on dos and unix. It generates c code. */
/* Copyright(C) 1989 Eric Lavillonniere */
/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING. If not, write to 
   the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
   
    */
/*---------------------------------------*/
/* MODIFICATIONS :                       */
/*---------------------------------------*/
/*  Loic Fournier - 9 Avril 1997         */
/*                                       */
/*   Added Methods in class PTREE
             
   	   
   void ReplaceTree(const int n);
   const int TreeArity()const;
   const int RankTree()const;
   const char * Value()const;
   PTREE(char ch[]);
   PTREE(int NodeNumb,int Arity);
        */
#ifndef PTREE_FILE
#   define PTREE_FILE 1
#   include "smtoken.h"
#   include "memges.h"
#   include "erlstring.h"
#   include <vector>
    void    FreeNodeTree (int arity, PPTREE tree) ;
    
    class PTREE {
        
        public :
        
            PTREE ()
            {
                pt =  (PPTREE)0 ;
            }
            
            PTREE ( const PTREE &ptree )
            {
                pt =  ptree.pt ;
                if ( pt ) 
                    AddRef(pt);
            }
            
            // << LF 09/04/97
            PTREE ( int NodeNumb, int Arity )
            {
                pt =  ::MakeTree(NodeNumb, Arity);
                if ( pt ) 
                    AddRef(pt);
            }
            
            PTREE ( const EString &ch )
            {
                pt =  MakeString(ch.c_str());
                if ( pt ) 
                    AddRef(pt);
            }
            
            // >> LF
            PTREE ( const char *ch )
            {
                pt =  MakeString(ch);
                if ( pt ) 
                    AddRef(pt);
            }
            
            PTREE ( const PPTREE pptree )
            {
                pt =  pptree ;
                if ( pt ) 
                    AddRef(pt);
            }
            
            PTREE ( int addr )
            {
                char    *ptAux = 0 ;
                
                pt =  (PPTREE)(ptAux + addr);
                if ( pt ) 
                    AddRef((PPTREE)pt);
            }
            
            ~PTREE ()
            {
                if ( pt ) 
                    FreeRef(pt);
            }
            
            int NumberTree () const
            {
                return pt ? CacheRead(pt) & NODE_MASK : -100 ;
            }
            
            int NumberTree ( PPTREE param_pt ) const
            {
                return param_pt ? CacheRead(param_pt) & NODE_MASK : -100 ;
            }
            
            void ReplaceTree ( PPTREE tree )
            {
                PPTREE  father = FatherTree(tree);
                int     pos = ::PosTree(tree);
                
                // put pt on new tree
                if ( tree ) 
                    AddRef(tree);
                if ( pt ) 
                    FreeRef(pt);
                pt =  tree ;
                
                // replace in father
                ::ReplaceTree(father, pos, tree);
            }
            
            PTREE AddList ( PTREE elem )
            {
                return ::AddList(pt, elem);
            }
            
            PPTREE AddList ( PPTREE listEntry, PPTREE elem )
            {
                return ::AddList(listEntry, elem);
            }
            
            // << LF
            int TreeArity () const
            {
                return treearity(*this);
            }
            
            void ReplaceTree ( const int n, PPTREE tree )
            {
                ::ReplaceTree(*this, n, tree);
            }
            
            PPTREE ReplaceTree ( PPTREE node, const int n, PPTREE tree )
            {
                return ::ReplaceTree(node, n, tree);
            }
            
            int RankTree () const
            {
                return ::ranktree(*this);
            }
            
            const char *Value () const
            {
                return ::Value(*this);
            }
            
            const char *Value ( PPTREE tree ) const
            {
                return ::Value(tree);
            }
            
            // >> LF
            PPTREE Nextl ()
            {
                if ( NumberTree() == LIST ) {
                    PPTREE  inter = StoreRef(sontree(pt, 1));
                    *this =  (PPTREE)sontree(pt, 2);
                    return inter ;
                } else 
                    return (PPTREE)0 ;
            }
            
            PTREE &operator= ( const PTREE &ptree )
            {
                if ( ptree.pt ) 
                    AddRef(ptree.pt);
                if ( pt ) 
                    FreeRef(pt);
                pt =  ptree.pt ;
                return *this ;
            }
            
            PTREE &operator= ( const PPTREE pptree )
            {
                if ( pptree ) 
                    AddRef(pptree);
                if ( pt ) 
                    FreeRef(pt);
                pt =  pptree ;
                return *this ;
            }
            
            PTREE &operator+= ( PTREE &ptree )
            {
                PPTREE  father = FatherTree(pt);
                int     rank = ranktree(pt);
                
                if ( father ) 
                    ::ReplaceTree(father, rank, ptree.pt);
                return ptree ;
            }
            
            PTREE operator+= ( PPTREE pptree )
            {
                PPTREE  father = FatherTree(pt);
                int     rank = ranktree(pt);
                
                if ( father ) 
                    ::ReplaceTree(father, rank, pptree);
                return PTREE(pptree);
            }
            
            int operator== ( const PTREE &ptree ) const
            {
                return pt == ptree.pt ;
            }
            
            int operator!= ( const PTREE &ptree ) const
            {
                return pt != ptree.pt ;
            }
            
            PPTREE operator^ ( int nb ) const
            {
                return NFatherTree(pt, nb);
            }
            
            PPTREE operator[] ( int nb ) const
            {
                return sontree(pt, nb);
            }
            
            operator PPTREE ( void ) const
            {
                return pt ;
            }
            
            unsigned int Size () const
            {
                return TreeSize(pt);
            }
            
            // EncodeClass : encoding of a class
            // parameters :
            //              tree : the tree to be encoded
            //              string : recipient string
            virtual void    EncodeClass (const PTREE &tree, EString &string) ;
            
            //    operator const char * (void) { return Value(pt);}
            // CoarseEncode : CoarseEncode a tree
            // parameters :
            //              tree : the tree to be encoded
            //              string : recipient string
            virtual void    CoarseEncode (PTREE tree, EString &string) ;
            virtual void    CoarseEncode (PTREE tree, std::vector<EString> &) ;
            
            // CoarseDecode : CoarseDecode a tree
            // parameters :
            //              string : input string
            // return : the tree
            virtual PTREE   CoarseDecode (std::vector<EString> &) ;
            
            virtual PTREE CoarseDecode ( EString &buffer )
            {
                std::vector<EString>    vect ;
                char                    *string = 0 ;
                
                return InternalCoarseDecode(string, buffer, vect);
            }
            
            // virtual PTREE   CoarseDecode (char *&string) ;
            // DecodeClass : Decode a class 
            // parameters :
            //              string : string to be decoded
            // return : the tree
            virtual PTREE   DecodeClass (char *&string) ;
            
            // CleanTree : clean tree before saving
            // parameters : 
            //              tree : tree to be cleaned
            virtual void CleanTree ( const PTREE &tree ) {}
        
        protected :
        
            void    InternalCoarseEncode (PTREE tree, EString &string, std::vector<EString> &) ;
            PTREE   InternalCoarseDecode (char *&string, EString &buffer, std::vector<EString> &) ;
            
            // CoarseEncodeInt : coarse encode an integer
            // parameters :
            //              val : the integer to be encoded
            //              string : where to put it
            static  void CoarseEncodeInt ( int val, EString &string )
            {
                char    *pt ;
                
                if ( val < 128 && val >= 0 ) {
                    char    outInt = (char)val ;
                    outInt |= 0x80 ;
                    string += outInt ;
                } else {
                    string += "0    ";
                    pt     =  (char *)(string.c_str()) + string.length() - 4 ;
                    memcpy(pt, (char *)(&val), 4);
                }
            }
            
            // CoarseDecodeInt : coarse decode an integer
            // parameters :
            //              string : where to look for integer, it is moved forward
            // return : the found integer
            static  int CoarseDecodeInt ( char *&string )
            {
                
                int     result(0);  // the result
                char    header = *string ;
                
                string++ ;
                if ( !(header & 0x80) ) {
                    memcpy((char *)(&result), string, 4);
                    string += 4 ;
                } else {
                    header &= 0x7F ;
                    result =  header ;
                }
                return result ;
            }
        
        private :
        
            PPTREE  pt ;
    };
    
    class TreeClass {
        
        public :
        
            // constructor
            TreeClass () {}
            
            // destructor
            virtual ~TreeClass () {}
            
            // copy constructor
            TreeClass ( const TreeClass & ) {}
            
            // operator = 
            virtual TreeClass &operator= ( const TreeClass & )
            {
                return *this ;
            }
            
            // operator copy 
            virtual TreeClass *Copy ()
            {
                return (TreeClass *)new TreeClass(*this);
            }
            
            // Size 
            virtual unsigned int Size ()
            {
                return 0 ;
            }
            
            // Type 
            virtual int Type ()
            {
                return CLASS_TREE ;
            }
            
            // value
            virtual const char *Value ()
            {
                return "";
            }
            
            // Self : return object
            // return : the object
            TreeClass *Self ()
            {
                return this ;
            }
            
            // DumpTree : for tree generation
            virtual const char *DumpTree ()
            {
                pvString =  EString("MakeString(\"") + Value() + "\")";
                return pvString.c_str();
            }
            
            // Destroy : destroy the class and node
            virtual void Destroy ( PPTREE pptree )
            {
                FreeNodeTree(1, pptree);
                delete this ;
            }
            
            // PutInTree
            virtual PPTREE PutInTree () const
            {
                
                // create a tree with reference
                PPTREE  tree = MakeTree(CLASS_TREE, 1);
                
                CacheWrite((void *)((char *)tree + sizeof(int)), 0); /* arity is 0 to hide class*/ 
                SON_WRITE(tree, 1, this);
                
                // return new tree
                return tree ;
            }
        
        protected :
        
            static EString  pvString ; // for misc display
    };
    
    class TreeRef : public TreeClass {
        
        public :
        
            // void constructor
            TreeRef ()
                : pvPPTREE(0)
            {}
            
            // constructor
            TreeRef ( PPTREE pTree )
                : pvPPTREE(pTree)
            {}
            
            // destructor
            virtual ~TreeRef () {}
            
            // operator copy 
            virtual TreeClass *Copy ()
            {
                return (TreeClass *)new TreeRef(*this);
            }
            
            // Size
            unsigned int Size ()
            {
                return sizeof(PPTREE);
            }
            
            // Type 
            virtual int Type ()
            {
                return REF_TREE ;
            }
            
            // link
            PPTREE Link () const
            {
                return pvPPTREE ;
            }
            
            // value
            virtual const char *Value ()
            {
                return PTREE(Link()).Value();
            }
        
        private :
        
            PPTREE  pvPPTREE ; // ppttree
    };
    
    // apply a method on a class
#   define APPLY_CLASS(tree, type, meth) (NumberTree(tree) == CLASS_TREE? \
                                       		 (((type *) (TreeClass *) SON_READ(PPTREE(tree),1)) -> meth) :\
                                                                            0)
#   define UNCHECKED_APPLY_CLASS(tree, type, meth) (((type *) (TreeClass *) SON_READ(PPTREE(tree),1)) -> meth) 
#   define ALLOCATE_CLASS(meth) (MakeTreeClass( * (TreeClass *) new meth))
#endif
