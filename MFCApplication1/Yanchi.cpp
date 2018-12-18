// Yanchi.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Yanchi.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
// Yanchi 对话框

IMPLEMENT_DYNAMIC(Yanchi, CDialogEx)

Yanchi::Yanchi(CWnd* pParent /*=NULL*/)
	: CDialogEx(Yanchi::IDD, pParent)
	, m_double1_edit3(yanchisheding[0])
	, m_double2_edit24(yanchisheding[1])
	, m_double3_edit34(yanchisheding[2])
	, m_double4_edit35(yanchisheding[3])
	, m_double5_edit36(yanchisheding[4])
	, m_double6_edit37(yanchisheding[5])
	, m_double33(yanchisheding[6])
	, m_double8_edit39(yanchisheding[7])
	, m_double9_edit45(yanchisheding[8])
	, m_double10_edit46(yanchisheding[9])
	, m_double22(yanchisheding[10])
{

}

Yanchi::~Yanchi()
{
}

void Yanchi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, m_double1_edit3);
	DDX_Text(pDX, IDC_EDIT24, m_double2_edit24);
	DDX_Text(pDX, IDC_EDIT34, m_double3_edit34);
	DDX_Text(pDX, IDC_EDIT35, m_double4_edit35);
	DDX_Text(pDX, IDC_EDIT36, m_double5_edit36);
	DDX_Text(pDX, IDC_EDIT37, m_double6_edit37);
	DDX_Text(pDX, IDC_EDIT38, m_double33);
	DDX_Text(pDX, IDC_EDIT39, m_double8_edit39);
	DDX_Text(pDX, IDC_EDIT45, m_double9_edit45);
	DDX_Text(pDX, IDC_EDIT46, m_double10_edit46);
	DDX_Text(pDX, IDC_EDIT2, m_double22);

	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA, m_tingzhi);
}


BEGIN_MESSAGE_MAP(Yanchi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON11, &Yanchi::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON13, &Yanchi::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON15, &Yanchi::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON51, &Yanchi::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON66, &Yanchi::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON68, &Yanchi::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON70, &Yanchi::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON72, &Yanchi::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON74, &Yanchi::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON76, &Yanchi::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON78, &Yanchi::OnBnClickedButton78)
	ON_BN_CLICKED(IDC_BUTTON14, &Yanchi::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON64, &Yanchi::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON65, &Yanchi::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON67, &Yanchi::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON69, &Yanchi::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON71, &Yanchi::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON73, &Yanchi::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON75, &Yanchi::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON77, &Yanchi::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON79, &Yanchi::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON12, &Yanchi::OnBnClickedButton12)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &Yanchi::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON59, &Yanchi::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON50, &Yanchi::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON60, &Yanchi::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_KAISHIDA, &Yanchi::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &Yanchi::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// Yanchi 消息处理程序


void Yanchi::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	//m_double7_edit2++;
	m_double22++;
	if (0 <= m_double22&& m_double22 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[10] = m_double22;
	}
	else
	{
		m_double22--;
		UpdateData(FALSE);
		yanchisheding[10] = m_double22;
	}
	for (int i=0 ;i<10;i++)
	{
		datatestDPU[4] = yanchisheding[10]+yanchisheding[i];
		CMyPublicData::setfunc(32+2*i, 16, 5, 1);
		CMyPublicData::setfunc(33 + 2*i, 16, 5, 1);
	}
}


void Yanchi::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1_edit3++;
	if (0 <= m_double1_edit3&& m_double1_edit3 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[0] = m_double1_edit3;
	}
	else
	{
		m_double1_edit3--;
		UpdateData(FALSE);
		yanchisheding[0] = m_double1_edit3;
	}
	datatestDPU[4] = yanchisheding[0] + yanchisheding[10];
	CMyPublicData::setfunc(32, 16, 5, 1);
	CMyPublicData::setfunc(33, 16, 5, 1);
}


void Yanchi::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2_edit24++;
	if (0 <= m_double2_edit24&& m_double2_edit24 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[1] = m_double2_edit24;
	}
	else
	{
		m_double2_edit24--;
		UpdateData(FALSE);
		yanchisheding[1] = m_double2_edit24;
	}
	datatestDPU[4] = yanchisheding[1] + yanchisheding[10];
	CMyPublicData::setfunc(34, 16, 5, 1);
	CMyPublicData::setfunc(35, 16, 5, 1);
}


void Yanchi::OnBnClickedButton51()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3_edit34++;
	if (0 <= m_double3_edit34&& m_double3_edit34 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[2] = m_double3_edit34;
	}
	else
	{
		m_double3_edit34--;
		UpdateData(FALSE);
		yanchisheding[2] = m_double3_edit34;
	}
	datatestDPU[4] = yanchisheding[2] + yanchisheding[10];
	CMyPublicData::setfunc(36, 16, 5, 1);
	CMyPublicData::setfunc(37, 16, 5, 1);
}


void Yanchi::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4_edit35++;
	if (0 <= m_double4_edit35&& m_double4_edit35 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[3] = m_double4_edit35;
	}
	else
	{
		m_double4_edit35--;
		UpdateData(FALSE);
		yanchisheding[3] = m_double4_edit35;
	}
	datatestDPU[4] = yanchisheding[3] + yanchisheding[10];
	CMyPublicData::setfunc(38, 16, 5, 1);
	CMyPublicData::setfunc(39, 16, 5, 1);
}


void Yanchi::OnBnClickedButton68()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5_edit36++;
	if (0 <= m_double5_edit36&& m_double5_edit36 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[4] = m_double5_edit36;
	}
	else
	{
		m_double5_edit36--;
		UpdateData(FALSE);
		yanchisheding[4] = m_double5_edit36;
	}
	datatestDPU[4] = yanchisheding[4] + yanchisheding[10];
	CMyPublicData::setfunc(40, 16, 5, 1);
	CMyPublicData::setfunc(41, 16, 5, 1);
}


void Yanchi::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6_edit37++;
	if (0 <= m_double6_edit37&& m_double6_edit37 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[5] = m_double6_edit37;
	}
	else
	{
		m_double6_edit37--;
		UpdateData(FALSE);
		yanchisheding[5] = m_double6_edit37;
	}
	datatestDPU[4] = yanchisheding[5] + yanchisheding[10];
	CMyPublicData::setfunc(42, 16, 5, 1);
	CMyPublicData::setfunc(43, 16, 5, 1);
}


BOOL Yanchi::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT3);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double1_edit3 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			yanchisheding[0] = m_double1_edit3;
		}
		datatestDPU[4] = yanchisheding[0] + yanchisheding[10];
		CMyPublicData::setfunc(32, 16, 5, 1);
		CMyPublicData::setfunc(33, 16, 5, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT24);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double2_edit24 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			yanchisheding[1] = m_double2_edit24;
		}
		datatestDPU[4] = yanchisheding[1] + yanchisheding[10];
		CMyPublicData::setfunc(34, 16, 5, 1);
		CMyPublicData::setfunc(35, 16, 5, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT34);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double3_edit34 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			yanchisheding[2] = m_double3_edit34;
		}
		datatestDPU[4] = yanchisheding[2] + yanchisheding[10];
		CMyPublicData::setfunc(36, 16, 5, 1);
		CMyPublicData::setfunc(37, 16, 5, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT35);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}
	
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double4_edit35 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			yanchisheding[3] = m_double4_edit35;
		}
		datatestDPU[4] = yanchisheding[3] + yanchisheding[10];
		CMyPublicData::setfunc(38, 16, 5, 1);
		CMyPublicData::setfunc(39, 16, 5, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT36);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double5_edit36 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			yanchisheding[4] = m_double5_edit36;
		}
		datatestDPU[4] = yanchisheding[4] + yanchisheding[10];
		CMyPublicData::setfunc(40, 16, 5, 1);
		CMyPublicData::setfunc(41, 16, 5, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT37);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double6_edit37 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			yanchisheding[5] = m_double6_edit37;
		}
		datatestDPU[4] = yanchisheding[5] + yanchisheding[10];
		CMyPublicData::setfunc(42, 16, 5, 1);
		CMyPublicData::setfunc(43, 16, 5, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT38);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double33 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			yanchisheding[6] = m_double33;
		}
		datatestDPU[4] = yanchisheding[6] + yanchisheding[10];
		CMyPublicData::setfunc(44, 16, 5, 1);
		CMyPublicData::setfunc(45, 16, 5, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT39);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double8_edit39 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			yanchisheding[7] = m_double8_edit39;
		}
		datatestDPU[4] = yanchisheding[7] + yanchisheding[10];
		CMyPublicData::setfunc(46, 16, 5, 1);
		CMyPublicData::setfunc(47, 16, 5, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT45);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double9_edit45 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			yanchisheding[8] = m_double9_edit45;
		}
		datatestDPU[4] = yanchisheding[8] + yanchisheding[10];
		CMyPublicData::setfunc(48, 16, 5, 1);
		CMyPublicData::setfunc(49, 16, 5, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT46);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double10_edit46 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			yanchisheding[9] = m_double10_edit46;
		}
		datatestDPU[4] = yanchisheding[9] + yanchisheding[10];
		CMyPublicData::setfunc(50, 16, 5, 1);
		CMyPublicData::setfunc(51, 16, 5, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT2);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}
	
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
			yanchisheding[10] = m_double22;
		}
		for (int i = 0; i < 10; i++)
		{
			datatestDPU[4] = yanchisheding[10] + yanchisheding[i];
			CMyPublicData::setfunc(32 + 2 * i, 16, 5, 1);
			CMyPublicData::setfunc(33 + 2 * i, 16, 5, 1);
		}
		return TRUE;
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


void Yanchi::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double33++;
	if (0 <= m_double33&& m_double33 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[6] = m_double33;
	}
	else
	{
		m_double33--;
		UpdateData(FALSE);
		yanchisheding[6] = m_double33;
	}
	datatestDPU[4] = yanchisheding[6] + yanchisheding[10];
	CMyPublicData::setfunc(44, 16, 5, 1);
	CMyPublicData::setfunc(45, 16, 5, 1);
}


void Yanchi::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8_edit39++;
	if (0 <= m_double8_edit39&& m_double8_edit39 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[7] = m_double8_edit39;
	}
	else
	{
		m_double8_edit39--;
		UpdateData(FALSE);
		yanchisheding[7] = m_double8_edit39;
	}
	datatestDPU[4] = yanchisheding[7] + yanchisheding[10];
	CMyPublicData::setfunc(46, 16, 5, 1);
	CMyPublicData::setfunc(47, 16, 5, 1);
}


void Yanchi::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9_edit45++;
	if (0 <= m_double9_edit45&& m_double9_edit45 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[8] = m_double9_edit45;
	}
	else
	{
		m_double9_edit45--;
		UpdateData(FALSE);
		yanchisheding[8] = m_double9_edit45;
	}
	datatestDPU[4] = yanchisheding[8] + yanchisheding[10];
	CMyPublicData::setfunc(48, 16, 5, 1);
	CMyPublicData::setfunc(49, 16, 5, 1);
}


void Yanchi::OnBnClickedButton78()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10_edit46++;
	if (0 <= m_double10_edit46&& m_double10_edit46 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[9] = m_double10_edit46;
	}
	else
	{
		m_double10_edit46--;
		UpdateData(FALSE);
		yanchisheding[9] = m_double10_edit46;
	}
	datatestDPU[4] = yanchisheding[9] + yanchisheding[10];
	CMyPublicData::setfunc(50, 16, 5, 1);
	CMyPublicData::setfunc(51, 16, 5, 1);
}


void Yanchi::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1_edit3--;
	if (0 <= m_double1_edit3&& m_double1_edit3 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[0] = m_double1_edit3;
	}
	else
	{
		m_double1_edit3++;
		UpdateData(FALSE);
		yanchisheding[0] = m_double1_edit3;
	}
	datatestDPU[4] = yanchisheding[0] + yanchisheding[10];
	CMyPublicData::setfunc(32, 16, 5, 1);
	CMyPublicData::setfunc(33, 16, 5, 1);
}


void Yanchi::OnBnClickedButton64()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2_edit24--;
	if (0 <= m_double2_edit24&& m_double2_edit24 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[1] = m_double2_edit24;
	}
	else
	{
		m_double2_edit24++;
		UpdateData(FALSE);
		yanchisheding[1] = m_double2_edit24;
	}
	datatestDPU[4] = yanchisheding[1] + yanchisheding[10];
	CMyPublicData::setfunc(34, 16, 5, 1);
	CMyPublicData::setfunc(35, 16, 5, 1);
}


void Yanchi::OnBnClickedButton65()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3_edit34--;
	if (0 <= m_double3_edit34&& m_double3_edit34 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[2] = m_double3_edit34;
	}
	else
	{
		m_double3_edit34++;
		UpdateData(FALSE);
		yanchisheding[2] = m_double3_edit34;
	}
	datatestDPU[4] = yanchisheding[2] + yanchisheding[10];
	CMyPublicData::setfunc(36, 16, 5, 1);
	CMyPublicData::setfunc(37, 16, 5, 1);
}


void Yanchi::OnBnClickedButton67()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4_edit35--;
	if (0 <= m_double4_edit35&& m_double4_edit35 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[3] = m_double4_edit35;
	}
	else
	{
		m_double4_edit35++;
		UpdateData(FALSE);
		yanchisheding[3] = m_double4_edit35;
	}
	datatestDPU[4] = yanchisheding[3] + yanchisheding[10];
	CMyPublicData::setfunc(38, 16, 5, 1);
	CMyPublicData::setfunc(39, 16, 5, 1);
}


void Yanchi::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5_edit36--;
	if (0 <= m_double5_edit36&& m_double5_edit36 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[4] = m_double5_edit36;
	}
	else
	{
		m_double5_edit36++;
		UpdateData(FALSE);
		yanchisheding[4] = m_double5_edit36;
	}
	datatestDPU[4] = yanchisheding[4] + yanchisheding[10];
	CMyPublicData::setfunc(40, 16, 5, 1);
	CMyPublicData::setfunc(41, 16, 5, 1);
}


void Yanchi::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6_edit37--;
	if (0 <= m_double6_edit37&& m_double6_edit37 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[5] = m_double6_edit37;
	}
	else
	{
		m_double6_edit37++;
		UpdateData(FALSE);
		yanchisheding[5] = m_double6_edit37;
	}
	datatestDPU[4] = yanchisheding[5] + yanchisheding[10];
	CMyPublicData::setfunc(42, 16, 5, 1);
	CMyPublicData::setfunc(43, 16, 5, 1);
}


void Yanchi::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double33--;
	if (0 <= m_double33&& m_double33 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[6] = m_double33;
	}
	else
	{
		m_double33++;
		UpdateData(FALSE);
		yanchisheding[6] = m_double33;
	}
	datatestDPU[4] = yanchisheding[6] + yanchisheding[10];
	CMyPublicData::setfunc(44, 16, 5, 1);
	CMyPublicData::setfunc(45, 16, 5, 1);
}


void Yanchi::OnBnClickedButton75()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8_edit39--;
	if (0 <= m_double8_edit39&& m_double8_edit39 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[7] = m_double8_edit39;
	}
	else
	{
		m_double8_edit39++;
		UpdateData(FALSE);
		yanchisheding[7] = m_double8_edit39;
	}
	datatestDPU[4] = yanchisheding[7] + yanchisheding[10];
	CMyPublicData::setfunc(46, 16, 5, 1);
	CMyPublicData::setfunc(47, 16, 5, 1);
}


void Yanchi::OnBnClickedButton77()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9_edit45--;
	if (0 <= m_double9_edit45&& m_double9_edit45 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[8] = m_double9_edit45;
	}
	else
	{
		m_double9_edit45++;
		UpdateData(FALSE);
		yanchisheding[8] = m_double9_edit45;
	}
	datatestDPU[4] = yanchisheding[8] + yanchisheding[10];
	CMyPublicData::setfunc(48, 16, 5, 1);
	CMyPublicData::setfunc(49, 16, 5, 1);
}


void Yanchi::OnBnClickedButton79()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10_edit46--;
	if (0 <= m_double10_edit46&& m_double10_edit46 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[9] = m_double10_edit46;
	}
	else
	{
		m_double10_edit46++;
		UpdateData(FALSE);
		yanchisheding[9] = m_double10_edit46;
	}
	datatestDPU[4] = yanchisheding[9] + yanchisheding[10];
	CMyPublicData::setfunc(50, 16, 5, 1);
	CMyPublicData::setfunc(51, 16, 5, 1);
}


void Yanchi::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double22--;
	if (0 <= m_double22&& m_double22 <= 255)
	{
		UpdateData(FALSE);
		yanchisheding[10] = m_double22;
	}
	else
	{
		m_double22++;
		UpdateData(FALSE);
		yanchisheding[10] = m_double22;
	}
	for (int i = 0; i < 10; i++)
	{
		datatestDPU[4] = yanchisheding[10] + yanchisheding[i];
		CMyPublicData::setfunc(32 + 2 * i, 16, 5, 1);
		CMyPublicData::setfunc(33 + 2 * i, 16, 5, 1);
	}
}


BOOL Yanchi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num3901", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num3902", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num3903", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num3904", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num3905", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	GetDlgItem(IDC_BUTTON59)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON50)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON60)->SetWindowText(zhendong[2]);

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
	GetDlgItem(IDC_EDIT2)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT3)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT24)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT36)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT37)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT38)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT39)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT45)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT46)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void Yanchi::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void Yanchi::ReSize()
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

void Yanchi::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(yanchisheding[0]);
	opx.ModifyNode("num2001", str);
	str = opx.numtoString(yanchisheding[1]);
	opx.ModifyNode("num2002", str);
	str = opx.numtoString(yanchisheding[2]);
	opx.ModifyNode("num2003", str);
	str = opx.numtoString(yanchisheding[3]);
	opx.ModifyNode("num2004", str);
	str = opx.numtoString(yanchisheding[4]);
	opx.ModifyNode("num2005", str);
	str = opx.numtoString(yanchisheding[5]);
	opx.ModifyNode("num2006", str);
	str = opx.numtoString(yanchisheding[6]);
	opx.ModifyNode("num2007", str);
	str = opx.numtoString(yanchisheding[7]);
	opx.ModifyNode("num2008", str);
	str = opx.numtoString(yanchisheding[8]);
	opx.ModifyNode("num2009", str);
	str = opx.numtoString(yanchisheding[9]);
	opx.ModifyNode("num2010", str);
	str = opx.numtoString(yanchisheding[10]);
	opx.ModifyNode("num2011", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void Yanchi::OnBnClickedButton59()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON59)->GetWindowText(zhendong[0]);
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
		GetDlgItem(IDC_BUTTON59)->SetWindowText(_T("OFF"));
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
		GetDlgItem(IDC_BUTTON59)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON59)->GetWindowText(zhendong[0]);
}


void Yanchi::OnBnClickedButton50()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON50)->GetWindowText(zhendong[1]);
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
		GetDlgItem(IDC_BUTTON50)->SetWindowText(_T("OFF"));
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
		GetDlgItem(IDC_BUTTON50)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON50)->GetWindowText(zhendong[1]);
}


void Yanchi::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON60)->GetWindowText(zhendong[2]);
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
		GetDlgItem(IDC_BUTTON60)->SetWindowText(_T("OFF"));
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
		GetDlgItem(IDC_BUTTON60)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON60)->GetWindowText(zhendong[2]);
}


void Yanchi::OnBnClickedKaishida()
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


void Yanchi::OnBnClickedTingzhida()
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
