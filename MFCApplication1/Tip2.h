#pragma once


// Tip2 �Ի���

class Tip2 : public CDialogEx
{
	DECLARE_DYNAMIC(Tip2)

public:
	Tip2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Tip2();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Tip2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	virtual BOOL OnInitDialog();
};
