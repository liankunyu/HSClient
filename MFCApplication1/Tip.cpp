// Tip.cpp : 实现文件
//

#include "stdafx.h"
#include "Tip.h"
#include "afxdialogex.h"
#include "XMLHelper.h"

// Tip 对话框

IMPLEMENT_DYNAMIC(Tip, CDialogEx)

Tip::Tip(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Tip, pParent)
{

}

Tip::~Tip()
{
}

void Tip::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Tip, CDialogEx)
END_MESSAGE_MAP()


// Tip 消息处理程序


BOOL Tip::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	const char* yuyan;                                  //语言控制，通过xml文件更改语言
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text(m_Tip, yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_Tip)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
