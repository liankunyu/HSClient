#pragma once


// ZHUBANSHUJU 对话框

class ZHUBANSHUJU : public CDialogEx
{
	DECLARE_DYNAMIC(ZHUBANSHUJU)

public:
	ZHUBANSHUJU(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ZHUBANSHUJU();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ZHUBANSHUJU_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	POINT old;
	afx_msg void ReSize();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnSize(UINT nType, int cx, int cy);
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
	afx_msg void OnBnClickedCancel();
	double m_double11;
	double m_double12;
	double m_double13;
	double m_double14;
//	double m_double15;
//	double m_double17;
	double m_double16;
	double m_double17;
	double m_double18;
	afx_msg void OnBnClickedButton29();
	CString m_Cstring;
};
