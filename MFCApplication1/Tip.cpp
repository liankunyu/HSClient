// Tip.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Tip.h"
#include "afxdialogex.h"


// Tip �Ի���

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


// Tip ��Ϣ�������


BOOL Tip::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
