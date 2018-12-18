// Yansemingan.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Yansemingan.h"
#include "afxdialogex.h"
#include "Mianji.h"
#include "hunselingmindu.h"
#include "InputDlg.h"
#include "Liuliangsheding.h"
#include "rlingmindu.h"
#include "Blingmindu.h"
#include "Famenceshi.h"
#include "Qinghui.h"
#include "Moshixuanze.h"
#include "Glingmindu.h"
#include "quyuer.h"
#include "shendu.h"
#include "quyusan.h"
#include "quyusi.h"
#include "quyuwu.h"
#include "shenduer.h"
#include "XMLHelper.h"
#include "QUFEN.h"
#include "quyuer.h"
#include "quyusan.h"
#include "quyusi.h"
#include "quyuwu.h"
#include "shendu.h"
#include "shenduer.h"
#include "huidu1.h"
#include "huidu2.h"
// Yansemingan 对话框

IMPLEMENT_DYNAMIC(Yansemingan, CDialogEx)

Yansemingan::Yansemingan(CWnd* pParent /*=NULL*/)
	: CDialogEx(Yansemingan::IDD, pParent)
	, m_double1(yanse[0])
	, m_double2(yanse[1])
	, m_double3(yanse[2])
	, m_double4(yanse[3])
	, m_double5(yanse[4])
	, m_double6(yanse[5])
	, m_double7(yanse[6])
	, m_double8(yanse[7])
	, m_double9(yanse[8])
	, m_double10(yanse[9])
	, m_double11(yanse[10])
	, m_double12(yanse[11])
{

}

Yansemingan::~Yansemingan()
{
}

void Yansemingan::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(Yansemingan, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON10, &Yansemingan::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON34, &Yansemingan::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON55, &Yansemingan::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON56, &Yansemingan::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON58, &Yansemingan::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON59, &Yansemingan::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON60, &Yansemingan::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON61, &Yansemingan::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON33, &Yansemingan::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON36, &Yansemingan::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON38, &Yansemingan::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON40, &Yansemingan::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON50, &Yansemingan::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON42, &Yansemingan::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON44, &Yansemingan::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON46, &Yansemingan::OnBnClickedButton46)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON69, &Yansemingan::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON71, &Yansemingan::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON72, &Yansemingan::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON70, &Yansemingan::OnBnClickedButton70)
	ON_BN_CLICKED(IDCANCEL, &Yansemingan::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON104, &Yansemingan::OnBnClickedButton104)
	ON_BN_CLICKED(IDC_BUTTON66, &Yansemingan::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON67, &Yansemingan::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON73, &Yansemingan::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON75, &Yansemingan::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_QUFEN_BUTTON, &Yansemingan::OnBnClickedQufenButton)
	ON_BN_CLICKED(IDC_BUTTON62, &Yansemingan::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &Yansemingan::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON76, &Yansemingan::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_KAISHIDA, &Yansemingan::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &Yansemingan::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// Yansemingan 消息处理程序


void Yansemingan::OnBnClickedButton10()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 245)
	{
		UpdateData(FALSE);
		yanse[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		yanse[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = yanse[0] + quyuf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton34()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 245)
	{
		UpdateData(FALSE);
		yanse[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		yanse[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = yanse[1] + quyuf[10+i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 84, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton55()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 245)
	{
		UpdateData(FALSE);
		yanse[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		yanse[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i+1] == L"1")
		{
			datatestDPU[4] = yanse[2] + quyuf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton56()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 245)
	{
		UpdateData(FALSE);
		yanse[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		yanse[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = yanse[3] + quyuf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 84, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton58()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 245)
	{
		UpdateData(FALSE);
		yanse[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		yanse[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = yanse[4] + quyuf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton59()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 245)
	{
		UpdateData(FALSE);
		yanse[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		yanse[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = yanse[5] + quyuf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 84, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton60()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 245)
	{
		UpdateData(FALSE);
		yanse[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		yanse[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = yanse[6] + quyuf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton61()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 245)
	{
		UpdateData(FALSE);
		yanse[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		yanse[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = yanse[7] + quyuf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 84, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton33()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 245)
	{
		UpdateData(FALSE);
		yanse[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		yanse[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = yanse[0] + quyuf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton36()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 245)
	{
		UpdateData(FALSE);
		yanse[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		yanse[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = yanse[1] + quyuf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 84, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton38()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 245)
	{
		UpdateData(FALSE);
		yanse[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		yanse[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = yanse[2] + quyuf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton40()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 245)
	{
		UpdateData(FALSE);
		yanse[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		yanse[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = yanse[3] + quyuf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 84, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton50()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 245)
	{
		UpdateData(FALSE);
		yanse[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		yanse[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = yanse[4] + quyuf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton42()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 245)
	{
		UpdateData(FALSE);
		yanse[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		yanse[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = yanse[5] + quyuf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 84, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton44()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 245)
	{
		UpdateData(FALSE);
		yanse[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		yanse[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = yanse[6] + quyuf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton46()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 245)
	{
		UpdateData(FALSE);
		yanse[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		yanse[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = yanse[7] + quyuf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 84, 1);
		}
	}
}


//void Yansemingan::OnBnClickedButton15()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	quyuer qer;
//	qer.DoModal();
//	CDialogEx::OnCancel();
//}


//void Yansemingan::OnBnClickedButton64()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	quyusan qsan;
//	qsan.DoModal();
//	CDialogEx::OnCancel();
//}


BOOL Yansemingan::PreTranslateMessage(MSG* pMsg)
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
			yanse[0] = m_double1;
		}
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = yanse[0] + quyuf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 83, 1);
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
				yanse[1] = m_double2;
			}
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = yanse[1] + quyuf[10 + i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 84, 1);
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
					yanse[2] = m_double3;
				}
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i + 1] == L"1")
					{
						datatestDPU[4] = yanse[2] + quyuf[20 + i];
						CMyPublicData::setfunc(33 + 2 * i, 16, 83, 1);
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
						yanse[3] = m_double4;
					}
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = yanse[3] + quyuf[30 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 84, 1);
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
							yanse[4] = m_double5;
						}
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i] == L"2")
							{
								datatestDPU[4] = yanse[4] + quyuf[i];
								CMyPublicData::setfunc(32 + 2 * i, 16, 83, 1);
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
								yanse[5] = m_double6;
							}
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = yanse[5] + quyuf[10 + i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 84, 1);
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
									yanse[6] = m_double7;
								}
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i + 1] == L"2")
									{
										datatestDPU[4] = yanse[6] + quyuf[20 + i];
										CMyPublicData::setfunc(33 + 2 * i, 16, 83, 1);
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
										yanse[7] = m_double8;
									}
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = yanse[7] + quyuf[30 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 84, 1);
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
											yanse[8] = m_double9;
										}
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i] == L"3")
											{
												datatestDPU[4] = yanse[8] + quyuf[i];
												CMyPublicData::setfunc(32 + 2 * i, 16, 83, 1);
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
												yanse[9] = m_double10;
											}
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = yanse[9] + quyuf[10 + i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 84, 1);
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
													yanse[10] = m_double11;
												}
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i + 1] == L"3")
													{
														datatestDPU[4] = yanse[10] + quyuf[20 + i];
														CMyPublicData::setfunc(33 + 2 * i, 16, 83, 1);
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
														yanse[11] = m_double12;
													}
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = yanse[11] + quyuf[30 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 84, 1);
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


void Yansemingan::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL Yansemingan::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num4101", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num4102", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_QUFEN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num4103", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num4104", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num4105", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num4106", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num4107", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num4108", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num4109", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num4110", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num4111", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num4112", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC13)->SetWindowText(cstr);
	opx.QueryNode_Text("num4113", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	if (quanxian)
	{
		GetDlgItem(IDC_QUFEN_BUTTON)->ShowWindow(true);
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


	int nMargin = 15;                      //使编辑框文字垂直居中
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

void Yansemingan::ReSize()
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

void Yansemingan::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 245)
	{
		UpdateData(FALSE);
		yanse[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		yanse[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = yanse[9] + quyuf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 84, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
}


void Yansemingan::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 245)
	{
		UpdateData(FALSE);
		yanse[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		yanse[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = yanse[10] + quyuf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 245)
	{
		UpdateData(FALSE);
		yanse[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		yanse[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = yanse[10] + quyuf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(yanse[0]);
	opx.ModifyNode("num2101", str);
	str = opx.numtoString(yanse[1]);
	opx.ModifyNode("num2102", str);
	str = opx.numtoString(yanse[2]);
	opx.ModifyNode("num2103", str);
	str = opx.numtoString(yanse[3]);
	opx.ModifyNode("num2104", str);
	str = opx.numtoString(yanse[4]);
	opx.ModifyNode("num2105", str);
	str = opx.numtoString(yanse[5]);
	opx.ModifyNode("num2106", str);
	str = opx.numtoString(yanse[6]);
	opx.ModifyNode("num2107", str);
	str = opx.numtoString(yanse[7]);
	opx.ModifyNode("num2108", str);
	str = opx.numtoString(yanse[8]);
	opx.ModifyNode("num2109", str);
	str = opx.numtoString(yanse[9]);
	opx.ModifyNode("num2110", str);
	str = opx.numtoString(yanse[10]);
	opx.ModifyNode("num2111", str);
	str = opx.numtoString(yanse[11]);
	opx.ModifyNode("num2112", str);

	opx.SaveFile();
	CDialogEx::OnCancel();
}





void Yansemingan::OnBnClickedButton104()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 245)
	{
		UpdateData(FALSE);
		yanse[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		yanse[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = yanse[8] + quyuf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 245)
	{
		UpdateData(FALSE);
		yanse[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		yanse[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = yanse[8] + quyuf[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 83, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton67()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 245)
	{
		UpdateData(FALSE);
		yanse[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		yanse[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = yanse[9] + quyuf[10 + i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 84, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 245)
	{
		UpdateData(FALSE);
		yanse[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		yanse[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = yanse[11] + quyuf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 84, 1);
		}
	}
}


void Yansemingan::OnBnClickedButton75()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 245)
	{
		UpdateData(FALSE);
		yanse[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		yanse[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = yanse[11] + quyuf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 84, 1);
		}
	}
}



void Yansemingan::OnBnClickedQufenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	QUFEN  qf;
	qf.DoModal();
}



void Yansemingan::OnBnClickedButton62()
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


void Yansemingan::OnBnClickedButton63()
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


void Yansemingan::OnBnClickedButton76()
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


void Yansemingan::OnBnClickedKaishida()
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


void Yansemingan::OnBnClickedTingzhida()
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
