#pragma once
#include "afxwin.h"


// caitushezhi 对话框

class caitushezhi : public CDialogEx
{
	DECLARE_DYNAMIC(caitushezhi)

public:
	caitushezhi(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~caitushezhi();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CAITUSHEZHI_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	double m_double1;
	double m_double2;
	double m_double3;
	double m_double4;
	double m_double5;
	double m_double6;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void ReSize();
	POINT old;
	CFont m_editFont;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton11();
	CComboBox m_combox1;
	int flag_num;
	afx_msg void OnBnClickedCancel();
	double m_double7;
	double m_double8;
	double m_double9;
	double m_double10;
	double m_double11;
	double m_double12;
	double m_double13;
	double m_double14;
	double m_double15;
	double m_double16;
	double m_double17;
	double m_double18;
	double m_double19;
	double m_double20;
	double m_double21;
	double m_double22;
	double m_double23;
	double m_double24;
	double m_double25;
};
