// quyusi.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "quyusi.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include "QUYUSIFEN.h"
#include "Yansemingan.h"
#include "quyuer.h"
#include "quyusan.h"
#include "quyuwu.h"
#include "shendu.h"
#include "shenduer.h"
#include "huidu1.h"
#include "huidu2.h"
// quyusi 对话框

IMPLEMENT_DYNAMIC(quyusi, CDialogEx)

quyusi::quyusi(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_QUYUSI_DIALOG, pParent)
	, m_double1(quyusisd[0])
	, m_double2(quyusisd[1])
	, m_double3(quyusisd[2])
	, m_double4(quyusisd[3])
	, m_double5(quyusisd[4])
	, m_double6(quyusisd[5])
	, m_double7(quyusisd[6])
	, m_double8(quyusisd[7])
	, m_double9(quyusisd[8])
	, m_double10(quyusisd[9])
	, m_double11(quyusisd[10])
	, m_double12(quyusisd[11])
{

}

quyusi::~quyusi()
{
}

void quyusi::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_EDIT64, m_double9);
	DDX_Text(pDX, IDC_EDIT65, m_double10);
	DDX_Text(pDX, IDC_EDIT66, m_double11);
	DDX_Text(pDX, IDC_EDIT67, m_double12);
	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA, m_tingzhi);
}


BEGIN_MESSAGE_MAP(quyusi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON10, &quyusi::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON33, &quyusi::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &quyusi::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON36, &quyusi::OnBnClickedButton36)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON55, &quyusi::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON38, &quyusi::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON56, &quyusi::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON40, &quyusi::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON58, &quyusi::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON50, &quyusi::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON59, &quyusi::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON42, &quyusi::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON60, &quyusi::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON44, &quyusi::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON61, &quyusi::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON46, &quyusi::OnBnClickedButton46)
	ON_BN_CLICKED(IDCANCEL, &quyusi::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_QUSIFEN_BUTTON, &quyusi::OnBnClickedQusifenButton)
	ON_BN_CLICKED(IDC_BUTTON104, &quyusi::OnBnClickedButton104)
	ON_BN_CLICKED(IDC_BUTTON66, &quyusi::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON67, &quyusi::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON69, &quyusi::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON70, &quyusi::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON72, &quyusi::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON73, &quyusi::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON75, &quyusi::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON62, &quyusi::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &quyusi::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON76, &quyusi::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_KAISHIDA, &quyusi::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &quyusi::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// quyusi 消息处理程序


void quyusi::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		quyusisd[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = quyusisd[0] + quyusif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		quyusisd[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = quyusisd[0] + quyusif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		quyusisd[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = quyusisd[1] + quyusif[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
		}
	}
}


void quyusi::OnBnClickedButton36()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		quyusisd[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = quyusisd[1] + quyusif[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
		}
	}
}


BOOL quyusi::PreTranslateMessage(MSG* pMsg)
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
			quyusisd[0] = m_double1;
		}
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = quyusisd[0] + quyusif[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 93, 1);
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
				quyusisd[1] = m_double2;
			}
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = quyusisd[1] + quyusif[10 + i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
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
					quyusisd[2] = m_double3;
				}
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i + 1] == L"1")
					{
						datatestDPU[4] = quyusisd[2] + quyusif[20 + i];
						CMyPublicData::setfunc(33 + 2 * i, 16, 93, 1);
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
						quyusisd[3] = m_double4;
					}
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = quyusisd[3] + quyusif[30 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
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
							quyusisd[4] = m_double5;
						}
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i] == L"2")
							{
								datatestDPU[4] = quyusisd[4] + quyusif[i];
								CMyPublicData::setfunc(32 + 2 * i, 16, 93, 1);
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
								quyusisd[5] = m_double6;
							}
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = quyusisd[5] + quyusif[10 + i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
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
									quyusisd[6] = m_double7;
								}
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i + 1] == L"2")
									{
										datatestDPU[4] = quyusisd[6] + quyusif[20 + i];
										CMyPublicData::setfunc(33 + 2 * i, 16, 93, 1);
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
										quyusisd[7] = m_double8;
									}
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = quyusisd[7] + quyusif[30 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
										}
									}
									return TRUE;
								}
								else
								{
									pEdit = (CEdit*)GetDlgItem(IDC_EDIT64);
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
											quyusisd[8] = m_double9;
										}
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i] == L"3")
											{
												datatestDPU[4] = quyusisd[8] + quyusif[i];
												CMyPublicData::setfunc(32 + 2 * i, 16, 93, 1);
											}
										}
										return TRUE;
									}
									else
									{
										pEdit = (CEdit*)GetDlgItem(IDC_EDIT65);
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
												quyusisd[9] = m_double10;
											}
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = quyusisd[9] + quyusif[10 + i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
												}
											}
											return TRUE;
										}
										else
										{
											pEdit = (CEdit*)GetDlgItem(IDC_EDIT66);
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
													quyusisd[10] = m_double11;
												}
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i + 1] == L"3")
													{
														datatestDPU[4] = quyusisd[10] + quyusif[20 + i];
														CMyPublicData::setfunc(33 + 2 * i, 16, 93, 1);
													}
												}
												return TRUE;
											}
											else
											{
												pEdit = (CEdit*)GetDlgItem(IDC_EDIT67);
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
														quyusisd[11] = m_double12;
													}
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = quyusisd[11] + quyusif[30 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
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


void quyusi::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL quyusi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num2901", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num2902", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_QUSIFEN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num2903", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num2904", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num2905", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num2906", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2907", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num2908", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num2909", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num2910", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num2911", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num2912", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC13)->SetWindowText(cstr);
	opx.QueryNode_Text("num2913", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	if (quanxian)
	{
		GetDlgItem(IDC_QUSIFEN_BUTTON)->ShowWindow(true);
	}
	GetDlgItem(IDC_BUTTON62)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON63)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON76)->SetWindowText(zhendong[2]);

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


	int nMargin = 9;                      //使编辑框文字垂直居中
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
	GetDlgItem(IDC_EDIT64)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT65)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT66)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT67)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void quyusi::ReSize()
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


void quyusi::OnBnClickedButton55()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		quyusisd[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i+1] == L"1")
		{
			datatestDPU[4] = quyusisd[2] + quyusif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		quyusisd[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = quyusisd[2] + quyusif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		quyusisd[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = quyusisd[3] + quyusif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
		}
	}
}


void quyusi::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		quyusisd[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = quyusisd[3] + quyusif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
		}
	}
}


void quyusi::OnBnClickedButton58()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		quyusisd[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = quyusisd[4] + quyusif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton50()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		quyusisd[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = quyusisd[4] + quyusif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton59()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		quyusisd[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = quyusisd[5] + quyusif[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
		}
	}
}


void quyusi::OnBnClickedButton42()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		quyusisd[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = quyusisd[5] + quyusif[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
		}
	}
}


void quyusi::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		quyusisd[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = quyusisd[6] + quyusif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton44()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		quyusisd[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = quyusisd[6] + quyusif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		quyusisd[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = quyusisd[7] + quyusif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
		}
	}
}


void quyusi::OnBnClickedButton46()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		quyusisd[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = quyusisd[7] + quyusif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
		}
	}
}


void quyusi::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(quyusisd[0]);
	opx.ModifyNode("num2701", str);
	str = opx.numtoString(quyusisd[1]);
	opx.ModifyNode("num2702", str);
	str = opx.numtoString(quyusisd[2]);
	opx.ModifyNode("num2703", str);
	str = opx.numtoString(quyusisd[3]);
	opx.ModifyNode("num2704", str);
	str = opx.numtoString(quyusisd[4]);
	opx.ModifyNode("num2705", str);
	str = opx.numtoString(quyusisd[5]);
	opx.ModifyNode("num2706", str);
	str = opx.numtoString(quyusisd[6]);
	opx.ModifyNode("num2707", str);
	str = opx.numtoString(quyusisd[7]);
	opx.ModifyNode("num2708", str);
	str = opx.numtoString(quyusisd[8]);
	opx.ModifyNode("num2709", str);
	str = opx.numtoString(quyusisd[9]);
	opx.ModifyNode("num2710", str);
	str = opx.numtoString(quyusisd[10]);
	opx.ModifyNode("num2711", str);
	str = opx.numtoString(quyusisd[11]);
	opx.ModifyNode("num2712", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void quyusi::OnBnClickedQusifenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	QUYUSIFEN qsif;
	qsif.DoModal();
}


void quyusi::OnBnClickedButton104()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		quyusisd[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = quyusisd[8] + quyusif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		quyusisd[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = quyusisd[8] + quyusif[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton67()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		quyusisd[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = quyusisd[9] + quyusif[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
		}
	}
}


void quyusi::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		quyusisd[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = quyusisd[9] + quyusif[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
		}
	}
}


void quyusi::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		quyusisd[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = quyusisd[10] + quyusif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		quyusisd[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = quyusisd[10] + quyusif[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 93, 1);
		}
	}
}


void quyusi::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		quyusisd[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = quyusisd[11] + quyusif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
		}
	}
}


void quyusi::OnBnClickedButton75()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		quyusisd[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		quyusisd[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = quyusisd[11] + quyusif[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
		}
	}
}



void quyusi::OnBnClickedButton62()
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


void quyusi::OnBnClickedButton63()
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


void quyusi::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON76)->GetWindowText(zhendong[2]);
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
		GetDlgItem(IDC_BUTTON76)->SetWindowText(_T("OFF"));
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
		GetDlgItem(IDC_BUTTON76)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON76)->GetWindowText(zhendong[2]);
}


void quyusi::OnBnClickedKaishida()
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


void quyusi::OnBnClickedTingzhida()
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
