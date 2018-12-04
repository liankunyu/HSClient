#pragma once
#include "afxbutton.h"
#include "afxwin.h"


// Blingmindu 对话框

class Blingmindu : public CDialogEx
{
	DECLARE_DYNAMIC(Blingmindu)

public:
	Blingmindu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Blingmindu();

// 对话框数据
	enum { IDD = IDD_B_DIALOG };

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
	afx_msg void OnBnClickedLingminduButton();
	afx_msg void OnBnClickedMianjiButton();
	afx_msg void OnBnClickedYanseButton();
	afx_msg void OnBnClickedFamenButton();
	afx_msg void OnBnClickedQinghuiButton();
	afx_msg void OnBnClickedMoshiButton();
//	afx_msg void OnBnClickedRminButton();
//	afx_msg void OnBnClickedGminButton();
//	afx_msg void OnBnClickedHunminButton();
//	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	afx_msg void ReSize();
	POINT old;
//	afx_msg void OnBnClickedKaishidaButton();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnBnClickedCancel();
	//CString m_static1;
	//CString m_static2;
	//CString m_static3;
	//CString m_static4;
	//CString m_static5;
	//CString m_static6;
	//CString m_static7;
	//CString m_static8;
	//CString m_static9;
	//CString m_static10;
	//CString m_static11;
	//CString m_static12;
	//CString m_static13;
	//CString m_static14;
	//CString m_static15;
//	afx_msg void OnBnClickedTingzhidaButton();
	//CString m_static16;
	double m_double_9_edit;
	double m_double_10_edit;
	double m_double_11_edit;
	double m_double_12_edit;
	afx_msg void OnBnClickedButton161();
	afx_msg void OnBnClickedButton167();
	afx_msg void OnBnClickedButton164();
	afx_msg void OnBnClickedButton168();
	afx_msg void OnBnClickedButton165();
	afx_msg void OnBnClickedButton169();
	afx_msg void OnBnClickedButton166();
	afx_msg void OnBnClickedButton170();
	afx_msg void OnBnClickedBfenButton();
	afx_msg void OnBnClickedKaishida();
	CMFCButton m_kaishi;
	afx_msg void OnBnClickedTingzhida();
	CMFCButton m_tingzhi;
	CEdit m_edit1;
};
