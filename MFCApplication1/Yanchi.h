#pragma once
#include "afxbutton.h"


// Yanchi 对话框

class Yanchi : public CDialogEx
{
	DECLARE_DYNAMIC(Yanchi)

public:
	Yanchi(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Yanchi();

// 对话框数据
	enum { IDD = IDD_YANCHI_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_double1_edit3;
	double m_double2_edit24;
	double m_double3_edit34;
	double m_double4_edit35;
	double m_double5_edit36;
	double m_double6_edit37;
//	double m_double7_edit2;
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton51();
	afx_msg void OnBnClickedButton66();
	afx_msg void OnBnClickedButton68();
	afx_msg void OnBnClickedButton70();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnBnClickedButton72();
	afx_msg void OnBnClickedButton74();
	double m_double8_edit39;
	double m_double9_edit45;
	double m_double10_edit46;
	afx_msg void OnBnClickedButton76();
	afx_msg void OnBnClickedButton78();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton64();
	afx_msg void OnBnClickedButton65();
	afx_msg void OnBnClickedButton67();
	afx_msg void OnBnClickedButton69();
	afx_msg void OnBnClickedButton71();
	afx_msg void OnBnClickedButton73();
	afx_msg void OnBnClickedButton75();
	afx_msg void OnBnClickedButton77();
	afx_msg void OnBnClickedButton79();
	afx_msg void OnBnClickedButton12();
//	double m_double7_edit38;
	afx_msg void ReSize();
	POINT old;
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	double m_double22;
	double m_double33;
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton59();
	afx_msg void OnBnClickedButton50();
	afx_msg void OnBnClickedButton60();
	afx_msg void OnBnClickedKaishida();
	afx_msg void OnBnClickedTingzhida();
	CMFCButton m_kaishi;
	CMFCButton m_tingzhi;
};
