// wdispatchView.h : interface of the CWdispatchView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_WDISPATCHVIEW_H__C0DE10EC_E385_11D2_9B5F_00A024AB3E87__INCLUDED_)
#define AFX_WDISPATCHVIEW_H__C0DE10EC_E385_11D2_9B5F_00A024AB3E87__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CWdispatchView : public CView
{
protected: // create from serialization only
	CWdispatchView();
	DECLARE_DYNCREATE(CWdispatchView)

// Attributes
public:
	CWdispatchDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWdispatchView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CWdispatchView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CWdispatchView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in wdispatchView.cpp
inline CWdispatchDoc* CWdispatchView::GetDocument()
   { return (CWdispatchDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WDISPATCHVIEW_H__C0DE10EC_E385_11D2_9B5F_00A024AB3E87__INCLUDED_)
