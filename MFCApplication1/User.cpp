// User.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "User.h"
#include "afxdialogex.h"


// CUser �Ի���

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


// CUser ��Ϣ�������
