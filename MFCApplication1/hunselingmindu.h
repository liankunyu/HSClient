#pragma once
#include "afxwin.h"
#include "afxbutton.h"


// hunselingmindu 对话框

class hunselingmindu : public CDialogEx
{
	DECLARE_DYNAMIC(hunselingmindu)

public:
	hunselingmindu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~hunselingmindu();

// 对话框数据
	enum { IDD = IDD_HUNSE_DIALOG };

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
	double m_double_9_edit;
	double m_double_10_edit;
	double m_double_11_edit;
	double m_double_12_edit;
	afx_msg void OnBnClickedButton34();
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
	afx_msg void OnBnClickedCancel();
//	afx_msg void OnBnClickedRminButton();
//	afx_msg void OnBnClickedGminButton();
//	afx_msg void OnBnClickedBminButton();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void ReSize();
	POINT old;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox m_combox1;
	afx_msg void OnCbnSelchangeCombo2();
	CComboBox m_combox2;
	afx_msg void OnBnClickedButton61();
	afx_msg void OnBnClickedButton60();
	afx_msg void OnBnClickedButton64();
	afx_msg void OnBnClickedButton62();
	afx_msg void OnBnClickedButton52();
	afx_msg void OnBnClickedButton51();
	afx_msg void OnBnClickedButton53();
	afx_msg void OnBnClickedButton66();
	afx_msg void OnBnClickedHunfenButton();
	afx_msg void OnBnClickedKaishida();
	afx_msg void OnBnClickedTingzhida();
	CMFCButton m_kaishi;
	CMFCButton m_tingzhi;
};
