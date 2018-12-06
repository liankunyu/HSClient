
// MFCApplication1Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"
#include "hunselingmindu.h"
#include "Famenceshi.h"
#include "Liuliangsheding.h"
#include "Mianji.h"
#include "Moshixuanze.h"
#include "Qinghui.h"
#include "Yansemingan.h"
#include "tiaoshi.h"
#include "rlingmindu.h"
#include "QuanXianDlg.h"
#include "Frmlogin.h"
#include "yuancheng.h"
#include "XMLHelper.h"
#include <vector>  
#include <string>  
#include <fstream>  
#include <iostream> 
#include <sstream>
#include "tongxinzhuangtai.h"
#include "mima.h"
#include "yanseCol.h"
#include "JIEZHIRIQI.h"
#include "Tip.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#define _WINSOCK_DEPRECATED_NO_WARNINGS
// 用于应用程序“关于”菜单项的 CAboutDlg 对话框
using namespace std;
class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

														// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}
extern int liu;
void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication1Dlg 对话框



CMFCApplication1Dlg::CMFCApplication1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFCApplication1Dlg::IDD, pParent)
	, ModelSize(_T(""))
	, m_Int(0)
	, m_CString(_T(""))
	, Time(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_HONGSHI);
}

void CMFCApplication1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_MODELSIZE_EDIT, ModelSize);
	DDX_Text(pDX, IDC_SHIJIAN, m_Int);
	DDX_Text(pDX, IDC_QIXIAN, m_CString);
	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA2, m_tingzhi);
	DDX_Text(pDX, IDC_STATIC41, Time);
}

BEGIN_MESSAGE_MAP(CMFCApplication1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDCANCEL, &CMFCApplication1Dlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_MOSHIXUANZE_BUTTON, &CMFCApplication1Dlg::OnBnClickedMoshixuanzeButton)
	ON_BN_CLICKED(IDC_LIULIANGSHEDING_BUTTON, &CMFCApplication1Dlg::OnBnClickedLiuliangshedingButton)
	ON_BN_CLICKED(IDC_LINGMINDU_BUTTON, &CMFCApplication1Dlg::OnBnClickedLingminduButton)
	ON_BN_CLICKED(IDC_FAMENCESHI_BUTTON, &CMFCApplication1Dlg::OnBnClickedFamenceshiButton)
	ON_BN_CLICKED(IDC_MIANJISHEDING_BUTTON, &CMFCApplication1Dlg::OnBnClickedMianjishedingButton)
	ON_BN_CLICKED(IDC_YANSEMINGAN_BUTTON, &CMFCApplication1Dlg::OnBnClickedYanseminganButton)
	ON_BN_CLICKED(IDC_QINGHUISHEDING_BUTTON, &CMFCApplication1Dlg::OnBnClickedQinghuishedingButton)
	ON_BN_CLICKED(IDC_TIAOSHIZHUANYONG_BUTTON, &CMFCApplication1Dlg::OnBnClickedTiaoshizhuanyongButton)
	ON_WM_SIZE()
	//ON_MESSAGE(UM_RECV, &CMFCApplication1Dlg::OnRecv)
//	ON_BN_CLICKED(IDC_KAISHI_BUTTON, &CMFCApplication1Dlg::OnBnClickedKaishiButton)
//	ON_BN_CLICKED(IDC_TINGZHI_BUTTON, &CMFCApplication1Dlg::OnBnClickedTingzhiButton)
//	ON_CBN_SELCHANGE(IDC_COMBO1, &CMFCApplication1Dlg::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_TONGXUNZHUANGTAI_BUTTON, &CMFCApplication1Dlg::OnBnClickedTongxunzhuangtaiButton)
	ON_BN_CLICKED(IDC_CHANGJIANWENTI_BUTTON, &CMFCApplication1Dlg::OnBnClickedChangjianwentiButton)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_KAISHIDA, &CMFCApplication1Dlg::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA2, &CMFCApplication1Dlg::OnBnClickedTingzhida2)
END_MESSAGE_MAP()


// CMFCApplication1Dlg 消息处理程序

BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}



	opXML opx4("lasttime.xml");
	const char* cre_id;
	opx4.QueryNode_Text("gjsj", cre_id);  //获的当前关机时间
	m_guanji =cre_id;
	opx4.QueryNode_Text("fangan", cre_id); //获得当前色选模式
	m_moshi = cre_id;                     
	ModelSize = m_moshi;          //将当前色选方案赋值给ModelSize编辑框
	opx4.QueryNode_Text("xianshi", cre_id);  //是否显示剩余时间
	CString CSVisible(cre_id);
	if (CSVisible==L"xianshi")
	{
		opx4.QueryNode_Text("jzsj", cre_id);
		m_CString = cre_id;
		m_Int = shijiancha(cre_id);//获得剩余时间
	}
	else     //隐藏时间部分
	{
		GetDlgItem(IDC_DAOJISHI_STATIC)->ShowWindow(FALSE);
		GetDlgItem(IDC_SHIJIAN)->ShowWindow(FALSE);
		GetDlgItem(IDC_TIAN)->ShowWindow(FALSE);
		GetDlgItem(IDC_QIXIAN)->ShowWindow(FALSE);
		GetDlgItem(IDC_DAOQI)->ShowWindow(FALSE);
	}
	
	//语言控制，通过xml文件更改语言
	//获得最后一次选择的语言
	const char* yuyan;
	opx4.QueryNode_Text("lastlang", yuyan);
	lang = yuyan;
	opx4.SaveFile();


	// TODO:  在此添加额外的初始化代码   

	//初始化语言                   
	  CString cstr;
	  opXML opx6(lang);
	  opx6.QueryNode_Text("num1701", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_KEHU_STATIC)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1702", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_DAOJISHI_STATIC)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1703", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_TIAN)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1704", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_DAOQI)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1705", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_LIULIANGSHEDING_BUTTON)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1706", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_LINGMINDU_BUTTON)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1707", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_MIANJISHEDING_BUTTON)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1708", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_QINGHUISHEDING_BUTTON)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1709", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_CHANGJIANWENTI_BUTTON)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1710", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_MOSHIXUANZE_BUTTON)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1711", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_FAMENCESHI_BUTTON)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1712", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_YANSEMINGAN_BUTTON)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1713", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_TIAOSHIZHUANYONG_BUTTON)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1714", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_TONGXUNZHUANGTAI_BUTTON)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1715", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1716", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_TINGZHIDA2)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1717", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1720", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_STATIC16)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1721", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_MINGZI_STATIC)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1722", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_DIZHIZHI_STATIC)->SetWindowText(cstr);
	  opx6.QueryNode_Text("num1723", yuyan);
	  cstr = yuyan;
	  GetDlgItem(IDC_DIANHUA_STATIC)->SetWindowText(cstr);
	  opx6.SaveFile();

	  //开始打、停止打按钮改变颜色
	  m_tingzhi.m_bTransparent = FALSE;
	  m_tingzhi.m_bDontUseWinXPTheme = TRUE;
	  m_tingzhi.SetFaceColor(RGB(0, 255, 127));
	  m_kaishi.m_bTransparent = FALSE;
	  m_kaishi.m_bDontUseWinXPTheme = TRUE;
	  m_kaishi.SetFaceColor(RGB(255, 215, 0));

	  //初始化COM口，实现与下位机(色选机控制系统：主板相机)的通信
	  CMyPublicData::ModbusInit(L"COM5");                

	  //初始化所有全局变量
	  CMyPublicData::readXML("lasttime.xml");


	  UpdateData(FALSE);

		// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
		//  执行此操作
		SetIcon(m_hIcon, TRUE);			// 设置大图标
		SetIcon(m_hIcon, FALSE);		// 设置小图标

		ModifyStyle(WS_CAPTION, 0, 0);  // 如果只是要普通的全屏，不想去掉标题栏，就不用第一个语句
		SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
		//初始化窗口位置
		CRect rect;
		GetClientRect(&rect);     //取客户区大小    
		old.x = rect.right - rect.left;
		old.y = rect.bottom - rect.top;



		//判断通信是否正常
		for (int i = 0; i < 21; i++)
		{
			if (tongxincuowu[i] == (-1))
			{
				m_Tip = "num6601";//传入节点名
				Tip tip;
				tip.DoModal();
				fanhuizhi = 0;
				SetTimer(1, 1000, NULL);  //设置定时器判断是否出现时间错误，有两种情况，第一种系统时间出错，第二种是超过截止日期
				SetTimer(2, 2000, NULL);  //判断指令下发是否出现错误
				return false;
			}
		}
		if (!(CMyPublicData::bit_read(10, 104, 8)))
		{
			m_Tip = "num6602";//传入节点名
			Tip tip;
			tip.DoModal();
		}
		SetTimer(1, 1000, NULL);  //设置定时器判断是否出现时间错误，有两种情况，第一种系统时间出错，第二种是超过截止日期
		SetTimer(2, 2000, NULL);  //判断指令下发是否出现错误
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCApplication1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	//ofstream outfile("E:\\out.txt", ofstream::app);
	//string temp;
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCApplication1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCApplication1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


//关机
void CMFCApplication1Dlg::OnBnClickedCancel()
{
	// TODO:  在此添加控件通知处理程序代码

	//关闭阀电源
	CMyPublicData::bit_read(10, 9, 6);
	CMyPublicData::bit_set(10, 9, 6, false);

	//关机时将所有修改值重新写入lasttime.xml文件
	CMyPublicData::writerXML("lasttime.xml");



	//关闭window系统
		//HANDLE hToken;
		//TOKEN_PRIVILEGES tkp;
		//if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))//获得当前进程伪句柄函数GetCurrentProcess
		//{
		//	MessageBox(L"取得程序访问失败");
		//	return;
		//}
		//LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, &tkp.Privileges[0].Luid);  //查找进程权限函数LookupPrivilegeValue

		//tkp.PrivilegeCount = 1;  // 设定特权   
		//tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED; //权限启用
		//AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, (PTOKEN_PRIVILEGES)NULL, 0); //获得关机权限函数AdjustTokenPrivileges
		//if (GetLastError() != ERROR_SUCCESS)//该函数返回调用线程最近的错误代码值
		//	return;
		//if (!ExitWindowsEx(EWX_SHUTDOWN | EWX_FORCE, SHTDN_REASON_MAJOR_OPERATINGSYSTEM
		//	| SHTDN_REASON_MINOR_UPGRADE
		//	| SHTDN_REASON_FLAG_PLANNED))//关机函数ExitWindowEx   
		//	return;                      //EWX_LOGOFF   0 终止进程系统注销                    
		//return;                          //EWX_SHUTDOWN 1 关闭系统电源                                                                                                                      
		//								 // EWX_REBOOT  2 重新启动
		//								 //EWX_FORCE    4 强行终止没有响应的进程
		CDialogEx::OnCancel();

}


void CMFCApplication1Dlg::OnBnClickedMoshixuanzeButton()
{
	// TODO:  在此添加控件通知处理程序代码
	datatestDPU[4] = 0;
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != L"OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 1, 1);
		}
	}
	kaishida = false;
	Moshixuanze moshi;
	moshi.DoModal();
}


void CMFCApplication1Dlg::OnBnClickedLiuliangshedingButton()
{
	// TODO: 在此添加控件通知处理程序代码
	CLiuliangsheding liuliang;
	liuliang.DoModal();
}


void CMFCApplication1Dlg::OnBnClickedLingminduButton()
{
	// TODO: 在此添加控件通知处理程序代码
	rlingmindu rling;
	rling.DoModal();
}


void CMFCApplication1Dlg::OnBnClickedFamenceshiButton()
{
	// TODO: 在此添加控件通知处理程序代码
	Famenceshi famen;
	famen.DoModal();
}


void CMFCApplication1Dlg::OnBnClickedMianjishedingButton()
{
	// TODO: 在此添加控件通知处理程序代码
	Mianji mianji;
	mianji.DoModal();
}


void CMFCApplication1Dlg::OnBnClickedYanseminganButton()
{
	// TODO: 在此添加控件通知处理程序代码
	yanseCol ysCol;
	ysCol.DoModal();
}


void CMFCApplication1Dlg::OnBnClickedQinghuishedingButton()
{
	// TODO: 在此添加控件通知处理程序代码
	Qinghui qinghui;
	qinghui.DoModal();
}


void CMFCApplication1Dlg::OnBnClickedTiaoshizhuanyongButton()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!quanxian)
	{
		CQuanXianDlg qx;
		qx.DoModal();
	}
	if (quanxian)
	{
		tiaoshi ts;
		ts.DoModal();
	}
}



//初始化窗口大小
void CMFCApplication1Dlg::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void CMFCApplication1Dlg::ReSize()
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

//   double CMFCApplication1Dlg::atoi(const char* str)
//{
//    string ss=str;
//	istringstream iss(ss);
//	double num;
//	iss >> num;
//	return num;
//}







void CMFCApplication1Dlg::OnBnClickedTongxunzhuangtaiButton()
{
	// TODO: 在此添加控件通知处理程序代码
	tongxinzhuangtai tx;
	tx.DoModal();
}


void CMFCApplication1Dlg::OnBnClickedChangjianwentiButton()
{
	// TODO: 在此添加控件通知处理程序代码
	yuancheng yc;
	yc.DoModal();
}



void CMFCApplication1Dlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (nIDEvent == 1)
	{
		ModelSize = m_moshi;    //将当前色选方案赋值给ModelSize编辑框
		if (m_Int<0)
		{
			KillTimer(1);
			mima mm;
			mm.DoModal();
			JIEZHIRIQI jz;
			jz.DoModal();
		}
		if (shijiancha1(m_guanji) < 0)
		{
			m_Tip = "num6603";//传入节点名
			Tip tip;
			tip.DoModal();
			//HANDLE hToken;
			//TOKEN_PRIVILEGES tkp;
			//if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))//获得当前进程伪句柄函数GetCurrentProcess
			//{
			//	MessageBox(L"取得程序访问失败");
			//	return;
			//}
			//LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, &tkp.Privileges[0].Luid);  //查找进程权限函数LookupPrivilegeValue

			//tkp.PrivilegeCount = 1;  // 设定特权   
			//tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED; //权限启用
			//AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, (PTOKEN_PRIVILEGES)NULL, 0); //获得关机权限函数AdjustTokenPrivileges
			//if (GetLastError() != ERROR_SUCCESS)//该函数返回调用线程最近的错误代码值
			//	return;
			//if (!ExitWindowsEx(EWX_SHUTDOWN | EWX_FORCE, SHTDN_REASON_MAJOR_OPERATINGSYSTEM
			//	| SHTDN_REASON_MINOR_UPGRADE
			//	| SHTDN_REASON_FLAG_PLANNED))//关机函数ExitWindowEx   
			//	return;                      //EWX_LOGOFF   0 终止进程系统注销                    
			//return;                          //EWX_SHUTDOWN 1 关闭系统电源                                                                                                                      
			//								 // EWX_REBOOT  2 重新启动
			//								 //EWX_FORCE    4 强行终止没有响应的进程  
		}
	}
	if (nIDEvent == 2)
	{
		if (SWlang==1)
		{
			const char* yuyan;
			CString cstr;
			opXML opx(lang);
			opx.QueryNode_Text("num1701", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_KEHU_STATIC)->SetWindowText(cstr);
			opx.QueryNode_Text("num1702", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_DAOJISHI_STATIC)->SetWindowText(cstr);
			opx.QueryNode_Text("num1703", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_TIAN)->SetWindowText(cstr);
			opx.QueryNode_Text("num1704", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_DAOQI)->SetWindowText(cstr);
			opx.QueryNode_Text("num1705", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_LIULIANGSHEDING_BUTTON)->SetWindowText(cstr);
			opx.QueryNode_Text("num1706", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_LINGMINDU_BUTTON)->SetWindowText(cstr);
			opx.QueryNode_Text("num1707", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_MIANJISHEDING_BUTTON)->SetWindowText(cstr);
			opx.QueryNode_Text("num1708", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_QINGHUISHEDING_BUTTON)->SetWindowText(cstr);
			opx.QueryNode_Text("num1709", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_CHANGJIANWENTI_BUTTON)->SetWindowText(cstr);
			opx.QueryNode_Text("num1710", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_MOSHIXUANZE_BUTTON)->SetWindowText(cstr);
			opx.QueryNode_Text("num1711", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_FAMENCESHI_BUTTON)->SetWindowText(cstr);
			opx.QueryNode_Text("num1712", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_YANSEMINGAN_BUTTON)->SetWindowText(cstr);
			opx.QueryNode_Text("num1713", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_TIAOSHIZHUANYONG_BUTTON)->SetWindowText(cstr);
			opx.QueryNode_Text("num1714", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_TONGXUNZHUANGTAI_BUTTON)->SetWindowText(cstr);
			opx.QueryNode_Text("num1715", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
			opx.QueryNode_Text("num1716", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_TINGZHIDA2)->SetWindowText(cstr);
			opx.QueryNode_Text("num1717", yuyan);
			cstr = yuyan;
			GetDlgItem(IDCANCEL)->SetWindowText(cstr);
			opx.QueryNode_Text("num1720", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_STATIC16)->SetWindowText(cstr);
			opx.QueryNode_Text("num1721", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_MINGZI_STATIC)->SetWindowText(cstr);
			opx.QueryNode_Text("num1722", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_DIZHIZHI_STATIC)->SetWindowText(cstr);
			opx.QueryNode_Text("num1723", yuyan);
			cstr = yuyan;
			GetDlgItem(IDC_DIANHUA_STATIC)->SetWindowText(cstr);
			opx.SaveFile();
			SWlang = 0;
			UpdateData(FALSE);
		}
		if (fanhuizhi == (-1))
		{
			fanhuizhi = 0;
			m_Tip = "num6601";//传入节点名
			Tip tip;
			tip.DoModal();
		}
	}
	//用于更新时间
	UpdateData(FALSE);
	CDialogEx::OnTimer(nIDEvent);
}


int CMFCApplication1Dlg::shijiancha(const char* str)
{
		//const char* s;
		//opXML opx("lasttime.xml");
		//opx.QueryNode_Text(str, s);
		//string s2 = s;
		//opx.Encode(s2);
		//s = s2.c_str();
		//int nYear, nMonth, nDate, nHour, nMin, nSec;
		int nYear, nMonth, nDate;
		//sscanf(s, "%d-%d-%d %d:%d:%d", &nYear, &nMonth, &nDate, &nHour, &nMin, &nSec);
		sscanf_s(str, "%d-%d-%d", &nYear, &nMonth, &nDate);
		CTime t(nYear, nMonth, nDate, 0, 0, 0);
		CTime tm = CTime::GetCurrentTime();
		CTimeSpan span = t - tm;  //计算当前系统时间与时间t的间隔
		int iDay = span.GetDays(); //获取这段时间间隔共有多少天
		return iDay;
}


double CMFCApplication1Dlg::shijiancha1(const char* str)
{

		//const char* s;
		//opXML opx("lasttime.xml");
		//opx.QueryNode_Text(str, s);
		//string s2 = s;
		//opx.Encode(s2);
		//s = s2.c_str();
		int nYear, nMonth, nDate, nHour, nMin, nSec;
		//int nYear, nMonth, nDate;
		sscanf_s(str, "%d-%d-%d %d:%d:%d", &nYear, &nMonth, &nDate, &nHour, &nMin, &nSec);
		//sscanf_s(s, "%d-%d-%d", &nYear, &nMonth, &nDate);
		CTime t(nYear, nMonth, nDate, nHour, nMin, nSec);
		CTime tm = CTime::GetCurrentTime();
		Time = tm.Format("%Y-%m-%d %H:%M:%S");      //显示当前系统时间
		CTimeSpan span = tm - t;  //计算当前系统时间与时间t1的间隔
		double iMinutes = span.GetTotalMinutes(); //获取这段时间间隔共有多少分钟
		return iMinutes;

}

void CMFCApplication1Dlg::OnBnClickedKaishida()
{
	// TODO: 在此添加控件通知处理程序代码
	datatestDPU[4] = 1;
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != L"OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 1, 1);
		}
	}
	datatestDPU[4] = 0;
	for (int i = 0; i < 10; i++)
	{
		if (liuliangsd[i] != L"OFF")
		{
			datatestDPU[4 + i] = 1;
		}
	}
	CMyPublicData::setfunc(10, 16, 20, 10);
	m_kaishi.m_bTransparent = FALSE;
	m_kaishi.m_bDontUseWinXPTheme = TRUE;
	m_kaishi.SetFaceColor(RGB(0, 255, 127));
	m_tingzhi.m_bTransparent = FALSE;
	m_tingzhi.m_bDontUseWinXPTheme = TRUE;
	m_tingzhi.SetFaceColor(RGB(255, 215, 0));
	kaishida = true;
}


void CMFCApplication1Dlg::OnBnClickedTingzhida2()
{
	// TODO: 
	datatestDPU[4] = 0;
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != L"OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 1, 1);
		}
	}
	for (int i=0;i<10;i++)
	{
		datatestDPU[4 + i] = 0;
	}
	CMyPublicData::setfunc(10, 16, 20, 10);
	m_tingzhi.m_bTransparent = FALSE;
	m_tingzhi.m_bDontUseWinXPTheme = TRUE;
	m_tingzhi.SetFaceColor(RGB(0, 255, 127));
	m_kaishi.m_bTransparent = FALSE;
	m_kaishi.m_bDontUseWinXPTheme = TRUE;
	m_kaishi.SetFaceColor(RGB(255, 215, 0));
	kaishida = false;
}

