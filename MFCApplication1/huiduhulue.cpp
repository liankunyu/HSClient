// huiduhulue.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "huiduhulue.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"

// huiduhulue 对话框

IMPLEMENT_DYNAMIC(huiduhulue, CDialogEx)

huiduhulue::huiduhulue(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DUIDUHULUE_DIALOG, pParent)
	, m_double1(huiduhuluesheding[0])
	, m_double2(huiduhuluesheding[1])
	, m_double3(huiduhuluesheding[2])
	, m_double4(huiduhuluesheding[3])
	, m_double5(huiduhuluesheding[4])
	, m_double6(huiduhuluesheding[5])
	, m_double7(huiduhuluesheding[6])
	, m_double8(huiduhuluesheding[7])
	, m_double9(huiduhuluesheding[8])
	, m_double10(huiduhuluesheding[9])
	, m_double11(huiduhuluesheding[10])
	, m_double12(huiduhuluesheding[11])
	, m_double13(huiduhuluesheding[12])
	, m_double14(huiduhuluesheding[13])
	, m_double15(huiduhuluesheding[14])
	, m_double16(huiduhuluesheding[15])
	, m_double17(huiduhuluesheding[16])
	, m_double18(huiduhuluesheding[17])
	, m_double19(huiduhuluesheding[18])
	, m_double20(huiduhuluesheding[19])
{

}

huiduhulue::~huiduhulue()
{
}

void huiduhulue::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT2, m_double2);
	DDX_Text(pDX, IDC_EDIT18, m_double3);
	DDX_Text(pDX, IDC_EDIT30, m_double4);
	DDX_Text(pDX, IDC_EDIT31, m_double5);
	DDX_Text(pDX, IDC_EDIT32, m_double6);
	DDX_Text(pDX, IDC_EDIT33, m_double7);
	DDX_Text(pDX, IDC_EDIT34, m_double8);
	DDX_Text(pDX, IDC_EDIT35, m_double9);
	DDX_Text(pDX, IDC_EDIT36, m_double10);
	DDX_Text(pDX, IDC_EDIT37, m_double11);
	DDX_Text(pDX, IDC_EDIT13, m_double12);
	DDX_Text(pDX, IDC_EDIT26, m_double13);
	DDX_Text(pDX, IDC_EDIT47, m_double14);
	DDX_Text(pDX, IDC_EDIT48, m_double15);
	DDX_Text(pDX, IDC_EDIT45, m_double16);
	DDX_Text(pDX, IDC_EDIT46, m_double17);
	DDX_Text(pDX, IDC_EDIT49, m_double18);
	DDX_Text(pDX, IDC_EDIT50, m_double19);
	DDX_Text(pDX, IDC_EDIT51, m_double20);
}


BEGIN_MESSAGE_MAP(huiduhulue, CDialogEx)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &huiduhulue::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON12, &huiduhulue::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &huiduhulue::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &huiduhulue::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &huiduhulue::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON64, &huiduhulue::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON51, &huiduhulue::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON65, &huiduhulue::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON66, &huiduhulue::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON67, &huiduhulue::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON68, &huiduhulue::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON69, &huiduhulue::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON70, &huiduhulue::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON85, &huiduhulue::OnBnClickedButton85)
	ON_BN_CLICKED(IDC_BUTTON94, &huiduhulue::OnBnClickedButton94)
	ON_BN_CLICKED(IDC_BUTTON86, &huiduhulue::OnBnClickedButton86)
	ON_BN_CLICKED(IDC_BUTTON87, &huiduhulue::OnBnClickedButton87)
	ON_BN_CLICKED(IDC_BUTTON88, &huiduhulue::OnBnClickedButton88)
	ON_BN_CLICKED(IDC_BUTTON89, &huiduhulue::OnBnClickedButton89)
	ON_BN_CLICKED(IDC_BUTTON98, &huiduhulue::OnBnClickedButton98)
	ON_BN_CLICKED(IDC_BUTTON99, &huiduhulue::OnBnClickedButton99)
	ON_BN_CLICKED(IDC_BUTTON71, &huiduhulue::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON72, &huiduhulue::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON73, &huiduhulue::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON74, &huiduhulue::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON75, &huiduhulue::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON76, &huiduhulue::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON77, &huiduhulue::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON78, &huiduhulue::OnBnClickedButton78)
	ON_BN_CLICKED(IDC_BUTTON79, &huiduhulue::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON80, &huiduhulue::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_BUTTON81, &huiduhulue::OnBnClickedButton81)
	ON_BN_CLICKED(IDC_BUTTON82, &huiduhulue::OnBnClickedButton82)
	ON_BN_CLICKED(IDC_BUTTON100, &huiduhulue::OnBnClickedButton100)
	ON_BN_CLICKED(IDC_BUTTON101, &huiduhulue::OnBnClickedButton101)
	ON_BN_CLICKED(IDC_BUTTON102, &huiduhulue::OnBnClickedButton102)
	ON_BN_CLICKED(IDC_BUTTON103, &huiduhulue::OnBnClickedButton103)
	ON_BN_CLICKED(IDC_BUTTON106, &huiduhulue::OnBnClickedButton106)
	ON_BN_CLICKED(IDC_BUTTON107, &huiduhulue::OnBnClickedButton107)
	ON_BN_CLICKED(IDC_BUTTON156, &huiduhulue::OnBnClickedButton156)
	ON_BN_CLICKED(IDC_BUTTON108, &huiduhulue::OnBnClickedButton108)
END_MESSAGE_MAP()


// huiduhulue 消息处理程序


BOOL huiduhulue::PreTranslateMessage(MSG* pMsg)
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
			huiduhuluesheding[0] = m_double1;
		}
		datatestDPU[4] = huiduhuluesheding[0];
		if (modsd[0] != "OFF")
		{
			CMyPublicData::setfunc(32, 16, 104, 1);
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
				m_double11 = _wtof(dlg.ValueShow);
				UpdateData(FALSE);
				huiduhuluesheding[10] = m_double11;
			}
			datatestDPU[4] = huiduhuluesheding[10];
			if (modsd[1] != "OFF")
			{
				CMyPublicData::setfunc(33, 16, 104, 1);
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
					huiduhuluesheding[2] = m_double3;
				}
				datatestDPU[4] = huiduhuluesheding[2];
				if (modsd[4] != "OFF")
				{
					CMyPublicData::setfunc(36, 16, 104, 1);
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
						huiduhuluesheding[3] = m_double4;
					}
					datatestDPU[4] = huiduhuluesheding[3];
					if (modsd[6] != "OFF")
					{
						CMyPublicData::setfunc(38, 16, 104, 1);
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
							huiduhuluesheding[4] = m_double5;
						}
						datatestDPU[4] = huiduhuluesheding[4];
						if (modsd[8] != "OFF")
						{
							CMyPublicData::setfunc(40, 16, 104, 1);
						}
						return TRUE;
					}
					else
					{
						CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT32);
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
								huiduhuluesheding[5] = m_double6;
							}
							datatestDPU[4] = huiduhuluesheding[5];
							if (modsd[10] != "OFF")
							{
								CMyPublicData::setfunc(42, 16, 104, 1);
							}
							return TRUE;
						}
						else
						{
							CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT33);
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
									huiduhuluesheding[6] = m_double7;
								}
								datatestDPU[4] = huiduhuluesheding[6];
								if (modsd[12] != "OFF")
								{
									CMyPublicData::setfunc(44, 16, 104, 1);
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
										m_double8 = _wtof(dlg.ValueShow);
										UpdateData(FALSE);
										huiduhuluesheding[7] = m_double8;
									}
									datatestDPU[4] = huiduhuluesheding[7];
									if (modsd[14] != "OFF")
									{
										CMyPublicData::setfunc(46, 16, 104, 1);
									}
									return TRUE;
								}
								else
								{
									CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT35);
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
											huiduhuluesheding[8] = m_double9;
										}
										datatestDPU[4] = huiduhuluesheding[8];
										if (modsd[16] != "OFF")
										{
											CMyPublicData::setfunc(48, 16, 104, 1);
										}
										return TRUE;
									}
									else
									{
										CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT36);
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
												huiduhuluesheding[9] = m_double10;
											}
											datatestDPU[4] = huiduhuluesheding[9];
											if (modsd[18] != "OFF")
											{
												CMyPublicData::setfunc(50, 16, 104, 1);
											}
											return TRUE;
										}
										else
										{
											CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT13);
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
													huiduhuluesheding[11] = m_double12;
												}
												datatestDPU[4] = huiduhuluesheding[11];
												if (modsd[3] != "OFF")
												{
													CMyPublicData::setfunc(35, 16, 104, 1);
												}
												return TRUE;
											}
											else
											{
												CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT26);
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
														huiduhuluesheding[12] = m_double13;
													}
													datatestDPU[4] = huiduhuluesheding[12];
													if (modsd[5] != "OFF")
													{
														CMyPublicData::setfunc(37, 16, 104, 1);
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
															m_double14 = _wtof(dlg.ValueShow);
															UpdateData(FALSE);
															huiduhuluesheding[13] = m_double14;
														}
														datatestDPU[4] = huiduhuluesheding[13];
														if (modsd[7] != "OFF")
														{
															CMyPublicData::setfunc(39, 16, 104, 1);
														}
														return TRUE;
													}
													else
													{
														CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT48);
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
																huiduhuluesheding[14] = m_double15;
															}
															datatestDPU[4] = huiduhuluesheding[14];
															if (modsd[9] != "OFF")
															{
																CMyPublicData::setfunc(41, 16, 104, 1);
															}
															return TRUE;
														}
														else
														{
															CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT45);
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
																	huiduhuluesheding[15] = m_double16;
																}
																datatestDPU[4] = huiduhuluesheding[15];
																if (modsd[11] != "OFF")
																{
																	CMyPublicData::setfunc(43, 16, 104, 1);
																}
																return TRUE;
															}
															else
															{
																CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT46);
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
																		huiduhuluesheding[16] = m_double17;
																	}
																	datatestDPU[4] = huiduhuluesheding[16];
																	if (modsd[13] != "OFF")
																	{
																		CMyPublicData::setfunc(45, 16, 104, 1);
																	}
																	return TRUE;
																}
																else
																{
																	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT49);
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
																			huiduhuluesheding[17] = m_double18;
																		}
																		datatestDPU[4] = huiduhuluesheding[17];
																		if (modsd[15] != "OFF")
																		{
																			CMyPublicData::setfunc(47, 16, 104, 1);
																		}
																		return TRUE;
																	}
																	else
																	{
																		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT50);
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
																				huiduhuluesheding[18] = m_double19;
																			}
																			datatestDPU[4] = huiduhuluesheding[18];
																			if (modsd[17] != "OFF")
																			{
																				CMyPublicData::setfunc(49, 16, 104, 1);
																			}
																			return TRUE;
																		}
																		else
																		{
																			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT51);
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
																					huiduhuluesheding[19] = m_double20;
																				}
																				datatestDPU[4] = huiduhuluesheding[19];
																				if (modsd[19] != "OFF")
																				{
																					CMyPublicData::setfunc(51, 16, 104, 1);
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
																						huiduhuluesheding[1] = m_double2;
																					}
																					datatestDPU[4] = huiduhuluesheding[1];
																					if (modsd[2] != "OFF")
																					{
																						CMyPublicData::setfunc(34, 16, 104, 1);
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


void huiduhulue::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL huiduhulue::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num0601", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC0)->SetWindowText(cstr);
	opx.QueryNode_Text("num0602", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_FRONT_STATIC)->SetWindowText(cstr);
	opx.QueryNode_Text("num0603", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BACK_STATIC)->SetWindowText(cstr);
	opx.QueryNode_Text("num0604", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
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
	GetDlgItem(IDC_EDIT32)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT33)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT36)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT37)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT13)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT26)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT47)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT48)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT45)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT46)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT49)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT50)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT51)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void huiduhulue::ReSize()
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


void huiduhulue::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(huiduhuluesheding[0]);
	opx.ModifyNode("num2201", str);
	str = opx.numtoString(huiduhuluesheding[1]);
	opx.ModifyNode("num2202", str);
	str = opx.numtoString(huiduhuluesheding[2]);
	opx.ModifyNode("num2203", str);
	str = opx.numtoString(huiduhuluesheding[3]);
	opx.ModifyNode("num2204", str);
	str = opx.numtoString(huiduhuluesheding[4]);
	opx.ModifyNode("num2205", str);
	str = opx.numtoString(huiduhuluesheding[5]);
	opx.ModifyNode("num2206", str);
	str = opx.numtoString(huiduhuluesheding[6]);
	opx.ModifyNode("num2207", str);
	str = opx.numtoString(huiduhuluesheding[7]);
	opx.ModifyNode("num2208", str);
	str = opx.numtoString(huiduhuluesheding[8]);
	opx.ModifyNode("num2209", str);
	str = opx.numtoString(huiduhuluesheding[9]);
	opx.ModifyNode("num2210", str);
	str = opx.numtoString(huiduhuluesheding[10]);
	opx.ModifyNode("num2211", str);
	str = opx.numtoString(huiduhuluesheding[11]);
	opx.ModifyNode("num2212", str);
	str = opx.numtoString(huiduhuluesheding[12]);
	opx.ModifyNode("num2213", str);
	str = opx.numtoString(huiduhuluesheding[13]);
	opx.ModifyNode("num2214", str);
	str = opx.numtoString(huiduhuluesheding[14]);
	opx.ModifyNode("num2215", str);
	str = opx.numtoString(huiduhuluesheding[15]);
	opx.ModifyNode("num2216", str);
	str = opx.numtoString(huiduhuluesheding[16]);
	opx.ModifyNode("num2217", str);
	str = opx.numtoString(huiduhuluesheding[17]);
	opx.ModifyNode("num2218", str);
	str = opx.numtoString(huiduhuluesheding[18]);
	opx.ModifyNode("num2219", str);
	str = opx.numtoString(huiduhuluesheding[19]);
	opx.ModifyNode("num2220", str);

	opx.SaveFile();
	CDialogEx::OnCancel();
}


void huiduhulue::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		huiduhuluesheding[0] = m_double1;
	}
	datatestDPU[4] = m_double1;
	if (modsd[0] != "OFF")
	{
		CMyPublicData::setfunc(32, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		huiduhuluesheding[0] = m_double1;
	}
	datatestDPU[4] = m_double1;
	if (modsd[0] != "OFF")
	{
		CMyPublicData::setfunc(32, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		huiduhuluesheding[1] = m_double2;
	}
	datatestDPU[4] = m_double2;
	if (modsd[2] != "OFF")
	{
		CMyPublicData::setfunc(34, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		huiduhuluesheding[1] = m_double2;
	}
	datatestDPU[4] = m_double2;
	if (modsd[2] != "OFF")
	{
		CMyPublicData::setfunc(34, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton64()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		huiduhuluesheding[2] = m_double3;
	}
	datatestDPU[4] = m_double3;
	if (modsd[4] != "OFF")
	{
		CMyPublicData::setfunc(36, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton51()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		huiduhuluesheding[2] = m_double3;
	}
	datatestDPU[4] = m_double3;
	if (modsd[4] != "OFF")
	{
		CMyPublicData::setfunc(36, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton65()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		huiduhuluesheding[3] = m_double4;
	}
	datatestDPU[4] = m_double4;
	if (modsd[6] != "OFF")
	{
		CMyPublicData::setfunc(38, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		huiduhuluesheding[3] = m_double4;
	}
	datatestDPU[4] = m_double4;
	if (modsd[6] != "OFF")
	{
		CMyPublicData::setfunc(38, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton67()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		huiduhuluesheding[4] = m_double5;
	}
	datatestDPU[4] = m_double5;
	if (modsd[8] != "OFF")
	{
		CMyPublicData::setfunc(40, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton68()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		huiduhuluesheding[4] = m_double5;
	}
	datatestDPU[4] = m_double5;
	if (modsd[8] != "OFF")
	{
		CMyPublicData::setfunc(40, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		huiduhuluesheding[5] = m_double6;
	}
	datatestDPU[4] = m_double6;
	if (modsd[10] != "OFF")
	{
		CMyPublicData::setfunc(42, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		huiduhuluesheding[5] = m_double6;
	}
	datatestDPU[4] = m_double6;
	if (modsd[10] != "OFF")
	{
		CMyPublicData::setfunc(42, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton85()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		huiduhuluesheding[6] = m_double7;
	}
	datatestDPU[4] = m_double7;
	if (modsd[12] != "OFF")
	{
		CMyPublicData::setfunc(44, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton94()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		huiduhuluesheding[6] = m_double7;
	}
	datatestDPU[4] = m_double7;
	if (modsd[12] != "OFF")
	{
		CMyPublicData::setfunc(44, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton86()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		huiduhuluesheding[7] = m_double8;
	}
	datatestDPU[4] = m_double8;
	if (modsd[14] != "OFF")
	{
		CMyPublicData::setfunc(46, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton87()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		huiduhuluesheding[7] = m_double8;
	}
	datatestDPU[4] = m_double8;
	if (modsd[14] != "OFF")
	{
		CMyPublicData::setfunc(46, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton88()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		huiduhuluesheding[8] = m_double9;
	}
	datatestDPU[4] = m_double9;
	if (modsd[16] != "OFF")
	{
		CMyPublicData::setfunc(48, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton89()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		huiduhuluesheding[8] = m_double9;
	}
	datatestDPU[4] = m_double9;
	if (modsd[16] != "OFF")
	{
		CMyPublicData::setfunc(48, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton98()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		huiduhuluesheding[9] = m_double10;
	}
	datatestDPU[4] = m_double10;
	if (modsd[18] != "OFF")
	{
		CMyPublicData::setfunc(50, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton99()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		huiduhuluesheding[9] = m_double10;
	}
	datatestDPU[4] = m_double10;
	if (modsd[18] != "OFF")
	{
		CMyPublicData::setfunc(50, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		huiduhuluesheding[10] = m_double11;
	}
	datatestDPU[4] = m_double11;
	if (modsd[1] != "OFF")
	{
		CMyPublicData::setfunc(33, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		huiduhuluesheding[10] = m_double11;
	}
	datatestDPU[4] = m_double11;
	if (modsd[1] != "OFF")
	{
		CMyPublicData::setfunc(33, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		huiduhuluesheding[11] = m_double12;
	}
	datatestDPU[4] = m_double12;
	if (modsd[3] != "OFF")
	{
		CMyPublicData::setfunc(35, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		huiduhuluesheding[11] = m_double12;
	}
	datatestDPU[4] = m_double12;
	if (modsd[3] != "OFF")
	{
		CMyPublicData::setfunc(35, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton75()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13++;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[12] = m_double13;
	}
	else
	{
		m_double13--;
		UpdateData(FALSE);
		huiduhuluesheding[12] = m_double13;
	}
	datatestDPU[4] = m_double13;
	if (modsd[5] != "OFF")
	{
		CMyPublicData::setfunc(37, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13--;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[12] = m_double13;
	}
	else
	{
		m_double13++;
		UpdateData(FALSE);
		huiduhuluesheding[12] = m_double13;
	}
	datatestDPU[4] = m_double13;
	if (modsd[5] != "OFF")
	{
		CMyPublicData::setfunc(37, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton77()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14++;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[13] = m_double14;
	}
	else
	{
		m_double14--;
		UpdateData(FALSE);
		huiduhuluesheding[13] = m_double14;
	}
	datatestDPU[4] = m_double14;
	if (modsd[7] != "OFF")
	{
		CMyPublicData::setfunc(39, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton78()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14--;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[13] = m_double14;
	}
	else
	{
		m_double14++;
		UpdateData(FALSE);
		huiduhuluesheding[13] = m_double14;
	}
	datatestDPU[4] = m_double14;
	if (modsd[7] != "OFF")
	{
		CMyPublicData::setfunc(39, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton79()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15++;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[14] = m_double15;
	}
	else
	{
		m_double15--;
		UpdateData(FALSE);
		huiduhuluesheding[14] = m_double15;
	}
	datatestDPU[4] = m_double15;
	if (modsd[9] != "OFF")
	{
		CMyPublicData::setfunc(41, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton80()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15--;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[14] = m_double15;
	}
	else
	{
		m_double15++;
		UpdateData(FALSE);
		huiduhuluesheding[14] = m_double15;
	}
	datatestDPU[4] = m_double15;
	if (modsd[9] != "OFF")
	{
		CMyPublicData::setfunc(41, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton81()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16++;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[15] = m_double16;
	}
	else
	{
		m_double16--;
		UpdateData(FALSE);
		huiduhuluesheding[15] = m_double16;
	}
	datatestDPU[4] = m_double16;
	if (modsd[11] != "OFF")
	{
		CMyPublicData::setfunc(43, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton82()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16--;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[15] = m_double16;
	}
	else
	{
		m_double16++;
		UpdateData(FALSE);
		huiduhuluesheding[15] = m_double16;
	}
	datatestDPU[4] = m_double16;
	if (modsd[11] != "OFF")
	{
		CMyPublicData::setfunc(43, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton100()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17++;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[16] = m_double17;
	}
	else
	{
		m_double17--;
		UpdateData(FALSE);
		huiduhuluesheding[16] = m_double17;
	}
	datatestDPU[4] = m_double17;
	if (modsd[13] != "OFF")
	{
		CMyPublicData::setfunc(45, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton101()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17--;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[16] = m_double17;
	}
	else
	{
		m_double17++;
		UpdateData(FALSE);
		huiduhuluesheding[16] = m_double17;
	}
	datatestDPU[4] = m_double17;
	if (modsd[13] != "OFF")
	{
		CMyPublicData::setfunc(45, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton102()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18++;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[17] = m_double18;
	}
	else
	{
		m_double18--;
		UpdateData(FALSE);
		huiduhuluesheding[17] = m_double18;
	}
	datatestDPU[4] = m_double18;
	if (modsd[15] != "OFF")
	{
		CMyPublicData::setfunc(47, 16, 104, 1);
	}
}



void huiduhulue::OnBnClickedButton103()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18--;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[17] = m_double18;
	}
	else
	{
		m_double18++;
		UpdateData(FALSE);
		huiduhuluesheding[17] = m_double18;
	}
	datatestDPU[4] = m_double18;
	if (modsd[15] != "OFF")
	{
		CMyPublicData::setfunc(47, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton106()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19++;
	if (0 <= m_double19&& m_double19 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[18] = m_double19;
	}
	else
	{
		m_double19--;
		UpdateData(FALSE);
		huiduhuluesheding[18] = m_double19;
	}
	datatestDPU[4] = m_double19;
	if (modsd[17] != "OFF")
	{
		CMyPublicData::setfunc(49, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton107()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19--;
	if (0 <= m_double19&& m_double19 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[18] = m_double19;
	}
	else
	{
		m_double19++;
		UpdateData(FALSE);
		huiduhuluesheding[18] = m_double19;
	}
	datatestDPU[4] = m_double19;
	if (modsd[17] != "OFF")
	{
		CMyPublicData::setfunc(49, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton156()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20++;
	if (0 <= m_double20&& m_double20 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[19] = m_double20;
	}
	else
	{
		m_double20--;
		UpdateData(FALSE);
		huiduhuluesheding[19] = m_double20;
	}
	datatestDPU[4] = m_double20;
	if (modsd[19] != "OFF")
	{
		CMyPublicData::setfunc(51, 16, 104, 1);
	}
}


void huiduhulue::OnBnClickedButton108()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20--;
	if (0 <= m_double20&& m_double20 <= 255)
	{
		UpdateData(FALSE);
		huiduhuluesheding[19] = m_double20;
	}
	else
	{
		m_double20++;
		UpdateData(FALSE);
		huiduhuluesheding[19] = m_double20;
	}
	datatestDPU[4] = m_double20;
	if (modsd[19] != "OFF")
	{
		CMyPublicData::setfunc(51, 16, 104, 1);
	}
}
