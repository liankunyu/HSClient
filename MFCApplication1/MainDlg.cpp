// MainDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MainDlg.h"
#include "afxdialogex.h"
#include "Famenceshi.h"
#include "Lingmindu.h"
#include "Liuliangsheding.h"
#include "Mianji.h"
#include "Moshixuanze.h"
#include "Qinghui.h"
#include "Yansemingan.h"
#include "tiaoshi.h"


// CMainDlg 对话框

IMPLEMENT_DYNAMIC(CMainDlg, CDialogEx)

CMainDlg::CMainDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMainDlg::IDD, pParent)
	, m_modelSize(_T(""))
	, m_time(_T(""))
{

}

CMainDlg::~CMainDlg()
{
}

void CMainDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_MODELSIZE_EDIT, m_modelSize);
	DDX_Text(pDX, IDC_TIME_EDIT, m_time);
}


BEGIN_MESSAGE_MAP(CMainDlg, CDialogEx)
//	ON_BN_CLICKED(IDC_LIULIANGSHEDING_BUTTON, &CMainDlg::OnBnClickedLiuliangshedingButton)
	ON_BN_CLICKED(IDC_LINGMINDU_BUTTON, &CMainDlg::OnBnClickedLingminduButton)
	ON_BN_CLICKED(IDC_YANSEMINGAN_BUTTON, &CMainDlg::OnBnClickedYanseminganButton)
	ON_BN_CLICKED(IDC_MOSHIXUANZE_BUTTON, &CMainDlg::OnBnClickedMoshixuanzeButton)
	ON_BN_CLICKED(IDC_BUTTON1, &CMainDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDCANCEL, &CMainDlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_KAISHI_BUTTON, &CMainDlg::OnBnClickedKaishiButton)
	ON_BN_CLICKED(IDC_LIULIANGSHEDING_BUTTON, &CMainDlg::OnBnClickedLiuliangshedingButton)
	ON_BN_CLICKED(IDC_LIULI2222ANGSHEDING_BUTTON, &CMainDlg::OnBnClickedLiuli2222angshedingButton)
	ON_BN_CLICKED(IDC_TONGXUNZHUANGTAI_BUTTON, &CMainDlg::OnBnClickedTongxunzhuangtaiButton)
END_MESSAGE_MAP()


// CMainDlg 消息处理程序


//void CMainDlg::OnBnClickedLiuliangshedingButton()
//{
//	// TODO:  在此添加控件通知处理程序代码
//	CLiuliangsheding liuliang;
//	liuliang.DoModal();
//}


void CMainDlg::OnBnClickedLingminduButton()
{
	// TODO:  在此添加控件通知处理程序代码
	Moshixuanze moshi;
	moshi.DoModal();
}


void CMainDlg::OnBnClickedYanseminganButton()
{
	// TODO:  在此添加控件通知处理程序代码
	Yansemingan yansemingan;
	yansemingan.DoModal();
}


void CMainDlg::OnBnClickedMoshixuanzeButton()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMainDlg::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码


}


void CMainDlg::OnBnClickedCancel()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}


void CMainDlg::OnBnClickedKaishiButton()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CMainDlg::OnBnClickedLiuliangshedingButton()
{
	// TODO:  在此添加控件通知处理程序代码
	CLiuliangsheding qwe;
	qwe.DoModal();
}


void CMainDlg::OnBnClickedLiuli2222angshedingButton()
{
	// TODO:  在此添加控件通知处理程序代码
	CLiuliangsheding qwe;
	qwe.DoModal();
}


void CMainDlg::OnBnClickedTongxunzhuangtaiButton()
{
	// TODO:  在此添加控件通知处理程序代码
	CLiuliangsheding qwe;
	qwe.DoModal();
}
