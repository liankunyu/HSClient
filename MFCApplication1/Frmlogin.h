#pragma once

#include <string>
// Frmlogin �Ի���
using namespace std;
class Frmlogin : public CDialogEx
{
	DECLARE_DYNAMIC(Frmlogin)

public:
	Frmlogin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Frmlogin();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOGIN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnClose();
	virtual void OnCancel();
	virtual void OnOK();
	int shijiancha(string str);
	double shijiancha1(string str);
	CString st_login;
	CString m_static1;
	CString m_static2;
	CString m_static3;
};
