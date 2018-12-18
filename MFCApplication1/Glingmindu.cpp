// Glingmindu.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Glingmindu.h"
#include "afxdialogex.h"
#include "rlingmindu.h"
#include "hunselingmindu.h"
#include "Blingmindu.h"
#include "Mianji.h"
#include "Yansemingan.h"
#include "Famenceshi.h"
#include "Qinghui.h"
#include "Moshixuanze.h"
#include "InputDlg.h"
#include "XMLHelper.h"
#include "GFEN.h"
//#include "ADOConnect.h"
// Glingmindu 对话框

IMPLEMENT_DYNAMIC(Glingmindu, CDialogEx)

Glingmindu::Glingmindu(CWnd* pParent /*=NULL*/)
	: CDialogEx(Glingmindu::IDD, pParent)
	, m_double_1_edit(glingmin[0])
	, m_double_2_edit(glingmin[1])
	, m_double_3_edit(glingmin[2])
	, m_double_4_edit(glingmin[3])
	, m_double_5_edit(glingmin[4])
	, m_double_6_edit(glingmin[5])
	, m_double_7_edit(glingmin[6])
	, m_double_8_edit(glingmin[7])
	, m_double_9_edit(glingmin[8])
	, m_double_10_edit(glingmin[9])
	, m_double_11_edit(glingmin[10])
	, m_double_12_edit(glingmin[11])
{

}

Glingmindu::~Glingmindu()
{
}

void Glingmindu::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_5_EDIT2, m_double_9_edit);
	DDX_Text(pDX, IDC_6_EDIT2, m_double_10_edit);
	DDX_Text(pDX, IDC_7_EDIT2, m_double_11_edit);
	DDX_Text(pDX, IDC_8_EDIT2, m_double_12_edit);
	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA, m_tingzhi);
}


BEGIN_MESSAGE_MAP(Glingmindu, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON34, &Glingmindu::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON36, &Glingmindu::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON38, &Glingmindu::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON40, &Glingmindu::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON33, &Glingmindu::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON35, &Glingmindu::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON37, &Glingmindu::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON39, &Glingmindu::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON42, &Glingmindu::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON44, &Glingmindu::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON46, &Glingmindu::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON48, &Glingmindu::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON41, &Glingmindu::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON43, &Glingmindu::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON45, &Glingmindu::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON47, &Glingmindu::OnBnClickedButton47)
//	ON_BN_CLICKED(IDC_RMIN_BUTTON, &Glingmindu::OnBnClickedRminButton)
//	ON_BN_CLICKED(IDC_BMIN_BUTTON, &Glingmindu::OnBnClickedBminButton)
//	ON_BN_CLICKED(IDC_HUNMIN_BUTTON, &Glingmindu::OnBnClickedHunminButton)
	ON_BN_CLICKED(IDC_MIANJI_BUTTON, &Glingmindu::OnBnClickedMianjiButton)
	ON_BN_CLICKED(IDC_YANSE_BUTTON, &Glingmindu::OnBnClickedYanseButton)
	ON_BN_CLICKED(IDC_FAMEN_BUTTON, &Glingmindu::OnBnClickedFamenButton)
	ON_BN_CLICKED(IDC_QINGHUI_BUTTON, &Glingmindu::OnBnClickedQinghuiButton)
	ON_BN_CLICKED(IDC_MOSHI_BUTTON, &Glingmindu::OnBnClickedMoshiButton)
	ON_WM_SIZE()
//	ON_BN_CLICKED(IDC_KAISHIDA_BUTTON, &Glingmindu::OnBnClickedKaishidaButton)
	ON_BN_CLICKED(IDCANCEL, &Glingmindu::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON161, &Glingmindu::OnBnClickedButton161)
	ON_BN_CLICKED(IDC_BUTTON160, &Glingmindu::OnBnClickedButton160)
	ON_BN_CLICKED(IDC_BUTTON164, &Glingmindu::OnBnClickedButton164)
	ON_BN_CLICKED(IDC_BUTTON162, &Glingmindu::OnBnClickedButton162)
	ON_BN_CLICKED(IDC_BUTTON152, &Glingmindu::OnBnClickedButton152)
	ON_BN_CLICKED(IDC_BUTTON151, &Glingmindu::OnBnClickedButton151)
	ON_BN_CLICKED(IDC_BUTTON153, &Glingmindu::OnBnClickedButton153)
	ON_BN_CLICKED(IDC_BUTTON166, &Glingmindu::OnBnClickedButton166)
	ON_BN_CLICKED(IDC_GFEN_BUTTON, &Glingmindu::OnBnClickedGfenButton)
	ON_BN_CLICKED(IDC_KAISHIDA, &Glingmindu::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &Glingmindu::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// Glingmindu 消息处理程序


void Glingmindu::OnBnClickedButton34()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_1_edit++;
	if (0 <= m_double_1_edit&& m_double_1_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[0] = m_double_1_edit;
	}
	else
	{
		m_double_1_edit--;
		UpdateData(FALSE);
		glingmin[0] = m_double_1_edit;
	}
	if (addSW==1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = glingmin[0] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = glingmin[0] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton36()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_2_edit++;
	if (0 <= m_double_2_edit&& m_double_2_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[1] = m_double_2_edit;
	}
	else
	{
		m_double_2_edit--;
		UpdateData(FALSE);
		glingmin[1] = m_double_2_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = glingmin[1] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = glingmin[1] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 354, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton38()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_3_edit++;
	if (0 <= m_double_3_edit&& m_double_3_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[2] = m_double_3_edit;
	}
	else
	{
		m_double_3_edit--;
		UpdateData(FALSE);
		glingmin[2] = m_double_3_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = glingmin[2] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = glingmin[2] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton40()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_4_edit++;
	if (0 <= m_double_4_edit&& m_double_4_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[3] = m_double_4_edit;
	}
	else
	{
		m_double_4_edit--;
		UpdateData(FALSE);
		glingmin[3] = m_double_4_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = glingmin[3] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = glingmin[3] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 354, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton33()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_1_edit--;
	if (0 <= m_double_1_edit&& m_double_1_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[0] = m_double_1_edit;
	}
	else
	{
		m_double_1_edit++;
		UpdateData(FALSE);
		glingmin[0] = m_double_1_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = glingmin[0] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = glingmin[0] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton35()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_2_edit--;
	if (0 <= m_double_2_edit&& m_double_2_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[1] = m_double_2_edit;
	}
	else
	{
		m_double_2_edit++;
		UpdateData(FALSE);
		glingmin[1] = m_double_2_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = glingmin[1] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = glingmin[1] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 354, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton37()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_3_edit--;
	if (0 <= m_double_3_edit&& m_double_3_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[2] = m_double_3_edit;
	}
	else
	{
		m_double_3_edit++;
		UpdateData(FALSE);
		glingmin[2] = m_double_3_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = glingmin[2] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = glingmin[2] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton39()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_4_edit--;
	if (0 <= m_double_4_edit&& m_double_4_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[3] = m_double_4_edit;
	}
	else
	{
		m_double_4_edit++;
		UpdateData(FALSE);
		glingmin[3] = m_double_4_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = glingmin[3] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = glingmin[3] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 354, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton42()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_5_edit++;
	if (0 <= m_double_5_edit&& m_double_5_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[4] = m_double_5_edit;
	}
	else
	{
		m_double_5_edit--;
		UpdateData(FALSE);
		glingmin[4] = m_double_5_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = glingmin[4] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = glingmin[4] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton44()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_6_edit++;
	if (0 <= m_double_6_edit&& m_double_6_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[5] = m_double_6_edit;
	}
	else
	{
		m_double_6_edit--;
		UpdateData(FALSE);
		glingmin[5] = m_double_6_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = glingmin[5] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = glingmin[5] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 354, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton46()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_7_edit++;
	if (0 <= m_double_7_edit&& m_double_7_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[6] = m_double_7_edit;
	}
	else
	{
		m_double_7_edit--;
		UpdateData(FALSE);
		glingmin[6] = m_double_7_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = glingmin[6] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = glingmin[6] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton48()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_8_edit++;
	if (0 <= m_double_8_edit&& m_double_8_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[7] = m_double_8_edit;
	}
	else
	{
		m_double_8_edit--;
		UpdateData(FALSE);
		glingmin[7] = m_double_8_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = glingmin[7] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = glingmin[7] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 354, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton41()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_5_edit--;
	if (0 <= m_double_5_edit&& m_double_5_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[4] = m_double_5_edit;
	}
	else
	{
		m_double_5_edit++;
		UpdateData(FALSE);
		glingmin[4] = m_double_5_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = glingmin[4] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = glingmin[4] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton43()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_6_edit--;
	if (0 <= m_double_6_edit&& m_double_6_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[5] = m_double_6_edit;
	}
	else
	{
		m_double_6_edit++;
		UpdateData(FALSE);
		glingmin[5] = m_double_6_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = glingmin[5] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = glingmin[5] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 354, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton45()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_7_edit--;
	if (0 <= m_double_7_edit&& m_double_7_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[6] = m_double_7_edit;
	}
	else
	{
		m_double_7_edit++;
		UpdateData(FALSE);
		glingmin[6] = m_double_7_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = glingmin[6] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = glingmin[6] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton47()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_8_edit--;
	if (0 <= m_double_8_edit&& m_double_8_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[7] = m_double_8_edit;
	}
	else
	{
		m_double_8_edit++;
		UpdateData(FALSE);
		glingmin[7] = m_double_8_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = glingmin[7] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = glingmin[7] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 354, 1);
			}
		}
	}
}


//void Glingmindu::OnBnClickedRminButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	rlingmindu rlingmindu1;
//	rlingmindu1.DoModal();
//	CDialogEx::OnCancel();
//}


//void Glingmindu::OnBnClickedBminButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	Blingmindu blingmindu1;
//	blingmindu1.DoModal();
//	CDialogEx::OnCancel();
//}


//void Glingmindu::OnBnClickedHunminButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	hunselingmindu hunse1;
//	hunse1.DoModal();
//	CDialogEx::OnCancel();
//}


void Glingmindu::OnBnClickedMianjiButton()
{
	// TODO: 在此添加控件通知处理程序代码
	Mianji mianji1;
	mianji1.DoModal();
}


void Glingmindu::OnBnClickedYanseButton()
{
	// TODO: 在此添加控件通知处理程序代码
	Yansemingan yanse1;
	yanse1.DoModal();
}


void Glingmindu::OnBnClickedFamenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	Famenceshi famen1;
	famen1.DoModal();
}


void Glingmindu::OnBnClickedQinghuiButton()
{
	// TODO: 在此添加控件通知处理程序代码
	Qinghui qinghui1;
	qinghui1.DoModal();
}


void Glingmindu::OnBnClickedMoshiButton()
{
	// TODO: 在此添加控件通知处理程序代码
	Moshixuanze moshi1;
	moshi1.DoModal();
}



BOOL Glingmindu::PreTranslateMessage(MSG* pMsg)
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
			glingmin[0] = m_double_1_edit;
		}
		if (addSW == 1)
		{
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = glingmin[0] + glingminf[i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 66, 1);
				}
			}
		}
		if (addSW == 2)
		{
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = glingmin[0] + glingminf[i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 353, 1);
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
				glingmin[1] = m_double_2_edit;
			}
			if (addSW == 1)
			{
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i] == L"1")
					{
						datatestDPU[4] = glingmin[1] + glingminf[10 + i];
						CMyPublicData::setfunc(32 + 2 * i, 16, 67, 1);
					}
				}
			}
			if (addSW == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i] == L"1")
					{
						datatestDPU[4] = glingmin[1] + glingminf[10 + i];
						CMyPublicData::setfunc(32 + 2 * i, 16, 354, 1);
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
					glingmin[2] = m_double_3_edit;
				}
				if (addSW == 1)
				{
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = glingmin[2] + glingminf[20 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 66, 1);
						}
					}
				}
				if (addSW == 2)
				{
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = glingmin[2] + glingminf[20 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 353, 1);
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
						glingmin[3] = m_double_4_edit;
					}
					if (addSW == 1)
					{
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i + 1] == L"1")
							{
								datatestDPU[4] = glingmin[3] + glingminf[30 + i];
								CMyPublicData::setfunc(33 + 2 * i, 16, 67, 1);
							}
						}
					}
					if (addSW == 2)
					{
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i + 1] == L"1")
							{
								datatestDPU[4] = glingmin[3] + glingminf[30 + i];
								CMyPublicData::setfunc(33 + 2 * i, 16, 354, 1);
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
							glingmin[4] = m_double_5_edit;
						}
						if (addSW == 1)
						{
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = glingmin[4] + glingminf[i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 66, 1);
								}
							}
						}
						if (addSW == 2)
						{
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = glingmin[4] + glingminf[i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 353, 1);
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
								glingmin[5] = m_double_6_edit;
							}
							if (addSW == 1)
							{
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i] == L"2")
									{
										datatestDPU[4] = glingmin[5] + glingminf[10 + i];
										CMyPublicData::setfunc(32 + 2 * i, 16, 67, 1);
									}
								}
							}
							if (addSW == 2)
							{
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i] == L"2")
									{
										datatestDPU[4] = glingmin[5] + glingminf[10 + i];
										CMyPublicData::setfunc(32 + 2 * i, 16, 354, 1);
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
									glingmin[6] = m_double_7_edit;
								}
								if (addSW == 1)
								{
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = glingmin[6] + glingminf[20 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 66, 1);
										}
									}
								}
								if (addSW == 2)
								{
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = glingmin[6] + glingminf[20 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 353, 1);
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
										glingmin[7] = m_double_8_edit;
									}
									if (addSW == 1)
									{
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i + 1] == L"2")
											{
												datatestDPU[4] = glingmin[7] + glingminf[30 + i];
												CMyPublicData::setfunc(33 + 2 * i, 16, 67, 1);
											}
										}
									}
									if (addSW == 2)
									{
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i + 1] == L"2")
											{
												datatestDPU[4] = glingmin[7] + glingminf[30 + i];
												CMyPublicData::setfunc(33 + 2 * i, 16, 354, 1);
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
											glingmin[8] = m_double_9_edit;
										}
										if (addSW == 1)
										{
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = glingmin[8] + glingminf[i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 66, 1);
												}
											}
										}
										if (addSW == 2)
										{
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = glingmin[8] + glingminf[i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 353, 1);
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
												glingmin[9] = m_double_10_edit;
											}
											if (addSW == 1)
											{
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i] == L"3")
													{
														datatestDPU[4] = glingmin[9] + glingminf[10 + i];
														CMyPublicData::setfunc(32 + 2 * i, 16, 67, 1);
													}
												}
											}
											if (addSW == 2)
											{
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i] == L"3")
													{
														datatestDPU[4] = glingmin[9] + glingminf[10 + i];
														CMyPublicData::setfunc(32 + 2 * i, 16, 354, 1);
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
													glingmin[10] = m_double_11_edit;
												}
												if (addSW == 1)
												{
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = glingmin[10] + glingminf[20 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 66, 1);
														}
													}
												}
												if (addSW == 2)
												{
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = glingmin[10] + glingminf[20 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 353, 1);
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
														glingmin[11] = m_double_12_edit;
													}
													if (addSW == 1)
													{
														for (int i = 0; i < 10; i++)
														{
															if (modsd[2 * i + 1] == L"3")
															{
																datatestDPU[4] = glingmin[11] + glingminf[30 + i];
																CMyPublicData::setfunc(33 + 2 * i, 16, 67, 1);
															}
														}
													}
													if (addSW == 2)
													{
														for (int i = 0; i < 10; i++)
														{
															if (modsd[2 * i + 1] == L"3")
															{
																datatestDPU[4] = glingmin[11] + glingminf[30 + i];
																CMyPublicData::setfunc(33 + 2 * i, 16, 354, 1);
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


void Glingmindu::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL Glingmindu::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num0901", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC0)->SetWindowText(cstr);
	opx.QueryNode_Text("num0902", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_GFEN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num0903", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num0904", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num0905", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num0906", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num0907", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num0908", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num0909", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num0910", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num0911", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num0912", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	if (quanxian)
	{
		GetDlgItem(IDC_GFEN_BUTTON)->ShowWindow(true);
	}
	UpdateData(FALSE);
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

void Glingmindu::ReSize()
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


//void Glingmindu::OnBnClickedKaishidaButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	datatestDPU[0] = 32;
//	datatestDPU[2] = 60;
//	datatestDPU[10] = glingmin[0];
//	datatestDPU[11] = glingmin[1];
//
//	CMyPublicData::writeholdreg();
//}


void Glingmindu::OnBnClickedCancel()
{

	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(glingmin[0]);
	opx.ModifyNode("num0701", str);
	str = opx.numtoString(glingmin[1]);
	opx.ModifyNode("num0702", str);
	str = opx.numtoString(glingmin[2]);
	opx.ModifyNode("num0703", str);
	str = opx.numtoString(glingmin[3]);
	opx.ModifyNode("num0704", str);
	str = opx.numtoString(glingmin[4]);
	opx.ModifyNode("num0705", str);
	str = opx.numtoString(glingmin[5]);
	opx.ModifyNode("num0706", str);
	str = opx.numtoString(glingmin[6]);
	opx.ModifyNode("num0707", str);
	str = opx.numtoString(glingmin[7]);
	opx.ModifyNode("num0708", str);
	str = opx.numtoString(glingmin[8]);
	opx.ModifyNode("num0709", str);
	str = opx.numtoString(glingmin[9]);
	opx.ModifyNode("num0710", str);
	str = opx.numtoString(glingmin[10]);
	opx.ModifyNode("num0711", str);
	str = opx.numtoString(glingmin[11]);
	opx.ModifyNode("num0712", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void Glingmindu::OnBnClickedButton161()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_9_edit++;
	if (0 <= m_double_9_edit&& m_double_9_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[8] = m_double_9_edit;
	}
	else
	{
		m_double_9_edit--;
		UpdateData(FALSE);
		glingmin[8] = m_double_9_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = glingmin[8] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = glingmin[8] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton160()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_9_edit--;
	if (0 <= m_double_9_edit&& m_double_9_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[8] = m_double_9_edit;
	}
	else
	{
		m_double_9_edit++;
		UpdateData(FALSE);
		glingmin[8] = m_double_9_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = glingmin[8] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = glingmin[8] + glingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton164()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_10_edit++;
	if (0 <= m_double_10_edit&& m_double_10_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[9] = m_double_10_edit;
	}
	else
	{
		m_double_10_edit--;
		UpdateData(FALSE);
		glingmin[9] = m_double_10_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = glingmin[9] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = glingmin[9] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 354, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton162()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_10_edit--;
	if (0 <= m_double_10_edit&& m_double_10_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[9] = m_double_10_edit;
	}
	else
	{
		m_double_10_edit++;
		UpdateData(FALSE);
		glingmin[9] = m_double_10_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = glingmin[9] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = glingmin[9] + glingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 354, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton152()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit++;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit--;
		UpdateData(FALSE);
		glingmin[10] = m_double_11_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = glingmin[10] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = glingmin[10] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton151()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit--;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit++;
		UpdateData(FALSE);
		glingmin[10] = m_double_11_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = glingmin[10] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 66, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = glingmin[10] + glingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 353, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton153()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit++;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit--;
		UpdateData(FALSE);
		glingmin[11] = m_double_12_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = glingmin[11] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = glingmin[11] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 354, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedButton166()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit--;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 245)
	{
		UpdateData(FALSE);
		glingmin[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit++;
		UpdateData(FALSE);
		glingmin[11] = m_double_12_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = glingmin[11] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 67, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = glingmin[11] + glingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 354, 1);
			}
		}
	}
}


void Glingmindu::OnBnClickedGfenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	GFEN gf;
	gf.DoModal();
}




void Glingmindu::OnBnClickedKaishida()
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


void Glingmindu::OnBnClickedTingzhida()
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
