#pragma once


// CUser 对话框

class CUser : public CDialogEx
{
	DECLARE_DYNAMIC(CUser)

public:
	CUser(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CUser();

// 对话框数据
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
