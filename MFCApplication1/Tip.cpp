// Tip.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Tip.h"
#include "afxdialogex.h"
#include "XMLHelper.h"

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
	const char* yuyan;                                  //���Կ��ƣ�ͨ��xml�ļ���������
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text(m_Tip, yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_Tip)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
