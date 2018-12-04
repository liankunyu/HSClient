#pragma once


// mianjiweitiao 对话框

class mianjiweitiao : public CDialogEx
{
	DECLARE_DYNAMIC(mianjiweitiao)

public:
	mianjiweitiao(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mianjiweitiao();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MIANJIWEITIAO_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	double m_double1;
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void ReSize();
	POINT old;
	CFont m_editFont;
//	afx_msg void OnBnClickedButton1();
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
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton64();
	afx_msg void OnBnClickedButton51();
	afx_msg void OnBnClickedButton65();
	afx_msg void OnBnClickedButton66();
	afx_msg void OnBnClickedButton67();
	afx_msg void OnBnClickedButton68();
	afx_msg void OnBnClickedButton69();
	afx_msg void OnBnClickedButton70();
	afx_msg void OnBnClickedButton85();
	afx_msg void OnBnClickedButton94();
	afx_msg void OnBnClickedButton86();
	afx_msg void OnBnClickedButton87();
	afx_msg void OnBnClickedButton88();
	afx_msg void OnBnClickedButton89();
	afx_msg void OnBnClickedButton98();
	afx_msg void OnBnClickedButton99();
	afx_msg void OnBnClickedButton71();
	afx_msg void OnBnClickedButton72();
	afx_msg void OnBnClickedButton73();
	afx_msg void OnBnClickedButton74();
	afx_msg void OnBnClickedButton75();
	afx_msg void OnBnClickedButton76();
	afx_msg void OnBnClickedButton77();
	afx_msg void OnBnClickedButton78();
	afx_msg void OnBnClickedButton79();
	afx_msg void OnBnClickedButton80();
	afx_msg void OnBnClickedButton81();
	afx_msg void OnBnClickedButton82();
	afx_msg void OnBnClickedButton100();
	afx_msg void OnBnClickedButton101();
	afx_msg void OnBnClickedButton102();
	afx_msg void OnBnClickedButton103();
	afx_msg void OnBnClickedButton106();
	afx_msg void OnBnClickedButton107();
	afx_msg void OnBnClickedButton156();
	afx_msg void OnBnClickedButton108();
};
