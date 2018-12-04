#pragma once

#include <Imm.h>  
#include <string>
// moshixuanzesan 对话框
using namespace std;
class moshixuanzesan : public CDialogEx
{
	DECLARE_DYNAMIC(moshixuanzesan)

public:
	moshixuanzesan(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~moshixuanzesan();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOSHIXUANZESAN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double atoi(const char* str);
	void ReadXML(string str);
	POINT old;
	void ReSize();
	CString m_mode11;
	CString m_mode12;
	CString m_mode13;
	CString m_mode14;
	CString m_mode15;
	CString m_mode16;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual void OnOK();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	afx_msg void OnClose();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton57();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton3();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
