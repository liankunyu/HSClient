#pragma once
#include "resource.h"
#include "afxwin.h"
#include "afxbutton.h"


// CLiuliangsheding 对话框

class CLiuliangsheding : public CDialogEx
{
	DECLARE_DYNAMIC(CLiuliangsheding)

public:
	CLiuliangsheding(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CLiuliangsheding();

// 对话框数据
	enum { IDD = IDD_LIU_DIALOG };

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
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton25();
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton29();
	afx_msg void OnBnClickedButton31();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton28();
	afx_msg void OnBnClickedButton30();
	BOOL OnEnSet;
	afx_msg void OnNMThemeChangedScrollbar1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void ReSize();
	POINT old;
	CFont m_editFont;
protected:
public:
	afx_msg void OnBnClickedButton32();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnEnSetfocusEdit4();
//	afx_msg void OnBnClickedButton8();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	int tongdao1;
	afx_msg void OnBnClickedButton16();
//	afx_msg void OnBnClickedButton10();
//	CEdit m_Edit1;
	double m_double11;
	double m_double12;
	double m_double13;
	afx_msg void OnBnClickedButton164();
	afx_msg void OnBnClickedButton151();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton93();
	afx_msg void OnBnClickedButton56();
	afx_msg void OnBnClickedButton140();
	afx_msg void OnBnClickedButton141();
	afx_msg void OnBnClickedButton142();
	afx_msg void OnBnClickedButton143();
	afx_msg void OnBnClickedButton144();
	afx_msg void OnBnClickedButton136();
	afx_msg void OnBnClickedButton137();
	afx_msg void OnBnClickedButton138();
	afx_msg void OnBnClickedButton139();
	afx_msg void OnBnClickedButton152();
	afx_msg void OnBnClickedKaishida();
	afx_msg void OnBnClickedTingzhida();
	CMFCButton m_kaishi;
	CMFCButton m_tingzhi;
};
