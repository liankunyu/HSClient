// ZHUBANSHUJU.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "ZHUBANSHUJU.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "MyPublicData.h"

// ZHUBANSHUJU 对话框

IMPLEMENT_DYNAMIC(ZHUBANSHUJU, CDialogEx)

ZHUBANSHUJU::ZHUBANSHUJU(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ZHUBANSHUJU_DIALOG1, pParent)
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
	, m_double16(0)
	, m_double17(0)
	, m_double18(0)
	, m_Cstring(_T(""))
{

}

ZHUBANSHUJU::~ZHUBANSHUJU()
{
}

void ZHUBANSHUJU::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT2, m_double2);
	DDX_Text(pDX, IDC_EDIT3, m_double3);
	DDX_Text(pDX, IDC_EDIT4, m_double4);
	DDX_Text(pDX, IDC_EDIT5, m_double5);
	DDX_Text(pDX, IDC_EDIT6, m_double6);
	DDX_Text(pDX, IDC_EDIT7, m_double7);
	DDX_Text(pDX, IDC_EDIT8, m_double8);
	DDX_Text(pDX, IDC_EDIT9, m_double9);
	DDX_Text(pDX, IDC_EDIT10, m_double10);
	DDX_Text(pDX, IDC_EDIT34, m_double11);
	DDX_Text(pDX, IDC_EDIT35, m_double12);
	DDX_Text(pDX, IDC_EDIT36, m_double13);
	DDX_Text(pDX, IDC_EDIT37, m_double14);
	DDX_Text(pDX, IDC_EDIT38, m_Cstring);
	DDX_Text(pDX, IDC_EDIT39, m_double16);
	DDX_Text(pDX, IDC_EDIT47, m_double17);
	DDX_Text(pDX, IDC_EDIT48, m_double18);
}


BEGIN_MESSAGE_MAP(ZHUBANSHUJU, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON34, &ZHUBANSHUJU::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON16, &ZHUBANSHUJU::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON37, &ZHUBANSHUJU::OnBnClickedButton37)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &ZHUBANSHUJU::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON29, &ZHUBANSHUJU::OnBnClickedButton29)
END_MESSAGE_MAP()


// ZHUBANSHUJU 消息处理程序


void ZHUBANSHUJU::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON34)->GetWindowText(zhendong[0]);
	if (zhendong[0] == L"ON")
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"1")
			{
				datatestDPU[4] = 0;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON34)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"1")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON34)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON34)->GetWindowText(zhendong[0]);
}


void ZHUBANSHUJU::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON16)->GetWindowText(zhendong[1]);
	if (zhendong[1] == L"ON")
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"2")
			{
				datatestDPU[4] = 0;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"2")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON16)->GetWindowText(zhendong[1]);
}


void ZHUBANSHUJU::OnBnClickedButton37()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON37)->GetWindowText(zhendong[2]);
	if (zhendong[2] == L"ON")
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"3")
			{
				datatestDPU[4] = 0;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON37)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"3")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON37)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON37)->GetWindowText(zhendong[2]);
}


BOOL ZHUBANSHUJU::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	UpdateData(TRUE);
	// TODO:  在此添加额外的初始化

	m_Cstring.Format(_T("%.8d"), Device_ID);

	GetDlgItem(IDC_BUTTON34)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON16)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON37)->SetWindowText(zhendong[2]);

	CMyPublicData::setfunc(10, 3, 10, 30);
	m_double1 = databuff[0];
	m_double2 = databuff[1];
	m_double3 = databuff[2];
	m_double4 = databuff[3];
	m_double5 = databuff[4];
	m_double6 = databuff[5];
	m_double7 = databuff[6];
	m_double8 = databuff[7];
	m_double9 = databuff[8];
	m_double10 = databuff[9];
	if (databuff[10]==1)
	{
		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"ON");
	}
	if (databuff[11] == 1)
	{
		GetDlgItem(IDC_BUTTON2)->SetWindowText(L"ON");
	}
	if (databuff[12] == 1)
	{
		GetDlgItem(IDC_BUTTON3)->SetWindowText(L"ON");
	}
	if (databuff[13] == 1)
	{
		GetDlgItem(IDC_BUTTON4)->SetWindowText(L"ON");
	}
	if (databuff[14] == 1)
	{
		GetDlgItem(IDC_BUTTON5)->SetWindowText(L"ON");
	}
	if (databuff[15] == 1)
	{
		GetDlgItem(IDC_BUTTON6)->SetWindowText(L"ON");
	}
	if (databuff[16] == 1)
	{
		GetDlgItem(IDC_BUTTON7)->SetWindowText(L"ON");
	}
	if (databuff[17] == 1)
	{
		GetDlgItem(IDC_BUTTON8)->SetWindowText(L"ON");
	}
	if (databuff[18] == 1)
	{
		GetDlgItem(IDC_BUTTON9)->SetWindowText(L"ON");
	}
	if (databuff[19] == 1)
	{
		GetDlgItem(IDC_BUTTON10)->SetWindowText(L"ON");
	}
	m_double16 = databuff[24];
	m_double17 = databuff[25];
	m_double18 = databuff[26];
	m_double13 = databuff[28];
	m_double14 = databuff[29];
	UpdateData(FALSE);
	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//初始化窗口位置
	CRect rect;
	GetClientRect(&rect);     //取客户区大小    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;


	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num6401", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC100)->SetWindowText(cstr);
	opx.QueryNode_Text("num6402", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num6403", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num6404", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC24)->SetWindowText(cstr);
	opx.QueryNode_Text("num6405", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC21)->SetWindowText(cstr);
	opx.QueryNode_Text("num6406", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC22)->SetWindowText(cstr);
	opx.QueryNode_Text("num6407", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC27)->SetWindowText(cstr);
	opx.QueryNode_Text("num6408", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC28)->SetWindowText(cstr);
	opx.QueryNode_Text("num6409", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC25)->SetWindowText(cstr);
	opx.QueryNode_Text("num6410", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC26)->SetWindowText(cstr);
	opx.QueryNode_Text("num6411", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC29)->SetWindowText(cstr);
	opx.QueryNode_Text("num6412", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC23)->SetWindowText(cstr);
	opx.QueryNode_Text("num6413", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC33)->SetWindowText(cstr);
	opx.QueryNode_Text("num6414", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();


	int nMargin = 15;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT1)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT1)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT3)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT4)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT5)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT6)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT7)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT8)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT9)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT10)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	//两种编辑框形状不一样大
	GetDlgItem(IDC_EDIT34)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT36)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT37)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT38)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT39)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT47)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT48)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void ZHUBANSHUJU::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}



void ZHUBANSHUJU::ReSize()
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

void ZHUBANSHUJU::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}


void ZHUBANSHUJU::OnBnClickedButton29()
{
	// TODO: 在此添加控件通知处理程序代码
}
