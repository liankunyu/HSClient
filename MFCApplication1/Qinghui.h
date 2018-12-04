#pragma once


// Qinghui 对话框

class Qinghui : public CDialogEx
{
	DECLARE_DYNAMIC(Qinghui)

public:
	Qinghui(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Qinghui();

// 对话框数据
	enum { IDD = IDD_QINGHUI_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_double1;
	double m_double2;
	double m_double3;
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton55();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton6();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void ReSize();
	POINT old;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedCancel();
};
