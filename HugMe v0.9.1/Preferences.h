#if !defined(AFX_PREFERENCES_H__249F5F65_D95E_4F53_81D5_17C8ABB098C5__INCLUDED_)
#define AFX_PREFERENCES_H__249F5F65_D95E_4F53_81D5_17C8ABB098C5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Preferences.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPreferences dialog

class CPreferences : public CDialog
{
// Construction
public:
	CPreferences(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CPreferences)
	enum { IDD = IDD_PREFERENCES };
		CString m_strAddress;
		CString m_userName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPreferences)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CPreferences)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PREFERENCES_H__249F5F65_D95E_4F53_81D5_17C8ABB098C5__INCLUDED_)
