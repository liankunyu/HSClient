#pragma once


// tishikuang �Ի���

class tishikuang : public CDialogEx
{
	DECLARE_DYNAMIC(tishikuang)

public:
	tishikuang(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~tishikuang();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_tishikuang };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
