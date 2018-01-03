// wdispatchView.cpp : implementation of the CWdispatchView class
//

#include "stdafx.h"
#include "wdispatch.h"

#include "wdispatchDoc.h"
#include "wdispatchView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWdispatchView

IMPLEMENT_DYNCREATE(CWdispatchView, CView)

BEGIN_MESSAGE_MAP(CWdispatchView, CView)
	//{{AFX_MSG_MAP(CWdispatchView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWdispatchView construction/destruction

CWdispatchView::CWdispatchView()
{
	// TODO: add construction code here

}

CWdispatchView::~CWdispatchView()
{
}

BOOL CWdispatchView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CWdispatchView drawing

void CWdispatchView::OnDraw(CDC* pDC)
{
	CWdispatchDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CWdispatchView diagnostics

#ifdef _DEBUG
void CWdispatchView::AssertValid() const
{
	CView::AssertValid();
}

void CWdispatchView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWdispatchDoc* CWdispatchView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWdispatchDoc)));
	return (CWdispatchDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CWdispatchView message handlers
