#pragma once


// CUser �Ի���

class CUser : public CDialogEx
{
	DECLARE_DYNAMIC(CUser)

public:
	CUser(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CUser();

// �Ի�������
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
