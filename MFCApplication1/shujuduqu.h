#pragma once
#include "afxwin.h"


// shujuduqu �Ի���

class shujuduqu : public CDialogEx
{
	DECLARE_DYNAMIC(shujuduqu)

public:
	shujuduqu(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~shujuduqu();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SHUJUDUQU_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnBnClickedButton1();
	afx_msg void ReSize();
	POINT old;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	int xiangjixuanze;
	double m_double1;
	double m_double2;
	double m_double3;
	double m_double4;
	double m_double5;
	double m_double6;
	double m_double7;
	double m_double8;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	CComboBox m_combox1;
	afx_msg void OnBnClickedCancel();
	afx_msg void OnCbnSelchangeCombo1();
};
