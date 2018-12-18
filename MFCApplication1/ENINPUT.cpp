// ENINPUT.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "ENINPUT.h"
#include "afxdialogex.h"
#include "XMLHelper.h"

// ENINPUT 对话框

IMPLEMENT_DYNAMIC(ENINPUT, CDialogEx)

ENINPUT::ENINPUT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ENGLISHINPUT, pParent)
	, ValueShow(_T(""))
{

}

ENINPUT::~ENINPUT()
{
}

void ENINPUT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_STATICSHOW, ValueShow);
}


BEGIN_MESSAGE_MAP(ENINPUT, CDialogEx)
	ON_BN_CLICKED(IDC_MFCBUT1, &ENINPUT::OnBnClickedMfcbut1)
	ON_BN_CLICKED(IDC_MFCBUT2, &ENINPUT::OnBnClickedMfcbut2)
	ON_BN_CLICKED(IDC_MFCBUT3, &ENINPUT::OnBnClickedMfcbut3)
	ON_BN_CLICKED(IDC_MFCBUT4, &ENINPUT::OnBnClickedMfcbut4)
	ON_BN_CLICKED(IDC_MFCBUT5, &ENINPUT::OnBnClickedMfcbut5)
	ON_BN_CLICKED(IDC_MFCBUT6, &ENINPUT::OnBnClickedMfcbut6)
	ON_BN_CLICKED(IDC_MFCBUT7, &ENINPUT::OnBnClickedMfcbut7)
	ON_BN_CLICKED(IDC_MFCBUT8, &ENINPUT::OnBnClickedMfcbut8)
	ON_BN_CLICKED(IDC_MFCBUT9, &ENINPUT::OnBnClickedMfcbut9)
	ON_BN_CLICKED(IDC_MFCBUT0, &ENINPUT::OnBnClickedMfcbut0)
	ON_BN_CLICKED(IDC_MFCBUT10, &ENINPUT::OnBnClickedMfcbut10)
	ON_BN_CLICKED(IDC_MFCBUT11, &ENINPUT::OnBnClickedMfcbut11)
	ON_BN_CLICKED(IDC_MFCBUTDELET, &ENINPUT::OnBnClickedMfcbutdelet)
	ON_BN_CLICKED(IDC_MFCBUT12, &ENINPUT::OnBnClickedMfcbut12)
	ON_BN_CLICKED(IDC_MFCBUT13, &ENINPUT::OnBnClickedMfcbut13)
	ON_BN_CLICKED(IDC_MFCBUT14, &ENINPUT::OnBnClickedMfcbut14)
	ON_BN_CLICKED(IDC_MFCBUT15, &ENINPUT::OnBnClickedMfcbut15)
	ON_BN_CLICKED(IDC_MFCBUT16, &ENINPUT::OnBnClickedMfcbut16)
	ON_BN_CLICKED(IDC_MFCBUT17, &ENINPUT::OnBnClickedMfcbut17)
	ON_BN_CLICKED(IDC_MFCBUT18, &ENINPUT::OnBnClickedMfcbut18)
	ON_BN_CLICKED(IDC_MFCBUT19, &ENINPUT::OnBnClickedMfcbut19)
	ON_BN_CLICKED(IDC_MFCBUT20, &ENINPUT::OnBnClickedMfcbut20)
	ON_BN_CLICKED(IDC_MFCBUT21, &ENINPUT::OnBnClickedMfcbut21)
	ON_BN_CLICKED(IDC_MFCBUT22, &ENINPUT::OnBnClickedMfcbut22)
	ON_BN_CLICKED(IDC_MFCBUT23, &ENINPUT::OnBnClickedMfcbut23)
	ON_BN_CLICKED(IDC_MFCBUTCLEAR, &ENINPUT::OnBnClickedMfcbutclear)
	ON_BN_CLICKED(IDCANCEL, &ENINPUT::OnBnClickedCancel)
	ON_BN_CLICKED(IDOK, &ENINPUT::OnBnClickedOk)
	ON_BN_CLICKED(IDC_MFCBUT24, &ENINPUT::OnBnClickedMfcbut24)
	ON_BN_CLICKED(IDC_MFCBUT25, &ENINPUT::OnBnClickedMfcbut25)
	ON_BN_CLICKED(IDC_MFCBUT26, &ENINPUT::OnBnClickedMfcbut26)
	ON_BN_CLICKED(IDC_MFCBUT27, &ENINPUT::OnBnClickedMfcbut27)
	ON_BN_CLICKED(IDC_MFCBUT28, &ENINPUT::OnBnClickedMfcbut28)
	ON_BN_CLICKED(IDC_MFCBUT29, &ENINPUT::OnBnClickedMfcbut29)
	ON_BN_CLICKED(IDC_MFCBUT30, &ENINPUT::OnBnClickedMfcbut30)
	ON_BN_CLICKED(IDC_MFCBUT31, &ENINPUT::OnBnClickedMfcbut31)
	ON_BN_CLICKED(IDC_MFCBUT32, &ENINPUT::OnBnClickedMfcbut32)
	ON_BN_CLICKED(IDC_MFCBUT33, &ENINPUT::OnBnClickedMfcbut33)
	ON_BN_CLICKED(IDC_MFCBUT34, &ENINPUT::OnBnClickedMfcbut34)
	ON_BN_CLICKED(IDC_MFCBUT35, &ENINPUT::OnBnClickedMfcbut35)
	ON_BN_CLICKED(IDC_MFCBUT36, &ENINPUT::OnBnClickedMfcbut36)
	ON_BN_CLICKED(IDC_MFCBUT37, &ENINPUT::OnBnClickedMfcbut37)
	ON_BN_CLICKED(IDC_MFCBUT38, &ENINPUT::OnBnClickedMfcbut38)
	ON_BN_CLICKED(IDC_MFCBUT39, &ENINPUT::OnBnClickedMfcbut39)
	ON_BN_CLICKED(IDC_MFCBUT40, &ENINPUT::OnBnClickedMfcbut40)
	ON_BN_CLICKED(IDC_MFCBUT41, &ENINPUT::OnBnClickedMfcbut41)
	ON_BN_CLICKED(IDC_MFCBUT42, &ENINPUT::OnBnClickedMfcbut42)
	ON_BN_CLICKED(IDC_MFCBUT43, &ENINPUT::OnBnClickedMfcbut43)
	ON_BN_CLICKED(IDC_MFCBUTPOINT, &ENINPUT::OnBnClickedMfcbutpoint)
	ON_BN_CLICKED(IDC_MFCBUT45, &ENINPUT::OnBnClickedMfcbut45)
	ON_BN_CLICKED(IDC_MFCBUT46, &ENINPUT::OnBnClickedMfcbut46)
	ON_BN_CLICKED(IDC_MFCBUTPOINT6, &ENINPUT::OnBnClickedMfcbutpoint6)
	ON_BN_CLICKED(IDC_MFCBUT47, &ENINPUT::OnBnClickedMfcbut47)
	ON_BN_CLICKED(IDC_MFCBUTPOINT2, &ENINPUT::OnBnClickedMfcbutpoint2)
	ON_BN_CLICKED(IDC_MFCBUTPOINT3, &ENINPUT::OnBnClickedMfcbutpoint3)
	ON_BN_CLICKED(IDC_MFCBUTPOINT4, &ENINPUT::OnBnClickedMfcbutpoint4)
	ON_BN_CLICKED(IDC_MFCBUT48, &ENINPUT::OnBnClickedMfcbut48)
	ON_BN_CLICKED(IDC_MFCBUTPOINT5, &ENINPUT::OnBnClickedMfcbutpoint5)
	ON_BN_CLICKED(IDC_MFCBUT49, &ENINPUT::OnBnClickedMfcbut49)
	ON_BN_CLICKED(IDC_MFCBUT50, &ENINPUT::OnBnClickedMfcbut50)
END_MESSAGE_MAP()


// ENINPUT 消息处理程序


void ENINPUT::OnBnClickedMfcbut1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"1";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"2";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"3";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"4";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"5";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"6";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"7";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"8";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"9";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut0()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"0";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"-";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut11()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"+";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbutdelet()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if (!ValueShow.IsEmpty())
	{
		ValueShow = ValueShow.Left(ValueShow.GetLength() - 1);
	}
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut12()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"Q";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut13()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"W";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut14()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"E";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut15()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"R";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut16()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"T";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut17()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"Y";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut18()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"U";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut19()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"I";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut20()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"O";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut21()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"P";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut22()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"[";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut23()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"]";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbutclear()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow = L"";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}


void ENINPUT::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void ENINPUT::OnBnClickedMfcbut24()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"A";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut25()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"S";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut26()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"D";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut27()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"F";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut28()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"G";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut29()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"H";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut30()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"J";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut31()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"K";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut32()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"L";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut33()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L";";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut34()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"\'";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut35()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"\"";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut36()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"Z";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut37()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"X";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut38()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"C";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut39()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"V";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut40()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"B";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut41()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"N";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut42()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"M";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut43()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L",";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbutpoint()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L".";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut45()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"/";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut46()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"?";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbutpoint6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"*";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut47()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"!";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbutpoint2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"@";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbutpoint3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"#";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbutpoint4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"$";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut48()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L" ";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbutpoint5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"%";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut49()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L"(";
	UpdateData(FALSE);
}


void ENINPUT::OnBnClickedMfcbut50()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	ValueShow += L")";
	UpdateData(FALSE);
}


BOOL ENINPUT::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num4701", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_MFCBUTCLEAR)->SetWindowText(cstr);
	opx.QueryNode_Text("num4702", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.QueryNode_Text("num4703", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDOK)->SetWindowText(cstr);
	opx.SaveFile();
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
