// moshixuanzeer.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Moshixuanzeer.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "InputDlg.h"
#include <sstream>
#include <string>
#include "Moshixuanze.h"
#include "moshixuanzesan.h"
#include "MyPublicData.h"
#include "ENINPUT.h"
#include "Tip.h"
#include "Tip2.h"
// moshixuanzeer 对话框

IMPLEMENT_DYNAMIC(moshixuanzeer, CDialogEx)

moshixuanzeer::moshixuanzeer(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MOSHIXUANZEER_DIALOG, pParent)
	, m_mode6(_T(""))
	, m_mode7(_T(""))
	, m_mode8(_T(""))
	, m_mode9(_T(""))
	, m_mode10(_T(""))
	, m_mode16(_T(""))
{

}

moshixuanzeer::~moshixuanzeer()
{
}

void moshixuanzeer::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT4, m_mode6);
	DDX_Text(pDX, IDC_EDIT23, m_mode7);
	DDX_Text(pDX, IDC_EDIT24, m_mode8);
	DDX_Text(pDX, IDC_EDIT34, m_mode9);
	DDX_Text(pDX, IDC_EDIT35, m_mode10);
	DDX_Text(pDX, IDC_EDIT3, m_mode16);
}


BEGIN_MESSAGE_MAP(moshixuanzeer, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &moshixuanzeer::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &moshixuanzeer::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &moshixuanzeer::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &moshixuanzeer::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &moshixuanzeer::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &moshixuanzeer::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &moshixuanzeer::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &moshixuanzeer::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &moshixuanzeer::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON57, &moshixuanzeer::OnBnClickedButton57)
	//	ON_EN_CHANGE(IDC_EDIT4, &moshixuanzeer::OnEnChangeEdit4)
	//	ON_EN_CHANGE(IDC_EDIT23, &moshixuanzeer::OnEnChangeEdit23)
	//	ON_EN_CHANGE(IDC_EDIT24, &moshixuanzeer::OnEnChangeEdit24)
	//	ON_EN_CHANGE(IDC_EDIT34, &moshixuanzeer::OnEnChangeEdit34)
	//	ON_EN_CHANGE(IDC_EDIT35, &moshixuanzeer::OnEnChangeEdit35)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &moshixuanzeer::OnBnClickedCancel)
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BUTTON3, &moshixuanzeer::OnBnClickedButton3)
	//	ON_WM_TIMER()
	//	ON_BN_CLICKED(IDC_BUTTON11, &moshixuanzeer::OnBnClickedButton11)
	//	ON_BN_CLICKED(IDC_BUTTON12, &moshixuanzeer::OnBnClickedButton12)
	//	ON_BN_CLICKED(IDC_BUTTON13, &moshixuanzeer::OnBnClickedButton13)
END_MESSAGE_MAP()


// moshixuanzeer 消息处理程序




void moshixuanzeer::ReadXML(string str)
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





double moshixuanzeer::atoi(const char* str)
{
	string ss = str;
	istringstream iss(ss);
	double num;
	iss >> num;
	return num;
}



void moshixuanzeer::OnBnClickedButton1()
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
		ReadXML("mode6.xml");       //读取mode6.xml文件，导入相应的参数值
		m_mode16 = L"MODE6   " + m_mode6;    //显示当前色选方案名称
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);             //CString转换string
		opx.ModifyNode("name96", mc);   //修改name.xml的name96的值
		mc = "6";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();                  //保存
		UpdateData(FALSE);
	}
}

void moshixuanzeer::OnBnClickedButton2()
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
		CMyPublicData::writerXML("mode6.xml");
		m_mode16 = L"MODE6   " + m_mode6;    //显示当前色选方案名称
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);             //CString转换string
		opx.ModifyNode("name96", mc);   //修改name.xml的name96的值
		mc = "6";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();                  //保存
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();
	}
}

void moshixuanzeer::OnBnClickedButton4()
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
		ReadXML("mode7.xml");
		m_mode16 = L"MODE7   " + m_mode7;
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "7";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}


void moshixuanzeer::OnBnClickedButton5()
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
			CMyPublicData::writerXML("mode7.xml");
			m_mode16 = L"MODE7   " + m_mode7;    //显示当前色选方案名称
			string mc;
			opXML opx("name.xml");
			
			mc = opx.UnicodeToUTF8(m_mode16);             //CString转换string
			opx.ModifyNode("name96", mc);   //修改name.xml的name96的值
			mc = "7";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();                  //保存
			UpdateData(FALSE);
			m_Tip = "num6616";
			Tip tip;
			tip.DoModal();
		}
}


void moshixuanzeer::OnBnClickedButton6()
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
		ReadXML("mode8.xml");
		m_mode16 = L"MODE8   " + m_mode8;
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "8";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}


void moshixuanzeer::OnBnClickedButton7()
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
			CMyPublicData::writerXML("mode8.xml");
			m_mode16 = L"MODE8   " + m_mode8;    //显示当前色选方案名称
			string mc;
			opXML opx("name.xml");
			
			mc = opx.UnicodeToUTF8(m_mode16);             //CString转换string
			opx.ModifyNode("name96", mc);   //修改name.xml的name96的值
			mc = "8";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();                  //保存
			UpdateData(FALSE);
			m_Tip = "num6616";
			Tip tip;
			tip.DoModal();
		}
}


void moshixuanzeer::OnBnClickedButton8()
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
		ReadXML("mode9.xml");
		m_mode16 = L"MODE9   " + m_mode9;
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "9";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}


void moshixuanzeer::OnBnClickedButton9()
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
			CMyPublicData::writerXML("mode9.xml");
			m_mode16 = L"MODE9   " + m_mode9;    //显示当前色选方案名称
			string mc;
			opXML opx("name.xml");
			
			mc = opx.UnicodeToUTF8(m_mode16);             //CString转换string
			opx.ModifyNode("name96", mc);   //修改name.xml的name96的值
			mc = "9";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();                  //保存
			UpdateData(FALSE);
			m_Tip = "num6616";
			Tip tip;
			tip.DoModal();
		}
}


void moshixuanzeer::OnBnClickedButton10()
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
		ReadXML("mode10.xml");
		m_mode16 = L"MODE10   " + m_mode10;
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "10";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}


void moshixuanzeer::OnBnClickedButton57()
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
			CMyPublicData::writerXML("mode10.xml");
			m_mode16 = L"MODE10   " + m_mode10;    //显示当前色选方案名称
			string mc;
			opXML opx("name.xml");
			
			mc = opx.UnicodeToUTF8(m_mode16);             //CString转换string
			opx.ModifyNode("name96", mc);   //修改name.xml的name96的值
			mc = "10";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();                  //保存
			UpdateData(FALSE);
			m_Tip = "num6616";
			Tip tip;
			tip.DoModal();
		}
}


//void moshixuanzeer::OnEnChangeEdit4()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，它将不
//	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");   //打开name.xml文件
//	
//	mc = W2A(m_mode6);       //将CString转化为string
//	opx.ModifyNode("name6", mc);   //修改保存name.xml中name6的值
//	opx.QueryNode_Text("name97", cstr);   //查询name.xml中name97的值
//	mc = cstr;                            
//	if (mc == "6")                      //如果修改方案名称为当前方案名称进行色选方案刷新
//	{
//		m_mode16 = L"MODE6   " + m_mode6;
//		mc = W2A(m_mode16);
//		opx.ModifyNode("name96", mc);    //修改的当前色选方案
//	}
//	opx.SaveFile();         //保存
//	UpdateData(FALSE);
//}


//void moshixuanzeer::OnEnChangeEdit23()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，它将不
//	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	
//	mc = W2A(m_mode7);
//	opx.ModifyNode("name7", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "7")
//	{
//		m_mode16 = L"MODE7   " + m_mode7;
//		mc = W2A(m_mode16);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


//void moshixuanzeer::OnEnChangeEdit24()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，它将不
//	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	
//	mc = W2A(m_mode8);
//	opx.ModifyNode("name8", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "8")
//	{
//		m_mode16 = L"MODE8   " + m_mode8;
//		mc = W2A(m_mode16);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


//void moshixuanzeer::OnEnChangeEdit34()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，它将不
//	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	
//	mc = W2A(m_mode9);
//	opx.ModifyNode("name9", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "9")
//	{
//		m_mode16 = L"MODE9   " + m_mode9;
//		mc = W2A(m_mode16);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


//void moshixuanzeer::OnEnChangeEdit35()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，它将不
//	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	
//	mc = W2A(m_mode10);
//	opx.ModifyNode("name10", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "10")
//	{
//		m_mode16 = L"MODE10   " + m_mode10;
//		mc = W2A(m_mode16);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


void moshixuanzeer::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}
void moshixuanzeer::ReSize()
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


BOOL moshixuanzeer::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num2201", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num2202", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2203", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC12)->SetWindowText(cstr);
	opx.QueryNode_Text("num2204", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num2205", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2206", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON6)->SetWindowText(cstr);
	opx.QueryNode_Text("num2207", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON8)->SetWindowText(cstr);
	opx.QueryNode_Text("num2208", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON10)->SetWindowText(cstr);
	opx.QueryNode_Text("num2209", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
	opx.QueryNode_Text("num2210", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON5)->SetWindowText(cstr);
	opx.QueryNode_Text("num2211", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON7)->SetWindowText(cstr);
	opx.QueryNode_Text("num2212", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON9)->SetWindowText(cstr);
	opx.QueryNode_Text("num2213", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON57)->SetWindowText(cstr);
	opx.QueryNode_Text("num2214", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//初始化窗口位置
	CRect rect;
	GetClientRect(&rect);     //取客户区大小    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;


	int nMargin = 18;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT3)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT3)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT4)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT23)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT24)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);


	UpdateData(TRUE);
	const char* mc;    //名称
	opXML opxx("name.xml");
	opxx.QueryNode_Text("name6", mc);
	m_mode6 = opxx.UTF8ToUnicode(mc);
	opxx.QueryNode_Text("name7", mc);
	m_mode7 = opxx.UTF8ToUnicode(mc);
	opxx.QueryNode_Text("name8", mc);
	m_mode8 = opxx.UTF8ToUnicode(mc);
	opxx.QueryNode_Text("name9", mc);
	m_mode9 = opxx.UTF8ToUnicode(mc);
	opxx.QueryNode_Text("name10", mc);
	m_mode10 = opxx.UTF8ToUnicode(mc);
	opxx.QueryNode_Text("name96", mc);
	m_mode16 = opxx.UTF8ToUnicode(mc);
	opxx.SaveFile();
	GetDlgItem(IDC_EDIT4)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT23)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT24)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT34)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT35)->EnableWindow(FALSE);
	UpdateData(FALSE);
	// TODO:  在此添加额外的初始化
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void moshixuanzeer::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	sexuanfangan = true;   //保证当在第二页更改方案时，第一页色选方案可以更新。当sexuanfangan=true时，触发定时器中的函数，执行色选方案刷新。
	CDialogEx::OnCancel();
}


void moshixuanzeer::OnClose()
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CDialogEx::OnCancel();
}


void moshixuanzeer::OnOK()
{
	// TODO: 在此添加专用代码和/或调用基类
}


void moshixuanzeer::OnCancel()
{
	// TODO: 在此添加专用代码和/或调用基类
}


void moshixuanzeer::OnBnClickedButton3()
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


//void moshixuanzeer::OnTimer(UINT_PTR nIDEvent)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//	if (nIDEvent == 1)
//	{
//		if (sexuanfangan == true)
//		{
//			const char* cstr;
//			opXML opx("name.xml");
//			opx.QueryNode_Text("name96", cstr);
//			m_mode16 = cstr;
//			opx.SaveFile();
//			UpdateData(FALSE);
//			sexuanfangan = false;
//		}
//	}
//	CDialogEx::OnTimer(nIDEvent);
//}





BOOL moshixuanzeer::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	
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
			m_mode6 = ent.ValueShow;
			opXML opx("name.xml");   //打开name.xml文件
			mc = opx.UnicodeToUTF8(m_mode6);       //将CString转化为string
			opx.ModifyNode("name6", mc);   //修改保存name.xml中name6的值
			opx.QueryNode_Text("name97", cstr);   //查询name.xml中name97的值
			mc = cstr;
			if (mc == "6")                      //如果修改方案名称为当前方案名称进行色选方案刷新
			{
				m_mode16 = L"MODE6   " + m_mode6;
				mc = opx.UnicodeToUTF8(m_mode16);
				opx.ModifyNode("name96", mc);    //修改的当前色选方案
			}
			opx.SaveFile();         //保存
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
				m_mode7 = ent.ValueShow;
				opXML opx("name.xml");
				mc = opx.UnicodeToUTF8(m_mode7);
				opx.ModifyNode("name7", mc);
				opx.QueryNode_Text("name97", cstr);
				mc = cstr;
				if (mc == "7")
				{
					m_mode16 = L"MODE7   " + m_mode7;
					mc = opx.UnicodeToUTF8(m_mode16);
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
					m_mode8 = ent.ValueShow;
					opXML opx("name.xml");
					mc = opx.UnicodeToUTF8(m_mode8);
					opx.ModifyNode("name8", mc);
					opx.QueryNode_Text("name97", cstr);
					mc = cstr;
					if (mc == "8")
					{
						m_mode16 = L"MODE8   " + m_mode8;
						mc = opx.UnicodeToUTF8(m_mode16);
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
						m_mode9 = ent.ValueShow;
						opXML opx("name.xml");
						mc = opx.UnicodeToUTF8(m_mode9);
						opx.ModifyNode("name9", mc);
						opx.QueryNode_Text("name97", cstr);
						mc = cstr;
						if (mc == "9")
						{
							m_mode16 = L"MODE9   " + m_mode9;
							mc = opx.UnicodeToUTF8(m_mode16);
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
							m_mode10 = ent.ValueShow;
							opXML opx("name.xml");
							mc = opx.UnicodeToUTF8(m_mode10);
							opx.ModifyNode("name10", mc);
							opx.QueryNode_Text("name97", cstr);
							mc = cstr;
							if (mc == "10")
							{
								m_mode16 = L"MODE10   " + m_mode10;
								mc = opx.UnicodeToUTF8(m_mode16);
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
