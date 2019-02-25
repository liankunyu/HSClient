// caitushezhi.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "caitushezhi.h"
#include "afxdialogex.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
// caitushezhi 对话框

IMPLEMENT_DYNAMIC(caitushezhi, CDialogEx)

caitushezhi::caitushezhi(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CAITUSHEZHI_DIALOG, pParent)
	, m_double1(caitu[0])
	, m_double2(caitu[1])
	, m_double3(caitu[2])
	, m_double4(caitu[3])
	, m_double5(caitu[4])
	, m_double6(caitu[5])
	, m_double7(caitu[6])
	, m_double8(caitu[7])
	, m_double9(caitu[8])
	, m_double10(caitu[9])
	, m_double11(caitu[10])
	, m_double12(caitu[11])
	, m_double13(caitu[12])
	, m_double14(caitu[13])
	, m_double15(caitu[14])
	, m_double16(caitu[15])
	, m_double17(caitu[16])
	, m_double18(caitu[17])
	, m_double19(caitu[18])
	, m_double20(caitu[19])
	, m_double21(caitu[20])
	, m_double22(caitu[21])
	, m_double23(caitu[22])
	, m_double24(caitu[23])
	, m_double25(caitu[24])
	, flag_num(1)
{

}

caitushezhi::~caitushezhi()
{
}

void caitushezhi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT2, m_double2);
	DDX_Text(pDX, IDC_EDIT18, m_double3);
	DDX_Text(pDX, IDC_EDIT30, m_double4);
	DDX_Text(pDX, IDC_EDIT31, m_double5);
	DDX_Text(pDX, IDC_EDIT32, m_double6);
	DDX_Control(pDX, IDC_COMBO1, m_combox1);
	DDX_Text(pDX, IDC_EDIT34, m_double7);
	DDX_Text(pDX, IDC_EDIT35, m_double8);
	DDX_Text(pDX, IDC_EDIT36, m_double9);
	DDX_Text(pDX, IDC_EDIT37, m_double10);
	DDX_Text(pDX, IDC_EDIT38, m_double11);
	DDX_Text(pDX, IDC_EDIT39, m_double12);
	DDX_Text(pDX, IDC_EDIT47, m_double13);
	DDX_Text(pDX, IDC_EDIT45, m_double14);
	DDX_Text(pDX, IDC_EDIT46, m_double15);
	DDX_Text(pDX, IDC_EDIT48, m_double16);
	DDX_Text(pDX, IDC_EDIT49, m_double17);
	DDX_Text(pDX, IDC_EDIT50, m_double18);
	DDX_Text(pDX, IDC_EDIT51, m_double19);
	DDX_Text(pDX, IDC_EDIT52, m_double20);
	DDX_Text(pDX, IDC_EDIT62, m_double21);
	DDX_Text(pDX, IDC_EDIT76, m_double22);
	DDX_Text(pDX, IDC_EDIT77, m_double23);
	DDX_Text(pDX, IDC_EDIT63, m_double24);
	DDX_Text(pDX, IDC_EDIT55, m_double25);
}


BEGIN_MESSAGE_MAP(caitushezhi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &caitushezhi::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &caitushezhi::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &caitushezhi::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &caitushezhi::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, &caitushezhi::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON5, &caitushezhi::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON7, &caitushezhi::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &caitushezhi::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &caitushezhi::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &caitushezhi::OnBnClickedButton10)
	ON_WM_SIZE()
	ON_EN_CHANGE(IDC_EDIT1, &caitushezhi::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON11, &caitushezhi::OnBnClickedButton11)
	ON_BN_CLICKED(IDCANCEL, &caitushezhi::OnBnClickedCancel)
END_MESSAGE_MAP()


// caitushezhi 消息处理程序


void caitushezhi::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		caitu[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		caitu[0] = m_double1;
	}
	datatestDPU[4] = caitu[0];
	if (modsd[flag_num - 1] != L"OFF")
	{
		CMyPublicData::setfunc(31 + flag_num, 16, 347, 1);
	}
}


void caitushezhi::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		caitu[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		caitu[0] = m_double1;
	}
	datatestDPU[4] = caitu[0];
	if (modsd[flag_num - 1] != L"OFF")
	{
		CMyPublicData::setfunc(31 + flag_num, 16, 347, 1);
	}
}


void caitushezhi::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		caitu[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		caitu[1] = m_double2;
	}
	datatestDPU[4] = caitu[1];
	if (modsd[flag_num - 1] != L"OFF")
	{
		CMyPublicData::setfunc(31 + flag_num, 16, 348, 1);
	}
}


void caitushezhi::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		caitu[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		caitu[1] = m_double2;
	}
	datatestDPU[4] = caitu[1];
	if (modsd[flag_num - 1] != L"OFF")
	{
		CMyPublicData::setfunc(31 + flag_num, 16, 348, 1);
	}
}


void caitushezhi::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		caitu[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		caitu[2] = m_double3;
	}
	datatestDPU[4] = caitu[2];
	if (modsd[flag_num - 1] != L"OFF")
	{
		CMyPublicData::setfunc(31 + flag_num, 16, 349, 1);
	}
}


void caitushezhi::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		caitu[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		caitu[2] = m_double3;
	}
	datatestDPU[4] = caitu[2];
	if (modsd[flag_num - 1] != L"OFF")
	{
		CMyPublicData::setfunc(31 + flag_num, 16, 349, 1);
	}
}


void caitushezhi::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		caitu[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		caitu[3] = m_double4;
	}
	datatestDPU[4] = caitu[3];
	if (modsd[flag_num - 1] != L"OFF")
	{
		CMyPublicData::setfunc(31 + flag_num, 16, 382, 1);
	}
}


void caitushezhi::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		caitu[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		caitu[3] = m_double4;
	}
	datatestDPU[4] = caitu[3];
	if (modsd[flag_num - 1] != L"OFF")
	{
		CMyPublicData::setfunc(31 + flag_num, 16, 382, 1);
	}
}


void caitushezhi::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		caitu[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		caitu[4] = m_double5;
	}
	datatestDPU[4] = caitu[4];
	if (modsd[flag_num - 1] != L"OFF")
	{
		CMyPublicData::setfunc(31 + flag_num, 16, 383, 1);
	}
}


void caitushezhi::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		caitu[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		caitu[4] = m_double5;
	}
	datatestDPU[4] = caitu[4];
	if (modsd[flag_num - 1] != L"OFF")
	{
		CMyPublicData::setfunc(31 + flag_num, 16, 383, 1);
	}
}






BOOL caitushezhi::PreTranslateMessage(MSG* pMsg)
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
			caitu[0] = m_double1;
		}
		if (modsd[flag_num - 1] != L"OFF")
		{
			datatestDPU[4] = caitu[0];
			CMyPublicData::setfunc(31 + flag_num, 16, 347, 1);
		}
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT2);
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
				caitu[1] = m_double2;
				//blingmin[1] = m_double2;
			}
			if (modsd[flag_num - 1] != L"OFF")
			{
				datatestDPU[4] = caitu[1];
				CMyPublicData::setfunc(31 + flag_num, 16, 348, 1);
			}
			return TRUE;
		}
		else
		{
			pEdit = (CEdit*)GetDlgItem(IDC_EDIT18);
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
					//blingmin[2] = m_double3;
					caitu[2] = m_double3;
				}
				if (modsd[flag_num - 1] != L"OFF")
				{
					datatestDPU[4] = caitu[2];
					CMyPublicData::setfunc(31 + flag_num, 16, 349, 1);
				}
				return TRUE;
			}
			else
			{
				pEdit = (CEdit*)GetDlgItem(IDC_EDIT30);
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
						caitu[3] = m_double4;
					}
					if (modsd[flag_num - 1] != L"OFF")
					{
						datatestDPU[4] = caitu[3];
						CMyPublicData::setfunc(31 + flag_num, 16, 382, 1);
					}
					return TRUE;
				}
				else
				{
					pEdit = (CEdit*)GetDlgItem(IDC_EDIT31);
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
							//blingmin[4] = m_double5;
							caitu[4] = m_double5;
						}
						if (modsd[flag_num - 1] != L"OFF")
						{
							datatestDPU[4] = caitu[4];
							CMyPublicData::setfunc(31 + flag_num, 16, 383, 1);
						}
						return TRUE;
					}
					else
					{
						pEdit = (CEdit*)GetDlgItem(IDC_EDIT32);
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
								caitu[5] = m_double6;
							}
							if (modsd[0] != L"OFF")
							{
								datatestDPU[4] = caitu[5];
								CMyPublicData::setfunc(32, 16, 118, 1);
							}
							return TRUE;
						}
						else
						{
							pEdit = (CEdit*)GetDlgItem(IDC_EDIT34);
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
									caitu[6] = m_double7;
								}
								if (modsd[2] != L"OFF")
								{
									datatestDPU[4] = caitu[6];
									CMyPublicData::setfunc(34, 16, 118, 1);
								}
								return TRUE;
							}
							else
							{
								pEdit = (CEdit*)GetDlgItem(IDC_EDIT35);
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
										caitu[7] = m_double8;
									}
									if (modsd[4] != L"OFF")
									{
										datatestDPU[4] = caitu[7];
										CMyPublicData::setfunc(36, 16, 118, 1);
									}
									return TRUE;
								}
								else
								{
									pEdit = (CEdit*)GetDlgItem(IDC_EDIT36);
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
											caitu[8] = m_double9;
										}
										if (modsd[6] != L"OFF")
										{
											datatestDPU[4] = caitu[8];
											CMyPublicData::setfunc(38, 16, 118, 1);
										}
										return TRUE;
									}
									else
									{
										pEdit = (CEdit*)GetDlgItem(IDC_EDIT37);
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
												caitu[9] = m_double10;
											}
											if (modsd[8] != L"OFF")
											{
												datatestDPU[4] = caitu[9];
												CMyPublicData::setfunc(40, 16, 118, 1);
											}
											return TRUE;
										}
										else
										{
											pEdit = (CEdit*)GetDlgItem(IDC_EDIT38);
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
													caitu[10] = m_double11;
												}
												if (modsd[10] != L"OFF")
												{
													datatestDPU[4] = caitu[10];
													CMyPublicData::setfunc(42, 16, 118, 1);
												}
												return TRUE;
											}
											else
											{
												pEdit = (CEdit*)GetDlgItem(IDC_EDIT39);
												ASSERT(pEdit && pEdit->GetSafeHwnd());
												if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
												{
													CInputDlg dlg;
													dlg.ValueMax = 255;
													dlg.ValueMin = 0;
													if (dlg.DoModal() == IDOK)
													{
														UpdateData(TRUE);
														m_double12 = _wtof(dlg.ValueShow);
														UpdateData(FALSE);
														caitu[11] = m_double12;
													}
													if (modsd[12] != L"OFF")
													{
														datatestDPU[4] = caitu[11];
														CMyPublicData::setfunc(44, 16, 118, 1);
													}
													return TRUE;
												}
												else
												{
													pEdit = (CEdit*)GetDlgItem(IDC_EDIT47);
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
															caitu[12] = m_double13;
														}
														if (modsd[14] != L"OFF")
														{
															datatestDPU[4] = caitu[12];
															CMyPublicData::setfunc(46, 16, 118, 1);
														}
														return TRUE;
													}
													else
													{
														pEdit = (CEdit*)GetDlgItem(IDC_EDIT45);
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
																caitu[13] = m_double14;
															}
															if (modsd[16] != L"OFF")
															{
																datatestDPU[4] = caitu[13];
																CMyPublicData::setfunc(48, 16, 118, 1);
															}
															return TRUE;
														}
														else
														{
															pEdit = (CEdit*)GetDlgItem(IDC_EDIT46);
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
																	caitu[14] = m_double15;
																}
																if (modsd[18] != L"OFF")
																{
																	datatestDPU[4] = caitu[14];
																	CMyPublicData::setfunc(50, 16, 118, 1);
																}
																return TRUE;
															}
															else
															{
																pEdit = (CEdit*)GetDlgItem(IDC_EDIT48);
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
																		caitu[15] = m_double16;
																	}
																	if (modsd[1] != L"OFF")
																	{
																		datatestDPU[4] = caitu[15];
																		CMyPublicData::setfunc(33, 16, 118, 1);
																	}
																	return TRUE;
																}
																else
																{
																	pEdit = (CEdit*)GetDlgItem(IDC_EDIT49);
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
																			caitu[16] = m_double17;
																		}
																		if (modsd[3] != L"OFF")
																		{
																			datatestDPU[4] = caitu[16];
																			CMyPublicData::setfunc(35, 16, 118, 1);
																		}
																		return TRUE;
																	}
																	else
																	{
																		pEdit = (CEdit*)GetDlgItem(IDC_EDIT50);
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
																				caitu[17] = m_double18;
																			}
																			if (modsd[5] != L"OFF")
																			{
																				datatestDPU[4] = caitu[17];
																				CMyPublicData::setfunc(37, 16, 118, 1);
																			}
																			return TRUE;
																		}
																		else
																		{
																			pEdit = (CEdit*)GetDlgItem(IDC_EDIT51);
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
																					caitu[18] = m_double19;
																				}
																				if (modsd[7] != L"OFF")
																				{
																					datatestDPU[4] = caitu[18];
																					CMyPublicData::setfunc(39, 16, 118, 1);
																				}
																				return TRUE;
																			}
																			else
																			{
																				pEdit = (CEdit*)GetDlgItem(IDC_EDIT52);
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
																						caitu[19] = m_double20;
																					}
																					if (modsd[9] != L"OFF")
																					{
																						datatestDPU[4] = caitu[19];
																						CMyPublicData::setfunc(41, 16, 118, 1);
																					}
																					return TRUE;
																				}
																				else
																				{
																					pEdit = (CEdit*)GetDlgItem(IDC_EDIT62);
																					ASSERT(pEdit && pEdit->GetSafeHwnd());
																					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																					{
																						CInputDlg dlg;
																						dlg.ValueMax = 255;
																						dlg.ValueMin = 0;
																						if (dlg.DoModal() == IDOK)
																						{
																							UpdateData(TRUE);
																							m_double21 = _wtof(dlg.ValueShow);
																							UpdateData(FALSE);
																							caitu[20] = m_double21;
																						}
																						if (modsd[11] != L"OFF")
																						{
																							datatestDPU[4] = caitu[20];
																							CMyPublicData::setfunc(43, 16, 118, 1);
																						}
																						return TRUE;
																					}
																					else
																					{
																						pEdit = (CEdit*)GetDlgItem(IDC_EDIT76);
																						ASSERT(pEdit && pEdit->GetSafeHwnd());
																						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																						{
																							CInputDlg dlg;
																							dlg.ValueMax = 255;
																							dlg.ValueMin = 0;
																							if (dlg.DoModal() == IDOK)
																							{
																								UpdateData(TRUE);
																								m_double22 = _wtof(dlg.ValueShow);
																								UpdateData(FALSE);
																								caitu[21] = m_double22;
																							}
																							if (modsd[13] != L"OFF")
																							{
																								datatestDPU[4] = caitu[21];
																								CMyPublicData::setfunc(45, 16, 118, 1);
																							}
																							return TRUE;
																						}
																						else
																						{
																							pEdit = (CEdit*)GetDlgItem(IDC_EDIT77);
																							ASSERT(pEdit && pEdit->GetSafeHwnd());
																							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																							{
																								CInputDlg dlg;
																								dlg.ValueMax = 255;
																								dlg.ValueMin = 0;
																								if (dlg.DoModal() == IDOK)
																								{
																									UpdateData(TRUE);
																									m_double23 = _wtof(dlg.ValueShow);
																									UpdateData(FALSE);
																									caitu[22] = m_double23;
																								}
																								if (modsd[15] != L"OFF")
																								{
																									datatestDPU[4] = caitu[22];
																									CMyPublicData::setfunc(47, 16, 118, 1);
																								}
																								return TRUE;
																							}
																							else
																							{
																								pEdit = (CEdit*)GetDlgItem(IDC_EDIT63);
																								ASSERT(pEdit && pEdit->GetSafeHwnd());
																								if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																								{
																									CInputDlg dlg;
																									dlg.ValueMax = 255;
																									dlg.ValueMin = 0;
																									if (dlg.DoModal() == IDOK)
																									{
																										UpdateData(TRUE);
																										m_double24 = _wtof(dlg.ValueShow);
																										UpdateData(FALSE);
																										caitu[23] = m_double24;
																									}
																									if (modsd[17] != L"OFF")
																									{
																										datatestDPU[4] = caitu[23];
																										CMyPublicData::setfunc(49, 16, 118, 1);
																									}
																									return TRUE;
																								}
																								else
																								{
																									pEdit = (CEdit*)GetDlgItem(IDC_EDIT55);
																									ASSERT(pEdit && pEdit->GetSafeHwnd());
																									if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																									{
																										CInputDlg dlg;
																										dlg.ValueMax = 255;
																										dlg.ValueMin = 0;
																										if (dlg.DoModal() == IDOK)
																										{
																											UpdateData(TRUE);
																											m_double25 = _wtof(dlg.ValueShow);
																											UpdateData(FALSE);
																											caitu[24] = m_double25;
																										}
																										if (modsd[19] != L"OFF")
																										{
																											datatestDPU[4] = caitu[24];
																											CMyPublicData::setfunc(51, 16, 118, 1);
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

				UpdateData(FALSE);
				return CDialogEx::PreTranslateMessage(pMsg);
			}
		}
	}


	return CDialogEx::PreTranslateMessage(pMsg);
}


void caitushezhi::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL caitushezhi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num0501", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num0502", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON11)->SetWindowText(cstr);
	opx.QueryNode_Text("num0503", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num0504", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num0505", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num0506", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num0507", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num0508", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num0509", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC18)->SetWindowText(cstr);
	opx.QueryNode_Text("num0510", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC19)->SetWindowText(cstr);
	opx.QueryNode_Text("num0511", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);

	m_combox1.SetCurSel(0);   //设置COMBOX初始值

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
	GetDlgItem(IDC_EDIT32)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT36)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT37)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT38)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT39)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT47)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT45)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT46)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT48)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT49)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT50)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT51)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT52)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT62)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT76)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT77)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT63)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT55)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void caitushezhi::ReSize()
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


void caitushezhi::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void caitushezhi::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString	ComChoosed;
	m_combox1.GetLBText(m_combox1.GetCurSel(), ComChoosed);
	if (ComChoosed == "f1")
	{
		photoNum = 32;
		flag_num = 1;
	}
	if (ComChoosed == "b1")
	{
		photoNum = 33;
		flag_num = 2;
	}
	if (ComChoosed == "f2")
	{
		photoNum = 34;
		flag_num = 3;
	}
	if (ComChoosed == "b2")
	{
		photoNum = 35;
		flag_num = 4;
	}
	if (ComChoosed == "f3")
	{
		photoNum = 36;
		flag_num = 5;
	}
	if (ComChoosed == "b3")
	{
		photoNum = 37;
		flag_num = 6;
	}
	if (ComChoosed == "f4")
	{
		photoNum = 38;
		flag_num = 7;
	}
	if (ComChoosed == "b4")
	{
		photoNum = 39;
		flag_num = 8;
	}
	if (ComChoosed == "f5")
	{
		photoNum = 40;
		flag_num = 9;
	}
	if (ComChoosed == "b5")
	{
		photoNum = 41;
		flag_num = 10;
	}
	if (ComChoosed == "f6")
	{
		photoNum = 42;
		flag_num = 11;
	}
	if (ComChoosed == "b6")
	{
		photoNum = 43;
		flag_num = 12;
	}
	if (ComChoosed == "f7")
	{
		photoNum = 44;
		flag_num = 13;
	}
	if (ComChoosed == "b7")
	{
		photoNum = 45;
		flag_num = 14;
	}
	if (ComChoosed == "f8")
	{
		photoNum = 46;
		flag_num = 15;
	}
	if (ComChoosed == "b8")
	{
		photoNum = 47;
		flag_num = 16;
	}
	if (ComChoosed == "f9")
	{
		photoNum = 48;
		flag_num = 17;
	}
	if (ComChoosed == "b9")
	{
		photoNum = 49;
		flag_num = 18;
	}
	if (ComChoosed == "f10")
	{
		photoNum = 50;
		flag_num = 19;
	}
	if (ComChoosed == "b10")
	{
		photoNum = 51;
		flag_num = 20;
	}
	UpdateData(FALSE);
}


void caitushezhi::OnBnClickedCancel()
{
	//// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(caitu[0]);
	opx.ModifyNode("num0401", str);
	str = opx.numtoString(caitu[1]);
	opx.ModifyNode("num0402", str);
	str = opx.numtoString(caitu[2]);
	opx.ModifyNode("num0403", str);
	str = opx.numtoString(caitu[3]);
	opx.ModifyNode("num0404", str);
	str = opx.numtoString(caitu[4]);
	opx.ModifyNode("num0405", str);
	str = opx.numtoString(caitu[5]);
	opx.ModifyNode("num0406", str);
	str = opx.numtoString(caitu[6]);
	opx.ModifyNode("num0407", str);
	str = opx.numtoString(caitu[7]);
	opx.ModifyNode("num0408", str);
	str = opx.numtoString(caitu[8]);
	opx.ModifyNode("num0409", str);
	str = opx.numtoString(caitu[9]);
	opx.ModifyNode("num0410", str);
	str = opx.numtoString(caitu[10]);
	opx.ModifyNode("num0411", str);
	str = opx.numtoString(caitu[11]);
	opx.ModifyNode("num0412", str);
	str = opx.numtoString(caitu[12]);
	opx.ModifyNode("num0413", str);
	str = opx.numtoString(caitu[13]);
	opx.ModifyNode("num0414", str);
	str = opx.numtoString(caitu[14]);
	opx.ModifyNode("num0415", str);
	str = opx.numtoString(caitu[15]);
	opx.ModifyNode("num0416", str);
	str = opx.numtoString(caitu[16]);
	opx.ModifyNode("num0417", str);
	str = opx.numtoString(caitu[17]);
	opx.ModifyNode("num0418", str);
	str = opx.numtoString(caitu[18]);
	opx.ModifyNode("num0419", str);
	str = opx.numtoString(caitu[19]);
	opx.ModifyNode("num0420", str);
	str = opx.numtoString(caitu[20]);
	opx.ModifyNode("num0421", str);
	str = opx.numtoString(caitu[21]);
	opx.ModifyNode("num0422", str);
	str = opx.numtoString(caitu[22]);
	opx.ModifyNode("num0423", str);
	str = opx.numtoString(caitu[23]);
	opx.ModifyNode("num0424", str);
	str = opx.numtoString(caitu[24]);
	opx.ModifyNode("num0425", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}
