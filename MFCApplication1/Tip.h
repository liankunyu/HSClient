#pragma once


// Tip �Ի���

class Tip : public CDialogEx
{
	DECLARE_DYNAMIC(Tip)

public:
	Tip(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Tip();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Tip };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
};
