// wdispatchDlg.h : header file
//
#if !defined(AFX_WDISPATCHDLG_H__DD193AA9_043D_11D2_A161_444553540000__INCLUDED_)
#define AFX_WDISPATCHDLG_H__DD193AA9_043D_11D2_A161_444553540000__INCLUDED_ 
#if _MSC_VER >= 1000
#pragma once
#endif

/////////////////////////////////////////////////////////////////////////////
// CWdispatchDlg dialog

class CWdispatchDlg : public CDialog {
    
    // Construction
    
    public :
    
        CWdispatchDlg (CWnd *pParent = NULL) ; // standard constructor
        
        // Dialog Data
        //{{AFX_DATA(CWdispatchDlg)
        enum { IDD = IDD_WDISPATCH_DIALOG };
    
    // NOTE: the ClassWizard will add data members here
    //}}AFX_DATA
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CWdispatchDlg)
    
    protected :
    
        virtual void    DoDataExchange (CDataExchange *pDX) ; // DDX/DDV support
    //}}AFX_VIRTUAL
    // Implementation
    
    protected :
    
        HICON           m_hIcon ;
        
        // Generated message map functions
        //{{AFX_MSG(CWdispatchDlg)
        virtual BOOL    OnInitDialog () ;
        afx_msg void    OnPaint () ;
        afx_msg HCURSOR OnQueryDragIcon () ;
        
        //}}AFX_MSG
        DECLARE_MESSAGE_MAP()
}; //{{AFX_INSERT_LOCATION}}
  // Microsoft Developer Studio will insert additional declarations immediately before the previous line.
#endif // !defined(AFX_WDISPATCHDLG_H__DD193AA9_043D_11D2_A161_444553540000__INCLUDED_)

