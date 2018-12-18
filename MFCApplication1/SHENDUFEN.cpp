// SHENDUFEN.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "SHENDUFEN.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "MyPublicData.h"
#include "QUFEN.h"
#include "QUYUERFEN.h"
#include "QUYUSANFEN.h"
#include "QUYUSIFEN.h"
#include "QUYUWUFEN.h"
#include "SHENERFEN.h"
#include"HUIFEN.h"
#include "HUIERF.h"
// SHENDUFEN 对话框

IMPLEMENT_DYNAMIC(SHENDUFEN, CDialogEx)

SHENDUFEN::SHENDUFEN(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SHENDUFEN_DIALOG, pParent)
	, m_double1(shenduf[0])
	, m_double2(shenduf[1])
	, m_double3(shenduf[2])
	, m_double4(shenduf[3])
	, m_double5(shenduf[4])
	, m_double6(shenduf[5])
	, m_double7(shenduf[6])
	, m_double8(shenduf[7])
	, m_double9(shenduf[8])
	, m_double10(shenduf[9])
	, m_double11(shenduf[10])
	, m_double12(shenduf[11])
	, m_double13(shenduf[12])
	, m_double14(shenduf[13])
	, m_double15(shenduf[14])
	, m_double16(shenduf[15])
	, m_double17(shenduf[16])
	, m_double18(shenduf[17])
	, m_double19(shenduf[18])
	, m_double20(shenduf[19])
	, m_double21(shenduf[20])
	, m_double22(shenduf[21])
	, m_double23(shenduf[22])
	, m_double24(shenduf[23])
	, m_double25(shenduf[24])
	, m_double26(shenduf[25])
	, m_double27(shenduf[26])
	, m_double28(shenduf[27])
	, m_double29(shenduf[28])
	, m_double30(shenduf[29])
	, m_double31(shenduf[30])
	, m_double32(shenduf[31])
	, m_double33(shenduf[32])
	, m_double34(shenduf[33])
	, m_double35(shenduf[34])
	, m_double36(shenduf[35])
	, m_double37(shenduf[36])
	, m_double38(shenduf[37])
	, m_double39(shenduf[38])
	, m_double40(shenduf[39])
{

}

SHENDUFEN::~SHENDUFEN()
{
}

void SHENDUFEN::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(SHENDUFEN, CDialogEx)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &SHENDUFEN::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &SHENDUFEN::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &SHENDUFEN::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &SHENDUFEN::OnBnClickedButton3)
END_MESSAGE_MAP()


// SHENDUFEN 消息处理程序


BOOL SHENDUFEN::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	GetDlgItem(IDC_BUTTON1)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(zhendong[2]);

	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num5901", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num5902", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num5903", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num5904", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num5905", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num5906", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num5907", yuyan);
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


BOOL SHENDUFEN::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		UpdateData(TRUE);
		CInputDlg dlg;
		CMyPublicData::calculate(m_double1, shenduf, 0, dlg, 10, 0);
		UpdateData(FALSE);
		if (modsd[0] == L"1")
		{
			datatestDPU[4] = shen[0] + shenduf[0];
			CMyPublicData::setfunc(32, 16, 85, 1);
		}
		if (modsd[0] == L"2")
		{
			datatestDPU[4] = shen[4] + shenduf[0];
			CMyPublicData::setfunc(32, 16, 85, 1);
		}
		if (modsd[0] == L"3")
		{
			datatestDPU[4] = shen[8] + shenduf[0];
			CMyPublicData::setfunc(32, 16, 85, 1);
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
			CMyPublicData::calculate(m_double2, shenduf, 1, dlg, 10, 0);
			UpdateData(FALSE);
			if (modsd[2] == L"1")
			{
				datatestDPU[4] = shen[0] + shenduf[1];
				CMyPublicData::setfunc(34, 16, 85, 1);
			}
			if (modsd[2] == L"2")
			{
				datatestDPU[4] = shen[4] + shenduf[1];
				CMyPublicData::setfunc(34, 16, 85, 1);
			}
			if (modsd[2] == L"3")
			{
				datatestDPU[4] = shen[8] + shenduf[1];
				CMyPublicData::setfunc(34, 16, 85, 1);
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
				CMyPublicData::calculate(m_double3, shenduf, 2, dlg, 10, 0);
				UpdateData(FALSE);
				if (modsd[4] == L"1")
				{
					datatestDPU[4] = shen[0] + shenduf[2];
					CMyPublicData::setfunc(36, 16, 85, 1);
				}
				if (modsd[4] == L"2")
				{
					datatestDPU[4] = shen[4] + shenduf[2];
					CMyPublicData::setfunc(36, 16, 85, 1);
				}
				if (modsd[4] == L"3")
				{
					datatestDPU[4] = shen[8] + shenduf[2];
					CMyPublicData::setfunc(36, 16, 85, 1);
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
					CMyPublicData::calculate(m_double4, shenduf, 3, dlg, 10, 0);
					UpdateData(FALSE);
					if (modsd[6] == L"1")
					{
						datatestDPU[4] = shen[0] + shenduf[3];
						CMyPublicData::setfunc(38, 16, 85, 1);
					}
					if (modsd[6] == L"2")
					{
						datatestDPU[4] = shen[4] + shenduf[3];
						CMyPublicData::setfunc(38, 16, 85, 1);
					}
					if (modsd[6] == L"3")
					{
						datatestDPU[4] = shen[8] + shenduf[3];
						CMyPublicData::setfunc(38, 16, 85, 1);
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
						CMyPublicData::calculate(m_double5, shenduf, 4, dlg, 10, 0);
						UpdateData(FALSE);
						if (modsd[8] == L"1")
						{
							datatestDPU[4] = shen[0] + shenduf[4];
							CMyPublicData::setfunc(40, 16, 85, 1);
						}
						if (modsd[8] == L"2")
						{
							datatestDPU[4] = shen[4] + shenduf[4];
							CMyPublicData::setfunc(40, 16, 85, 1);
						}
						if (modsd[8] == L"3")
						{
							datatestDPU[4] = shen[8] + shenduf[4];
							CMyPublicData::setfunc(40, 16, 85, 1);
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
							CMyPublicData::calculate(m_double6, shenduf, 5, dlg, 10, 0);
							UpdateData(FALSE);
							if (modsd[10] == L"1")
							{
								datatestDPU[4] = shen[0] + shenduf[5];
								CMyPublicData::setfunc(42, 16, 85, 1);
							}
							if (modsd[10] == L"2")
							{
								datatestDPU[4] = shen[4] + shenduf[5];
								CMyPublicData::setfunc(42, 16, 85, 1);
							}
							if (modsd[10] == L"3")
							{
								datatestDPU[4] = shen[8] + shenduf[5];
								CMyPublicData::setfunc(42, 16, 85, 1);
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
								CMyPublicData::calculate(m_double7, shenduf, 6, dlg, 10, 0);
								UpdateData(FALSE);
								if (modsd[12] == L"1")
								{
									datatestDPU[4] = shen[0] + shenduf[6];
									CMyPublicData::setfunc(44, 16, 85, 1);
								}
								if (modsd[12] == L"2")
								{
									datatestDPU[4] = shen[4] + shenduf[6];
									CMyPublicData::setfunc(44, 16, 85, 1);
								}
								if (modsd[12] == L"3")
								{
									datatestDPU[4] = shen[8] + shenduf[6];
									CMyPublicData::setfunc(44, 16, 85, 1);
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
									CMyPublicData::calculate(m_double8, shenduf, 7, dlg, 10, 0);
									UpdateData(FALSE);
									if (modsd[14] == L"1")
									{
										datatestDPU[4] = shen[0] + shenduf[7];
										CMyPublicData::setfunc(46, 16, 85, 1);
									}
									if (modsd[14] == L"2")
									{
										datatestDPU[4] = shen[4] + shenduf[7];
										CMyPublicData::setfunc(46, 16, 85, 1);
									}
									if (modsd[14] == L"3")
									{
										datatestDPU[4] = shen[8] + shenduf[7];
										CMyPublicData::setfunc(46, 16, 85, 1);
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
										CMyPublicData::calculate(m_double9, shenduf, 8, dlg, 10, 0);
										UpdateData(FALSE);
										if (modsd[16] == L"1")
										{
											datatestDPU[4] = shen[0] + shenduf[8];
											CMyPublicData::setfunc(48, 16, 85, 1);
										}
										if (modsd[16] == L"2")
										{
											datatestDPU[4] = shen[4] + shenduf[8];
											CMyPublicData::setfunc(48, 16, 85, 1);
										}
										if (modsd[16] == L"3")
										{
											datatestDPU[4] = shen[8] + shenduf[8];
											CMyPublicData::setfunc(48, 16, 85, 1);
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
											CMyPublicData::calculate(m_double10, shenduf, 9, dlg, 10, 0);
											UpdateData(FALSE);
											if (modsd[18] == L"1")
											{
												datatestDPU[4] = shen[0] + shenduf[9];
												CMyPublicData::setfunc(50, 16, 85, 1);
											}
											if (modsd[18] == L"2")
											{
												datatestDPU[4] = shen[4] + shenduf[9];
												CMyPublicData::setfunc(50, 16, 85, 1);
											}
											if (modsd[18] == L"3")
											{
												datatestDPU[4] = shen[8] + shenduf[9];
												CMyPublicData::setfunc(50, 16, 85, 1);
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
												CMyPublicData::calculate(m_double11, shenduf, 10, dlg, 10, 0);
												UpdateData(FALSE);
												if (modsd[0] == L"1")
												{
													datatestDPU[4] = shen[1] + shenduf[10];
													CMyPublicData::setfunc(32, 16, 86, 1);
												}
												if (modsd[0] == L"2")
												{
													datatestDPU[4] = shen[5] + shenduf[10];
													CMyPublicData::setfunc(32, 16, 86, 1);
												}
												if (modsd[0] == L"3")
												{
													datatestDPU[4] = shen[9] + shenduf[10];
													CMyPublicData::setfunc(32, 16, 86, 1);
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
													CMyPublicData::calculate(m_double12, shenduf, 11, dlg, 10, 0);
													UpdateData(FALSE);
													if (modsd[2] == L"1")
													{
														datatestDPU[4] = shen[1] + shenduf[11];
														CMyPublicData::setfunc(34, 16, 86, 1);
													}
													if (modsd[2] == L"2")
													{
														datatestDPU[4] = shen[5] + shenduf[11];
														CMyPublicData::setfunc(34, 16, 86, 1);
													}
													if (modsd[2] == L"3")
													{
														datatestDPU[4] = shen[9] + shenduf[11];
														CMyPublicData::setfunc(34, 16, 86, 1);
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
														CMyPublicData::calculate(m_double13, shenduf, 12, dlg, 10, 0);
														UpdateData(FALSE);
														if (modsd[4] == L"1")
														{
															datatestDPU[4] = shen[1] + shenduf[12];
															CMyPublicData::setfunc(36, 16, 86, 1);
														}
														if (modsd[4] == L"2")
														{
															datatestDPU[4] = shen[5] + shenduf[12];
															CMyPublicData::setfunc(36, 16, 86, 1);
														}
														if (modsd[4] == L"3")
														{
															datatestDPU[4] = shen[9] + shenduf[12];
															CMyPublicData::setfunc(36, 16, 86, 1);
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
															CMyPublicData::calculate(m_double14, shenduf, 13, dlg, 10, 0);
															UpdateData(FALSE);
															if (modsd[6] == L"1")
															{
																datatestDPU[4] = shen[1] + shenduf[13];
																CMyPublicData::setfunc(38, 16, 86, 1);
															}
															if (modsd[6] == L"2")
															{
																datatestDPU[4] = shen[5] + shenduf[13];
																CMyPublicData::setfunc(38, 16, 86, 1);
															}
															if (modsd[6] == L"3")
															{
																datatestDPU[4] = shen[9] + shenduf[13];
																CMyPublicData::setfunc(38, 16, 86, 1);
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
																CMyPublicData::calculate(m_double15, shenduf, 14, dlg, 10, 0);
																UpdateData(FALSE);
																if (modsd[8] == L"1")
																{
																	datatestDPU[4] = shen[1] + shenduf[14];
																	CMyPublicData::setfunc(40, 16, 86, 1);
																}
																if (modsd[8] == L"2")
																{
																	datatestDPU[4] = shen[5] + shenduf[14];
																	CMyPublicData::setfunc(40, 16, 86, 1);
																}
																if (modsd[8] == L"3")
																{
																	datatestDPU[4] = shen[9] + shenduf[14];
																	CMyPublicData::setfunc(40, 16, 86, 1);
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
																	CMyPublicData::calculate(m_double16, shenduf, 15, dlg, 10, 0);
																	UpdateData(FALSE);
																	if (modsd[10] == L"1")
																	{
																		datatestDPU[4] = shen[1] + shenduf[15];
																		CMyPublicData::setfunc(42, 16, 86, 1);
																	}
																	if (modsd[10] == L"2")
																	{
																		datatestDPU[4] = shen[5] + shenduf[15];
																		CMyPublicData::setfunc(42, 16, 86, 1);
																	}
																	if (modsd[10] == L"3")
																	{
																		datatestDPU[4] = shen[9] + shenduf[15];
																		CMyPublicData::setfunc(42, 16, 86, 1);
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
																		CMyPublicData::calculate(m_double17, shenduf, 16, dlg, 10, 0);
																		UpdateData(FALSE);
																		if (modsd[12] == L"1")
																		{
																			datatestDPU[4] = shen[1] + shenduf[16];
																			CMyPublicData::setfunc(44, 16, 86, 1);
																		}
																		if (modsd[12] == L"2")
																		{
																			datatestDPU[4] = shen[5] + shenduf[16];
																			CMyPublicData::setfunc(44, 16, 86, 1);
																		}
																		if (modsd[12] == L"3")
																		{
																			datatestDPU[4] = shen[9] + shenduf[16];
																			CMyPublicData::setfunc(44, 16, 86, 1);
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
																			CMyPublicData::calculate(m_double18, shenduf, 17, dlg, 10, 0);
																			UpdateData(FALSE);
																			if (modsd[14] == L"1")
																			{
																				datatestDPU[4] = shen[1] + shenduf[17];
																				CMyPublicData::setfunc(46, 16, 86, 1);
																			}
																			if (modsd[14] == L"2")
																			{
																				datatestDPU[4] = shen[5] + shenduf[17];
																				CMyPublicData::setfunc(46, 16, 86, 1);
																			}
																			if (modsd[14] == L"3")
																			{
																				datatestDPU[4] = shen[9] + shenduf[17];
																				CMyPublicData::setfunc(46, 16, 86, 1);
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
																				CMyPublicData::calculate(m_double19, shenduf, 18, dlg, 10, 0);
																				UpdateData(FALSE);
																				if (modsd[16] == L"1")
																				{
																					datatestDPU[4] = shen[1] + shenduf[18];
																					CMyPublicData::setfunc(48, 16, 86, 1);
																				}
																				if (modsd[16] == L"2")
																				{
																					datatestDPU[4] = shen[5] + shenduf[18];
																					CMyPublicData::setfunc(48, 16, 86, 1);
																				}
																				if (modsd[16] == L"3")
																				{
																					datatestDPU[4] = shen[9] + shenduf[18];
																					CMyPublicData::setfunc(48, 16, 86, 1);
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
																					CMyPublicData::calculate(m_double20, shenduf, 19, dlg, 10, 0);
																					UpdateData(FALSE);
																					if (modsd[18] == L"1")
																					{
																						datatestDPU[4] = shen[1] + shenduf[19];
																						CMyPublicData::setfunc(50, 16, 86, 1);
																					}
																					if (modsd[18] == L"2")
																					{
																						datatestDPU[4] = shen[5] + shenduf[19];
																						CMyPublicData::setfunc(50, 16, 86, 1);
																					}
																					if (modsd[18] == L"3")
																					{
																						datatestDPU[4] = shen[9] + shenduf[19];
																						CMyPublicData::setfunc(50, 16, 86, 1);
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
																						CMyPublicData::calculate(m_double21, shenduf, 20, dlg, 10, 0);
																						UpdateData(FALSE);
																						if (modsd[1] == L"1")
																						{
																							datatestDPU[4] = shen[2] + shenduf[20];
																							CMyPublicData::setfunc(33, 16, 85, 1);
																						}
																						if (modsd[1] == L"2")
																						{
																							datatestDPU[4] = shen[6] + shenduf[20];
																							CMyPublicData::setfunc(33, 16, 85, 1);
																						}
																						if (modsd[1] == L"3")
																						{
																							datatestDPU[4] = shen[10] + shenduf[20];
																							CMyPublicData::setfunc(33, 16, 85, 1);
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
																							CMyPublicData::calculate(m_double22, shenduf, 21, dlg, 10, 0);
																							UpdateData(FALSE);
																							if (modsd[3] == L"1")
																							{
																								datatestDPU[4] = shen[2] + shenduf[21];
																								CMyPublicData::setfunc(35, 16, 85, 1);
																							}
																							if (modsd[3] == L"2")
																							{
																								datatestDPU[4] = shen[6] + shenduf[21];
																								CMyPublicData::setfunc(35, 16, 85, 1);
																							}
																							if (modsd[3] == L"3")
																							{
																								datatestDPU[4] = shen[10] + shenduf[21];
																								CMyPublicData::setfunc(35, 16, 85, 1);
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
																								CMyPublicData::calculate(m_double23, shenduf, 22, dlg, 10, 0);
																								UpdateData(FALSE);
																								if (modsd[5] == L"1")
																								{
																									datatestDPU[4] = shen[2] + shenduf[22];
																									CMyPublicData::setfunc(37, 16, 85, 1);
																								}
																								if (modsd[5] == L"2")
																								{
																									datatestDPU[4] = shen[6] + shenduf[22];
																									CMyPublicData::setfunc(37, 16, 85, 1);
																								}
																								if (modsd[5] == L"3")
																								{
																									datatestDPU[4] = shen[10] + shenduf[22];
																									CMyPublicData::setfunc(37, 16, 85, 1);
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
																									CMyPublicData::calculate(m_double24, shenduf, 23, dlg, 10, 0);
																									UpdateData(FALSE);
																									if (modsd[7] == L"1")
																									{
																										datatestDPU[4] = shen[2] + shenduf[23];
																										CMyPublicData::setfunc(39, 16, 85, 1);
																									}
																									if (modsd[7] == L"2")
																									{
																										datatestDPU[4] = shen[6] + shenduf[23];
																										CMyPublicData::setfunc(39, 16, 85, 1);
																									}
																									if (modsd[7] == L"3")
																									{
																										datatestDPU[4] = shen[10] + shenduf[23];
																										CMyPublicData::setfunc(39, 16, 85, 1);
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
																										CMyPublicData::calculate(m_double25, shenduf, 24, dlg, 10, 0);
																										UpdateData(FALSE);
																										if (modsd[9] == L"1")
																										{
																											datatestDPU[4] = shen[2] + shenduf[24];
																											CMyPublicData::setfunc(41, 16, 85, 1);
																										}
																										if (modsd[9] == L"2")
																										{
																											datatestDPU[4] = shen[6] + shenduf[24];
																											CMyPublicData::setfunc(41, 16, 85, 1);
																										}
																										if (modsd[9] == L"3")
																										{
																											datatestDPU[4] = shen[10] + shenduf[24];
																											CMyPublicData::setfunc(41, 16, 85, 1);
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
																											CMyPublicData::calculate(m_double26, shenduf, 25, dlg, 10, 0);
																											UpdateData(FALSE);
																											if (modsd[11] == L"1")
																											{
																												datatestDPU[4] = shen[2] + shenduf[25];
																												CMyPublicData::setfunc(43, 16, 85, 1);
																											}
																											if (modsd[11] == L"2")
																											{
																												datatestDPU[4] = shen[6] + shenduf[25];
																												CMyPublicData::setfunc(43, 16, 85, 1);
																											}
																											if (modsd[11] == L"3")
																											{
																												datatestDPU[4] = shen[10] + shenduf[25];
																												CMyPublicData::setfunc(43, 16, 85, 1);
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
																												CMyPublicData::calculate(m_double27, shenduf, 26, dlg, 10, 0);
																												UpdateData(FALSE);
																												if (modsd[13] == L"1")
																												{
																													datatestDPU[4] = shen[2] + shenduf[26];
																													CMyPublicData::setfunc(45, 16, 85, 1);
																												}
																												if (modsd[13] == L"2")
																												{
																													datatestDPU[4] = shen[6] + shenduf[26];
																													CMyPublicData::setfunc(45, 16, 85, 1);
																												}
																												if (modsd[13] == L"3")
																												{
																													datatestDPU[4] = shen[10] + shenduf[26];
																													CMyPublicData::setfunc(45, 16, 85, 1);
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
																													CMyPublicData::calculate(m_double28, shenduf, 27, dlg, 10, 0);
																													UpdateData(FALSE);
																													if (modsd[15] == L"1")
																													{
																														datatestDPU[4] = shen[2] + shenduf[27];
																														CMyPublicData::setfunc(47, 16, 85, 1);
																													}
																													if (modsd[15] == L"2")
																													{
																														datatestDPU[4] = shen[6] + shenduf[27];
																														CMyPublicData::setfunc(47, 16, 85, 1);
																													}
																													if (modsd[15] == L"3")
																													{
																														datatestDPU[4] = shen[10] + shenduf[27];
																														CMyPublicData::setfunc(47, 16, 85, 1);
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
																														CMyPublicData::calculate(m_double29, shenduf, 28, dlg, 10, 0);
																														UpdateData(FALSE);
																														if (modsd[17] == L"1")
																														{
																															datatestDPU[4] = shen[2] + shenduf[28];
																															CMyPublicData::setfunc(49, 16, 85, 1);
																														}
																														if (modsd[17] == L"2")
																														{
																															datatestDPU[4] = shen[6] + shenduf[28];
																															CMyPublicData::setfunc(49, 16, 85, 1);
																														}
																														if (modsd[17] == L"3")
																														{
																															datatestDPU[4] = shen[10] + shenduf[28];
																															CMyPublicData::setfunc(49, 16, 85, 1);
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
																															CMyPublicData::calculate(m_double30, shenduf, 29, dlg, 10, 0);
																															UpdateData(FALSE);
																															if (modsd[19] == L"1")
																															{
																																datatestDPU[4] = shen[2] + shenduf[29];
																																CMyPublicData::setfunc(51, 16, 85, 1);
																															}
																															if (modsd[19] == L"2")
																															{
																																datatestDPU[4] = shen[6] + shenduf[29];
																																CMyPublicData::setfunc(51, 16, 85, 1);
																															}
																															if (modsd[19] == L"3")
																															{
																																datatestDPU[4] = shen[10] + shenduf[29];
																																CMyPublicData::setfunc(51, 16, 85, 1);
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
																																CMyPublicData::calculate(m_double31, shenduf, 30, dlg, 10, 0);
																																UpdateData(FALSE);
																																if (modsd[1] == L"1")
																																{
																																	datatestDPU[4] = shen[3] + shenduf[30];
																																	CMyPublicData::setfunc(33, 16, 86, 1);
																																}
																																if (modsd[1] == L"2")
																																{
																																	datatestDPU[4] = shen[7] + shenduf[30];
																																	CMyPublicData::setfunc(33, 16, 86, 1);
																																}
																																if (modsd[1] == L"3")
																																{
																																	datatestDPU[4] = shen[11] + shenduf[30];
																																	CMyPublicData::setfunc(33, 16, 86, 1);
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
																																	CMyPublicData::calculate(m_double32, shenduf, 31, dlg, 10, 0);
																																	UpdateData(FALSE);
																																	if (modsd[3] == L"1")
																																	{
																																		datatestDPU[4] = shen[3] + shenduf[31];
																																		CMyPublicData::setfunc(35, 16, 86, 1);
																																	}
																																	if (modsd[3] == L"2")
																																	{
																																		datatestDPU[4] = shen[7] + shenduf[31];
																																		CMyPublicData::setfunc(35, 16, 86, 1);
																																	}
																																	if (modsd[3] == L"3")
																																	{
																																		datatestDPU[4] = shen[11] + shenduf[31];
																																		CMyPublicData::setfunc(35, 16, 86, 1);
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
																																		CMyPublicData::calculate(m_double33, shenduf, 32, dlg, 10, 0);
																																		UpdateData(FALSE);
																																		if (modsd[5] == L"1")
																																		{
																																			datatestDPU[4] = shen[3] + shenduf[32];
																																			CMyPublicData::setfunc(37, 16, 86, 1);
																																		}
																																		if (modsd[5] == L"2")
																																		{
																																			datatestDPU[4] = shen[7] + shenduf[32];
																																			CMyPublicData::setfunc(37, 16, 86, 1);
																																		}
																																		if (modsd[5] == L"3")
																																		{
																																			datatestDPU[4] = shen[11] + shenduf[32];
																																			CMyPublicData::setfunc(37, 16, 86, 1);
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
																																			CMyPublicData::calculate(m_double34, shenduf, 33, dlg, 10, 0);
																																			UpdateData(FALSE);
																																			if (modsd[7] == L"1")
																																			{
																																				datatestDPU[4] = shen[3] + shenduf[33];
																																				CMyPublicData::setfunc(39, 16, 86, 1);
																																			}
																																			if (modsd[7] == L"2")
																																			{
																																				datatestDPU[4] = shen[7] + shenduf[33];
																																				CMyPublicData::setfunc(39, 16, 86, 1);
																																			}
																																			if (modsd[7] == L"3")
																																			{
																																				datatestDPU[4] = shen[11] + shenduf[33];
																																				CMyPublicData::setfunc(39, 16, 86, 1);
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
																																				CMyPublicData::calculate(m_double35, shenduf, 34, dlg, 10, 0);
																																				UpdateData(FALSE);
																																				if (modsd[9] == L"1")
																																				{
																																					datatestDPU[4] = shen[3] + shenduf[34];
																																					CMyPublicData::setfunc(41, 16, 86, 1);
																																				}
																																				if (modsd[9] == L"2")
																																				{
																																					datatestDPU[4] = shen[7] + shenduf[34];
																																					CMyPublicData::setfunc(41, 16, 86, 1);
																																				}
																																				if (modsd[9] == L"3")
																																				{
																																					datatestDPU[4] = shen[11] + shenduf[34];
																																					CMyPublicData::setfunc(41, 16, 86, 1);
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
																																					CMyPublicData::calculate(m_double36, shenduf, 35, dlg, 10, 0);
																																					UpdateData(FALSE);
																																					if (modsd[11] == L"1")
																																					{
																																						datatestDPU[4] = shen[3] + shenduf[35];
																																						CMyPublicData::setfunc(43, 16, 86, 1);
																																					}
																																					if (modsd[11] == L"2")
																																					{
																																						datatestDPU[4] = shen[7] + shenduf[35];
																																						CMyPublicData::setfunc(43, 16, 86, 1);
																																					}
																																					if (modsd[11] == L"3")
																																					{
																																						datatestDPU[4] = shen[11] + shenduf[35];
																																						CMyPublicData::setfunc(43, 16, 86, 1);
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
																																						CMyPublicData::calculate(m_double37, shenduf, 36, dlg, 10, 0);
																																						UpdateData(FALSE);
																																						if (modsd[13] == L"1")
																																						{
																																							datatestDPU[4] = shen[3] + shenduf[36];
																																							CMyPublicData::setfunc(45, 16, 86, 1);
																																						}
																																						if (modsd[13] == L"2")
																																						{
																																							datatestDPU[4] = shen[7] + shenduf[36];
																																							CMyPublicData::setfunc(45, 16, 86, 1);
																																						}
																																						if (modsd[13] == L"3")
																																						{
																																							datatestDPU[4] = shen[11] + shenduf[36];
																																							CMyPublicData::setfunc(45, 16, 86, 1);
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
																																							CMyPublicData::calculate(m_double38, shenduf, 37, dlg, 10, 0);
																																							UpdateData(FALSE);
																																							if (modsd[15] == L"1")
																																							{
																																								datatestDPU[4] = shen[3] + shenduf[37];
																																								CMyPublicData::setfunc(47, 16, 86, 1);
																																							}
																																							if (modsd[15] == L"2")
																																							{
																																								datatestDPU[4] = shen[7] + shenduf[37];
																																								CMyPublicData::setfunc(47, 16, 86, 1);
																																							}
																																							if (modsd[15] == L"3")
																																							{
																																								datatestDPU[4] = shen[11] + shenduf[37];
																																								CMyPublicData::setfunc(47, 16, 86, 1);
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
																																								CMyPublicData::calculate(m_double39, shenduf, 38, dlg, 10, 0);
																																								UpdateData(FALSE);
																																								if (modsd[17] == L"1")
																																								{
																																									datatestDPU[4] = shen[3] + shenduf[38];
																																									CMyPublicData::setfunc(49, 16, 86, 1);
																																								}
																																								if (modsd[17] == L"2")
																																								{
																																									datatestDPU[4] = shen[7] + shenduf[38];
																																									CMyPublicData::setfunc(49, 16, 86, 1);
																																								}
																																								if (modsd[17] == L"3")
																																								{
																																									datatestDPU[4] = shen[11] + shenduf[38];
																																									CMyPublicData::setfunc(49, 16, 86, 1);
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
																																									CMyPublicData::calculate(m_double40, shenduf, 39, dlg, 10, 0);
																																									UpdateData(FALSE);
																																									if (modsd[19] == L"1")
																																									{
																																										datatestDPU[4] = shen[3] + shenduf[39];
																																										CMyPublicData::setfunc(51, 16, 86, 1);
																																									}
																																									if (modsd[19] == L"2")
																																									{
																																										datatestDPU[4] = shen[7] + shenduf[39];
																																										CMyPublicData::setfunc(51, 16, 86, 1);
																																									}
																																									if (modsd[19] == L"3")
																																									{
																																										datatestDPU[4] = shen[11] + shenduf[39];
																																										CMyPublicData::setfunc(51, 16, 86, 1);
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


void  SHENDUFEN::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


void SHENDUFEN::ReSize()
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



void SHENDUFEN::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(shenduf[0]);
	opx.ModifyNode("num4501", str);
	str = opx.numtoString(shenduf[1]);
	opx.ModifyNode("num4502", str);
	str = opx.numtoString(shenduf[2]);
	opx.ModifyNode("num4503", str);
	str = opx.numtoString(shenduf[3]);
	opx.ModifyNode("num4504", str);
	str = opx.numtoString(shenduf[4]);
	opx.ModifyNode("num4505", str);
	str = opx.numtoString(shenduf[5]);
	opx.ModifyNode("num4506", str);
	str = opx.numtoString(shenduf[6]);
	opx.ModifyNode("num4507", str);
	str = opx.numtoString(shenduf[7]);
	opx.ModifyNode("num4508", str);
	str = opx.numtoString(shenduf[8]);
	opx.ModifyNode("num4509", str);
	str = opx.numtoString(shenduf[9]);
	opx.ModifyNode("num4510", str);
	str = opx.numtoString(shenduf[10]);
	opx.ModifyNode("num4511", str);
	str = opx.numtoString(shenduf[11]);
	opx.ModifyNode("num4512", str);
	str = opx.numtoString(shenduf[12]);
	opx.ModifyNode("num4513", str);
	str = opx.numtoString(shenduf[13]);
	opx.ModifyNode("num4514", str);
	str = opx.numtoString(shenduf[14]);
	opx.ModifyNode("num4515", str);
	str = opx.numtoString(shenduf[15]);
	opx.ModifyNode("num4516", str);
	str = opx.numtoString(shenduf[16]);
	opx.ModifyNode("num4517", str);
	str = opx.numtoString(shenduf[17]);
	opx.ModifyNode("num4518", str);
	str = opx.numtoString(shenduf[18]);
	opx.ModifyNode("num4519", str);
	str = opx.numtoString(shenduf[19]);
	opx.ModifyNode("num4520", str);
	str = opx.numtoString(shenduf[20]);
	opx.ModifyNode("num4521", str);
	str = opx.numtoString(shenduf[21]);
	opx.ModifyNode("num4522", str);
	str = opx.numtoString(shenduf[22]);
	opx.ModifyNode("num4523", str);
	str = opx.numtoString(shenduf[23]);
	opx.ModifyNode("num4524", str);
	str = opx.numtoString(shenduf[24]);
	opx.ModifyNode("num4525", str);
	str = opx.numtoString(shenduf[25]);
	opx.ModifyNode("num4526", str);
	str = opx.numtoString(shenduf[26]);
	opx.ModifyNode("num4527", str);
	str = opx.numtoString(shenduf[27]);
	opx.ModifyNode("num4528", str);
	str = opx.numtoString(shenduf[28]);
	opx.ModifyNode("num4529", str);
	str = opx.numtoString(shenduf[29]);
	opx.ModifyNode("num4530", str);
	str = opx.numtoString(shenduf[30]);
	opx.ModifyNode("num4531", str);
	str = opx.numtoString(shenduf[31]);
	opx.ModifyNode("num4532", str);
	str = opx.numtoString(shenduf[32]);
	opx.ModifyNode("num4533", str);
	str = opx.numtoString(shenduf[33]);
	opx.ModifyNode("num4534", str);
	str = opx.numtoString(shenduf[34]);
	opx.ModifyNode("num4535", str);
	str = opx.numtoString(shenduf[35]);
	opx.ModifyNode("num4536", str);
	str = opx.numtoString(shenduf[36]);
	opx.ModifyNode("num4537", str);
	str = opx.numtoString(shenduf[37]);
	opx.ModifyNode("num4538", str);
	str = opx.numtoString(shenduf[38]);
	opx.ModifyNode("num4539", str);
	str = opx.numtoString(shenduf[39]);
	opx.ModifyNode("num4540", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}



void SHENDUFEN::OnBnClickedButton1()
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


void SHENDUFEN::OnBnClickedButton2()
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


void SHENDUFEN::OnBnClickedButton3()
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
