//// InputDlg.cpp : 实现文件
////
//
//#include "stdafx.h"
//#include "MFCApplication1.h"
//#include "InputDlg.h"
//#include "afxdialogex.h"
//#include "resource.h"
//
//// CInputDlg 对话框
//
//IMPLEMENT_DYNAMIC(CInputDlg, CDialogEx)
//
//CInputDlg::CInputDlg(CWnd* pParent /*=NULL*/)
//	: CDialogEx(IDD_INPUTTOOL, pParent)
//	//, ValueMax(0)
//	//, ValueMin(0)
//	, ValueShow(_T(""))
//{
//	pointFlag = FALSE;
//	ValueMax = 255;
//	ValueMin = 0;
//}
//
//CInputDlg::~CInputDlg()
//{
//}
//
//void CInputDlg::DoDataExchange(CDataExchange* pDX)
//{
//	CDialogEx::DoDataExchange(pDX);
//	DDX_Text(pDX, IDC_INPUTMAX, ValueMax);
//	DDX_Text(pDX, IDC_INPUTMIN, ValueMin);
//	DDX_Text(pDX, IDC_STATICSHOW, ValueShow);
//}
//
//
//BEGIN_MESSAGE_MAP(CInputDlg, CDialogEx)
//	ON_BN_CLICKED(IDC_MFCBUT0, &CInputDlg::OnBnClickedMfcbut0)
//	ON_BN_CLICKED(IDC_MFCBUTPOINT, &CInputDlg::OnBnClickedMfcbutpoint)
//	ON_BN_CLICKED(IDC_MFCBUT1, &CInputDlg::OnBnClickedMfcbut1)
//	ON_BN_CLICKED(IDC_MFCBUT2, &CInputDlg::OnBnClickedMfcbut2)
//	ON_BN_CLICKED(IDC_MFCBUT3, &CInputDlg::OnBnClickedMfcbut3)
//	ON_BN_CLICKED(IDC_MFCBUTCLEAR, &CInputDlg::OnBnClickedMfcbutclear)
//	ON_BN_CLICKED(IDC_MFCBUT6, &CInputDlg::OnBnClickedMfcbut6)
//	ON_BN_CLICKED(IDC_MFCBUT5, &CInputDlg::OnBnClickedMfcbut5)
//	ON_BN_CLICKED(IDC_MFCBUT4, &CInputDlg::OnBnClickedMfcbut4)
//	ON_BN_CLICKED(IDC_MFCBUT7, &CInputDlg::OnBnClickedMfcbut7)
//	ON_BN_CLICKED(IDC_MFCBUT8, &CInputDlg::OnBnClickedMfcbut8)
//	ON_BN_CLICKED(IDC_MFCBUT9, &CInputDlg::OnBnClickedMfcbut9)
//	ON_BN_CLICKED(IDC_MFCBUTDELET, &CInputDlg::OnBnClickedMfcbutdelet)
//	ON_BN_CLICKED(IDOK, &CInputDlg::OnBnClickedOk)
//	ON_BN_CLICKED(IDCANCEL, &CInputDlg::OnBnClickedCancel)
//END_MESSAGE_MAP()
//
//
//// CInputDlg 消息处理程序
//
//
//
//
//void CInputDlg::OnBnClickedMfcbutpoint()
//{
//	// 小数点，已有小数点则为真
//	UpdateData(TRUE);
//	if (!pointFlag)
//	{
//		ValueShow += L".";
//		pointFlag = TRUE;
//	}
//	else
//	{
//		pointFlag = TRUE;
//	}
//	UpdateData(FALSE);
//}
//
//void CInputDlg::OnBnClickedMfcbut0()
//{
//	UpdateData(TRUE);
//	if (!ValueShow.IsEmpty())
//	ValueShow += L"0";
//	UpdateData(FALSE);
//}
//
//void CInputDlg::OnBnClickedMfcbut1()
//{
//	UpdateData(TRUE);
//	ValueShow += L"1";
//	UpdateData(FALSE);
//}
//
//
//void CInputDlg::OnBnClickedMfcbut2()
//{
//	UpdateData(TRUE);
//	ValueShow += L"2";
//	UpdateData(FALSE);
//}
//
//
//void CInputDlg::OnBnClickedMfcbut3()
//{
//	UpdateData(TRUE);
//	ValueShow += L"3";
//	UpdateData(FALSE);
//}
//
//void CInputDlg::OnBnClickedMfcbut4()
//{
//	UpdateData(TRUE);
//	ValueShow += L"4";
//	UpdateData(FALSE);
//}
//
//
//void CInputDlg::OnBnClickedMfcbut5()
//{
//	UpdateData(TRUE);
//	ValueShow += L"5";
//	UpdateData(FALSE);
//}
//
//
//void CInputDlg::OnBnClickedMfcbut6()
//{
//	UpdateData(TRUE);
//	ValueShow += L"6";
//	UpdateData(FALSE);
//}
//
//
//void CInputDlg::OnBnClickedMfcbut7()
//{
//	UpdateData(TRUE);
//	ValueShow += L"7";
//	UpdateData(FALSE);
//}
//
//
//void CInputDlg::OnBnClickedMfcbut8()
//{
//	UpdateData(TRUE);
//	ValueShow += L"8";
//	UpdateData(FALSE);
//}
//
//
//void CInputDlg::OnBnClickedMfcbut9()
//{
//	UpdateData(TRUE);
//	ValueShow += L"9";
//	UpdateData(FALSE);
//}
//
//
//
///*void CInputDlg::OnBnClickedMfcbutenter()
//{
//	// 确认键，检测最大最小值
//	double finalvalue;
//	finalvalue = _wtof(ValueShow);
//	if (finalvalue >= ValueMax || finalvalue <= ValueMin)
//	{
//		//超出范围，报错
//		AfxMessageBox(_T("数值超出范围！"));
//	}
//}*/
//
//void CInputDlg::OnBnClickedMfcbutclear()
//{
//	// 值清零
//	UpdateData(TRUE);
//	ValueShow = L"";
//	UpdateData(FALSE);
//}
//
//
//void CInputDlg::OnBnClickedMfcbutdelet()
//{
//	//删除末位
//	UpdateData(TRUE);
//	if (!ValueShow.IsEmpty())
//	{
//		ValueShow = ValueShow.Left(ValueShow.GetLength() - 1);
//	}
//	UpdateData(FALSE);
//}
//
//
//void CInputDlg::OnBnClickedOk()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	// 确认键，检测最大最小值
//	double finalvalue;
//	finalvalue = _wtof(ValueShow);
//	//if (finalvalue >= ValueMax || finalvalue <= ValueMin)
//	if (finalvalue > ValueMax || finalvalue < ValueMin)
//	{
//		//超出范围，报错
//		AfxMessageBox(_T("数值超出范围！"));
//	}
//	else
//	{
//		CDialogEx::OnOK();
//	}
//}
//
//
//void CInputDlg::OnBnClickedCancel()
//{
//
//	CDialogEx::OnCancel();
//}
#include "stdafx.h"
#include "MFCApplication1.h"
#include "InputDlg.h"
#include "afxdialogex.h"
#include "resource.h"
#include "XMLHelper.h"

// CInputDlg 对话框

IMPLEMENT_DYNAMIC(CInputDlg, CDialogEx)

CInputDlg::CInputDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_INPUTTOOL, pParent)
	//, ValueMax(0)
	//, ValueMin(0)
	, ValueShow(_T(""))
	, ValueMin(0)
{
	pointFlag = FALSE;
	ValueMax = 255;
	ValueMin = 0;
}

CInputDlg::~CInputDlg()
{
}

void CInputDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_INPUTMAX, ValueMax);
	//  DDX_Text(pDX, IDC_INPUTMIN, ValueMin);
	DDX_Text(pDX, IDC_STATICSHOW, ValueShow);
	DDX_Text(pDX, IDC_INPUTMIN, ValueMin);
}


BEGIN_MESSAGE_MAP(CInputDlg, CDialogEx)
	ON_BN_CLICKED(IDC_MFCBUT0, &CInputDlg::OnBnClickedMfcbut0)
	ON_BN_CLICKED(IDC_MFCBUTPOINT, &CInputDlg::OnBnClickedMfcbutpoint)
	ON_BN_CLICKED(IDC_MFCBUT1, &CInputDlg::OnBnClickedMfcbut1)
	ON_BN_CLICKED(IDC_MFCBUT2, &CInputDlg::OnBnClickedMfcbut2)
	ON_BN_CLICKED(IDC_MFCBUT3, &CInputDlg::OnBnClickedMfcbut3)
	ON_BN_CLICKED(IDC_MFCBUTCLEAR, &CInputDlg::OnBnClickedMfcbutclear)
	ON_BN_CLICKED(IDC_MFCBUT6, &CInputDlg::OnBnClickedMfcbut6)
	ON_BN_CLICKED(IDC_MFCBUT5, &CInputDlg::OnBnClickedMfcbut5)
	ON_BN_CLICKED(IDC_MFCBUT4, &CInputDlg::OnBnClickedMfcbut4)
	ON_BN_CLICKED(IDC_MFCBUT7, &CInputDlg::OnBnClickedMfcbut7)
	ON_BN_CLICKED(IDC_MFCBUT8, &CInputDlg::OnBnClickedMfcbut8)
	ON_BN_CLICKED(IDC_MFCBUT9, &CInputDlg::OnBnClickedMfcbut9)
	ON_BN_CLICKED(IDC_MFCBUTDELET, &CInputDlg::OnBnClickedMfcbutdelet)
	ON_BN_CLICKED(IDOK, &CInputDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CInputDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// CInputDlg 消息处理程序




void CInputDlg::OnBnClickedMfcbutpoint()
{
	// 小数点，已有小数点则为真
	UpdateData(TRUE);
	if (!pointFlag)
	{
		ValueShow += L".";
		pointFlag = TRUE;
	}
	else
	{
		pointFlag = TRUE;
	}
	UpdateData(FALSE);
}

void CInputDlg::OnBnClickedMfcbut0()
{
	UpdateData(TRUE);
	//if (!ValueShow.IsEmpty())
		ValueShow += L"0";
	UpdateData(FALSE);
}

void CInputDlg::OnBnClickedMfcbut1()
{
	UpdateData(TRUE);
	ValueShow += L"1";
	UpdateData(FALSE);
}


void CInputDlg::OnBnClickedMfcbut2()
{
	UpdateData(TRUE);
	ValueShow += L"2";
	UpdateData(FALSE);
}


void CInputDlg::OnBnClickedMfcbut3()
{
	UpdateData(TRUE);
	ValueShow += L"3";
	UpdateData(FALSE);
}

void CInputDlg::OnBnClickedMfcbut4()
{
	UpdateData(TRUE);
	ValueShow += L"4";
	UpdateData(FALSE);
}


void CInputDlg::OnBnClickedMfcbut5()
{
	UpdateData(TRUE);
	ValueShow += L"5";
	UpdateData(FALSE);
}


void CInputDlg::OnBnClickedMfcbut6()
{
	UpdateData(TRUE);
	ValueShow += L"6";
	UpdateData(FALSE);
}


void CInputDlg::OnBnClickedMfcbut7()
{
	UpdateData(TRUE);
	ValueShow += L"7";
	UpdateData(FALSE);
}


void CInputDlg::OnBnClickedMfcbut8()
{
	UpdateData(TRUE);
	ValueShow += L"8";
	UpdateData(FALSE);
}


void CInputDlg::OnBnClickedMfcbut9()
{
	UpdateData(TRUE);
	ValueShow += L"9";
	UpdateData(FALSE);
}



/*void CInputDlg::OnBnClickedMfcbutenter()
{
// 确认键，检测最大最小值
double finalvalue;
finalvalue = _wtof(ValueShow);
if (finalvalue >= ValueMax || finalvalue <= ValueMin)
{
//超出范围，报错
AfxMessageBox(_T("数值超出范围！"));
}
}*/

void CInputDlg::OnBnClickedMfcbutclear()
{
	// 值清零
	UpdateData(TRUE);
	ValueShow = L"";
	UpdateData(FALSE);
}


void CInputDlg::OnBnClickedMfcbutdelet()
{
	//删除末位
	UpdateData(TRUE);
	if (!ValueShow.IsEmpty())
	{
		ValueShow = ValueShow.Left(ValueShow.GetLength() - 1);
	}
	UpdateData(FALSE);
}


void CInputDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	// 确认键，检测最大最小值
	double finalvalue;
	finalvalue = _wtof(ValueShow);
	//if (finalvalue >= ValueMax || finalvalue <= ValueMin)
	if (finalvalue > ValueMax || finalvalue < ValueMin)
	{
		//超出范围，报错
		AfxMessageBox(_T("数值超出范围！"));
	}
	else
	{
		CDialogEx::OnOK();
	}
}


void CInputDlg::OnBnClickedCancel()
{

	CDialogEx::OnCancel();
}




BOOL CInputDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num6901", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATICMAX)->SetWindowText(cstr);
	opx.QueryNode_Text("num6902", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATICMIN)->SetWindowText(cstr);
	opx.QueryNode_Text("num6903", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_MFCBUTCLEAR)->SetWindowText(cstr);
	opx.QueryNode_Text("num6904", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.QueryNode_Text("num6905", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDOK)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
