#pragma once
#include "afxwin.h"


// tiaoshi 对话框

class tiaoshi : public CDialogEx
{
	DECLARE_DYNAMIC(tiaoshi)

public:
	tiaoshi(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~tiaoshi();

// 对话框数据
	enum { IDD = IDD_TIAOSHIZHUANYONG_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton57();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton56();
	afx_msg void ReSize();
	POINT old;
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton55();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton61();
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButton135();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedCancel2();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
