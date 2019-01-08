#pragma once
#include "afxwin.h"

// yuancheng 对话框
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
	yuancheng(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~yuancheng();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_YUANCHENG_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
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
	int ProcessReceive(byte* data, int len);//用于解析收到的数据
	int allData2[30][1024] = {0};//用于把allData中所有数值从16位拆成两个byte8位值
	void intTo2Byte();
	string  intFormat(byte* x, int start);
	int sendFile(string str,int code);
	SOCKET clientSock;
	CString m_rev_edit;   //消息框
	CString m_temp_edit;  //判断是否刷新消息框m_rev_edit!=m_temp_edit时刷新消息界面
	CString m_Msg[15];    //用来存储在m_rev_edit编辑框中显示的消息
	afx_msg void OnBnClickedCancel();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
