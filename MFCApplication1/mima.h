#pragma once


// mima 对话框

class mima : public CDialogEx
{
	DECLARE_DYNAMIC(mima)

public:
	mima(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mima();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MIMA_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	CString m_Edit1;
	afx_msg void OnBnClickedButton3();
};
