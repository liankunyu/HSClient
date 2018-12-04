#pragma once
#include "afxbutton.h"


// huidu1 对话框

class huidu1 : public CDialogEx
{
	DECLARE_DYNAMIC(huidu1)

public:
	huidu1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~huidu1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HUIDU1_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton36();
	double m_double1;
	double m_double2;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void ReSize();
	POINT old;
	CFont m_editFont;
	afx_msg void OnBnClickedButton55();
	double m_double3;
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton56();
	double m_double4;
	double m_double5;
	double m_double6;
	double m_double7;
	double m_double8;
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton58();
	afx_msg void OnBnClickedButton50();
	afx_msg void OnBnClickedButton59();
	afx_msg void OnBnClickedButton42();
	afx_msg void OnBnClickedButton60();
	afx_msg void OnBnClickedButton44();
	afx_msg void OnBnClickedButton61();
	afx_msg void OnBnClickedButton46();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton64();
	double m_double9;
	double m_double10;
	double m_double11;
	double m_double12;
	afx_msg void OnBnClickedButton52();
	afx_msg void OnBnClickedButton66();
	afx_msg void OnBnClickedButton54();
	afx_msg void OnBnClickedButton69();
	afx_msg void OnBnClickedButton71();
	afx_msg void OnBnClickedButton72();
	afx_msg void OnBnClickedButton74();
	afx_msg void OnBnClickedHuifenButton();
	afx_msg void OnBnClickedButton62();
	afx_msg void OnBnClickedButton63();
	afx_msg void OnBnClickedButton134();
	CMFCButton m_kaishi;
	CMFCButton m_tingzhi;
	afx_msg void OnBnClickedKaishida();
	afx_msg void OnBnClickedTingzhida();
};
