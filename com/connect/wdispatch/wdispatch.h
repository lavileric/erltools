// wdispatch.h : main header file for the WDISPATCH application
//
#if !defined(AFX_WDISPATCH_H__C0DE10E4_E385_11D2_9B5F_00A024AB3E87__INCLUDED_)
#define AFX_WDISPATCH_H__C0DE10E4_E385_11D2_9B5F_00A024AB3E87__INCLUDED_ 
#if _MSC_VER > 1000
#pragma once
#endif
#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif
#include "resource.h" // main symbols

/////////////////////////////////////////////////////////////////////////////
// CWdispatchApp:
// See wdispatch.cpp for the implementation of this class
//

class CWdispatchApp : public CWinApp {
    
    public :
    
        CWdispatchApp () ;
    
    // Overrides
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CWdispatchApp)
    
    public :
    
        virtual BOOL    InitInstance () ;
        virtual BOOL    OnIdle (LONG lCount) ;
        //}}AFX_VIRTUAL
        // Implementation
        //{{AFX_MSG(CWdispatchApp)
        afx_msg void    OnAppAbout () ;
        
        // NOTE - the ClassWizard will add and remove member functions here.
        //    DO NOT EDIT what you see in these blocks of generated code !
        //}}AFX_MSG
        DECLARE_MESSAGE_MAP()
}; /////////////////////////////////////////////////////////////////////////////
  //{{AFX_INSERT_LOCATION}}
  // Microsoft Visual C++ will insert additional declarations immediately before the previous line.
#endif // !defined(AFX_WDISPATCH_H__C0DE10E4_E385_11D2_9B5F_00A024AB3E87__INCLUDED_)

