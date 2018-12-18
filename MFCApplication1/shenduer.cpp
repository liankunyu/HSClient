// shenduer.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "shenduer.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include "SHENERFEN.h"
#include "Yansemingan.h"
#include "quyuer.h"
#include "quyusan.h"
#include "quyusi.h"
#include "quyuwu.h"
#include "shendu.h"
#include "huidu1.h"
#include "huidu2.h"
// shenduer 对话框

IMPLEMENT_DYNAMIC(shenduer, CDialogEx)

shenduer::shenduer(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SHENDUER_DIALOG, pParent)
	, m_double1(shendu2[0])
	, m_double2(shendu2[1])
	, m_double3(shendu2[2])
	, m_double4(shendu2[3])
	, m_double5(shendu2[4])
	, m_double6(shendu2[5])
	, m_double7(shendu2[6])
	, m_double8(shendu2[7])
	, m_double9(shendu2[8])
	, m_double10(shendu2[9])
	, m_double11(shendu2[10])
	, m_double12(shendu2[11])
{

}

shenduer::~shenduer()
{
}

void shenduer::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT4, m_double2);
	DDX_Text(pDX, IDC_EDIT24, m_double3);
	DDX_Text(pDX, IDC_EDIT25, m_double4);
	DDX_Text(pDX, IDC_EDIT26, m_double5);
	DDX_Text(pDX, IDC_EDIT27, m_double6);
	DDX_Text(pDX, IDC_EDIT28, m_double7);
	DDX_Text(pDX, IDC_EDIT29, m_double8);
	DDX_Text(pDX, IDC_EDIT57, m_double9);
	DDX_Text(pDX, IDC_EDIT40, m_double10);
	DDX_Text(pDX, IDC_EDIT41, m_double11);
	DDX_Text(pDX, IDC_EDIT42, m_double12);
	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA, m_tingzhi);
}


BEGIN_MESSAGE_MAP(shenduer, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON10, &shenduer::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON33, &shenduer::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &shenduer::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON36, &shenduer::OnBnClickedButton36)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON55, &shenduer::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON38, &shenduer::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON56, &shenduer::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON40, &shenduer::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON42, &shenduer::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON58, &shenduer::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON50, &shenduer::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON59, &shenduer::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON60, &shenduer::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON44, &shenduer::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON61, &shenduer::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON46, &shenduer::OnBnClickedButton46)
	ON_BN_CLICKED(IDCANCEL, &shenduer::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON68, &shenduer::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON70, &shenduer::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON71, &shenduer::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON73, &shenduer::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON74, &shenduer::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON76, &shenduer::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON77, &shenduer::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON79, &shenduer::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_SHENDUERFEN_BUTTON, &shenduer::OnBnClickedShenduerfenButton)
	ON_BN_CLICKED(IDC_BUTTON62, &shenduer::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &shenduer::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON80, &shenduer::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_KAISHIDA, &shenduer::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &shenduer::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// shenduer 消息处理程序


void shenduer::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 245)
	{
		UpdateData(FALSE);
		shendu2[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		shendu2[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = shendu2[0] + shenduerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 97, 1);
		}
	}
}


BOOL shenduer::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 245;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double1 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			shendu2[0] = m_double1;
		}
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = shendu2[0] + shenduerf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 97, 1);
			}
		}
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT4);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		{
			CInputDlg dlg;
			dlg.ValueMax = 245;
			dlg.ValueMin = 0;

			if (dlg.DoModal() == IDOK)
			{
				UpdateData(TRUE);
				m_double2 = _wtof(dlg.ValueShow);
				UpdateData(FALSE);
				shendu2[1] = m_double2;
			}
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = shendu2[1] + shenduerf[10 + i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 98, 1);
				}
			}
			return TRUE;
		}
		else
		{
			pEdit = (CEdit*)GetDlgItem(IDC_EDIT24);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				CInputDlg dlg;
				dlg.ValueMax = 245;
				dlg.ValueMin = 0;
				if (dlg.DoModal() == IDOK)
				{
					UpdateData(TRUE);
					m_double3 = _wtof(dlg.ValueShow);
					UpdateData(FALSE);
					shendu2[2] = m_double3;
				}
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i + 1] == L"1")
					{
						datatestDPU[4] = shendu2[2] + shenduerf[20 + i];
						CMyPublicData::setfunc(33 + 2 * i, 16, 97, 1);
					}
				}
				return TRUE;
			}
			else
			{
				pEdit = (CEdit*)GetDlgItem(IDC_EDIT25);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					CInputDlg dlg;
					dlg.ValueMax = 245;
					dlg.ValueMin = 0;
					if (dlg.DoModal() == IDOK)
					{
						UpdateData(TRUE);
						m_double4 = _wtof(dlg.ValueShow);
						UpdateData(FALSE);
						shendu2[3] = m_double4;
					}
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = shendu2[3] + shenduerf[30 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 98, 1);
						}
					}
					return TRUE;
				}
				else
				{
					pEdit = (CEdit*)GetDlgItem(IDC_EDIT26);
					ASSERT(pEdit && pEdit->GetSafeHwnd());
					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
					{
						CInputDlg dlg;
						dlg.ValueMax = 245;
						dlg.ValueMin = 0;
						if (dlg.DoModal() == IDOK)
						{
							UpdateData(TRUE);
							m_double5 = _wtof(dlg.ValueShow);
							UpdateData(FALSE);
							shendu2[4] = m_double5;
						}
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i] == L"2")
							{
								datatestDPU[4] = shendu2[4] + shenduerf[i];
								CMyPublicData::setfunc(32 + 2 * i, 16, 97, 1);
							}
						}
						return TRUE;
					}
					else
					{
						pEdit = (CEdit*)GetDlgItem(IDC_EDIT27);
						ASSERT(pEdit && pEdit->GetSafeHwnd());
						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
						{
							CInputDlg dlg;
							dlg.ValueMax = 245;
							dlg.ValueMin = 0;
							if (dlg.DoModal() == IDOK)
							{
								UpdateData(TRUE);
								m_double6 = _wtof(dlg.ValueShow);
								UpdateData(FALSE);
								shendu2[5] = m_double6;
							}
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = shendu2[5] + shenduerf[10 + i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 98, 1);
								}
							}
							return TRUE;
						}
						else
						{
							pEdit = (CEdit*)GetDlgItem(IDC_EDIT28);
							ASSERT(pEdit && pEdit->GetSafeHwnd());
							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
							{
								CInputDlg dlg;
								dlg.ValueMax = 245;
								dlg.ValueMin = 0;
								if (dlg.DoModal() == IDOK)
								{
									UpdateData(TRUE);
									m_double7 = _wtof(dlg.ValueShow);
									UpdateData(FALSE);
									shendu2[6] = m_double7;
								}
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i + 1] == L"2")
									{
										datatestDPU[4] = shendu2[6] + shenduerf[20 + i];
										CMyPublicData::setfunc(33 + 2 * i, 16, 97, 1);
									}
								}
								return TRUE;
							}
							else
							{
								pEdit = (CEdit*)GetDlgItem(IDC_EDIT29);
								ASSERT(pEdit && pEdit->GetSafeHwnd());
								if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
								{
									CInputDlg dlg;
									dlg.ValueMax = 245;
									dlg.ValueMin = 0;
									if (dlg.DoModal() == IDOK)
									{
										UpdateData(TRUE);
										m_double8 = _wtof(dlg.ValueShow);
										UpdateData(FALSE);
										shendu2[7] = m_double8;
									}
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = shendu2[7] + shenduerf[30 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 98, 1);
										}
									}
									return TRUE;
								}
								else
								{
									pEdit = (CEdit*)GetDlgItem(IDC_EDIT57);
									ASSERT(pEdit && pEdit->GetSafeHwnd());
									if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
									{
										CInputDlg dlg;
										dlg.ValueMax = 245;
										dlg.ValueMin = 0;
										if (dlg.DoModal() == IDOK)
										{
											UpdateData(TRUE);
											m_double9 = _wtof(dlg.ValueShow);
											UpdateData(FALSE);
											shendu2[8] = m_double9;
										}
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i] == L"3")
											{
												datatestDPU[4] = shendu2[8] + shenduerf[i];
												CMyPublicData::setfunc(32 + 2 * i, 16, 97, 1);
											}
										}
										return TRUE;
									}
									else
									{
										pEdit = (CEdit*)GetDlgItem(IDC_EDIT40);
										ASSERT(pEdit && pEdit->GetSafeHwnd());
										if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
										{
											CInputDlg dlg;
											dlg.ValueMax = 245;
											dlg.ValueMin = 0;
											if (dlg.DoModal() == IDOK)
											{
												UpdateData(TRUE);
												m_double10 = _wtof(dlg.ValueShow);
												UpdateData(FALSE);
												shendu2[9] = m_double10;
											}
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = shendu2[9] + shenduerf[10 + i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 98, 1);
												}
											}
											return TRUE;
										}
										else
										{
											pEdit = (CEdit*)GetDlgItem(IDC_EDIT41);
											ASSERT(pEdit && pEdit->GetSafeHwnd());
											if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
											{
												CInputDlg dlg;
												dlg.ValueMax = 245;
												dlg.ValueMin = 0;
												if (dlg.DoModal() == IDOK)
												{
													UpdateData(TRUE);
													m_double11 = _wtof(dlg.ValueShow);
													UpdateData(FALSE);
													shendu2[10] = m_double11;
												}
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i + 1] == L"3")
													{
														datatestDPU[4] = shendu2[10] + shenduerf[20 + i];
														CMyPublicData::setfunc(33 + 2 * i, 16, 97, 1);
													}
												}
												return TRUE;
											}
											else
											{
												pEdit = (CEdit*)GetDlgItem(IDC_EDIT42);
												ASSERT(pEdit && pEdit->GetSafeHwnd());
												if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
												{
													CInputDlg dlg;
													dlg.ValueMax = 245;
													dlg.ValueMin = 0;
													if (dlg.DoModal() == IDOK)
													{
														UpdateData(TRUE);
														m_double12 = _wtof(dlg.ValueShow);
														UpdateData(FALSE);
														shendu2[11] = m_double12;
													}
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = shendu2[11] + shenduerf[30 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 98, 1);
														}
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

				UpdateData(FALSE);
				return CDialogEx::PreTranslateMessage(pMsg);
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


void shenduer::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 245)
	{
		UpdateData(FALSE);
		shendu2[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		shendu2[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = shendu2[0] + shenduerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 97, 1);
		}
	}
}



void shenduer::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 245)
	{
		UpdateData(FALSE);
		shendu2[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		shendu2[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = shendu2[1] + shenduerf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnBnClickedButton36()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 245)
	{
		UpdateData(FALSE);
		shendu2[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		shendu2[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = shendu2[1] + shenduerf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL shenduer::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num3401", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC19)->SetWindowText(cstr);
	opx.QueryNode_Text("num3402", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_SHENDUERFEN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num3403", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num3404", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num3405", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num3406", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num3407", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num3408", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num3409", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num3410", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num3411", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num3412", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC12)->SetWindowText(cstr);
	opx.QueryNode_Text("num3413", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	if (quanxian)
	{
		GetDlgItem(IDC_SHENDUERFEN_BUTTON)->ShowWindow(true);
	}
	GetDlgItem(IDC_BUTTON62)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON63)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON80)->SetWindowText(zhendong[2]);

	if (kaishida)
	{
		m_kaishi.m_bTransparent = FALSE;
		m_kaishi.m_bDontUseWinXPTheme = TRUE;
		m_kaishi.SetFaceColor(RGB(0, 255, 127));
		m_tingzhi.m_bTransparent = FALSE;
		m_tingzhi.m_bDontUseWinXPTheme = TRUE;
		m_tingzhi.SetFaceColor(RGB(255, 215, 0));
		kaishida = true;
	}
	else
	{
		m_tingzhi.m_bTransparent = FALSE;
		m_tingzhi.m_bDontUseWinXPTheme = TRUE;
		m_tingzhi.SetFaceColor(RGB(0, 255, 127));
		m_kaishi.m_bTransparent = FALSE;
		m_kaishi.m_bDontUseWinXPTheme = TRUE;
		m_kaishi.SetFaceColor(RGB(255, 215, 0));
	}

	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//初始化窗口位置
	CRect rect;
	GetClientRect(&rect);     //取客户区大小    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;


	int nMargin = 8;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT1)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT1)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT4)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT24)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT25)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT26)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT27)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT28)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT29)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT57)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT40)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT41)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT42)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void shenduer::ReSize()
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


void shenduer::OnBnClickedButton55()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 245)
	{
		UpdateData(FALSE);
		shendu2[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		shendu2[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = shendu2[2] + shenduerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 97, 1);
		}
	}
}


void shenduer::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 245)
	{
		UpdateData(FALSE);
		shendu2[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		shendu2[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = shendu2[2] + shenduerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 97, 1);
		}
	}
}


void shenduer::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 245)
	{
		UpdateData(FALSE);
		shendu2[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		shendu2[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = shendu2[3] + shenduerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 245)
	{
		UpdateData(FALSE);
		shendu2[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		shendu2[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = shendu2[3] + shenduerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnBnClickedButton42()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 245)
	{
		UpdateData(FALSE);
		shendu2[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		shendu2[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = shendu2[5] + shenduerf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnBnClickedButton58()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 245)
	{
		UpdateData(FALSE);
		shendu2[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		shendu2[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = shendu2[4] + shenduerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 97, 1);
		}
	}
}


void shenduer::OnBnClickedButton50()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 245)
	{
		UpdateData(FALSE);
		shendu2[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		shendu2[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = shendu2[4] + shenduerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 97, 1);
		}
	}
}


void shenduer::OnBnClickedButton59()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 245)
	{
		UpdateData(FALSE);
		shendu2[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		shendu2[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = shendu2[5] + shenduerf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 245)
	{
		UpdateData(FALSE);
		shendu2[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		shendu2[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = shendu2[6] + shenduerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 97, 1);
		}
	}
}


void shenduer::OnBnClickedButton44()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 245)
	{
		UpdateData(FALSE);
		shendu2[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		shendu2[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = shendu2[6] + shenduerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 97, 1);
		}
	}
}


void shenduer::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 245)
	{
		UpdateData(FALSE);
		shendu2[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		shendu2[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = shendu2[7] + shenduerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnBnClickedButton46()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 245)
	{
		UpdateData(FALSE);
		shendu2[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		shendu2[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = shendu2[7] + shenduerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(shendu2[0]);
	opx.ModifyNode("num2901", str);
	str = opx.numtoString(shendu2[1]);
	opx.ModifyNode("num2902", str);
	str = opx.numtoString(shendu2[2]);
	opx.ModifyNode("num2903", str);
	str = opx.numtoString(shendu2[3]);
	opx.ModifyNode("num2904", str);
	str = opx.numtoString(shendu2[4]);
	opx.ModifyNode("num2905", str);
	str = opx.numtoString(shendu2[5]);
	opx.ModifyNode("num2906", str);
	str = opx.numtoString(shendu2[6]);
	opx.ModifyNode("num2907", str);
	str = opx.numtoString(shendu2[7]);
	opx.ModifyNode("num2908", str);
	str = opx.numtoString(shendu2[8]);
	opx.ModifyNode("num2909", str);
	str = opx.numtoString(shendu2[9]);
	opx.ModifyNode("num2910", str);
	str = opx.numtoString(shendu2[10]);
	opx.ModifyNode("num2911", str);
	str = opx.numtoString(shendu2[11]);
	opx.ModifyNode("num2912", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void shenduer::OnBnClickedButton68()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 245)
	{
		UpdateData(FALSE);
		shendu2[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		shendu2[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = shendu2[8] + shenduerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 97, 1);
		}
	}
}


void shenduer::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 245)
	{
		UpdateData(FALSE);
		shendu2[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		shendu2[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = shendu2[8] + shenduerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 97, 1);
		}
	}
}


void shenduer::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 245)
	{
		UpdateData(FALSE);
		shendu2[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		shendu2[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = shendu2[9] + shenduerf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 245)
	{
		UpdateData(FALSE);
		shendu2[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		shendu2[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = shendu2[9] + shenduerf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 245)
	{
		UpdateData(FALSE);
		shendu2[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		shendu2[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = shendu2[10] + shenduerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 97, 1);
		}
	}
}


void shenduer::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 245)
	{
		UpdateData(FALSE);
		shendu2[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		shendu2[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = shendu2[10] + shenduerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 97, 1);
		}
	}
}


void shenduer::OnBnClickedButton77()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 245)
	{
		UpdateData(FALSE);
		shendu2[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		shendu2[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = shendu2[11] + shenduerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnBnClickedButton79()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 245)
	{
		UpdateData(FALSE);
		shendu2[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		shendu2[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = shendu2[11] + shenduerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 98, 1);
		}
	}
}


void shenduer::OnBnClickedShenduerfenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	SHENERFEN serf;
	serf.DoModal();
}



void shenduer::OnBnClickedButton62()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON62)->GetWindowText(zhendong[0]);
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
		GetDlgItem(IDC_BUTTON62)->SetWindowText(_T("OFF"));
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
		GetDlgItem(IDC_BUTTON62)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON62)->GetWindowText(zhendong[0]);
}


void shenduer::OnBnClickedButton63()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON63)->GetWindowText(zhendong[1]);
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
		GetDlgItem(IDC_BUTTON63)->SetWindowText(_T("OFF"));
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
		GetDlgItem(IDC_BUTTON63)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON63)->GetWindowText(zhendong[1]);
}


void shenduer::OnBnClickedButton80()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON80)->GetWindowText(zhendong[2]);
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
		GetDlgItem(IDC_BUTTON80)->SetWindowText(_T("OFF"));
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
		GetDlgItem(IDC_BUTTON80)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON80)->GetWindowText(zhendong[2]);
}


void shenduer::OnBnClickedKaishida()
{
	// TODO: 在此添加控件通知处理程序代码
	datatestDPU[4] = 1;
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != L"OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 1, 1);
		}
	}
	m_kaishi.m_bTransparent = FALSE;
	m_kaishi.m_bDontUseWinXPTheme = TRUE;
	m_kaishi.SetFaceColor(RGB(0, 255, 127));
	m_tingzhi.m_bTransparent = FALSE;
	m_tingzhi.m_bDontUseWinXPTheme = TRUE;
	m_tingzhi.SetFaceColor(RGB(255, 215, 0));
	kaishida = true;
}


void shenduer::OnBnClickedTingzhida()
{
	// TODO: 在此添加控件通知处理程序代码
	datatestDPU[4] = 0;
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != L"OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 1, 1);
		}
	}
	m_tingzhi.m_bTransparent = FALSE;
	m_tingzhi.m_bDontUseWinXPTheme = TRUE;
	m_tingzhi.SetFaceColor(RGB(0, 255, 127));
	m_kaishi.m_bTransparent = FALSE;
	m_kaishi.m_bDontUseWinXPTheme = TRUE;
	m_kaishi.SetFaceColor(RGB(255, 215, 0));
	kaishida = false;
}
