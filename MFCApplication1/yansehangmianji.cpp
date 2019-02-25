// yansehangmianji.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "yansehangmianji.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"

// yansehangmianji 对话框

IMPLEMENT_DYNAMIC(yansehangmianji, CDialogEx)

yansehangmianji::yansehangmianji(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_YANSEHANGMIANJI_DIALOG, pParent)
	, m_double1(yansehangmianjisd[0])
	, m_double2(yansehangmianjisd[1])
	, m_double3(yansehangmianjisd[2])
	, m_double4(yansehangmianjisd[3])
	, m_double5(yansehangmianjisd[4])
	, m_double6(yansehangmianjisd[5])
	, m_double7(yansehangmianjisd[6])
	, m_double8(yansehangmianjisd[7])
	, m_double9(yansehangmianjisd[8])
	, m_double10(yansehangmianjisd[9])
	, m_double11(yansehangmianjisd[10])
	, m_double12(yansehangmianjisd[11])
	, m_double13(yansehangmianjisd[12])
	, m_double14(yansehangmianjisd[13])
	, m_double15(yansehangmianjisd[14])
	, m_double16(yansehangmianjisd[15])
	, m_double17(yansehangmianjisd[16])
	, m_double18(yansehangmianjisd[17])
	, m_double19(yansehangmianjisd[18])
	, m_double20(yansehangmianjisd[19])
{

}

yansehangmianji::~yansehangmianji()
{
}

void yansehangmianji::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT2, m_double2);
	DDX_Text(pDX, IDC_EDIT18, m_double3);
	DDX_Text(pDX, IDC_EDIT30, m_double4);
	DDX_Text(pDX, IDC_EDIT31, m_double5);
	DDX_Text(pDX, IDC_EDIT34, m_double6);
	DDX_Text(pDX, IDC_EDIT37, m_double7);
	DDX_Text(pDX, IDC_EDIT47, m_double8);
	DDX_Text(pDX, IDC_EDIT60, m_double9);
	DDX_Text(pDX, IDC_EDIT61, m_double10);
	DDX_Text(pDX, IDC_EDIT63, m_double11);
	DDX_Text(pDX, IDC_EDIT64, m_double12);
	DDX_Text(pDX, IDC_EDIT65, m_double13);
	DDX_Text(pDX, IDC_EDIT66, m_double14);
	DDX_Text(pDX, IDC_EDIT67, m_double15);
	DDX_Text(pDX, IDC_EDIT68, m_double16);
	DDX_Text(pDX, IDC_EDIT69, m_double17);
	DDX_Text(pDX, IDC_EDIT70, m_double18);
	DDX_Text(pDX, IDC_EDIT71, m_double19);
	DDX_Text(pDX, IDC_EDIT72, m_double20);
}


BEGIN_MESSAGE_MAP(yansehangmianji, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &yansehangmianji::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &yansehangmianji::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &yansehangmianji::OnBnClickedButton3)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON13, &yansehangmianji::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &yansehangmianji::OnBnClickedButton14)
	ON_BN_CLICKED(IDCANCEL, &yansehangmianji::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON99, &yansehangmianji::OnBnClickedButton99)
	ON_BN_CLICKED(IDC_BUTTON56, &yansehangmianji::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON4, &yansehangmianji::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &yansehangmianji::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &yansehangmianji::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &yansehangmianji::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &yansehangmianji::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &yansehangmianji::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &yansehangmianji::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON32, &yansehangmianji::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON37, &yansehangmianji::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON39, &yansehangmianji::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON58, &yansehangmianji::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON49, &yansehangmianji::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON59, &yansehangmianji::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON83, &yansehangmianji::OnBnClickedButton83)
	ON_BN_CLICKED(IDC_BUTTON60, &yansehangmianji::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON120, &yansehangmianji::OnBnClickedButton120)
	ON_BN_CLICKED(IDC_BUTTON61, &yansehangmianji::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON128, &yansehangmianji::OnBnClickedButton128)
	ON_BN_CLICKED(IDC_BUTTON64, &yansehangmianji::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON51, &yansehangmianji::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON66, &yansehangmianji::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON53, &yansehangmianji::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON69, &yansehangmianji::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON70, &yansehangmianji::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON72, &yansehangmianji::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON73, &yansehangmianji::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON75, &yansehangmianji::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON76, &yansehangmianji::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON78, &yansehangmianji::OnBnClickedButton78)
	ON_BN_CLICKED(IDC_BUTTON79, &yansehangmianji::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON81, &yansehangmianji::OnBnClickedButton81)
	ON_BN_CLICKED(IDC_BUTTON82, &yansehangmianji::OnBnClickedButton82)
	ON_BN_CLICKED(IDC_BUTTON94, &yansehangmianji::OnBnClickedButton94)
	ON_BN_CLICKED(IDC_BUTTON86, &yansehangmianji::OnBnClickedButton86)
	ON_BN_CLICKED(IDC_BUTTON88, &yansehangmianji::OnBnClickedButton88)
	ON_BN_CLICKED(IDC_BUTTON129, &yansehangmianji::OnBnClickedButton129)
	ON_BN_CLICKED(IDC_BUTTON130, &yansehangmianji::OnBnClickedButton130)
END_MESSAGE_MAP()


// yansehangmianji 消息处理程序


void yansehangmianji::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		yansehangmianjisd[0] = m_double1;
	}
	if (modsd[0] != L"OFF")
	{
		datatestDPU[4] = m_double1;
		CMyPublicData::setfunc(32, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		yansehangmianjisd[0] = m_double1;
	}
	if (modsd[0] != L"OFF")
	{
		datatestDPU[4] = m_double1;
		CMyPublicData::setfunc(32, 16, 20, 1);
	}
}


BOOL yansehangmianji::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double1 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			yansehangmianjisd[0] = m_double1;
		}
		if (modsd[0] != L"OFF")
		{
			datatestDPU[4] = yansehangmianjisd[0];
			CMyPublicData::setfunc(32, 16, 20, 1);
		}
		return TRUE;
	}
	else
	{
		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT2);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		{
			CInputDlg dlg;
			dlg.ValueMax = 255;
			dlg.ValueMin = 0;
			if (dlg.DoModal() == IDOK)
			{
				UpdateData(TRUE);
				m_double2 = _wtof(dlg.ValueShow);
				UpdateData(FALSE);
				yansehangmianjisd[1] = m_double2;
			}
			if (modsd[2] != L"OFF")
			{
				datatestDPU[4] = yansehangmianjisd[1];
				CMyPublicData::setfunc(34, 16, 20, 1);
			}
			return TRUE;
		}
		else
		{
			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT18);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				CInputDlg dlg;
				dlg.ValueMax = 255;
				dlg.ValueMin = 0;
				if (dlg.DoModal() == IDOK)
				{
					UpdateData(TRUE);
					m_double3 = _wtof(dlg.ValueShow);
					UpdateData(FALSE);
					yansehangmianjisd[2] = m_double3;
				}
				if (modsd[4] != L"OFF")
				{
					datatestDPU[4] = yansehangmianjisd[2];
					CMyPublicData::setfunc(36, 16, 20, 1);
				}
				return TRUE;
			}
			else
			{
				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT30);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					CInputDlg dlg;
					dlg.ValueMax = 255;
					dlg.ValueMin = 0;
					if (dlg.DoModal() == IDOK)
					{
						UpdateData(TRUE);
						m_double4 = _wtof(dlg.ValueShow);
						UpdateData(FALSE);
						yansehangmianjisd[3] = m_double4;
					}
					if (modsd[6] != L"OFF")
					{
						datatestDPU[4] = yansehangmianjisd[3];
						CMyPublicData::setfunc(38, 16, 20, 1);
					}
					return TRUE;
				}
				else
				{
					CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT31);
					ASSERT(pEdit && pEdit->GetSafeHwnd());
					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
					{
						CInputDlg dlg;
						dlg.ValueMax = 255;
						dlg.ValueMin = 0;
						if (dlg.DoModal() == IDOK)
						{
							UpdateData(TRUE);
							m_double5 = _wtof(dlg.ValueShow);
							UpdateData(FALSE);
							yansehangmianjisd[4] = m_double5;
						}
						if (modsd[8] != L"OFF")
						{
							datatestDPU[4] = yansehangmianjisd[4];
							CMyPublicData::setfunc(40, 16, 20, 1);
						}
						return TRUE;
					}
					else
					{
						CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT34);
						ASSERT(pEdit && pEdit->GetSafeHwnd());
						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
						{
							CInputDlg dlg;
							dlg.ValueMax = 255;
							dlg.ValueMin = 0;
							if (dlg.DoModal() == IDOK)
							{
								UpdateData(TRUE);
								m_double6 = _wtof(dlg.ValueShow);
								UpdateData(FALSE);
								yansehangmianjisd[5] = m_double6;
							}
							if (modsd[10] != L"OFF")
							{
								datatestDPU[4] = yansehangmianjisd[5];
								CMyPublicData::setfunc(42, 16, 20, 1);
							}
							return TRUE;
						}
						else
						{
							CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT37);
							ASSERT(pEdit && pEdit->GetSafeHwnd());
							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
							{
								CInputDlg dlg;
								dlg.ValueMax = 255;
								dlg.ValueMin = 0;
								if (dlg.DoModal() == IDOK)
								{
									UpdateData(TRUE);
									m_double7 = _wtof(dlg.ValueShow);
									UpdateData(FALSE);
									yansehangmianjisd[6] = m_double7;
								}
								if (modsd[12] != L"OFF")
								{
									datatestDPU[4] = yansehangmianjisd[6];
									CMyPublicData::setfunc(44, 16, 20, 1);
								}
								return TRUE;
							}
							else
							{
								CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT47);
								ASSERT(pEdit && pEdit->GetSafeHwnd());
								if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
								{
									CInputDlg dlg;
									dlg.ValueMax = 255;
									dlg.ValueMin = 0;
									if (dlg.DoModal() == IDOK)
									{
										UpdateData(TRUE);
										m_double8 = _wtof(dlg.ValueShow);
										UpdateData(FALSE);
										yansehangmianjisd[7] = m_double8;
									}
									if (modsd[14] != L"OFF")
									{
										datatestDPU[4] = yansehangmianjisd[7];
										CMyPublicData::setfunc(46, 16, 20, 1);
									}
									return TRUE;
								}
								else
								{
									CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT60);
									ASSERT(pEdit && pEdit->GetSafeHwnd());
									if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
									{
										CInputDlg dlg;
										dlg.ValueMax = 255;
										dlg.ValueMin = 0;
										if (dlg.DoModal() == IDOK)
										{
											UpdateData(TRUE);
											m_double9 = _wtof(dlg.ValueShow);
											UpdateData(FALSE);
											yansehangmianjisd[8] = m_double9;
										}
										if (modsd[16] != L"OFF")
										{
											datatestDPU[4] = yansehangmianjisd[8];
											CMyPublicData::setfunc(48, 16, 20, 1);
										}
										return TRUE;
									}
									else
									{
										CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT61);
										ASSERT(pEdit && pEdit->GetSafeHwnd());
										if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
										{
											CInputDlg dlg;
											dlg.ValueMax = 255;
											dlg.ValueMin = 0;
											if (dlg.DoModal() == IDOK)
											{
												UpdateData(TRUE);
												m_double10 = _wtof(dlg.ValueShow);
												UpdateData(FALSE);
												yansehangmianjisd[9] = m_double10;
											}
											if (modsd[18] != L"OFF")
											{
												datatestDPU[4] = yansehangmianjisd[9];
												CMyPublicData::setfunc(50, 16, 20, 1);
											}
											return TRUE;
										}
										else
										{
											CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT63);
											ASSERT(pEdit && pEdit->GetSafeHwnd());
											if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
											{
												CInputDlg dlg;
												dlg.ValueMax = 255;
												dlg.ValueMin = 0;
												if (dlg.DoModal() == IDOK)
												{
													UpdateData(TRUE);
													m_double11 = _wtof(dlg.ValueShow);
													UpdateData(FALSE);
													yansehangmianjisd[10] = m_double11;
												}
												if (modsd[1] != L"OFF")
												{
													datatestDPU[4] = yansehangmianjisd[10];
													CMyPublicData::setfunc(33, 16, 20, 1);
												}
												return TRUE;
											}
											else
											{
												CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT64);
												ASSERT(pEdit && pEdit->GetSafeHwnd());
												if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
												{
													CInputDlg dlg;
													dlg.ValueMax = 255;
													dlg.ValueMin = 0;
													if (dlg.DoModal() == IDOK)
													{
														UpdateData(TRUE);
														m_double12= _wtof(dlg.ValueShow);
														UpdateData(FALSE);
														yansehangmianjisd[11] = m_double12;
													}
													if (modsd[3] != L"OFF")
													{
														datatestDPU[4] = yansehangmianjisd[11];
														CMyPublicData::setfunc(35, 16, 20, 1);
													}
													return TRUE;
												}
												else
												{
													CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT65);
													ASSERT(pEdit && pEdit->GetSafeHwnd());
													if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
													{
														CInputDlg dlg;
														dlg.ValueMax = 255;
														dlg.ValueMin = 0;
														if (dlg.DoModal() == IDOK)
														{
															UpdateData(TRUE);
															m_double13 = _wtof(dlg.ValueShow);
															UpdateData(FALSE);
															yansehangmianjisd[12] = m_double13;
														}
														if (modsd[5] != L"OFF")
														{
															datatestDPU[4] = yansehangmianjisd[12];
															CMyPublicData::setfunc(37, 16, 20, 1);
														}
														return TRUE;
													}
													else
													{
														CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT66);
														ASSERT(pEdit && pEdit->GetSafeHwnd());
														if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
														{
															CInputDlg dlg;
															dlg.ValueMax = 255;
															dlg.ValueMin = 0;
															if (dlg.DoModal() == IDOK)
															{
																UpdateData(TRUE);
																m_double14 = _wtof(dlg.ValueShow);
																UpdateData(FALSE);
																yansehangmianjisd[13] = m_double14;
															}
															if (modsd[7] != L"OFF")
															{
																datatestDPU[4] = yansehangmianjisd[13];
																CMyPublicData::setfunc(39, 16, 20, 1);
															}
															return TRUE;
														}
														else
														{
															CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT67);
															ASSERT(pEdit && pEdit->GetSafeHwnd());
															if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
															{
																CInputDlg dlg;
																dlg.ValueMax = 255;
																dlg.ValueMin = 0;
																if (dlg.DoModal() == IDOK)
																{
																	UpdateData(TRUE);
																	m_double15 = _wtof(dlg.ValueShow);
																	UpdateData(FALSE);
																	yansehangmianjisd[14] = m_double15;
																}
																if (modsd[9] != L"OFF")
																{
																	datatestDPU[4] = yansehangmianjisd[14];
																	CMyPublicData::setfunc(41, 16, 20, 1);
																}
																return TRUE;
															}
															else
															{
																CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT68);
																ASSERT(pEdit && pEdit->GetSafeHwnd());
																if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																{
																	CInputDlg dlg;
																	dlg.ValueMax = 255;
																	dlg.ValueMin = 0;
																	if (dlg.DoModal() == IDOK)
																	{
																		UpdateData(TRUE);
																		m_double16 = _wtof(dlg.ValueShow);
																		UpdateData(FALSE);
																		yansehangmianjisd[15] = m_double16;
																	}
																	if (modsd[11] != L"OFF")
																	{
																		datatestDPU[4] = yansehangmianjisd[15];
																		CMyPublicData::setfunc(43, 16, 20, 1);
																	}
																	return TRUE;
																}
																else
																{
																	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT69);
																	ASSERT(pEdit && pEdit->GetSafeHwnd());
																	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																	{
																		CInputDlg dlg;
																		dlg.ValueMax = 255;
																		dlg.ValueMin = 0;
																		if (dlg.DoModal() == IDOK)
																		{
																			UpdateData(TRUE);
																			m_double17 = _wtof(dlg.ValueShow);
																			UpdateData(FALSE);
																			yansehangmianjisd[16] = m_double17;
																		}
																		if (modsd[13] != L"OFF")
																		{
																			datatestDPU[4] = yansehangmianjisd[16];
																			CMyPublicData::setfunc(45, 16, 20, 1);
																		}
																		return TRUE;
																	}
																	else
																	{
																		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT70);
																		ASSERT(pEdit && pEdit->GetSafeHwnd());
																		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																		{
																			CInputDlg dlg;
																			dlg.ValueMax = 255;
																			dlg.ValueMin = 0;
																			if (dlg.DoModal() == IDOK)
																			{
																				UpdateData(TRUE);
																				m_double18 = _wtof(dlg.ValueShow);
																				UpdateData(FALSE);
																				yansehangmianjisd[17] = m_double18;
																			}
																			if (modsd[15] != L"OFF")
																			{
																				datatestDPU[4] = yansehangmianjisd[17];
																				CMyPublicData::setfunc(47, 16, 20, 1);
																			}
																			return TRUE;
																		}
																		else
																		{
																			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT71);
																			ASSERT(pEdit && pEdit->GetSafeHwnd());
																			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																			{
																				CInputDlg dlg;
																				dlg.ValueMax = 255;
																				dlg.ValueMin = 0;
																				if (dlg.DoModal() == IDOK)
																				{
																					UpdateData(TRUE);
																					m_double19 = _wtof(dlg.ValueShow);
																					UpdateData(FALSE);
																					yansehangmianjisd[18] = m_double19;
																				}
																				if (modsd[17] != L"OFF")
																				{
																					datatestDPU[4] = yansehangmianjisd[18];
																					CMyPublicData::setfunc(49, 16, 20, 1);
																				}
																				return TRUE;
																			}
																			else
																			{
																				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT72);
																				ASSERT(pEdit && pEdit->GetSafeHwnd());
																				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																				{
																					CInputDlg dlg;
																					dlg.ValueMax = 255;
																					dlg.ValueMin = 0;
																					if (dlg.DoModal() == IDOK)
																					{
																						UpdateData(TRUE);
																						m_double20 = _wtof(dlg.ValueShow);
																						UpdateData(FALSE);
																						yansehangmianjisd[19] = m_double20;
																					}
																					if (modsd[19] != L"OFF")
																					{
																						datatestDPU[4] = yansehangmianjisd[12];
																						CMyPublicData::setfunc(51, 16, 20, 1);
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
	return CDialogEx::PreTranslateMessage(pMsg);
}


void yansehangmianji::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void yansehangmianji::ReSize()
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

BOOL yansehangmianji::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num4001", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC33)->SetWindowText(cstr);
	opx.QueryNode_Text("num4002", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);

	opx.QueryNode_Text("num4003", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num4004", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
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
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT30)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT31)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT37)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT47)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT60)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT61)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT63)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT64)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT65)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT66)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT67)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT68)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT69)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT70)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT71)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT72)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void yansehangmianji::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		yansehangmianjisd[1] = m_double2;
	}
	if (modsd[2] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[1];
		CMyPublicData::setfunc(34, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		yansehangmianjisd[10] = m_double11;
	}
	if (modsd[1] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[10];
		CMyPublicData::setfunc(33, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		yansehangmianjisd[10] = m_double11;
	}
	if (modsd[1] != L"OFF")
	{
		datatestDPU[4] = m_double11;
		CMyPublicData::setfunc(33, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(yansehangmianjisd[0]);
	opx.ModifyNode("num3201", str);
	str = opx.numtoString(yansehangmianjisd[1]);
	opx.ModifyNode("num3202", str);
	str = opx.numtoString(yansehangmianjisd[2]);
	opx.ModifyNode("num3203", str);
	str = opx.numtoString(yansehangmianjisd[3]);
	opx.ModifyNode("num3204", str);
	str = opx.numtoString(yansehangmianjisd[4]);
	opx.ModifyNode("num3205", str);
	str = opx.numtoString(yansehangmianjisd[5]);
	opx.ModifyNode("num3206", str);
	str = opx.numtoString(yansehangmianjisd[6]);
	opx.ModifyNode("num3207", str);
	str = opx.numtoString(yansehangmianjisd[7]);
	opx.ModifyNode("num3208", str);
	str = opx.numtoString(yansehangmianjisd[8]);
	opx.ModifyNode("num3209", str);
	str = opx.numtoString(yansehangmianjisd[9]);
	opx.ModifyNode("num3210", str);
	str = opx.numtoString(yansehangmianjisd[10]);
	opx.ModifyNode("num3211", str);
	str = opx.numtoString(yansehangmianjisd[11]);
	opx.ModifyNode("num3212", str);
	str = opx.numtoString(yansehangmianjisd[12]);
	opx.ModifyNode("num3213", str);
	str = opx.numtoString(yansehangmianjisd[13]);
	opx.ModifyNode("num3214", str);
	str = opx.numtoString(yansehangmianjisd[14]);
	opx.ModifyNode("num3215", str);
	str = opx.numtoString(yansehangmianjisd[15]);
	opx.ModifyNode("num3216", str);
	str = opx.numtoString(yansehangmianjisd[16]);
	opx.ModifyNode("num3217", str);
	str = opx.numtoString(yansehangmianjisd[17]);
	opx.ModifyNode("num3218", str);
	str = opx.numtoString(yansehangmianjisd[18]);
	opx.ModifyNode("num3219", str);
	str = opx.numtoString(yansehangmianjisd[19]);
	opx.ModifyNode("num3220", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void yansehangmianji::OnBnClickedButton99()
{
	// TODO: 在此添加控件通知处理程序代码
}


void yansehangmianji::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		yansehangmianjisd[6] = m_double7;
	}
	if (modsd[12] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[6];
		CMyPublicData::setfunc(44, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		yansehangmianjisd[1] = m_double2;
	}
	if (modsd[2] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[1];
		CMyPublicData::setfunc(34, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		yansehangmianjisd[2] = m_double3;
	}
	if (modsd[4] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[2];
		CMyPublicData::setfunc(36, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		yansehangmianjisd[2] = m_double3;
	}
	if (modsd[4] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[2];
		CMyPublicData::setfunc(36, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		yansehangmianjisd[3] = m_double4;
	}
	if (modsd[6] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[3];
		CMyPublicData::setfunc(38, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		yansehangmianjisd[3] = m_double4;
	}
	if (modsd[6] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[3];
		CMyPublicData::setfunc(38, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		yansehangmianjisd[4] = m_double5;
	}
	if (modsd[8] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[4];
		CMyPublicData::setfunc(40, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		yansehangmianjisd[4] = m_double5;
	}
	if (modsd[8] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[4];
		CMyPublicData::setfunc(40, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton32()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		yansehangmianjisd[5] = m_double6;
	}
	if (modsd[10] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[5];
		CMyPublicData::setfunc(42, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton37()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		yansehangmianjisd[5] = m_double6;
	}
	if (modsd[10] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[5];
		CMyPublicData::setfunc(42, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton39()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		yansehangmianjisd[6] = m_double7;
	}
	if (modsd[12] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[6];
		CMyPublicData::setfunc(44, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton58()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		yansehangmianjisd[7] = m_double8;
	}
	if (modsd[14] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[7];
		CMyPublicData::setfunc(46, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton49()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		yansehangmianjisd[7] = m_double8;
	}
	if (modsd[14] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[7];
		CMyPublicData::setfunc(46, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton59()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		yansehangmianjisd[8] = m_double9;
	}
	if (modsd[16] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[8];
		CMyPublicData::setfunc(48, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton83()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		yansehangmianjisd[8] = m_double9;
	}
	if (modsd[16] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[8];
		CMyPublicData::setfunc(48, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		yansehangmianjisd[9] = m_double10;
	}
	if (modsd[18] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[9];
		CMyPublicData::setfunc(50, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton120()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		yansehangmianjisd[9] = m_double10;
	}
	if (modsd[18] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[9];
		CMyPublicData::setfunc(50, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
}


void yansehangmianji::OnBnClickedButton128()
{
	// TODO: 在此添加控件通知处理程序代码
}


void yansehangmianji::OnBnClickedButton64()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		yansehangmianjisd[11] = m_double12;
	}
	if (modsd[3] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[11];
		CMyPublicData::setfunc(35, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton51()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		yansehangmianjisd[11] = m_double12;
	}
	if (modsd[3] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[11];
		CMyPublicData::setfunc(35, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13++;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[12] = m_double13;
	}
	else
	{
		m_double13--;
		UpdateData(FALSE);
		yansehangmianjisd[12] = m_double13;
	}
	if (modsd[5] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[12];
		CMyPublicData::setfunc(37, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton53()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13--;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[12] = m_double13;
	}
	else
	{
		m_double13++;
		UpdateData(FALSE);
		yansehangmianjisd[12] = m_double13;
	}
	if (modsd[5] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[12];
		CMyPublicData::setfunc(37, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14++;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[13] = m_double14;
	}
	else
	{
		m_double14--;
		UpdateData(FALSE);
		yansehangmianjisd[13] = m_double14;
	}
	if (modsd[7] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[13];
		CMyPublicData::setfunc(39, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14--;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[13] = m_double14;
	}
	else
	{
		m_double14++;
		UpdateData(FALSE);
		yansehangmianjisd[13] = m_double14;
	}
	if (modsd[7] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[13];
		CMyPublicData::setfunc(39, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15++;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[14] = m_double15;
	}
	else
	{
		m_double15--;
		UpdateData(FALSE);
		yansehangmianjisd[14] = m_double15;
	}
	if (modsd[9] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[14];
		CMyPublicData::setfunc(41, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15--;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[14] = m_double15;
	}
	else
	{
		m_double15++;
		UpdateData(FALSE);
		yansehangmianjisd[14] = m_double15;
	}
	if (modsd[9] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[14];
		CMyPublicData::setfunc(41, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton75()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16++;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[15] = m_double16;
	}
	else
	{
		m_double16--;
		UpdateData(FALSE);
		yansehangmianjisd[15] = m_double16;
	}
	if (modsd[11] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[15];
		CMyPublicData::setfunc(43, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16--;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[15] = m_double16;
	}
	else
	{
		m_double16++;
		UpdateData(FALSE);
		yansehangmianjisd[15] = m_double16;
	}
	if (modsd[11] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[15];
		CMyPublicData::setfunc(43, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton78()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17++;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[16] = m_double17;
	}
	else
	{
		m_double17--;
		UpdateData(FALSE);
		yansehangmianjisd[16] = m_double17;
	}
	if (modsd[13] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[16];
		CMyPublicData::setfunc(45, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton79()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17--;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[16] = m_double17;
	}
	else
	{
		m_double17++;
		UpdateData(FALSE);
		yansehangmianjisd[16] = m_double17;
	}
	if (modsd[13] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[16];
		CMyPublicData::setfunc(45, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton81()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18++;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[17] = m_double18;
	}
	else
	{
		m_double18--;
		UpdateData(FALSE);
		yansehangmianjisd[17] = m_double18;
	}
	if (modsd[15] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[17];
		CMyPublicData::setfunc(47, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton82()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18--;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[17] = m_double18;
	}
	else
	{
		m_double18++;
		UpdateData(FALSE);
		yansehangmianjisd[17] = m_double18;
	}
	if (modsd[15] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[17];
		CMyPublicData::setfunc(47, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton94()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19++;
	if (0 <= m_double19&& m_double19 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[18] = m_double19;
	}
	else
	{
		m_double19--;
		UpdateData(FALSE);
		yansehangmianjisd[18] = m_double19;
	}
	if (modsd[17] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[18];
		CMyPublicData::setfunc(49, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton86()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19--;
	if (0 <= m_double19&& m_double19 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[18] = m_double19;
	}
	else
	{
		m_double19++;
		UpdateData(FALSE);
		yansehangmianjisd[18] = m_double19;
	}
	if (modsd[17] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[18];
		CMyPublicData::setfunc(49, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton88()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20++;
	if (0 <= m_double20&& m_double20 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[19] = m_double20;
	}
	else
	{
		m_double20--;
		UpdateData(FALSE);
		yansehangmianjisd[19] = m_double20;
	}
	if (modsd[19] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[19];
		CMyPublicData::setfunc(51, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton129()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20--;
	if (0 <= m_double20&& m_double20 <= 255)
	{
		UpdateData(FALSE);
		yansehangmianjisd[19] = m_double20;
	}
	else
	{
		m_double20++;
		UpdateData(FALSE);
		yansehangmianjisd[19] = m_double20;
	}
	if (modsd[19] != L"OFF")
	{
		datatestDPU[4] = yansehangmianjisd[19];
		CMyPublicData::setfunc(51, 16, 20, 1);
	}
}


void yansehangmianji::OnBnClickedButton130()
{
	// TODO: 在此添加控件通知处理程序代码
}
