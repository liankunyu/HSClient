#pragma once
#include "afxcmn.h"
#include "afxwin.h"


// xiangjihuafen 对话框

class xiangjihuafen : public CDialogEx
{
	DECLARE_DYNAMIC(xiangjihuafen)

public:
	xiangjihuafen(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~xiangjihuafen();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_XIANGJIHUAFEN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_ctllist;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
//	double m_double1;
//	double m_double2;
//	double m_double3;
	int m_alldata[1024] = {0};
	afx_msg void OnBnClickedButton4();
	afx_msg void calculateavarage(double s,double e,int l);
//	int m_double3;
//	double m_s;
//	double m_e;
	int m_l;
	double m_s;
	double m_e;
	afx_msg void OnBnClickedCancel();
	double round(double r);
	int flag;
	POINT old;
	void ReSize();
	CComboBox m_combo1;
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
