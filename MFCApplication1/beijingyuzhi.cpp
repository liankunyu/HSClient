// beijingyuzhi.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "beijingyuzhi.h"
#include "afxdialogex.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
// beijingyuzhi 对话框

IMPLEMENT_DYNAMIC(beijingyuzhi, CDialogEx)

beijingyuzhi::beijingyuzhi(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_BEIJINGFAZHI_DIALOG, pParent)
	, m_double1(beijingyuzhisheding[0])
	, m_double2(beijingyuzhisheding[1])
	, m_double3(beijingyuzhisheding[2])
	, m_double4(beijingyuzhisheding[3])
	, m_double5(beijingyuzhisheding[4])
	, m_double6(beijingyuzhisheding[5])
	, m_double7(beijingyuzhisheding[6])
	, m_double8(beijingyuzhisheding[7])
	, m_double9(beijingyuzhisheding[8])
	, m_double10(beijingyuzhisheding[9])
	, m_double11(beijingyuzhisheding[10])
	, m_double12(beijingyuzhisheding[11])
	, m_double13(beijingyuzhisheding[12])
	, m_double14(beijingyuzhisheding[13])
	, m_double15(beijingyuzhisheding[14])
	, m_double16(beijingyuzhisheding[15])
	, m_double17(beijingyuzhisheding[16])
	, m_double18(beijingyuzhisheding[17])
	, m_double19(beijingyuzhisheding[18])
	, m_double20(beijingyuzhisheding[19])
{

}

beijingyuzhi::~beijingyuzhi()
{
}

void beijingyuzhi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT2, m_double2);
	DDX_Text(pDX, IDC_EDIT18, m_double3);
	DDX_Text(pDX, IDC_EDIT30, m_double4);
	DDX_Text(pDX, IDC_EDIT31, m_double5);
	DDX_Text(pDX, IDC_EDIT32, m_double6);
	DDX_Text(pDX, IDC_EDIT35, m_double7);
	DDX_Text(pDX, IDC_EDIT38, m_double8);
	DDX_Text(pDX, IDC_EDIT48, m_double9);
	DDX_Text(pDX, IDC_EDIT49, m_double10);
	DDX_Text(pDX, IDC_EDIT15, m_double11);
	DDX_Text(pDX, IDC_EDIT16, m_double12);
	DDX_Text(pDX, IDC_EDIT55, m_double13);
	DDX_Text(pDX, IDC_EDIT56, m_double14);
	DDX_Text(pDX, IDC_EDIT57, m_double15);
	DDX_Text(pDX, IDC_EDIT40, m_double16);
	DDX_Text(pDX, IDC_EDIT41, m_double17);
	DDX_Text(pDX, IDC_EDIT42, m_double18);
	DDX_Text(pDX, IDC_EDIT58, m_double19);
	DDX_Text(pDX, IDC_EDIT59, m_double20);
}


BEGIN_MESSAGE_MAP(beijingyuzhi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &beijingyuzhi::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &beijingyuzhi::OnBnClickedButton2)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON11, &beijingyuzhi::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &beijingyuzhi::OnBnClickedButton12)
	ON_BN_CLICKED(IDCANCEL, &beijingyuzhi::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON3, &beijingyuzhi::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &beijingyuzhi::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &beijingyuzhi::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &beijingyuzhi::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &beijingyuzhi::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &beijingyuzhi::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &beijingyuzhi::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &beijingyuzhi::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON37, &beijingyuzhi::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &beijingyuzhi::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &beijingyuzhi::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON40, &beijingyuzhi::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON49, &beijingyuzhi::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON50, &beijingyuzhi::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON83, &beijingyuzhi::OnBnClickedButton83)
	ON_BN_CLICKED(IDC_BUTTON84, &beijingyuzhi::OnBnClickedButton84)
	ON_BN_CLICKED(IDC_BUTTON120, &beijingyuzhi::OnBnClickedButton120)
	ON_BN_CLICKED(IDC_BUTTON122, &beijingyuzhi::OnBnClickedButton122)
	ON_BN_CLICKED(IDC_BUTTON14, &beijingyuzhi::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &beijingyuzhi::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON51, &beijingyuzhi::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON52, &beijingyuzhi::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON53, &beijingyuzhi::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON54, &beijingyuzhi::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON70, &beijingyuzhi::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON71, &beijingyuzhi::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON73, &beijingyuzhi::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON74, &beijingyuzhi::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON76, &beijingyuzhi::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON77, &beijingyuzhi::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON79, &beijingyuzhi::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON80, &beijingyuzhi::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_BUTTON124, &beijingyuzhi::OnBnClickedButton124)
	ON_BN_CLICKED(IDC_BUTTON85, &beijingyuzhi::OnBnClickedButton85)
	ON_BN_CLICKED(IDC_BUTTON125, &beijingyuzhi::OnBnClickedButton125)
	ON_BN_CLICKED(IDC_BUTTON126, &beijingyuzhi::OnBnClickedButton126)
END_MESSAGE_MAP()


// beijingyuzhi 消息处理程序


void beijingyuzhi::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		beijingyuzhisheding[0] = m_double1;
	}
	datatestDPU[4] = beijingyuzhisheding[0];
	CMyPublicData::setfunc(32, 16, 81, 1);

}


void beijingyuzhi::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		beijingyuzhisheding[0] = m_double1;
	}
	datatestDPU[4] = beijingyuzhisheding[0];
	CMyPublicData::setfunc(32, 16, 81, 1);
}

//判断屏幕点击事件，是否有相应的编辑框被点击，如果点击做出相应的处理程序
BOOL beijingyuzhi::PreTranslateMessage(MSG* pMsg)
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
			beijingyuzhisheding[0] = m_double1;
		}
		datatestDPU[4] = beijingyuzhisheding[0];
		CMyPublicData::setfunc(32, 16, 81, 1);
		return TRUE;
	}
	else
	{
		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT15);
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
				beijingyuzhisheding[10] = m_double11;
			}
			datatestDPU[4] = beijingyuzhisheding[10];
			CMyPublicData::setfunc(33, 16, 81, 1);
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
					beijingyuzhisheding[2] = m_double3;
				}
				datatestDPU[4] = beijingyuzhisheding[2];
				CMyPublicData::setfunc(36, 16, 81, 1);
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
						beijingyuzhisheding[3] = m_double4;
					}
					datatestDPU[4] = beijingyuzhisheding[3];
					CMyPublicData::setfunc(38, 16, 81, 1);
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
							beijingyuzhisheding[4] = m_double5;
						}
						datatestDPU[4] = beijingyuzhisheding[4];
						CMyPublicData::setfunc(40, 16, 81, 1);
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
								beijingyuzhisheding[5] = m_double6;
							}
							datatestDPU[4] = beijingyuzhisheding[5];
							CMyPublicData::setfunc(42, 16, 81, 1);
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
									m_double7 = _wtof(dlg.ValueShow);
									UpdateData(FALSE);
									beijingyuzhisheding[6] = m_double7;
								}
								datatestDPU[4] = beijingyuzhisheding[6];
								CMyPublicData::setfunc(44, 16, 81, 1);
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
										m_double8 = _wtof(dlg.ValueShow);
										UpdateData(FALSE);
										beijingyuzhisheding[7] = m_double8;
									}
									datatestDPU[4] = beijingyuzhisheding[7];
									CMyPublicData::setfunc(46, 16, 81, 1);
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
											m_double9 = _wtof(dlg.ValueShow);
											UpdateData(FALSE);
											beijingyuzhisheding[8] = m_double9;
										}
										datatestDPU[4] = beijingyuzhisheding[8];
										CMyPublicData::setfunc(48, 16, 81, 1);
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
												m_double10 = _wtof(dlg.ValueShow);
												UpdateData(FALSE);
												beijingyuzhisheding[9] = m_double10;
											}
											datatestDPU[4] = beijingyuzhisheding[9];
											CMyPublicData::setfunc(50, 16, 81, 1);
											return TRUE;
										}
										else
										{
											CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT16);
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
													beijingyuzhisheding[11] = m_double12;
												}
												datatestDPU[4] = beijingyuzhisheding[11];
												CMyPublicData::setfunc(35, 16, 81, 1);
												return TRUE;
											}
											else
											{
												CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT55);
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
														beijingyuzhisheding[12] = m_double13;
													}
													datatestDPU[4] = beijingyuzhisheding[12];
													CMyPublicData::setfunc(37, 16, 81, 1);
													return TRUE;
												}
												else
												{
													CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT56);
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
															beijingyuzhisheding[13] = m_double14;
														}
														datatestDPU[4] = beijingyuzhisheding[13];
														CMyPublicData::setfunc(39, 16, 81, 1);
														return TRUE;
													}
													else
													{
														CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT57);
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
																beijingyuzhisheding[14] = m_double15;
															}
															datatestDPU[4] = beijingyuzhisheding[14];
															CMyPublicData::setfunc(41, 16, 81, 1);
															return TRUE;
														}
														else
														{
															CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT40);
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
																	beijingyuzhisheding[15] = m_double16;
																}
																datatestDPU[4] = beijingyuzhisheding[15];
																CMyPublicData::setfunc(43, 16, 81, 1);
																return TRUE;
															}
															else
															{
																CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT41);
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
																		beijingyuzhisheding[16] = m_double17;
																	}
																	datatestDPU[4] = beijingyuzhisheding[16];
																	CMyPublicData::setfunc(45, 16, 81, 1);
																	return TRUE;
																}
																else
																{
																	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT42);
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
																			beijingyuzhisheding[17] = m_double18;
																		}
																		datatestDPU[4] = beijingyuzhisheding[17];
																		CMyPublicData::setfunc(47, 16, 81, 1);
																		return TRUE;
																	}
																	else
																	{
																		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT58);
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
																				beijingyuzhisheding[18] = m_double19;
																			}
																			datatestDPU[4] = beijingyuzhisheding[18];
																			CMyPublicData::setfunc(49, 16, 81, 1);
																			return TRUE;
																		}
																		else
																		{
																			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT59);
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
																					beijingyuzhisheding[19] = m_double20;
																				}
																				datatestDPU[4] = beijingyuzhisheding[19];
																				CMyPublicData::setfunc(51, 16, 81, 1);
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
																						beijingyuzhisheding[1] = m_double2;
																					}
																					datatestDPU[4] = beijingyuzhisheding[1];
																					CMyPublicData::setfunc(34, 16, 81, 1);
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


void beijingyuzhi::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL beijingyuzhi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);                        //语言设置
	opx.QueryNode_Text("num0301", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC14)->SetWindowText(cstr);
	opx.QueryNode_Text("num0302", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC11)->SetWindowText(cstr);
	opx.QueryNode_Text("num0303", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC12)->SetWindowText(cstr);
	opx.QueryNode_Text("num0304", yuyan);
	cstr = yuyan;
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


	int nMargin = 20;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT1)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT1)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT30)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT31)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT32)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT38)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT48)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT49)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT15)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT16)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT55)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT56)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT57)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT40)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT41)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT42)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT58)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT59)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void beijingyuzhi::ReSize()
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

void beijingyuzhi::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		beijingyuzhisheding[10] = m_double11;
	}
	datatestDPU[4] = beijingyuzhisheding[10];
	CMyPublicData::setfunc(33, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		beijingyuzhisheding[10] = m_double11;
	}
	datatestDPU[4] = beijingyuzhisheding[10];
	CMyPublicData::setfunc(33, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedCancel()
{
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(beijingyuzhisheding[0]);
	opx.ModifyNode("num0101", str);
	str = opx.numtoString(beijingyuzhisheding[1]);
	opx.ModifyNode("num0102", str);
	str = opx.numtoString(beijingyuzhisheding[2]);
	opx.ModifyNode("num0103", str);
	str = opx.numtoString(beijingyuzhisheding[3]);
	opx.ModifyNode("num0104", str);
	str = opx.numtoString(beijingyuzhisheding[4]);
	opx.ModifyNode("num0105", str);
	str = opx.numtoString(beijingyuzhisheding[5]);
	opx.ModifyNode("num0106", str);
	str = opx.numtoString(beijingyuzhisheding[6]);
	opx.ModifyNode("num0107", str);
	str = opx.numtoString(beijingyuzhisheding[7]);
	opx.ModifyNode("num0108", str);
	str = opx.numtoString(beijingyuzhisheding[8]);
	opx.ModifyNode("num0109", str);
	str = opx.numtoString(beijingyuzhisheding[9]);
	opx.ModifyNode("num0110", str);
	str = opx.numtoString(beijingyuzhisheding[10]);
	opx.ModifyNode("num0111", str);
	str = opx.numtoString(beijingyuzhisheding[11]);
	opx.ModifyNode("num0112", str);
	str = opx.numtoString(beijingyuzhisheding[12]);
	opx.ModifyNode("num0113", str);
	str = opx.numtoString(beijingyuzhisheding[13]);
	opx.ModifyNode("num0114", str);
	str = opx.numtoString(beijingyuzhisheding[14]);
	opx.ModifyNode("num0115", str);
	str = opx.numtoString(beijingyuzhisheding[15]);
	opx.ModifyNode("num0116", str);
	str = opx.numtoString(beijingyuzhisheding[16]);
	opx.ModifyNode("num0117", str);
	str = opx.numtoString(beijingyuzhisheding[17]);
	opx.ModifyNode("num0118", str);
	str = opx.numtoString(beijingyuzhisheding[18]);
	opx.ModifyNode("num0119", str);
	str = opx.numtoString(beijingyuzhisheding[19]);
	opx.ModifyNode("num0120", str);
	opx.SaveFile();
    CDialogEx::OnCancel();
}


void beijingyuzhi::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		beijingyuzhisheding[1] = m_double2;
	}
	datatestDPU[4] = beijingyuzhisheding[1];
	CMyPublicData::setfunc(34, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		beijingyuzhisheding[1] = m_double2;
	}
	datatestDPU[4] = beijingyuzhisheding[1];
	CMyPublicData::setfunc(34, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		beijingyuzhisheding[2] = m_double3;
	}
	datatestDPU[4] = beijingyuzhisheding[2];
	CMyPublicData::setfunc(36, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		beijingyuzhisheding[2] = m_double3;
	}
	datatestDPU[4] = beijingyuzhisheding[2];
	CMyPublicData::setfunc(36, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		beijingyuzhisheding[3] = m_double4;
	}
	datatestDPU[4] = beijingyuzhisheding[3];
	CMyPublicData::setfunc(38, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		beijingyuzhisheding[3] = m_double4;
	}
	datatestDPU[4] = beijingyuzhisheding[3];
	CMyPublicData::setfunc(38, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		beijingyuzhisheding[4] = m_double5;
	}
	datatestDPU[4] = beijingyuzhisheding[4];
	CMyPublicData::setfunc(40, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		beijingyuzhisheding[4] = m_double5;
	}
	datatestDPU[4] = beijingyuzhisheding[4];
	CMyPublicData::setfunc(40, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton37()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		beijingyuzhisheding[5] = m_double6;
	}
	datatestDPU[4] = beijingyuzhisheding[5];
	CMyPublicData::setfunc(42, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		beijingyuzhisheding[5] = m_double6;
	}
	datatestDPU[4] = beijingyuzhisheding[5];
	CMyPublicData::setfunc(42, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton39()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		beijingyuzhisheding[6] = m_double7;
	}
	datatestDPU[4] = beijingyuzhisheding[6];
	CMyPublicData::setfunc(44, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		beijingyuzhisheding[6] = m_double7;
	}
	datatestDPU[4] = beijingyuzhisheding[6];
	CMyPublicData::setfunc(44, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton49()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		beijingyuzhisheding[7] = m_double8;
	}
	datatestDPU[4] = beijingyuzhisheding[7];
	CMyPublicData::setfunc(46, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton50()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		beijingyuzhisheding[7] = m_double8;
	}
	datatestDPU[4] = beijingyuzhisheding[7];
	CMyPublicData::setfunc(46, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton83()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		beijingyuzhisheding[8] = m_double9;
	}
	datatestDPU[4] = beijingyuzhisheding[8];
	CMyPublicData::setfunc(48, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton84()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		beijingyuzhisheding[8] = m_double9;
	}
	datatestDPU[4] = beijingyuzhisheding[8];
	CMyPublicData::setfunc(48, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton120()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		beijingyuzhisheding[9] = m_double10;
	}
	datatestDPU[4] = beijingyuzhisheding[9];
	CMyPublicData::setfunc(50, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton122()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		beijingyuzhisheding[9] = m_double10;
	}
	datatestDPU[4] = beijingyuzhisheding[9];
	CMyPublicData::setfunc(50, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		beijingyuzhisheding[11] = m_double12;
	}
	datatestDPU[4] = beijingyuzhisheding[11];
	CMyPublicData::setfunc(35, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		beijingyuzhisheding[11] = m_double12;
	}
	datatestDPU[4] = beijingyuzhisheding[11];
	CMyPublicData::setfunc(35, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton51()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13++;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[12] = m_double13;
	}
	else
	{
		m_double13--;
		UpdateData(FALSE);
		beijingyuzhisheding[12] = m_double13;
	}
	datatestDPU[4] = beijingyuzhisheding[12];
	CMyPublicData::setfunc(37, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton52()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13--;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[12] = m_double13;
	}
	else
	{
		m_double13++;
		UpdateData(FALSE);
		beijingyuzhisheding[12] = m_double13;
	}
	datatestDPU[4] = beijingyuzhisheding[12];
	CMyPublicData::setfunc(37, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton53()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14++;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[13] = m_double14;
	}
	else
	{
		m_double14--;
		UpdateData(FALSE);
		beijingyuzhisheding[13] = m_double14;
	}
	datatestDPU[4] = beijingyuzhisheding[13];
	CMyPublicData::setfunc(39, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton54()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14--;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[13] = m_double14;
	}
	else
	{
		m_double14++;
		UpdateData(FALSE);
		beijingyuzhisheding[13] = m_double14;
	}
	datatestDPU[4] = beijingyuzhisheding[13];
	CMyPublicData::setfunc(39, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15++;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[14] = m_double15;
	}
	else
	{
		m_double15--;
		UpdateData(FALSE);
		beijingyuzhisheding[14] = m_double15;
	}
	datatestDPU[4] = beijingyuzhisheding[14];
	CMyPublicData::setfunc(41, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15--;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[14] = m_double15;
	}
	else
	{
		m_double15++;
		UpdateData(FALSE);
		beijingyuzhisheding[14] = m_double15;
	}
	datatestDPU[4] = beijingyuzhisheding[14];
	CMyPublicData::setfunc(41, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16++;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[15] = m_double16;
	}
	else
	{
		m_double16--;
		UpdateData(FALSE);
		beijingyuzhisheding[15] = m_double16;
	}
	datatestDPU[4] = beijingyuzhisheding[15];
	CMyPublicData::setfunc(43, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16--;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[15] = m_double16;
	}
	else
	{
		m_double16++;
		UpdateData(FALSE);
		beijingyuzhisheding[15] = m_double16;
	}
	datatestDPU[4] = beijingyuzhisheding[15];
	CMyPublicData::setfunc(43, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17++;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[16] = m_double17;
	}
	else
	{
		m_double17--;
		UpdateData(FALSE);
		beijingyuzhisheding[16] = m_double17;
	}
	datatestDPU[4] = beijingyuzhisheding[16];
	CMyPublicData::setfunc(45, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton77()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17--;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[16] = m_double17;
	}
	else
	{
		m_double17++;
		UpdateData(FALSE);
		beijingyuzhisheding[16] = m_double17;
	}
	datatestDPU[4] = beijingyuzhisheding[16];
	CMyPublicData::setfunc(45, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton79()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18++;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[17] = m_double18;
	}
	else
	{
		m_double18--;
		UpdateData(FALSE);
		beijingyuzhisheding[17] = m_double18;
	}
	datatestDPU[4] = beijingyuzhisheding[17];
	CMyPublicData::setfunc(47, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton80()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18--;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[17] = m_double18;
	}
	else
	{
		m_double18++;
		UpdateData(FALSE);
		beijingyuzhisheding[17] = m_double18;
	}
	datatestDPU[4] = beijingyuzhisheding[17];
	CMyPublicData::setfunc(47, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton124()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19++;
	if (0 <= m_double19&& m_double19 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[18] = m_double19;
	}
	else
	{
		m_double19--;
		UpdateData(FALSE);
		beijingyuzhisheding[18] = m_double19;
	}
	datatestDPU[4] = beijingyuzhisheding[18];
	CMyPublicData::setfunc(49, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton85()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19--;
	if (0 <= m_double19&& m_double19 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[18] = m_double19;
	}
	else
	{
		m_double19++;
		UpdateData(FALSE);
		beijingyuzhisheding[18] = m_double19;
	}
	datatestDPU[4] = beijingyuzhisheding[18];
	CMyPublicData::setfunc(49, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton125()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20++;
	if (0 <= m_double20&& m_double20 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[19] = m_double20;
	}
	else
	{
		m_double20--;
		UpdateData(FALSE);
		beijingyuzhisheding[19] = m_double20;
	}
	datatestDPU[4] = beijingyuzhisheding[19];
	CMyPublicData::setfunc(51, 16, 81, 1);
}


void beijingyuzhi::OnBnClickedButton126()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20--;
	if (0 <= m_double20&& m_double20 <= 255)
	{
		UpdateData(FALSE);
		beijingyuzhisheding[19] = m_double20;
	}
	else
	{
		m_double20++;
		UpdateData(FALSE);
		beijingyuzhisheding[19] = m_double20;
	}
	datatestDPU[4] = beijingyuzhisheding[19];
	CMyPublicData::setfunc(51, 16, 81, 1);
}
