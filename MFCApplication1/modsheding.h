#pragma once
#include "afxwin.h"


// modsheding 对话框

class modsheding : public CDialogEx
{
	DECLARE_DYNAMIC(modsheding)

public:
	modsheding(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~modsheding();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOD_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	POINT old;
	void ReSize();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton39();
	int flag_switch;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton55();
	afx_msg void OnBnClickedButton58();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton49();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton50();
	afx_msg void OnBnClickedButton56();
	afx_msg void OnBnClickedButton59();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton61();
	afx_msg void OnBnClickedButton41();
	afx_msg void OnBnClickedButton45();
	afx_msg void OnBnClickedButton84();
	afx_msg void OnBnClickedButton121();
	afx_msg void OnBnClickedButton60();
	afx_msg void OnBnClickedButton62();
	afx_msg void OnBnClickedButton4();
	CButton m_button1;
	HBITMAP hBitmap;
	CButton m_button2;
	CButton m_button3;
	CButton m_button4;
	CButton m_button5;
	CButton m_button6;
	CButton m_button7;
	CButton m_button8;
	CButton m_button9;
	CButton m_button10;
	CButton m_button11;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton57();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton43();
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
