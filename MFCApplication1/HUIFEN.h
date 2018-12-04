#pragma once


// HUIFEN 对话框

class HUIFEN : public CDialogEx
{
	DECLARE_DYNAMIC(HUIFEN)

public:
	HUIFEN(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~HUIFEN();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HUIFEN_DIALOG1 };
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
	double m_double21;
	double m_double22;
	double m_double23;
	double m_double24;
	double m_double25;
	double m_double26;
	double m_double27;
	double m_double28;
	double m_double29;
	double m_double30;
	double m_double31;
	double m_double32;
	double m_double33;
	double m_double34;
	double m_double35;
	double m_double36;
	double m_double37;
	double m_double38;
	double m_double39;
	double m_double40;
	POINT old;
	afx_msg void ReSize();
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
