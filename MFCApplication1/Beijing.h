#pragma once
#include "afxbutton.h"


// Beijing 对话框

class Beijing : public CDialogEx
{
	DECLARE_DYNAMIC(Beijing)

public:
	Beijing(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Beijing();

// 对话框数据
	enum { IDD = IDD_BEIJING_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_double1_edit18;
	double m_double2_edit23;
	double m_double_edit30;
	double m_double3_edit32;
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton14();
	afx_msg void ReSize();
	POINT old;
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton64();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton50();
	afx_msg void OnBnClickedButton59();
	afx_msg void OnBnClickedButton83();
	afx_msg void OnBnClickedKaishida();
	afx_msg void OnBnClickedTingzhida();
	CMFCButton m_kaishi;
	CMFCButton m_tingzhi;
};
