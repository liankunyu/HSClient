#pragma once
#include "afxwin.h"

// yuancheng �Ի���
struct toClientMsg
{
	char sAppId[1024];
	char sMsg[1024];
	toClientMsg()
	{
		ZeroMemory(sAppId, sizeof(sAppId));
		ZeroMemory(sMsg, sizeof(sMsg));
	}
};
class yuancheng : public CDialogEx
{
	DECLARE_DYNAMIC(yuancheng)

public:
	yuancheng(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~yuancheng();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_YUANCHENG_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	afx_msg void ThreadMessage();
	DECLARE_MESSAGE_MAP()
public:
	CWinThread *pThread;
	void ReSize();
	POINT old;
	CString m_ip_edit;
	afx_msg void OnBnClickedConnectButton();
	CButton btnConn;
	CButton btnSend;
	CString m_port;
	afx_msg void OnSize(UINT nType, int cx, int cy);
//	CEdit m_rev_edit;
	afx_msg void OnBnClickedSendButton();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	WSADATA m_WSAData;
	int m_iClientSock;
	int char2ToInt(unsigned char *data, int start=0);
	int CRC16(unsigned char *data, int len);
	int ProcessReceive(byte* data, int len);//���ڽ����յ�������
	int allData2[30][1024] = {0};//���ڰ�allData��������ֵ��16λ�������byte8λֵ
	void intTo2Byte();
	string  intFormat(byte* x, int start);
	int sendFile(string str,int code);
	SOCKET clientSock;
	CString m_rev_edit;   //��Ϣ��
	CString m_temp_edit;  //�ж��Ƿ�ˢ����Ϣ��m_rev_edit!=m_temp_editʱˢ����Ϣ����
	CString m_Msg[15];    //�����洢��m_rev_edit�༭������ʾ����Ϣ
	afx_msg void OnBnClickedCancel();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
