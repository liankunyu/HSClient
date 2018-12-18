// HUIFEN.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "HUIFEN.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "MyPublicData.h"
#include "QUFEN.h"
#include "QUYUERFEN.h"
#include "QUYUSANFEN.h"
#include "QUYUSIFEN.h"
#include "QUYUWUFEN.h"
#include "SHENDUFEN.h"
#include "SHENERFEN.h"
#include "HUIERF.h"
// HUIFEN 对话框

IMPLEMENT_DYNAMIC(HUIFEN, CDialogEx)

HUIFEN::HUIFEN(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_HUIFEN_DIALOG1, pParent)
	, m_double1(huif[0])
	, m_double2(huif[1])
	, m_double3(huif[2])
	, m_double4(huif[3])
	, m_double5(huif[4])
	, m_double6(huif[5])
	, m_double7(huif[6])
	, m_double8(huif[7])
	, m_double9(huif[8])
	, m_double10(huif[9])
	, m_double11(huif[10])
	, m_double12(huif[11])
	, m_double13(huif[12])
	, m_double14(huif[13])
	, m_double15(huif[14])
	, m_double16(huif[15])
	, m_double17(huif[16])
	, m_double18(huif[17])
	, m_double19(huif[18])
	, m_double20(huif[19])
	, m_double21(huif[20])
	, m_double22(huif[21])
	, m_double23(huif[22])
	, m_double24(huif[23])
	, m_double25(huif[24])
	, m_double26(huif[25])
	, m_double27(huif[26])
	, m_double28(huif[27])
	, m_double29(huif[28])
	, m_double30(huif[29])
	, m_double31(huif[30])
	, m_double32(huif[31])
	, m_double33(huif[32])
	, m_double34(huif[33])
	, m_double35(huif[34])
	, m_double36(huif[35])
	, m_double37(huif[36])
	, m_double38(huif[37])
	, m_double39(huif[38])
	, m_double40(huif[39])
{

}

HUIFEN::~HUIFEN()
{
}

void HUIFEN::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(HUIFEN, CDialogEx)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &HUIFEN::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &HUIFEN::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &HUIFEN::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &HUIFEN::OnBnClickedButton3)
END_MESSAGE_MAP()


// HUIFEN 消息处理程序
BOOL HUIFEN::OnInitDialog()
{

	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	GetDlgItem(IDC_BUTTON1)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(zhendong[2]);

	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num5001", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num5002", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num5003", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num5004", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num5005", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num5006", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num5007", yuyan);
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

BOOL HUIFEN::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		UpdateData(TRUE);
		CInputDlg dlg;
		CMyPublicData::calculate(m_double1, huif, 0, dlg, 10, 0);
		UpdateData(FALSE);
		if (modsd[0] == L"1")
		{
			datatestDPU[4] = huidu1sheding[0] + huif[0];
			CMyPublicData::setfunc(32, 16, 87, 1);
		}
		if (modsd[0] == L"2")
		{
			datatestDPU[4] = huidu1sheding[4] + huif[0];
			CMyPublicData::setfunc(32, 16, 87, 1);
		}
		if (modsd[0] == L"3")
		{
			datatestDPU[4] = huidu1sheding[8] + huif[0];
			CMyPublicData::setfunc(32, 16, 87, 1);
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
			CMyPublicData::calculate(m_double2, huif, 1, dlg, 10, 0);
			UpdateData(FALSE);
			if (modsd[2] == L"1")
			{
				datatestDPU[4] = huidu1sheding[0] + huif[1];
				CMyPublicData::setfunc(34, 16, 87, 1);
			}
			if (modsd[2] == L"2")
			{
				datatestDPU[4] = huidu1sheding[4] + huif[1];
				CMyPublicData::setfunc(34, 16, 87, 1);
			}
			if (modsd[2] == L"3")
			{
				datatestDPU[4] = huidu1sheding[8] + huif[1];
				CMyPublicData::setfunc(34, 16, 87, 1);
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
				CMyPublicData::calculate(m_double3, huif, 2, dlg, 10, 0);
				UpdateData(FALSE);
				if (modsd[4] == L"1")
				{
					datatestDPU[4] = huidu1sheding[0] + huif[2];
					CMyPublicData::setfunc(36, 16, 87, 1);
				}
				if (modsd[4] == L"2")
				{
					datatestDPU[4] = huidu1sheding[4] + huif[2];
					CMyPublicData::setfunc(36, 16, 87, 1);
				}
				if (modsd[4] == L"3")
				{
					datatestDPU[4] = huidu1sheding[8] + huif[2];
					CMyPublicData::setfunc(36, 16, 87, 1);
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
					CMyPublicData::calculate(m_double4, huif, 3, dlg, 10, 0);
					UpdateData(FALSE);
					if (modsd[6] == L"1")
					{
						datatestDPU[4] = huidu1sheding[0] + huif[3];
						CMyPublicData::setfunc(38, 16, 87, 1);
					}
					if (modsd[6] == L"2")
					{
						datatestDPU[4] = huidu1sheding[4] + huif[3];
						CMyPublicData::setfunc(38, 16, 87, 1);
					}
					if (modsd[6] == L"3")
					{
						datatestDPU[4] = huidu1sheding[8] + huif[3];
						CMyPublicData::setfunc(38, 16, 87, 1);
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
						CMyPublicData::calculate(m_double5, huif, 4, dlg, 10, 0);
						UpdateData(FALSE);
						if (modsd[8] == L"1")
						{
							datatestDPU[4] = huidu1sheding[0] + huif[4];
							CMyPublicData::setfunc(40, 16, 87, 1);
						}
						if (modsd[8] == L"2")
						{
							datatestDPU[4] = huidu1sheding[4] + huif[4];
							CMyPublicData::setfunc(40, 16, 87, 1);
						}
						if (modsd[8] == L"3")
						{
							datatestDPU[4] = huidu1sheding[8] + huif[4];
							CMyPublicData::setfunc(40, 16, 87, 1);
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
							CMyPublicData::calculate(m_double6, huif, 5, dlg, 10, 0);
							UpdateData(FALSE);
							if (modsd[10] == L"1")
							{
								datatestDPU[4] = huidu1sheding[0] + huif[5];
								CMyPublicData::setfunc(42, 16, 87, 1);
							}
							if (modsd[10] == L"2")
							{
								datatestDPU[4] = huidu1sheding[4] + huif[5];
								CMyPublicData::setfunc(42, 16, 87, 1);
							}
							if (modsd[10] == L"3")
							{
								datatestDPU[4] = huidu1sheding[8] + huif[5];
								CMyPublicData::setfunc(42, 16, 87, 1);
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
								CMyPublicData::calculate(m_double7, huif, 6, dlg, 10, 0);
								UpdateData(FALSE);
								if (modsd[12] == L"1")
								{
									datatestDPU[4] = huidu1sheding[0] + huif[6];
									CMyPublicData::setfunc(44, 16, 87, 1);
								}
								if (modsd[12] == L"2")
								{
									datatestDPU[4] = huidu1sheding[4] + huif[6];
									CMyPublicData::setfunc(44, 16, 87, 1);
								}
								if (modsd[12] == L"3")
								{
									datatestDPU[4] = huidu1sheding[8] + huif[6];
									CMyPublicData::setfunc(44, 16, 87, 1);
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
									CMyPublicData::calculate(m_double8, huif, 7, dlg, 10, 0);
									UpdateData(FALSE);
									if (modsd[14] == L"1")
									{
										datatestDPU[4] = huidu1sheding[0] + huif[7];
										CMyPublicData::setfunc(46, 16, 87, 1);
									}
									if (modsd[14] == L"2")
									{
										datatestDPU[4] = huidu1sheding[4] + huif[7];
										CMyPublicData::setfunc(46, 16, 87, 1);
									}
									if (modsd[14] == L"3")
									{
										datatestDPU[4] = huidu1sheding[8] + huif[7];
										CMyPublicData::setfunc(46, 16, 87, 1);
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
										CMyPublicData::calculate(m_double9, huif, 8, dlg, 10, 0);
										UpdateData(FALSE);
										if (modsd[16] == L"1")
										{
											datatestDPU[4] = huidu1sheding[0] + huif[8];
											CMyPublicData::setfunc(48, 16, 87, 1);
										}
										if (modsd[16] == L"2")
										{
											datatestDPU[4] = huidu1sheding[4] + huif[8];
											CMyPublicData::setfunc(48, 16, 87, 1);
										}
										if (modsd[16] == L"3")
										{
											datatestDPU[4] = huidu1sheding[8] + huif[8];
											CMyPublicData::setfunc(48, 16, 87, 1);
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
											CMyPublicData::calculate(m_double10, huif, 9, dlg, 10, 0);
											UpdateData(FALSE);
											if (modsd[18] == L"1")
											{
												datatestDPU[4] = huidu1sheding[0] + huif[9];
												CMyPublicData::setfunc(50, 16, 87, 1);
											}
											if (modsd[18] == L"2")
											{
												datatestDPU[4] = huidu1sheding[4] + huif[9];
												CMyPublicData::setfunc(50, 16, 87, 1);
											}
											if (modsd[18] == L"3")
											{
												datatestDPU[4] = huidu1sheding[8] + huif[9];
												CMyPublicData::setfunc(50, 16, 87, 1);
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
												CMyPublicData::calculate(m_double11, huif, 10, dlg, 10, 0);
												UpdateData(FALSE);
												if (modsd[0] == L"1")
												{
													datatestDPU[4] = huidu1sheding[1] + huif[10];
													CMyPublicData::setfunc(32, 16, 88, 1);
												}
												if (modsd[0] == L"2")
												{
													datatestDPU[4] = huidu1sheding[5] + huif[10];
													CMyPublicData::setfunc(32, 16, 88, 1);
												}
												if (modsd[0] == L"3")
												{
													datatestDPU[4] = huidu1sheding[9] + huif[10];
													CMyPublicData::setfunc(32, 16, 88, 1);
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
													CMyPublicData::calculate(m_double12, huif, 11, dlg, 10, 0);
													UpdateData(FALSE);
													if (modsd[2] == L"1")
													{
														datatestDPU[4] = huidu1sheding[1] + huif[11];
														CMyPublicData::setfunc(34, 16, 88, 1);
													}
													if (modsd[2] == L"2")
													{
														datatestDPU[4] = huidu1sheding[5] + huif[11];
														CMyPublicData::setfunc(34, 16, 88, 1);
													}
													if (modsd[2] == L"3")
													{
														datatestDPU[4] = huidu1sheding[9] + huif[11];
														CMyPublicData::setfunc(34, 16, 88, 1);
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
														CMyPublicData::calculate(m_double13, huif, 12, dlg, 10, 0);
														UpdateData(FALSE);
														if (modsd[4] == L"1")
														{
															datatestDPU[4] = huidu1sheding[1] + huif[12];
															CMyPublicData::setfunc(36, 16, 88, 1);
														}
														if (modsd[4] == L"2")
														{
															datatestDPU[4] = huidu1sheding[5] + huif[12];
															CMyPublicData::setfunc(36, 16, 88, 1);
														}
														if (modsd[4] == L"3")
														{
															datatestDPU[4] = huidu1sheding[9] + huif[12];
															CMyPublicData::setfunc(36, 16, 88, 1);
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
															CMyPublicData::calculate(m_double14, huif, 13, dlg, 10, 0);
															UpdateData(FALSE);
															if (modsd[6] == L"1")
															{
																datatestDPU[4] = huidu1sheding[1] + huif[13];
																CMyPublicData::setfunc(38, 16, 88, 1);
															}
															if (modsd[6] == L"2")
															{
																datatestDPU[4] = huidu1sheding[5] + huif[13];
																CMyPublicData::setfunc(38, 16, 88, 1);
															}
															if (modsd[6] == L"3")
															{
																datatestDPU[4] = huidu1sheding[9] + huif[13];
																CMyPublicData::setfunc(38, 16, 88, 1);
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
																CMyPublicData::calculate(m_double15, huif, 14, dlg, 10, 0);
																UpdateData(FALSE);
																if (modsd[8] == L"1")
																{
																	datatestDPU[4] = huidu1sheding[1] + huif[14];
																	CMyPublicData::setfunc(40, 16, 88, 1);
																}
																if (modsd[8] == L"2")
																{
																	datatestDPU[4] = huidu1sheding[5] + huif[14];
																	CMyPublicData::setfunc(40, 16, 88, 1);
																}
																if (modsd[8] == L"3")
																{
																	datatestDPU[4] = huidu1sheding[9] + huif[14];
																	CMyPublicData::setfunc(40, 16, 88, 1);
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
																	CMyPublicData::calculate(m_double16, huif, 15, dlg, 10, 0);
																	UpdateData(FALSE);
																	if (modsd[10] == L"1")
																	{
																		datatestDPU[4] = huidu1sheding[1] + huif[15];
																		CMyPublicData::setfunc(42, 16, 88, 1);
																	}
																	if (modsd[10] == L"2")
																	{
																		datatestDPU[4] = huidu1sheding[5] + huif[15];
																		CMyPublicData::setfunc(42, 16, 88, 1);
																	}
																	if (modsd[10] == L"3")
																	{
																		datatestDPU[4] = huidu1sheding[9] + huif[15];
																		CMyPublicData::setfunc(42, 16, 88, 1);
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
																		CMyPublicData::calculate(m_double17, huif, 16, dlg, 10, 0);
																		UpdateData(FALSE);
																		if (modsd[12] == L"1")
																		{
																			datatestDPU[4] = huidu1sheding[1] + huif[16];
																			CMyPublicData::setfunc(44, 16, 88, 1);
																		}
																		if (modsd[12] == L"2")
																		{
																			datatestDPU[4] = huidu1sheding[5] + huif[16];
																			CMyPublicData::setfunc(44, 16, 88, 1);
																		}
																		if (modsd[12] == L"3")
																		{
																			datatestDPU[4] = huidu1sheding[9] + huif[16];
																			CMyPublicData::setfunc(44, 16, 88, 1);
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
																			CMyPublicData::calculate(m_double18, huif, 17, dlg, 10, 0);
																			UpdateData(FALSE);
																			if (modsd[14] == L"1")
																			{
																				datatestDPU[4] = huidu1sheding[1] + huif[17];
																				CMyPublicData::setfunc(46, 16, 88, 1);
																			}
																			if (modsd[14] == L"2")
																			{
																				datatestDPU[4] = huidu1sheding[5] + huif[17];
																				CMyPublicData::setfunc(46, 16, 88, 1);
																			}
																			if (modsd[14] == L"3")
																			{
																				datatestDPU[4] = huidu1sheding[9] + huif[17];
																				CMyPublicData::setfunc(46, 16, 88, 1);
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
																				CMyPublicData::calculate(m_double19, huif, 18, dlg, 10, 0);
																				UpdateData(FALSE);
																				if (modsd[16] == L"1")
																				{
																					datatestDPU[4] = huidu1sheding[1] + huif[18];
																					CMyPublicData::setfunc(48, 16, 88, 1);
																				}
																				if (modsd[16] == L"2")
																				{
																					datatestDPU[4] = huidu1sheding[5] + huif[18];
																					CMyPublicData::setfunc(48, 16, 88, 1);
																				}
																				if (modsd[16] == L"3")
																				{
																					datatestDPU[4] = huidu1sheding[9] + huif[18];
																					CMyPublicData::setfunc(48, 16, 88, 1);
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
																					CMyPublicData::calculate(m_double20, huif, 19, dlg, 10, 0);
																					UpdateData(FALSE);
																					if (modsd[18] == L"1")
																					{
																						datatestDPU[4] = huidu1sheding[1] + huif[19];
																						CMyPublicData::setfunc(50, 16, 88, 1);
																					}
																					if (modsd[18] == L"2")
																					{
																						datatestDPU[4] = huidu1sheding[5] + huif[19];
																						CMyPublicData::setfunc(50, 16, 88, 1);
																					}
																					if (modsd[18] == L"3")
																					{
																						datatestDPU[4] = huidu1sheding[9] + huif[19];
																						CMyPublicData::setfunc(50, 16, 88, 1);
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
																						CMyPublicData::calculate(m_double21, huif, 20, dlg, 10, 0);
																						UpdateData(FALSE);
																						if (modsd[1] == L"1")
																						{
																							datatestDPU[4] = huidu1sheding[2] + huif[20];
																							CMyPublicData::setfunc(33, 16, 87, 1);
																						}
																						if (modsd[1] == L"2")
																						{
																							datatestDPU[4] = huidu1sheding[6] + huif[20];
																							CMyPublicData::setfunc(33, 16, 87, 1);
																						}
																						if (modsd[1] == L"3")
																						{
																							datatestDPU[4] = huidu1sheding[10] + huif[20];
																							CMyPublicData::setfunc(33, 16, 87, 1);
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
																							CMyPublicData::calculate(m_double22, huif, 21, dlg, 10, 0);
																							UpdateData(FALSE);
																							if (modsd[3] == L"1")
																							{
																								datatestDPU[4] = huidu1sheding[2] + huif[21];
																								CMyPublicData::setfunc(35, 16, 87, 1);
																							}
																							if (modsd[3] == L"2")
																							{
																								datatestDPU[4] = huidu1sheding[6] + huif[21];
																								CMyPublicData::setfunc(35, 16, 87, 1);
																							}
																							if (modsd[3] == L"3")
																							{
																								datatestDPU[4] = huidu1sheding[10] + huif[21];
																								CMyPublicData::setfunc(35, 16, 87, 1);
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
																								CMyPublicData::calculate(m_double23, huif, 22, dlg, 10, 0);
																								UpdateData(FALSE);
																								if (modsd[5] == L"1")
																								{
																									datatestDPU[4] = huidu1sheding[2] + huif[22];
																									CMyPublicData::setfunc(37, 16, 87, 1);
																								}
																								if (modsd[5] == L"2")
																								{
																									datatestDPU[4] = huidu1sheding[6] + huif[22];
																									CMyPublicData::setfunc(37, 16, 87, 1);
																								}
																								if (modsd[5] == L"3")
																								{
																									datatestDPU[4] = huidu1sheding[10] + huif[22];
																									CMyPublicData::setfunc(37, 16, 87, 1);
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
																									CMyPublicData::calculate(m_double24, huif, 23, dlg, 10, 0);
																									UpdateData(FALSE);
																									if (modsd[7] == L"1")
																									{
																										datatestDPU[4] = huidu1sheding[2] + huif[23];
																										CMyPublicData::setfunc(39, 16, 87, 1);
																									}
																									if (modsd[7] == L"2")
																									{
																										datatestDPU[4] = huidu1sheding[6] + huif[23];
																										CMyPublicData::setfunc(39, 16, 87, 1);
																									}
																									if (modsd[7] == L"3")
																									{
																										datatestDPU[4] = huidu1sheding[10] + huif[23];
																										CMyPublicData::setfunc(39, 16, 87, 1);
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
																										CMyPublicData::calculate(m_double25, huif, 24, dlg, 10, 0);
																										UpdateData(FALSE);
																										if (modsd[9] == L"1")
																										{
																											datatestDPU[4] = huidu1sheding[2] + huif[24];
																											CMyPublicData::setfunc(41, 16, 87, 1);
																										}
																										if (modsd[9] == L"2")
																										{
																											datatestDPU[4] = huidu1sheding[6] + huif[24];
																											CMyPublicData::setfunc(41, 16, 87, 1);
																										}
																										if (modsd[9] == L"3")
																										{
																											datatestDPU[4] = huidu1sheding[10] + huif[24];
																											CMyPublicData::setfunc(41, 16, 87, 1);
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
																											CMyPublicData::calculate(m_double26, huif, 25, dlg, 10, 0);
																											UpdateData(FALSE);
																											if (modsd[11] == L"1")
																											{
																												datatestDPU[4] = huidu1sheding[2] + huif[25];
																												CMyPublicData::setfunc(43, 16, 87, 1);
																											}
																											if (modsd[11] == L"2")
																											{
																												datatestDPU[4] = huidu1sheding[6] + huif[25];
																												CMyPublicData::setfunc(43, 16, 87, 1);
																											}
																											if (modsd[11] == L"3")
																											{
																												datatestDPU[4] = huidu1sheding[10] + huif[25];
																												CMyPublicData::setfunc(43, 16, 87, 1);
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
																												CMyPublicData::calculate(m_double27, huif, 26, dlg, 10, 0);
																												UpdateData(FALSE);
																												if (modsd[13] == L"1")
																												{
																													datatestDPU[4] = huidu1sheding[2] + huif[26];
																													CMyPublicData::setfunc(45, 16, 87, 1);
																												}
																												if (modsd[13] == L"2")
																												{
																													datatestDPU[4] = huidu1sheding[6] + huif[26];
																													CMyPublicData::setfunc(45, 16, 87, 1);
																												}
																												if (modsd[13] == L"3")
																												{
																													datatestDPU[4] = huidu1sheding[10] + huif[26];
																													CMyPublicData::setfunc(45, 16, 87, 1);
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
																													CMyPublicData::calculate(m_double28, huif, 27, dlg, 10, 0);
																													UpdateData(FALSE);
																													if (modsd[15] == L"1")
																													{
																														datatestDPU[4] = huidu1sheding[2] + huif[27];
																														CMyPublicData::setfunc(47, 16, 87, 1);
																													}
																													if (modsd[15] == L"2")
																													{
																														datatestDPU[4] = huidu1sheding[6] + huif[27];
																														CMyPublicData::setfunc(47, 16, 87, 1);
																													}
																													if (modsd[15] == L"3")
																													{
																														datatestDPU[4] = huidu1sheding[10] + huif[27];
																														CMyPublicData::setfunc(47, 16, 87, 1);
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
																														CMyPublicData::calculate(m_double29, huif, 28, dlg, 10, 0);
																														UpdateData(FALSE);
																														if (modsd[17] == L"1")
																														{
																															datatestDPU[4] = huidu1sheding[2] + huif[28];
																															CMyPublicData::setfunc(49, 16, 87, 1);
																														}
																														if (modsd[17] == L"2")
																														{
																															datatestDPU[4] = huidu1sheding[6] + huif[28];
																															CMyPublicData::setfunc(49, 16, 87, 1);
																														}
																														if (modsd[17] == L"3")
																														{
																															datatestDPU[4] = huidu1sheding[10] + huif[28];
																															CMyPublicData::setfunc(49, 16, 87, 1);
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
																															CMyPublicData::calculate(m_double30, huif, 29, dlg, 10, 0);
																															UpdateData(FALSE);
																															if (modsd[19] == L"1")
																															{
																																datatestDPU[4] = huidu1sheding[2] + huif[29];
																																CMyPublicData::setfunc(51, 16, 87, 1);
																															}
																															if (modsd[19] == L"2")
																															{
																																datatestDPU[4] = huidu1sheding[6] + huif[29];
																																CMyPublicData::setfunc(51, 16, 87, 1);
																															}
																															if (modsd[19] == L"3")
																															{
																																datatestDPU[4] = huidu1sheding[10] + huif[29];
																																CMyPublicData::setfunc(51, 16, 87, 1);
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
																																CMyPublicData::calculate(m_double31, huif, 30, dlg, 10, 0);
																																UpdateData(FALSE);
																																if (modsd[1] == L"1")
																																{
																																	datatestDPU[4] = huidu1sheding[3] + huif[30];
																																	CMyPublicData::setfunc(33, 16, 88, 1);
																																}
																																if (modsd[1] == L"2")
																																{
																																	datatestDPU[4] = huidu1sheding[7] + huif[30];
																																	CMyPublicData::setfunc(33, 16, 88, 1);
																																}
																																if (modsd[1] == L"3")
																																{
																																	datatestDPU[4] = huidu1sheding[11] + huif[30];
																																	CMyPublicData::setfunc(33, 16, 88, 1);
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
																																	CMyPublicData::calculate(m_double32, huif, 31, dlg, 10, 0);
																																	UpdateData(FALSE);
																																	if (modsd[3] == L"1")
																																	{
																																		datatestDPU[4] = huidu1sheding[3] + huif[31];
																																		CMyPublicData::setfunc(35, 16, 88, 1);
																																	}
																																	if (modsd[3] == L"2")
																																	{
																																		datatestDPU[4] = huidu1sheding[7] + huif[31];
																																		CMyPublicData::setfunc(35, 16, 88, 1);
																																	}
																																	if (modsd[3] == L"3")
																																	{
																																		datatestDPU[4] = huidu1sheding[11] + huif[31];
																																		CMyPublicData::setfunc(35, 16, 88, 1);
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
																																		CMyPublicData::calculate(m_double33, huif, 32, dlg, 10, 0);
																																		UpdateData(FALSE);
																																		if (modsd[5] == L"1")
																																		{
																																			datatestDPU[4] = huidu1sheding[3] + huif[32];
																																			CMyPublicData::setfunc(37, 16, 88, 1);
																																		}
																																		if (modsd[5] == L"2")
																																		{
																																			datatestDPU[4] = huidu1sheding[7] + huif[32];
																																			CMyPublicData::setfunc(37, 16, 88, 1);
																																		}
																																		if (modsd[5] == L"3")
																																		{
																																			datatestDPU[4] = huidu1sheding[11] + huif[32];
																																			CMyPublicData::setfunc(37, 16, 88, 1);
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
																																			CMyPublicData::calculate(m_double34, huif, 33, dlg, 10, 0);
																																			UpdateData(FALSE);
																																			if (modsd[7] == L"1")
																																			{
																																				datatestDPU[4] = huidu1sheding[3] + huif[33];
																																				CMyPublicData::setfunc(39, 16, 88, 1);
																																			}
																																			if (modsd[7] == L"2")
																																			{
																																				datatestDPU[4] = huidu1sheding[7] + huif[33];
																																				CMyPublicData::setfunc(39, 16, 88, 1);
																																			}
																																			if (modsd[7] == L"3")
																																			{
																																				datatestDPU[4] = huidu1sheding[11] + huif[33];
																																				CMyPublicData::setfunc(39, 16, 88, 1);
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
																																				CMyPublicData::calculate(m_double35, huif, 34, dlg, 10, 0);
																																				UpdateData(FALSE);
																																				if (modsd[9] == L"1")
																																				{
																																					datatestDPU[4] = huidu1sheding[3] + huif[34];
																																					CMyPublicData::setfunc(41, 16, 88, 1);
																																				}
																																				if (modsd[9] == L"2")
																																				{
																																					datatestDPU[4] = huidu1sheding[7] + huif[34];
																																					CMyPublicData::setfunc(41, 16, 88, 1);
																																				}
																																				if (modsd[9] == L"3")
																																				{
																																					datatestDPU[4] = huidu1sheding[11] + huif[34];
																																					CMyPublicData::setfunc(41, 16, 88, 1);
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
																																					CMyPublicData::calculate(m_double36, huif, 35, dlg, 10, 0);
																																					UpdateData(FALSE);
																																					if (modsd[11] == L"1")
																																					{
																																						datatestDPU[4] = huidu1sheding[3] + huif[35];
																																						CMyPublicData::setfunc(43, 16, 88, 1);
																																					}
																																					if (modsd[11] == L"2")
																																					{
																																						datatestDPU[4] = huidu1sheding[7] + huif[35];
																																						CMyPublicData::setfunc(43, 16, 88, 1);
																																					}
																																					if (modsd[11] == L"3")
																																					{
																																						datatestDPU[4] = huidu1sheding[11] + huif[35];
																																						CMyPublicData::setfunc(43, 16, 88, 1);
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
																																						CMyPublicData::calculate(m_double37, huif, 36, dlg, 10, 0);
																																						UpdateData(FALSE);
																																						if (modsd[13] == L"1")
																																						{
																																							datatestDPU[4] = huidu1sheding[3] + huif[36];
																																							CMyPublicData::setfunc(45, 16, 88, 1);
																																						}
																																						if (modsd[13] == L"2")
																																						{
																																							datatestDPU[4] = huidu1sheding[7] + huif[36];
																																							CMyPublicData::setfunc(45, 16, 88, 1);
																																						}
																																						if (modsd[13] == L"3")
																																						{
																																							datatestDPU[4] = huidu1sheding[11] + huif[36];
																																							CMyPublicData::setfunc(45, 16, 88, 1);
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
																																							CMyPublicData::calculate(m_double38, huif, 37, dlg, 10, 0);
																																							UpdateData(FALSE);
																																							if (modsd[15] == L"1")
																																							{
																																								datatestDPU[4] = huidu1sheding[3] + huif[37];
																																								CMyPublicData::setfunc(47, 16, 88, 1);
																																							}
																																							if (modsd[15] == L"2")
																																							{
																																								datatestDPU[4] = huidu1sheding[7] + huif[37];
																																								CMyPublicData::setfunc(47, 16, 88, 1);
																																							}
																																							if (modsd[15] == L"3")
																																							{
																																								datatestDPU[4] = huidu1sheding[11] + huif[37];
																																								CMyPublicData::setfunc(47, 16, 88, 1);
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
																																								CMyPublicData::calculate(m_double39, huif, 38, dlg, 10, 0);
																																								UpdateData(FALSE);
																																								if (modsd[17] == L"1")
																																								{
																																									datatestDPU[4] = huidu1sheding[3] + huif[38];
																																									CMyPublicData::setfunc(49, 16, 88, 1);
																																								}
																																								if (modsd[17] == L"2")
																																								{
																																									datatestDPU[4] = huidu1sheding[7] + huif[38];
																																									CMyPublicData::setfunc(49, 16, 88, 1);
																																								}
																																								if (modsd[17] == L"3")
																																								{
																																									datatestDPU[4] = huidu1sheding[11] + huif[38];
																																									CMyPublicData::setfunc(49, 16, 88, 1);
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
																																									CMyPublicData::calculate(m_double40, huif, 39, dlg, 10, 0);
																																									UpdateData(FALSE);
																																									if (modsd[19] == L"1")
																																									{
																																										datatestDPU[4] = huidu1sheding[3] + huif[39];
																																										CMyPublicData::setfunc(51, 16, 88, 1);
																																									}
																																									if (modsd[19] == L"2")
																																									{
																																										datatestDPU[4] = huidu1sheding[7] + huif[39];
																																										CMyPublicData::setfunc(51, 16, 88, 1);
																																									}
																																									if (modsd[19] == L"3")
																																									{
																																										datatestDPU[4] = huidu1sheding[11] + huif[39];
																																										CMyPublicData::setfunc(51, 16, 88, 1);
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


void HUIFEN::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


void HUIFEN::ReSize()
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




void HUIFEN::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(huif[0]);
	opx.ModifyNode("num4701", str);
	str = opx.numtoString(huif[1]);
	opx.ModifyNode("num4702", str);
	str = opx.numtoString(huif[2]);
	opx.ModifyNode("num4703", str);
	str = opx.numtoString(huif[3]);
	opx.ModifyNode("num4704", str);
	str = opx.numtoString(huif[4]);
	opx.ModifyNode("num4705", str);
	str = opx.numtoString(huif[5]);
	opx.ModifyNode("num4706", str);
	str = opx.numtoString(huif[6]);
	opx.ModifyNode("num4707", str);
	str = opx.numtoString(huif[7]);
	opx.ModifyNode("num4708", str);
	str = opx.numtoString(huif[8]);
	opx.ModifyNode("num4709", str);
	str = opx.numtoString(huif[9]);
	opx.ModifyNode("num4710", str);
	str = opx.numtoString(huif[10]);
	opx.ModifyNode("num4711", str);
	str = opx.numtoString(huif[11]);
	opx.ModifyNode("num4712", str);
	str = opx.numtoString(huif[12]);
	opx.ModifyNode("num4713", str);
	str = opx.numtoString(huif[13]);
	opx.ModifyNode("num4714", str);
	str = opx.numtoString(huif[14]);
	opx.ModifyNode("num4715", str);
	str = opx.numtoString(huif[15]);
	opx.ModifyNode("num4716", str);
	str = opx.numtoString(huif[16]);
	opx.ModifyNode("num4717", str);
	str = opx.numtoString(huif[17]);
	opx.ModifyNode("num4718", str);
	str = opx.numtoString(huif[18]);
	opx.ModifyNode("num4719", str);
	str = opx.numtoString(huif[19]);
	opx.ModifyNode("num4720", str);
	str = opx.numtoString(huif[20]);
	opx.ModifyNode("num4721", str);
	str = opx.numtoString(huif[21]);
	opx.ModifyNode("num4722", str);
	str = opx.numtoString(huif[22]);
	opx.ModifyNode("num4723", str);
	str = opx.numtoString(huif[23]);
	opx.ModifyNode("num4724", str);
	str = opx.numtoString(huif[24]);
	opx.ModifyNode("num4725", str);
	str = opx.numtoString(huif[25]);
	opx.ModifyNode("num4726", str);
	str = opx.numtoString(huif[26]);
	opx.ModifyNode("num4727", str);
	str = opx.numtoString(huif[27]);
	opx.ModifyNode("num4728", str);
	str = opx.numtoString(huif[28]);
	opx.ModifyNode("num4729", str);
	str = opx.numtoString(huif[29]);
	opx.ModifyNode("num4730", str);
	str = opx.numtoString(huif[30]);
	opx.ModifyNode("num4731", str);
	str = opx.numtoString(huif[31]);
	opx.ModifyNode("num4732", str);
	str = opx.numtoString(huif[32]);
	opx.ModifyNode("num4733", str);
	str = opx.numtoString(huif[33]);
	opx.ModifyNode("num4734", str);
	str = opx.numtoString(huif[34]);
	opx.ModifyNode("num4735", str);
	str = opx.numtoString(huif[35]);
	opx.ModifyNode("num4736", str);
	str = opx.numtoString(huif[36]);
	opx.ModifyNode("num4737", str);
	str = opx.numtoString(huif[37]);
	opx.ModifyNode("num4738", str);
	str = opx.numtoString(huif[38]);
	opx.ModifyNode("num4739", str);
	str = opx.numtoString(huif[39]);
	opx.ModifyNode("num4740", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void HUIFEN::OnBnClickedButton1()
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


void HUIFEN::OnBnClickedButton2()
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


void HUIFEN::OnBnClickedButton3()
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
