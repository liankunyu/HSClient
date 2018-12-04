#pragma once
#include "afxwin.h"


// xingxuanshezhi 对话框

class xingxuanshezhi : public CDialogEx
{
	DECLARE_DYNAMIC(xingxuanshezhi)

public:
	xingxuanshezhi(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~xingxuanshezhi();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_XINGXUANSHEZHI_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	double m_double1;
	double m_double2;
	double m_double3;
	double m_double4;
	virtual BOOL OnInitDialog();
	CComboBox m_combox1;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void ReSize();
	POINT old;
	CFont m_editFont;
	afx_msg void OnBnClickedCancel();
};
