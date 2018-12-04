#pragma once
#include "MyPublicData.h"
#include "afxwin.h"

// Famenceshi 对话框

class Famenceshi : public CDialogEx
{
	DECLARE_DYNAMIC(Famenceshi)

public:
	Famenceshi(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Famenceshi();

// 对话框数据
	enum { IDD = IDD_FAMENCESHI_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_double1;
	double m_double2;
	double m_double3;
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton55();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton6();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	afx_msg void ReSize();
	POINT old;
	double m_double4;
	double m_double5;
	double m_double6;
	afx_msg void OnBnClickedButton59();
	afx_msg void OnBnClickedButton49();
	afx_msg void OnBnClickedButton60();
	afx_msg void OnBnClickedButton41();
	afx_msg void OnBnClickedButton61();
	afx_msg void OnBnClickedButton120();
	CComboBox m_combox1;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton56();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton17();
	int xiangjixuanze;
	int flag_num;
	afx_msg void OnBnClickedCancel();
	void ShutDown(double dao,double kong);
//	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButton62();
	afx_msg void OnBnClickedButton128();
	double m_double7;
};
