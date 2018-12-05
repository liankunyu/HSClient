// tongxinzhuangtai.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "tongxinzhuangtai.h"
#include "afxdialogex.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include "Tip.h"
// tongxinzhuangtai 对话框

IMPLEMENT_DYNAMIC(tongxinzhuangtai, CDialogEx)

tongxinzhuangtai::tongxinzhuangtai(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TONGXINZHUANGTAI_DIALOG, pParent)
{

}

tongxinzhuangtai::~tongxinzhuangtai()
{
}

void tongxinzhuangtai::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC1, m_state1);
	DDX_Control(pDX, IDC_STATIC11, m_state2);
	DDX_Control(pDX, IDC_STATIC2, m_state3);
	DDX_Control(pDX, IDC_STATIC12, m_state4);
	DDX_Control(pDX, IDC_STATIC3, m_state5);
	DDX_Control(pDX, IDC_STATIC13, m_state6);
	DDX_Control(pDX, IDC_STATIC4, m_state7);
	DDX_Control(pDX, IDC_STATIC14, m_state8);
	DDX_Control(pDX, IDC_STATIC5, m_state9);
	DDX_Control(pDX, IDC_STATIC15, m_state10);
	DDX_Control(pDX, IDC_STATIC6, m_state11);
	DDX_Control(pDX, IDC_STATIC24, m_state12);
	DDX_Control(pDX, IDC_STATIC7, m_state13);
	DDX_Control(pDX, IDC_STATIC16, m_state14);
	DDX_Control(pDX, IDC_STATIC8, m_state15);
	DDX_Control(pDX, IDC_STATIC17, m_state16);
	DDX_Control(pDX, IDC_STATIC9, m_state17);
	DDX_Control(pDX, IDC_STATIC18, m_state18);
	DDX_Control(pDX, IDC_STATIC10, m_state19);
	DDX_Control(pDX, IDC_STATIC19, m_state20);
	DDX_Control(pDX, IDC_STATIC20, m_state0);
}


BEGIN_MESSAGE_MAP(tongxinzhuangtai, CDialogEx)
	ON_BN_CLICKED(IDCANCEL, &tongxinzhuangtai::OnBnClickedCancel)
//	ON_WM_SIZECLIPBOARD()
ON_WM_SIZE()
ON_BN_CLICKED(IDC_BUTTON4, &tongxinzhuangtai::OnBnClickedButton4)
END_MESSAGE_MAP()


// tongxinzhuangtai 消息处理程序


BOOL tongxinzhuangtai::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_IconRed = AfxGetApp()->LoadIcon(IDR_ICONRED);//导入Icon资源，利用m_hIconBtn来存储句柄。
	m_IconGreen = AfxGetApp()->LoadIcon(IDR_ICONGREEN);//导入Icon资源，利用m_hIconBtn来存储句柄。
	CMyPublicData::setfunc(10, 3, 9, 1);
	if (fanhuizhi == (-1))
	{
		
		m_state0.SetIcon(m_IconRed);
	}
	if (modsd[0]!="OFF")
	{
		CMyPublicData::setfunc(32, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state1.SetIcon(m_IconRed);
		}
	}
	if (modsd[1] != "OFF")
	{
		CMyPublicData::setfunc(33, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state2.SetIcon(m_IconRed);
		}
	}
	if (modsd[2] != "OFF")
	{
		CMyPublicData::setfunc(34, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state3.SetIcon(m_IconRed);
		}
	}
	if (modsd[3] != "OFF")
	{
		CMyPublicData::setfunc(35, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state4.SetIcon(m_IconRed);
		}
	}
	if (modsd[4] != "OFF")
	{
		CMyPublicData::setfunc(36, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state5.SetIcon(m_IconRed);
		}
	}
	if (modsd[5] != "OFF")
	{
		CMyPublicData::setfunc(37, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state6.SetIcon(m_IconRed);
		}
	}
	if (modsd[6] != "OFF")
	{
		CMyPublicData::setfunc(38, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state7.SetIcon(m_IconRed);
		}
	}
	if (modsd[7] != "OFF")
	{
		CMyPublicData::setfunc(39, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state8.SetIcon(m_IconRed);
		}
	}
	if (modsd[8] != "OFF")
	{
		CMyPublicData::setfunc(40, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state9.SetIcon(m_IconRed);
		}
	}
	if (modsd[9] != "OFF")
	{
		CMyPublicData::setfunc(41, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state10.SetIcon(m_IconRed);
		}
	}
	if (modsd[10] != "OFF")
	{
		CMyPublicData::setfunc(42, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state11.SetIcon(m_IconRed);
		}
	}
	if (modsd[11] != "OFF")
	{
		CMyPublicData::setfunc(43, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state12.SetIcon(m_IconRed);
		}
	}
	if (modsd[12] != "OFF")
	{
		CMyPublicData::setfunc(44, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state13.SetIcon(m_IconRed);
		}
	}
	if (modsd[13] != "OFF")
	{
		CMyPublicData::setfunc(45, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state14.SetIcon(m_IconRed);
		}
	}
	if (modsd[14] != "OFF")
	{
		CMyPublicData::setfunc(46, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state15.SetIcon(m_IconRed);
		}
	}
	if (modsd[15] != "OFF")
	{
		CMyPublicData::setfunc(47, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state16.SetIcon(m_IconRed);
		}
	}
	if (modsd[16] != "OFF")
	{
		CMyPublicData::setfunc(48, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state17.SetIcon(m_IconRed);
		}
	}
	if (modsd[17] != "OFF")
	{
		CMyPublicData::setfunc(49, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state18.SetIcon(m_IconRed);
		}
	}
	if (modsd[18] != "OFF")
	{
		CMyPublicData::setfunc(50, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state19.SetIcon(m_IconRed);
		}
	}
	if (modsd[19] != "OFF")
	{
		CMyPublicData::setfunc(51, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			m_state20.SetIcon(m_IconRed);
		}
	}


	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num6201", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
	opx.QueryNode_Text("num6202", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num6203", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
	opx.QueryNode_Text("num6204", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON4)->SetWindowText(cstr);
	opx.QueryNode_Text("num6205", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();


	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//初始化窗口位置
	CRect rect;
	GetClientRect(&rect);     //取客户区大小    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void tongxinzhuangtai::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}


void tongxinzhuangtai::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


void tongxinzhuangtai::ReSize()
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

void tongxinzhuangtai::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	//初始化COM口，实现与下位机(色选机控制系统：主板相机)的通信
	

	//初始化所有全局变量
	CMyPublicData::readXML("lasttime.xml");

	for (int i = 0; i < 21; i++)
	{
		if (tongxincuowu[i] == (-1))
		{
			m_Tip = "num6601";//传入节点名
			Tip tip;
			tip.DoModal();
			
			return ;
		}
	}
	if (CMyPublicData::bit_read(10, 104, 8))
	{
	}
	else
	{
		m_Tip = "num6602";//传入节点名
		Tip tip;
		tip.DoModal();
	}
	GetDlgItem(IDC_BUTTON4)->EnableWindow(TRUE);
}
