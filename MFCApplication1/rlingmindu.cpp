// rlingmindu.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "rlingmindu.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "Liuliangsheding.h"
#include "Glingmindu.h"
#include "Blingmindu.h"
#include "hunselingmindu.h"
#include "Mianji.h"
#include "Yansemingan.h"
#include "Famenceshi.h"
#include "Qinghui.h"
#include "Moshixuanze.h"
#include "Glingmindu.h"
#include "XMLHelper.h"
#include "RFEN.h"
// rlingmindu 对话框

IMPLEMENT_DYNAMIC(rlingmindu, CDialogEx)

rlingmindu::rlingmindu(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_R_DIALOG, pParent)
	, m_double_1_edit(rlingmin[0])
	, m_double_2_edit(rlingmin[1])
	, m_double_3_edit(rlingmin[2])
	, m_double_4_edit(rlingmin[3])
	, m_double_5_edit(rlingmin[4])
	, m_double_6_edit(rlingmin[5])
	, m_double_7_edit(rlingmin[6])
	, m_double_8_edit(rlingmin[7])
	, m_double_9_edit(rlingmin[8])
	, m_double_10_edit(rlingmin[9])
	, m_double_11_edit(rlingmin[10])
	, m_double_12_edit(rlingmin[11])
{

}

rlingmindu::~rlingmindu()
{
}

void rlingmindu::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(rlingmindu, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON34, &rlingmindu::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON36, &rlingmindu::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON38, &rlingmindu::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON40, &rlingmindu::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON42, &rlingmindu::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON44, &rlingmindu::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON46, &rlingmindu::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON48, &rlingmindu::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON33, &rlingmindu::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON35, &rlingmindu::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON37, &rlingmindu::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON39, &rlingmindu::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON41, &rlingmindu::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON43, &rlingmindu::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON45, &rlingmindu::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON47, &rlingmindu::OnBnClickedButton47)
	ON_BN_CLICKED(IDC_GMIN_BUTTON, &rlingmindu::OnBnClickedGminButton)
	ON_BN_CLICKED(IDC_BMIN_BUTTON, &rlingmindu::OnBnClickedBminButton)
	ON_BN_CLICKED(IDC_HUNMIN_BUTTON, &rlingmindu::OnBnClickedHunminButton)
	ON_WM_SIZE()
//	ON_BN_CLICKED(IDC_KAISHIDA_BUTTON, &rlingmindu::OnBnClickedKaishidaButton)
	ON_BN_CLICKED(IDCANCEL, &rlingmindu::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON161, &rlingmindu::OnBnClickedButton161)
	ON_BN_CLICKED(IDC_BUTTON160, &rlingmindu::OnBnClickedButton160)
	ON_BN_CLICKED(IDC_BUTTON164, &rlingmindu::OnBnClickedButton164)
	ON_BN_CLICKED(IDC_BUTTON162, &rlingmindu::OnBnClickedButton162)
	ON_BN_CLICKED(IDC_BUTTON194, &rlingmindu::OnBnClickedButton194)
	ON_BN_CLICKED(IDC_BUTTON185, &rlingmindu::OnBnClickedButton185)
	ON_BN_CLICKED(IDC_BUTTON188, &rlingmindu::OnBnClickedButton188)
	ON_BN_CLICKED(IDC_BUTTON187, &rlingmindu::OnBnClickedButton187)
	ON_BN_CLICKED(IDC_RFEN_BUTTON, &rlingmindu::OnBnClickedRfenButton)
	ON_BN_CLICKED(IDC_BUTTON166, &rlingmindu::OnBnClickedButton166)
	ON_BN_CLICKED(IDC_BUTTON151, &rlingmindu::OnBnClickedButton151)
	ON_BN_CLICKED(IDC_BUTTON152, &rlingmindu::OnBnClickedButton152)
	ON_BN_CLICKED(IDC_BUTTON153, &rlingmindu::OnBnClickedButton153)
	ON_BN_CLICKED(IDC_KAISHIDA, &rlingmindu::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &rlingmindu::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// rlingmindu 消息处理程序


void rlingmindu::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_1_edit++;
	if (0 <= m_double_1_edit&& m_double_1_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[0] = m_double_1_edit;
	}
	else
	{
		m_double_1_edit--;
		UpdateData(FALSE);
		rlingmin[0] = m_double_1_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = rlingmin[0] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = rlingmin[0] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton36()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_2_edit++;
	if (0 <= m_double_2_edit&& m_double_2_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[1] = m_double_2_edit;
	}
	else
	{
		m_double_2_edit--;
		UpdateData(FALSE);
		rlingmin[1] = m_double_2_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = rlingmin[1] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = rlingmin[1] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_3_edit++;
	if (0 <= m_double_3_edit&& m_double_3_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[2] = m_double_3_edit;
	}
	else
	{
		m_double_3_edit--;
		UpdateData(FALSE);
		rlingmin[2] = m_double_3_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = rlingmin[2] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = rlingmin[2] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_4_edit++;
	if (0 <= m_double_4_edit&& m_double_4_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[3] = m_double_4_edit;
	}
	else
	{
		m_double_4_edit--;
		UpdateData(FALSE);
		rlingmin[3] = m_double_4_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = rlingmin[3] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = rlingmin[3] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton42()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_5_edit++;
	if (0 <= m_double_5_edit&& m_double_5_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[4] = m_double_5_edit;
	}
	else
	{
		m_double_5_edit--;
		UpdateData(FALSE);
		rlingmin[4] = m_double_5_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = rlingmin[4] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = rlingmin[4] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton44()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_6_edit++;
	if (0 <= m_double_6_edit&& m_double_6_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[5] = m_double_6_edit;
	}
	else
	{
		m_double_6_edit--;
		UpdateData(FALSE);
		rlingmin[5] = m_double_6_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = rlingmin[5] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = rlingmin[5] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton46()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_7_edit++;
	if (0 <= m_double_7_edit&& m_double_7_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[6] = m_double_7_edit;
	}
	else
	{
		m_double_7_edit--;
		UpdateData(FALSE);
		rlingmin[6] = m_double_7_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = rlingmin[6] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = rlingmin[6] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton48()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_8_edit++;
	if (0 <= m_double_8_edit&& m_double_8_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[7] = m_double_8_edit;
	}
	else
	{
		m_double_8_edit--;
		UpdateData(FALSE);
		rlingmin[7] = m_double_8_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = rlingmin[7] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = rlingmin[7] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_1_edit--;
	if (0 <= m_double_1_edit&& m_double_1_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[0] = m_double_1_edit;
	}
	else
	{
		m_double_1_edit++;
		UpdateData(FALSE);
		rlingmin[0] = m_double_1_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = rlingmin[0] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = rlingmin[0] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton35()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_2_edit--;
	if (0 <= m_double_2_edit&& m_double_2_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[1] = m_double_2_edit;
	}
	else
	{
		m_double_2_edit++;
		UpdateData(FALSE);
		rlingmin[1] = m_double_2_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = rlingmin[1] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = rlingmin[1] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton37()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_3_edit--;
	if (0 <= m_double_3_edit&& m_double_3_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[2] = m_double_3_edit;
	}
	else
	{
		m_double_3_edit++;
		UpdateData(FALSE);
		rlingmin[2] = m_double_3_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = rlingmin[2] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = rlingmin[2] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton39()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_4_edit--;
	if (0 <= m_double_4_edit&& m_double_4_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[3] = m_double_4_edit;
	}
	else
	{
		m_double_4_edit++;
		UpdateData(FALSE);
		rlingmin[3] = m_double_4_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = rlingmin[3] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = rlingmin[3] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton41()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_5_edit--;
	if (0 <= m_double_5_edit&& m_double_5_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[4] = m_double_5_edit;
	}
	else
	{
		m_double_5_edit++;
		UpdateData(FALSE);
		rlingmin[4] = m_double_5_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = rlingmin[4] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = rlingmin[4] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton43()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_6_edit--;
	if (0 <= m_double_6_edit&& m_double_6_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[5] = m_double_6_edit;
	}
	else
	{
		m_double_6_edit++;
		UpdateData(FALSE);
		rlingmin[5] = m_double_6_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = rlingmin[5] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = rlingmin[5] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton45()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_7_edit--;
	if (0 <= m_double_7_edit&& m_double_7_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[6] = m_double_7_edit;
	}
	else
	{
		m_double_7_edit++;
		UpdateData(FALSE);
		rlingmin[6] = m_double_7_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = rlingmin[6] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = rlingmin[6] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton47()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_8_edit--;
	if (0 <= m_double_8_edit&& m_double_8_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[7] = m_double_8_edit;
	}
	else
	{
		m_double_8_edit++;
		UpdateData(FALSE);
		rlingmin[7] = m_double_8_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = rlingmin[7] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = rlingmin[7] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedLiuliangButton()
{
	// TODO: 在此添加控件通知处理程序代码
	CLiuliangsheding liuliang;
	liuliang.DoModal();
}


void rlingmindu::OnBnClickedGminButton()
{
	// TODO: 在此添加控件通知处理程序代码
	Glingmindu glingmindu;
	glingmindu.DoModal();
}


void rlingmindu::OnBnClickedBminButton()
{
	// TODO: 在此添加控件通知处理程序代码
	Blingmindu blingmindu;
	blingmindu.DoModal();
}


void rlingmindu::OnBnClickedHunminButton()
{
	// TODO: 在此添加控件通知处理程序代码
	hunselingmindu hunse;
	hunse.DoModal();
}




BOOL rlingmindu::PreTranslateMessage(MSG* pMsg)
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
			rlingmin[0] = m_double_1_edit;
		}
		if (addSW == 1)
		{
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = rlingmin[0] + rlingminf[i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 64, 1);
				}
			}
		}
		if (addSW == 2)
		{
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = rlingmin[0] + rlingminf[i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 351, 1);
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
				rlingmin[1] = m_double_2_edit;
			}
			if (addSW == 1)
			{
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i] == L"1")
					{
						datatestDPU[4] = rlingmin[1] + rlingminf[10 + i];
						CMyPublicData::setfunc(32 + 2 * i, 16, 65, 1);
					}
				}
			}
			if (addSW == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i] == L"1")
					{
						datatestDPU[4] = rlingmin[1] + rlingminf[10 + i];
						CMyPublicData::setfunc(32 + 2 * i, 16, 352, 1);
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
					rlingmin[2] = m_double_3_edit;
				}
				if (addSW == 1)
				{
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = rlingmin[2] + rlingminf[20 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 64, 1);
						}
					}
				}
				if (addSW == 2)
				{
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = rlingmin[2] + rlingminf[20 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 351, 1);
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
						rlingmin[3] = m_double_4_edit;
					}
					if (addSW == 1)
					{
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i + 1] == L"1")
							{
								datatestDPU[4] = rlingmin[3] + rlingminf[30 + i];
								CMyPublicData::setfunc(33 + 2 * i, 16, 65, 1);
							}
						}
					}
					if (addSW == 2)
					{
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i + 1] == L"1")
							{
								datatestDPU[4] = rlingmin[3] + rlingminf[30 + i];
								CMyPublicData::setfunc(33 + 2 * i, 16, 352, 1);
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
							rlingmin[4] = m_double_5_edit;
						}
						if (addSW == 1)
						{
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = rlingmin[4] + rlingminf[i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 64, 1);
								}
							}
						}
						if (addSW == 2)
						{
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = rlingmin[4] + rlingminf[i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 351, 1);
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
								rlingmin[5] = m_double_6_edit;
							}
							if (addSW == 1)
							{
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i] == L"2")
									{
										datatestDPU[4] = rlingmin[5] + rlingminf[10 + i];
										CMyPublicData::setfunc(32 + 2 * i, 16, 65, 1);
									}
								}
							}
							if (addSW == 2)
							{
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i] == L"2")
									{
										datatestDPU[4] = rlingmin[5] + rlingminf[10 + i];
										CMyPublicData::setfunc(32 + 2 * i, 16, 352, 1);
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
									rlingmin[6] = m_double_7_edit;
								}
								if (addSW == 1)
								{
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = rlingmin[6] + rlingminf[20 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 64, 1);
										}
									}
								}
								if (addSW == 2)
								{
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = rlingmin[6] + rlingminf[20 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 351, 1);
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
										rlingmin[7] = m_double_8_edit;
									}
									if (addSW == 1)
									{
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i + 1] == L"2")
											{
												datatestDPU[4] = rlingmin[7] + rlingminf[30 + i];
												CMyPublicData::setfunc(33 + 2 * i, 16, 65, 1);
											}
										}
									}
									if (addSW == 2)
									{
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i + 1] == L"2")
											{
												datatestDPU[4] = rlingmin[7] + rlingminf[30 + i];
												CMyPublicData::setfunc(33 + 2 * i, 16, 352, 1);
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
											rlingmin[8] = m_double_9_edit;
										}
										if (addSW == 1)
										{
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = rlingmin[8] + rlingminf[i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 64, 1);
												}
											}
										}
										if (addSW == 2)
										{
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = rlingmin[8] + rlingminf[i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 351, 1);
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
												rlingmin[9] = m_double_10_edit;
											}
											if (addSW == 1)
											{
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i] == L"3")
													{
														datatestDPU[4] = rlingmin[9] + rlingminf[10 + i];
														CMyPublicData::setfunc(32 + 2 * i, 16, 65, 1);
													}
												}
											}
											if (addSW == 2)
											{
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i] == L"3")
													{
														datatestDPU[4] = rlingmin[9] + rlingminf[10 + i];
														CMyPublicData::setfunc(32 + 2 * i, 16, 352, 1);
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
													rlingmin[10] = m_double_11_edit;
												}
												if (addSW == 1)
												{
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = rlingmin[10] + rlingminf[20 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 64, 1);
														}
													}
												}
												if (addSW == 2)
												{
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = rlingmin[10] + rlingminf[20 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 351, 1);
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
														rlingmin[11] = m_double_12_edit;
													}
													if (addSW == 1)
													{
														for (int i = 0; i < 10; i++)
														{
															if (modsd[2 * i + 1] == L"3")
															{
																datatestDPU[4] = rlingmin[11] + rlingminf[30 + i];
																CMyPublicData::setfunc(33 + 2 * i, 16, 65, 1);
															}
														}
													}
													if (addSW == 2)
													{
														for (int i = 0; i < 10; i++)
														{
															if (modsd[2 * i + 1] == L"3")
															{
																datatestDPU[4] = rlingmin[11] + rlingminf[30 + i];
																CMyPublicData::setfunc(33 + 2 * i, 16, 352, 1);
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

				UpdateData(FALSE);
				return CDialogEx::PreTranslateMessage(pMsg);
			}
		}
	}


	return CDialogEx::PreTranslateMessage(pMsg);
}


BOOL rlingmindu::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num3101", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC0)->SetWindowText(cstr);
	opx.QueryNode_Text("num3102", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_RFEN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num3103", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num3104", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num3105", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num3106", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num3107", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num3108", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num3109", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num3110", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num3111", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num3112", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_GMIN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num3113", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BMIN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num3114", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_HUNMIN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num3115", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	if (quanxian)
	{
		GetDlgItem(IDC_RFEN_BUTTON)->ShowWindow(true);
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


void rlingmindu::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


void rlingmindu::ReSize()
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

//void rlingmindu::OnBnClickedKaishidaButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	//datatestDPU[0] = 32;
//	//datatestDPU[2] = 60;
//	//datatestDPU[8] = rlingmin[0];
//	//datatestDPU[9] = rlingmin[1];
//
//
//	//CMyPublicData::writeholdreg();
//}


void rlingmindu::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(rlingmin[0]);
	opx.ModifyNode("num1501", str);
	str = opx.numtoString(rlingmin[1]);
	opx.ModifyNode("num1502", str);
	str = opx.numtoString(rlingmin[2]);
	opx.ModifyNode("num1503", str);
	str = opx.numtoString(rlingmin[3]);
	opx.ModifyNode("num1504", str);
	str = opx.numtoString(rlingmin[4]);
	opx.ModifyNode("num1505", str);
	str = opx.numtoString(rlingmin[5]);
	opx.ModifyNode("num1506", str);
	str = opx.numtoString(rlingmin[6]);
	opx.ModifyNode("num1507", str);
	str = opx.numtoString(rlingmin[7]);
	opx.ModifyNode("num1508", str);
	str = opx.numtoString(rlingmin[8]);
	opx.ModifyNode("num1509", str);
	str = opx.numtoString(rlingmin[9]);
	opx.ModifyNode("num1510", str);
	str = opx.numtoString(rlingmin[10]);
	opx.ModifyNode("num1511", str);
	str = opx.numtoString(rlingmin[11]);
	opx.ModifyNode("num1512", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void rlingmindu::OnBnClickedButton161()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_9_edit++;
	if (0 <= m_double_9_edit&& m_double_9_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[8] = m_double_9_edit;
	}
	else
	{
		m_double_9_edit--;
		UpdateData(FALSE);
		rlingmin[8] = m_double_9_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = rlingmin[8] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = rlingmin[8] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton160()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_9_edit--;
	if (0 <= m_double_9_edit&& m_double_9_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[8] = m_double_9_edit;
	}
	else
	{
		m_double_9_edit++;
		UpdateData(FALSE);
		rlingmin[8] = m_double_9_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = rlingmin[8] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = rlingmin[8] + rlingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton164()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_10_edit++;
	if (0 <= m_double_10_edit&& m_double_10_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[9] = m_double_10_edit;
	}
	else
	{
		m_double_10_edit--;
		UpdateData(FALSE);
		rlingmin[9] = m_double_10_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = rlingmin[9] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = rlingmin[9] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton162()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_10_edit--;
	if (0 <= m_double_10_edit&& m_double_10_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[9] = m_double_10_edit;
	}
	else
	{
		m_double_10_edit++;
		UpdateData(FALSE);
		rlingmin[9] = m_double_10_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = rlingmin[9] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = rlingmin[9] + rlingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton194()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit++;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit--;
		UpdateData(FALSE);
		rlingmin[10] = m_double_11_edit;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = rlingmin[10] + rlingminf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 64, 1);
		}
	}
}


void rlingmindu::OnBnClickedButton185()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit--;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit++;
		UpdateData(FALSE);
		rlingmin[10] = m_double_11_edit;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = rlingmin[10] + rlingminf[20 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 64, 1);
		}
	}
}


void rlingmindu::OnBnClickedButton188()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit++;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit--;
		UpdateData(FALSE);
		rlingmin[11] = m_double_12_edit;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = rlingmin[11] + rlingminf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 65, 1);
		}
	}
}


void rlingmindu::OnBnClickedButton187()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit--;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit++;
		UpdateData(FALSE);
		rlingmin[11] = m_double_12_edit;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = rlingmin[11] + rlingminf[30 + i];
			CMyPublicData::setfunc(33 + 2 * i, 16, 65, 1);
		}
	}
}


void rlingmindu::OnBnClickedRfenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	RFEN rf;
	rf.DoModal();
}




void rlingmindu::OnBnClickedButton166()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit--;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit++;
		UpdateData(FALSE);
		rlingmin[11] = m_double_12_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = rlingmin[11] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = rlingmin[11] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton151()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit--;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit++;
		UpdateData(FALSE);
		rlingmin[10] = m_double_11_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = rlingmin[10] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = rlingmin[10] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton152()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit++;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit--;
		UpdateData(FALSE);
		rlingmin[10] = m_double_11_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = rlingmin[10] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 64, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = rlingmin[10] + rlingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 351, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedButton153()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit++;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 245)
	{
		UpdateData(FALSE);
		rlingmin[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit--;
		UpdateData(FALSE);
		rlingmin[11] = m_double_12_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = rlingmin[11] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 65, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = rlingmin[11] + rlingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 352, 1);
			}
		}
	}
}


void rlingmindu::OnBnClickedKaishida()
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


void rlingmindu::OnBnClickedTingzhida()
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
