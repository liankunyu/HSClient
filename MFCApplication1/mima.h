#pragma once


// mima �Ի���

class mima : public CDialogEx
{
	DECLARE_DYNAMIC(mima)

public:
	mima(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mima();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MIMA_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	CString m_Edit1;
	afx_msg void OnBnClickedButton3();
};