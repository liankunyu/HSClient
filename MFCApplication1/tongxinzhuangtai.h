#pragma once
#include "afxwin.h"


// tongxinzhuangtai 对话框

class tongxinzhuangtai : public CDialogEx
{
	DECLARE_DYNAMIC(tongxinzhuangtai)

public:
	tongxinzhuangtai(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~tongxinzhuangtai();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TONGXINZHUANGTAI_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	HICON m_IconRed;
	HICON m_IconGreen;
	DECLARE_MESSAGE_MAP()
public:

	virtual BOOL OnInitDialog();
	CStatic m_state0;
	CStatic m_state1;
	CStatic m_state2;
	CStatic m_state3;
	CStatic m_state4;
	CStatic m_state5;
	CStatic m_state6;
	CStatic m_state7;
	CStatic m_state8;
	CStatic m_state9;
	CStatic m_state10;
	CStatic m_state11;
	CStatic m_state12;
	CStatic m_state13;
	CStatic m_state14;
	CStatic m_state15;
	CStatic m_state16;
	CStatic m_state17;
	CStatic m_state18;
	CStatic m_state19;
	CStatic m_state20;
	afx_msg void OnBnClickedCancel();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void ReSize();
	POINT old;
	afx_msg void OnBnClickedButton4();
};
