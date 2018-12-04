#pragma once
#include "afxbutton.h"


// rlingmindu 对话框

class rlingmindu : public CDialogEx
{
	DECLARE_DYNAMIC(rlingmindu)

public:
	rlingmindu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~rlingmindu();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_R_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton34();
	double m_double_1_edit;
	double m_double_2_edit;
	double m_double_3_edit;
	double m_double_4_edit;
	double m_double_5_edit;
	double m_double_6_edit;
	double m_double_7_edit;
	double m_double_8_edit;
	afx_msg void OnBnClickedButton36();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton42();
	afx_msg void OnBnClickedButton44();
	afx_msg void OnBnClickedButton46();
	afx_msg void OnBnClickedButton48();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton39();
	afx_msg void OnBnClickedButton41();
	afx_msg void OnBnClickedButton43();
	afx_msg void OnBnClickedButton45();
	afx_msg void OnBnClickedButton47();
	afx_msg void OnBnClickedLiuliangButton();
	afx_msg void OnBnClickedGminButton();
	afx_msg void OnBnClickedBminButton();
	afx_msg void OnBnClickedHunminButton();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void ReSize();
	POINT old;
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
//	afx_msg void OnBnClickedKaishidaButton();
	afx_msg void OnBnClickedCancel();
	double m_double_9_edit;
	double m_double_10_edit;
	double m_double_11_edit;
	double m_double_12_edit;
	afx_msg void OnBnClickedButton161();
	afx_msg void OnBnClickedButton160();
	afx_msg void OnBnClickedButton164();
	afx_msg void OnBnClickedButton162();
	afx_msg void OnBnClickedButton194();
	afx_msg void OnBnClickedButton185();
	afx_msg void OnBnClickedButton188();
	afx_msg void OnBnClickedButton187();
	afx_msg void OnBnClickedRfenButton();
	afx_msg void OnBnClickedButton166();
	afx_msg void OnBnClickedButton151();
	afx_msg void OnBnClickedButton152();
	afx_msg void OnBnClickedButton153();
	afx_msg void OnBnClickedKaishida();
	afx_msg void OnBnClickedTingzhida();
	CMFCButton m_kaishi;
	CMFCButton m_tingzhi;
};
