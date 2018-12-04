#pragma once
#include "afxbutton.h"


// quyuer 对话框

class quyuer : public CDialogEx
{
	DECLARE_DYNAMIC(quyuer)

public:
	quyuer(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~quyuer();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_QUYUER_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_double1;
	double m_double2;
	double m_double3;
	double m_double4;
	double m_double5;
	double m_double6;
	double m_double7;
	double m_double8;
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton55();
	afx_msg void OnBnClickedButton56();
	afx_msg void OnBnClickedButton58();
	afx_msg void OnBnClickedButton59();
	afx_msg void OnBnClickedButton60();
	afx_msg void OnBnClickedButton61();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton36();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton50();
	afx_msg void OnBnClickedButton42();
	afx_msg void OnBnClickedButton44();
	afx_msg void OnBnClickedButton46();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void ReSize();
	POINT old;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton104();
	double m_double9;
	double m_double10;
	double m_double11;
	double m_double12;
	afx_msg void OnBnClickedButton66();
	afx_msg void OnBnClickedButton67();
	afx_msg void OnBnClickedButton69();
	afx_msg void OnBnClickedButton70();
	afx_msg void OnBnClickedButton72();
	afx_msg void OnBnClickedButton73();
	afx_msg void OnBnClickedButton75();
	afx_msg void OnBnClickedRfenButton();
	afx_msg void OnBnClickedQuerfenButton();
	afx_msg void OnBnClickedButton62();
	afx_msg void OnBnClickedButton63();
	afx_msg void OnBnClickedButton76();
	afx_msg void OnBnClickedKaishida();
	afx_msg void OnBnClickedTingzhida();
	CMFCButton m_kaishi;
	CMFCButton m_tingzhi;
};
