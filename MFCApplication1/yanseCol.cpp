// yanseCol.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "yanseCol.h"
#include "afxdialogex.h"
#include "Yansemingan.h"
#include "quyuer.h"
#include "quyusan.h"
#include "quyusi.h"
#include "quyuwu.h"
#include "shendu.h"
#include "shenduer.h"
#include "huidu1.h"
#include "huidu2.h"
#include "yansehangmianji.h"
#include "beijingyuzhi.h"
#include "yanseminganqiangdu.h"
#include "shujuduqu.h"
#include "XMLHelper.h"
// yanseCol 对话框

IMPLEMENT_DYNAMIC(yanseCol, CDialogEx)

yanseCol::yanseCol(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_YANSE1_DIALOG1, pParent)
{

}

yanseCol::~yanseCol()
{
}

void yanseCol::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(yanseCol, CDialogEx)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON1, &yanseCol::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &yanseCol::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &yanseCol::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &yanseCol::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON7, &yanseCol::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON5, &yanseCol::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON8, &yanseCol::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON6, &yanseCol::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON9, &yanseCol::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &yanseCol::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON57, &yanseCol::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON33, &yanseCol::OnBnClickedButton33)
	ON_BN_CLICKED(IDCANCEL, &yanseCol::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON34, &yanseCol::OnBnClickedButton34)
END_MESSAGE_MAP()


// yanseCol 消息处理程序



BOOL yanseCol::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
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
	opx.QueryNode_Text("num6301", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num6302", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num6303", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(cstr);
	opx.QueryNode_Text("num6304", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON7)->SetWindowText(cstr);
	opx.QueryNode_Text("num6305", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON10)->SetWindowText(cstr);
	opx.QueryNode_Text("num6306", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON34)->SetWindowText(cstr);
	opx.QueryNode_Text("num6307", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
	opx.QueryNode_Text("num6308", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON5)->SetWindowText(cstr);
	opx.QueryNode_Text("num6309", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON8)->SetWindowText(cstr);
	opx.QueryNode_Text("num6310", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON57)->SetWindowText(cstr);
	opx.QueryNode_Text("num6311", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
	opx.QueryNode_Text("num6312", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON6)->SetWindowText(cstr);
	opx.QueryNode_Text("num6313", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON9)->SetWindowText(cstr);
	opx.QueryNode_Text("num6314", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON33)->SetWindowText(cstr);
	opx.QueryNode_Text("num6315", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}



void yanseCol::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void yanseCol::ReSize()
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


void yanseCol::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	Yansemingan ys;
	ys.DoModal();
}


void yanseCol::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	quyuer qe;
	qe.DoModal();
}


void yanseCol::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	quyusan qs;
	qs.DoModal();
}


void yanseCol::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	quyusi qs;
	qs.DoModal();
}


void yanseCol::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	quyuwu qw;
	qw.DoModal();
}


void yanseCol::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	shendu sd;
	sd.DoModal();
}


void yanseCol::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	shenduer sde;
	sde.DoModal();
}


void yanseCol::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	huidu1 hd;
	hd.DoModal();
}


void yanseCol::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	huidu2 hde;
	hde.DoModal();
}


void yanseCol::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	yansehangmianji yh;
	yh.DoModal();
}


void yanseCol::OnBnClickedButton57()
{
	// TODO: 在此添加控件通知处理程序代码
	beijingyuzhi bz;
	bz.DoModal();
}


void yanseCol::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	yanseminganqiangdu yq;
	yq.DoModal();
}


void yanseCol::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}


void yanseCol::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	shujuduqu sd;
	sd.DoModal();
}
