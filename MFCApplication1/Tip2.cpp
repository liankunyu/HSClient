// Tip2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Tip2.h"
#include "afxdialogex.h"
#include "XMLHelper.h"

// Tip2 �Ի���

IMPLEMENT_DYNAMIC(Tip2, CDialogEx)

Tip2::Tip2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Tip2, pParent)
{

}

Tip2::~Tip2()
{
}

void Tip2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Tip2, CDialogEx)
	ON_BN_CLICKED(IDOK, &Tip2::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &Tip2::OnBnClickedCancel)
END_MESSAGE_MAP()


// Tip2 ��Ϣ�������


void Tip2::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Retip = 1;
	CDialogEx::OnOK();
}


void Tip2::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Retip = 0;
	CDialogEx::OnCancel();
}


BOOL Tip2::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_Retip = 0;//����
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	const char* yuyan;                                  //���Կ��ƣ�ͨ��xml�ļ���������
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text(m_Tip2, yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_Tip2)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
