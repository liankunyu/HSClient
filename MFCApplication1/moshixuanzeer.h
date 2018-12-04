#pragma once

#include <Imm.h>  
#include <string>
// moshixuanzeer 对话框
using namespace std; 
class moshixuanzeer : public CDialogEx
{
	DECLARE_DYNAMIC(moshixuanzeer)

public:
	moshixuanzeer(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~moshixuanzeer();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOSHIXUANZEER_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();

	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton57();
//	afx_msg void OnEnChangeEdit4();
//	afx_msg void OnEnChangeEdit23();
	CString m_mode6;
	CString m_mode7;
	CString m_mode8;
	CString m_mode9;
	CString m_mode10;
//	afx_msg void OnEnChangeEdit24();
//	afx_msg void OnEnChangeEdit34();
//	afx_msg void OnEnChangeEdit35();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	double atoi(const char* str);
	void ReadXML(string str);
	POINT old;
	void ReSize();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	CString m_mode16;
	afx_msg void OnBnClickedButton3();
//	afx_msg void OnTimer(UINT_PTR nIDEvent);
//	afx_msg void OnBnClickedButton11();
//	afx_msg void OnBnClickedButton12();
//	afx_msg void OnBnClickedButton13();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
