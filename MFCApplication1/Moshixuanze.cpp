// Moshixuanze.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Moshixuanze.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "InputDlg.h"
#include "moshixuanzeer.h"
#include "moshixuanzesan.h"
#include "MyPublicData.h"
#include <sstream>
#include <string>
#include "ENINPUT.h"
#include "Tip2.h"
#include "Tip.h"
#pragma comment(lib,"imm32.lib")  
// Moshixuanze 对话框
using namespace std;
IMPLEMENT_DYNAMIC(Moshixuanze, CDialogEx)
Moshixuanze::Moshixuanze(CWnd* pParent /*=NULL*/)
	: CDialogEx(Moshixuanze::IDD, pParent)
	, m_mode1(_T(""))
	, m_mode2(_T(""))
	, m_mode3(_T(""))
	, m_mode4(_T(""))
	, m_mode5(_T(""))
	, m_mode6(_T(""))
{

}

Moshixuanze::~Moshixuanze()
{
}

void Moshixuanze::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT4, m_mode1);
	DDX_Text(pDX, IDC_EDIT23, m_mode2);
	DDX_Text(pDX, IDC_EDIT24, m_mode3);
	DDX_Text(pDX, IDC_EDIT34, m_mode4);
	DDX_Text(pDX, IDC_EDIT35, m_mode5);
	DDX_Text(pDX, IDC_EDIT3, m_mode6);
}


BEGIN_MESSAGE_MAP(Moshixuanze, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Moshixuanze::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Moshixuanze::OnBnClickedButton2)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON5, &Moshixuanze::OnBnClickedButton5)
	//	ON_EN_CHANGE(IDC_EDIT4, &Moshixuanze::OnEnChangeEdit4)
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDCANCEL, &Moshixuanze::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON4, &Moshixuanze::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, &Moshixuanze::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &Moshixuanze::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &Moshixuanze::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &Moshixuanze::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &Moshixuanze::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON57, &Moshixuanze::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON12, &Moshixuanze::OnBnClickedButton12)
	//	ON_EN_CHANGE(IDC_EDIT23, &Moshixuanze::OnEnChangeEdit23)
	//	ON_EN_CHANGE(IDC_EDIT24, &Moshixuanze::OnEnChangeEdit24)
	//	ON_EN_CHANGE(IDC_EDIT34, &Moshixuanze::OnEnChangeEdit34)
	//	ON_EN_CHANGE(IDC_EDIT35, &Moshixuanze::OnEnChangeEdit35)
	ON_BN_CLICKED(IDC_BUTTON13, &Moshixuanze::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON3, &Moshixuanze::OnBnClickedButton3)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON11, &Moshixuanze::OnBnClickedButton11)
END_MESSAGE_MAP()


// Moshixuanze 消息处理程序


void Moshixuanze::OnBnClickedButton1()
{
	m_Tip2 = "num6801";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		ReadXML("mode1.xml");
		m_mode6 = L"MODE1   " + m_mode1;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode6);
		opx.ModifyNode("name96", mc);
		mc = "1";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}




void Moshixuanze::OnBnClickedButton2()
{
	m_Tip2 = "num6802";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		CMyPublicData::writerXML("mode1.xml");
		m_mode6 = L"MODE1   " + m_mode1;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode6);
		opx.ModifyNode("name96", mc);
		mc = "1";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();

	}
}




BOOL Moshixuanze::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num2101", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num2102", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2103", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC12)->SetWindowText(cstr);
	opx.QueryNode_Text("num2104", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num2105", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2106", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON6)->SetWindowText(cstr);
	opx.QueryNode_Text("num2107", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON8)->SetWindowText(cstr);
	opx.QueryNode_Text("num2108", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON10)->SetWindowText(cstr);
	opx.QueryNode_Text("num2109", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
	opx.QueryNode_Text("num2110", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON5)->SetWindowText(cstr);
	opx.QueryNode_Text("num2111", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON7)->SetWindowText(cstr);
	opx.QueryNode_Text("num2112", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON9)->SetWindowText(cstr);
	opx.QueryNode_Text("num2113", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON57)->SetWindowText(cstr);
	opx.QueryNode_Text("num2114", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON11)->SetWindowText(cstr);
	opx.QueryNode_Text("num2115", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON12)->SetWindowText(cstr);
	opx.QueryNode_Text("num2116", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON13)->SetWindowText(cstr);
	opx.QueryNode_Text("num2117", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();


	const char* mc;    //名称
	opXML opxx("name.xml");
	opxx.QueryNode_Text("name1", mc);
	m_mode1 = mc;
	opxx.QueryNode_Text("name2", mc);
	m_mode2 = mc;
	opxx.QueryNode_Text("name3", mc);
	m_mode3 = mc;
	opxx.QueryNode_Text("name4", mc);
	m_mode4 = mc;
	opxx.QueryNode_Text("name5", mc);
	m_mode5 = mc;
	opxx.QueryNode_Text("name96", mc);
	m_mode6 = mc;
	opxx.SaveFile();
	GetDlgItem(IDC_EDIT4)->EnableWindow(FALSE);   //初始使编辑框不可编辑
	GetDlgItem(IDC_EDIT23)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT24)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT34)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT35)->EnableWindow(FALSE);
	UpdateData(FALSE);
	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//初始化窗口位置
	CRect rect;
	GetClientRect(&rect);     //取客户区大小    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;


	int nMargin = 18;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT4)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT3)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT4)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT23)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT24)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	SetTimer(1, 1000, NULL);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void Moshixuanze::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void Moshixuanze::ReSize()
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



void Moshixuanze::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Tip2 = "num6802";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		CMyPublicData::writerXML("mode2.xml");
		m_mode6 = L"MODE2   " + m_mode2;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode6);
		opx.ModifyNode("name96", mc);
		mc = "2";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();
	}
}

double Moshixuanze::atoi(const char* str)
{
	string ss = str;
	istringstream iss(ss);
	double num;
	iss >> num;
	return num;
}

void Moshixuanze::ReadXML(string str)
{
	CMyPublicData::readXML(str);

	for (int i = 0; i < 21; i++)
	{
		if (tongxincuowu[i] == (-1))
		{
			m_Tip = "num6601";
			Tip tip;
			tip.DoModal();
			return;
		}
	}
	m_Tip = "num6615";
	Tip tip;
	tip.DoModal();
}



//void Moshixuanze::OnEnChangeEdit4()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，它将不
//	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//
//	// TODO:  在此添加控件通知处理程序代码
//	    const char* cstr;
//		string mc;
//		UpdateData(TRUE);
//		opXML opx("name.xml");
//		USES_CONVERSION;
//		mc = W2A(m_mode1);
//		opx.ModifyNode("name1", mc);
//		opx.QueryNode_Text("name97", cstr);
//		mc = cstr;
//		if (mc=="1")
//		{
//			m_mode6 = L"MODE1   " + m_mode1;
//			mc = W2A(m_mode6);
//			opx.ModifyNode("name96", mc);
//		}
//		opx.SaveFile();
//		UpdateData(FALSE);
//}


void Moshixuanze::OnClose()
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CDialogEx::OnCancel();
}


void Moshixuanze::OnCancel()
{
	// TODO: 在此添加专用代码和/或调用基类
}


void Moshixuanze::OnOK()
{
	// TODO: 在此添加专用代码和/或调用基类
}


void Moshixuanze::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	m_moshi = m_mode6;
	KillTimer(1);
	CDialogEx::OnCancel();
}


void Moshixuanze::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Tip2 = "num6801";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		ReadXML("mode2.xml");
		m_mode6 = L"MODE2   " + m_mode2;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode6);
		opx.ModifyNode("name96", mc);
		mc = "2";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}


void Moshixuanze::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Tip2 = "num6801";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		ReadXML("mode3.xml");
		m_mode6 = L"MODE3   " + m_mode3;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode6);
		opx.ModifyNode("name96", mc);
		mc = "3";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}

}


void Moshixuanze::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Tip2 = "num6802";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		CMyPublicData::writerXML("mode3.xml");
		m_mode6 = L"MODE3   " + m_mode3;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode6);
		opx.ModifyNode("name96", mc);
		mc = "3";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();
	}
}


void Moshixuanze::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Tip2 = "num6801";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		ReadXML("mode4.xml");
		m_mode6 = L"MODE4   " + m_mode4;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode6);
		opx.ModifyNode("name96", mc);
		mc = "4";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}


void Moshixuanze::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Tip2 = "num6802";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		CMyPublicData::writerXML("mode4.xml");
		m_mode6 = L"MODE4   " + m_mode4;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode6);
		opx.ModifyNode("name96", mc);
		mc = "4";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();
	}
}


void Moshixuanze::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Tip2 = "num6801";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		ReadXML("mode5.xml");
		m_mode6 = L"MODE5   " + m_mode5;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode6);
		opx.ModifyNode("name96", mc);
		mc = "5";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}


void Moshixuanze::OnBnClickedButton57()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Tip2 = "num6802";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		CMyPublicData::writerXML("mode5.xml");
		m_mode6 = L"MODE5   " + m_mode5;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode6);
		opx.ModifyNode("name96", mc);
		mc = "5";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();
	}
}


void Moshixuanze::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	moshixuanzeer moshi2;
	moshi2.DoModal();

}


//void Moshixuanze::OnEnChangeEdit23()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，它将不
//	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	USES_CONVERSION;
//	mc = W2A(m_mode2);
//	opx.ModifyNode("name2", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "2")
//	{
//		m_mode6 = L"MODE2   " + m_mode2;
//		mc = W2A(m_mode6);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


//void Moshixuanze::OnEnChangeEdit24()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，它将不
//	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	USES_CONVERSION;
//	mc = W2A(m_mode3);
//	opx.ModifyNode("name3", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "3")
//	{
//		m_mode6 = L"MODE3   " + m_mode3;
//		mc = W2A(m_mode6);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


//void Moshixuanze::OnEnChangeEdit34()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，它将不
//	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	USES_CONVERSION;
//	mc = W2A(m_mode4);
//	opx.ModifyNode("name4", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "4")
//	{
//		m_mode6 = L"MODE4   " + m_mode4;
//		mc = W2A(m_mode6);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


//void Moshixuanze::OnEnChangeEdit35()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，它将不
//	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	USES_CONVERSION;
//	mc = W2A(m_mode5);
//	opx.ModifyNode("name5", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "5")
//	{
//		m_mode6 = L"MODE5   " + m_mode5;
//		mc = W2A(m_mode6);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


void Moshixuanze::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	moshixuanzesan moshi3;
	moshi3.DoModal();
}


void Moshixuanze::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	CString cstr;
	GetDlgItem(IDC_BUTTON3)->GetWindowText(cstr);
	if (cstr.Trim() == L"ON")
	{
		GetDlgItem(IDC_EDIT4)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT23)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT24)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT34)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT35)->EnableWindow(TRUE);
		GetDlgItem(IDC_BUTTON3)->SetWindowText(L"OFF");
	}
	else
	{
		GetDlgItem(IDC_EDIT4)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT23)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT24)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT34)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT35)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON3)->SetWindowText(L"ON");
	}

}


void Moshixuanze::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	//为了能够在其他页面更改当前色选方案时，此页面的当前色选方案名称能够更改
	if (nIDEvent == 1)
	{
		if (sexuanfangan == true)
		{
			const char* cstr;
			opXML opx("name.xml");
			opx.QueryNode_Text("name96", cstr);
			m_mode6 = cstr;
			opx.SaveFile();
			UpdateData(FALSE);
			sexuanfangan = false;
		}
	}
	CDialogEx::OnTimer(nIDEvent);
}


void Moshixuanze::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
}


BOOL Moshixuanze::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	USES_CONVERSION;
	UpdateData(TRUE);
	const char* cstr;
	string mc;
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT4);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		ENINPUT ent;
		if (ent.DoModal() == IDOK)
		{
			m_mode1 = ent.ValueShow;
			opXML opx("name.xml");
			mc = W2A(m_mode1);
			opx.ModifyNode("name1", mc);
			opx.QueryNode_Text("name97", cstr);
			mc = cstr;
			if (mc == "1")
			{
				m_mode6 = L"MODE1   " + m_mode1;
				mc = W2A(m_mode6);
				opx.ModifyNode("name96", mc);
			}
			opx.SaveFile();
			UpdateData(FALSE);
		}
		return TRUE;
	}
	else
	{
		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT23);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		{
			ENINPUT ent;
			if (ent.DoModal() == IDOK)
			{
				m_mode2 = ent.ValueShow;
				opXML opx("name.xml");
				mc = W2A(m_mode2);
				opx.ModifyNode("name2", mc);
				opx.QueryNode_Text("name97", cstr);
				mc = cstr;
				if (mc == "2")
				{
					m_mode6 = L"MODE2   " + m_mode2;
					mc = W2A(m_mode6);
					opx.ModifyNode("name96", mc);
				}
				opx.SaveFile();
				UpdateData(FALSE);
			}
			return TRUE;
		}
		else
		{
			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT24);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				ENINPUT ent;
				if (ent.DoModal() == IDOK)
				{
					m_mode3 = ent.ValueShow;
					opXML opx("name.xml");
					mc = W2A(m_mode3);
					opx.ModifyNode("name3", mc);
					opx.QueryNode_Text("name97", cstr);
					mc = cstr;
					if (mc == "3")
					{
						m_mode6 = L"MODE3   " + m_mode3;
						mc = W2A(m_mode6);
						opx.ModifyNode("name96", mc);
					}
					opx.SaveFile();
					UpdateData(FALSE);
				}
				return TRUE;
			}
			else
			{
				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT34);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					ENINPUT ent;
					if (ent.DoModal() == IDOK)
					{
						m_mode4 = ent.ValueShow;
						opXML opx("name.xml");
						mc = W2A(m_mode4);
						opx.ModifyNode("name4", mc);
						opx.QueryNode_Text("name97", cstr);
						mc = cstr;
						if (mc == "4")
						{
							m_mode6 = L"MODE4   " + m_mode4;
							mc = W2A(m_mode6);
							opx.ModifyNode("name96", mc);
						}
						opx.SaveFile();
						UpdateData(FALSE);
					}
					return TRUE;
				}
				else
				{
					CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT34);
					ASSERT(pEdit && pEdit->GetSafeHwnd());
					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
					{
						ENINPUT ent;
						if (ent.DoModal() == IDOK)
						{
							m_mode5 = ent.ValueShow;
							opXML opx("name.xml");
							mc = W2A(m_mode5);
							opx.ModifyNode("name5", mc);
							opx.QueryNode_Text("name97", cstr);
							mc = cstr;
							if (mc == "5")
							{
								m_mode6 = L"MODE5   " + m_mode5;
								mc = W2A(m_mode6);
								opx.ModifyNode("name96", mc);
							}
							opx.SaveFile();
							UpdateData(FALSE);
						}
						return TRUE;
					}
				}
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}
