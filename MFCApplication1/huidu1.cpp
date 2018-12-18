// huidu1.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "huidu1.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include "HUIFEN.h"
#include "Yansemingan.h"
#include "quyuer.h"
#include "quyusan.h"
#include "quyusi.h"
#include "quyuwu.h"
#include "shendu.h"
#include "shenduer.h"
#include "huidu2.h"
// huidu1 对话框

IMPLEMENT_DYNAMIC(huidu1, CDialogEx)

huidu1::huidu1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_HUIDU1_DIALOG, pParent)
	, m_double1(huidu1sheding[0])
	, m_double2(huidu1sheding[1])
	, m_double3(huidu1sheding[2])
	, m_double4(huidu1sheding[3])
	, m_double5(huidu1sheding[4])
	, m_double6(huidu1sheding[5])
	, m_double7(huidu1sheding[6])
	, m_double8(huidu1sheding[7])
	, m_double9(huidu1sheding[8])
	, m_double10(huidu1sheding[9])
	, m_double11(huidu1sheding[10])
	, m_double12(huidu1sheding[11])
{

}

huidu1::~huidu1()
{
}

void huidu1::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(huidu1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON10, &huidu1::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON33, &huidu1::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &huidu1::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON36, &huidu1::OnBnClickedButton36)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON55, &huidu1::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON38, &huidu1::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON56, &huidu1::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON40, &huidu1::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON58, &huidu1::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON50, &huidu1::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON59, &huidu1::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON42, &huidu1::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON60, &huidu1::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON44, &huidu1::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON61, &huidu1::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON46, &huidu1::OnBnClickedButton46)
	ON_BN_CLICKED(IDCANCEL, &huidu1::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON64, &huidu1::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON52, &huidu1::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON66, &huidu1::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON54, &huidu1::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON69, &huidu1::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON71, &huidu1::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON72, &huidu1::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON74, &huidu1::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_HUIFEN_BUTTON, &huidu1::OnBnClickedHuifenButton)
	ON_BN_CLICKED(IDC_BUTTON62, &huidu1::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &huidu1::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON134, &huidu1::OnBnClickedButton134)
	ON_BN_CLICKED(IDC_KAISHIDA, &huidu1::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &huidu1::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// huidu1 消息处理程序


void huidu1::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		huidu1sheding[0] = m_double1;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = huidu1sheding[0] + huif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 87, 1);
		}
	}
}


void huidu1::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[0] = m_double1;

	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		huidu1sheding[0] = m_double1;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = huidu1sheding[0] + huif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 87, 1);
		}
	}
}





void huidu1::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		huidu1sheding[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = huidu1sheding[1] + huif[10+i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 88, 1);
		}
	}
}


void huidu1::OnBnClickedButton36()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		huidu1sheding[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = huidu1sheding[1] + huif[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 88, 1);
		}
	}
}




BOOL huidu1::PreTranslateMessage(MSG* pMsg)
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
			huidu1sheding[0] = m_double1;
		}
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = huidu1sheding[0] + huif[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 87, 1);
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
				huidu1sheding[1] = m_double2;
			}
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = huidu1sheding[1] + huif[10 + i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 88, 1);
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
					huidu1sheding[2] = m_double3;
				}
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i + 1] == L"1")
					{
						datatestDPU[4] = huidu1sheding[2] + huif[20 + i];
						CMyPublicData::setfunc(33 + 2 * i, 16, 87, 1);
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
						huidu1sheding[3] = m_double4;
					}
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = huidu1sheding[3] + huif[30 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 88, 1);
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
							huidu1sheding[4] = m_double5;
						}
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i] == L"2")
							{
								datatestDPU[4] = huidu1sheding[4] + huif[i];
								CMyPublicData::setfunc(32 + 2 * i, 16, 87, 1);
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
								huidu1sheding[5] = m_double6;
							}
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = huidu1sheding[5] + huif[10 + i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 88, 1);
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
									huidu1sheding[6] = m_double7;
								}
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i + 1] == L"2")
									{
										datatestDPU[4] = huidu1sheding[6] + huif[20 + i];
										CMyPublicData::setfunc(33 + 2 * i, 16, 87, 1);
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
										huidu1sheding[7] = m_double8;
									}
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = huidu1sheding[7] + huif[30 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 88, 1);
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
											m_double9= _wtof(dlg.ValueShow);
											UpdateData(FALSE);
											huidu1sheding[8] = m_double9;
										}
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i] == L"3")
											{
												datatestDPU[4] = huidu1sheding[8] + huif[i];
												CMyPublicData::setfunc(32 + 2 * i, 16, 87, 1);
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
												huidu1sheding[9] = m_double10;
											}
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = huidu1sheding[9] + huif[10 + i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 88, 1);
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
													huidu1sheding[10] = m_double11;
												}
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i + 1] == L"3")
													{
														datatestDPU[4] = huidu1sheding[10] + huif[20 + i];
														CMyPublicData::setfunc(33 + 2 * i, 16, 87, 1);
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
														huidu1sheding[11] = m_double12;
													}
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = huidu1sheding[11] + huif[30 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 88, 1);
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

void huidu1::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL huidu1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num1101", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC20)->SetWindowText(cstr);
	opx.QueryNode_Text("num1102", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_HUIFEN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num1103", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num1104", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num1105", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num1106", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num1107", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num1108", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num1109", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num1110", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num1111", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num1112", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC13)->SetWindowText(cstr);
	opx.QueryNode_Text("num1113", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	if (quanxian)
	{
		GetDlgItem(IDC_HUIFEN_BUTTON)->ShowWindow(true);
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

void huidu1::ReSize()
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


void huidu1::OnBnClickedButton55()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		huidu1sheding[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i+1] == L"1")
		{
			datatestDPU[4] = huidu1sheding[2] + huif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 87, 1);
		}
	}
}


void huidu1::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		huidu1sheding[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i+1] == L"1")
		{
			datatestDPU[4] = huidu1sheding[2] + huif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 87, 1);
		}
	}
}





void huidu1::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		huidu1sheding[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = huidu1sheding[3] + huif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 88, 1);
		}
	}
}


void huidu1::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		huidu1sheding[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = huidu1sheding[3] + huif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 88, 1);
		}
	}
}




void huidu1::OnBnClickedButton58()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		huidu1sheding[4] = m_double5;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = huidu1sheding[4] + huif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 87, 1);
		}
	}
}


void huidu1::OnBnClickedButton50()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		huidu1sheding[4] = m_double5;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = huidu1sheding[4] + huif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 87, 1);
		}
	}
}


void huidu1::OnBnClickedButton59()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		huidu1sheding[5] = m_double6;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = huidu1sheding[5] + huif[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 88, 1);
		}
	}
}


void huidu1::OnBnClickedButton42()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		huidu1sheding[5] = m_double6;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = huidu1sheding[5] + huif[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 88, 1);
		}
	}
}


void huidu1::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		huidu1sheding[6] = m_double7;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = huidu1sheding[6] + huif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 87, 1);
		}
	}
}


void huidu1::OnBnClickedButton44()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		huidu1sheding[6] = m_double7;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = huidu1sheding[6] + huif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 87, 1);
		}
	}
}


void huidu1::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		huidu1sheding[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = huidu1sheding[7] + huif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 88, 1);
		}
	}
}


void huidu1::OnBnClickedButton46()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		huidu1sheding[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = huidu1sheding[7] + huif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 88, 1);
		}
	}
}


void huidu1::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(huidu1sheding[0]);
	opx.ModifyNode("num2301", str);
	str = opx.numtoString(huidu1sheding[1]);
	opx.ModifyNode("num2302", str);
	str = opx.numtoString(huidu1sheding[2]);
	opx.ModifyNode("num2303", str);
	str = opx.numtoString(huidu1sheding[3]);
	opx.ModifyNode("num2304", str);
	str = opx.numtoString(huidu1sheding[4]);
	opx.ModifyNode("num2305", str);
	str = opx.numtoString(huidu1sheding[5]);
	opx.ModifyNode("num2306", str);
	str = opx.numtoString(huidu1sheding[6]);
	opx.ModifyNode("num2307", str);
	str = opx.numtoString(huidu1sheding[7]);
	opx.ModifyNode("num2308", str);
	str = opx.numtoString(huidu1sheding[8]);
	opx.ModifyNode("num2309", str);
	str = opx.numtoString(huidu1sheding[9]);
	opx.ModifyNode("num2310", str);
	str = opx.numtoString(huidu1sheding[10]);
	opx.ModifyNode("num2311", str);
	str = opx.numtoString(huidu1sheding[11]);
	opx.ModifyNode("num2312", str);

	opx.SaveFile();
	CDialogEx::OnCancel();
}





void huidu1::OnBnClickedButton64()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		huidu1sheding[8] = m_double9;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = huidu1sheding[8] + huif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 87, 1);
		}
	}
}


void huidu1::OnBnClickedButton52()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		huidu1sheding[8] = m_double9;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = huidu1sheding[8] + huif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 87, 1);
		}
	}
}


void huidu1::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		huidu1sheding[9] = m_double10;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = huidu1sheding[9] + huif[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 88, 1);
		}
	}
}


void huidu1::OnBnClickedButton54()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		huidu1sheding[9] = m_double10;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = huidu1sheding[9] + huif[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 88, 1);
		}
	}
}


void huidu1::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		huidu1sheding[10] = m_double11;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = huidu1sheding[10] + huif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 87, 1);
		}
	}
}


void huidu1::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		huidu1sheding[10] = m_double11;

	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = huidu1sheding[10] + huif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 87, 1);
		}
	}
}


void huidu1::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		huidu1sheding[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = huidu1sheding[11] + huif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 88, 1);
		}
	}
}


void huidu1::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 245)
	{
		UpdateData(FALSE);
		huidu1sheding[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		huidu1sheding[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = huidu1sheding[11] + huif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 88, 1);
		}
	}
}




void huidu1::OnBnClickedHuifenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	HUIFEN hf;
	hf.DoModal();
}


void huidu1::OnBnClickedButton62()
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


void huidu1::OnBnClickedButton63()
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


void huidu1::OnBnClickedButton134()
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


void huidu1::OnBnClickedKaishida()
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


void huidu1::OnBnClickedTingzhida()
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
