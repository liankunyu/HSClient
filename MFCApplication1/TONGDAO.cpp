// TONGDAO.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "TONGDAO.h"
#include "afxdialogex.h"
#include "MyPublicData.h"

// TONGDAO 对话框

IMPLEMENT_DYNAMIC(TONGDAO, CDialogEx)

TONGDAO::TONGDAO(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TONGDAO_DIALOG, pParent)
	, m_double1(0)
	, m_double2(0)
	, m_double3(0)
	, m_double4(0)
	, m_double5(0)
	, m_double6(0)
	, m_double7(0)
	, m_double8(0)
	, m_double9(0)
	, m_double10(0)
	, m_double11(0)
	, m_double12(0)
	, m_double13(0)
	, m_double14(0)
	, m_double15(0)
	, m_double16(0)
	, m_double17(0)
	, m_double18(0)
	, m_double19(0)
	, m_double20(0)
	, m_double21(0)
	, m_double22(0)
	, m_double23(0)
	, m_double24(0)
	, m_double25(0)
	, m_double26(0)
	, m_double27(0)
	, m_double28(0)
	, m_double29(0)
	, m_double30(0)
	, m_double31(0)
	, m_double32(0)
	, m_double33(0)
	, m_double34(0)
	, m_double35(0)
	, m_double36(0)
	, m_double37(0)
	, m_double38(0)
	, m_double39(0)
	, m_double40(0)
	, m_double41(0)
	, m_double42(0)
	, m_double43(0)
	, m_double44(0)
	, m_double45(0)
	, m_double46(0)
	, m_double47(0)
	, m_double48(0)
	, m_double49(0)
	, m_double50(0)
	, m_double51(0)
	, m_double52(0)
	, m_double53(0)
	, m_double54(0)
	, m_double55(0)
	, m_double56(0)
	, m_double57(0)
	, m_double58(0)
	, m_double59(0)
	, m_double60(0)
	, m_double61(0)
	, m_double62(0)
	, m_double63(0)
	, m_double64(0)
	, m_double65(0)
	, m_double66(0)
	, m_double67(0)
	, m_double68(0)
	, m_double69(0)
	, m_double70(0)
	, m_double71(0)
	, m_double72(0)
	, m_double73(0)
	, m_double74(0)
	, m_double75(0)
	, m_double76(0)
	, m_double77(0)
	, m_double78(0)
	, m_double79(0)
	, m_double80(0)
	, m_double81(0)
	, m_double82(0)
	, m_double83(0)
	, m_double84(0)
	, m_double85(0)
	, m_double86(0)
	, m_double87(0)
	, m_double88(0)
	, m_double89(0)
	, m_double90(0)
	, m_double91(0)
	, m_double92(0)
	, m_double93(0)
	, m_double94(0)
	, m_double95(0)
	, m_double96(0)
	,flag(1)
{

}

TONGDAO::~TONGDAO()
{
}

void TONGDAO::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT9, m_double2);
	DDX_Text(pDX, IDC_EDIT12, m_double3);
	DDX_Text(pDX, IDC_EDIT14, m_double4);
	DDX_Text(pDX, IDC_EDIT15, m_double5);
	DDX_Text(pDX, IDC_EDIT22, m_double6);
	DDX_Text(pDX, IDC_EDIT43, m_double7);
	DDX_Text(pDX, IDC_EDIT65, m_double8);
	DDX_Text(pDX, IDC_EDIT72, m_double9);
	DDX_Text(pDX, IDC_EDIT85, m_double10);
	DDX_Text(pDX, IDC_EDIT86, m_double11);
	DDX_Text(pDX, IDC_EDIT87, m_double12);
	DDX_Text(pDX, IDC_EDIT88, m_double13);
	DDX_Text(pDX, IDC_EDIT89, m_double14);
	DDX_Text(pDX, IDC_EDIT90, m_double15);
	DDX_Text(pDX, IDC_EDIT91, m_double16);
	DDX_Text(pDX, IDC_EDIT92, m_double17);
	DDX_Text(pDX, IDC_EDIT93, m_double18);
	DDX_Text(pDX, IDC_EDIT94, m_double19);
	DDX_Text(pDX, IDC_EDIT95, m_double20);
	DDX_Text(pDX, IDC_EDIT96, m_double21);
	DDX_Text(pDX, IDC_EDIT97, m_double22);
	DDX_Text(pDX, IDC_EDIT98, m_double23);
	DDX_Text(pDX, IDC_EDIT99, m_double24);
	DDX_Text(pDX, IDC_EDIT100, m_double25);
	DDX_Text(pDX, IDC_EDIT101 ,m_double26);
	DDX_Text(pDX, IDC_EDIT102, m_double27);
	DDX_Text(pDX, IDC_EDIT103, m_double28);
	DDX_Text(pDX, IDC_EDIT104, m_double29);
	DDX_Text(pDX, IDC_EDIT105, m_double30);
	DDX_Text(pDX, IDC_EDIT106, m_double31);
	DDX_Text(pDX, IDC_EDIT107, m_double32);
	DDX_Text(pDX, IDC_EDIT108, m_double33);
	DDX_Text(pDX, IDC_EDIT109, m_double34);
	DDX_Text(pDX, IDC_EDIT110, m_double35);
	DDX_Text(pDX, IDC_EDIT111, m_double36);
	DDX_Text(pDX, IDC_EDIT112, m_double37);
	DDX_Text(pDX, IDC_EDIT113, m_double38);
	DDX_Text(pDX, IDC_EDIT114, m_double39);
	DDX_Text(pDX, IDC_EDIT115, m_double40);
	DDX_Text(pDX, IDC_EDIT116, m_double41);
	DDX_Text(pDX, IDC_EDIT117, m_double42);
	DDX_Text(pDX, IDC_EDIT118, m_double43);
	DDX_Text(pDX, IDC_EDIT119, m_double44);
	DDX_Text(pDX, IDC_EDIT120, m_double45);
	DDX_Text(pDX, IDC_EDIT121, m_double46);
	DDX_Text(pDX, IDC_EDIT122, m_double47);
	DDX_Text(pDX, IDC_EDIT123, m_double48);
	DDX_Text(pDX, IDC_EDIT124, m_double49);
	DDX_Text(pDX, IDC_EDIT125, m_double50);
	DDX_Text(pDX, IDC_EDIT126, m_double51);
	DDX_Text(pDX, IDC_EDIT127, m_double52);
	DDX_Text(pDX, IDC_EDIT128, m_double53);
	DDX_Text(pDX, IDC_EDIT129, m_double54);
	DDX_Text(pDX, IDC_EDIT130, m_double55);
	DDX_Text(pDX, IDC_EDIT131, m_double56);
	DDX_Text(pDX, IDC_EDIT132, m_double57);
	DDX_Text(pDX, IDC_EDIT133, m_double58);
	DDX_Text(pDX, IDC_EDIT134, m_double59);
	DDX_Text(pDX, IDC_EDIT135, m_double60);
	DDX_Text(pDX, IDC_EDIT136, m_double61);
	DDX_Text(pDX, IDC_EDIT137, m_double62);
	DDX_Text(pDX, IDC_EDIT138, m_double63);
	DDX_Text(pDX, IDC_EDIT139, m_double64);
	DDX_Text(pDX, IDC_EDIT140, m_double65);
	DDX_Text(pDX, IDC_EDIT141, m_double66);
	DDX_Text(pDX, IDC_EDIT142, m_double67);
	DDX_Text(pDX, IDC_EDIT143, m_double68);
	DDX_Text(pDX, IDC_EDIT144, m_double69);
	DDX_Text(pDX, IDC_EDIT145, m_double70);
	DDX_Text(pDX, IDC_EDIT146, m_double71);
	DDX_Text(pDX, IDC_EDIT147, m_double72);
	DDX_Text(pDX, IDC_EDIT148, m_double73);
	DDX_Text(pDX, IDC_EDIT149, m_double74);
	DDX_Text(pDX, IDC_EDIT150, m_double75);
	DDX_Text(pDX, IDC_EDIT151, m_double76);
	DDX_Text(pDX, IDC_EDIT152, m_double77);
	DDX_Text(pDX, IDC_EDIT153, m_double78);
	DDX_Text(pDX, IDC_EDIT154, m_double79);
	DDX_Text(pDX, IDC_EDIT155, m_double80);
	DDX_Text(pDX, IDC_EDIT156, m_double81);
	DDX_Text(pDX, IDC_EDIT157, m_double82);
	DDX_Text(pDX, IDC_EDIT158, m_double83);
	DDX_Text(pDX, IDC_EDIT159, m_double84);
	DDX_Text(pDX, IDC_EDIT160, m_double85);
	DDX_Text(pDX, IDC_EDIT161, m_double86);
	DDX_Text(pDX, IDC_EDIT162, m_double87);
	DDX_Text(pDX, IDC_EDIT163, m_double88);
	DDX_Text(pDX, IDC_EDIT164, m_double89);
	DDX_Text(pDX, IDC_EDIT165, m_double90);
	DDX_Text(pDX, IDC_EDIT166, m_double91);
	DDX_Text(pDX, IDC_EDIT167, m_double92);
	DDX_Text(pDX, IDC_EDIT168, m_double93);
	DDX_Text(pDX, IDC_EDIT169, m_double94);
	DDX_Text(pDX, IDC_EDIT170, m_double95);
	DDX_Text(pDX, IDC_EDIT171, m_double96);
}


BEGIN_MESSAGE_MAP(TONGDAO, CDialogEx)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &TONGDAO::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &TONGDAO::OnBnClickedButton1)
END_MESSAGE_MAP()


// TONGDAO 消息处理程序


BOOL TONGDAO::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	double m_bian;  //用于combox的判断
	if (tongdaoflag==2)
	{
		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"Rear");
		GetDlgItem(IDC_BUTTON1)->EnableWindow(FALSE);
	}
	xiangjihao = 29+tongdaoflag + tongdaohao*2;
	CMyPublicData::setfunc(xiangjihao, 3, 1, 50);
	m_bian = databuff[0];
	if (m_bian==0)
	{
		GetDlgItem(IDC_COMBO3)->SetWindowText(L"停止测试");
	}
	if (m_bian == 1)
	{
		GetDlgItem(IDC_COMBO3)->SetWindowText(L"正常工作");
	}
	m_double1 = databuff[3];
	m_double2 = databuff[4];

	m_double3 = databuff[7];
	m_double4 = databuff[8];
	m_double5 = databuff[9];
	m_double6 = databuff[10];
	m_double7 = databuff[11];
	m_double8 = databuff[12];

	m_double9 = databuff[18];
	m_double10 = databuff[19];
	m_double11 = databuff[20];
	m_double12 = databuff[21];
	m_double13 = databuff[22];

	m_double14 = databuff[24];
	m_double15 = databuff[25];
	m_double16 = databuff[26];
	m_double17 = databuff[27];
	m_double18 = databuff[28];

	m_double19 = databuff[30];
	m_double20 = databuff[31];
	m_double21 = databuff[32];
	m_double22 = databuff[33];
	m_double23 = databuff[34];
	m_double24 = databuff[35];
	m_double25 = databuff[36];
	m_double26 = databuff[37];
	m_double27 = databuff[38];
	m_double28 = databuff[39];
	m_double29 = databuff[40];
	m_double30 = databuff[41];
	m_double31 = databuff[42];
	m_double32 = databuff[43];
	m_double33 = databuff[44];
	m_double34 = databuff[45];
	m_double35 = databuff[46];
	m_double36 = databuff[47];
	m_double37 = databuff[48];
	m_double38 = databuff[49];
	CMyPublicData::setfunc(xiangjihao, 3, 51, 50);
	m_double39 = databuff[0];
	m_double40 = databuff[1];
	m_double41 = databuff[2];
	m_double42 = databuff[3];
	m_double43 = databuff[4];
	m_double44 = databuff[5];
	m_double45 = databuff[6];
	m_double46 = databuff[7];
	m_double47 = databuff[8];
	m_double48 = databuff[9];
	m_double49 = databuff[10];
	m_double50 = databuff[11];
	m_double51 = databuff[12];
	m_double52 = databuff[13];
	m_double53 = databuff[14];
	m_double54 = databuff[15];
	m_double55 = databuff[16];
	m_double56 = databuff[17];
	m_double57 = databuff[18];
	m_double58 = databuff[19];
	m_double59 = databuff[20];
	m_double60 = databuff[21];
	m_double61 = databuff[22];
	m_double62 = databuff[23];
	m_double63 = databuff[24];

	m_double64 = databuff[26];
	m_double65 = databuff[27];
	m_double66 = databuff[28];

	m_double67 = databuff[30];
	m_double68 = databuff[31];
	m_double69 = databuff[32];
	m_double70 = databuff[33];
	m_double71 = databuff[34];
	m_double72 = databuff[35];
	m_double73 = databuff[36];
	m_double74 = databuff[37];
	m_double75 = databuff[38];
	m_double76 = databuff[39];
	m_double77 = databuff[40];
	m_double78 = databuff[41];
	m_double79 = databuff[42];
	m_double80 = databuff[43];
	m_double81 = databuff[44];
	m_double82 = databuff[45];
	m_double83 = databuff[46];
	m_double84 = databuff[47];
	m_double85 = databuff[48];
	m_double86 = databuff[49];
	CMyPublicData::setfunc(xiangjihao, 3, 101, 20);
	m_double87 = databuff[1];
	m_double88 = databuff[2];
	m_double89 = databuff[3];
	m_double90 = databuff[4];
	m_double91 = databuff[5];

	m_double92 = databuff[12];
	m_double93 = databuff[13];
	m_double94 = databuff[14];

	m_double95 = databuff[19];
	CMyPublicData::setfunc(xiangjihao, 3, 350, 10);
	m_double96 = databuff[0];
	if (addSW==2)
	{
		m_double52 = databuff[1];
		m_double53 = databuff[2];
		m_double54 = databuff[3];
		m_double55 = databuff[4];
		m_double56 = databuff[5];
		m_double57 = databuff[6];
		m_double65 = databuff[7];
		m_double66 = databuff[8];
	}
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


void TONGDAO::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void TONGDAO::ReSize()
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

void TONGDAO::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}


void TONGDAO::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON1)->GetWindowText(cstr);
	double m_bian;  //用于combox的判断
	if (cstr==L"Front")
	{
		if (modsd[xiangjihao-31]!=L"OFF")
		{
			CMyPublicData::setfunc(xiangjihao+1, 3, 1, 1);
			if (fanhuizhi != (-1))
			{
				xiangjihao = 31 + tongdaohao * 2;
				GetDlgItem(IDC_BUTTON1)->SetWindowText(L"Rear");
			}
			else
			{
				
				return;
			}
		}
		else
		{
			return;
		}
	}
	if (cstr == L"Rear")
	{
		xiangjihao = 30 + tongdaohao * 2;
		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"Front");
	}
	CMyPublicData::setfunc(xiangjihao, 3, 1, 50);
	m_bian = databuff[0];
	if (m_bian == 0)
	{
		GetDlgItem(IDC_COMBO3)->SetWindowText(L"停止测试");
	}
	if (m_bian == 1)
	{
		GetDlgItem(IDC_COMBO3)->SetWindowText(L"正常工作");
	}
	m_double1 = databuff[3];
	m_double2 = databuff[4];

	m_double3 = databuff[7];
	m_double4 = databuff[8];
	m_double5 = databuff[9];
	m_double6 = databuff[10];
	m_double7 = databuff[11];
	m_double8 = databuff[12];

	m_double9 = databuff[18];
	m_double10 = databuff[19];
	m_double11 = databuff[20];
	m_double12 = databuff[21];
	m_double13 = databuff[22];

	m_double14 = databuff[24];
	m_double15 = databuff[25];
	m_double16 = databuff[26];
	m_double17 = databuff[27];
	m_double18 = databuff[28];

	m_double19 = databuff[30];
	m_double20 = databuff[31];
	m_double21 = databuff[32];
	m_double22 = databuff[33];
	m_double23 = databuff[34];
	m_double24 = databuff[35];
	m_double25 = databuff[36];
	m_double26 = databuff[37];
	m_double27 = databuff[38];
	m_double28 = databuff[39];
	m_double29 = databuff[40];
	m_double30 = databuff[41];
	m_double31 = databuff[42];
	m_double32 = databuff[43];
	m_double33 = databuff[44];
	m_double34 = databuff[45];
	m_double35 = databuff[46];
	m_double36 = databuff[47];
	m_double37 = databuff[48];
	m_double38 = databuff[49];
	CMyPublicData::setfunc(xiangjihao, 3, 51, 50);
	m_double39 = databuff[0];
	m_double40 = databuff[1];
	m_double41 = databuff[2];
	m_double42 = databuff[3];
	m_double43 = databuff[4];
	m_double44 = databuff[5];
	m_double45 = databuff[6];
	m_double46 = databuff[7];
	m_double47 = databuff[8];
	m_double48 = databuff[9];
	m_double49 = databuff[10];
	m_double50 = databuff[11];
	m_double51 = databuff[12];
	m_double52 = databuff[13];
	m_double53 = databuff[14];
	m_double54 = databuff[15];
	m_double55 = databuff[16];
	m_double56 = databuff[17];
	m_double57 = databuff[18];
	m_double58 = databuff[19];
	m_double59 = databuff[20];
	m_double60 = databuff[21];
	m_double61 = databuff[22];
	m_double62 = databuff[23];
	m_double63 = databuff[24];

	m_double64 = databuff[26];
	m_double65 = databuff[27];
	m_double66 = databuff[28];

	m_double67 = databuff[30];
	m_double68 = databuff[31];
	m_double69 = databuff[32];
	m_double70 = databuff[33];
	m_double71 = databuff[34];
	m_double72 = databuff[35];
	m_double73 = databuff[36];
	m_double74 = databuff[37];
	m_double75 = databuff[38];
	m_double76 = databuff[39];
	m_double77 = databuff[40];
	m_double78 = databuff[41];
	m_double79 = databuff[42];
	m_double80 = databuff[43];
	m_double81 = databuff[44];
	m_double82 = databuff[45];
	m_double83 = databuff[46];
	m_double84 = databuff[47];
	m_double85 = databuff[48];
	m_double86 = databuff[49];
	CMyPublicData::setfunc(xiangjihao, 3, 101, 20);
	m_double87 = databuff[1];
	m_double88 = databuff[2];
	m_double89 = databuff[3];
	m_double90 = databuff[4];
	m_double91 = databuff[5];

	m_double92 = databuff[12];
	m_double93 = databuff[13];
	m_double94 = databuff[14];

	m_double95 = databuff[19];
	CMyPublicData::setfunc(xiangjihao, 3, 350, 10);
	m_double96 = databuff[0];
	if (addSW == 2)
	{
		m_double52 = databuff[1];
		m_double53 = databuff[2];
		m_double54 = databuff[3];
		m_double55 = databuff[4];
		m_double56 = databuff[5];
		m_double57 = databuff[6];
		m_double65 = databuff[7];
		m_double66 = databuff[8];
	}
	UpdateData(FALSE);

}
