// yuancheng.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "yuancheng.h"
#include "afxdialogex.h"
#include "MyPublicData.h"
#include "ENINPUT.h"
#include "XMLHelper.h"
#include "Tip.h"
// yuancheng 对话框

IMPLEMENT_DYNAMIC(yuancheng, CDialogEx)

yuancheng::yuancheng(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_YUANCHENG_DIALOG, pParent)
	, m_ip_edit(server_IP)
	, m_port(server_Port)
	, m_rev_edit(_T(""))
{

}

yuancheng::~yuancheng()
{
}

void yuancheng::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_IP_EDIT, m_ip_edit);
	DDX_Control(pDX, IDC_CONNECT_BUTTON, btnConn);
	DDX_Control(pDX, IDC_SEND_BUTTON, btnSend);
	DDX_Text(pDX, IDC_PORT_EDIT, m_port);
	//  DDX_Text(pDX, IDC_REV_EDIT, m_rev_edit);
	//  DDX_Control(pDX, IDC_REV_EDIT, m_rev_edit);
	DDX_Text(pDX, IDC_REV_EDIT, m_rev_edit);
}


BEGIN_MESSAGE_MAP(yuancheng, CDialogEx)
	ON_BN_CLICKED(IDC_CONNECT_BUTTON, &yuancheng::OnBnClickedConnectButton)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_SEND_BUTTON, &yuancheng::OnBnClickedSendButton)
	ON_BN_CLICKED(IDC_BUTTON1, &yuancheng::OnBnClickedButton1)
	ON_BN_CLICKED(IDCANCEL, &yuancheng::OnBnClickedCancel)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// yuancheng 消息处理程序


void yuancheng::OnBnClickedConnectButton()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	string str,str1;
	USES_CONVERSION;
	if ((m_ip_edit == L"") || (m_port == L""))
	{
		m_Tip = "num6611";//传入节点名
		Tip tip;
		tip.DoModal();
	}
	else
	{
		//转换需要连接的端口内容类型
		str = T2A(m_ip_edit);
		str1 = T2A(m_port);
		int nPort = atoi(str1.c_str());
		WSADATA wsadata;
		WSAStartup(MAKEWORD(2, 3), &wsadata);

		//客户端socket  
	    clientSock = socket(PF_INET, SOCK_STREAM, 0);
		//初始化socket信息  
		sockaddr_in clientAddr;
		memset(&clientAddr, 0, sizeof(SOCKADDR));
		//clientAddr.sin_addr.s_addr = htonl(INADDR_ANY);  
		clientAddr.sin_addr.s_addr = inet_addr(str.c_str());
		clientAddr.sin_family = PF_INET;
		clientAddr.sin_port = htons(nPort);
		//建立连接  
		if (!connect(clientSock, (SOCKADDR*)&clientAddr, sizeof(SOCKADDR)))
		{
			m_rev_edit = m_rev_edit+m_Msg[0]+L"\r\n";   //服务器连接成功提示
			byte buf[60 * 1024] = { 0X68 };//0X68帧头, 192, 168, 0, 1,192, 168, 0, 1,0xFF控制码,25,125长度
			buf[1] = (byte)((Device_ID >> 24) & 0xFF);
			buf[2] = (byte)((Device_ID >> 16) & 0xFF);
			buf[3] = (byte)((Device_ID >> 8) & 0xFF);
			buf[4] = (byte)(Device_ID & 0xFF);
			buf[5] = (byte)((Device_ID >> 24) & 0xFF);
			buf[6] = (byte)((Device_ID >> 16) & 0xFF);
			buf[7] = (byte)((Device_ID >> 8) & 0xFF);
			buf[8] = (byte)(Device_ID & 0xFF);
			buf[9] = 0xFF;
			buf[10] = 0;
			buf[11] = 0;
			int res = CRC16((unsigned char*)buf, 12);   //获得CRC校验码
			buf[12] = (byte)(res & 0x00FF);//低字节
			buf[13] = (byte)(res >> 8);//高字节        //组装CRC校验码共两个字节
			buf[14] = { 0x16 };
			//if (send(aSocket, (const char*)buf, 15, 0) == SOCKET_ERROR)
			//{
			//	MessageBox(L"失败");
			//}
			if (send(clientSock, (const char*)buf, 15, NULL)== SOCKET_ERROR)
			{
				m_rev_edit = m_rev_edit + m_Msg[1] + L"\r\n";  //信息发送失败提示
			}
			else
			{
				SetTimer(1, 30000, NULL);
				ThreadMessage();
			}
			btnConn.EnableWindow(FALSE);
		}
		else
		{
			m_rev_edit = m_rev_edit + m_Msg[2] + L"\r\n";   //服务器连接失败提示
		}
	}
	UpdateData(FALSE);
}


void yuancheng::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		//ReSize();
	}
}
void yuancheng::ReSize()
{
	float fsp[2];
	POINT Newp; //获取现在对话框的大小  
	CRect recta;
	GetClientRect(&recta);     //取客户区大小    
	Newp.x = recta.right - recta.left;
	Newp.y = recta.bottom - recta.top;
	fsp[0] = (float)Newp.x / old.x;
	fsp[1] = (float)Newp.y / old.y;
	CRect Rect;
	int woc;
	CPoint OldTLPoint, TLPoint; //左上角  
	CPoint OldBRPoint, BRPoint; //右下角  
	HWND  hwndChild = ::GetWindow(m_hWnd, GW_CHILD);  //列出所有控件    
	while (hwndChild)
	{
		woc = ::GetDlgCtrlID(hwndChild);//取得ID  
		GetDlgItem(woc)->GetWindowRect(Rect);
		ScreenToClient(Rect);
		OldTLPoint = Rect.TopLeft();
		TLPoint.x = long(OldTLPoint.x*fsp[0]);
		TLPoint.y = long(OldTLPoint.y*fsp[1]);
		OldBRPoint = Rect.BottomRight();
		BRPoint.x = long(OldBRPoint.x *fsp[0]);
		BRPoint.y = long(OldBRPoint.y *fsp[1]);
		Rect.SetRect(TLPoint, BRPoint);
		GetDlgItem(woc)->MoveWindow(Rect, TRUE);
		hwndChild = ::GetWindow(hwndChild, GW_HWNDNEXT);
	}
	old = Newp;
}

void yuancheng::OnBnClickedSendButton()
{
	// TODO: 在此添加控件通知处理程序代码
	sendFile("lasttime.xml",0);
	//sendFile("mode1.xml",1);
	//sendFile("mode2.xml",2);
	//sendFile("mode3.xml",3);
	//sendFile("mode4.xml",4);
	//sendFile("mode5.xml",5);
	//sendFile("mode6.xml",6);
	//sendFile("mode7.xml",7);
	//sendFile("mode8.xml",8);
	//sendFile("mode9.xml",9);
	//sendFile("mode10.xml",10);
	//sendFile("mode11.xml",11);
	//sendFile("mode12.xml",12);
	//sendFile("mode13.xml",13);
	//sendFile("mode14.xml",14);
	//sendFile("mode15.xml",15);
	//sendFile("name.xml",0x5A);
	m_rev_edit = m_rev_edit + m_Msg[3] + L"\r\n";  //文件上传成功提示
	/*MessageBox(L"Success!");*/
	UpdateData(FALSE);
}


void yuancheng::sendFile(string str,int code)
{
	FILE *pFile=NULL;
	if (fopen_s(&pFile, str.c_str(), "rb") != 0)
	{
		m_rev_edit = m_rev_edit + m_Msg[4] + L"\r\n";  //文件打开失败提示
		/*MessageBox(L"fail to open file!");*/
		return;
	}
	fseek(pFile, 0, SEEK_END);
	int len = ftell(pFile);
	byte *pBuf;
	pBuf = new byte[len];
	rewind(pFile);   //指针复位  
	fread(pBuf, 1, len, pFile);
	pBuf[len] = 0;
	fclose(pFile);



	byte buf[100 * 1024] = { 0X68 };//0X68帧头, 192, 168, 0, 1,192, 168, 0, 1,0xFF控制码,25,125长度
	buf[1] = (byte)((Device_ID >> 24) & 0xFF);
	buf[2] = (byte)((Device_ID >> 16) & 0xFF);
	buf[3] = (byte)((Device_ID >> 8) & 0xFF);
	buf[4] = (byte)(Device_ID & 0xFF);
	buf[5] = (byte)((Device_ID >> 24) & 0xFF);
	buf[6] = (byte)((Device_ID >> 16) & 0xFF);
	buf[7] = (byte)((Device_ID >> 8) & 0xFF);
	buf[8] = (byte)(Device_ID & 0xFF);
	buf[9] = code;
	buf[10] = (byte)(len & 0x00FF);//低字节
	buf[11] = (byte)(len >> 8);//高字节        //组装CRC校验码共两个字节

	memcpy(buf + 12, pBuf, len);  //数据帧内容就是lasttime.xml文本


	int res = CRC16((unsigned char*)buf, len + 12);   //获得CRC校验码
	buf[len + 12] = (byte)(res & 0x00FF);//低字节
	buf[len + 13] = (byte)(res >> 8);//高字节        //组装CRC校验码共两个字节
	buf[len + 14] = { 0x16 };


	if (send(clientSock, (const char*)buf, len + 15, 0) == SOCKET_ERROR)
	{
		m_rev_edit = m_rev_edit + m_Msg[5] + L"\r\n";    //文件发送失败提示
		/*MessageBox(L"失败");*/
	}
	Sleep(200);
	UpdateData(FALSE);
}

BOOL yuancheng::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;                                  //语言控制，通过xml文件更改语言
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num6501", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_CONNECT_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num6502", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_SEND_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num6503", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.QueryNode_Text("num6504", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_IP_STATIC)->SetWindowText(cstr);
	opx.QueryNode_Text("num6505", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_Port_STATIC)->SetWindowText(cstr);

	opx.QueryNode_Text("num6510", yuyan);
	m_Msg[0] = opx.UTF8ToUnicode(yuyan);
	opx.QueryNode_Text("num6511", yuyan);
	m_Msg[1] = opx.UTF8ToUnicode(yuyan);
	opx.QueryNode_Text("num6512", yuyan);
	m_Msg[2] = opx.UTF8ToUnicode(yuyan);
	opx.QueryNode_Text("num6513", yuyan);
	m_Msg[3] = opx.UTF8ToUnicode(yuyan);
	opx.QueryNode_Text("num6514", yuyan);
	m_Msg[4] = opx.UTF8ToUnicode(yuyan);
	opx.QueryNode_Text("num6515", yuyan);
	m_Msg[5] = opx.UTF8ToUnicode(yuyan);
	opx.QueryNode_Text("num6516", yuyan);
	m_Msg[6] = opx.UTF8ToUnicode(yuyan);
	opx.QueryNode_Text("num6517", yuyan);
	m_Msg[7] = opx.UTF8ToUnicode(yuyan);
	opx.QueryNode_Text("num6518", yuyan);
	m_Msg[8] = opx.UTF8ToUnicode(yuyan);
	opx.QueryNode_Text("num6519", yuyan);
	m_Msg[9] = opx.UTF8ToUnicode(yuyan);
	opx.QueryNode_Text("num6520", yuyan);
	m_Msg[10] = opx.UTF8ToUnicode(yuyan);
	opx.SaveFile();
	//ModifyStyle(WS_CAPTION, 0, 0);
	//SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	////初始化窗口位置
	//CRect rect;
	//GetClientRect(&rect);     //取客户区大小    
	//old.x = rect.right - rect.left;
	//old.y = rect.bottom - rect.top;
	m_temp_edit = m_rev_edit;
	SetTimer(2, 1000, NULL);  //设置定时器更新消息
	
	/*intTo2Byte();*/
	UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void yuancheng::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

	//USES_CONVERSION;
	//string s=T2A(m_ip_edit);
	//int ipAdr1, ipAdr2, ipAdr3, ipAdr4;
	//sscanf_s((const char*)s.c_str(), "%d.%d.%d.%d", &ipAdr1, &ipAdr2, &ipAdr3, &ipAdr4);

	byte buf[10 * 1024] = { 0X68, 32, 215, 190, 209,32, 215, 190, 209,0x50,100,25 };//0X68帧头, 192, 168, 0, 1,192, 168, 0, 1,0xFF控制码,25,125长度
	for (int i=0;i<100;i++)
	{
		buf[i + 12] = allData2[0][i+2];
	}
	for (int i=0;i<20;i++)
	{
		for (int j = 2; j <= 321; j++)    //allData[1][]中存放的是地址1-150，相对于色选机相机的是0-149.因为发送到色选机相机的时候-1.
		{
            //待解决相机划分值大于255，需要byte2toint，而且allData[][]赋值给buf[]的位置需要改变，buf[x+156]=allData[][256];256处值拆分成两个16进制值
			buf[i * 320 + j + 110] = allData2[i+1][j];
		}
	}
	int res = CRC16((unsigned char*)buf, 6512);   //获得CRC校验码
	buf[6512] = (byte)(res & 0x00FF);//低字节
	buf[6513] = (byte)(res >> 8);//高字节        //组装CRC校验码共两个字节
	buf[6514] = { 0x16 };


	if (send(clientSock,(const char*)buf, 6515, 0) == SOCKET_ERROR)
	{
		m_Tip = "num6612";//传入节点名
		Tip tip;
		tip.DoModal();
	}
}

unsigned int ReceiveMessage(LPVOID lpParam)
{
	//this:pointer
	yuancheng *pthis = (yuancheng *)lpParam;    //获得yuancheng类指针
	//CString s;
	byte tem[2] = { 0 };           //用于长度获得和CRC校验码获得
	int len = 0;                  //数据长度
	int xda = 0;                  //CRC


	byte *tmpMsg = new byte[1 * 1024 * 1024];
	byte *revdata = new byte[1 * 1024 * 1024];

	while (1)
	{
		memset(revdata, 0, sizeof(tmpMsg));
		memset(tmpMsg, 0, sizeof(tmpMsg));
		int numbytes = recv(pthis->clientSock, (char*)tmpMsg, 1*1024 * 1024, 0);
		//int numbytes= pthis->aSocket.Receive((void*)tmpMsg, 5 *1024* 1024);
		if (numbytes < 0)
		{
			Sleep(10);
			continue;
		}
		while (numbytes > 0)
		{
			if ((int)tmpMsg[0] == 0x68)
			{
				tem[0] = tmpMsg[10];
				tem[1] = tmpMsg[11];
				len = pthis->char2ToInt((unsigned char*)tem);  //获得数据长度
				if (numbytes > len + 14)  //如果接受的总数据长度大于数据的长度，并且帧尾是16
				{
					if ((int)tmpMsg[len + 14] == 0x16)
					{
						int res = pthis->CRC16((unsigned char*)tmpMsg, len + 12);   //获得CRC校验码
						tem[0] = tmpMsg[len + 12];
						tem[1] = tmpMsg[len + 13];
						xda = pthis->char2ToInt((unsigned char*)tem);  //获得CRC
						if (xda == res)            //如果校验码正确
						{
							pthis->ProcessReceive(tmpMsg, len + 15);  //将封装好的一帧数据用ProcessReceive函数进行处理
							if ((numbytes - len - 15) > 0)
							{
								memcpy(revdata, tmpMsg + (len + 15), numbytes - len - 15);     //将解析的数据从tmMsg中清除
								memcpy(tmpMsg, revdata, numbytes - len - 15);
								numbytes = numbytes - len - 15;                     //numbytes减少
							}
							else
							{
								numbytes = 0;
							}
						}
						else      //如果校验码不正确
						{
							if ((numbytes - len - 15) > 0)
							{
								memcpy(revdata, tmpMsg + (len + 15), numbytes - len - 15);     //将解析的数据从tmMsg中清除
								memcpy(tmpMsg, revdata, numbytes - len - 15);
								numbytes = numbytes - len - 15;                     //numbytes减少
							}
							else
							{
								numbytes = 0;
							}
						}
					}
					else
					{
							memcpy(revdata, tmpMsg + 1, numbytes - 1);     //将解析的数据从tmMsg中清除
							memcpy(tmpMsg, revdata, numbytes - 1);
							numbytes = numbytes - 1;                     //numbytes减少               
					}
				}
				else
				{
					memcpy(revdata, tmpMsg + 1, numbytes - 1);     //将解析的数据从tmMsg中清除
					memcpy(tmpMsg, revdata, numbytes - 1);
					numbytes = numbytes - 1;                     //numbytes减少
				}
			}
			else
			{
				memcpy(revdata, tmpMsg + 1, numbytes - 1);     //将解析的数据从tmMsg中清除
				memcpy(tmpMsg, revdata, numbytes - 1);
				numbytes = numbytes - 1;                     //numbytes减少
			}
		}
		Sleep(10);
	}
	if (tmpMsg!=NULL)
	{
		delete[] tmpMsg;
	}
	if (revdata!=NULL)
	{
		delete[] revdata;
	}
	return 0;
}

void yuancheng::ThreadMessage()
{
	pThread = new CWinThread(ReceiveMessage, (LPVOID)this);
	pThread->CreateThread(CREATE_SUSPENDED);
	pThread->ResumeThread();
}

int yuancheng::CRC16(unsigned char *data, int len)
{
	unsigned char* temdata[2];
	int xda, xdapoly;
	int i, j, xdabit;
	xda = 0xFFFF;
	xdapoly = 0xA001;
	for (i = 0; i < len; i++)
	{
		xda ^= data[i];
		for (j = 0; j < 8; j++)
		{
			xdabit = (int)(xda & 0x01);
			xda >>= 1;
			if (xdabit == 1)
				xda ^= xdapoly;
		}
	}
	temdata[0] = (unsigned char*)(xda & 0x00FF);//低字节
	temdata[1] = (unsigned char*)(xda >> 8);//高字节

	return xda;
}

int yuancheng::char2ToInt(unsigned char *data, int start)
{
	int x = 0;
	x = data[start] + (data[start+1]<<8);
	return x;
}

int yuancheng::ProcessReceive(byte* data, int len)
{
	string path;
	switch (data[9])
	{
	case 0x5A:
		path = "name.xml";
		break;
	case 0:
		path = "lasttime.xml";
		break;
	case 1:
		path = "mode1.xml";
		break;
	case 2:
		path = "mode2.xml";
		break;
	case 3:
		path = "mode3.xml";
		break;
	case 4:
		path = "mode4.xml";
		break;
	case 5:
		path = "mode5.xml";
		break;
	case 6:
		path = "mode6.xml";
		break;
	case 7:
		path = "mode7.xml";
		break;
	case 8:
		path = "mode8.xml";
		break;
	case 9:
		path = "mode9.xml";
		break;
	case 10:
		path = "mode10.xml";
		break;
	case 11:
		path = "mode11.xml";
		break;
	case 12:
		path = "mode12.xml";
		break;
	case 13:
		path = "mode13.xml";
		break;
	case 14:
		path = "mode14.xml";
		break;
	case 15:
		path = "mode15.xml";
		break;
	case 16:
		path = "mode16.xml";
		break;
	case 17:
		path = "mode17.xml";
		break;
	case 18:
		path = "mode18.xml";
		break;
	case 19:
		path = "mode19.xml";
		break;
	case 20:
		path = "mode20.xml";
		break;
	case 21:
		path = "mode21.xml";
		break;
	case 22:
		path = "mode22.xml";
		break;
	case 23:
		path = "mode23.xml";
		break;
	case 24:
		path = "mode24.xml";
		break;
	default:
		break;
	}
	//接收xml文件
	byte revdata[60 * 1024];
	memcpy(revdata, data + 12, len - 15);
	FILE *pFil;
	if (fopen_s(&pFil, path.c_str(), "w") != 0)
	{
		m_rev_edit = m_rev_edit + m_Msg[6] + L"\r\n";  //文件写入失败提示
		return 0;
	}
	fwrite(revdata, 1, len - 15, pFil);
	fclose(pFil);
	//判断是否接受完成
	//if (data[9]==15)
	//{
	//向服务器返回发送完成信息
	const char* number;
	opXML  opx2("lasttime.xml");
	opx2.QueryNode_Text("sendtime", number);
	string str = number;
	int strlength = str.length();
	byte buf[60 * 1024] = { 0X68 };//0X68帧头, 192, 168, 0, 1,192, 168, 0, 1,0xFF控制码,25,125长度
	buf[1] = (byte)((Device_ID >> 24) & 0xFF);
	buf[2] = (byte)((Device_ID >> 16) & 0xFF);
	buf[3] = (byte)((Device_ID >> 8) & 0xFF);
	buf[4] = (byte)(Device_ID & 0xFF);
	buf[5] = (byte)((Device_ID >> 24) & 0xFF);
	buf[6] = (byte)((Device_ID >> 16) & 0xFF);
	buf[7] = (byte)((Device_ID >> 8) & 0xFF);
	buf[8] = (byte)(Device_ID & 0xFF);
	buf[9] = 0x0F;
	buf[10] = (byte)(strlength & 0x00FF);//低字节
	buf[11] = (byte)(strlength >> 8);//高字节        //组装CRC校验码共两个字节
	for (int i = 0; i < strlength; i++)
	{
		buf[12 + i] = str[i];
	}
	int res = CRC16((unsigned char*)buf, strlength + 12);   //获得CRC校验码
	buf[strlength + 12] = (byte)(res & 0x00FF);//低字节
	buf[strlength + 13] = (byte)(res >> 8);//高字节        //组装CRC校验码共两个字节
	buf[strlength + 14] = { 0x16 };
	if (send(clientSock, (const char*)buf, strlength + 15, NULL) == SOCKET_ERROR)
	{
		m_rev_edit = m_rev_edit + m_Msg[7] + L"\r\n";  //消息发送失败提示
	}
		//接受完成后是否执行重新下发
		CMyPublicData::readXML("lasttime.xml");
		m_rev_edit = m_rev_edit + m_Msg[8] + L"\r\n"; //接受完成提示
		for (int i = 0; i < 21; i++)
		{
			if (tongxincuowu[i] == (-1))
			{
				fanhuizhi = 0;
				memset(tongxincuowu, 0, sizeof(tongxincuowu));   //每次将tongxincuowu数组全部置0，清除上一次的返回值
				m_rev_edit = m_rev_edit + m_Msg[9] + L"\r\n";  //通信异常提示
				break;
			}
		}
		
	/*}*/
	return 1;
	//else if (data[9] == 0x50) //
	//{
	//	//格式类似setfunc(32,16,22,1);数据帧data[12]开始是数据，数据可以是32,16,22,3,1,0,1,0,1,0,要注意data每个表示最大值只有256.
	//	for (int i=0;i<data[15];i++)
	//	{
	//		datatestDPU[4 + i] = data[16+2*i]+ data[17 + 2 * i]*256;
	//	}
	//	CMyPublicData::setfunc(data[12], data[13], data[14], data[15]);
	//	return 1;
	//}
	//else if (data[9]==70)
	//{
	//	//格式类似01,03,
	//	return 1;
	//}
}





void yuancheng::intTo2Byte()     //通过读取色选机数据上传，不确定卡不卡
{
	CMyPublicData::setfunc(10, 3, 1, 50);
	for (int i = 1; i <= 50; i++)
	{
		allData2[0][2 * i] = (databuff[i - 1] & 0x00FF);
		allData2[0][2 * i + 1] = (databuff[i - 1] >> 8);
	}
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 3, 1, 50);
			for (int j = 1; j <= 50; j++)
			{
				allData2[i + 1][2 * j] = (databuff[j - 1] & 0x00FF);
				allData2[i + 1][2 * j + 1] = (databuff[j - 1] >> 8);
			}
			CMyPublicData::setfunc(32 + i, 3, 51, 50);
			for (int j = 51; j <= 100; j++)
			{
				allData2[i + 1][2 * j] = (databuff[j - 51] & 0x00FF);
				allData2[i + 1][2 * j + 1] = (databuff[j - 51] >> 8);
			}
			CMyPublicData::setfunc(32 + i, 3, 101, 50);
			for (int j = 101; j <=150; j++)    
			{
				allData2[i + 1][2 * j] = (databuff[j - 101] & 0x00FF);
				allData2[i + 1][2 * j + 1] = (databuff[j - 101] >> 8);
			}
			CMyPublicData::setfunc(32 + i, 3, 350, 10);  //读取350-359地址位
			for (int j = 151; j <=160; j++)
			{
				allData2[i + 1][2 * j] = (databuff[j - 151] & 0x00FF);
				allData2[i + 1][2 * j + 1] = (databuff[j - 151] >> 8);
			}
		}
	}
}



string  yuancheng::intFormat(byte* x, int start)
{
	CString str;
	str.Format(_T("%.2d"), x[start]);      //将1改成01格式，11还是11.
	string STDStr(CW2A(str.GetString()));  //将Cstring转成string
	return STDStr;                         //返回string类型的
}

void yuancheng::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	//保存服务器IP和Port
	UpdateData(TRUE);
	string str;
	opXML opx("lasttime.xml");
	USES_CONVERSION;
	str = W2A(server_IP);
	opx.ModifyNode("serverIP", str);
	str = W2A(server_Port);
	opx.ModifyNode("serverPort", str);
	opx.SaveFile();
	KillTimer(1);
	KillTimer(2);
	CDialogEx::OnCancel();
}



void yuancheng::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (nIDEvent == 1)
	{
		byte buf[60 * 1024] = { 0X68 };//0X68帧头, 192, 168, 0, 1,192, 168, 0, 1,0xFF控制码,25,125长度
		buf[1] = (byte)((Device_ID >> 24) & 0xFF);
		buf[2] = (byte)((Device_ID >> 16) & 0xFF);
		buf[3] = (byte)((Device_ID >> 8) & 0xFF);
		buf[4] = (byte)(Device_ID & 0xFF);
		buf[5] = (byte)((Device_ID >> 24) & 0xFF);
		buf[6] = (byte)((Device_ID >> 16) & 0xFF);
		buf[7] = (byte)((Device_ID >> 8) & 0xFF);
		buf[8] = (byte)(Device_ID & 0xFF);
		buf[9] = 0xF0;
		buf[10] = 0;
		buf[11] = 0;
		int res = CRC16((unsigned char*)buf, 12);   //获得CRC校验码
		buf[12] = (byte)(res & 0x00FF);//低字节
		buf[13] = (byte)(res >> 8);//高字节        //组装CRC校验码共两个字节
		buf[14] = { 0x16 };
		if (send(clientSock, (const char*)buf, 15, NULL) == SOCKET_ERROR)
		{
			m_rev_edit = m_rev_edit + m_Msg[10] + L"\r\n";  //心跳包发送失败提示
		}
	}
	if (nIDEvent == 2)
	{
		if (m_rev_edit!=m_temp_edit)//如果接收框值发生改变
		{
			m_temp_edit = m_rev_edit;
			UpdateData(FALSE);
		}

	}
	CDialogEx::OnTimer(nIDEvent);
}


BOOL yuancheng::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_IP_EDIT);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		ENINPUT ent;
		if (ent.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_ip_edit = ent.ValueShow;
			server_IP = m_ip_edit;
			UpdateData(FALSE);
		}
		return TRUE;
	}
	else
	{
		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_PORT_EDIT);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		{
			ENINPUT ent;
			if (ent.DoModal() == IDOK)
			{
				UpdateData(TRUE);
				m_port = ent.ValueShow;
				server_Port = m_port;
				UpdateData(FALSE);
			}
			return TRUE;
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}

