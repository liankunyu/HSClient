// modsheding.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "modsheding.h"
#include "afxdialogex.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include "ZHUBANSHUJU.h"
#include "TONGDAO.h"
#include "Tip.h"
// modsheding 对话框

IMPLEMENT_DYNAMIC(modsheding, CDialogEx)

modsheding::modsheding(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MOD_DIALOG, pParent)
	, flag_switch(0)
{

}

modsheding::~modsheding()
{
}

void modsheding::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON5, m_button1);
	DDX_Control(pDX, IDC_BUTTON6, m_button2);
	DDX_Control(pDX, IDC_BUTTON7, m_button3);
	DDX_Control(pDX, IDC_BUTTON8, m_button4);
	DDX_Control(pDX, IDC_BUTTON9, m_button5);
	DDX_Control(pDX, IDC_BUTTON10, m_button6);
	DDX_Control(pDX, IDC_BUTTON57, m_button7);
	DDX_Control(pDX, IDC_BUTTON33, m_button8);
	DDX_Control(pDX, IDC_BUTTON34, m_button9);
	DDX_Control(pDX, IDC_BUTTON35, m_button10);
	DDX_Control(pDX, IDC_BUTTON43, m_button11);
}


BEGIN_MESSAGE_MAP(modsheding, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &modsheding::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &modsheding::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON39, &modsheding::OnBnClickedButton39)
	ON_BN_CLICKED(IDCANCEL, &modsheding::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON16, &modsheding::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON40, &modsheding::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON55, &modsheding::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON58, &modsheding::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON37, &modsheding::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON49, &modsheding::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON38, &modsheding::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON50, &modsheding::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON56, &modsheding::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON59, &modsheding::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON3, &modsheding::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON61, &modsheding::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON41, &modsheding::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON45, &modsheding::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON84, &modsheding::OnBnClickedButton84)
	ON_BN_CLICKED(IDC_BUTTON121, &modsheding::OnBnClickedButton121)
	ON_BN_CLICKED(IDC_BUTTON60, &modsheding::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON62, &modsheding::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON4, &modsheding::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &modsheding::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &modsheding::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &modsheding::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &modsheding::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &modsheding::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &modsheding::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON57, &modsheding::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON33, &modsheding::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &modsheding::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &modsheding::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON43, &modsheding::OnBnClickedButton43)
	ON_WM_SIZE()
END_MESSAGE_MAP()


// modsheding 消息处理程序


void modsheding::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//if (CMyPublicData::bit_read(10, 8, 0))
	//{
	//	datatestDPU[4] = 0;
	//	GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("on"));
	//}
	//else
	//{
	//	datatestDPU[4] = 1;
	//	GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("off"));
	//}
	//CMyPublicData::setfunc(10, 16, 8, 1);
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON1)->GetWindowText(cstr);
	if (cstr == L"ON")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
		modsd[20] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"OFF")
	{
		cstr = L"ON";
		GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
		modsd[20] = cstr;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//CString str;
	//GetDlgItem(IDC_BUTTON2)->GetWindowText(str);
	//if (flag_switch == 1)
	//{
	//	GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("ON"));
	//}
	//else
	//{
	//	GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("OFF"));
	//}
	//CMyPublicData::setfunc(32, 16, 1, 1);
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON2)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
		modsd[0] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr==L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
		modsd[0] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
		modsd[0] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
		modsd[0] = cstr;
		tongxincuowu[1] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton39()
{
	// TODO: 在此添加控件通知处理程序代码
	//CString str;
	//GetDlgItem(IDC_BUTTON39)->GetWindowText(str);
	//if (str == "off")
	//{
	//	datatestDPU[4] = 0;
	//	GetDlgItem(IDC_BUTTON39)->SetWindowText(_T("ON"));
	//}
	//else
	//{
	//	datatestDPU[4] = 1;
	//	GetDlgItem(IDC_BUTTON39)->SetWindowText(_T("OFF"));
	//}
	//CMyPublicData::setfunc(33, 16, 1, 1);
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON39)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON39)->SetWindowText(cstr);
		modsd[1] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON39)->SetWindowText(cstr);
		modsd[1] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON39)->SetWindowText(cstr);
		modsd[1] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON39)->SetWindowText(cstr);
		modsd[1] = cstr;
		tongxincuowu[2] = 0;
		UpdateData(FALSE);
		return;
	}
}


BOOL modsheding::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num2001", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num2002", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num2003", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num2004", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2005", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num2006", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num2007", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num2008", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC31)->SetWindowText(cstr);
	opx.QueryNode_Text("num2009", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num2010", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();


	GetDlgItem(IDC_BUTTON2)->SetWindowText(modsd[0]);
	GetDlgItem(IDC_BUTTON39)->SetWindowText(modsd[1]);
	GetDlgItem(IDC_BUTTON16)->SetWindowText(modsd[2]);
	GetDlgItem(IDC_BUTTON40)->SetWindowText(modsd[3]);
	GetDlgItem(IDC_BUTTON55)->SetWindowText(modsd[4]);
	GetDlgItem(IDC_BUTTON58)->SetWindowText(modsd[5]);
	GetDlgItem(IDC_BUTTON37)->SetWindowText(modsd[6]);
	GetDlgItem(IDC_BUTTON49)->SetWindowText(modsd[7]);
	GetDlgItem(IDC_BUTTON38)->SetWindowText(modsd[8]);
	GetDlgItem(IDC_BUTTON50)->SetWindowText(modsd[9]);
	GetDlgItem(IDC_BUTTON56)->SetWindowText(modsd[10]);
	GetDlgItem(IDC_BUTTON59)->SetWindowText(modsd[11]);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(modsd[12]);
	GetDlgItem(IDC_BUTTON61)->SetWindowText(modsd[13]);
	GetDlgItem(IDC_BUTTON41)->SetWindowText(modsd[14]);
	GetDlgItem(IDC_BUTTON45)->SetWindowText(modsd[15]);
	GetDlgItem(IDC_BUTTON84)->SetWindowText(modsd[16]);
	GetDlgItem(IDC_BUTTON121)->SetWindowText(modsd[17]);
	GetDlgItem(IDC_BUTTON60)->SetWindowText(modsd[18]);
	GetDlgItem(IDC_BUTTON62)->SetWindowText(modsd[19]);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(modsd[20]);

	if (addSW==1)
	{
		GetDlgItem(IDC_BUTTON4)->SetWindowText(L"RGB1");
	}
	if (addSW==2)
	{
		GetDlgItem(IDC_BUTTON4)->SetWindowText(L"RGB2");
	}
	hBitmap = LoadBitmap(AfxGetInstanceHandle(),MAKEINTRESOURCE(IDB_BITMAP1));// IDB_BITMAP1为资源图片ID  
	m_button1.SetBitmap(hBitmap);
	hBitmap = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP2));// IDB_BITMAP1为资源图片ID  
	m_button2.SetBitmap(hBitmap);
	hBitmap = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP2));// IDB_BITMAP1为资源图片ID  
	m_button3.SetBitmap(hBitmap);
	hBitmap = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP2));// IDB_BITMAP1为资源图片ID  
	m_button4.SetBitmap(hBitmap);
	hBitmap = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP2));// IDB_BITMAP1为资源图片ID  
	m_button5.SetBitmap(hBitmap);
	hBitmap = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP2));// IDB_BITMAP1为资源图片ID  
	m_button6.SetBitmap(hBitmap);
	hBitmap = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP2));// IDB_BITMAP1为资源图片ID  
	m_button7.SetBitmap(hBitmap);
	hBitmap = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP2));// IDB_BITMAP1为资源图片ID  
	m_button8.SetBitmap(hBitmap);
	hBitmap = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP2));// IDB_BITMAP1为资源图片ID  
	m_button9.SetBitmap(hBitmap);
	hBitmap = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP2));// IDB_BITMAP1为资源图片ID  
	m_button10.SetBitmap(hBitmap);
	hBitmap = LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP2));// IDB_BITMAP1为资源图片ID  
	m_button11.SetBitmap(hBitmap);
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


void modsheding::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	USES_CONVERSION;
	opXML opx("lasttime.xml");
	str = W2A(modsd[0]);
	opx.ModifyNode("num3401", str);
	str = W2A(modsd[1]);
	opx.ModifyNode("num3402", str);
	str = W2A(modsd[2]);
	opx.ModifyNode("num3403", str);
	str = W2A(modsd[3]);
	opx.ModifyNode("num3404", str);
	str = W2A(modsd[4]);
	opx.ModifyNode("num3405", str);
	str = W2A(modsd[5]);
	opx.ModifyNode("num3406", str);
	str = W2A(modsd[6]);
	opx.ModifyNode("num3407", str);
	str = W2A(modsd[7]);
	opx.ModifyNode("num3408", str);
	str = W2A(modsd[8]);
	opx.ModifyNode("num3409", str);
	str = W2A(modsd[9]);
	opx.ModifyNode("num3410", str);
	str = W2A(modsd[10]);
	opx.ModifyNode("num3411", str);
	str = W2A(modsd[11]);
	opx.ModifyNode("num3412", str);
	str = W2A(modsd[12]);
	opx.ModifyNode("num3413", str);
	str = W2A(modsd[13]);
	opx.ModifyNode("num3414", str);
	str = W2A(modsd[14]);
	opx.ModifyNode("num3415", str);
	str = W2A(modsd[15]);
	opx.ModifyNode("num3416", str);
	str = W2A(modsd[16]);
	opx.ModifyNode("num3417", str);
	str = W2A(modsd[17]);
	opx.ModifyNode("num3418", str);
	str = W2A(modsd[18]);
	opx.ModifyNode("num3419", str);
	str = W2A(modsd[19]);
	opx.ModifyNode("num3420", str);
	str = W2A(modsd[20]);
	opx.ModifyNode("num3421", str);

	str = opx.numtoString(addSW);
	opx.ModifyNode("num3422", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void modsheding::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON16)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
		modsd[2] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
		modsd[2] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
		modsd[2] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
		modsd[2] = cstr;
		tongxincuowu[3] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON40)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON40)->SetWindowText(cstr);
		modsd[3] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON40)->SetWindowText(cstr);
		modsd[3] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON40)->SetWindowText(cstr);
		modsd[3] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON40)->SetWindowText(cstr);
		modsd[3] = cstr;
		tongxincuowu[4] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton55()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON55)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON55)->SetWindowText(cstr);
		modsd[4] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON55)->SetWindowText(cstr);
		modsd[4] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON55)->SetWindowText(cstr);
		modsd[4] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON55)->SetWindowText(cstr);
		modsd[4] = cstr;
		tongxincuowu[5] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton58()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON58)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON58)->SetWindowText(cstr);
		modsd[5] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON58)->SetWindowText(cstr);
		modsd[5] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON58)->SetWindowText(cstr);
		modsd[5] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON58)->SetWindowText(cstr);
		modsd[5] = cstr;
		tongxincuowu[6] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton37()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON37)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON37)->SetWindowText(cstr);
		modsd[6] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON37)->SetWindowText(cstr);
		modsd[6] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON37)->SetWindowText(cstr);
		modsd[6] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON37)->SetWindowText(cstr);
		modsd[6] = cstr;
		tongxincuowu[7] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton49()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON49)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON49)->SetWindowText(cstr);
		modsd[7] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON49)->SetWindowText(cstr);
		modsd[7] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON49)->SetWindowText(cstr);
		modsd[7] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON49)->SetWindowText(cstr);
		modsd[7] = cstr;
		tongxincuowu[8] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON38)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON38)->SetWindowText(cstr);
		modsd[8] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON38)->SetWindowText(cstr);
		modsd[8] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON38)->SetWindowText(cstr);
		modsd[8] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON38)->SetWindowText(cstr);
		modsd[8] = cstr;
		tongxincuowu[9] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton50()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON50)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON50)->SetWindowText(cstr);
		modsd[9] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON50)->SetWindowText(cstr);
		modsd[9] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON50)->SetWindowText(cstr);
		modsd[9] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON50)->SetWindowText(cstr);
		modsd[9] = cstr;
		tongxincuowu[10] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON56)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON56)->SetWindowText(cstr);
		modsd[10] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON56)->SetWindowText(cstr);
		modsd[10] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON56)->SetWindowText(cstr);
		modsd[10] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON56)->SetWindowText(cstr);
		modsd[10] = cstr;
		tongxincuowu[11] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton59()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON59)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON59)->SetWindowText(cstr);
		modsd[11] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON59)->SetWindowText(cstr);
		modsd[11] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON59)->SetWindowText(cstr);
		modsd[11] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON59)->SetWindowText(cstr);
		modsd[11] = cstr;
		tongxincuowu[12] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON3)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
		modsd[12] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
		modsd[12] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
		modsd[12] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
		modsd[12] = cstr;
		tongxincuowu[13] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON61)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON61)->SetWindowText(cstr);
		modsd[13] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON61)->SetWindowText(cstr);
		modsd[13] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON61)->SetWindowText(cstr);
		modsd[13] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON61)->SetWindowText(cstr);
		modsd[13] = cstr;
		tongxincuowu[14] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton41()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON41)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON41)->SetWindowText(cstr);
		modsd[14] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON41)->SetWindowText(cstr);
		modsd[14] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON41)->SetWindowText(cstr);
		modsd[14] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON41)->SetWindowText(cstr);
		modsd[14] = cstr;
		tongxincuowu[15] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton45()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON45)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON45)->SetWindowText(cstr);
		modsd[15] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON45)->SetWindowText(cstr);
		modsd[15] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON45)->SetWindowText(cstr);
		modsd[15] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON45)->SetWindowText(cstr);
		modsd[15] = cstr;
		tongxincuowu[16] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton84()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON84)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON84)->SetWindowText(cstr);
		modsd[16] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON84)->SetWindowText(cstr);
		modsd[16] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON84)->SetWindowText(cstr);
		modsd[16] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON84)->SetWindowText(cstr);
		modsd[16] = cstr;
		tongxincuowu[17] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton121()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON121)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON121)->SetWindowText(cstr);
		modsd[17] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON121)->SetWindowText(cstr);
		modsd[17] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON121)->SetWindowText(cstr);
		modsd[17] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON121)->SetWindowText(cstr);
		modsd[17] = cstr;
		tongxincuowu[18] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON60)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON60)->SetWindowText(cstr);
		modsd[18] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON60)->SetWindowText(cstr);
		modsd[18] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON60)->SetWindowText(cstr);
		modsd[18] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON60)->SetWindowText(cstr);
		modsd[18] = cstr;
		tongxincuowu[19] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton62()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON62)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON62)->SetWindowText(cstr);
		modsd[19] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON62)->SetWindowText(cstr);
		modsd[19] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON62)->SetWindowText(cstr);
		modsd[19] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON62)->SetWindowText(cstr);
		modsd[19] = cstr;
		tongxincuowu[20] = 0;
		UpdateData(FALSE);
		return;
	}
}


void modsheding::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON4)->EnableWindow(FALSE);
	CString cstr;
	GetDlgItem(IDC_BUTTON4)->GetWindowText(cstr);
	if (cstr==L"RGB1")
	{
		addSW = 2;
		GetDlgItem(IDC_BUTTON4)->SetWindowText(L"RGB2");
		for (int i=0;i<6;i++)
		{
			rlingmin[2 * i] = 0;
			rlingmin[2 * i + 1] = 245;
			glingmin[2 * i] = 0;
			glingmin[2 * i + 1] = 245;
			blingmin[2 * i] = 0;
			blingmin[2 * i + 1] = 245;
			hunselingmin[2 * i] = 0;
			hunselingmin[2 * i + 1] = 245;
		}
		for (int j = 0; j < 10; j++)
		{
			rlingminf[j] = 0;
			rlingminf[10 + j] = 10;
			rlingminf[20 + j] = 0;
			rlingminf[30 + j] = 10;
			glingminf[j] = 0;
			glingminf[10 + j] = 10;
			glingminf[20 + j] = 0;
			glingminf[30 + j] = 10;
			blingminf[j] = 0;
			blingminf[10 + j] = 10;
			blingminf[20 + j] = 0;
			blingminf[30 + j] = 10;
			hunlingminf[j] = 0;
			hunlingminf[10 + j] = 10;
			hunlingminf[20 + j] = 0;
			hunlingminf[30 + j] = 10;
		}
	}
	if (cstr==L"RGB2")
	{
		addSW = 1;
		GetDlgItem(IDC_BUTTON4)->SetWindowText(L"RGB1");
		for (int i = 0; i < 6; i++)
		{
			rlingmin[2 * i] = 10;
			rlingmin[2 * i + 1] = 10;
			glingmin[2 * i] = 10;
			glingmin[2 * i + 1] = 10;
			blingmin[2 * i] = 10;
			blingmin[2 * i + 1] = 10;
			hunselingmin[2 * i] = 10;
			hunselingmin[2 * i + 1] = 10;
		}
		for (int j = 0; j < 10; j++)
		{
			rlingminf[j] = 0;
			rlingminf[10 + j] = 0;
			rlingminf[20 + j] = 0;
			rlingminf[30 + j] = 0;
			glingminf[j] = 0;
			glingminf[10 + j] = 0;
			glingminf[20 + j] = 0;
			glingminf[30 + j] = 0;
			blingminf[j] = 0;
			blingminf[10 + j] = 0;
			blingminf[20 + j] = 0;
			blingminf[30 + j] = 0;
			hunlingminf[j] = 0;
			hunlingminf[10 + j] = 0;
			hunlingminf[20 + j] = 0;
			hunlingminf[30 + j] = 0;
		}
	}
	CMyPublicData::bit_set(10, 9, 6, false);                     //阀电源初始化前先关闭
	for (int i = 0; i < 10; i++)                                 //通道流量调整
	{
		if (liuliangsd[i] == L"1")
		{
			allData[0][10 + i] = liuliang[i] + liuliang[10];
		}
		if (liuliangsd[i] == L"2")
		{
			allData[0][10 + i] = liuliang[i] + liuliang[11];
		}
		if (liuliangsd[i] == L"3")
		{
			allData[0][10 + i] = liuliang[i] + liuliang[12];
		}
	}
	allData[0][30] = 1;              //流量置一
	allData[0][34] = qinghui[0];     //清灰周期
	allData[0][35] = qinghui[1];     //清灰时间
	allData[0][36] = qinghui[2];     //返回时间
	allData[0][37] = 1;
	allData[0][38] = beijingban[0];  //前背景板位置
	allData[0][39] = beijingban[1];  //后背景板位置
	datatestDPU[4] = allData[0][30];
	for (int i = 0; i < 30; i++)
	{
		datatestDPU[i + 4] = allData[0][i + 10];
	}
	CMyPublicData::setfunc(10, 16, 10, 30);
	CMyPublicData::bit_set(10, 9, 8, true);



	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{                                                                  //前相机
			allData[2 * i + 1][4] = famen[3];                                  //前相机开阀时间
			allData[2 * i + 1][27] = mian[2];                                  //前暗面积
			allData[2 * i + 1][28] = mian[4];                                  //前亮面积

			allData[2 * i + 1][64] = rlingmin[0] + rlingminf[i];               //R前暗敏感
			allData[2 * i + 1][65] = rlingmin[1] + rlingminf[10 + i];          //R前亮敏感
			allData[2 * i + 1][66] = glingmin[0] + glingminf[i];               //G前暗敏感
			allData[2 * i + 1][67] = glingmin[1] + glingminf[10 + i];          //G前亮敏感
			allData[2 * i + 1][68] = blingmin[0] + blingminf[i];               //B前暗敏感
			allData[2 * i + 1][69] = blingmin[1] + blingminf[10 + i];          //B前亮敏感
			allData[2 * i + 1][78] = hunselingmin[0] + hunlingminf[i];         //混色前暗敏感
			allData[2 * i + 1][79] = hunselingmin[1] + hunlingminf[10 + i];    //混色前亮敏感

			allData[2 * i + 1][82] = mian[0];                                  //前相机颜色面积

			allData[2 * i + 1][83] = yanse[0] + quyuf[i];                      //区域1前上限
			allData[2 * i + 1][84] = yanse[1] + quyuf[10 + i];                 //区域1前下限
			allData[2 * i + 1][85] = shen[0] + shenduf[i];                     //深度1前上限
			allData[2 * i + 1][86] = shen[1] + shenduf[10 + i];                //深度1前下限
			allData[2 * i + 1][87] = huidu1sheding[0] + huif[i];               //灰度1前上限
			allData[2 * i + 1][88] = huidu1sheding[1] + huif[10 + i];          //灰度1前下限
			allData[2 * i + 1][89] = quyu[0] + quyuerf[i];                     //区域2前上限
			allData[2 * i + 1][90] = quyu[1] + quyuerf[10 + i];                //区域2前下限
			allData[2 * i + 1][91] = quyusansd[0] + quyusanf[i];               //区域3前上限
			allData[2 * i + 1][92] = quyusansd[1] + quyusanf[10 + i];          //区域3前下限
			allData[2 * i + 1][93] = quyusisd[0] + quyusif[i];                 //区域4前上限
			allData[2 * i + 1][94] = quyusisd[1] + quyusif[10 + i];            //区域4前下限
			allData[2 * i + 1][95] = quyuwusd[0] + quyuwuf[i];                 //区域5前上限
			allData[2 * i + 1][96] = quyuwusd[1] + quyuwuf[10 + i];            //区域5前下限
			allData[2 * i + 1][97] = shendu2[0] + shenduerf[i];                //深度2前上限
			allData[2 * i + 1][98] = shendu2[1] + shenduerf[10 + i];           //深度2前下限
			allData[2 * i + 1][99] = huidu2sheding[0] + huierf[i];             //灰度2前上限
			allData[2 * i + 1][100] = huidu2sheding[1] + huierf[10 + i];       //灰度2前下限

			allData[2 * i + 1][350] = yanseminganqiangdusd[0];                 //前相机颜色敏感强度
		}
		if (modsd[2 * i] == L"2")
		{
			allData[2 * i + 1][4] = famen[4];
			allData[2 * i + 1][27] = mian[8];
			allData[2 * i + 1][28] = mian[10];

			allData[2 * i + 1][64] = rlingmin[4] + rlingminf[i];
			allData[2 * i + 1][65] = rlingmin[5] + rlingminf[10 + i];
			allData[2 * i + 1][66] = glingmin[4] + glingminf[i];
			allData[2 * i + 1][67] = glingmin[5] + glingminf[10 + i];
			allData[2 * i + 1][68] = blingmin[4] + blingminf[i];
			allData[2 * i + 1][69] = blingmin[5] + blingminf[10 + i];
			allData[2 * i + 1][78] = hunselingmin[4] + hunlingminf[i];
			allData[2 * i + 1][79] = hunselingmin[5] + hunlingminf[10 + i];

			allData[2 * i + 1][82] = mian[6];

			allData[2 * i + 1][83] = yanse[4] + quyuf[i];
			allData[2 * i + 1][84] = yanse[5] + quyuf[10 + i];
			allData[2 * i + 1][85] = shen[4] + shenduf[i];
			allData[2 * i + 1][86] = shen[5] + shenduf[10 + i];
			allData[2 * i + 1][87] = huidu1sheding[4] + huif[i];
			allData[2 * i + 1][88] = huidu1sheding[5] + huif[10 + i];
			allData[2 * i + 1][89] = quyu[4] + quyuerf[i];
			allData[2 * i + 1][90] = quyu[5] + quyuerf[10 + i];
			allData[2 * i + 1][91] = quyusansd[4] + quyusanf[i];
			allData[2 * i + 1][92] = quyusansd[5] + quyusanf[10 + i];
			allData[2 * i + 1][93] = quyusisd[4] + quyusif[i];
			allData[2 * i + 1][94] = quyusisd[5] + quyusif[10 + i];
			allData[2 * i + 1][95] = quyuwusd[4] + quyuwuf[i];
			allData[2 * i + 1][96] = quyuwusd[5] + quyuwuf[10 + i];
			allData[2 * i + 1][97] = shendu2[4] + shenduerf[i];
			allData[2 * i + 1][98] = shendu2[5] + shenduerf[10 + i];
			allData[2 * i + 1][99] = huidu2sheding[4] + huierf[i];
			allData[2 * i + 1][100] = huidu2sheding[5] + huierf[10 + i];

			allData[2 * i + 1][350] = yanseminganqiangdusd[2];
		}
		if (modsd[2 * i] == L"3")
		{
			allData[2 * i + 1][4] = famen[6];
			allData[2 * i + 1][27] = mian[14];
			allData[2 * i + 1][28] = mian[16];

			allData[2 * i + 1][64] = rlingmin[8] + rlingminf[i];
			allData[2 * i + 1][65] = rlingmin[9] + rlingminf[10 + i];
			allData[2 * i + 1][66] = glingmin[8] + glingminf[i];
			allData[2 * i + 1][67] = glingmin[9] + glingminf[10 + i];
			allData[2 * i + 1][68] = blingmin[8] + blingminf[i];
			allData[2 * i + 1][69] = blingmin[9] + blingminf[10 + i];
			allData[2 * i + 1][78] = hunselingmin[8] + hunlingminf[i];
			allData[2 * i + 1][79] = hunselingmin[9] + hunlingminf[10 + i];

			allData[2 * i + 1][82] = mian[12];

			allData[2 * i + 1][83] = yanse[8] + quyuf[i];
			allData[2 * i + 1][84] = yanse[9] + quyuf[10 + i];
			allData[2 * i + 1][85] = shen[8] + shenduf[i];
			allData[2 * i + 1][86] = shen[9] + shenduf[10 + i];
			allData[2 * i + 1][87] = huidu1sheding[8] + huif[i];
			allData[2 * i + 1][88] = huidu1sheding[9] + huif[10 + i];
			allData[2 * i + 1][89] = quyu[8] + quyuerf[i];
			allData[2 * i + 1][90] = quyu[9] + quyuerf[10 + i];
			allData[2 * i + 1][91] = quyusansd[8] + quyusanf[i];
			allData[2 * i + 1][92] = quyusansd[9] + quyusanf[10 + i];
			allData[2 * i + 1][93] = quyusisd[8] + quyusif[i];
			allData[2 * i + 1][94] = quyusisd[9] + quyusif[10 + i];
			allData[2 * i + 1][95] = quyuwusd[8] + quyuwuf[i];
			allData[2 * i + 1][96] = quyuwusd[9] + quyuwuf[10 + i];
			allData[2 * i + 1][97] = shendu2[8] + shenduerf[i];
			allData[2 * i + 1][98] = shendu2[9] + shenduerf[10 + i];
			allData[2 * i + 1][99] = huidu2sheding[8] + huierf[i];
			allData[2 * i + 1][100] = huidu2sheding[9] + huierf[10 + i];

			allData[2 * i + 1][350] = yanseminganqiangdusd[4];
		}


		if (modsd[2 * i + 1] == L"1")
		{                                                                    //后相机
			allData[2 * i + 2][4] = famen[3];                                    //后相机开阀时间
			allData[2 * i + 2][27] = mian[3];                                    //后暗面积
			allData[2 * i + 2][28] = mian[5];                                    //后亮面积

			allData[2 * i + 2][64] = rlingmin[2] + rlingminf[20 + i];            //R前暗敏感
			allData[2 * i + 2][65] = rlingmin[3] + rlingminf[30 + i];            //R前亮敏感
			allData[2 * i + 2][66] = glingmin[2] + glingminf[20 + i];            //G前暗敏感
			allData[2 * i + 2][67] = glingmin[3] + glingminf[30 + i];            //G前亮敏感
			allData[2 * i + 2][68] = blingmin[2] + blingminf[20 + i];            //B前暗敏感
			allData[2 * i + 2][69] = blingmin[3] + blingminf[30 + i];            //B前亮敏感
			allData[2 * i + 2][78] = hunselingmin[2] + hunlingminf[20 + i];      //混色前暗敏感
			allData[2 * i + 2][79] = hunselingmin[3] + hunlingminf[30 + i];      //混色前亮敏感

			allData[2 * i + 2][82] = mian[1];                                  //后相机颜色面积

			allData[2 * i + 2][83] = yanse[2] + quyuf[20 + i];                   //区域1前上限
			allData[2 * i + 2][84] = yanse[3] + quyuf[30 + i];                   //区域1前下限
			allData[2 * i + 2][85] = shen[2] + shenduf[20 + i];                  //深度1前上限
			allData[2 * i + 2][86] = shen[3] + shenduf[30 + i];                  //深度1前下限
			allData[2 * i + 2][87] = huidu1sheding[2] + huif[20 + i];            //灰度1前上限
			allData[2 * i + 2][88] = huidu1sheding[3] + huif[30 + i];            //灰度1前下限
			allData[2 * i + 2][89] = quyu[2] + quyuerf[20 + i];                  //区域2前上限
			allData[2 * i + 2][90] = quyu[3] + quyuerf[30 + i];                  //区域2前下限
			allData[2 * i + 2][91] = quyusansd[2] + quyusanf[20 + i];            //区域3前上限
			allData[2 * i + 2][92] = quyusansd[3] + quyusanf[30 + i];            //区域3前下限
			allData[2 * i + 2][93] = quyusisd[2] + quyusif[20 + i];              //区域4前上限
			allData[2 * i + 2][94] = quyusisd[3] + quyusif[30 + i];              //区域4前下限
			allData[2 * i + 2][95] = quyuwusd[2] + quyuwuf[20 + i];              //区域5前上限
			allData[2 * i + 2][96] = quyuwusd[3] + quyuwuf[30 + i];              //区域5前下限
			allData[2 * i + 2][97] = shendu2[2] + shenduerf[20 + i];             //深度2前上限
			allData[2 * i + 2][98] = shendu2[3] + shenduerf[30 + i];             //深度2前下限
			allData[2 * i + 2][99] = huidu2sheding[2] + huierf[20 + i];          //灰度2前上限
			allData[2 * i + 2][100] = huidu2sheding[3] + huierf[30 + i];         //灰度2前下限

			allData[2 * i + 2][350] = yanseminganqiangdusd[1];                   //后相机颜色敏感强度
		}
		if (modsd[2 * i + 1] == L"2")
		{
			allData[2 * i + 2][4] = famen[4];
			allData[2 * i + 2][27] = mian[9];
			allData[2 * i + 2][28] = mian[11];

			allData[2 * i + 2][64] = rlingmin[6] + rlingminf[20 + i];
			allData[2 * i + 2][65] = rlingmin[7] + rlingminf[30 + i];
			allData[2 * i + 2][66] = glingmin[6] + glingminf[20 + i];
			allData[2 * i + 2][67] = glingmin[7] + glingminf[30 + i];
			allData[2 * i + 2][68] = blingmin[6] + blingminf[20 + i];
			allData[2 * i + 2][69] = blingmin[7] + blingminf[30 + i];
			allData[2 * i + 2][78] = hunselingmin[6] + hunlingminf[20 + i];
			allData[2 * i + 2][79] = hunselingmin[7] + hunlingminf[30 + i];

			allData[2 * i + 2][82] = mian[7];

			allData[2 * i + 2][83] = yanse[6] + quyuf[20 + i];
			allData[2 * i + 2][84] = yanse[7] + quyuf[30 + i];
			allData[2 * i + 2][85] = shen[6] + shenduf[20 + i];
			allData[2 * i + 2][86] = shen[7] + shenduf[30 + i];
			allData[2 * i + 2][87] = huidu1sheding[6] + huif[20 + i];
			allData[2 * i + 2][88] = huidu1sheding[7] + huif[30 + i];
			allData[2 * i + 2][89] = quyu[6] + quyuerf[20 + i];
			allData[2 * i + 2][90] = quyu[7] + quyuerf[30 + i];
			allData[2 * i + 2][91] = quyusansd[6] + quyusanf[20 + i];
			allData[2 * i + 2][92] = quyusansd[7] + quyusanf[30 + i];
			allData[2 * i + 2][93] = quyusisd[6] + quyusif[20 + i];
			allData[2 * i + 2][94] = quyusisd[7] + quyusif[30 + i];
			allData[2 * i + 2][95] = quyuwusd[6] + quyuwuf[20 + i];
			allData[2 * i + 2][96] = quyuwusd[7] + quyuwuf[30 + i];
			allData[2 * i + 2][97] = shendu2[6] + shenduerf[20 + i];
			allData[2 * i + 2][98] = shendu2[7] + shenduerf[30 + i];
			allData[2 * i + 2][99] = huidu2sheding[6] + huierf[20 + i];
			allData[2 * i + 2][100] = huidu2sheding[7] + huierf[30 + i];

			allData[2 * i + 2][350] = yanseminganqiangdusd[3];
		}
		if (modsd[2 * i + 1] == L"3")
		{
			allData[2 * i + 2][4] = famen[6];
			allData[2 * i + 2][27] = mian[15];
			allData[2 * i + 2][28] = mian[17];

			allData[2 * i + 2][64] = rlingmin[10] + rlingminf[20 + i];
			allData[2 * i + 2][65] = rlingmin[11] + rlingminf[30 + i];
			allData[2 * i + 2][66] = glingmin[10] + glingminf[20 + i];
			allData[2 * i + 2][67] = glingmin[11] + glingminf[30 + i];
			allData[2 * i + 2][68] = blingmin[10] + blingminf[20 + i];
			allData[2 * i + 2][69] = blingmin[11] + blingminf[30 + i];
			allData[2 * i + 2][78] = hunselingmin[10] + hunlingminf[20 + i];
			allData[2 * i + 2][79] = hunselingmin[11] + hunlingminf[30 + i];

			allData[2 * i + 2][82] = mian[13];

			allData[2 * i + 2][83] = yanse[10] + quyuf[20 + i];
			allData[2 * i + 2][84] = yanse[11] + quyuf[30 + i];
			allData[2 * i + 2][85] = shen[10] + shenduf[20 + i];
			allData[2 * i + 2][86] = shen[11] + shenduf[30 + i];
			allData[2 * i + 2][87] = huidu1sheding[10] + huif[20 + i];
			allData[2 * i + 2][88] = huidu1sheding[11] + huif[30 + i];
			allData[2 * i + 2][89] = quyu[10] + quyuerf[20 + i];
			allData[2 * i + 2][90] = quyu[11] + quyuerf[30 + i];
			allData[2 * i + 2][91] = quyusansd[10] + quyusanf[20 + i];
			allData[2 * i + 2][92] = quyusansd[11] + quyusanf[30 + i];
			allData[2 * i + 2][93] = quyusisd[10] + quyusif[20 + i];
			allData[2 * i + 2][94] = quyusisd[11] + quyusif[30 + i];
			allData[2 * i + 2][95] = quyuwusd[10] + quyuwuf[20 + i];
			allData[2 * i + 2][96] = quyuwusd[11] + quyuwuf[30 + i];
			allData[2 * i + 2][97] = shendu2[10] + shenduerf[20 + i];
			allData[2 * i + 2][98] = shendu2[11] + shenduerf[30 + i];
			allData[2 * i + 2][99] = huidu2sheding[10] + huierf[20 + i];
			allData[2 * i + 2][100] = huidu2sheding[11] + huierf[30 + i];

			allData[2 * i + 2][350] = yanseminganqiangdusd[5];
		}
		allData[2 * i + 1][1] = 0;                                       //前相机状态置0
		allData[2 * i + 2][1] = 0;                                       //后相机状态置0
		allData[2 * i + 1][5] = yanchisheding[i] + yanchisheding[10];    //前相机延迟设定
		allData[2 * i + 2][5] = yanchisheding[i] + yanchisheding[10];    //后相机延迟设定
		allData[2 * i + 1][8] = pingyisheding[i];                        //前相机平移设定
		allData[2 * i + 2][8] = pingyisheding[10 + i];                   //后相机平移设定
		allData[2 * i + 1][9] = famen[5];                                //前相机开阀周期
		allData[2 * i + 2][9] = famen[5];                                //后相机开阀周期
		allData[2 * i + 1][10] = fuzhugongneng[3];                       //前相机SpeedS
		allData[2 * i + 2][10] = fuzhugongneng[3];                       //后相机SpeedS
		allData[2 * i + 1][11] = 20;                                     //前相机平均速度
		allData[2 * i + 2][11] = 20;                                     //后相机平均速度
		allData[2 * i + 1][12] = famen[2];                               //前相机吹嘴测试速度
		allData[2 * i + 2][12] = famen[2];                               //后相机吹嘴测试速度
		allData[2 * i + 1][13] = 1;                                      //前相机孔位
		allData[2 * i + 2][13] = 1;                                      //后相机孔位
		allData[2 * i + 1][20] = yansehangmianjisd[i];                   //前相机颜色行面积
		allData[2 * i + 2][20] = yansehangmianjisd[10 + i];              //后相机颜色行面积
		if (vgasd[2 * i] == L"OFF")                                      //判断VGA设定为什么状态
		{
			allData[2 * i + 1][26] = 0;
		}
		else
		{
			allData[2 * i + 1][26] = 1;
		}
		if (vgasd[2 * i + 1] == L"OFF")
		{
			allData[2 * i + 2][26] = 0;
		}
		else
		{
			allData[2 * i + 2][26] = 1;
		}
		allData[2 * i + 1][31] = vga[3];                          //前相机单孔增益致能
		allData[2 * i + 2][31] = vga[3];                          //后相机单孔增益致能
		for (int k = 0; k < 32; k++)
		{
			allData[2 * i + 1][32 + k] = 32;                      //前相机单孔增益
			allData[2 * i + 2][32 + k] = 32;                      //后相机单孔增益
		}
		allData[2 * i + 1][70] = rzengyi[i];                      //前相机R增益设定
		allData[2 * i + 2][70] = rzengyi[10 + i];                 //后相机R增益设定
		allData[2 * i + 1][72] = gzengyisheding[i];               //前相机G增益设定
		allData[2 * i + 2][72] = gzengyisheding[10 + i];          //后相机G增益设定
		allData[2 * i + 1][74] = bzengyisheding[i];               //前相机B增益设定
		allData[2 * i + 2][74] = bzengyisheding[10 + i];          //后相机B增益设定
		allData[2 * i + 1][77] = hunselingmin[20];                //前相机模式
		allData[2 * i + 2][77] = hunselingmin[21];                //后相机模式
		allData[2 * i + 1][81] = beijingyuzhisheding[i];          //前相机背景阈值
		allData[2 * i + 2][81] = beijingyuzhisheding[10 + i];     //后相机背景阈值
		allData[2 * i + 1][71] = fuzhugongneng[0];                //前相机ClamR
		allData[2 * i + 2][71] = fuzhugongneng[0];                //后相机ClamR
		allData[2 * i + 1][73] = fuzhugongneng[1];                //前相机ClamG
		allData[2 * i + 2][73] = fuzhugongneng[1];                //后相机ClamG
		allData[2 * i + 1][75] = fuzhugongneng[2];                //前相机ClamB
		allData[2 * i + 2][75] = fuzhugongneng[2];                //后相机ClamB
		allData[2 * i + 1][102] = xingxuansd[3];                  //前相机型选阈值
		allData[2 * i + 2][102] = xingxuansd[3];                  //后相机型选阈值
		allData[2 * i + 1][103] = xingxuanlingmindusd[i];         //前相机型选灵敏度
		allData[2 * i + 2][103] = xingxuanlingmindusd[10 + i];    //后相机型选灵敏度
		allData[2 * i + 1][104] = huiduhuluesheding[i];           //前相机灰度忽略
		allData[2 * i + 2][104] = huiduhuluesheding[10 + i];      //后相机灰度忽略
		allData[2 * i + 1][105] = mianjiweitiaosd[i];             //前相机面积微调
		allData[2 * i + 2][105] = mianjiweitiaosd[10 + i];        //后相机面积微调
		allData[2 * i + 1][106] = xingxuansd[4];                  //前相机型选模式
		allData[2 * i + 2][106] = xingxuansd[4];                  //后相机型选模式
		allData[2 * i + 1][113] = xingxuansd[1];                  //前相机开阀时间
		allData[2 * i + 2][113] = xingxuansd[1];                  //后相机开阀时间
		allData[2 * i + 1][114] = xingxuansd[0];                  //前相机延时
		allData[2 * i + 2][114] = xingxuansd[0];                  //后相机延时
		allData[2 * i + 1][115] = xingxuansd[2];                  //前相机开阀周期
		allData[2 * i + 2][115] = xingxuansd[2];                  //后相机开阀周期
		allData[2 * i + 1][351] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 2][351] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][352] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 2][352] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 1][353] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 2][353] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][354] = 255;                            //设置第二种RGB算法初始化设定 
		allData[2 * i + 2][354] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 1][355] = 0;                              //设置第二种RGB算法初始化设定 
		allData[2 * i + 2][355] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][356] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 2][356] = 255;                            //设置第二种RGB算法初始化设定  
		allData[2 * i + 1][357] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 2][357] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][358] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 2][358] = 255;                            //设置第二种RGB算法初始化设定
		if (addSW == 2)                                             //算法切换
		{
			allData[2 * i + 1][351] = allData[2 * i + 1][64];
			allData[2 * i + 2][351] = allData[2 * i + 2][64];
			allData[2 * i + 1][352] = allData[2 * i + 1][65];
			allData[2 * i + 2][352] = allData[2 * i + 2][65];
			allData[2 * i + 1][353] = allData[2 * i + 1][66];
			allData[2 * i + 2][353] = allData[2 * i + 2][66];
			allData[2 * i + 1][354] = allData[2 * i + 1][67];
			allData[2 * i + 2][354] = allData[2 * i + 2][67];
			allData[2 * i + 1][355] = allData[2 * i + 1][68];
			allData[2 * i + 2][355] = allData[2 * i + 2][68];
			allData[2 * i + 1][356] = allData[2 * i + 1][69];
			allData[2 * i + 2][356] = allData[2 * i + 2][69];
			allData[2 * i + 1][357] = allData[2 * i + 1][78];
			allData[2 * i + 2][357] = allData[2 * i + 2][78];
			allData[2 * i + 1][358] = allData[2 * i + 1][79];
			allData[2 * i + 2][358] = allData[2 * i + 2][79];

			allData[2 * i + 1][64] = 0;
			allData[2 * i + 2][64] = 0;
			allData[2 * i + 1][65] = 0;
			allData[2 * i + 2][65] = 0;
			allData[2 * i + 1][66] = 0;
			allData[2 * i + 2][66] = 0;
			allData[2 * i + 1][67] = 0;
			allData[2 * i + 2][67] = 0;
			allData[2 * i + 1][68] = 0;
			allData[2 * i + 2][68] = 0;
			allData[2 * i + 1][69] = 0;
			allData[2 * i + 2][69] = 0;
			allData[2 * i + 1][78] = 0;
			allData[2 * i + 2][78] = 0;
			allData[2 * i + 1][79] = 0;
			allData[2 * i + 2][79] = 0;
		}
	}




	//for (int i = 0; i < 200; i++)
	//{
	//	datatestDPU[i + 4] = allData[1][1 + i];
	//}

	//for (int i = 0; i < 4; i++)
	//{
	//	CMyPublicData::setfunc(32, 16, i * 50 + 1, 50);
	//	CMyPublicData::setfunc(33, 16, i * 50 + 1, 50);
	//}
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			for (int j = 0; j < 50; j++)
			{
				datatestDPU[j + 4] = allData[i + 1][1 + j];
			}
			CMyPublicData::setfunc(32 + i, 16, 1, 50);
			for (int j = 0; j < 50; j++)
			{
				datatestDPU[j + 4] = allData[i + 1][51 + j];
			}
			CMyPublicData::setfunc(32 + i, 16, 51, 50);
			for (int j = 0; j < 50; j++)
			{
				datatestDPU[j + 4] = allData[i + 1][101 + j];
			}
			CMyPublicData::setfunc(32 + i, 16, 101, 50);
			for (int j = 0; j < 50; j++)
			{
				datatestDPU[j + 4] = allData[i + 1][151 + j];
			}
			CMyPublicData::setfunc(32 + i, 16, 151, 50);
		}
	}

	//for (int i = 0; i < 32; i++)
	//{
	//	datatestDPU[i + 4] = 32;
	//}

	//CMyPublicData::setfunc(32, 16, 32, 32);
	//CMyPublicData::setfunc(33, 16, 32, 32);

	//datatestDPU[4] = 0;
	//datatestDPU[5] = 255;
	//datatestDPU[6] = 0;
	//datatestDPU[7] = 255;
	//datatestDPU[8] = 0;
	//datatestDPU[9] = 255;
	//datatestDPU[10] = 0;
	//datatestDPU[11] = 255;
	//CMyPublicData::setfunc(32, 16, 351, 8);
	//CMyPublicData::setfunc(33, 16, 351, 8);
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i]!=L"OFF")
		{
			for (int j = 0; j < 8; j++)
			{
				datatestDPU[j + 4] = allData[i + 1][351 + j];
			}
			CMyPublicData::setfunc(32 + i, 16, 351, 8);
		}
	}
	CMyPublicData::bit_set(10, 9, 6, true);               //阀电源最后开启
	GetDlgItem(IDC_BUTTON4)->EnableWindow(TRUE);
	m_Tip = "num6613";//传入节点名
	Tip tip;
	tip.DoModal();
}


void modsheding::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	ZHUBANSHUJU zb;
	zb.DoModal();

}


void modsheding::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	if (modsd[0]!=L"OFF")
	{
		CMyPublicData::setfunc(32, 3, 1, 1);
		if (fanhuizhi==(-1))
		{
			
			if (modsd[1] != L"OFF")
			{
				CMyPublicData::setfunc(33, 3, 1, 1);
				if (fanhuizhi == (-1))
				{
					
				}
				else
				{
					tongdaohao = 1;
					tongdaoflag = 2;
					TONGDAO td;
					td.DoModal();
				}
			}
		}
		else
		{
			tongdaohao = 1;
			tongdaoflag = 1;
			TONGDAO td;
			td.DoModal();
		}
	}
	else
	{
		if (modsd[1] != L"OFF")
		{
			CMyPublicData::setfunc(33, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				
			}
			else
			{
				tongdaohao = 1;
				tongdaoflag = 2;
				TONGDAO td;
				td.DoModal();
			}
		}
	}
}


void modsheding::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	if (modsd[2] != L"OFF")
	{
		CMyPublicData::setfunc(34, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			if (modsd[3] != L"OFF")
			{
				CMyPublicData::setfunc(35, 3, 1, 1);
				if (fanhuizhi == (-1))
				{
					
				}
				else
				{
					tongdaohao = 2;
					tongdaoflag = 2;
					TONGDAO td;
					td.DoModal();
				}
			}
		}
		else
		{
			tongdaohao = 2;
			tongdaoflag = 1;
			TONGDAO td;
			td.DoModal();
		}
	}
	else
	{
		if (modsd[3] != L"OFF")
		{
			CMyPublicData::setfunc(35, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				
			}
			else
			{
				tongdaohao = 2;
				tongdaoflag = 2;
				TONGDAO td;
				td.DoModal();
			}
		}
	}
}


void modsheding::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	if (modsd[4] != L"OFF")
	{
		CMyPublicData::setfunc(36, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			if (modsd[5] != L"OFF")
			{
				CMyPublicData::setfunc(37, 3, 1, 1);
				if (fanhuizhi == (-1))
				{
					
				}
				else
				{
					tongdaohao = 3;
					tongdaoflag = 2;
					TONGDAO td;
					td.DoModal();
				}
			}
		}
		else
		{
			tongdaohao = 3;
			tongdaoflag = 1;
			TONGDAO td;
			td.DoModal();
		}
	}
	else
	{
		if (modsd[5] != L"OFF")
		{
			CMyPublicData::setfunc(37, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				
			}
			else
			{
				tongdaohao = 3;
				tongdaoflag = 2;
				TONGDAO td;
				td.DoModal();
			}
		}
	}
}


void modsheding::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	if (modsd[6] != L"OFF")
	{
		CMyPublicData::setfunc(38, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			if (modsd[7] != L"OFF")
			{
				CMyPublicData::setfunc(39, 3, 1, 1);
				if (fanhuizhi == (-1))
				{
					
				}
				else
				{
					tongdaohao = 4;
					tongdaoflag = 2;
					TONGDAO td;
					td.DoModal();
				}
			}
		}
		else
		{
			tongdaohao = 4;
			tongdaoflag = 1;
			TONGDAO td;
			td.DoModal();
		}
	}
	else
	{
		if (modsd[7] != L"OFF")
		{
			CMyPublicData::setfunc(39, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				
			}
			else
			{
				tongdaohao = 4;
				tongdaoflag = 2;
				TONGDAO td;
				td.DoModal();
			}
		}
	}
}


void modsheding::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	if (modsd[8] != L"OFF")
	{
		CMyPublicData::setfunc(40, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			if (modsd[9] != L"OFF")
			{
				CMyPublicData::setfunc(41, 3, 1, 1);
				if (fanhuizhi == (-1))
				{
					
				}
				else
				{
					tongdaohao = 5;
					tongdaoflag = 2;
					TONGDAO td;
					td.DoModal();
				}
			}
		}
		else
		{
			tongdaohao = 5;
			tongdaoflag = 1;
			TONGDAO td;
			td.DoModal();
		}
	}
	else
	{
		if (modsd[9] != L"OFF")
		{
			CMyPublicData::setfunc(41, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				
			}
			else
			{
				tongdaohao = 5;
				tongdaoflag = 2;
				TONGDAO td;
				td.DoModal();
			}
		}
	}
}


void modsheding::OnBnClickedButton57()
{
	// TODO: 在此添加控件通知处理程序代码
	if (modsd[10] != L"OFF")
	{
		CMyPublicData::setfunc(42, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			if (modsd[11] != L"OFF")
			{
				CMyPublicData::setfunc(43, 3, 1, 1);
				if (fanhuizhi == (-1))
				{
					
				}
				else
				{
					tongdaohao = 6;
					tongdaoflag = 2;
					TONGDAO td;
					td.DoModal();
				}
			}
		}
		else
		{
			tongdaohao = 6;
			tongdaoflag = 1;
			TONGDAO td;
			td.DoModal();
		}
	}
	else
	{
		if (modsd[11] != L"OFF")
		{
			CMyPublicData::setfunc(43, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				
			}
			else
			{
				tongdaohao = 6;
				tongdaoflag = 2;
				TONGDAO td;
				td.DoModal();
			}
		}
	}
}


void modsheding::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	if (modsd[12] != L"OFF")
	{
		CMyPublicData::setfunc(44, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			if (modsd[13] != L"OFF")
			{
				CMyPublicData::setfunc(45, 3, 1, 1);
				if (fanhuizhi == (-1))
				{
					
				}
				else
				{
					tongdaohao = 7;
					tongdaoflag = 2;
					TONGDAO td;
					td.DoModal();
				}
			}
		}
		else
		{
			tongdaohao = 7;
			tongdaoflag = 1;
			TONGDAO td;
			td.DoModal();
		}
	}
	else
	{
		if (modsd[13] != L"OFF")
		{
			CMyPublicData::setfunc(45, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				
			}
			else
			{
				tongdaohao = 7;
				tongdaoflag = 2;
				TONGDAO td;
				td.DoModal();
			}
		}
	}
}


void modsheding::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	if (modsd[14] != L"OFF")
	{
		CMyPublicData::setfunc(46, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			if (modsd[15] != L"OFF")
			{
				CMyPublicData::setfunc(47, 3, 1, 1);
				if (fanhuizhi == (-1))
				{
					
				}
				else
				{
					tongdaohao = 8;
					tongdaoflag = 2;
					TONGDAO td;
					td.DoModal();
				}
			}
		}
		else
		{
			tongdaohao = 8;
			tongdaoflag = 1;
			TONGDAO td;
			td.DoModal();
		}
	}
	else
	{
		if (modsd[15] != L"OFF")
		{
			CMyPublicData::setfunc(47, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				
			}
			else
			{
				tongdaohao = 8;
				tongdaoflag = 2;
				TONGDAO td;
				td.DoModal();
			}
		}
	}
}


void modsheding::OnBnClickedButton35()
{
	// TODO: 在此添加控件通知处理程序代码
	if (modsd[16] != L"OFF")
	{
		CMyPublicData::setfunc(48, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			if (modsd[17] != L"OFF")
			{
				CMyPublicData::setfunc(49, 3, 1, 1);
				if (fanhuizhi == (-1))
				{
					
				}
				else
				{
					tongdaohao = 9;
					tongdaoflag = 2;
					TONGDAO td;
					td.DoModal();
				}
			}
		}
		else
		{
			tongdaohao = 9;
			tongdaoflag = 1;
			TONGDAO td;
			td.DoModal();
		}
	}
	else
	{
		if (modsd[17] != L"OFF")
		{
			CMyPublicData::setfunc(49, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				
			}
			else
			{
				tongdaohao = 9;
				tongdaoflag = 2;
				TONGDAO td;
				td.DoModal();
			}
		}
	}
}


void modsheding::OnBnClickedButton43()
{
	// TODO: 在此添加控件通知处理程序代码
	if (modsd[18] != L"OFF")
	{
		CMyPublicData::setfunc(50, 3, 1, 1);
		if (fanhuizhi == (-1))
		{
			
			if (modsd[19] != L"OFF")
			{
				CMyPublicData::setfunc(51, 3, 1, 1);
				if (fanhuizhi == (-1))
				{
					
				}
				else
				{
					tongdaohao = 10;
					tongdaoflag = 2;
					TONGDAO td;
					td.DoModal();
				}
			}
		}
		else
		{
			tongdaohao = 10;
			tongdaoflag = 1;
			TONGDAO td;
			td.DoModal();
		}
	}
	else
	{
		if (modsd[19] != L"OFF")
		{
			CMyPublicData::setfunc(51, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				
			}
			else
			{
				tongdaohao = 10;
				tongdaoflag = 2;
				TONGDAO td;
				td.DoModal();
			}
		}
	}
}


void modsheding::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}



void modsheding::ReSize()
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