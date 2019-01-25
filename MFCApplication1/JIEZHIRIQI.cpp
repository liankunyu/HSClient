// JIEZHIRIQI.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "JIEZHIRIQI.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "XMLHelper.h"
#include <string>
#include <sstream>
#include "ENINPUT.h"
#include "Tip.h"
// JIEZHIRIQI 对话框

IMPLEMENT_DYNAMIC(JIEZHIRIQI, CDialogEx)

JIEZHIRIQI::JIEZHIRIQI(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_JIEZHIRIQI_DIALOG, pParent)
	, m_cstring1(_T(""))
	, m_cstring2(_T(""))
	, m_cstring3(_T(""))
	, m_cstr(_T(""))
	, m_cs(_T(""))
{

}

JIEZHIRIQI::~JIEZHIRIQI()
{
}

void JIEZHIRIQI::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, m_cstring1);
	DDX_Text(pDX, IDC_EDIT3, m_cstring2);
	DDX_Text(pDX, IDC_EDIT4, m_cstring3);
	DDX_Text(pDX, IDC_EDIT18, m_cstr);
	DDX_Text(pDX, IDC_EDIT1, m_cs);
}


BEGIN_MESSAGE_MAP(JIEZHIRIQI, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &JIEZHIRIQI::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &JIEZHIRIQI::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &JIEZHIRIQI::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &JIEZHIRIQI::OnBnClickedButton5)
END_MESSAGE_MAP()


// JIEZHIRIQI 消息处理程序


BOOL JIEZHIRIQI::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		ENINPUT ent;
		if (ent.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_cs = ent.ValueShow;
			UpdateData(FALSE);
		}
		return TRUE;
	}
	else
	{
		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT2);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		{
			ENINPUT ent;
			if (ent.DoModal() == IDOK)
			{
				UpdateData(TRUE);
				m_cstring1 = ent.ValueShow;
				UpdateData(FALSE);
			}
			return TRUE;
		}
		else
		{
			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT3);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				ENINPUT ent;
				if (ent.DoModal() == IDOK)
				{
					UpdateData(TRUE);
					m_cstring2 = ent.ValueShow;
					UpdateData(FALSE);
				}
				return TRUE;
			}
			else
			{
				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT4);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					ENINPUT ent;
					if (ent.DoModal() == IDOK)
					{
						UpdateData(TRUE);
						m_cstring3 = ent.ValueShow;
						UpdateData(FALSE);
					}
					return TRUE;
				}
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


void JIEZHIRIQI::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	USES_CONVERSION;
	CString cstr;
	GetDlgItem(IDC_EDIT1)->GetWindowText(cstr); //获得输入字符串
	cstr.Remove(L' ');//第一个参数是空格，第二个参数NULL去除空格。
	if (cstr.Trim().GetLength() >= 20)    //判断输入字符串长度是否大于20
	{
		for (int i = 0; i < 8; i++)
		{
			if (cstr.Trim().GetAt(2 * i + 2) == Sstr[0])
			{
				temp[i] = CSnum[0];
			}
			if (cstr.Trim().GetAt(2 * i + 2) == Sstr[1])
			{
				temp[i] = CSnum[1];
			}
			if (cstr.Trim().GetAt(2 * i + 2) == Sstr[2])
			{
				temp[i] = CSnum[2];
			}
			if (cstr.Trim().GetAt(2 * i + 2) == Sstr[3])
			{
				temp[i] = CSnum[3];
			}
			if (cstr.Trim().GetAt(2 * i + 2) == Sstr[4])
			{
				temp[i] = CSnum[4];
			}
			if (cstr.Trim().GetAt(2 * i + 2) == Sstr[5])
			{
				temp[i] = CSnum[5];
			}
			if (cstr.Trim().GetAt(2 * i + 2) == Sstr[6])
			{
				temp[i] = CSnum[6];
			}
			if (cstr.Trim().GetAt(2 * i + 2) == Sstr[7])
			{
				temp[i] = CSnum[7];
			}
			if (cstr.Trim().GetAt(2 * i + 2) == Sstr[8])
			{
				temp[i] = CSnum[8];
			}
			if (cstr.Trim().GetAt(2 * i + 2) == Sstr[9])
			{
				temp[i] = CSnum[9];
			}
		}

		m_cstr3 = L" ";
		m_cstr3 += temp[0];
		m_cstr3 += temp[1];
		m_cstr3 += temp[2];
		m_cstr3 += temp[3];
		m_cstr3 += temp[4];
		m_cstr3 += temp[5];
		m_cstr3 += temp[6];
		m_cstr3 += temp[7];
	}
	else
	{
		return;
	}
	m_cstr2.Format(_T("%d"), Device_ID);
	if ((m_cstr2.Trim()) != (m_cstr3.Trim()))
	{
		m_Tip = "num6604";//传入节点名
		Tip tip;
		tip.DoModal();
		return;
	}


	for (int i = 3; i < 9; i++)          //由于2018-03-12中20是固定的，所以从18开始解析，把字母转化为数字
	{
		if (cstr.Trim().GetAt(2 * i + 1) == CSstr[0])
		{
			tmp[i] = 0;
			temp[i] = CSnum[0];
		}
		if (cstr.Trim().GetAt(2 * i + 1) == CSstr[1])
		{
			tmp[i] = 1;
			temp[i] = CSnum[1];
		}
		if (cstr.Trim().GetAt(2 * i + 1) == CSstr[2])
		{
			tmp[i] = 2;
			temp[i] = CSnum[2];
		}
		if (cstr.Trim().GetAt(2 * i + 1) == CSstr[3])
		{
			tmp[i] = 3;
			temp[i] = CSnum[3];
		}
		if (cstr.Trim().GetAt(2 * i + 1) == CSstr[4])
		{
			tmp[i] = 4;
			temp[i] = CSnum[4];
		}
		if (cstr.Trim().GetAt(2 * i + 1) == CSstr[5])
		{
			tmp[i] = 5;
			temp[i] = CSnum[5];
		}
		if (cstr.Trim().GetAt(2 * i + 1) == CSstr[6])
		{
			tmp[i] = 6;
			temp[i] = CSnum[6];
		}
		if (cstr.Trim().GetAt(2 * i + 1) == CSstr[7])
		{
			tmp[i] = 7;
			temp[i] = CSnum[7];
		}
		if (cstr.Trim().GetAt(2 * i + 1) == CSstr[8])
		{
			tmp[i] = 8;
			temp[i] = CSnum[8];
		}
		if (cstr.Trim().GetAt(2 * i + 1) == CSstr[9])
		{
			tmp[i] = 9;
			temp[i] = CSnum[9];
		}
	}
	m_cstr = L"";
	m_cstr += L"2";
	m_cstr += L"0";
	m_cstr += temp[3];
	m_cstr += temp[4];
	m_cstr += L"-";
	m_cstr += temp[5];
	m_cstr += temp[6];
	m_cstr += L"-";
	m_cstr += temp[7];
	m_cstr += temp[8];       //拼装字符串 m_cstr代表IDC_EDIT18


	int nYear, nMonth, nDay;
	nYear = 2000 + tmp[3] * 10 + tmp[4];
	nMonth = tmp[5] * 10 + tmp[6];
	nDay = tmp[7] * 10 + tmp[8];
	COleDateTime m_dt;
	if (m_dt.SetDate(nYear, nMonth, nDay) == 0)  //判断输入日期是否为合法值，正确返回值为0，不正确为1
	{
		opXML opx("lasttime.xml");
		string str(T2A(m_cstr));
		opx.ModifyNode("jzsj", str);
		str = "xianshi";
		opx.ModifyNode("xianshi", str);
		opx.SaveFile();
		m_Tip = "num6605";//传入节点名
		Tip tip;
		tip.DoModal();
	}
	else
	{
		m_Tip = "num6606";//传入节点名
		Tip tip;
		tip.DoModal();
	}
	UpdateData(FALSE);
}

string JIEZHIRIQI::numtoString(double x)
{
	stringstream ss;
	string sss;
	ss << x;
	ss >> sss;
	return sss;
}

void JIEZHIRIQI::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	if ((m_cstring1.Trim() == L"AA") && (m_cstring2.Trim() == L"BB") && (m_cstring3.Trim() == L"CC"))
	{
		opXML opx("lasttime.xml");
		string str;
		str = "2099-1-1";
		opx.ModifyNode("jzsj", str);
		str = "buxianshi";
		opx.ModifyNode("xianshi", str);
		opx.SaveFile();
	}
	else
	{
		m_Tip = "num6607";//传入节点名
		Tip tip;
		tip.DoModal();
	}
}


//void JIEZHIRIQI::OnBnClickedCancel()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	CDialogEx::OnCancel();
//}


void JIEZHIRIQI::OnBnClickedButton4()
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
									 //EWX_FORCE    4 强行终止没有响应的进程  
}


BOOL JIEZHIRIQI::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num5201", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num5202", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num5203", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
	opx.QueryNode_Text("num5204", yuyan);
	//cstr = opx.UTF8ToUnicode(yuyan);
	//GetDlgItem(IDC_BUTTON5)->SetWindowText(cstr);
	opx.QueryNode_Text("num5205", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num5206", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
	opx.QueryNode_Text("num5207", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(cstr);
	opx.SaveFile();


	CRect rect;
	int nMargin = 10;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT1)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT1)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT3)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT4)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

//查看更改后的日期
void JIEZHIRIQI::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	////显示当前截止日期
	//USES_CONVERSION;
	//const char* jiezhiriqi;
	//CString cstr10;
	//opXML opx("lasttime.xml");
	//opx.QueryNode_Text("jzsj", jiezhiriqi);
	//cstr10 = jiezhiriqi;
	//opx.SaveFile();
	//m_cstr = cstr10;
	//UpdateData(FALSE);
}
