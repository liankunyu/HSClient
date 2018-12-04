// QuanXianDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "QuanXianDlg.h"
#include "afxdialogex.h"
#include"XMLHelper.h"
#include "ENINPUT.h"
// CQuanXianDlg �Ի���

IMPLEMENT_DYNAMIC(CQuanXianDlg, CDialogEx)

CQuanXianDlg::CQuanXianDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_QUANXIAN_DIALOG, pParent)
	, m_Edit1(_T(""))
	, m_static1(_T(""))
{

}

CQuanXianDlg::~CQuanXianDlg()
{
}

void CQuanXianDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Edit1);
	DDX_Text(pDX, IDC_MIMA_STATIC, m_static1);
	DDX_Text(pDX, IDC_BUTTON1, m_static2);
	DDX_Text(pDX, IDC_BUTTON2, m_static3);

}


BEGIN_MESSAGE_MAP(CQuanXianDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CQuanXianDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CQuanXianDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CQuanXianDlg ��Ϣ�������


void CQuanXianDlg::OnBnClickedButton1()
{
	UpdateData(TRUE);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if (m_Edit1.Trim()==L"ADMIN")
	{
		quanxian = true;
		CDialogEx::OnCancel();
	}
	else
	{
		MessageBox(L"�������");
		m_Edit1 = "";
		UpdateData(FALSE);
	}
}


void CQuanXianDlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}


BOOL CQuanXianDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	UpdateData(TRUE);
	const char* yuyan;
	opXML opx(lang);
	opx.QueryNode_Text("num2601",yuyan);
	m_static1 = yuyan;
	opx.QueryNode_Text("num2602", yuyan);
	m_static2 = yuyan;
	opx.QueryNode_Text("num2603", yuyan);
	m_static3 = yuyan;
	opx.SaveFile();
	UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


BOOL CQuanXianDlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: �ڴ����ר�ô����/����û���
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
