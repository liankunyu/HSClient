#pragma once


// yansehangmianji 对话框

class yansehangmianji : public CDialogEx
{
	DECLARE_DYNAMIC(yansehangmianji)

public:
	yansehangmianji(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~yansehangmianji();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_YANSEHANGMIANJI_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_double1;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void ReSize();
	POINT old;
	CFont m_editFont;
	afx_msg void OnBnClickedButton3();
	double m_double2;
	double m_double3;
	double m_double4;
	double m_double5;
	double m_double6;
	double m_double7;
	double m_double8;
	double m_double9;
	double m_double10;
	double m_double11;
	double m_double12;
	double m_double13;
	double m_double14;
	double m_double15;
	double m_double16;
	double m_double17;
	double m_double18;
	double m_double19;
	double m_double20;
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton99();
	afx_msg void OnBnClickedButton56();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton32();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton39();
	afx_msg void OnBnClickedButton58();
	afx_msg void OnBnClickedButton49();
	afx_msg void OnBnClickedButton59();
	afx_msg void OnBnClickedButton83();
	afx_msg void OnBnClickedButton60();
	afx_msg void OnBnClickedButton120();
	afx_msg void OnBnClickedButton61();
	afx_msg void OnBnClickedButton128();
	afx_msg void OnBnClickedButton64();
	afx_msg void OnBnClickedButton51();
	afx_msg void OnBnClickedButton66();
	afx_msg void OnBnClickedButton53();
	afx_msg void OnBnClickedButton69();
	afx_msg void OnBnClickedButton70();
	afx_msg void OnBnClickedButton72();
	afx_msg void OnBnClickedButton73();
	afx_msg void OnBnClickedButton75();
	afx_msg void OnBnClickedButton76();
	afx_msg void OnBnClickedButton78();
	afx_msg void OnBnClickedButton79();
	afx_msg void OnBnClickedButton81();
	afx_msg void OnBnClickedButton82();
	afx_msg void OnBnClickedButton94();
	afx_msg void OnBnClickedButton86();
	afx_msg void OnBnClickedButton88();
	afx_msg void OnBnClickedButton129();
	afx_msg void OnBnClickedButton130();
};
