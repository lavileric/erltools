// wdispatchDoc.h : interface of the CWdispatchDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_WDISPATCHDOC_H__C0DE10EA_E385_11D2_9B5F_00A024AB3E87__INCLUDED_)
#define AFX_WDISPATCHDOC_H__C0DE10EA_E385_11D2_9B5F_00A024AB3E87__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CWdispatchDoc : public CDocument
{
protected: // create from serialization only
	CWdispatchDoc();
	DECLARE_DYNCREATE(CWdispatchDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWdispatchDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CWdispatchDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CWdispatchDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WDISPATCHDOC_H__C0DE10EA_E385_11D2_9B5F_00A024AB3E87__INCLUDED_)
