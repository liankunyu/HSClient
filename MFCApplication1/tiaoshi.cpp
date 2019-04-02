// tiaoshi.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "tiaoshi.h"
#include "afxdialogex.h"
#include "Pingyi.h"
#include "Yanchi.h"
#include "InputDlg.h"
#include "Liuliangsheding.h"
#include "rlingmindu.h"
#include "hunselingmindu.h"
#include "Mianji.h"
#include "Yansemingan.h"
#include "Famenceshi.h"
#include "Qinghui.h"
#include "Moshixuanze.h"
#include "Rzengyi.h"
#include "modsheding.h"
#include "VGAsheding.h"
#include "huiduhulue.h"
#include "Beijing.h"
#include "xingxuanshezhi.h"
#include "caitushezhi.h"
#include "fuzhu.h"
#include "udpcaitu.h"
#include "XMLHelper.h"
#include "yanseCol.h"
#include "xiangjihuafen.h"
#include "Tip.h"
#include "Tip2.h"
// tiaoshi 对话框

IMPLEMENT_DYNAMIC(tiaoshi, CDialogEx)

tiaoshi::tiaoshi(CWnd* pParent /*=NULL*/)
	: CDialogEx(tiaoshi::IDD, pParent)
{

}

tiaoshi::~tiaoshi()
{
}

void tiaoshi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(tiaoshi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON16, &tiaoshi::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON10, &tiaoshi::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON1, &tiaoshi::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &tiaoshi::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &tiaoshi::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &tiaoshi::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON57, &tiaoshi::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON34, &tiaoshi::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &tiaoshi::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON38, &tiaoshi::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON56, &tiaoshi::OnBnClickedButton56)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON33, &tiaoshi::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON55, &tiaoshi::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON40, &tiaoshi::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON61, &tiaoshi::OnBnClickedButton61)
	ON_CBN_SELCHANGE(IDC_COMBO1, &tiaoshi::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON135, &tiaoshi::OnBnClickedButton135)
	ON_BN_CLICKED(IDC_BUTTON6, &tiaoshi::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &tiaoshi::OnBnClickedButton7)
	ON_BN_CLICKED(IDCANCEL, &tiaoshi::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON8, &tiaoshi::OnBnClickedButton8)
	ON_BN_CLICKED(IDCANCEL2, &tiaoshi::OnBnClickedCancel2)
	ON_BN_CLICKED(IDC_BUTTON9, &tiaoshi::OnBnClickedButton9)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// tiaoshi 消息处理程序


void tiaoshi::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	Pingyi pingyisheding1;
	pingyisheding1.DoModal();
}


void tiaoshi::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	Yanchi yanchi1;
	yanchi1.DoModal();
}


void tiaoshi::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	rlingmindu rlingmindu1;
	rlingmindu1.DoModal();
}


void tiaoshi::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CLiuliangsheding liuliang1;
	liuliang1.DoModal();
}


void tiaoshi::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	Beijing bei;
	bei.DoModal();
}


void tiaoshi::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	VGAsheding vvvga;
	vvvga.DoModal();
}


void tiaoshi::OnBnClickedButton57()
{
	// TODO: 在此添加控件通知处理程序代码
	Famenceshi famen1;
	famen1.DoModal();
}


void tiaoshi::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	yanseCol yc;
	yc.DoModal();
}


void tiaoshi::OnBnClickedButton35()
{
	// TODO: 在此添加控件通知处理程序代码
	Mianji mianji1;
	mianji1.DoModal();
}


void tiaoshi::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	Rzengyi rzengyi1;
	rzengyi1.DoModal();
}


void tiaoshi::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	Qinghui qinghui1;
	qinghui1.DoModal();
}


BOOL tiaoshi::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// TODO:  在此添加额外的初始化


	//利用XML初始化各个控件的名称
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num3501", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num3502", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num3503", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON34)->SetWindowText(cstr);
	opx.QueryNode_Text("num3504", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON40)->SetWindowText(cstr);
	opx.QueryNode_Text("num3505", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON38)->SetWindowText(cstr);
	opx.QueryNode_Text("num3506", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON8)->SetWindowText(cstr);
	opx.QueryNode_Text("num3507", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
	opx.QueryNode_Text("num3508", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON57)->SetWindowText(cstr);
	opx.QueryNode_Text("num3509", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON35)->SetWindowText(cstr);
	opx.QueryNode_Text("num3510", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON61)->SetWindowText(cstr);
	opx.QueryNode_Text("num3511", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON135)->SetWindowText(cstr);
	opx.QueryNode_Text("num3512", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
	opx.QueryNode_Text("num3513", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON33)->SetWindowText(cstr);
	opx.QueryNode_Text("num3514", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON56)->SetWindowText(cstr);
	opx.QueryNode_Text("num3515", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
	opx.QueryNode_Text("num3516", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON6)->SetWindowText(cstr);
	opx.QueryNode_Text("num3517", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(cstr);
	opx.QueryNode_Text("num3518", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON55)->SetWindowText(cstr);
	opx.QueryNode_Text("num3519", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON10)->SetWindowText(cstr);
	opx.QueryNode_Text("num3520", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON7)->SetWindowText(cstr);
	opx.QueryNode_Text("num3521", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON9)->SetWindowText(cstr);
	opx.QueryNode_Text("num3522", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL2)->SetWindowText(cstr);
	opx.SaveFile();

	SetTimer(1, 1000, NULL);
	UpdateData(FALSE);

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


void tiaoshi::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void tiaoshi::ReSize()
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

void tiaoshi::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	modsheding mod;
	mod.DoModal();
}


void tiaoshi::OnBnClickedButton55()
{
	// TODO: 在此添加控件通知处理程序代码
	fuzhu fuzhu1;
	fuzhu1.DoModal();
}


void tiaoshi::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	xingxuanshezhi xingxuan;
	xingxuan.DoModal();
}




void tiaoshi::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
	caitushezhi caishe;
	caishe.DoModal();
}


void tiaoshi::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
	//CString	ComChoosed;
	//m_combox1.GetLBText(m_combox1.GetCurSel(), ComChoosed);
	//CMyPublicData::ModbusInit(ComChoosed);
}



void tiaoshi::OnBnClickedButton135()
{
	// TODO: 在此添加控件通知处理程序代码
	udpcaitu udp1;
	udp1.DoModal();
}


void tiaoshi::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	BOOL boolArray[50];
	boolArray[0]=Reset("./Reset/lasttime.xml", "lasttime.xml"); 
	boolArray[1] = Reset("./Reset/mode1.xml", "mode1.xml");
	boolArray[2] = Reset("./Reset/mode2.xml", "mode2.xml");
	boolArray[3] = Reset("./Reset/mode3.xml", "mode3.xml");
	boolArray[4] = Reset("./Reset/mode4.xml", "mode4.xml");
	boolArray[5] = Reset("./Reset/mode5.xml", "mode5.xml");
	boolArray[6] = Reset("./Reset/mode6.xml", "mode6.xml");
	boolArray[7] = Reset("./Reset/mode7.xml", "mode7.xml");
	boolArray[8] = Reset("./Reset/mode8.xml", "mode8.xml");
	boolArray[9] = Reset("./Reset/mode9.xml", "mode9.xml");
	boolArray[10] = Reset("./Reset/mode10.xml", "mode10.xml");
	boolArray[11] = Reset("./Reset/mode11.xml", "mode11.xml");
	boolArray[12] = Reset("./Reset/mode12.xml", "mode12.xml");
	boolArray[13] = Reset("./Reset/mode13.xml", "mode13.xml");
	boolArray[14] = Reset("./Reset/mode14.xml", "mode14.xml");
	boolArray[15] = Reset("./Reset/mode15.xml", "mode15.xml");

	boolArray[40] = Reset("./Reset/name.xml", "name.xml");
	for (int i=0;i<16;i++)
	{
		if (boolArray[i]==FALSE)
		{
			m_Tip = "num6619";
			Tip tip;
			tip.DoModal();
			return;
		}
	}
	if (boolArray[40] == FALSE)
	{
		m_Tip = "num6619";
		Tip tip;
		tip.DoModal();
		return;
	}
	m_Tip = "num6620";
	Tip tip;
	tip.DoModal(); 
}

BOOL tiaoshi::Reset(string str, string str1)
{
	FILE *pFile = NULL, *pFil=NULL;
	if (fopen_s(&pFile, str.c_str(), "rb") != 0)
	{
		return FALSE;
	}
	fseek(pFile, 0, SEEK_END);//将指针指到文件最后一个位置
	int len = ftell(pFile);//获得文件最大长度
	byte *pBuf;
	pBuf = new byte[len];
	rewind(pFile);   //指针复位  
	fread(pBuf, 1, len, pFile);
	if (fopen_s(&pFil, str1.c_str(), "w") != 0)
	{
		return FALSE;
	}
	fwrite(pBuf, 1, len , pFil);
	fclose(pFile);
	fclose(pFil);
	return TRUE;
}


void tiaoshi::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	xiangjihuafen xj;
	xj.DoModal();
}


void tiaoshi::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	quanxian = false;
	CDialogEx::OnCancel();
}


void tiaoshi::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	huiduhulue hdhl;
	hdhl.DoModal();
}


void tiaoshi::OnBnClickedCancel2()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}




void tiaoshi::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	//重启
	HANDLE hToken;
	TOKEN_PRIVILEGES tkp;
	if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))//获得当前进程伪句柄函数GetCurrentProcess
	{
		m_Tip = "num6608";//传入节点名
		Tip tip;
		tip.DoModal();
		return;
	}
	LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, &tkp.Privileges[0].Luid);  //查找进程权限函数LookupPrivilegeValue

	tkp.PrivilegeCount = 1;  // 设定特权   
	tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED; //权限启用
	AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, (PTOKEN_PRIVILEGES)NULL, 0); //获得关机权限函数AdjustTokenPrivileges
	if (GetLastError() != ERROR_SUCCESS)//该函数返回调用线程最近的错误代码值
		return;
	if (!ExitWindowsEx(EWX_REBOOT | EWX_FORCE, SHTDN_REASON_MAJOR_OPERATINGSYSTEM
		| SHTDN_REASON_MINOR_UPGRADE
		| SHTDN_REASON_FLAG_PLANNED))//关机函数ExitWindowEx   
		return;                      //EWX_LOGOFF   0 终止进程系统注销                    
	return;                          //EWX_SHUTDOWN 1 关闭系统电源                                                                                                                      
									 // EWX_REBOOT  2 重新启动
									 //EWS_FORCE    4 强行终止没有响应的进程  

	////关机
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
	//if (!ExitWindowsEx(EWX_REBOOT | EWX_FORCE, SHTDN_REASON_MAJOR_OPERATINGSYSTEM
	//	| SHTDN_REASON_MINOR_UPGRADE
	//	| SHTDN_REASON_FLAG_PLANNED))//关机函数ExitWindowEx   
	//	return;                      //EWX_LOGOFF   0 终止进程系统注销                    
	//return;                          //EWX_SHUTDOWN 1 关闭系统电源                                                                                                                      
	//								 // EWX_REBOOT  2 重新启动
	//								 //EWX_FORCE    4 强行终止没有响应的进程  



	//开启自启动
	//HKEY hKey;
	//CString strRegPath = _T("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run");
	////找到系统的启动项  
	//if (RegOpenKeyEx(HKEY_CURRENT_USER, strRegPath, 0, KEY_ALL_ACCESS, &hKey) == ERROR_SUCCESS) //打开启动项       
	//{
	//	TCHAR szModule[MAX_PATH];
	//	GetModuleFileName(NULL, szModule, MAX_PATH);//得到本程序自身的全路径  
	//	RegSetValueEx(hKey, _T("Demo"), 0, REG_SZ, (LPBYTE)szModule, (lstrlen(szModule) + 1) * sizeof(TCHAR));
	//	//添加一个子Key,并设置值，"Demo"是应用程序名字（不加后缀.exe）  
	//	RegCloseKey(hKey); //关闭注册表  
	//}
	//else
	//{
	//	AfxMessageBox(_T("系统参数错误,不能随系统启动"));
	//}
	//取消开机自启动
	//if (RegOpenKeyEx(HKEY_CURRENT_USER, strRegPath, 0, KEY_ALL_ACCESS, &hKey) == ERROR_SUCCESS)
	//{
	//	RegDeleteValue(hKey, _T("Demo"));  //"Demo"是应用程序名字（不加后缀.exe）
	//	RegCloseKey(hKey);
	//}
}


void tiaoshi::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (nIDEvent == 1)
	{
		if (SWlang == 2)
		{
			const char* yuyan;
			CString cstr;
			opXML opx(lang);
			opx.QueryNode_Text("num3501", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
			opx.QueryNode_Text("num3502", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
			opx.QueryNode_Text("num3503", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON34)->SetWindowText(cstr);
			opx.QueryNode_Text("num3504", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON40)->SetWindowText(cstr);
			opx.QueryNode_Text("num3505", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON38)->SetWindowText(cstr);
			opx.QueryNode_Text("num3506", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON8)->SetWindowText(cstr);
			opx.QueryNode_Text("num3507", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
			opx.QueryNode_Text("num3508", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON57)->SetWindowText(cstr);
			opx.QueryNode_Text("num3509", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON35)->SetWindowText(cstr);
			opx.QueryNode_Text("num3510", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON61)->SetWindowText(cstr);
			opx.QueryNode_Text("num3511", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON135)->SetWindowText(cstr);
			opx.QueryNode_Text("num3512", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
			opx.QueryNode_Text("num3513", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON33)->SetWindowText(cstr);
			opx.QueryNode_Text("num3514", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON56)->SetWindowText(cstr);
			opx.QueryNode_Text("num3515", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
			opx.QueryNode_Text("num3516", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON6)->SetWindowText(cstr);
			opx.QueryNode_Text("num3517", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON4)->SetWindowText(cstr);
			opx.QueryNode_Text("num3518", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON55)->SetWindowText(cstr);
			opx.QueryNode_Text("num3519", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON10)->SetWindowText(cstr);
			opx.QueryNode_Text("num3520", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON7)->SetWindowText(cstr);
			opx.QueryNode_Text("num3521", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON9)->SetWindowText(cstr);
			opx.QueryNode_Text("num3522", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDCANCEL2)->SetWindowText(cstr);
			opx.SaveFile();
			SWlang = 1;
			UpdateData(FALSE);
		}
	}
	CDialogEx::OnTimer(nIDEvent);
}
