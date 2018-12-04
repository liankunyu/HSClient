#pragma once
#include <Imm.h>  
#include <string>
// Moshixuanze 对话框
using namespace std;
class Moshixuanze : public CDialogEx
{
	DECLARE_DYNAMIC(Moshixuanze)

public:
	Moshixuanze(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Moshixuanze();

// 对话框数据
	enum { IDD = IDD_MOSHIXUANZE_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
//	afx_msg void OnBnClickedButton14();
//	afx_msg void OnBnClickedButton15();
	CString m_mode1;
	afx_msg void OnBnClickedButton2();
	virtual BOOL OnInitDialog();
	afx_msg void ReSize();
	POINT old;
	double atoi(const char* str);
	void ReadXML(string str);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedButton5();
	CString m_mode2;
	CString m_mode3;
	CString m_mode4;
	CString m_mode5;
//	afx_msg void OnEnChangeEdit4();
	afx_msg void OnClose();
	virtual void OnCancel();
	virtual void OnOK();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton57();
	afx_msg void OnBnClickedButton12();
//	afx_msg void OnEnChangeEdit23();
//	afx_msg void OnEnChangeEdit24();
//	afx_msg void OnEnChangeEdit34();
//	afx_msg void OnEnChangeEdit35();
	afx_msg void OnBnClickedButton13();
	CString m_mode6;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButton11();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
