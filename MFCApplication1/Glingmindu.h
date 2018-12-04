#pragma once
#include "resource.h"
#include "afxbutton.h"

// Glingmindu 对话框

class Glingmindu : public CDialogEx
{
	DECLARE_DYNAMIC(Glingmindu)

public:
	Glingmindu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Glingmindu();

// 对话框数据
	enum { IDD = IDD_G_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_double_1_edit;
	double m_double_2_edit;
	double m_double_3_edit;
	double m_double_4_edit;
	double m_double_5_edit;
	double m_double_6_edit;
	double m_double_7_edit;
	double m_double_8_edit;
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton36();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton39();
	afx_msg void OnBnClickedButton42();
	afx_msg void OnBnClickedButton44();
	afx_msg void OnBnClickedButton46();
	afx_msg void OnBnClickedButton48();
	afx_msg void OnBnClickedButton41();
	afx_msg void OnBnClickedButton43();
	afx_msg void OnBnClickedButton45();
	afx_msg void OnBnClickedButton47();
//	afx_msg void OnBnClickedRminButton();
//	afx_msg void OnBnClickedBminButton();
//	afx_msg void OnBnClickedHunminButton();
	afx_msg void OnBnClickedMianjiButton();
	afx_msg void OnBnClickedYanseButton();
	afx_msg void OnBnClickedFamenButton();
	afx_msg void OnBnClickedQinghuiButton();
	afx_msg void OnBnClickedMoshiButton();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void ReSize();
	POINT old;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
//	afx_msg void OnBnClickedKaishidaButton();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton161();
	double m_double_9_edit;
	double m_double_10_edit;
	double m_double_11_edit;
	double m_double_12_edit;
	afx_msg void OnBnClickedButton160();
	afx_msg void OnBnClickedButton164();
	afx_msg void OnBnClickedButton162();
	afx_msg void OnBnClickedButton152();
	afx_msg void OnBnClickedButton151();
	afx_msg void OnBnClickedButton153();
	afx_msg void OnBnClickedButton166();
	afx_msg void OnBnClickedGfenButton();
	afx_msg void OnBnClickedKaishida();
	afx_msg void OnBnClickedTingzhida();
	CMFCButton m_kaishi;
	CMFCButton m_tingzhi;
};
