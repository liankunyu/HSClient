//#pragma once
//
//// CInputDlg �Ի���
//
//class CInputDlg : public CDialogEx
//{
//	DECLARE_DYNAMIC(CInputDlg)
//
//public:
//	CInputDlg(CWnd* pParent = NULL);   // ��׼���캯��
//	virtual ~CInputDlg();
//
//// �Ի�������
//#ifdef AFX_DESIGN_TIME
//	enum { IDD = IDD_INPUTTOOL };
//#endif
//
//protected:
//	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
//
//	DECLARE_MESSAGE_MAP()
//public:
//	CString ValueShow;
//	double ValueMax;
//	double ValueMin;
//	bool pointFlag;
//	afx_msg void OnBnClickedMfcbut0();
//	afx_msg void OnBnClickedMfcbutpoint();
//	afx_msg void OnBnClickedMfcbut1();
//	afx_msg void OnBnClickedMfcbut2();
//	afx_msg void OnBnClickedMfcbut3();
//	afx_msg void OnBnClickedMfcbutenter();
//	afx_msg void OnBnClickedMfcbutesc();
//	afx_msg void OnBnClickedMfcbutclear();
//	afx_msg void OnBnClickedMfcbut6();
//	afx_msg void OnBnClickedMfcbut5();
//	afx_msg void OnBnClickedMfcbut4();
//	afx_msg void OnBnClickedMfcbut7();
//	afx_msg void OnBnClickedMfcbut8();
//	afx_msg void OnBnClickedMfcbut9();
//	afx_msg void OnBnClickedMfcbutdelet();
//	
//	afx_msg void OnBnClickedOk();
//	afx_msg void OnBnClickedCancel();
//};


#pragma once

// CInputDlg �Ի���

class CInputDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CInputDlg)

public:
	CInputDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CInputDlg();

	// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INPUTTOOL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString ValueShow;
	double ValueMax;
//	double ValueMin;
	bool pointFlag;
	afx_msg void OnBnClickedMfcbut0();
	afx_msg void OnBnClickedMfcbutpoint();
	afx_msg void OnBnClickedMfcbut1();
	afx_msg void OnBnClickedMfcbut2();
	afx_msg void OnBnClickedMfcbut3();

	afx_msg void OnBnClickedMfcbutclear();
	afx_msg void OnBnClickedMfcbut6();
	afx_msg void OnBnClickedMfcbut5();
	afx_msg void OnBnClickedMfcbut4();
	afx_msg void OnBnClickedMfcbut7();
	afx_msg void OnBnClickedMfcbut8();
	afx_msg void OnBnClickedMfcbut9();
	afx_msg void OnBnClickedMfcbutdelet();

	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();

	double ValueMin;
};