// wdispatch.h : main header file for the WDISPATCH application
//
#if !defined(AFX_WDISPATCH_H__DD193AA7_043D_11D2_A161_444553540000__INCLUDED_)
#define AFX_WDISPATCH_H__DD193AA7_043D_11D2_A161_444553540000__INCLUDED_ 
#if _MSC_VER >= 1000
#pragma once
#endif
#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif
#include "resource.h" // main symbols

/////////////////////////////////////////////////////////////////////////////
// CWdispApp:
// See wdispatch.cpp for the implementation of this class
//

class CWdispApp : public CWinApp {
    
    public :
    
        CWdispApp () ;
    
    // Overrides
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CWdispApp)
    
    public :
    
        virtual BOOL    InitInstance () ;
        virtual BOOL    OnIdle (LONG lCount) ;
        
        //}}AFX_VIRTUAL
        // Implementation
        //{{AFX_MSG(CWdispApp)
        // NOTE - the ClassWizard will add and remove member functions here.
        //    DO NOT EDIT what you see in these blocks of generated code !
        //}}AFX_MSG
        DECLARE_MESSAGE_MAP()
}; /////////////////////////////////////////////////////////////////////////////
  //{{AFX_INSERT_LOCATION}}
  // Microsoft Developer Studio will insert additional declarations immediately before the previous line.
#endif // !defined(AFX_WDISPATCH_H__DD193AA7_043D_11D2_A161_444553540000__INCLUDED_)

