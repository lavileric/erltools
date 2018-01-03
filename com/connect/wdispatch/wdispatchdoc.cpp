// wdispatchDoc.cpp : implementation of the CWdispatchDoc class
//

#include "stdafx.h"
#include "wdispatch.h"

#include "wdispatchDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWdispatchDoc

IMPLEMENT_DYNCREATE(CWdispatchDoc, CDocument)

BEGIN_MESSAGE_MAP(CWdispatchDoc, CDocument)
	//{{AFX_MSG_MAP(CWdispatchDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWdispatchDoc construction/destruction

CWdispatchDoc::CWdispatchDoc()
{
	// TODO: add one-time construction code here

}

CWdispatchDoc::~CWdispatchDoc()
{
}

BOOL CWdispatchDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CWdispatchDoc serialization

void CWdispatchDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CWdispatchDoc diagnostics

#ifdef _DEBUG
void CWdispatchDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CWdispatchDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CWdispatchDoc commands
