// hunselingmindu.cpp : 实现文件

#include "stdafx.h"
#include "MFCApplication1.h"
#include "hunselingmindu.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "Liuliangsheding.h"
#include "rlingmindu.h"
#include "Blingmindu.h"
#include "Mianji.h"
#include "Yansemingan.h"
#include "Famenceshi.h"
#include "Qinghui.h"
#include "Moshixuanze.h"
#include "Glingmindu.h"
#include "XMLHelper.h"
#include "HUNFEN.h"

// hunselingmindu 对话框

IMPLEMENT_DYNAMIC(hunselingmindu, CDialogEx)

hunselingmindu::hunselingmindu(CWnd* pParent /*=NULL*/)
	: CDialogEx(hunselingmindu::IDD, pParent)
	, m_double_1_edit(hunselingmin[0])
	, m_double_2_edit(hunselingmin[1])
	, m_double_3_edit(hunselingmin[2])
	, m_double_4_edit(hunselingmin[3])
	, m_double_5_edit(hunselingmin[4])
	, m_double_6_edit(hunselingmin[5])
	, m_double_7_edit(hunselingmin[6])
	, m_double_8_edit(hunselingmin[7])
	, m_double_9_edit(hunselingmin[8])
	, m_double_10_edit(hunselingmin[9])
	, m_double_11_edit(hunselingmin[10])
	, m_double_12_edit(hunselingmin[11])
{

}

hunselingmindu::~hunselingmindu()
{

}

void hunselingmindu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_1_EDIT, m_double_1_edit);
	DDX_Text(pDX, IDC_2_EDIT, m_double_2_edit);
	DDX_Text(pDX, IDC_3_EDIT, m_double_3_edit);
	DDX_Text(pDX, IDC_4_EDIT, m_double_4_edit);
	DDX_Text(pDX, IDC_5_EDIT, m_double_5_edit);
	DDX_Text(pDX, IDC_6_EDIT, m_double_6_edit);
	DDX_Text(pDX, IDC_7_EDIT, m_double_7_edit);
	DDX_Text(pDX, IDC_8_EDIT, m_double_8_edit);
	DDX_Control(pDX, IDC_COMBO1, m_combox1);
	DDX_Control(pDX, IDC_COMBO2, m_combox2);
	DDX_Text(pDX, IDC_5_EDIT2, m_double_9_edit);
	DDX_Text(pDX, IDC_6_EDIT2, m_double_10_edit);
	DDX_Text(pDX, IDC_7_EDIT2, m_double_11_edit);
	DDX_Text(pDX, IDC_8_EDIT2, m_double_12_edit);
	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA, m_tingzhi);
}


BEGIN_MESSAGE_MAP(hunselingmindu, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON34, &hunselingmindu::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON36, &hunselingmindu::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON38, &hunselingmindu::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON40, &hunselingmindu::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON42, &hunselingmindu::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON44, &hunselingmindu::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON46, &hunselingmindu::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON48, &hunselingmindu::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON33, &hunselingmindu::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON35, &hunselingmindu::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON37, &hunselingmindu::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON39, &hunselingmindu::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON41, &hunselingmindu::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON43, &hunselingmindu::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON45, &hunselingmindu::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON47, &hunselingmindu::OnBnClickedButton47)
	ON_BN_CLICKED(IDCANCEL, &hunselingmindu::OnBnClickedCancel)
	ON_WM_SIZE()
	ON_CBN_SELCHANGE(IDC_COMBO1, &hunselingmindu::OnCbnSelchangeCombo1)
	ON_CBN_SELCHANGE(IDC_COMBO2, &hunselingmindu::OnCbnSelchangeCombo2)
	ON_BN_CLICKED(IDC_BUTTON61, &hunselingmindu::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON60, &hunselingmindu::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON64, &hunselingmindu::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON62, &hunselingmindu::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON52, &hunselingmindu::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON51, &hunselingmindu::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON53, &hunselingmindu::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON66, &hunselingmindu::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_HUNFEN_BUTTON, &hunselingmindu::OnBnClickedHunfenButton)
	ON_BN_CLICKED(IDC_KAISHIDA, &hunselingmindu::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &hunselingmindu::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// hunselingmindu 消息处理程序


void hunselingmindu::OnBnClickedButton34()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_1_edit++;
	if (0 <= m_double_1_edit&& m_double_1_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[0] = m_double_1_edit;
	}
	else
	{
		m_double_1_edit--;
		UpdateData(FALSE);
		hunselingmin[0] = m_double_1_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = hunselingmin[0] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = hunselingmin[0] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton36()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_2_edit++;
	if (0 <= m_double_2_edit&& m_double_2_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[1] = m_double_2_edit;
	}
	else
	{
		m_double_2_edit--;
		UpdateData(FALSE);
		hunselingmin[1] = m_double_2_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = hunselingmin[1] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = hunselingmin[1] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 358, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton38()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_3_edit++;
	if (0 <= m_double_3_edit&& m_double_3_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[2] = m_double_3_edit;
	}
	else
	{
		m_double_3_edit--;
		UpdateData(FALSE);
		hunselingmin[2] = m_double_3_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = hunselingmin[2] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = hunselingmin[2] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton40()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_4_edit++;
	if (0 <= m_double_4_edit&& m_double_4_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[3] = m_double_4_edit;
	}
	else
	{
		m_double_4_edit--;
		UpdateData(FALSE);
		hunselingmin[3] = m_double_4_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = hunselingmin[3] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = hunselingmin[3] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 358, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton42()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_5_edit++;
	if (0 <= m_double_5_edit&& m_double_5_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[4] = m_double_5_edit;
	}
	else
	{
		m_double_5_edit--;
		UpdateData(FALSE);
		hunselingmin[4] = m_double_5_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = hunselingmin[4] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = hunselingmin[4] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton44()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_6_edit++;
	if (0 <= m_double_6_edit&& m_double_6_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[5] = m_double_6_edit;
	}
	else
	{
		m_double_6_edit--;
		UpdateData(FALSE);
		hunselingmin[5] = m_double_6_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = hunselingmin[5] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = hunselingmin[5] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 358, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton46()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_7_edit++;
	if (0 <= m_double_7_edit&& m_double_7_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[6] = m_double_7_edit;
	}
	else
	{
		m_double_7_edit--;
		UpdateData(FALSE);
		hunselingmin[6] = m_double_7_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = hunselingmin[6] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = hunselingmin[6] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton48()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_8_edit++;
	if (0 <= m_double_8_edit&& m_double_8_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[7] = m_double_8_edit;
	}
	else
	{
		m_double_8_edit--;
		UpdateData(FALSE);
		hunselingmin[7] = m_double_8_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = hunselingmin[7] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = hunselingmin[7] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 358, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton33()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_1_edit--;
	if (0 <= m_double_1_edit&& m_double_1_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[0] = m_double_1_edit;
	}
	else
	{
		m_double_1_edit++;
		UpdateData(FALSE);
		hunselingmin[0] = m_double_1_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = hunselingmin[0] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = hunselingmin[0] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton35()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_2_edit--;
	if (0 <= m_double_2_edit&& m_double_2_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[1] = m_double_2_edit;
	}
	else
	{
		m_double_2_edit++;
		UpdateData(FALSE);
		hunselingmin[1] = m_double_2_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = hunselingmin[1] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = hunselingmin[1] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 358, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton37()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_3_edit--;
	if (0 <= m_double_3_edit&& m_double_3_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[2] = m_double_3_edit;
	}
	else
	{
		m_double_3_edit++;
		UpdateData(FALSE);
		hunselingmin[2] = m_double_3_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = hunselingmin[2] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = hunselingmin[2] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton39()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_4_edit--;
	if (0 <= m_double_4_edit&& m_double_4_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[3] = m_double_4_edit;
	}
	else
	{
		m_double_4_edit++;
		UpdateData(FALSE);
		hunselingmin[3] = m_double_4_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = hunselingmin[3] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = hunselingmin[3] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 358, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton41()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_5_edit--;
	if (0 <= m_double_5_edit&& m_double_5_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[4] = m_double_5_edit;
	}
	else
	{
		m_double_5_edit++;
		UpdateData(FALSE);
		hunselingmin[4] = m_double_5_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = hunselingmin[4] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = hunselingmin[4] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton43()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_6_edit--;
	if (0 <= m_double_6_edit&& m_double_6_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[5] = m_double_6_edit;
	}
	else
	{
		m_double_6_edit++;
		UpdateData(FALSE);
		hunselingmin[5] = m_double_6_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = hunselingmin[5] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = hunselingmin[5] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 358, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton45()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_7_edit--;
	if (0 <= m_double_7_edit&& m_double_7_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[6] = m_double_7_edit;
	}
	else
	{
		m_double_7_edit++;
		UpdateData(FALSE);
		hunselingmin[6] = m_double_7_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = hunselingmin[6] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = hunselingmin[6] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton47()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_8_edit--;
	if (0 <= m_double_8_edit&& m_double_8_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[7] = m_double_8_edit;
	}
	else
	{
		m_double_8_edit++;
		UpdateData(FALSE);
		hunselingmin[7] = m_double_8_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = hunselingmin[7] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = hunselingmin[7] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 358, 1);
			}
		}
	}
}




void hunselingmindu::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(hunselingmin[0]);
	opx.ModifyNode("num0901", str);
	str = opx.numtoString(hunselingmin[1]);
	opx.ModifyNode("num0902", str);
	str = opx.numtoString(hunselingmin[2]);
	opx.ModifyNode("num0903", str);
	str = opx.numtoString(hunselingmin[3]);
	opx.ModifyNode("num0904", str);
	str = opx.numtoString(hunselingmin[4]);
	opx.ModifyNode("num0905", str);
	str = opx.numtoString(hunselingmin[5]);
	opx.ModifyNode("num0906", str);
	str = opx.numtoString(hunselingmin[6]);
	opx.ModifyNode("num0907", str);
	str = opx.numtoString(hunselingmin[7]);
	opx.ModifyNode("num0908", str);
	str = opx.numtoString(hunselingmin[8]);
	opx.ModifyNode("num0909", str);
	str = opx.numtoString(hunselingmin[9]);
	opx.ModifyNode("num0910", str);
	str = opx.numtoString(hunselingmin[10]);
	opx.ModifyNode("num0911", str);
	str = opx.numtoString(hunselingmin[11]);
	opx.ModifyNode("num0912", str);

	str = opx.numtoString(hunselingmin[20]);
	opx.ModifyNode("num0921", str);
	str = opx.numtoString(hunselingmin[21]);
	opx.ModifyNode("num0922", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}




//void hunselingmindu::OnBnClickedRminButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	rlingmindu rlingmin1;
//	rlingmin1.DoModal();
//	CDialogEx::OnCancel();
//}


//void hunselingmindu::OnBnClickedGminButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	Glingmindu glingmin1;
//	glingmin1.DoModal();
//	CDialogEx::OnCancel();
//}


//void hunselingmindu::OnBnClickedBminButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	Blingmindu blingmin1;
//	blingmin1.DoModal();
//	CDialogEx::OnCancel();
//}


BOOL hunselingmindu::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_1_EDIT);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 245;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double_1_edit = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			hunselingmin[0] = m_double_1_edit;
		}
		if (addSW == 1)
		{
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = hunselingmin[0] + hunlingminf[i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 78, 1);
				}
			}
		}
		if (addSW == 2)
		{
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = hunselingmin[0] + hunlingminf[i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 357, 1);
				}
			}
		}
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_2_EDIT);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		{
			CInputDlg dlg;
			dlg.ValueMax = 245;
			dlg.ValueMin = 0;

			if (dlg.DoModal() == IDOK)
			{
				UpdateData(TRUE);
				m_double_2_edit = _wtof(dlg.ValueShow);
				UpdateData(FALSE);
				hunselingmin[1] = m_double_2_edit;
			}
			if (addSW == 1)
			{
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i] == L"1")
					{
						datatestDPU[4] = hunselingmin[1] + hunlingminf[10 + i];
						CMyPublicData::setfunc(32 + 2 * i, 16, 79, 1);
					}
				}
			}
			if (addSW == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i] == L"1")
					{
						datatestDPU[4] = hunselingmin[1] + hunlingminf[10 + i];
						CMyPublicData::setfunc(32 + 2 * i, 16, 358, 1);
					}
				}
			}
			return TRUE;
		}
		else
		{
			pEdit = (CEdit*)GetDlgItem(IDC_3_EDIT);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				CInputDlg dlg;
				dlg.ValueMax = 245;
				dlg.ValueMin = 0;
				if (dlg.DoModal() == IDOK)
				{
					UpdateData(TRUE);
					m_double_3_edit = _wtof(dlg.ValueShow);
					UpdateData(FALSE);
					hunselingmin[2] = m_double_3_edit;
				}
				if (addSW == 1)
				{
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = hunselingmin[2] + hunlingminf[20 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 78, 1);
						}
					}
				}
				if (addSW == 2)
				{
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = hunselingmin[2] + hunlingminf[20 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 357, 1);
						}
					}
				}
				return TRUE;
			}
			else
			{
				pEdit = (CEdit*)GetDlgItem(IDC_4_EDIT);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					CInputDlg dlg;
					dlg.ValueMax = 245;
					dlg.ValueMin = 0;
					if (dlg.DoModal() == IDOK)
					{
						UpdateData(TRUE);
						m_double_4_edit = _wtof(dlg.ValueShow);
						UpdateData(FALSE);
						hunselingmin[3] = m_double_4_edit;
					}				
					if (addSW == 1)
					{
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i + 1] == L"1")
							{
								datatestDPU[4] = hunselingmin[3] + hunlingminf[30 + i];
								CMyPublicData::setfunc(33 + 2 * i, 16, 79, 1);
							}
						}
					}
					if (addSW == 2)
					{
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i + 1] == L"1")
							{
								datatestDPU[4] = hunselingmin[3] + hunlingminf[30 + i];
								CMyPublicData::setfunc(33 + 2 * i, 16, 358, 1);
							}
						}
					}
					return TRUE;
				}
				else
				{
					pEdit = (CEdit*)GetDlgItem(IDC_5_EDIT);
					ASSERT(pEdit && pEdit->GetSafeHwnd());
					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
					{
						CInputDlg dlg;
						dlg.ValueMax = 245;
						dlg.ValueMin = 0;
						if (dlg.DoModal() == IDOK)
						{
							UpdateData(TRUE);
							m_double_5_edit = _wtof(dlg.ValueShow);
							UpdateData(FALSE);
							hunselingmin[4] = m_double_5_edit;
						}
						if (addSW == 1)
						{
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = hunselingmin[4] + hunlingminf[i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 78, 1);
								}
							}
						}
						if (addSW == 2)
						{
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = hunselingmin[4] + hunlingminf[i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 357, 1);
								}
							}
						}
						return TRUE;
					}
					else
					{
						pEdit = (CEdit*)GetDlgItem(IDC_6_EDIT);
						ASSERT(pEdit && pEdit->GetSafeHwnd());
						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
						{
							CInputDlg dlg;
							dlg.ValueMax = 245;
							dlg.ValueMin = 0;
							if (dlg.DoModal() == IDOK)
							{
								UpdateData(TRUE);
								m_double_6_edit = _wtof(dlg.ValueShow);
								UpdateData(FALSE);
								hunselingmin[5] = m_double_6_edit;
							}
							if (addSW == 1)
							{
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i] == L"2")
									{
										datatestDPU[4] = hunselingmin[5] + hunlingminf[10 + i];
										CMyPublicData::setfunc(32 + 2 * i, 16, 79, 1);
									}
								}
							}
							if (addSW == 2)
							{
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i] == L"2")
									{
										datatestDPU[4] = hunselingmin[5] + hunlingminf[10 + i];
										CMyPublicData::setfunc(32 + 2 * i, 16, 358, 1);
									}
								}
							}
							return TRUE;
						}
						else
						{
							pEdit = (CEdit*)GetDlgItem(IDC_7_EDIT);
							ASSERT(pEdit && pEdit->GetSafeHwnd());
							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
							{
								CInputDlg dlg;
								dlg.ValueMax = 245;
								dlg.ValueMin = 0;
								if (dlg.DoModal() == IDOK)
								{
									UpdateData(TRUE);
									m_double_7_edit = _wtof(dlg.ValueShow);
									UpdateData(FALSE);
									hunselingmin[6] = m_double_7_edit;
								}
								if (addSW == 1)
								{
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = hunselingmin[6] + hunlingminf[20 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 78, 1);
										}
									}
								}
								if (addSW == 2)
								{
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = hunselingmin[6] + hunlingminf[20 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 357, 1);
										}
									}
								}
								return TRUE;
							}
							else
							{
								pEdit = (CEdit*)GetDlgItem(IDC_8_EDIT);
								ASSERT(pEdit && pEdit->GetSafeHwnd());
								if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
								{
									CInputDlg dlg;
									dlg.ValueMax = 245;
									dlg.ValueMin = 0;
									if (dlg.DoModal() == IDOK)
									{
										UpdateData(TRUE);
										m_double_8_edit = _wtof(dlg.ValueShow);
										UpdateData(FALSE);
										hunselingmin[7] = m_double_8_edit;
									}
									if (addSW == 1)
									{
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i + 1] == L"2")
											{
												datatestDPU[4] = hunselingmin[7] + hunlingminf[30 + i];
												CMyPublicData::setfunc(33 + 2 * i, 16, 79, 1);
											}
										}
									}
									if (addSW == 2)
									{
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i + 1] == L"2")
											{
												datatestDPU[4] = hunselingmin[7] + hunlingminf[30 + i];
												CMyPublicData::setfunc(33 + 2 * i, 16, 358, 1);
											}
										}
									}
									return TRUE;
								}
								else
								{
									pEdit = (CEdit*)GetDlgItem(IDC_5_EDIT2);
									ASSERT(pEdit && pEdit->GetSafeHwnd());
									if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
									{
										CInputDlg dlg;
										dlg.ValueMax = 245;
										dlg.ValueMin = 0;
										if (dlg.DoModal() == IDOK)
										{
											UpdateData(TRUE);
											m_double_9_edit = _wtof(dlg.ValueShow);
											UpdateData(FALSE);
											hunselingmin[8] = m_double_9_edit;
										}
										if (addSW == 1)
										{
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = hunselingmin[8] + hunlingminf[i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 78, 1);
												}
											}
										}
										if (addSW == 2)
										{
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = hunselingmin[8] + hunlingminf[i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 357, 1);
												}
											}
										}
										return TRUE;
									}
									else
									{
										pEdit = (CEdit*)GetDlgItem(IDC_6_EDIT2);
										ASSERT(pEdit && pEdit->GetSafeHwnd());
										if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
										{
											CInputDlg dlg;
											dlg.ValueMax = 245;
											dlg.ValueMin = 0;
											if (dlg.DoModal() == IDOK)
											{
												UpdateData(TRUE);
												m_double_10_edit = _wtof(dlg.ValueShow);
												UpdateData(FALSE);
												hunselingmin[9] = m_double_10_edit;
											}
											if (addSW == 1)
											{
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i] == L"3")
													{
														datatestDPU[4] = hunselingmin[9] + hunlingminf[10 + i];
														CMyPublicData::setfunc(32 + 2 * i, 16, 79, 1);
													}
												}
											}
											if (addSW == 2)
											{
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i] == L"3")
													{
														datatestDPU[4] = hunselingmin[9] + hunlingminf[10 + i];
														CMyPublicData::setfunc(32 + 2 * i, 16, 358, 1);
													}
												}
											}
											return TRUE;
										}
										else
										{
											pEdit = (CEdit*)GetDlgItem(IDC_7_EDIT2);
											ASSERT(pEdit && pEdit->GetSafeHwnd());
											if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
											{
												CInputDlg dlg;
												dlg.ValueMax = 245;
												dlg.ValueMin = 0;
												if (dlg.DoModal() == IDOK)
												{
													UpdateData(TRUE);
													m_double_11_edit = _wtof(dlg.ValueShow);
													UpdateData(FALSE);
													hunselingmin[10] = m_double_11_edit;
												}
												if (addSW == 1)
												{
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = hunselingmin[10] + hunlingminf[20 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 78, 1);
														}
													}
												}
												if (addSW == 2)
												{
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = hunselingmin[10] + hunlingminf[20 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 357, 1);
														}
													}
												}
												return TRUE;
											}
											else
											{
												pEdit = (CEdit*)GetDlgItem(IDC_8_EDIT2);
												ASSERT(pEdit && pEdit->GetSafeHwnd());
												if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
												{
													CInputDlg dlg;
													dlg.ValueMax = 245;
													dlg.ValueMin = 0;
													if (dlg.DoModal() == IDOK)
													{
														UpdateData(TRUE);
														m_double_12_edit = _wtof(dlg.ValueShow);
														UpdateData(FALSE);
														hunselingmin[11] = m_double_12_edit;
													}
													if (addSW == 1)
													{
														for (int i = 0; i < 10; i++)
														{
															if (modsd[2 * i + 1] == L"3")
															{
																datatestDPU[4] = hunselingmin[11] + hunlingminf[30 + i];
																CMyPublicData::setfunc(33 + 2 * i, 16, 79, 1);
															}
														}
													}
													if (addSW == 2)
													{
														for (int i = 0; i < 10; i++)
														{
															if (modsd[2 * i + 1] == L"3")
															{
																datatestDPU[4] = hunselingmin[11] + hunlingminf[30 + i];
																CMyPublicData::setfunc(33 + 2 * i, 16, 358, 1);
															}
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
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


void hunselingmindu::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void hunselingmindu::ReSize()
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

BOOL hunselingmindu::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num1301", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num1302", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_HUNFEN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num1303", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num1304", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num1305", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num1306", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC10)->SetWindowText(cstr);
	opx.QueryNode_Text("num1307", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num1308", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num1309", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC11)->SetWindowText(cstr);
	opx.QueryNode_Text("num1310", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num1311", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num1312", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num1313", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num1314", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	if (quanxian)
	{
		GetDlgItem(IDC_HUNFEN_BUTTON)->ShowWindow(true);
	}

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

	if (hunselingmin[20] == 0)            //设置COMBOX的初始值
	{
		m_combox1.SetCurSel(0);
	}
	if (hunselingmin[20]==1)
	{
		m_combox1.SetCurSel(1);
	}
	if (hunselingmin[20] == 2)
	{
		m_combox1.SetCurSel(2);
	}
	if (hunselingmin[20] == 3)
	{
		m_combox1.SetCurSel(3);
	}
	if (hunselingmin[20] == 4)
	{
		m_combox1.SetCurSel(4);
	}
	if (hunselingmin[20] == 5)
	{
		m_combox1.SetCurSel(5);
	}
	if (hunselingmin[20] == 6)
	{
		m_combox1.SetCurSel(6);
	}
	if (hunselingmin[20] == 7)
	{
		m_combox1.SetCurSel(7);
	}
	if (hunselingmin[20] == 8)
	{
		m_combox1.SetCurSel(8);
	}
	if (hunselingmin[20] == 9)
	{
		m_combox1.SetCurSel(9);
	}
	if (hunselingmin[20] == 10)
	{
		m_combox1.SetCurSel(10);
	}
	if (hunselingmin[21] == 0)
	{
		m_combox2.SetCurSel(0);
	}
	if (hunselingmin[21] == 1)
	{
		m_combox2.SetCurSel(1);
	}
	if (hunselingmin[21] == 2)
	{
		m_combox2.SetCurSel(2);
	}
	if (hunselingmin[21] == 3)
	{
		m_combox2.SetCurSel(3);
	}
	if (hunselingmin[21] == 4)
	{
		m_combox2.SetCurSel(4);
	}
	if (hunselingmin[21] == 5)
	{
		m_combox2.SetCurSel(5);
	}
	if (hunselingmin[21] == 6)
	{
		m_combox2.SetCurSel(6);
	}
	if (hunselingmin[21] == 7)
	{
		m_combox2.SetCurSel(7);
	}
	if (hunselingmin[21] == 8)
	{
		m_combox2.SetCurSel(8);
	}
	if (hunselingmin[21] == 9)
	{
		m_combox2.SetCurSel(9);
	}
	if (hunselingmin[21] == 10)
	{
		m_combox2.SetCurSel(10);
	}


	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//初始化窗口位置
	CRect rect;
	GetClientRect(&rect);     //取客户区大小    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;



	int nMargin = 15;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_1_EDIT)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_1_EDIT)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_2_EDIT)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_3_EDIT)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_4_EDIT)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_5_EDIT)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_6_EDIT)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_7_EDIT)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_8_EDIT)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_5_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_6_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_7_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_8_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void hunselingmindu::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString strChoosed;
	m_combox1.GetLBText(m_combox1.GetCurSel(), strChoosed);
	if (strChoosed == "R")
	{
		hunselingmin[20] = 0;
		datatestDPU[4] = 0;
		for (int i=0;i<10;i++)
		{
			CMyPublicData::setfunc(32+2*i, 16, 77, 1);
		}
	}
	if (strChoosed == "GRB")
	{
		hunselingmin[20] = 1;
		datatestDPU[4] = 1;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "RB")
	{
		hunselingmin[20] = 2;
		datatestDPU[4] = 2;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "RC")
	{
		hunselingmin[20] = 3;
		datatestDPU[4] = 3;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "GA")
	{
		hunselingmin[20] = 4;
		datatestDPU[4] = 4;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "GC")
	{
		hunselingmin[20] = 5;
		datatestDPU[4] = 5;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "BA")
	{
		hunselingmin[20] = 6;
		datatestDPU[4] = 6;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 77, 1);
		}

	}
	if (strChoosed == "BB")
	{
		hunselingmin[20] = 7;
		datatestDPU[4] = 7;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "R2BC")
	{
		hunselingmin[20] = 8;
		datatestDPU[4] = 8;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "G2AC")
	{
		hunselingmin[20] = 9;
		datatestDPU[4] = 9;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "B2AB")
	{
		hunselingmin[20] = 10;
		datatestDPU[4] = 10;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 77, 1);
		}
	}
	UpdateData(FALSE);
}


void hunselingmindu::OnCbnSelchangeCombo2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString strChoosed;
	m_combox2.GetLBText(m_combox2.GetCurSel(), strChoosed);
	if (strChoosed == "R")
	{
		hunselingmin[21] = 0;
		datatestDPU[4] = 0;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "GRB")
	{
		hunselingmin[21] = 1;
		datatestDPU[4] = 1;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "RB")
	{
		hunselingmin[21] = 2;
		datatestDPU[4] = 2;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "RC")
	{
		hunselingmin[21] = 3;
		datatestDPU[4] = 3;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "GA")
	{
		hunselingmin[21] = 4;
		datatestDPU[4] = 4;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "GC")
	{
		hunselingmin[21] = 5;
		datatestDPU[4] = 5;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "BA")
	{
		hunselingmin[21] = 6;
		datatestDPU[4] = 6;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 77, 1);
		}

	}
	if (strChoosed == "BB")
	{
		hunselingmin[21] = 7;
		datatestDPU[4] = 7;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "R2BC")
	{
		hunselingmin[21] = 8;
		datatestDPU[4] = 8;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "G2AC")
	{
		hunselingmin[21] = 9;
		datatestDPU[4] = 9;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 77, 1);
		}
	}
	if (strChoosed == "B2AB")
	{
		hunselingmin[21] = 10;
		datatestDPU[4] = 10;
		for (int i = 0; i < 10; i++)
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 77, 1);
		}
	}
	UpdateData(FALSE);
}




void hunselingmindu::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_9_edit++;
	if (0 <= m_double_9_edit&& m_double_9_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[8] = m_double_9_edit;
	}
	else
	{
		m_double_9_edit--;
		UpdateData(FALSE);
		hunselingmin[8] = m_double_9_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = hunselingmin[8] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = hunselingmin[8] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_9_edit--;
	if (0 <= m_double_9_edit&& m_double_9_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[8] = m_double_9_edit;
	}
	else
	{
		m_double_9_edit++;
		UpdateData(FALSE);
		hunselingmin[8] = m_double_9_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = hunselingmin[8] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = hunselingmin[8] + hunlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton64()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_10_edit++;
	if (0 <= m_double_10_edit&& m_double_10_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[9] = m_double_10_edit;
	}
	else
	{
		m_double_10_edit--;
		UpdateData(FALSE);
		hunselingmin[9] = m_double_10_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = hunselingmin[9] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = hunselingmin[9] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 358, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton62()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_10_edit--;
	if (0 <= m_double_10_edit&& m_double_10_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[9] = m_double_10_edit;
	}
	else
	{
		m_double_10_edit++;
		UpdateData(FALSE);
		hunselingmin[9] = m_double_10_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = hunselingmin[9] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = hunselingmin[9] + hunlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 358, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton52()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit++;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit--;
		UpdateData(FALSE);
		hunselingmin[10] = m_double_11_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = hunselingmin[10] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = hunselingmin[10] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton51()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit--;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit++;
		UpdateData(FALSE);
		hunselingmin[10] = m_double_11_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = hunselingmin[10] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 78, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = hunselingmin[10] + hunlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 357, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton53()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit++;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit--;
		UpdateData(FALSE);
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = hunselingmin[11] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = hunselingmin[11] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 358, 1);
			}
		}
	}
}


void hunselingmindu::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit--;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 245)
	{
		UpdateData(FALSE);
		hunselingmin[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit++;
		UpdateData(FALSE);
		hunselingmin[11] = m_double_12_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = hunselingmin[11] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 79, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = hunselingmin[11] + hunlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 358, 1);
			}
		}
	}
}




void hunselingmindu::OnBnClickedHunfenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	HUNFEN hf;
	hf.DoModal();
}


void hunselingmindu::OnBnClickedKaishida()
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


void hunselingmindu::OnBnClickedTingzhida()
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
