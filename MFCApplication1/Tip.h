#pragma once


// Tip 对话框

class Tip : public CDialogEx
{
	DECLARE_DYNAMIC(Tip)

public:
	Tip(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Tip();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Tip };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
};
