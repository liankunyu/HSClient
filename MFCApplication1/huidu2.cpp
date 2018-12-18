// huidu2.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "huidu2.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include "HUIERF.h"
#include "Yansemingan.h"
#include "quyuer.h"
#include "quyusan.h"
#include "quyusi.h"
#include "quyuwu.h"
#include "shendu.h"
#include "shenduer.h"
#include "huidu1.h"
// huidu2 对话框

IMPLEMENT_DYNAMIC(huidu2, CDialogEx)

huidu2::huidu2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_HUIDU2_DIALOG, pParent)
	, m_double1(huidu2sheding[0])
	, m_double2(huidu2sheding[1])
	, m_double3(huidu2sheding[2])
	, m_double4(huidu2sheding[3])
	, m_double5(huidu2sheding[4])
	, m_double6(huidu2sheding[5])
	, m_double7(huidu2sheding[6])
	, m_double8(huidu2sheding[7])
	, m_double9(huidu2sheding[8])
	, m_double10(huidu2sheding[9])
	, m_double11(huidu2sheding[10])
	, m_double12(huidu2sheding[11])
{

}

huidu2::~huidu2()
{
}

void huidu2::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_EDIT78, m_double9);
	DDX_Text(pDX, IDC_EDIT79, m_double10);
	DDX_Text(pDX, IDC_EDIT80, m_double11);
	DDX_Text(pDX, IDC_EDIT82, m_double12);
	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA, m_tingzhi);
}


BEGIN_MESSAGE_MAP(huidu2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON10, &huidu2::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON33, &huidu2::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &huidu2::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON36, &huidu2::OnBnClickedButton36)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON55, &huidu2::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON38, &huidu2::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON56, &huidu2::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON40, &huidu2::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON58, &huidu2::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON50, &huidu2::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON59, &huidu2::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON42, &huidu2::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON60, &huidu2::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON44, &huidu2::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON61, &huidu2::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON46, &huidu2::OnBnClickedButton46)
	ON_BN_CLICKED(IDCANCEL, &huidu2::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON64, &huidu2::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON52, &huidu2::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON66, &huidu2::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON54, &huidu2::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON69, &huidu2::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON71, &huidu2::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON72, &huidu2::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON74, &huidu2::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_HUIERFEN_BUTTON, &huidu2::OnBnClickedHuierfenButton)
	ON_BN_CLICKED(IDC_BUTTON62, &huidu2::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &huidu2::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON134, &huidu2::OnBnClickedButton134)
	ON_BN_CLICKED(IDC_KAISHIDA, &huidu2::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &huidu2::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// huidu2 消息处理程序

void huidu2::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		huidu2sheding[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = huidu2sheding[0] + huierf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 99, 1);
		}
	}
}


void huidu2::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		huidu2sheding[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = huidu2sheding[0] + huierf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 99, 1);
		}
	}
}



void huidu2::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		huidu2sheding[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = huidu2sheding[1] + huierf[10+i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 100, 1);
		}
	}
}


void huidu2::OnBnClickedButton36()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		huidu2sheding[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = huidu2sheding[1] + huierf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 100, 1);
		}
	}
}




BOOL huidu2::PreTranslateMessage(MSG* pMsg)
{
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
			huidu2sheding[0] = m_double1;
		}
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = huidu2sheding[0] + huierf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 99, 1);
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
				huidu2sheding[1] = m_double2;
			}
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = huidu2sheding[1] + huierf[10 + i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 100, 1);
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
					huidu2sheding[2] = m_double3;
				}
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i + 1] == L"1")
					{
						datatestDPU[4] = huidu2sheding[2] + huierf[20 + i];
						CMyPublicData::setfunc(33 + 2 * i, 16, 99, 1);
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
						huidu2sheding[3] = m_double4;
					}
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = huidu2sheding[3] + huierf[30 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 100, 1);
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
							huidu2sheding[4] = m_double5;
						}
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i] == L"2")
							{
								datatestDPU[4] = huidu2sheding[4] + huierf[i];
								CMyPublicData::setfunc(32 + 2 * i, 16, 99, 1);
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
								huidu2sheding[5] = m_double6;
							}
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = huidu2sheding[5] + huierf[10 + i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 100, 1);
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
									huidu2sheding[6] = m_double7;
								}
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i + 1] == L"2")
									{
										datatestDPU[4] = huidu2sheding[6] + huierf[20 + i];
										CMyPublicData::setfunc(33 + 2 * i, 16, 99, 1);
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
										huidu2sheding[7] = m_double8;
									}
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = huidu2sheding[7] + huierf[30 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 100, 1);
										}
									}
									return TRUE;
								}
								else
								{
									pEdit = (CEdit*)GetDlgItem(IDC_EDIT78);
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
											huidu2sheding[8] = m_double9;
										}
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i] == L"3")
											{
												datatestDPU[4] = huidu2sheding[8] + huierf[i];
												CMyPublicData::setfunc(32 + 2 * i, 16, 99, 1);
											}
										}
										return TRUE;
									}
									else
									{
										pEdit = (CEdit*)GetDlgItem(IDC_EDIT79);
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
												huidu2sheding[9] = m_double10;
											}
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = huidu2sheding[9] + huierf[10 + i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 100, 1);
												}
											}
											return TRUE;
										}
										else
										{
											pEdit = (CEdit*)GetDlgItem(IDC_EDIT80);
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
													huidu2sheding[10] = m_double11;
												}
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i + 1] == L"3")
													{
														datatestDPU[4] = huidu2sheding[10] + huierf[20 + i];
														CMyPublicData::setfunc(33 + 2 * i, 16, 99, 1);
													}
												}
												return TRUE;
											}
											else
											{
												pEdit = (CEdit*)GetDlgItem(IDC_EDIT82);
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
														huidu2sheding[11] = m_double12;
													}
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = huidu2sheding[11] + huierf[30 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 100, 1);
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
			}
		}
	}
	UpdateData(FALSE);
	return CDialogEx::PreTranslateMessage(pMsg);
}

void huidu2::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL huidu2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num1201", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num1202", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_HUIERFEN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num1203", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num1204", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num1205", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num1206", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num1207", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num1208", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num1209", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num1210", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num1211", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num1212", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC13)->SetWindowText(cstr);
	opx.QueryNode_Text("num1213", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	if (quanxian)
	{
		GetDlgItem(IDC_HUIERFEN_BUTTON)->ShowWindow(true);
	}
	GetDlgItem(IDC_BUTTON62)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON63)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON134)->SetWindowText(zhendong[2]);

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
	GetDlgItem(IDC_EDIT78)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT79)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT80)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT82)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void huidu2::ReSize()
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


void huidu2::OnBnClickedButton55()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		huidu2sheding[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i+1] == L"1")
		{
			datatestDPU[4] = huidu2sheding[2] + huierf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 99, 1);
		}
	}
}


void huidu2::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		huidu2sheding[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = huidu2sheding[2] + huierf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 99, 1);
		}
	}
}



void huidu2::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		huidu2sheding[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = huidu2sheding[3] + huierf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 100, 1);
		}
	}
}


void huidu2::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		huidu2sheding[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = huidu2sheding[3] + huierf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 100, 1);
		}
	}
}



void huidu2::OnBnClickedButton58()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		huidu2sheding[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = huidu2sheding[4] + huierf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 99, 1);
		}
	}
}


void huidu2::OnBnClickedButton50()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		huidu2sheding[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = huidu2sheding[4] + huierf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 99, 1);
		}
	}
}


void huidu2::OnBnClickedButton59()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		huidu2sheding[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = huidu2sheding[5] + huierf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 100, 1);
		}
	}
}


void huidu2::OnBnClickedButton42()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		huidu2sheding[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = huidu2sheding[5] + huierf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 100, 1);
		}
	}
}


void huidu2::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		huidu2sheding[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = huidu2sheding[6] + huierf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 99, 1);
		}
	}
}


void huidu2::OnBnClickedButton44()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		huidu2sheding[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = huidu2sheding[6] + huierf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 99, 1);
		}
	}
}


void huidu2::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		huidu2sheding[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = huidu2sheding[7] + huierf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 100, 1);
		}
	}
}


void huidu2::OnBnClickedButton46()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		huidu2sheding[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = huidu2sheding[7] + huierf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 100, 1);
		}
	}
}


void huidu2::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(huidu2sheding[0]);
	opx.ModifyNode("num2401", str);
	str = opx.numtoString(huidu2sheding[1]);
	opx.ModifyNode("num2402", str);
	str = opx.numtoString(huidu2sheding[2]);
	opx.ModifyNode("num2403", str);
	str = opx.numtoString(huidu2sheding[3]);
	opx.ModifyNode("num2404", str);
	str = opx.numtoString(huidu2sheding[4]);
	opx.ModifyNode("num2405", str);
	str = opx.numtoString(huidu2sheding[5]);
	opx.ModifyNode("num2406", str);
	str = opx.numtoString(huidu2sheding[6]);
	opx.ModifyNode("num2407", str);
	str = opx.numtoString(huidu2sheding[7]);
	opx.ModifyNode("num2408", str);
	str = opx.numtoString(huidu2sheding[8]);
	opx.ModifyNode("num2409", str);
	str = opx.numtoString(huidu2sheding[9]);
	opx.ModifyNode("num2410", str);
	str = opx.numtoString(huidu2sheding[10]);
	opx.ModifyNode("num2411", str);
	str = opx.numtoString(huidu2sheding[11]);
	opx.ModifyNode("num2412", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}




void huidu2::OnBnClickedButton64()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		huidu2sheding[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = huidu2sheding[8] + huierf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 99, 1);
		}
	}
}


void huidu2::OnBnClickedButton52()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		huidu2sheding[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = huidu2sheding[8] + huierf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 99, 1);
		}
	}
}


void huidu2::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		huidu2sheding[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = huidu2sheding[9] + huierf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 100, 1);
		}
	}
}


void huidu2::OnBnClickedButton54()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		huidu2sheding[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = huidu2sheding[9] + huierf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 100, 1);
		}
	}
}


void huidu2::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		huidu2sheding[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = huidu2sheding[10] + huierf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 99, 1);
		}
	}
}


void huidu2::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		huidu2sheding[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = huidu2sheding[10] + huierf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 99, 1);
		}
	}
}


void huidu2::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		huidu2sheding[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = huidu2sheding[11] + huierf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 100, 1);
		}
	}
}


void huidu2::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 245)
	{
		UpdateData(FALSE);
		huidu2sheding[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		huidu2sheding[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = huidu2sheding[11] + huierf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 100, 1);
		}
	}
}


void huidu2::OnBnClickedHuierfenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	HUIERF hef;
	hef.DoModal();
}


void huidu2::OnBnClickedButton62()
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


void huidu2::OnBnClickedButton63()
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


void huidu2::OnBnClickedButton134()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON134)->GetWindowText(zhendong[2]);
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
		GetDlgItem(IDC_BUTTON134)->SetWindowText(_T("OFF"));
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
		GetDlgItem(IDC_BUTTON134)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON134)->GetWindowText(zhendong[2]);
}


void huidu2::OnBnClickedKaishida()
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


void huidu2::OnBnClickedTingzhida()
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
