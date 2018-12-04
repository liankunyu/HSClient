#pragma once
#include "afxwin.h"


// fuzhu 对话框

class fuzhu : public CDialogEx
{
	DECLARE_DYNAMIC(fuzhu)

public:
	fuzhu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~fuzhu();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FUZHU_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	POINT old;
	afx_msg void ReSize();
	double m_double1;
	double m_double2;
	double m_double3;
	double m_double4;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton5();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox m_comBo;
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
