
// SizeKoreaDlg.h : header file
//

#pragma once
#include "./include/GL/glew.h"
#include "./include/GL/wglew.h"
#include "./include/GL/glut.h"
#include "./include/glm/glm.hpp"

#define GLM_ENABLE_EXPERIMENTAL
#include "./include/glm/gtx/transform.hpp"
#include "./include/glm/gtc/type_ptr.hpp"
#include "./include/glm/gtc/matrix_transform.hpp"

using namespace glm;

#pragma comment(lib, "OpenGL32.lib")
#pragma comment(lib, "./lib/glew32.lib")



// CSizeKoreaDlg dialog
class CSizeKoreaDlg : public CDialogEx
{
// Construction
public:
	CSizeKoreaDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SIZEKOREA_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic paintfield;
	afx_msg void OnDestroy();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
