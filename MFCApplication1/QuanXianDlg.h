#pragma once
#include "afxwin.h"


// CQuanXianDlg �Ի���

class CQuanXianDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CQuanXianDlg)

public:
	CQuanXianDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CQuanXianDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_QUANXIAN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	CString m_Edit1;
	CString m_static1;
	CString m_static2;
	CString m_static3;
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
