#pragma once


// Tip2 对话框

class Tip2 : public CDialogEx
{
	DECLARE_DYNAMIC(Tip2)

public:
	Tip2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Tip2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Tip2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	virtual BOOL OnInitDialog();
};
