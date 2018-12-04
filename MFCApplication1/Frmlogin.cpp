// Frmlogin.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Frmlogin.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include <sstream>

IMPLEMENT_DYNAMIC(Frmlogin, CDialogEx)

Frmlogin::Frmlogin(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_LOGIN_DIALOG, pParent)
	, st_login(_T(""))
{

}

Frmlogin::~Frmlogin()
{
}

void Frmlogin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX,IDC_LOGIN_STATIC, st_login);
	DDX_Text(pDX, IDC_BUTTON1,m_static1);
	DDX_Text(pDX, IDC_BUTTON2,m_static2);
	DDX_Text(pDX, IDC_BUTTON3, m_static3);

}


BEGIN_MESSAGE_MAP(Frmlogin, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON3, &Frmlogin::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &Frmlogin::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Frmlogin::OnBnClickedButton2)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// Frmlogin 消息处理程序


BOOL Frmlogin::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	try
	{
		// TODO:  在此添加额外的初始化
		const char* yuyan1;
		opXML opx8(lang);
		opx8.QueryNode_Text("num1601", yuyan1);
		m_static1 = yuyan1;
		opx8.QueryNode_Text("num1602", yuyan1);
		m_static2= yuyan1;
		opx8.QueryNode_Text("num1603", yuyan1);
		m_static3 = yuyan1;
		opx8.SaveFile();
		UpdateData(FALSE);
		string s, sycs, sysj;//s，剩余次数，剩余时间
		int re_id, shengyucs, shengyusj;//使用次数，剩余次数，剩余时间
		const char* cre_id;
			opXML opx("login.xml");
			opx.QueryNode_Text("sycs", cre_id);
			s = cre_id;
			//opx.Encode(s);
			sscanf_s(s.c_str(), "%d", &re_id);
			shengyucs = 3213 - re_id;  //获得剩余次数
			stringstream ss, sss;
			ss << shengyucs;
			ss >> sycs;
			shengyusj = 0 - shijiancha("jzsj");//获得剩余时间
			sss << shengyusj;    //整数转化为stringstream类型
			sss >> sysj;         //stringstream类型转化为string类型
			s = "剩余次数:" + sycs + "次 剩余时间:" + sysj + "天";//将剩余时间和剩余次数字符串拼接
			cre_id = s.c_str();
			CString csre_id(cre_id);
			st_login = csre_id;
			opx.SaveFile();
		
		UpdateData(FALSE);
		return TRUE;
	}
	catch (CMemoryException* e)
	{
		return TRUE;
	}
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void Frmlogin::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	exit(0);
}


void Frmlogin::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

}


void Frmlogin::OnBnClickedButton2()
{
	try 
	{
		if (shijiancha1("gjsj")>= 0)
		{
			string sre_id;
			int re_id;
			const char* cre_id;
			opXML opx("login.xml");
			opx.QueryNode_Text("sycs", cre_id);
			sre_id = cre_id;
			//opx.Encode(sre_id);
			sscanf_s(sre_id.c_str(), "%d", &re_id);
			if ((re_id >= 2213) && (shijiancha("jzsj")<=0) && (re_id <= 3213))
			{
				re_id++;
				stringstream ss;
				ss << re_id;
				ss >> sre_id;
				//opx.Encode(sre_id);
				opx.ModifyNode("sycs", sre_id);
				opx.SaveFile();
				CDialogEx::OnCancel();
			}
			else
			{
				MessageBox(L"请获取合法注册码！", L"警告");
			}
		}
		else
		{
			MessageBox(L"当前系统时间错误,将退出系统!");
			exit(0);
		}
		
		
	}
	catch(string &e)
	{

	}
}
int Frmlogin::shijiancha(string str)
{
	const char* s;
	opXML opx("login.xml");
	opx.QueryNode_Text(str, s);
	//string s2 = s;
	//opx.Encode(s2);
	//s = s2.c_str();
	//int nYear, nMonth, nDate, nHour, nMin, nSec;
	int nYear, nMonth, nDate;
	//sscanf(s, "%d-%d-%d %d:%d:%d", &nYear, &nMonth, &nDate, &nHour, &nMin, &nSec);
	sscanf_s(s, "%d-%d-%d", &nYear, &nMonth, &nDate);
	CTime t(nYear, nMonth, nDate, 0,0,0);
	CTime tm = CTime::GetCurrentTime();
	CTimeSpan span = tm - t;  //计算当前系统时间与时间t1的间隔
	int iDay = span.GetDays(); //获取这段时间间隔共有多少天
	return iDay;
}
double Frmlogin::shijiancha1(string str)
{
	const char* s;
	opXML opx("login.xml");
	opx.QueryNode_Text(str, s);
	//string s2 = s;
	//opx.Encode(s2);
	//s = s2.c_str();
	int nYear, nMonth, nDate, nHour, nMin, nSec;
	//int nYear, nMonth, nDate;
	sscanf(s, "%d-%d-%d %d:%d:%d", &nYear, &nMonth, &nDate, &nHour, &nMin, &nSec);
	//sscanf_s(s, "%d-%d-%d", &nYear, &nMonth, &nDate);
	CTime t(nYear, nMonth, nDate, nHour, nMin, nSec);
	CTime tm = CTime::GetCurrentTime();
	CTimeSpan span = tm - t;  //计算当前系统时间与时间t1的间隔
	double iMinutes = span.GetTotalMinutes(); //获取这段时间间隔共有多少分钟
	return iMinutes;
}

void Frmlogin::OnClose()
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CDialogEx::OnCancel();
}


void Frmlogin::OnCancel()
{
	// TODO: 在此添加专用代码和/或调用基类

	
}


void Frmlogin::OnOK()
{
	// TODO: 在此添加专用代码和/或调用基类

}

