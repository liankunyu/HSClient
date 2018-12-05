// mima.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "mima.h"
#include "afxdialogex.h"
#include "ENINPUT.h"
#include "yuancheng.h"
#include "Tip.h"

// mima 对话框

IMPLEMENT_DYNAMIC(mima, CDialogEx)

mima::mima(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MIMA_DIALOG, pParent)
	, m_Edit1(_T(""))
{

}

mima::~mima()
{
}

void mima::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Edit1);
}


BEGIN_MESSAGE_MAP(mima, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &mima::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &mima::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &mima::OnBnClickedButton3)
END_MESSAGE_MAP()


// mima 消息处理程序


void mima::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	if (m_Edit1.Trim() == L"ADMIN")
	{
		CDialogEx::OnCancel();
	}
	else
	{
		m_Tip = "num6609";//传入节点名
		Tip tip;
		tip.DoModal();
		m_Edit1 = "";
		UpdateData(FALSE);
	}
}


void mima::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//关机
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
	if (!ExitWindowsEx(EWX_SHUTDOWN | EWX_FORCE, SHTDN_REASON_MAJOR_OPERATINGSYSTEM
		| SHTDN_REASON_MINOR_UPGRADE
		| SHTDN_REASON_FLAG_PLANNED))//关机函数ExitWindowEx   
		return;                      //EWX_LOGOFF   0 终止进程系统注销                    
	return;                          //EWX_SHUTDOWN 1 关闭系统电源                                                                                                                      
									 // EWX_REBOOT  2 重新启动
									 //EWX_FORCE    4 强行终止没有响应的进程  
}


BOOL mima::PreTranslateMessage(MSG* pMsg)
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
			m_Edit1 = ent.ValueShow;
			UpdateData(FALSE);
		}
		return TRUE;
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


void mima::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	//启用远程控制功能修改密码
	yuancheng yc;
	yc.DoModal();
}
