// mianjiweitiao.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "mianjiweitiao.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"

// mianjiweitiao 对话框

IMPLEMENT_DYNAMIC(mianjiweitiao, CDialogEx)

mianjiweitiao::mianjiweitiao(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MIANJIWEITIAO_DIALOG, pParent)
	, m_double1(mianjiweitiaosd[0])
	, m_double2(mianjiweitiaosd[1])
	, m_double3(mianjiweitiaosd[2])
	, m_double4(mianjiweitiaosd[3])
	, m_double5(mianjiweitiaosd[4])
	, m_double6(mianjiweitiaosd[5])
	, m_double7(mianjiweitiaosd[6])
	, m_double8(mianjiweitiaosd[7])
	, m_double9(mianjiweitiaosd[8])
	, m_double10(mianjiweitiaosd[9])
	, m_double11(mianjiweitiaosd[10])
	, m_double12(mianjiweitiaosd[11])
	, m_double13(mianjiweitiaosd[12])
	, m_double14(mianjiweitiaosd[13])
	, m_double15(mianjiweitiaosd[14])
	, m_double16(mianjiweitiaosd[15])
	, m_double17(mianjiweitiaosd[16])
	, m_double18(mianjiweitiaosd[17])
	, m_double19(mianjiweitiaosd[18])
	, m_double20(mianjiweitiaosd[19])
{

}

mianjiweitiao::~mianjiweitiao()
{
}

void mianjiweitiao::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(mianjiweitiao, CDialogEx)
//	ON_BN_CLICKED(IDC_BUTTON1, &mianjiweitiao::OnBnClickedButton1)
	ON_BN_CLICKED(IDCANCEL, &mianjiweitiao::OnBnClickedCancel)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON12, &mianjiweitiao::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &mianjiweitiao::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &mianjiweitiao::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &mianjiweitiao::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON64, &mianjiweitiao::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON51, &mianjiweitiao::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON65, &mianjiweitiao::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON66, &mianjiweitiao::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON67, &mianjiweitiao::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON68, &mianjiweitiao::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON69, &mianjiweitiao::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON70, &mianjiweitiao::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON85, &mianjiweitiao::OnBnClickedButton85)
	ON_BN_CLICKED(IDC_BUTTON94, &mianjiweitiao::OnBnClickedButton94)
	ON_BN_CLICKED(IDC_BUTTON86, &mianjiweitiao::OnBnClickedButton86)
	ON_BN_CLICKED(IDC_BUTTON87, &mianjiweitiao::OnBnClickedButton87)
	ON_BN_CLICKED(IDC_BUTTON88, &mianjiweitiao::OnBnClickedButton88)
	ON_BN_CLICKED(IDC_BUTTON89, &mianjiweitiao::OnBnClickedButton89)
	ON_BN_CLICKED(IDC_BUTTON98, &mianjiweitiao::OnBnClickedButton98)
	ON_BN_CLICKED(IDC_BUTTON99, &mianjiweitiao::OnBnClickedButton99)
	ON_BN_CLICKED(IDC_BUTTON71, &mianjiweitiao::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON72, &mianjiweitiao::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON73, &mianjiweitiao::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON74, &mianjiweitiao::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON75, &mianjiweitiao::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON76, &mianjiweitiao::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON77, &mianjiweitiao::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON78, &mianjiweitiao::OnBnClickedButton78)
	ON_BN_CLICKED(IDC_BUTTON79, &mianjiweitiao::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON80, &mianjiweitiao::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_BUTTON81, &mianjiweitiao::OnBnClickedButton81)
	ON_BN_CLICKED(IDC_BUTTON82, &mianjiweitiao::OnBnClickedButton82)
	ON_BN_CLICKED(IDC_BUTTON100, &mianjiweitiao::OnBnClickedButton100)
	ON_BN_CLICKED(IDC_BUTTON101, &mianjiweitiao::OnBnClickedButton101)
	ON_BN_CLICKED(IDC_BUTTON102, &mianjiweitiao::OnBnClickedButton102)
	ON_BN_CLICKED(IDC_BUTTON103, &mianjiweitiao::OnBnClickedButton103)
	ON_BN_CLICKED(IDC_BUTTON106, &mianjiweitiao::OnBnClickedButton106)
	ON_BN_CLICKED(IDC_BUTTON107, &mianjiweitiao::OnBnClickedButton107)
	ON_BN_CLICKED(IDC_BUTTON156, &mianjiweitiao::OnBnClickedButton156)
	ON_BN_CLICKED(IDC_BUTTON108, &mianjiweitiao::OnBnClickedButton108)
END_MESSAGE_MAP()


// mianjiweitiao 消息处理程序


BOOL mianjiweitiao::PreTranslateMessage(MSG* pMsg)
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
			mianjiweitiaosd[0] = m_double1;
		}
		datatestDPU[4] = mianjiweitiaosd[0];
		if (modsd[0] != "OFF")
		{
			CMyPublicData::setfunc(32, 16, 105, 1);
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
				mianjiweitiaosd[10] = m_double11;
			}
			datatestDPU[4] = mianjiweitiaosd[10];
			if (modsd[1] != "OFF")
			{
				CMyPublicData::setfunc(33, 16, 105, 1);
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
					mianjiweitiaosd[2] = m_double3;
				}
				datatestDPU[4] = mianjiweitiaosd[2];
				if (modsd[4] != "OFF")
				{
					CMyPublicData::setfunc(36, 16, 105, 1);
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
						mianjiweitiaosd[3] = m_double4;
					}
					datatestDPU[4] = mianjiweitiaosd[3];
					if (modsd[6] != "OFF")
					{
						CMyPublicData::setfunc(38, 16, 105, 1);
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
							mianjiweitiaosd[4] = m_double5;
						}
						datatestDPU[4] = mianjiweitiaosd[4];
						if (modsd[8] != "OFF")
						{
							CMyPublicData::setfunc(40, 16, 105, 1);
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
								mianjiweitiaosd[5] = m_double6;
							}
							datatestDPU[4] = mianjiweitiaosd[5];
							if (modsd[10] != "OFF")
							{
								CMyPublicData::setfunc(42, 16, 105, 1);
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
									mianjiweitiaosd[6] = m_double7;
								}
								datatestDPU[4] = mianjiweitiaosd[6];
								if (modsd[12] != "OFF")
								{
									CMyPublicData::setfunc(44, 16, 105, 1);
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
										mianjiweitiaosd[7] = m_double8;
									}
									datatestDPU[4] = mianjiweitiaosd[7];
									if (modsd[14] != "OFF")
									{
										CMyPublicData::setfunc(46, 16, 105, 1);
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
											mianjiweitiaosd[8] = m_double9;
										}
										datatestDPU[4] = mianjiweitiaosd[8];
										if (modsd[16] != "OFF")
										{
											CMyPublicData::setfunc(48, 16, 105, 1);
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
											datatestDPU[4] = mianjiweitiaosd[9];
											if (modsd[18] != "OFF")
											{
												CMyPublicData::setfunc(50, 16, 105, 1);
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
													mianjiweitiaosd[11] = m_double12;
												}
												datatestDPU[4] = mianjiweitiaosd[11];
												if (modsd[3] != "OFF")
												{
													CMyPublicData::setfunc(35, 16, 105, 1);
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
														mianjiweitiaosd[12] = m_double13;
													}
													datatestDPU[4] = mianjiweitiaosd[12];
													if (modsd[5] != "OFF")
													{
														CMyPublicData::setfunc(37, 16, 105, 1);
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
															mianjiweitiaosd[13] = m_double14;
														}
														datatestDPU[4] = mianjiweitiaosd[13];
														if (modsd[7] != "OFF")
														{
															CMyPublicData::setfunc(39, 16, 105, 1);
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
																mianjiweitiaosd[14] = m_double15;
															}
															datatestDPU[4] = mianjiweitiaosd[14];
															if (modsd[9] != "OFF")
															{
																CMyPublicData::setfunc(41, 16, 105, 1);
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
																	mianjiweitiaosd[15] = m_double16;
																}
																datatestDPU[4] = mianjiweitiaosd[15];
																if (modsd[11] != "OFF")
																{
																	CMyPublicData::setfunc(43, 16, 105, 1);
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
																		mianjiweitiaosd[16] = m_double17;
																	}
																	datatestDPU[4] = mianjiweitiaosd[16];
																	if (modsd[13] != "OFF")
																	{
																		CMyPublicData::setfunc(45, 16, 105, 1);
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
																			mianjiweitiaosd[17] = m_double18;
																		}
																		datatestDPU[4] = mianjiweitiaosd[17];
																		if (modsd[15] != "OFF")
																		{
																			CMyPublicData::setfunc(47, 16, 105, 1);
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
																				mianjiweitiaosd[18] = m_double19;
																			}
																			datatestDPU[4] = mianjiweitiaosd[18];
																			if (modsd[17] != "OFF")
																			{
																				CMyPublicData::setfunc(49, 16, 105, 1);
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
																					mianjiweitiaosd[19] = m_double20;
																				}
																				datatestDPU[4] = mianjiweitiaosd[19];
																				if (modsd[19] != "OFF")
																				{
																					CMyPublicData::setfunc(51, 16, 105, 1);
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
																						mianjiweitiaosd[1] = m_double2;
																					}
																					datatestDPU[4] = mianjiweitiaosd[1];
																					if (modsd[2] != "OFF")
																					{
																						CMyPublicData::setfunc(34, 16, 105, 1);
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


void mianjiweitiao::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL mianjiweitiao::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num1901", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num1902", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num1903", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num1904", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	// TODO:  在此添加额外的初始化
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

void mianjiweitiao::ReSize()
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


//void mianjiweitiao::OnBnClickedButton1()
//{
//	// TODO: 在此添加控件通知处理程序代码
//}


void mianjiweitiao::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(mianjiweitiaosd[0]);
	opx.ModifyNode("num2501", str);
	str = opx.numtoString(mianjiweitiaosd[1]);
	opx.ModifyNode("num2502", str);
	str = opx.numtoString(mianjiweitiaosd[2]);
	opx.ModifyNode("num2503", str);
	str = opx.numtoString(mianjiweitiaosd[3]);
	opx.ModifyNode("num2504", str);
	str = opx.numtoString(mianjiweitiaosd[4]);
	opx.ModifyNode("num2505", str);
	str = opx.numtoString(mianjiweitiaosd[5]);
	opx.ModifyNode("num2506", str);
	str = opx.numtoString(mianjiweitiaosd[6]);
	opx.ModifyNode("num2507", str);
	str = opx.numtoString(mianjiweitiaosd[7]);
	opx.ModifyNode("num2508", str);
	str = opx.numtoString(mianjiweitiaosd[8]);
	opx.ModifyNode("num2509", str);
	str = opx.numtoString(mianjiweitiaosd[9]);
	opx.ModifyNode("num2510", str);
	str = opx.numtoString(mianjiweitiaosd[10]);
	opx.ModifyNode("num2511", str);
	str = opx.numtoString(mianjiweitiaosd[11]);
	opx.ModifyNode("num2512", str);
	str = opx.numtoString(mianjiweitiaosd[12]);
	opx.ModifyNode("num2513", str);
	str = opx.numtoString(mianjiweitiaosd[13]);
	opx.ModifyNode("num2514", str);
	str = opx.numtoString(mianjiweitiaosd[14]);
	opx.ModifyNode("num2515", str);
	str = opx.numtoString(mianjiweitiaosd[15]);
	opx.ModifyNode("num2516", str);
	str = opx.numtoString(mianjiweitiaosd[16]);
	opx.ModifyNode("num2517", str);
	str = opx.numtoString(mianjiweitiaosd[17]);
	opx.ModifyNode("num2518", str);
	str = opx.numtoString(mianjiweitiaosd[18]);
	opx.ModifyNode("num2519", str);
	str = opx.numtoString(mianjiweitiaosd[19]);
	opx.ModifyNode("num2520", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}





void mianjiweitiao::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		mianjiweitiaosd[0] = m_double1;
	}
	datatestDPU[4] = m_double1;
	if (modsd[0]!="OFF")
	{
		CMyPublicData::setfunc(32, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		mianjiweitiaosd[0] = m_double1;
	}
	datatestDPU[4] = m_double1;	
	if (modsd[0] != "OFF")
	{
		CMyPublicData::setfunc(32, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		mianjiweitiaosd[1] = m_double2;
	}
	datatestDPU[4] = m_double2;
	if (modsd[2] != "OFF")
	{
		CMyPublicData::setfunc(34, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		mianjiweitiaosd[1] = m_double2;
	}
	datatestDPU[4] = m_double2;
	if (modsd[2] != "OFF")
	{
		CMyPublicData::setfunc(34, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton64()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		mianjiweitiaosd[2] = m_double3;
	}
	datatestDPU[4] = m_double3;
	if (modsd[4] != "OFF")
	{
		CMyPublicData::setfunc(36, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton51()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		mianjiweitiaosd[2] = m_double3;
	}
	datatestDPU[4] = m_double3;
	if (modsd[4] != "OFF")
	{
		CMyPublicData::setfunc(36, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton65()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		mianjiweitiaosd[3] = m_double4;
	}
	datatestDPU[4] = m_double4;
	if (modsd[6] != "OFF")
	{
		CMyPublicData::setfunc(38, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		mianjiweitiaosd[3] = m_double4;
	}
	datatestDPU[4] = m_double4;
	if (modsd[6] != "OFF")
	{
		CMyPublicData::setfunc(38, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton67()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		mianjiweitiaosd[4] = m_double5;
	}
	datatestDPU[4] = m_double5;
	if (modsd[8] != "OFF")
	{
		CMyPublicData::setfunc(40, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton68()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		mianjiweitiaosd[4] = m_double5;
	}
	datatestDPU[4] = m_double5;
	if (modsd[8] != "OFF")
	{
		CMyPublicData::setfunc(40, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		mianjiweitiaosd[5] = m_double6;
	}
	datatestDPU[4] = m_double6;
	if (modsd[10] != "OFF")
	{
		CMyPublicData::setfunc(42, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		mianjiweitiaosd[5] = m_double6;
	}
	datatestDPU[4] = m_double6;
	if (modsd[10] != "OFF")
	{
		CMyPublicData::setfunc(42, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton85()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		mianjiweitiaosd[6] = m_double7;
	}
	datatestDPU[4] = m_double7;
	if (modsd[12] != "OFF")
	{
		CMyPublicData::setfunc(44, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton94()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		mianjiweitiaosd[6] = m_double7;
	}
	datatestDPU[4] = m_double7;
	if (modsd[12] != "OFF")
	{
		CMyPublicData::setfunc(44, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton86()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		mianjiweitiaosd[7] = m_double8;
	}
	datatestDPU[4] = m_double8;
	if (modsd[14] != "OFF")
	{
		CMyPublicData::setfunc(46, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton87()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		mianjiweitiaosd[7] = m_double8;
	}
	datatestDPU[4] = m_double8;
	if (modsd[14] != "OFF")
	{
		CMyPublicData::setfunc(46, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton88()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		mianjiweitiaosd[8] = m_double9;
	}
	datatestDPU[4] = m_double9;
	if (modsd[16] != "OFF")
	{
		CMyPublicData::setfunc(48, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton89()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		mianjiweitiaosd[8] = m_double9;
	}
	datatestDPU[4] = m_double9;
	if (modsd[16] != "OFF")
	{
		CMyPublicData::setfunc(48, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton98()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		mianjiweitiaosd[9] = m_double10;
	}
	datatestDPU[4] = m_double10;
	if (modsd[18] != "OFF")
	{
		CMyPublicData::setfunc(50, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton99()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		mianjiweitiaosd[9] = m_double10;
	}
	datatestDPU[4] = m_double10;
	if (modsd[18] != "OFF")
	{
		CMyPublicData::setfunc(50, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		mianjiweitiaosd[10] = m_double11;
	}
	datatestDPU[4] = m_double11;
	if (modsd[1] != "OFF")
	{
		CMyPublicData::setfunc(33, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		mianjiweitiaosd[10] = m_double11;
	}
	datatestDPU[4] = m_double11;
	if (modsd[1] != "OFF")
	{
		CMyPublicData::setfunc(33, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		mianjiweitiaosd[11] = m_double12;
	}
	datatestDPU[4] = m_double12;
	if (modsd[3] != "OFF")
	{
		CMyPublicData::setfunc(35, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		mianjiweitiaosd[11] = m_double12;
	}
	datatestDPU[4] = m_double12;
	if (modsd[3] != "OFF")
	{
		CMyPublicData::setfunc(35, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton75()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double13++;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[12] = m_double13;
	}
	else
	{
		m_double13--;
		UpdateData(FALSE);
		mianjiweitiaosd[12] = m_double13;
	}
	datatestDPU[4] = m_double13;
	if (modsd[5] != "OFF")
	{
		CMyPublicData::setfunc(37, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13--;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[12] = m_double13;
	}
	else
	{
		m_double13++;
		UpdateData(FALSE);
		mianjiweitiaosd[12] = m_double13;
	}
	datatestDPU[4] = m_double13;
	if (modsd[5] != "OFF")
	{
		CMyPublicData::setfunc(37, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton77()
{
	// TODO: 在此添加控件通知处理程序代码
	m_double14++;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[13] = m_double14;
	}
	else
	{
		m_double14--;
		UpdateData(FALSE);
		mianjiweitiaosd[13] = m_double14;
	}
	datatestDPU[4] = m_double14;	
	if (modsd[7] != "OFF")
	{
		CMyPublicData::setfunc(39, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton78()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14--;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[13] = m_double14;
	}
	else
	{
		m_double14++;
		UpdateData(FALSE);
		mianjiweitiaosd[13] = m_double14;
	}
	datatestDPU[4] = m_double14;
	if (modsd[7] != "OFF")
	{
		CMyPublicData::setfunc(39, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton79()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15++;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[14] = m_double15;
	}
	else
	{
		m_double15--;
		UpdateData(FALSE);
		mianjiweitiaosd[14] = m_double15;
	}
	datatestDPU[4] = m_double15;
	if (modsd[9] != "OFF")
	{
		CMyPublicData::setfunc(41, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton80()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15--;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[14] = m_double15;
	}
	else
	{
		m_double15++;
		UpdateData(FALSE);
		mianjiweitiaosd[14] = m_double15;
	}
	datatestDPU[4] = m_double15;
	if (modsd[9] != "OFF")
	{
		CMyPublicData::setfunc(41, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton81()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16++;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[15] = m_double16;
	}
	else
	{
		m_double16--;
		UpdateData(FALSE);
		mianjiweitiaosd[15] = m_double16;
	}
	datatestDPU[4] = m_double16;
	if (modsd[11] != "OFF")
	{
		CMyPublicData::setfunc(43, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton82()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16--;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[15] = m_double16;
	}
	else
	{
		m_double16++;
		UpdateData(FALSE);
		mianjiweitiaosd[15] = m_double16;
	}
	datatestDPU[4] = m_double16;
	if (modsd[11] != "OFF")
	{
		CMyPublicData::setfunc(43, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton100()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17++;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[16] = m_double17;
	}
	else
	{
		m_double17--;
		UpdateData(FALSE);
		mianjiweitiaosd[16] = m_double17;
	}
	datatestDPU[4] = m_double17;	
	if (modsd[13] != "OFF")
	{
		CMyPublicData::setfunc(45, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton101()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17--;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[16] = m_double17;
	}
	else
	{
		m_double17++;
		UpdateData(FALSE);
		mianjiweitiaosd[16] = m_double17;
	}
	datatestDPU[4] = m_double17;
	if (modsd[13] != "OFF")
	{
		CMyPublicData::setfunc(45, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton102()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18++;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[17] = m_double18;
	}
	else
	{
		m_double18--;
		UpdateData(FALSE);
		mianjiweitiaosd[17] = m_double18;
	}
	datatestDPU[4] = m_double18;
	if (modsd[15] != "OFF")
	{
		CMyPublicData::setfunc(47, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton103()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18--;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[17] = m_double18;
	}
	else
	{
		m_double18++;
		UpdateData(FALSE);
		mianjiweitiaosd[17] = m_double18;
	}
	datatestDPU[4] = m_double18;
	if (modsd[15] != "OFF")
	{
		CMyPublicData::setfunc(47, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton106()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19++;
	if (0 <= m_double19&& m_double19 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[18] = m_double19;
	}
	else
	{
		m_double19--;
		UpdateData(FALSE);
		mianjiweitiaosd[18] = m_double19;
	}
	datatestDPU[4] = m_double19;
	if (modsd[17] != "OFF")
	{
		CMyPublicData::setfunc(49, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton107()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19--;
	if (0 <= m_double19&& m_double19 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[18] = m_double19;
	}
	else
	{
		m_double19++;
		UpdateData(FALSE);
		mianjiweitiaosd[18] = m_double19;
	}
	datatestDPU[4] = m_double19;
	if (modsd[17] != "OFF")
	{
		CMyPublicData::setfunc(49, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton156()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20++;
	if (0 <= m_double20&& m_double20 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[19] = m_double20;
	}
	else
	{
		m_double20--;
		UpdateData(FALSE);
		mianjiweitiaosd[19] = m_double20;
	}
	datatestDPU[4] = m_double20;
	if (modsd[19] != "OFF")
	{
		CMyPublicData::setfunc(51, 16, 105, 1);
	}
}


void mianjiweitiao::OnBnClickedButton108()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20--;
	if (0 <= m_double20&& m_double20 <= 255)
	{
		UpdateData(FALSE);
		mianjiweitiaosd[19] = m_double20;
	}
	else
	{
		m_double20++;
		UpdateData(FALSE);
		mianjiweitiaosd[19] = m_double20;
	}
	datatestDPU[4] = m_double20;
	if (modsd[19] != "OFF")
	{
		CMyPublicData::setfunc(51, 16, 105, 1);
	}
}
