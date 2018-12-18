// quyuer.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "quyuer.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "Yansemingan.h"
#include "shendu.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include "QUYUERFEN.h"
#include "Yansemingan.h"
#include "quyuer.h"
#include "quyusan.h"
#include "quyusi.h"
#include "quyuwu.h"
#include "shendu.h"
#include "shenduer.h"
#include "huidu1.h"
#include "huidu2.h"
// quyuer 对话框

IMPLEMENT_DYNAMIC(quyuer, CDialogEx)

quyuer::quyuer(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_QUYUER_DIALOG, pParent)
	, m_double1(quyu[0])
	, m_double2(quyu[1])
	, m_double3(quyu[2])
	, m_double4(quyu[3])
	, m_double5(quyu[4])
	, m_double6(quyu[5])
	, m_double7(quyu[6])
	, m_double8(quyu[7])
	, m_double9(quyu[8])
	, m_double10(quyu[9])
	, m_double11(quyu[10])
	, m_double12(quyu[11])
{

}

quyuer::~quyuer()
{
}

void quyuer::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(quyuer, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON10, &quyuer::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON34, &quyuer::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON55, &quyuer::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON56, &quyuer::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON58, &quyuer::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON59, &quyuer::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON60, &quyuer::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON61, &quyuer::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON33, &quyuer::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON36, &quyuer::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON38, &quyuer::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON40, &quyuer::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON50, &quyuer::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON42, &quyuer::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON44, &quyuer::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON46, &quyuer::OnBnClickedButton46)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &quyuer::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON104, &quyuer::OnBnClickedButton104)
	ON_BN_CLICKED(IDC_BUTTON66, &quyuer::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON67, &quyuer::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON69, &quyuer::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON70, &quyuer::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON72, &quyuer::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON73, &quyuer::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON75, &quyuer::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_RFEN_BUTTON, &quyuer::OnBnClickedRfenButton)
	ON_BN_CLICKED(IDC_QUERFEN_BUTTON, &quyuer::OnBnClickedQuerfenButton)
	ON_BN_CLICKED(IDC_BUTTON62, &quyuer::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &quyuer::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON76, &quyuer::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_KAISHIDA, &quyuer::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &quyuer::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// quyuer 消息处理程序


void quyuer::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 245)
	{
		UpdateData(FALSE);
		quyu[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		quyu[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = quyu[0] + quyuerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 245)
	{
		UpdateData(FALSE);
		quyu[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		quyu[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = quyu[1] + quyuerf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 90, 1);
		}
	}
}


void quyuer::OnBnClickedButton55()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 245)
	{
		UpdateData(FALSE);
		quyu[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		quyu[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = quyu[2] + quyuerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 245)
	{
		UpdateData(FALSE);
		quyu[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		quyu[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = quyu[3] + quyuerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 90, 1);
		}
	}
}


void quyuer::OnBnClickedButton58()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 245)
	{
		UpdateData(FALSE);
		quyu[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		quyu[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = quyu[4] + quyuerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton59()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 245)
	{
		UpdateData(FALSE);
		quyu[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		quyu[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = quyu[5] + quyuerf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 90, 1);
		}
	}
}


void quyuer::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 245)
	{
		UpdateData(FALSE);
		quyu[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		quyu[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = quyu[6] + quyuerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 245)
	{
		UpdateData(FALSE);
		quyu[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		quyu[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = quyu[7] + quyuerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 90, 1);
		}
	}
}


void quyuer::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 245)
	{
		UpdateData(FALSE);
		quyu[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		quyu[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = quyu[0] + quyuerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton36()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 245)
	{
		UpdateData(FALSE);
		quyu[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		quyu[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = quyu[1] + quyuerf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 90, 1);
		}
	}
}


void quyuer::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 245)
	{
		UpdateData(FALSE);
		quyu[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		quyu[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = quyu[2] + quyuerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 245)
	{
		UpdateData(FALSE);
		quyu[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		quyu[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = quyu[3] + quyuerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 90, 1);
		}
	}
}


void quyuer::OnBnClickedButton50()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 245)
	{
		UpdateData(FALSE);
		quyu[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		quyu[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = quyu[4] + quyuerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton42()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 245)
	{
		UpdateData(FALSE);
		quyu[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		quyu[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = quyu[5] + quyuerf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 90, 1);
		}
	}
}


void quyuer::OnBnClickedButton44()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 245)
	{
		UpdateData(FALSE);
		quyu[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		quyu[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = quyu[6] + quyuerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton46()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 245)
	{
		UpdateData(FALSE);
		quyu[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		quyu[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = quyu[7] + quyuerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 90, 1);
		}
	}
}







BOOL quyuer::PreTranslateMessage(MSG* pMsg)
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
			quyu[0] = m_double1;
		}
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = quyu[0] + quyuerf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 89, 1);
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
				quyu[1] = m_double2;
			}
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = quyu[1] + quyuerf[10 + i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 90, 1);
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
					quyu[2] = m_double3;
				}
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i + 1] == L"1")
					{
						datatestDPU[4] = quyu[2] + quyuerf[20 + i];
						CMyPublicData::setfunc(33 + 2 * i, 16, 89, 1);
					}
				}
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
						quyu[3] = m_double4;
					}
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = quyu[3] + quyuerf[30 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 90, 1);
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
							quyu[4] = m_double5;
						}
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i] == L"2")
							{
								datatestDPU[4] = quyu[4] + quyuerf[i];
								CMyPublicData::setfunc(32 + 2 * i, 16, 89, 1);
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
								quyu[5] = m_double6;
							}
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = quyu[5] + quyuerf[10 + i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 90, 1);
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
									quyu[6] = m_double7;
								}
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i + 1] == L"2")
									{
										datatestDPU[4] = quyu[6] + quyuerf[20 + i];
										CMyPublicData::setfunc(33 + 2 * i, 16, 89, 1);
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
										quyu[7] = m_double8;
									}
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = quyu[7] + quyuerf[30 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 90, 1);
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
											quyu[8] = m_double9;
										}
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i] == L"3")
											{
												datatestDPU[4] = quyu[8] + quyuerf[i];
												CMyPublicData::setfunc(32 + 2 * i, 16, 89, 1);
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
												quyu[9] = m_double10;
											}
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = quyu[9] + quyuerf[10 + i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 90, 1);
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
													quyu[10] = m_double11;
												}
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i + 1] == L"3")
													{
														datatestDPU[4] = quyu[10] + quyuerf[20 + i];
														CMyPublicData::setfunc(33 + 2 * i, 16, 89, 1);
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
														quyu[11] = m_double12;
													}
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = quyu[11] + quyuerf[30 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 90, 1);
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


void quyuer::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL quyuer::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num2701", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num2702", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_QUERFEN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num2703", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num2704", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num2705", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num2706", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2707", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num2708", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num2709", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num2710", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num2711", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num2712", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC13)->SetWindowText(cstr);
	opx.QueryNode_Text("num2713", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	if (quanxian)
	{
		GetDlgItem(IDC_QUERFEN_BUTTON)->ShowWindow(true);
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

void quyuer::ReSize()
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

void quyuer::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(quyu[0]);
	opx.ModifyNode("num1401", str);
	str = opx.numtoString(quyu[1]);
	opx.ModifyNode("num1402", str);
	str = opx.numtoString(quyu[2]);
	opx.ModifyNode("num1403", str);
	str = opx.numtoString(quyu[3]);
	opx.ModifyNode("num1404", str);
	str = opx.numtoString(quyu[4]);
	opx.ModifyNode("num1405", str);
	str = opx.numtoString(quyu[5]);
	opx.ModifyNode("num1406", str);
	str = opx.numtoString(quyu[6]);
	opx.ModifyNode("num1407", str);
	str = opx.numtoString(quyu[7]);
	opx.ModifyNode("num1408", str);
	str = opx.numtoString(quyu[8]);
	opx.ModifyNode("num1409", str);
	str = opx.numtoString(quyu[9]);
	opx.ModifyNode("num1410", str);
	str = opx.numtoString(quyu[10]);
	opx.ModifyNode("num1411", str);
	str = opx.numtoString(quyu[11]);
	opx.ModifyNode("num1412", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void quyuer::OnBnClickedButton104()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 245)
	{
		UpdateData(FALSE);
		quyu[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		quyu[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = quyu[8] + quyuerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 245)
	{
		UpdateData(FALSE);
		quyu[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		quyu[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = quyu[8] + quyuerf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton67()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 245)
	{
		UpdateData(FALSE);
		quyu[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		quyu[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = quyu[9] + quyuerf[10+i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 90, 1);
		}
	}
}


void quyuer::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 245)
	{
		UpdateData(FALSE);
		quyu[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		quyu[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = quyu[9] + quyuerf[10+i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 90, 1);
		}
	}
}


void quyuer::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 245)
	{
		UpdateData(FALSE);
		quyu[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		quyu[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = quyu[10] + quyuerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 245)
	{
		UpdateData(FALSE);
		quyu[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		quyu[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = quyu[10] + quyuerf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 89, 1);
		}
	}
}


void quyuer::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 245)
	{
		UpdateData(FALSE);
		quyu[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		quyu[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = quyu[11] + quyuerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16,90, 1);
		}
	}
}


void quyuer::OnBnClickedButton75()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 245)
	{
		UpdateData(FALSE);
		quyu[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		quyu[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = quyu[11] + quyuerf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 90, 1);
		}
	}
}


void quyuer::OnBnClickedRfenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
	QUYUERFEN qerf;
	qerf.DoModal();
}


void quyuer::OnBnClickedQuerfenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	QUYUERFEN querf;
	querf.DoModal();
}


void quyuer::OnBnClickedButton62()
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


void quyuer::OnBnClickedButton63()
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


void quyuer::OnBnClickedButton76()
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


void quyuer::OnBnClickedKaishida()
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


void quyuer::OnBnClickedTingzhida()
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
