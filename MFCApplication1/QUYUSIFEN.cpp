// QUYUSIFEN.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "QUYUSIFEN.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "MyPublicData.h"
#include "QUFEN.h"
#include "QUYUERFEN.h"
#include "QUYUSANFEN.h"
#include "QUYUWUFEN.h"
#include "SHENDUFEN.h"
#include "SHENERFEN.h"
#include "HUIFEN.h"
#include "HUIERF.h"
// QUYUSIFEN 对话框

IMPLEMENT_DYNAMIC(QUYUSIFEN, CDialogEx)

QUYUSIFEN::QUYUSIFEN(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_QUSIFEN_DIALOG, pParent)
	, m_double1(quyusif[0])
	, m_double2(quyusif[1])
	, m_double3(quyusif[2])
	, m_double4(quyusif[3])
	, m_double5(quyusif[4])
	, m_double6(quyusif[5])
	, m_double7(quyusif[6])
	, m_double8(quyusif[7])
	, m_double9(quyusif[8])
	, m_double10(quyusif[9])
	, m_double11(quyusif[10])
	, m_double12(quyusif[11])
	, m_double13(quyusif[12])
	, m_double14(quyusif[13])
	, m_double15(quyusif[14])
	, m_double16(quyusif[15])
	, m_double17(quyusif[16])
	, m_double18(quyusif[17])
	, m_double19(quyusif[18])
	, m_double20(quyusif[19])
	, m_double21(quyusif[20])
	, m_double22(quyusif[21])
	, m_double23(quyusif[22])
	, m_double24(quyusif[23])
	, m_double25(quyusif[24])
	, m_double26(quyusif[25])
	, m_double27(quyusif[26])
	, m_double28(quyusif[27])
	, m_double29(quyusif[28])
	, m_double30(quyusif[29])
	, m_double31(quyusif[30])
	, m_double32(quyusif[31])
	, m_double33(quyusif[32])
	, m_double34(quyusif[33])
	, m_double35(quyusif[34])
	, m_double36(quyusif[35])
	, m_double37(quyusif[36])
	, m_double38(quyusif[37])
	, m_double39(quyusif[38])
	, m_double40(quyusif[39])
{

}

QUYUSIFEN::~QUYUSIFEN()
{
}

void QUYUSIFEN::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT2, m_double2);
	DDX_Text(pDX, IDC_EDIT13, m_double3);
	DDX_Text(pDX, IDC_EDIT15, m_double4);
	DDX_Text(pDX, IDC_EDIT18, m_double5);
	DDX_Text(pDX, IDC_EDIT26, m_double6);
	DDX_Text(pDX, IDC_EDIT29, m_double7);
	DDX_Text(pDX, IDC_EDIT30, m_double8);
	DDX_Text(pDX, IDC_EDIT31, m_double9);
	DDX_Text(pDX, IDC_EDIT32, m_double10);
	DDX_Text(pDX, IDC_EDIT33, m_double11);
	DDX_Text(pDX, IDC_EDIT34, m_double12);
	DDX_Text(pDX, IDC_EDIT35, m_double13);
	DDX_Text(pDX, IDC_EDIT36, m_double14);
	DDX_Text(pDX, IDC_EDIT37, m_double15);
	DDX_Text(pDX, IDC_EDIT45, m_double16);
	DDX_Text(pDX, IDC_EDIT46, m_double17);
	DDX_Text(pDX, IDC_EDIT47, m_double18);
	DDX_Text(pDX, IDC_EDIT48, m_double19);
	DDX_Text(pDX, IDC_EDIT49, m_double20);
	DDX_Text(pDX, IDC_EDIT50, m_double21);
	DDX_Text(pDX, IDC_EDIT51, m_double22);
	DDX_Text(pDX, IDC_EDIT55, m_double23);
	DDX_Text(pDX, IDC_EDIT56, m_double24);
	DDX_Text(pDX, IDC_EDIT57, m_double25);
	DDX_Text(pDX, IDC_EDIT62, m_double26);
	DDX_Text(pDX, IDC_EDIT63, m_double27);
	DDX_Text(pDX, IDC_EDIT64, m_double28);
	DDX_Text(pDX, IDC_EDIT65, m_double29);
	DDX_Text(pDX, IDC_EDIT66, m_double30);
	DDX_Text(pDX, IDC_EDIT67, m_double31);
	DDX_Text(pDX, IDC_EDIT76, m_double32);
	DDX_Text(pDX, IDC_EDIT77, m_double33);
	DDX_Text(pDX, IDC_EDIT78, m_double34);
	DDX_Text(pDX, IDC_EDIT79, m_double35);
	DDX_Text(pDX, IDC_EDIT80, m_double36);
	DDX_Text(pDX, IDC_EDIT81, m_double37);
	DDX_Text(pDX, IDC_EDIT82, m_double38);
	DDX_Text(pDX, IDC_EDIT83, m_double39);
	DDX_Text(pDX, IDC_EDIT84, m_double40);
}


BEGIN_MESSAGE_MAP(QUYUSIFEN, CDialogEx)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &QUYUSIFEN::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &QUYUSIFEN::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &QUYUSIFEN::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &QUYUSIFEN::OnBnClickedButton3)
END_MESSAGE_MAP()


// QUYUSIFEN 消息处理程序


BOOL QUYUSIFEN::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	GetDlgItem(IDC_BUTTON1)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(zhendong[2]);


	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num5601", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num5602", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num5603", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num5604", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num5605", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num5606", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num5607", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();

	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//初始化窗口位置
	CRect rect;
	GetClientRect(&rect);     //取客户区大小    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;



	int nMargin = 15;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT1)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT1)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT13)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT15)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT26)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT29)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT30)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT31)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT32)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT33)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT36)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT37)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT45)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT46)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT47)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT48)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT49)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT50)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT51)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT55)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT56)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT57)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT62)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT63)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT64)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT65)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT66)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT67)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT76)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT77)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT78)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT79)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT80)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT81)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT82)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT83)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT84)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


BOOL QUYUSIFEN::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		UpdateData(TRUE);
		CInputDlg dlg;
		CMyPublicData::calculate(m_double1, quyusif, 0, dlg, 10, 0);
		UpdateData(FALSE);
		if (modsd[0] == L"1")
		{
			datatestDPU[4] = quyusisd[0] + quyusif[0];
			CMyPublicData::setfunc(32, 16, 93, 1);
		}
		if (modsd[0] == L"2")
		{
			datatestDPU[4] = quyusisd[4] + quyusif[0];
			CMyPublicData::setfunc(32, 16, 93, 1);
		}
		if (modsd[0] == L"3")
		{
			datatestDPU[4] = quyusisd[8] + quyusif[0];
			CMyPublicData::setfunc(32, 16, 93, 1);
		}
		return TRUE;
	}
	else
	{
		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT2);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		{
			UpdateData(TRUE);
			CInputDlg dlg;
			CMyPublicData::calculate(m_double2, quyusif, 1, dlg, 10, 0);
			UpdateData(FALSE);
			if (modsd[2] == L"1")
			{
				datatestDPU[4] = quyusisd[0] + quyusif[1];
				CMyPublicData::setfunc(34, 16, 93, 1);
			}
			if (modsd[2] == L"2")
			{
				datatestDPU[4] = quyusisd[4] + quyusif[1];
				CMyPublicData::setfunc(34, 16, 93, 1);
			}
			if (modsd[2] == L"3")
			{
				datatestDPU[4] = quyusisd[8] + quyusif[1];
				CMyPublicData::setfunc(34, 16, 93, 1);
			}
			return TRUE;
		}
		else
		{
			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT13);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				UpdateData(TRUE);
				CInputDlg dlg;
				CMyPublicData::calculate(m_double3, quyusif, 2, dlg, 10, 0);
				UpdateData(FALSE);
				if (modsd[4] == L"1")
				{
					datatestDPU[4] = quyusisd[0] + quyusif[2];
					CMyPublicData::setfunc(36, 16, 93, 1);
				}
				if (modsd[4] == L"2")
				{
					datatestDPU[4] = quyusisd[4] + quyusif[2];
					CMyPublicData::setfunc(36, 16, 93, 1);
				}
				if (modsd[4] == L"3")
				{
					datatestDPU[4] = quyusisd[8] + quyusif[2];
					CMyPublicData::setfunc(36, 16, 93, 1);
				}
				return TRUE;
			}
			else
			{
				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT15);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					UpdateData(TRUE);
					CInputDlg dlg;
					CMyPublicData::calculate(m_double4, quyusif, 3, dlg, 10, 0);
					UpdateData(FALSE);
					if (modsd[6] == L"1")
					{
						datatestDPU[4] = quyusisd[0] + quyusif[3];
						CMyPublicData::setfunc(38, 16, 93, 1);
					}
					if (modsd[6] == L"2")
					{
						datatestDPU[4] = quyusisd[4] + quyusif[3];
						CMyPublicData::setfunc(38, 16, 93, 1);
					}
					if (modsd[6] == L"3")
					{
						datatestDPU[4] = quyusisd[8] + quyusif[3];
						CMyPublicData::setfunc(38, 16, 93, 1);
					}
					return TRUE;
				}
				else
				{
					CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT18);
					ASSERT(pEdit && pEdit->GetSafeHwnd());
					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
					{
						UpdateData(TRUE);
						CInputDlg dlg;
						CMyPublicData::calculate(m_double5, quyusif, 4, dlg, 10, 0);
						UpdateData(FALSE);
						if (modsd[8] == L"1")
						{
							datatestDPU[4] = quyusisd[0] + quyusif[4];
							CMyPublicData::setfunc(40, 16, 93, 1);
						}
						if (modsd[8] == L"2")
						{
							datatestDPU[4] = quyusisd[4] + quyusif[4];
							CMyPublicData::setfunc(40, 16, 93, 1);
						}
						if (modsd[8] == L"3")
						{
							datatestDPU[4] = quyusisd[8] + quyusif[4];
							CMyPublicData::setfunc(40, 16, 93, 1);
						}
						return TRUE;
					}
					else
					{
						CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT26);
						ASSERT(pEdit && pEdit->GetSafeHwnd());
						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
						{
							UpdateData(TRUE);
							CInputDlg dlg;
							CMyPublicData::calculate(m_double6, quyusif, 5, dlg, 10, 0);
							UpdateData(FALSE);
							if (modsd[10] == L"1")
							{
								datatestDPU[4] = quyusisd[0] + quyusif[5];
								CMyPublicData::setfunc(42, 16, 93, 1);
							}
							if (modsd[10] == L"2")
							{
								datatestDPU[4] = quyusisd[4] + quyusif[5];
								CMyPublicData::setfunc(42, 16, 93, 1);
							}
							if (modsd[10] == L"3")
							{
								datatestDPU[4] = quyusisd[8] + quyusif[5];
								CMyPublicData::setfunc(42, 16, 93, 1);
							}
							return TRUE;
						}
						else
						{
							CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT29);
							ASSERT(pEdit && pEdit->GetSafeHwnd());
							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
							{
								UpdateData(TRUE);
								CInputDlg dlg;
								CMyPublicData::calculate(m_double7, quyusif, 6, dlg, 10, 0);
								UpdateData(FALSE);
								if (modsd[12] == L"1")
								{
									datatestDPU[4] = quyusisd[0] + quyusif[6];
									CMyPublicData::setfunc(44, 16, 93, 1);
								}
								if (modsd[12] == L"2")
								{
									datatestDPU[4] = quyusisd[4] + quyusif[6];
									CMyPublicData::setfunc(44, 16, 93, 1);
								}
								if (modsd[12] == L"3")
								{
									datatestDPU[4] = quyusisd[8] + quyusif[6];
									CMyPublicData::setfunc(44, 16, 93, 1);
								}
								return TRUE;
							}
							else
							{
								CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT30);
								ASSERT(pEdit && pEdit->GetSafeHwnd());
								if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
								{
									UpdateData(TRUE);
									CInputDlg dlg;
									CMyPublicData::calculate(m_double8, quyusif, 7, dlg, 10, 0);
									UpdateData(FALSE);
									if (modsd[14] == L"1")
									{
										datatestDPU[4] = quyusisd[0] + quyusif[7];
										CMyPublicData::setfunc(46, 16, 93, 1);
									}
									if (modsd[14] == L"2")
									{
										datatestDPU[4] = quyusisd[4] + quyusif[7];
										CMyPublicData::setfunc(46, 16, 93, 1);
									}
									if (modsd[14] == L"3")
									{
										datatestDPU[4] = quyusisd[8] + quyusif[7];
										CMyPublicData::setfunc(46, 16, 93, 1);
									}
									return TRUE;
								}
								else
								{
									CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT31);
									ASSERT(pEdit && pEdit->GetSafeHwnd());
									if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
									{
										UpdateData(TRUE);
										CInputDlg dlg;
										CMyPublicData::calculate(m_double9, quyusif, 8, dlg, 10, 0);
										UpdateData(FALSE);
										if (modsd[16] == L"1")
										{
											datatestDPU[4] = quyusisd[0] + quyusif[8];
											CMyPublicData::setfunc(48, 16, 93, 1);
										}
										if (modsd[16] == L"2")
										{
											datatestDPU[4] = quyusisd[4] + quyusif[8];
											CMyPublicData::setfunc(48, 16, 93, 1);
										}
										if (modsd[16] == L"3")
										{
											datatestDPU[4] = quyusisd[8] + quyusif[8];
											CMyPublicData::setfunc(48, 16, 93, 1);
										}
										return TRUE;
									}
									else
									{
										CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT32);
										ASSERT(pEdit && pEdit->GetSafeHwnd());
										if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
										{
											UpdateData(TRUE);
											CInputDlg dlg;
											CMyPublicData::calculate(m_double10, quyusif, 9, dlg, 10, 0);
											UpdateData(FALSE);
											if (modsd[18] == L"1")
											{
												datatestDPU[4] = quyusisd[0] + quyusif[9];
												CMyPublicData::setfunc(50, 16, 93, 1);
											}
											if (modsd[18] == L"2")
											{
												datatestDPU[4] = quyusisd[4] + quyusif[9];
												CMyPublicData::setfunc(50, 16, 93, 1);
											}
											if (modsd[18] == L"3")
											{
												datatestDPU[4] = quyusisd[8] + quyusif[9];
												CMyPublicData::setfunc(50, 16, 93, 1);
											}
											return TRUE;
										}
										else
										{
											CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT33);
											ASSERT(pEdit && pEdit->GetSafeHwnd());
											if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
											{
												UpdateData(TRUE);
												CInputDlg dlg;
												CMyPublicData::calculate(m_double11, quyusif, 10, dlg, 10, 0);
												UpdateData(FALSE);
												if (modsd[0] == L"1")
												{
													datatestDPU[4] = quyusisd[1] + quyusif[10];
													CMyPublicData::setfunc(32, 16, 94, 1);
												}
												if (modsd[0] == L"2")
												{
													datatestDPU[4] = quyusisd[5] + quyusif[10];
													CMyPublicData::setfunc(32, 16, 94, 1);
												}
												if (modsd[0] == L"3")
												{
													datatestDPU[4] = quyusisd[9] + quyusif[10];
													CMyPublicData::setfunc(32, 16, 94, 1);
												}
												return TRUE;
											}
											else
											{
												CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT34);
												ASSERT(pEdit && pEdit->GetSafeHwnd());
												if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
												{
													UpdateData(TRUE);
													CInputDlg dlg;
													CMyPublicData::calculate(m_double12, quyusif, 11, dlg, 10, 0);
													UpdateData(FALSE);
													if (modsd[2] == L"1")
													{
														datatestDPU[4] = quyusisd[1] + quyusif[11];
														CMyPublicData::setfunc(34, 16, 94, 1);
													}
													if (modsd[2] == L"2")
													{
														datatestDPU[4] = quyusisd[5] + quyusif[11];
														CMyPublicData::setfunc(34, 16, 94, 1);
													}
													if (modsd[2] == L"3")
													{
														datatestDPU[4] = quyusisd[9] + quyusif[11];
														CMyPublicData::setfunc(34, 16, 94, 1);
													}
													return TRUE;
												}
												else
												{
													CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT35);
													ASSERT(pEdit && pEdit->GetSafeHwnd());
													if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
													{
														UpdateData(TRUE);
														CInputDlg dlg;
														CMyPublicData::calculate(m_double13, quyusif, 12, dlg, 10, 0);
														UpdateData(FALSE);
														if (modsd[4] == L"1")
														{
															datatestDPU[4] = quyusisd[1] + quyusif[12];
															CMyPublicData::setfunc(36, 16, 94, 1);
														}
														if (modsd[4] == L"2")
														{
															datatestDPU[4] = quyusisd[5] + quyusif[12];
															CMyPublicData::setfunc(36, 16, 94, 1);
														}
														if (modsd[4] == L"3")
														{
															datatestDPU[4] = quyusisd[9] + quyusif[12];
															CMyPublicData::setfunc(36, 16, 94, 1);
														}
														return TRUE;
													}
													else
													{
														CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT36);
														ASSERT(pEdit && pEdit->GetSafeHwnd());
														if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
														{
															UpdateData(TRUE);
															CInputDlg dlg;
															CMyPublicData::calculate(m_double14, quyusif, 13, dlg, 10, 0);
															UpdateData(FALSE);
															if (modsd[6] == L"1")
															{
																datatestDPU[4] = quyusisd[1] + quyusif[13];
																CMyPublicData::setfunc(38, 16, 94, 1);
															}
															if (modsd[6] == L"2")
															{
																datatestDPU[4] = quyusisd[5] + quyusif[13];
																CMyPublicData::setfunc(38, 16, 94, 1);
															}
															if (modsd[6] == L"3")
															{
																datatestDPU[4] = quyusisd[9] + quyusif[13];
																CMyPublicData::setfunc(38, 16, 94, 1);
															}
															return TRUE;
														}
														else
														{
															CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT37);
															ASSERT(pEdit && pEdit->GetSafeHwnd());
															if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
															{
																UpdateData(TRUE);
																CInputDlg dlg;
																CMyPublicData::calculate(m_double15, quyusif, 14, dlg, 10, 0);
																UpdateData(FALSE);
																if (modsd[8] == L"1")
																{
																	datatestDPU[4] = quyusisd[1] + quyusif[14];
																	CMyPublicData::setfunc(40, 16, 94, 1);
																}
																if (modsd[8] == L"2")
																{
																	datatestDPU[4] = quyusisd[5] + quyusif[14];
																	CMyPublicData::setfunc(40, 16, 94, 1);
																}
																if (modsd[8] == L"3")
																{
																	datatestDPU[4] = quyusisd[9] + quyusif[14];
																	CMyPublicData::setfunc(40, 16, 94, 1);
																}
																return TRUE;
															}
															else
															{
																CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT45);
																ASSERT(pEdit && pEdit->GetSafeHwnd());
																if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																{
																	UpdateData(TRUE);
																	CInputDlg dlg;
																	CMyPublicData::calculate(m_double16, quyusif, 15, dlg, 10, 0);
																	UpdateData(FALSE);
																	if (modsd[10] == L"1")
																	{
																		datatestDPU[4] = quyusisd[1] + quyusif[15];
																		CMyPublicData::setfunc(42, 16, 94, 1);
																	}
																	if (modsd[10] == L"2")
																	{
																		datatestDPU[4] = quyusisd[5] + quyusif[15];
																		CMyPublicData::setfunc(42, 16, 94, 1);
																	}
																	if (modsd[10] == L"3")
																	{
																		datatestDPU[4] = quyusisd[9] + quyusif[15];
																		CMyPublicData::setfunc(42, 16, 94, 1);
																	}
																	return TRUE;
																}
																else
																{
																	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT46);
																	ASSERT(pEdit && pEdit->GetSafeHwnd());
																	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																	{
																		UpdateData(TRUE);
																		CInputDlg dlg;
																		CMyPublicData::calculate(m_double17, quyusif, 16, dlg, 10, 0);
																		UpdateData(FALSE);
																		if (modsd[12] == L"1")
																		{
																			datatestDPU[4] = quyusisd[1] + quyusif[16];
																			CMyPublicData::setfunc(44, 16, 94, 1);
																		}
																		if (modsd[12] == L"2")
																		{
																			datatestDPU[4] = quyusisd[5] + quyusif[16];
																			CMyPublicData::setfunc(44, 16, 94, 1);
																		}
																		if (modsd[12] == L"3")
																		{
																			datatestDPU[4] = quyusisd[9] + quyusif[16];
																			CMyPublicData::setfunc(44, 16, 94, 1);
																		}
																		return TRUE;
																	}
																	else
																	{
																		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT47);
																		ASSERT(pEdit && pEdit->GetSafeHwnd());
																		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																		{
																			UpdateData(TRUE);
																			CInputDlg dlg;
																			CMyPublicData::calculate(m_double18, quyusif, 17, dlg, 10, 0);
																			UpdateData(FALSE);
																			if (modsd[14] == L"1")
																			{
																				datatestDPU[4] = quyusisd[1] + quyusif[17];
																				CMyPublicData::setfunc(46, 16, 94, 1);
																			}
																			if (modsd[14] == L"2")
																			{
																				datatestDPU[4] = quyusisd[5] + quyusif[17];
																				CMyPublicData::setfunc(46, 16, 94, 1);
																			}
																			if (modsd[14] == L"3")
																			{
																				datatestDPU[4] = quyusisd[9] + quyusif[17];
																				CMyPublicData::setfunc(46, 16, 94, 1);
																			}
																			return TRUE;
																		}
																		else
																		{
																			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT48);
																			ASSERT(pEdit && pEdit->GetSafeHwnd());
																			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																			{
																				UpdateData(TRUE);
																				CInputDlg dlg;
																				CMyPublicData::calculate(m_double19, quyusif, 18, dlg, 10, 0);
																				UpdateData(FALSE);
																				if (modsd[16] == L"1")
																				{
																					datatestDPU[4] = quyusisd[1] + quyusif[18];
																					CMyPublicData::setfunc(48, 16, 94, 1);
																				}
																				if (modsd[16] == L"2")
																				{
																					datatestDPU[4] = quyusisd[5] + quyusif[18];
																					CMyPublicData::setfunc(48, 16, 94, 1);
																				}
																				if (modsd[16] == L"3")
																				{
																					datatestDPU[4] = quyusisd[9] + quyusif[18];
																					CMyPublicData::setfunc(48, 16, 94, 1);
																				}
																				return TRUE;
																			}
																			else
																			{
																				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT49);
																				ASSERT(pEdit && pEdit->GetSafeHwnd());
																				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																				{
																					UpdateData(TRUE);
																					CInputDlg dlg;
																					CMyPublicData::calculate(m_double20, quyusif, 19, dlg, 10, 0);
																					UpdateData(FALSE);
																					if (modsd[18] == L"1")
																					{
																						datatestDPU[4] = quyusisd[1] + quyusif[19];
																						CMyPublicData::setfunc(50, 16, 94, 1);
																					}
																					if (modsd[18] == L"2")
																					{
																						datatestDPU[4] = quyusisd[5] + quyusif[19];
																						CMyPublicData::setfunc(50, 16, 94, 1);
																					}
																					if (modsd[18] == L"3")
																					{
																						datatestDPU[4] = quyusisd[9] + quyusif[19];
																						CMyPublicData::setfunc(50, 16, 94, 1);
																					}
																					return TRUE;
																				}
																				else
																				{
																					CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT50);
																					ASSERT(pEdit && pEdit->GetSafeHwnd());
																					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																					{
																						UpdateData(TRUE);
																						CInputDlg dlg;
																						CMyPublicData::calculate(m_double21, quyusif, 20, dlg, 10, 0);
																						UpdateData(FALSE);
																						if (modsd[1] == L"1")
																						{
																							datatestDPU[4] = quyusisd[2] + quyusif[20];
																							CMyPublicData::setfunc(33, 16, 93, 1);
																						}
																						if (modsd[1] == L"2")
																						{
																							datatestDPU[4] = quyusisd[6] + quyusif[20];
																							CMyPublicData::setfunc(33, 16, 93, 1);
																						}
																						if (modsd[1] == L"3")
																						{
																							datatestDPU[4] = quyusisd[10] + quyusif[20];
																							CMyPublicData::setfunc(33, 16, 93, 1);
																						}
																						return TRUE;
																					}
																					else
																					{
																						CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT51);
																						ASSERT(pEdit && pEdit->GetSafeHwnd());
																						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																						{
																							UpdateData(TRUE);
																							CInputDlg dlg;
																							CMyPublicData::calculate(m_double22, quyusif, 21, dlg, 10, 0);
																							UpdateData(FALSE);
																							if (modsd[3] == L"1")
																							{
																								datatestDPU[4] = quyusisd[2] + quyusif[21];
																								CMyPublicData::setfunc(35, 16, 93, 1);
																							}
																							if (modsd[3] == L"2")
																							{
																								datatestDPU[4] = quyusisd[6] + quyusif[21];
																								CMyPublicData::setfunc(35, 16, 93, 1);
																							}
																							if (modsd[3] == L"3")
																							{
																								datatestDPU[4] = quyusisd[10] + quyusif[21];
																								CMyPublicData::setfunc(35, 16, 93, 1);
																							}
																							return TRUE;
																						}
																						else
																						{
																							CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT55);
																							ASSERT(pEdit && pEdit->GetSafeHwnd());
																							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																							{
																								UpdateData(TRUE);
																								CInputDlg dlg;
																								CMyPublicData::calculate(m_double23, quyusif, 22, dlg, 10, 0);
																								UpdateData(FALSE);
																								if (modsd[5] == L"1")
																								{
																									datatestDPU[4] = quyusisd[2] + quyusif[22];
																									CMyPublicData::setfunc(37, 16, 93, 1);
																								}
																								if (modsd[5] == L"2")
																								{
																									datatestDPU[4] = quyusisd[6] + quyusif[22];
																									CMyPublicData::setfunc(37, 16, 93, 1);
																								}
																								if (modsd[5] == L"3")
																								{
																									datatestDPU[4] = quyusisd[10] + quyusif[22];
																									CMyPublicData::setfunc(37, 16, 93, 1);
																								}
																								return TRUE;
																							}
																							else
																							{
																								CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT56);
																								ASSERT(pEdit && pEdit->GetSafeHwnd());
																								if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																								{
																									UpdateData(TRUE);
																									CInputDlg dlg;
																									CMyPublicData::calculate(m_double24, quyusif, 23, dlg, 10, 0);
																									UpdateData(FALSE);
																									if (modsd[7] == L"1")
																									{
																										datatestDPU[4] = quyusisd[2] + quyusif[23];
																										CMyPublicData::setfunc(39, 16, 93, 1);
																									}
																									if (modsd[7] == L"2")
																									{
																										datatestDPU[4] = quyusisd[6] + quyusif[23];
																										CMyPublicData::setfunc(39, 16, 93, 1);
																									}
																									if (modsd[7] == L"3")
																									{
																										datatestDPU[4] = quyusisd[10] + quyusif[23];
																										CMyPublicData::setfunc(39, 16, 93, 1);
																									}
																									return TRUE;
																								}
																								else
																								{
																									CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT57);
																									ASSERT(pEdit && pEdit->GetSafeHwnd());
																									if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																									{
																										UpdateData(TRUE);
																										CInputDlg dlg;
																										CMyPublicData::calculate(m_double25, quyusif, 24, dlg, 10, 0);
																										UpdateData(FALSE);
																										if (modsd[9] == L"1")
																										{
																											datatestDPU[4] = quyusisd[2] + quyusif[24];
																											CMyPublicData::setfunc(41, 16, 93, 1);
																										}
																										if (modsd[9] == L"2")
																										{
																											datatestDPU[4] = quyusisd[6] + quyusif[24];
																											CMyPublicData::setfunc(41, 16, 93, 1);
																										}
																										if (modsd[9] == L"3")
																										{
																											datatestDPU[4] = quyusisd[10] + quyusif[24];
																											CMyPublicData::setfunc(41, 16, 93, 1);
																										}
																										return TRUE;
																									}
																									else
																									{
																										CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT62);
																										ASSERT(pEdit && pEdit->GetSafeHwnd());
																										if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																										{
																											UpdateData(TRUE);
																											CInputDlg dlg;
																											CMyPublicData::calculate(m_double26, quyusif, 25, dlg, 10, 0);
																											UpdateData(FALSE);
																											if (modsd[11] == L"1")
																											{
																												datatestDPU[4] = quyusisd[2] + quyusif[25];
																												CMyPublicData::setfunc(43, 16, 93, 1);
																											}
																											if (modsd[11] == L"2")
																											{
																												datatestDPU[4] = quyusisd[6] + quyusif[25];
																												CMyPublicData::setfunc(43, 16, 93, 1);
																											}
																											if (modsd[11] == L"3")
																											{
																												datatestDPU[4] = quyusisd[10] + quyusif[25];
																												CMyPublicData::setfunc(43, 16, 93, 1);
																											}
																											return TRUE;
																										}
																										else
																										{
																											CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT63);
																											ASSERT(pEdit && pEdit->GetSafeHwnd());
																											if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																											{
																												UpdateData(TRUE);
																												CInputDlg dlg;
																												CMyPublicData::calculate(m_double27, quyusif, 26, dlg, 10, 0);
																												UpdateData(FALSE);
																												if (modsd[13] == L"1")
																												{
																													datatestDPU[4] = quyusisd[2] + quyusif[26];
																													CMyPublicData::setfunc(45, 16, 93, 1);
																												}
																												if (modsd[13] == L"2")
																												{
																													datatestDPU[4] = quyusisd[6] + quyusif[26];
																													CMyPublicData::setfunc(45, 16, 93, 1);
																												}
																												if (modsd[13] == L"3")
																												{
																													datatestDPU[4] = quyusisd[10] + quyusif[26];
																													CMyPublicData::setfunc(45, 16, 93, 1);
																												}
																												return TRUE;
																											}
																											else
																											{
																												CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT64);
																												ASSERT(pEdit && pEdit->GetSafeHwnd());
																												if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																												{
																													UpdateData(TRUE);
																													CInputDlg dlg;
																													CMyPublicData::calculate(m_double28, quyusif, 27, dlg, 10, 0);
																													UpdateData(FALSE);
																													if (modsd[15] == L"1")
																													{
																														datatestDPU[4] = quyusisd[2] + quyusif[27];
																														CMyPublicData::setfunc(47, 16, 93, 1);
																													}
																													if (modsd[15] == L"2")
																													{
																														datatestDPU[4] = quyusisd[6] + quyusif[27];
																														CMyPublicData::setfunc(47, 16, 93, 1);
																													}
																													if (modsd[15] == L"3")
																													{
																														datatestDPU[4] = quyusisd[10] + quyusif[27];
																														CMyPublicData::setfunc(47, 16, 93, 1);
																													}
																													return TRUE;
																												}
																												else
																												{
																													CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT65);
																													ASSERT(pEdit && pEdit->GetSafeHwnd());
																													if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																													{
																														UpdateData(TRUE);
																														CInputDlg dlg;
																														CMyPublicData::calculate(m_double29, quyusif, 28, dlg, 10, 0);
																														UpdateData(FALSE);
																														if (modsd[17] == L"1")
																														{
																															datatestDPU[4] = quyusisd[2] + quyusif[28];
																															CMyPublicData::setfunc(49, 16, 93, 1);
																														}
																														if (modsd[17] == L"2")
																														{
																															datatestDPU[4] = quyusisd[6] + quyusif[28];
																															CMyPublicData::setfunc(49, 16, 93, 1);
																														}
																														if (modsd[17] == L"3")
																														{
																															datatestDPU[4] = quyusisd[10] + quyusif[28];
																															CMyPublicData::setfunc(49, 16, 93, 1);
																														}
																														return TRUE;
																													}
																													else
																													{
																														CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT66);
																														ASSERT(pEdit && pEdit->GetSafeHwnd());
																														if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																														{
																															UpdateData(TRUE);
																															CInputDlg dlg;
																															CMyPublicData::calculate(m_double30, quyusif, 29, dlg, 10, 0);
																															UpdateData(FALSE);
																															if (modsd[19] == L"1")
																															{
																																datatestDPU[4] = quyusisd[2] + quyusif[29];
																																CMyPublicData::setfunc(51, 16, 93, 1);
																															}
																															if (modsd[19] == L"2")
																															{
																																datatestDPU[4] = quyusisd[6] + quyusif[29];
																																CMyPublicData::setfunc(51, 16, 93, 1);
																															}
																															if (modsd[19] == L"3")
																															{
																																datatestDPU[4] = quyusisd[10] + quyusif[29];
																																CMyPublicData::setfunc(51, 16, 93, 1);
																															}
																															return TRUE;
																														}
																														else
																														{
																															CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT67);
																															ASSERT(pEdit && pEdit->GetSafeHwnd());
																															if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																															{
																																UpdateData(TRUE);
																																CInputDlg dlg;
																																CMyPublicData::calculate(m_double31, quyusif, 30, dlg, 10, 0);
																																UpdateData(FALSE);
																																if (modsd[1] == L"1")
																																{
																																	datatestDPU[4] = quyusisd[3] + quyusif[30];
																																	CMyPublicData::setfunc(33, 16, 94, 1);
																																}
																																if (modsd[1] == L"2")
																																{
																																	datatestDPU[4] = quyusisd[7] + quyusif[30];
																																	CMyPublicData::setfunc(33, 16, 94, 1);
																																}
																																if (modsd[1] == L"3")
																																{
																																	datatestDPU[4] = quyusisd[11] + quyusif[30];
																																	CMyPublicData::setfunc(33, 16, 94, 1);
																																}
																																return TRUE;
																															}
																															else
																															{
																																CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT76);
																																ASSERT(pEdit && pEdit->GetSafeHwnd());
																																if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																{
																																	UpdateData(TRUE);
																																	CInputDlg dlg;
																																	CMyPublicData::calculate(m_double32, quyusif, 31, dlg, 10, 0);
																																	UpdateData(FALSE);
																																	if (modsd[3] == L"1")
																																	{
																																		datatestDPU[4] = quyusisd[3] + quyusif[31];
																																		CMyPublicData::setfunc(35, 16, 94, 1);
																																	}
																																	if (modsd[3] == L"2")
																																	{
																																		datatestDPU[4] = quyusisd[7] + quyusif[31];
																																		CMyPublicData::setfunc(35, 16, 94, 1);
																																	}
																																	if (modsd[3] == L"3")
																																	{
																																		datatestDPU[4] = quyusisd[11] + quyusif[31];
																																		CMyPublicData::setfunc(35, 16, 94, 1);
																																	}
																																	return TRUE;
																																}
																																else
																																{
																																	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT77);
																																	ASSERT(pEdit && pEdit->GetSafeHwnd());
																																	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																	{
																																		UpdateData(TRUE);
																																		CInputDlg dlg;
																																		CMyPublicData::calculate(m_double33, quyusif, 32, dlg, 10, 0);
																																		UpdateData(FALSE);
																																		if (modsd[5] == L"1")
																																		{
																																			datatestDPU[4] = quyusisd[3] + quyusif[32];
																																			CMyPublicData::setfunc(37, 16, 94, 1);
																																		}
																																		if (modsd[5] == L"2")
																																		{
																																			datatestDPU[4] = quyusisd[7] + quyusif[32];
																																			CMyPublicData::setfunc(37, 16, 94, 1);
																																		}
																																		if (modsd[5] == L"3")
																																		{
																																			datatestDPU[4] = quyusisd[11] + quyusif[32];
																																			CMyPublicData::setfunc(37, 16, 94, 1);
																																		}
																																		return TRUE;
																																	}
																																	else
																																	{
																																		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT78);
																																		ASSERT(pEdit && pEdit->GetSafeHwnd());
																																		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																		{
																																			UpdateData(TRUE);
																																			CInputDlg dlg;
																																			CMyPublicData::calculate(m_double34, quyusif, 33, dlg, 10, 0);
																																			UpdateData(FALSE);
																																			if (modsd[7] == L"1")
																																			{
																																				datatestDPU[4] = quyusisd[3] + quyusif[33];
																																				CMyPublicData::setfunc(39, 16, 94, 1);
																																			}
																																			if (modsd[7] == L"2")
																																			{
																																				datatestDPU[4] = quyusisd[7] + quyusif[33];
																																				CMyPublicData::setfunc(39, 16, 94, 1);
																																			}
																																			if (modsd[7] == L"3")
																																			{
																																				datatestDPU[4] = quyusisd[11] + quyusif[33];
																																				CMyPublicData::setfunc(39, 16, 94, 1);
																																			}
																																			return TRUE;
																																		}
																																		else
																																		{
																																			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT79);
																																			ASSERT(pEdit && pEdit->GetSafeHwnd());
																																			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																			{
																																				UpdateData(TRUE);
																																				CInputDlg dlg;
																																				CMyPublicData::calculate(m_double35, quyusif, 34, dlg, 10, 0);
																																				UpdateData(FALSE);
																																				if (modsd[9] == L"1")
																																				{
																																					datatestDPU[4] = quyusisd[3] + quyusif[34];
																																					CMyPublicData::setfunc(41, 16, 94, 1);
																																				}
																																				if (modsd[9] == L"2")
																																				{
																																					datatestDPU[4] = quyusisd[7] + quyusif[34];
																																					CMyPublicData::setfunc(41, 16, 94, 1);
																																				}
																																				if (modsd[9] == L"3")
																																				{
																																					datatestDPU[4] = quyusisd[11] + quyusif[34];
																																					CMyPublicData::setfunc(41, 16, 94, 1);
																																				}
																																				return TRUE;
																																			}
																																			else
																																			{
																																				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT80);
																																				ASSERT(pEdit && pEdit->GetSafeHwnd());
																																				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																				{
																																					UpdateData(TRUE);
																																					CInputDlg dlg;
																																					CMyPublicData::calculate(m_double36, quyusif, 35, dlg, 10, 0);
																																					UpdateData(FALSE);
																																					if (modsd[11] == L"1")
																																					{
																																						datatestDPU[4] = quyusisd[3] + quyusif[35];
																																						CMyPublicData::setfunc(43, 16, 94, 1);
																																					}
																																					if (modsd[11] == L"2")
																																					{
																																						datatestDPU[4] = quyusisd[7] + quyusif[35];
																																						CMyPublicData::setfunc(43, 16, 94, 1);
																																					}
																																					if (modsd[11] == L"3")
																																					{
																																						datatestDPU[4] = quyusisd[11] + quyusif[35];
																																						CMyPublicData::setfunc(43, 16, 94, 1);
																																					}
																																					return TRUE;
																																				}
																																				else
																																				{
																																					CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT81);
																																					ASSERT(pEdit && pEdit->GetSafeHwnd());
																																					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																					{
																																						UpdateData(TRUE);
																																						CInputDlg dlg;
																																						CMyPublicData::calculate(m_double37, quyusif, 36, dlg, 10, 0);
																																						UpdateData(FALSE);
																																						if (modsd[13] == L"1")
																																						{
																																							datatestDPU[4] = quyusisd[3] + quyusif[36];
																																							CMyPublicData::setfunc(45, 16, 94, 1);
																																						}
																																						if (modsd[13] == L"2")
																																						{
																																							datatestDPU[4] = quyusisd[7] + quyusif[36];
																																							CMyPublicData::setfunc(45, 16, 94, 1);
																																						}
																																						if (modsd[13] == L"3")
																																						{
																																							datatestDPU[4] = quyusisd[11] + quyusif[36];
																																							CMyPublicData::setfunc(45, 16, 94, 1);
																																						}
																																						return TRUE;
																																					}
																																					else
																																					{
																																						CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT82);
																																						ASSERT(pEdit && pEdit->GetSafeHwnd());
																																						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																						{
																																							UpdateData(TRUE);
																																							CInputDlg dlg;
																																							CMyPublicData::calculate(m_double38, quyusif, 37, dlg, 10, 0);
																																							UpdateData(FALSE);
																																							if (modsd[15] == L"1")
																																							{
																																								datatestDPU[4] = quyusisd[3] + quyusif[37];
																																								CMyPublicData::setfunc(47, 16, 94, 1);
																																							}
																																							if (modsd[15] == L"2")
																																							{
																																								datatestDPU[4] = quyusisd[7] + quyusif[37];
																																								CMyPublicData::setfunc(47, 16, 94, 1);
																																							}
																																							if (modsd[15] == L"3")
																																							{
																																								datatestDPU[4] = quyusisd[11] + quyusif[37];
																																								CMyPublicData::setfunc(47, 16, 94, 1);
																																							}
																																							return TRUE;
																																						}
																																						else
																																						{
																																							CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT83);
																																							ASSERT(pEdit && pEdit->GetSafeHwnd());
																																							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																							{
																																								UpdateData(TRUE);
																																								CInputDlg dlg;
																																								CMyPublicData::calculate(m_double39, quyusif, 38, dlg, 10, 0);
																																								UpdateData(FALSE);
																																								if (modsd[17] == L"1")
																																								{
																																									datatestDPU[4] = quyusisd[3] + quyusif[38];
																																									CMyPublicData::setfunc(49, 16, 94, 1);
																																								}
																																								if (modsd[17] == L"2")
																																								{
																																									datatestDPU[4] = quyusisd[7] + quyusif[38];
																																									CMyPublicData::setfunc(49, 16, 94, 1);
																																								}
																																								if (modsd[17] == L"3")
																																								{
																																									datatestDPU[4] = quyusisd[11] + quyusif[38];
																																									CMyPublicData::setfunc(49, 16, 94, 1);
																																								}
																																								return TRUE;
																																							}
																																							else
																																							{
																																								CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT84);
																																								ASSERT(pEdit && pEdit->GetSafeHwnd());
																																								if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																								{
																																									UpdateData(TRUE);
																																									CInputDlg dlg;
																																									CMyPublicData::calculate(m_double40, quyusif, 39, dlg, 10, 0);
																																									UpdateData(FALSE);
																																									if (modsd[19] == L"1")
																																									{
																																										datatestDPU[4] = quyusisd[3] + quyusif[39];
																																										CMyPublicData::setfunc(51, 16, 94, 1);
																																									}
																																									if (modsd[19] == L"2")
																																									{
																																										datatestDPU[4] = quyusisd[7] + quyusif[39];
																																										CMyPublicData::setfunc(51, 16, 94, 1);
																																									}
																																									if (modsd[19] == L"3")
																																									{
																																										datatestDPU[4] = quyusisd[11] + quyusif[39];
																																										CMyPublicData::setfunc(51, 16, 94, 1);
																																									}
																																									return TRUE;
																																								}
																																							}
																																						}
																																					}
																																				}
																																			}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}

void QUYUSIFEN::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


void QUYUSIFEN::ReSize()
{
	float fsp[2];
	POINT Newp; //获取现在对话框的大小  
	CRect recta;
	GetClientRect(&recta);     //取客户区大小    
	Newp.x = recta.right - recta.left;
	Newp.y = recta.bottom - recta.top;
	fsp[0] = (float)Newp.x / old.x;
	fsp[1] = (float)Newp.y / old.y;
	CRect Rect;
	int woc;
	CPoint OldTLPoint, TLPoint; //左上角  
	CPoint OldBRPoint, BRPoint; //右下角  
	HWND  hwndChild = ::GetWindow(m_hWnd, GW_CHILD);  //列出所有控件    
	while (hwndChild)
	{
		woc = ::GetDlgCtrlID(hwndChild);//取得ID  
		GetDlgItem(woc)->GetWindowRect(Rect);
		ScreenToClient(Rect);
		OldTLPoint = Rect.TopLeft();
		TLPoint.x = long(OldTLPoint.x*fsp[0]);
		TLPoint.y = long(OldTLPoint.y*fsp[1]);
		OldBRPoint = Rect.BottomRight();
		BRPoint.x = long(OldBRPoint.x *fsp[0]);
		BRPoint.y = long(OldBRPoint.y *fsp[1]);
		Rect.SetRect(TLPoint, BRPoint);
		GetDlgItem(woc)->MoveWindow(Rect, TRUE);
		hwndChild = ::GetWindow(hwndChild, GW_HWNDNEXT);
	}
	old = Newp;
}



void QUYUSIFEN::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(quyusif[0]);
	opx.ModifyNode("num4301", str);
	str = opx.numtoString(quyusif[1]);
	opx.ModifyNode("num4302", str);
	str = opx.numtoString(quyusif[2]);
	opx.ModifyNode("num4303", str);
	str = opx.numtoString(quyusif[3]);
	opx.ModifyNode("num4304", str);
	str = opx.numtoString(quyusif[4]);
	opx.ModifyNode("num4305", str);
	str = opx.numtoString(quyusif[5]);
	opx.ModifyNode("num4306", str);
	str = opx.numtoString(quyusif[6]);
	opx.ModifyNode("num4307", str);
	str = opx.numtoString(quyusif[7]);
	opx.ModifyNode("num4308", str);
	str = opx.numtoString(quyusif[8]);
	opx.ModifyNode("num4309", str);
	str = opx.numtoString(quyusif[9]);
	opx.ModifyNode("num4310", str);
	str = opx.numtoString(quyusif[10]);
	opx.ModifyNode("num4311", str);
	str = opx.numtoString(quyusif[11]);
	opx.ModifyNode("num4312", str);
	str = opx.numtoString(quyusif[12]);
	opx.ModifyNode("num4313", str);
	str = opx.numtoString(quyusif[13]);
	opx.ModifyNode("num4314", str);
	str = opx.numtoString(quyusif[14]);
	opx.ModifyNode("num4315", str);
	str = opx.numtoString(quyusif[15]);
	opx.ModifyNode("num4316", str);
	str = opx.numtoString(quyusif[16]);
	opx.ModifyNode("num4317", str);
	str = opx.numtoString(quyusif[17]);
	opx.ModifyNode("num4318", str);
	str = opx.numtoString(quyusif[18]);
	opx.ModifyNode("num4319", str);
	str = opx.numtoString(quyusif[19]);
	opx.ModifyNode("num4320", str);
	str = opx.numtoString(quyusif[20]);
	opx.ModifyNode("num4321", str);
	str = opx.numtoString(quyusif[21]);
	opx.ModifyNode("num4322", str);
	str = opx.numtoString(quyusif[22]);
	opx.ModifyNode("num4323", str);
	str = opx.numtoString(quyusif[23]);
	opx.ModifyNode("num4324", str);
	str = opx.numtoString(quyusif[24]);
	opx.ModifyNode("num4325", str);
	str = opx.numtoString(quyusif[25]);
	opx.ModifyNode("num4326", str);
	str = opx.numtoString(quyusif[26]);
	opx.ModifyNode("num4327", str);
	str = opx.numtoString(quyusif[27]);
	opx.ModifyNode("num4328", str);
	str = opx.numtoString(quyusif[28]);
	opx.ModifyNode("num4329", str);
	str = opx.numtoString(quyusif[29]);
	opx.ModifyNode("num4330", str);
	str = opx.numtoString(quyusif[30]);
	opx.ModifyNode("num4331", str);
	str = opx.numtoString(quyusif[31]);
	opx.ModifyNode("num4332", str);
	str = opx.numtoString(quyusif[32]);
	opx.ModifyNode("num4333", str);
	str = opx.numtoString(quyusif[33]);
	opx.ModifyNode("num4334", str);
	str = opx.numtoString(quyusif[34]);
	opx.ModifyNode("num4335", str);
	str = opx.numtoString(quyusif[35]);
	opx.ModifyNode("num4336", str);
	str = opx.numtoString(quyusif[36]);
	opx.ModifyNode("num4337", str);
	str = opx.numtoString(quyusif[37]);
	opx.ModifyNode("num4338", str);
	str = opx.numtoString(quyusif[38]);
	opx.ModifyNode("num4339", str);
	str = opx.numtoString(quyusif[39]);
	opx.ModifyNode("num4340", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}




void QUYUSIFEN::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON1)->GetWindowText(zhendong[0]);
	if (zhendong[0] == L"ON")
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"1")
			{
				datatestDPU[4] = 0;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"1")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON1)->GetWindowText(zhendong[0]);
}


void QUYUSIFEN::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON2)->GetWindowText(zhendong[1]);
	if (zhendong[1] == L"ON")
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"2")
			{
				datatestDPU[4] = 0;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"2")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON2)->GetWindowText(zhendong[1]);
}


void QUYUSIFEN::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON3)->GetWindowText(zhendong[2]);
	if (zhendong[2] == L"ON")
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"3")
			{
				datatestDPU[4] = 0;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"3")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON3)->GetWindowText(zhendong[2]);
}
