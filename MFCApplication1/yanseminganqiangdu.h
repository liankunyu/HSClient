#pragma once


// yanseminganqiangdu 对话框

class yanseminganqiangdu : public CDialogEx
{
	DECLARE_DYNAMIC(yanseminganqiangdu)

public:
	yanseminganqiangdu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~yanseminganqiangdu();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_YANSEMINGANQIANGDU_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	double m_double1;
	afx_msg void OnBnClickedButton2();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void ReSize();
	POINT old;
	CFont m_editFont;
	double m_double2;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton6();
	double m_double3;
	double m_double4;
	double m_double5;
	double m_double6;
	afx_msg void OnBnClickedButton32();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
};
