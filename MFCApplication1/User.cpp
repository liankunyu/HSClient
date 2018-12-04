// User.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "User.h"
#include "afxdialogex.h"


// CUser 对话框

IMPLEMENT_DYNAMIC(CUser, CDialogEx)

CUser::CUser(CWnd* pParent /*=NULL*/)
	: CDialogEx(CUser::IDD, pParent)
{

}

CUser::~CUser()
{
}

void CUser::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CUser, CDialogEx)
END_MESSAGE_MAP()


// CUser 消息处理程序
