language cplus;

#include <Python.h>
#include "deccplus.h"

static DecompCplus  decompObj ;

#pragma nopretty
PyTypeObject * pPythonTreeType;
typedef struct {
PyObject_HEAD
PPTREE pTree;
} PythonTree;
#pragma pretty

static PyObject *Tree_getattr (PyObject *obj, char *name) ;

static  PyObject *PythonNewTree ( PyObject *, PyObject *args )
{
    PythonTree  *pTree ;
    
    if ( !PyArg_ParseTuple(args, ":new_Tree") ) 
        return NULL ;
    pTree        =  PyObject_New(PythonTree, pPythonTreeType);
    pTree->pTree =  0 ;
    return (PyObject *)pTree ;
}

static  void PythonDeleteTree ( PyObject *self )
{
    FreeRef(((PythonTree *)self)->pTree);
    PyObject_Del(self);
}

#pragma nopretty
static PyTypeObject PythonTreeType
= { PyObject_HEAD_INIT(NULL) 0, "Tree", sizeof(PythonTree), 0, PythonDeleteTree, 0 /* print */ , Tree_getattr /* getattr*/ , 0 /* setattr */ 
, 0 /* compare */ , 0 /* repr */ , 0 /* as_number */ , 0 /* as_sequence */ , 0 /* as_mapping */ , 0 /* hash */ };
#pragma pretty

static  PyObject *PythonDumpTree ( PythonTree *self, PyObject *args )
{
    int index ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "") ) {
        return NULL ;
    }
    DumpTree(((PythonTree *)self)->pTree);
    NewLine();
    Py_INCREF(Py_None);
    return Py_None ;
}

static  PyObject *PythonPretty ( PythonTree *self, PyObject *args )
{
    int index ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "") ) {
        return NULL ;
    }
    decompObj.ChopTree(((PythonTree *)self)->pTree);
    NewLine();
    Py_INCREF(Py_None);
    return Py_None ;
}

static  PTREE GetTree ( char *fileName )
{
    
    // parse tree
    PTREE   tree = cplus().ReadFile(fileName);
    
    SwitchLang("cplus");
    
    // suppress none without comments
    foreach (<NONE>,tree,{
        PTREE   list = for_elem ;
        PTREE   nil ;
        if ( !IsComm(list, POST) && !IsComm(list, PRE) ) {
            list     =  list ^ ;
            for_elem =  list ^ ;
            list     += nil ;
        }
    })
    return tree ;
}

static  PyObject *PythonParse ( PythonTree *self, PyObject *args )
{
    char    *fileName ;
    int     ret ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "s", &fileName) ) {
        return NULL ;
    }
    
    // get file
    PTREE   parsed = GetTree(fileName);
    
    // return tree
    if ( parsed == PTREE(0) || parsed == PTREE( -1) ) 
        return NULL ;
    else {
        
        // pin down tree
        AddRef(parsed);
        FreeRef(((PythonTree *)self)->pTree);
        ((PythonTree *)self)->pTree =  (PPTREE)parsed ;
        
        // return 
        Py_INCREF(Py_None);
        return Py_None ;
    }
}

static  PyObject *PythonSonTree ( PythonTree *self, PyObject *args )
{
    int indexSon ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "i", &indexSon) ) {
        return NULL ;
    }
    
    // get on son
    PPTREE  newTree = SonTree(self->pTree, indexSon);
    
    AddRef(newTree);
    FreeRef(self->pTree);
    self->pTree =  newTree ;
    
    // return 
    Py_INCREF(Py_None);
    return Py_None ;
}

static  PyObject *PythonNFatherTree ( PythonTree *self, PyObject *args )
{
    int level ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "i", &level) ) {
        return NULL ;
    }
    
    // get on son
    PPTREE  newTree = NFatherTree(self->pTree, level);
    
    AddRef(newTree);
    FreeRef(self->pTree);
    self->pTree =  newTree ;
    
    // return 
    Py_INCREF(Py_None);
    return Py_None ;
}

static  PyObject *PythonSFatherTree ( PythonTree *self, PyObject *args )
{
    int level ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "i", &level) ) {
        return NULL ;
    }
    
    // get on son
    PPTREE  newTree = NFatherTree(self->pTree, level);
    
    AddRef(newTree);
    FreeRef(self->pTree);
    self->pTree =  newTree ;
    
    // return 
    Py_INCREF(Py_None);
    return Py_None ;
}

static  PyObject *PythonFatherTree ( PythonTree *self, PyObject *args )
{
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "") ) {
        return NULL ;
    }
    
    // get on son
    PPTREE  newTree = FatherTree(self->pTree);
    
    AddRef(newTree);
    FreeRef(self->pTree);
    self->pTree =  newTree ;
    
    // return 
    Py_INCREF(Py_None);
    return Py_None ;
}

static  PyObject *PythonClone ( PythonTree *self, PyObject *args )
{
    PythonTree  *pSrcTree ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "O", &pSrcTree) ) {
        return NULL ;
    }
    AddRef(pSrcTree->pTree);
    FreeRef(self->pTree);
    self->pTree =  pSrcTree->pTree ;
    
    // return 
    Py_INCREF(Py_None);
    return Py_None ;
}

static  PyObject *PythonTreeArity ( PythonTree *self, PyObject *args )
{
    int indexSon ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "") ) {
        return NULL ;
    }
    
    // return arity
    return Py_BuildValue("i", treearity(self->pTree));
}

static  PyObject *PythonNumberTree ( PythonTree *self, PyObject *args )
{
    int indexSon ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "") ) {
        return NULL ;
    }
    
    // return arity
    return Py_BuildValue("i", NumberTree(self->pTree));
}

static  PyObject *PythonRankTree ( PythonTree *self, PyObject *args )
{
    int indexSon ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "") ) {
        return NULL ;
    }
    
    // return arity
    return Py_BuildValue("i", ranktree(self->pTree));
}

static  PyObject *PythonListLength ( PythonTree *self, PyObject *args )
{
    int indexSon ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "") ) {
        return NULL ;
    }
    
    // return arity
    return Py_BuildValue("i", ListLength(self->pTree));
}

static  PyObject *PythonValue ( PythonTree *self, PyObject *args )
{
    int indexSon ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "") ) {
        return NULL ;
    }
    
    // return arity
    return Py_BuildValue("s", Value(self->pTree));
}

static  PyObject *PythonNameConst ( PythonTree *self, PyObject *args )
{
    int i ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "i", &i) ) {
        return NULL ;
    }
    
    // return arity
    return Py_BuildValue("s", NameConst(i));
}

static  PyObject *PythonFindConst ( PythonTree *self, PyObject *args )
{
    char    *constName ;
    
    // analyze arguments
    if ( !PyArg_ParseTuple(args, "s", &constName) ) {
        return NULL ;
    }
    
    // return arity
    return Py_BuildValue("i", FindConst(constName));
}

#pragma nopretty
static PyMethodDef Tree_methods[] = {
{ "new_Tree",(PyCFunction) PythonNewTree,METH_VARARGS,"Create a new Tree."},
{ "Load",(PyCFunction) PythonParse,METH_VARARGS,"Parse a tree."},
{ "DumpTree",(PyCFunction) PythonDumpTree,METH_VARARGS,"Dump a Tree."},
{ "SonTree",(PyCFunction) PythonSonTree,METH_VARARGS,"Get on nth son."},
{ "FatherTree",(PyCFunction) PythonFatherTree,METH_VARARGS,"Get on Father."},
{ "NFatherTree",(PyCFunction) PythonNFatherTree,METH_VARARGS,"Get on nth Father."},
{ "SFatherTree",(PyCFunction) PythonSFatherTree,METH_VARARGS,"Search a Father with a node."},
{ "Arity",(PyCFunction) PythonTreeArity,METH_VARARGS,"Number of sons."},
{ "NumberTree",(PyCFunction) PythonNumberTree,METH_VARARGS,"Node number."},
{ "Value",(PyCFunction) PythonValue,METH_VARARGS,"Get Value of left leaf."},
{ "Clone",(PyCFunction) PythonClone,METH_VARARGS,"Get a reference on another tree."},
{ "RankTree",(PyCFunction) PythonRankTree,METH_VARARGS,"Get rank of this tree inside father."},
{ "ListLength",(PyCFunction) PythonListLength,METH_VARARGS,"Get length of list."},
{ "NameConst",(PyCFunction) PythonNameConst,METH_VARARGS,"Get string for node number given as parameter."},
{ "FindConst",(PyCFunction) PythonFindConst,METH_VARARGS,"Find number of node having this node name."},
{ "Pretty",(PyCFunction) PythonPretty,METH_VARARGS,"Pretty print tree."},
{ NULL,NULL,0,NULL}
};
extern "C" {
DL_EXPORT(void)  initTree(void) 
{
PythonTreeType.ob_type=&PyType_Type;
Py_InitModule("Tree",Tree_methods);
}
}
#pragma pretty

static  PyObject *Tree_getattr ( PyObject *obj, char *name )
{
    return Py_FindMethod(Tree_methods, obj, name);
}

class ErltoolsInitializer {
    
    public :
    
        ErltoolsInitializer ()
        {
            MetaInit("PythonTree");
            pPythonTreeType       =  &PythonTreeType ;
            dumpCoord             =  0 ;
            DecompCplus::ptDecomp =  &decompObj ;
            MetaInit((char *)0);
            cplus().AsLanguage();
            ReadIncludeS("c.set", 1);
        }
} erltoolsInitializer ;


