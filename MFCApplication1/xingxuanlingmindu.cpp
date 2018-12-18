// xingxuanlingmindu.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "xingxuanlingmindu.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include "mianjiweitiao.h"
#include "huiduhulue.h"
// xingxuanlingmindu 对话框

IMPLEMENT_DYNAMIC(xingxuanlingmindu, CDialogEx)

xingxuanlingmindu::xingxuanlingmindu(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_XINGXUANLINGMINDU_DIALOG, pParent)
	, m_double1(xingxuanlingmindusd[0])
	, m_double2(xingxuanlingmindusd[1])
	, m_double3(xingxuanlingmindusd[2])
	, m_double4(xingxuanlingmindusd[3])
	, m_double5(xingxuanlingmindusd[4])
	, m_double6(xingxuanlingmindusd[5])
	, m_double7(xingxuanlingmindusd[6])
	, m_double8(xingxuanlingmindusd[7])
	, m_double9(xingxuanlingmindusd[8])
	, m_double10(xingxuanlingmindusd[9])
	, m_double11(xingxuanlingmindusd[10])
	, m_double12(xingxuanlingmindusd[11])
	, m_double13(xingxuanlingmindusd[12])
	, m_double14(xingxuanlingmindusd[13])
	, m_double15(xingxuanlingmindusd[14])
	, m_double16(xingxuanlingmindusd[15])
	, m_double17(xingxuanlingmindusd[16])
	, m_double18(xingxuanlingmindusd[17])
	, m_double19(xingxuanlingmindusd[18])
	, m_double20(xingxuanlingmindusd[19])
{

}

xingxuanlingmindu::~xingxuanlingmindu()
{
}

void xingxuanlingmindu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, m_double1);
	DDX_Text(pDX, IDC_EDIT18, m_double2);
	DDX_Text(pDX, IDC_EDIT30, m_double3);
	DDX_Text(pDX, IDC_EDIT31, m_double4);
	DDX_Text(pDX, IDC_EDIT32, m_double5);
	DDX_Text(pDX, IDC_EDIT33, m_double6);
	DDX_Text(pDX, IDC_EDIT47, m_double7);
	DDX_Text(pDX, IDC_EDIT48, m_double8);
	DDX_Text(pDX, IDC_EDIT49, m_double9);
	DDX_Text(pDX, IDC_EDIT50, m_double10);
	DDX_Text(pDX, IDC_EDIT34, m_double11);
	DDX_Text(pDX, IDC_EDIT35, m_double12);
	DDX_Text(pDX, IDC_EDIT36, m_double13);
	DDX_Text(pDX, IDC_EDIT37, m_double14);
	DDX_Text(pDX, IDC_EDIT38, m_double15);
	DDX_Text(pDX, IDC_EDIT39, m_double16);
	DDX_Text(pDX, IDC_EDIT51, m_double17);
	DDX_Text(pDX, IDC_EDIT52, m_double18);
	DDX_Text(pDX, IDC_EDIT53, m_double19);
	DDX_Text(pDX, IDC_EDIT54, m_double20);
	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA, m_tingzhi);
}


BEGIN_MESSAGE_MAP(xingxuanlingmindu, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON12, &xingxuanlingmindu::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &xingxuanlingmindu::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON71, &xingxuanlingmindu::OnBnClickedButton71)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON72, &xingxuanlingmindu::OnBnClickedButton72)
	ON_BN_CLICKED(IDCANCEL, &xingxuanlingmindu::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON14, &xingxuanlingmindu::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON108, &xingxuanlingmindu::OnBnClickedButton108)
	ON_BN_CLICKED(IDC_BUTTON15, &xingxuanlingmindu::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON64, &xingxuanlingmindu::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON51, &xingxuanlingmindu::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON65, &xingxuanlingmindu::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON66, &xingxuanlingmindu::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON67, &xingxuanlingmindu::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON68, &xingxuanlingmindu::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON69, &xingxuanlingmindu::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON70, &xingxuanlingmindu::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON85, &xingxuanlingmindu::OnBnClickedButton85)
	ON_BN_CLICKED(IDC_BUTTON94, &xingxuanlingmindu::OnBnClickedButton94)
	ON_BN_CLICKED(IDC_BUTTON86, &xingxuanlingmindu::OnBnClickedButton86)
	ON_BN_CLICKED(IDC_BUTTON87, &xingxuanlingmindu::OnBnClickedButton87)
	ON_BN_CLICKED(IDC_BUTTON88, &xingxuanlingmindu::OnBnClickedButton88)
	ON_BN_CLICKED(IDC_BUTTON89, &xingxuanlingmindu::OnBnClickedButton89)
	ON_BN_CLICKED(IDC_BUTTON98, &xingxuanlingmindu::OnBnClickedButton98)
	ON_BN_CLICKED(IDC_BUTTON99, &xingxuanlingmindu::OnBnClickedButton99)
	ON_BN_CLICKED(IDC_BUTTON73, &xingxuanlingmindu::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON74, &xingxuanlingmindu::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON75, &xingxuanlingmindu::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON76, &xingxuanlingmindu::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON77, &xingxuanlingmindu::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON78, &xingxuanlingmindu::OnBnClickedButton78)
	ON_BN_CLICKED(IDC_BUTTON79, &xingxuanlingmindu::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON80, &xingxuanlingmindu::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_BUTTON81, &xingxuanlingmindu::OnBnClickedButton81)
	ON_BN_CLICKED(IDC_BUTTON82, &xingxuanlingmindu::OnBnClickedButton82)
	ON_BN_CLICKED(IDC_BUTTON100, &xingxuanlingmindu::OnBnClickedButton100)
	ON_BN_CLICKED(IDC_BUTTON101, &xingxuanlingmindu::OnBnClickedButton101)
	ON_BN_CLICKED(IDC_BUTTON102, &xingxuanlingmindu::OnBnClickedButton102)
	ON_BN_CLICKED(IDC_BUTTON103, &xingxuanlingmindu::OnBnClickedButton103)
	ON_BN_CLICKED(IDC_BUTTON106, &xingxuanlingmindu::OnBnClickedButton106)
	ON_BN_CLICKED(IDC_BUTTON107, &xingxuanlingmindu::OnBnClickedButton107)
	ON_BN_CLICKED(IDC_BUTTON109, &xingxuanlingmindu::OnBnClickedButton109)
//	ON_BN_CLICKED(IDC_BUTTON83, &xingxuanlingmindu::OnBnClickedButton83)
//	ON_BN_CLICKED(IDC_BUTTON84, &xingxuanlingmindu::OnBnClickedButton84)
	ON_BN_CLICKED(IDC_KAISHIDA, &xingxuanlingmindu::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &xingxuanlingmindu::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// xingxuanlingmindu 消息处理程序


void xingxuanlingmindu::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		xingxuanlingmindusd[0] = m_double1;
	}
	datatestDPU[4] = m_double1;
	if (modsd[0] != "OFF")
	{
		CMyPublicData::setfunc(32, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		xingxuanlingmindusd[0] = m_double1;
	}
	datatestDPU[4] = m_double1;
	if (modsd[0] != "OFF")
	{
		CMyPublicData::setfunc(32, 16, 103, 1);
	}
}


BOOL xingxuanlingmindu::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
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
			m_double1 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			xingxuanlingmindusd[0] = m_double1;
		}
		datatestDPU[4] = xingxuanlingmindusd[0];	
		if (modsd[0] != "OFF")
		{
			CMyPublicData::setfunc(32, 16, 103, 1);
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
				m_double11 = _wtof(dlg.ValueShow);
				UpdateData(FALSE);
				xingxuanlingmindusd[10] = m_double11;
			}
			datatestDPU[4] = xingxuanlingmindusd[10];
			if (modsd[1] != "OFF")
			{
				CMyPublicData::setfunc(33, 16, 103, 1);
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
					m_double3 = _wtof(dlg.ValueShow);
					UpdateData(FALSE);
					xingxuanlingmindusd[2] = m_double3;
				}
				datatestDPU[4] = xingxuanlingmindusd[2];
				if (modsd[4] != "OFF")
				{
					CMyPublicData::setfunc(36, 16, 103, 1);
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
						m_double4 = _wtof(dlg.ValueShow);
						UpdateData(FALSE);
						xingxuanlingmindusd[3] = m_double4;
					}
					datatestDPU[4] = xingxuanlingmindusd[3];
					if (modsd[6] != "OFF")
					{
						CMyPublicData::setfunc(38, 16, 103, 1);
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
							m_double5 = _wtof(dlg.ValueShow);
							UpdateData(FALSE);
							xingxuanlingmindusd[4] = m_double5;
						}
						datatestDPU[4] = xingxuanlingmindusd[4];
						if (modsd[8] != "OFF")
						{
							CMyPublicData::setfunc(40, 16, 103, 1);
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
								m_double6 = _wtof(dlg.ValueShow);
								UpdateData(FALSE);
								xingxuanlingmindusd[5] = m_double6;
							}
							datatestDPU[4] = xingxuanlingmindusd[5];
							if (modsd[10] != "OFF")
							{
								CMyPublicData::setfunc(42, 16, 103, 1);
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
									m_double7 = _wtof(dlg.ValueShow);
									UpdateData(FALSE);
									xingxuanlingmindusd[6] = m_double7;
								}
								datatestDPU[4] = xingxuanlingmindusd[6];
								if (modsd[12] != "OFF")
								{
									CMyPublicData::setfunc(44, 16, 103, 1);
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
										m_double8 = _wtof(dlg.ValueShow);
										UpdateData(FALSE);
										xingxuanlingmindusd[7] = m_double8;
									}
									datatestDPU[4] = xingxuanlingmindusd[7];
									if (modsd[14] != "OFF")
									{
										CMyPublicData::setfunc(46, 16, 103, 1);
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
											m_double9 = _wtof(dlg.ValueShow);
											UpdateData(FALSE);
											xingxuanlingmindusd[8] = m_double9;
										}
										datatestDPU[4] = xingxuanlingmindusd[8];
										if (modsd[16] != "OFF")
										{
											CMyPublicData::setfunc(48, 16, 103, 1);
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
												m_double10 = _wtof(dlg.ValueShow);
												UpdateData(FALSE);
												xingxuanlingmindusd[9] = m_double10;
											}
											datatestDPU[4] = xingxuanlingmindusd[9];
											if (modsd[18] != "OFF")
											{
												CMyPublicData::setfunc(50, 16, 103, 1);
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
													m_double12 = _wtof(dlg.ValueShow);
													UpdateData(FALSE);
													xingxuanlingmindusd[11] = m_double12;
												}
												datatestDPU[4] = xingxuanlingmindusd[11];
												if (modsd[3] != "OFF")
												{
													CMyPublicData::setfunc(35, 16, 103, 1);
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
														m_double13 = _wtof(dlg.ValueShow);
														UpdateData(FALSE);
														xingxuanlingmindusd[12] = m_double13;
													}
													datatestDPU[4] = xingxuanlingmindusd[12];
													if (modsd[5] != "OFF")
													{
														CMyPublicData::setfunc(37, 16, 103, 1);
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
															m_double14 = _wtof(dlg.ValueShow);
															UpdateData(FALSE);
															xingxuanlingmindusd[13] = m_double14;
														}
														datatestDPU[4] = xingxuanlingmindusd[13];
														if (modsd[7] != "OFF")
														{
															CMyPublicData::setfunc(39, 16, 103, 1);
														}
														return TRUE;
													}
													else
													{
														CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT38);
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
																xingxuanlingmindusd[14] = m_double15;
															}
															datatestDPU[4] = xingxuanlingmindusd[14];
															if (modsd[9] != "OFF")
															{
																CMyPublicData::setfunc(41, 16, 103, 1);
															}
															return TRUE;
														}
														else
														{
															CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT39);
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
																	xingxuanlingmindusd[15] = m_double16;
																}
																datatestDPU[4] = xingxuanlingmindusd[15];
																if (modsd[11] != "OFF")
																{
																	CMyPublicData::setfunc(43, 16, 103, 1);
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
																		m_double17 = _wtof(dlg.ValueShow);
																		UpdateData(FALSE);
																		xingxuanlingmindusd[16] = m_double17;
																	}
																	datatestDPU[4] = xingxuanlingmindusd[16];
																	if (modsd[13] != "OFF")
																	{
																		CMyPublicData::setfunc(45, 16, 103, 1);
																	}
																	return TRUE;
																}
																else
																{
																	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT52);
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
																			xingxuanlingmindusd[17] = m_double18;
																		}
																		datatestDPU[4] = xingxuanlingmindusd[17];
																		if (modsd[15] != "OFF")
																		{
																			CMyPublicData::setfunc(47, 16, 103, 1);
																		}
																		return TRUE;
																	}
																	else
																	{
																		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT53);
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
																				xingxuanlingmindusd[18] = m_double19;
																			}
																			datatestDPU[4] = xingxuanlingmindusd[18];
																			if (modsd[17] != "OFF")
																			{
																				CMyPublicData::setfunc(49, 16, 103, 1);
																			}
																			return TRUE;
																		}
																		else
																		{
																			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT54);
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
																					xingxuanlingmindusd[19] = m_double20;
																				}
																				datatestDPU[4] = xingxuanlingmindusd[19];
																				if (modsd[19] != "OFF")
																				{
																					CMyPublicData::setfunc(51, 16, 103, 1);
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
																						m_double2 = _wtof(dlg.ValueShow);
																						UpdateData(FALSE);
																						xingxuanlingmindusd[1] = m_double2;
																					}
																					datatestDPU[4] = xingxuanlingmindusd[1];
																					if (modsd[2] != "OFF")
																					{
																						CMyPublicData::setfunc(34, 16, 103, 1);
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


void xingxuanlingmindu::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		xingxuanlingmindusd[10] = m_double11;
	}
	datatestDPU[4] = xingxuanlingmindusd[10];
	if (modsd[1] != "OFF")
	{
		CMyPublicData::setfunc(33, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL xingxuanlingmindu::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num3701", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC0)->SetWindowText(cstr);
	opx.QueryNode_Text("num3702", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num3703", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num3704", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC21)->SetWindowText(cstr);
	opx.QueryNode_Text("num3705", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC22)->SetWindowText(cstr);
	opx.QueryNode_Text("num3706", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();

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

	UpdateData(FALSE);
	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//初始化窗口位置
	CRect rect;
	GetClientRect(&rect);     //取客户区大小    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;


	int nMargin = 15;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT2)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT30)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT31)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT32)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT33)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT47)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT48)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT49)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT50)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT36)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT37)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT38)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT39)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT51)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT52)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT53)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT54)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void xingxuanlingmindu::ReSize()
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

void xingxuanlingmindu::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[10] = m_double11;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		xingxuanlingmindusd[10] = m_double11;
	}
	datatestDPU[4] = m_double11;
	if (modsd[1] != "OFF")
	{
		CMyPublicData::setfunc(33, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(xingxuanlingmindusd[0]);
	opx.ModifyNode("num3001", str);
	str = opx.numtoString(xingxuanlingmindusd[1]);
	opx.ModifyNode("num3002", str);
	str = opx.numtoString(xingxuanlingmindusd[2]);
	opx.ModifyNode("num3003", str);
	str = opx.numtoString(xingxuanlingmindusd[3]);
	opx.ModifyNode("num3004", str);
	str = opx.numtoString(xingxuanlingmindusd[4]);
	opx.ModifyNode("num3005", str);
	str = opx.numtoString(xingxuanlingmindusd[5]);
	opx.ModifyNode("num3006", str);
	str = opx.numtoString(xingxuanlingmindusd[6]);
	opx.ModifyNode("num3007", str);
	str = opx.numtoString(xingxuanlingmindusd[7]);
	opx.ModifyNode("num3008", str);
	str = opx.numtoString(xingxuanlingmindusd[8]);
	opx.ModifyNode("num3009", str);
	str = opx.numtoString(xingxuanlingmindusd[9]);
	opx.ModifyNode("num3010", str);
	str = opx.numtoString(xingxuanlingmindusd[10]);
	opx.ModifyNode("num3011", str);
	str = opx.numtoString(xingxuanlingmindusd[11]);
	opx.ModifyNode("num3012", str);
	str = opx.numtoString(xingxuanlingmindusd[12]);
	opx.ModifyNode("num3013", str);
	str = opx.numtoString(xingxuanlingmindusd[13]);
	opx.ModifyNode("num3014", str);
	str = opx.numtoString(xingxuanlingmindusd[14]);
	opx.ModifyNode("num3015", str);
	str = opx.numtoString(xingxuanlingmindusd[15]);
	opx.ModifyNode("num3016", str);
	str = opx.numtoString(xingxuanlingmindusd[16]);
	opx.ModifyNode("num3017", str);
	str = opx.numtoString(xingxuanlingmindusd[17]);
	opx.ModifyNode("num3018", str);
	str = opx.numtoString(xingxuanlingmindusd[18]);
	opx.ModifyNode("num3019", str);
	str = opx.numtoString(xingxuanlingmindusd[19]);
	opx.ModifyNode("num3020", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void xingxuanlingmindu::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		xingxuanlingmindusd[1] = m_double2;
	}
	datatestDPU[4] = xingxuanlingmindusd[1];
	if (modsd[2] != "OFF")
	{
		CMyPublicData::setfunc(34, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton108()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20++;
	if (0 <= m_double20&& m_double20 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[19] = m_double20;
	}
	else
	{
		m_double20--;
		UpdateData(FALSE);
		xingxuanlingmindusd[19] = m_double20;
	}
	datatestDPU[4] = xingxuanlingmindusd[19];
	if (modsd[19] != "OFF")
	{
		CMyPublicData::setfunc(51, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		xingxuanlingmindusd[1] = m_double2;
	}
	datatestDPU[4] = xingxuanlingmindusd[1];
	if (modsd[2] != "OFF")
	{
		CMyPublicData::setfunc(34, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton64()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		xingxuanlingmindusd[2] = m_double3;
	}
	datatestDPU[4] = xingxuanlingmindusd[2];
	if (modsd[4] != "OFF")
	{
		CMyPublicData::setfunc(36, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton51()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		xingxuanlingmindusd[2] = m_double3;
	}
	datatestDPU[4] = xingxuanlingmindusd[2];
	if (modsd[4] != "OFF")
	{
		CMyPublicData::setfunc(36, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton65()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		xingxuanlingmindusd[3] = m_double4;
	}
	datatestDPU[4] = xingxuanlingmindusd[3];
	if (modsd[6] != "OFF")
	{
		CMyPublicData::setfunc(38, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		xingxuanlingmindusd[3] = m_double4;
	}
	datatestDPU[4] = xingxuanlingmindusd[3];
	if (modsd[6] != "OFF")
	{
		CMyPublicData::setfunc(38, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton67()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		xingxuanlingmindusd[4] = m_double5;
	}
	datatestDPU[4] = xingxuanlingmindusd[4];
	if (modsd[8] != "OFF")
	{
		CMyPublicData::setfunc(40, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton68()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		xingxuanlingmindusd[4] = m_double5;
	}
	datatestDPU[4] = xingxuanlingmindusd[4];
	if (modsd[8] != "OFF")
	{
		CMyPublicData::setfunc(40, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		xingxuanlingmindusd[5] = m_double6;
	}
	datatestDPU[4] = xingxuanlingmindusd[5];
	if (modsd[10] != "OFF")
	{
		CMyPublicData::setfunc(42, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		xingxuanlingmindusd[5] = m_double6;
	}
	datatestDPU[4] = xingxuanlingmindusd[5];
	if (modsd[10] != "OFF")
	{
		CMyPublicData::setfunc(42, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton85()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		xingxuanlingmindusd[6] = m_double7;
	}
	datatestDPU[4] = xingxuanlingmindusd[6];
	if (modsd[12] != "OFF")
	{
		CMyPublicData::setfunc(44, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton94()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		xingxuanlingmindusd[6] = m_double7;
	}
	datatestDPU[4] = xingxuanlingmindusd[6];
	if (modsd[12] != "OFF")
	{
		CMyPublicData::setfunc(44, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton86()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		xingxuanlingmindusd[7] = m_double8;
	}
	datatestDPU[4] = xingxuanlingmindusd[7];
	if (modsd[14] != "OFF")
	{
		CMyPublicData::setfunc(46, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton87()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		xingxuanlingmindusd[7] = m_double8;
	}
	datatestDPU[4] = xingxuanlingmindusd[7];
	if (modsd[14] != "OFF")
	{
		CMyPublicData::setfunc(46, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton88()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		xingxuanlingmindusd[8] = m_double9;
	}
	datatestDPU[4] = xingxuanlingmindusd[8];
	if (modsd[16] != "OFF")
	{
		CMyPublicData::setfunc(48, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton89()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		xingxuanlingmindusd[8] = m_double9;
	}
	datatestDPU[4] = xingxuanlingmindusd[8];
	if (modsd[16] != "OFF")
	{
		CMyPublicData::setfunc(48, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton98()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		xingxuanlingmindusd[9] = m_double10;
	}
	datatestDPU[4] = xingxuanlingmindusd[9];
	if (modsd[18] != "OFF")
	{
		CMyPublicData::setfunc(50, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton99()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		xingxuanlingmindusd[9] = m_double10;
	}
	datatestDPU[4] = xingxuanlingmindusd[9];
	if (modsd[18] != "OFF")
	{
		CMyPublicData::setfunc(50, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		xingxuanlingmindusd[11] = m_double12;
	}
	datatestDPU[4] = xingxuanlingmindusd[11];
	if (modsd[3] != "OFF")
	{
		CMyPublicData::setfunc(35, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		xingxuanlingmindusd[11] = m_double12;
	}
	datatestDPU[4] = xingxuanlingmindusd[11];
	if (modsd[3] != "OFF")
	{
		CMyPublicData::setfunc(35, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton75()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13++;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[12] = m_double13;
	}
	else
	{
		m_double13--;
		UpdateData(FALSE);
		xingxuanlingmindusd[12] = m_double13;
	}
	datatestDPU[4] = xingxuanlingmindusd[12];
	if (modsd[5] != "OFF")
	{
		CMyPublicData::setfunc(37, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13--;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[12] = m_double13;
	}
	else
	{
		m_double13++;
		UpdateData(FALSE);
		xingxuanlingmindusd[12] = m_double13;
	}
	datatestDPU[4] = xingxuanlingmindusd[12];
	if (modsd[5] != "OFF")
	{
		CMyPublicData::setfunc(37, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton77()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14++;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[13] = m_double14;
	}
	else
	{
		m_double14--;
		UpdateData(FALSE);
		xingxuanlingmindusd[13] = m_double14;
	}
	datatestDPU[4] = xingxuanlingmindusd[13];
	if (modsd[7] != "OFF")
	{
		CMyPublicData::setfunc(39, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton78()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14--;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[13] = m_double14;
	}
	else
	{
		m_double14++;
		UpdateData(FALSE);
		xingxuanlingmindusd[13] = m_double14;
	}
	datatestDPU[4] = xingxuanlingmindusd[13];
	if (modsd[7] != "OFF")
	{
		CMyPublicData::setfunc(39, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton79()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15++;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[14] = m_double15;
	}
	else
	{
		m_double15--;
		UpdateData(FALSE);
		xingxuanlingmindusd[14] = m_double15;
	}
	datatestDPU[4] = xingxuanlingmindusd[14];
	if (modsd[9] != "OFF")
	{
		CMyPublicData::setfunc(41, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton80()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15--;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[14] = m_double15;
	}
	else
	{
		m_double15++;
		UpdateData(FALSE);
		xingxuanlingmindusd[14] = m_double15;
	}
	datatestDPU[4] = xingxuanlingmindusd[14];
	if (modsd[9] != "OFF")
	{
		CMyPublicData::setfunc(41, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton81()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16++;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[15] = m_double16;
	}
	else
	{
		m_double16--;
		UpdateData(FALSE);
		xingxuanlingmindusd[15] = m_double16;
	}
	datatestDPU[4] = xingxuanlingmindusd[15];
	if (modsd[11] != "OFF")
	{
		CMyPublicData::setfunc(43, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton82()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16--;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[15] = m_double16;
	}
	else
	{
		m_double16++;
		UpdateData(FALSE);
		xingxuanlingmindusd[15] = m_double16;
	}
	datatestDPU[4] = xingxuanlingmindusd[15];
	if (modsd[11] != "OFF")
	{
		CMyPublicData::setfunc(43, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton100()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17++;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[16] = m_double17;
	}
	else
	{
		m_double17--;
		UpdateData(FALSE);
		xingxuanlingmindusd[16] = m_double17;
	}
	datatestDPU[4] = xingxuanlingmindusd[16];
	if (modsd[13] != "OFF")
	{
		CMyPublicData::setfunc(45, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton101()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17--;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[16] = m_double17;
	}
	else
	{
		m_double17++;
		UpdateData(FALSE);
		xingxuanlingmindusd[16] = m_double17;
	}
	datatestDPU[4] = xingxuanlingmindusd[16];
	if (modsd[13] != "OFF")
	{
		CMyPublicData::setfunc(45, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton102()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18++;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[17] = m_double18;
	}
	else
	{
		m_double18--;
		UpdateData(FALSE);
		xingxuanlingmindusd[17] = m_double18;
	}
	datatestDPU[4] = xingxuanlingmindusd[17];
	if (modsd[15] != "OFF")
	{
		CMyPublicData::setfunc(47, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton103()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18--;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[17] = m_double18;
	}
	else
	{
		m_double18++;
		UpdateData(FALSE);
		xingxuanlingmindusd[17] = m_double18;
	}
	datatestDPU[4] = xingxuanlingmindusd[17];
	if (modsd[15] != "OFF")
	{
		CMyPublicData::setfunc(47, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton106()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19++;
	if (0 <= m_double19&& m_double19 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[18] = m_double19;
	}
	else
	{
		m_double19--;
		UpdateData(FALSE);
		xingxuanlingmindusd[18] = m_double19;
	}
	datatestDPU[4] = xingxuanlingmindusd[18];
	if (modsd[17] != "OFF")
	{
		CMyPublicData::setfunc(49, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton107()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19--;
	if (0 <= m_double19&& m_double19 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[18] = m_double19;
	}
	else
	{
		m_double19++;
		UpdateData(FALSE);
		xingxuanlingmindusd[18] = m_double19;
	}
	datatestDPU[4] = xingxuanlingmindusd[18];
	if (modsd[17] != "OFF")
	{
		CMyPublicData::setfunc(49, 16, 103, 1);
	}
}


void xingxuanlingmindu::OnBnClickedButton109()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20--;
	if (0 <= m_double20&& m_double20 <= 255)
	{
		UpdateData(FALSE);
		xingxuanlingmindusd[19] = m_double20;
	}
	else
	{
		m_double20++;
		UpdateData(FALSE);
		xingxuanlingmindusd[19] = m_double20;
	}
	datatestDPU[4] = xingxuanlingmindusd[19];
	if (modsd[19] != "OFF")
	{
		CMyPublicData::setfunc(51, 16, 103, 1);
	}
}




void xingxuanlingmindu::OnBnClickedKaishida()
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


void xingxuanlingmindu::OnBnClickedTingzhida()
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
