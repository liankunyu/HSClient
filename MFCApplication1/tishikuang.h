#pragma once


// tishikuang 对话框

class tishikuang : public CDialogEx
{
	DECLARE_DYNAMIC(tishikuang)

public:
	tishikuang(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~tishikuang();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_tishikuang };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
