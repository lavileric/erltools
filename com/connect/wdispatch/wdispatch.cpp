// wdispatch.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "wdispatch.h"

#include "MainFrm.h"
#include "wdispatchDoc.h"
#include "wdispatchView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWdispatchApp

BEGIN_MESSAGE_MAP(CWdispatchApp, CWinApp)
	//{{AFX_MSG_MAP(CWdispatchApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWdispatchApp construction

CWdispatchApp::CWdispatchApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CWdispatchApp object

CWdispatchApp theApp;

extern int main2 ( int argc , char ** argv);
extern void DispatcherStep();

/////////////////////////////////////////////////////////////////////////////
// CWdispatchApp initialization

BOOL CWdispatchApp::InitInstance()
{
	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

	// Change the registry key under which our settings are stored.
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization.
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	LoadStdProfileSettings(0);  // Load standard INI file options (including MRU)

	// Register the application's document templates.  Document templates
	//  serve as the connection between documents, frame windows and views.

	CSingleDocTemplate* pDocTemplate;
	pDocTemplate = new CSingleDocTemplate(
		IDR_MAINFRAME,
		RUNTIME_CLASS(CWdispatchDoc),
		RUNTIME_CLASS(CMainFrame),       // main SDI frame window
		RUNTIME_CLASS(CWdispatchView));
	AddDocTemplate(pDocTemplate);

	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
//	ParseCommandLine(cmdInfo);

	WINDOWPLACEMENT lpwndpl;

	this->m_nCmdShow=0;
	// Dispatch commands specified on the command line
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;
/*
	if (m_pMainWnd->GetWindowPlacement( &lpwndpl ))
		int i=1;
	lpwndpl.flags = SW_SHOWMINIMIZED;


	if (m_pMainWnd->SetWindowPlacement( &lpwndpl ))
		int i=1;
*/
	
	// The one and only window has been initialized, so show and update it.
	m_pMainWnd->ShowWindow(SW_HIDE);
	m_pMainWnd->UpdateWindow();

	char * param [2];
	*param = "";
	*(param+1) = m_lpCmdLine;
	main2(2,param);

	return TRUE;
}


/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
		// No message handlers
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

// App command to run the dialog
void CWdispatchApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

/////////////////////////////////////////////////////////////////////////////
// CWdispatchApp message handlers

BOOL CWdispatchApp::OnIdle(LONG lCount)
{
  
   // In this example, as in most applications, you should let the
   // base class CWinApp::OnIdle complete its processing before you
   // attempt any additional idle loop processing.
   if (::IsWindow(m_pMainWnd->m_hWnd)&& CWinApp::OnIdle(lCount))
      return TRUE;  
   
   if (0 && !::IsWindow(m_pMainWnd->m_hWnd)) 
	  return FALSE;

   // The base class CWinApp::OnIdle reserves the lCount values 0 
   // and 1 for the framework's own idle processing.   If you wish to
   // share idle processing time at a peer level with the framework,
   // then replace the above if-statement with a straight call to
   // CWinApp::OnIdle; and then add a case statement for lCount value
   // 0 and/or 1. Study the base class implementation first to 
   // understand how your idle loop tasks will compete with the 
   // framework's idle loop processing.

   DispatcherStep();

   return TRUE;
}
