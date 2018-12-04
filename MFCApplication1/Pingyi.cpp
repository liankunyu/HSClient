// Pingyi.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Pingyi.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
//#include "ADOConnect.h"
// Pingyi 对话框

IMPLEMENT_DYNAMIC(Pingyi, CDialogEx)

Pingyi::Pingyi(CWnd* pParent /*=NULL*/)
	: CDialogEx(Pingyi::IDD, pParent)
	, m_double_1_edit(pingyisheding[0])
	, m_double_2_edit(pingyisheding[1])
	, m_double_3_edit(pingyisheding[2])
	, m_double_4_edit(pingyisheding[3])
	, m_double_5_edit(pingyisheding[4])
	, m_double_6_edit(pingyisheding[5])
	, m_double_7_edit(pingyisheding[6])
	, m_double_8_edit(pingyisheding[7])
	, m_double_9_edit(pingyisheding[8])
	, m_double_10_edit(pingyisheding[9])
	, m_double_11_edit(pingyisheding[10])
	, m_double_12_edit(pingyisheding[11])
	, m_double_13_edit(pingyisheding[12])
	, m_double_14_edit(pingyisheding[13])
	, m_double_15_edit(pingyisheding[14])
	, m_double_16_edit(pingyisheding[15])
	, m_double_17_edit(pingyisheding[16])
	, m_double_18_edit(pingyisheding[17])
	, m_double_19_edit(pingyisheding[18])
	, m_double_20_edit(pingyisheding[19])
{

}

Pingyi::~Pingyi()
{
}

void Pingyi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_1, m_double_1_edit);
	DDX_Text(pDX, IDC_EDIT_2, m_double_2_edit);
	DDX_Text(pDX, IDC_EDIT_3, m_double_3_edit);
	DDX_Text(pDX, IDC_EDIT_4, m_double_4_edit);
	DDX_Text(pDX, IDC_EDIT_5, m_double_5_edit);
	DDX_Text(pDX, IDC_EDIT_6, m_double_6_edit);
	DDX_Text(pDX, IDC_EDIT_7, m_double_7_edit);
	DDX_Text(pDX, IDC_EDIT_8, m_double_8_edit);
	DDX_Text(pDX, IDC_EDIT_9, m_double_9_edit);
	DDX_Text(pDX, IDC_EDIT_10, m_double_10_edit);
	DDX_Text(pDX, IDC_EDIT_11, m_double_11_edit);
	DDX_Text(pDX, IDC_EDIT12, m_double_12_edit);
	DDX_Text(pDX, IDC_EDIT_12, m_double_13_edit);
	DDX_Text(pDX, IDC_EDIT25, m_double_14_edit);
	DDX_Text(pDX, IDC_EDIT_13, m_double_15_edit);
	DDX_Text(pDX, IDC_EDIT37, m_double_16_edit);
	DDX_Text(pDX, IDC_EDIT_14, m_double_17_edit);
	DDX_Text(pDX, IDC_EDIT38, m_double_18_edit);
	DDX_Text(pDX, IDC_EDIT_15, m_double_19_edit);
	DDX_Text(pDX, IDC_EDIT39, m_double_20_edit);
}


BEGIN_MESSAGE_MAP(Pingyi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON10, &Pingyi::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON33, &Pingyi::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON43, &Pingyi::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON45, &Pingyi::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON47, &Pingyi::OnBnClickedButton47)
	ON_BN_CLICKED(IDC_BUTTON51, &Pingyi::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON53, &Pingyi::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON70, &Pingyi::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON73, &Pingyi::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON76, &Pingyi::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON79, &Pingyi::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON82, &Pingyi::OnBnClickedButton82)
	ON_BN_CLICKED(IDC_BUTTON86, &Pingyi::OnBnClickedButton86)
	ON_BN_CLICKED(IDC_BUTTON44, &Pingyi::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON46, &Pingyi::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON48, &Pingyi::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON52, &Pingyi::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON54, &Pingyi::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON71, &Pingyi::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON74, &Pingyi::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON77, &Pingyi::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON80, &Pingyi::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_BUTTON85, &Pingyi::OnBnClickedButton85)
	ON_BN_CLICKED(IDC_BUTTON87, &Pingyi::OnBnClickedButton87)
	ON_BN_CLICKED(IDC_BUTTON1, &Pingyi::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON88, &Pingyi::OnBnClickedButton88)
	ON_BN_CLICKED(IDC_BUTTON106, &Pingyi::OnBnClickedButton106)
	ON_BN_CLICKED(IDC_BUTTON108, &Pingyi::OnBnClickedButton108)
	ON_BN_CLICKED(IDC_BUTTON110, &Pingyi::OnBnClickedButton110)
	ON_BN_CLICKED(IDC_BUTTON112, &Pingyi::OnBnClickedButton112)
	ON_BN_CLICKED(IDC_BUTTON114, &Pingyi::OnBnClickedButton114)
	ON_BN_CLICKED(IDC_BUTTON116, &Pingyi::OnBnClickedButton116)
	ON_BN_CLICKED(IDC_BUTTON118, &Pingyi::OnBnClickedButton118)
	ON_BN_CLICKED(IDC_BUTTON89, &Pingyi::OnBnClickedButton89)
	ON_BN_CLICKED(IDC_BUTTON107, &Pingyi::OnBnClickedButton107)
	ON_BN_CLICKED(IDC_BUTTON109, &Pingyi::OnBnClickedButton109)
	ON_BN_CLICKED(IDC_BUTTON111, &Pingyi::OnBnClickedButton111)
	ON_BN_CLICKED(IDC_BUTTON113, &Pingyi::OnBnClickedButton113)
	ON_BN_CLICKED(IDC_BUTTON115, &Pingyi::OnBnClickedButton115)
	ON_BN_CLICKED(IDC_BUTTON117, &Pingyi::OnBnClickedButton117)
	ON_BN_CLICKED(IDC_BUTTON119, &Pingyi::OnBnClickedButton119)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &Pingyi::OnBnClickedCancel)
END_MESSAGE_MAP()


// Pingyi 消息处理程序


void Pingyi::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_1_edit++;
	if (0 <= m_double_1_edit&& m_double_1_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[0] = m_double_1_edit;
	}
	else
	{
		m_double_1_edit--;
		UpdateData(FALSE);
		pingyisheding[0] = m_double_1_edit;
	}
	datatestDPU[4] = pingyisheding[0];
	CMyPublicData::setfunc(32, 16, 8, 1);

}


void Pingyi::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_1_edit--;
	if (0 <= m_double_1_edit&& m_double_1_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[0] = m_double_1_edit;
	}
	else
	{
		m_double_1_edit++;
		UpdateData(FALSE);
		pingyisheding[0] = m_double_1_edit;
	}
	datatestDPU[4] = pingyisheding[0];
	CMyPublicData::setfunc(32, 16, 8, 1);
}


void Pingyi::OnBnClickedButton43()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_2_edit++;
	if (0 <= m_double_2_edit&& m_double_2_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[1] = m_double_2_edit;
	}
	else
	{
		m_double_2_edit--;
		UpdateData(FALSE);
		pingyisheding[1] = m_double_2_edit;
	}
	datatestDPU[4] = pingyisheding[1];
	CMyPublicData::setfunc(34, 16, 8, 1);
}


void Pingyi::OnBnClickedButton45()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_3_edit++;
	if (0 <= m_double_3_edit&& m_double_3_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[2] = m_double_3_edit;
	}
	else
	{
		m_double_3_edit--;
		UpdateData(FALSE);
		pingyisheding[2] = m_double_3_edit;
	}
	datatestDPU[4] = pingyisheding[2];
	CMyPublicData::setfunc(36, 16, 8, 1);
}


void Pingyi::OnBnClickedButton47()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_4_edit++;
	if (0 <= m_double_4_edit&& m_double_4_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[3] = m_double_4_edit;
	}
	else
	{
		m_double_4_edit--;
		UpdateData(FALSE);
		pingyisheding[3] = m_double_4_edit;
	}
	datatestDPU[4] = pingyisheding[3];
	CMyPublicData::setfunc(38, 16, 8, 1);
}


void Pingyi::OnBnClickedButton51()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_5_edit++;
	if (0 <= m_double_5_edit&& m_double_5_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[4] = m_double_5_edit;
	}
	else
	{
		m_double_5_edit--;
		UpdateData(FALSE);
		pingyisheding[4] = m_double_5_edit;
	}
	datatestDPU[4] = pingyisheding[4];
	CMyPublicData::setfunc(40, 16, 8, 1);
}


void Pingyi::OnBnClickedButton53()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_6_edit++;
	if (0 <= m_double_6_edit&& m_double_6_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[5] = m_double_6_edit;
	}
	else
	{
		m_double_6_edit--;
		UpdateData(FALSE);
		pingyisheding[5] = m_double_6_edit;
	}
	datatestDPU[4] = pingyisheding[5];
	CMyPublicData::setfunc(42, 16, 8, 1);
}


void Pingyi::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_7_edit++;
	if (0 <= m_double_7_edit&& m_double_7_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[6] = m_double_7_edit;
	}
	else
	{
		m_double_7_edit--;
		UpdateData(FALSE);
		pingyisheding[6] = m_double_7_edit;
	}
	datatestDPU[4] = pingyisheding[6];
	CMyPublicData::setfunc(44, 16, 8, 1);
}


void Pingyi::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_8_edit++;
	if (0 <= m_double_8_edit&& m_double_8_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[7] = m_double_8_edit;
	}
	else
	{
		m_double_8_edit--;
		UpdateData(FALSE);
		pingyisheding[7] = m_double_8_edit;
	}
	datatestDPU[4] = pingyisheding[7];
	CMyPublicData::setfunc(46, 16, 8, 1);
}


void Pingyi::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_9_edit++;
	if (0 <= m_double_9_edit&& m_double_9_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[8] = m_double_9_edit;
	}
	else
	{
		m_double_9_edit--;
		UpdateData(FALSE);
		pingyisheding[8] = m_double_9_edit;
	}
	datatestDPU[4] = pingyisheding[8];
	CMyPublicData::setfunc(48, 16, 8, 1);
}


void Pingyi::OnBnClickedButton79()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_10_edit++;
	if (0 <= m_double_10_edit&& m_double_10_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[9] = m_double_10_edit;
	}
	else
	{
		m_double_10_edit--;
		UpdateData(FALSE);
		pingyisheding[9] = m_double_10_edit;
	}
	datatestDPU[4] = pingyisheding[9];
	CMyPublicData::setfunc(50, 16, 8, 1);
}


void Pingyi::OnBnClickedButton82()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit++;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit--;
		UpdateData(FALSE);
		pingyisheding[10] = m_double_11_edit;
	}
	datatestDPU[4] = pingyisheding[10];
	CMyPublicData::setfunc(33, 16, 8, 1);
}


void Pingyi::OnBnClickedButton86()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit++;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit--;
		UpdateData(FALSE);
		pingyisheding[11] = m_double_12_edit;
	}
	datatestDPU[4] = pingyisheding[11];
	CMyPublicData::setfunc(35, 16, 8, 1);
}


void Pingyi::OnBnClickedButton44()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_2_edit--;
	if (0 <= m_double_2_edit&& m_double_2_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[1] = m_double_2_edit;
	}
	else
	{
		m_double_2_edit++;
		UpdateData(FALSE);
		pingyisheding[1] = m_double_2_edit;
	}
	datatestDPU[4] = pingyisheding[1];
	CMyPublicData::setfunc(34, 16, 8, 1);
}


void Pingyi::OnBnClickedButton46()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_3_edit--;
	if (0 <= m_double_3_edit&& m_double_3_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[1] = m_double_3_edit;
	}
	else
	{
		m_double_3_edit++;
		UpdateData(FALSE);
		pingyisheding[2] = m_double_3_edit;
	}
	datatestDPU[4] = pingyisheding[2];
	CMyPublicData::setfunc(36, 16, 8, 1);
}


void Pingyi::OnBnClickedButton48()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_4_edit--;
	if (0 <= m_double_4_edit&& m_double_4_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[3] = m_double_4_edit;
	}
	else
	{
		m_double_4_edit++;
		UpdateData(FALSE);
		pingyisheding[3] = m_double_4_edit;
	}
	datatestDPU[4] = pingyisheding[3];
	CMyPublicData::setfunc(38, 16, 8, 1);
}


void Pingyi::OnBnClickedButton52()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_5_edit--;
	if (0 <= m_double_5_edit&& m_double_5_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[4] = m_double_5_edit;
	}
	else
	{
		m_double_5_edit++;
		UpdateData(FALSE);
		pingyisheding[4] = m_double_5_edit;
	}
	datatestDPU[4] = pingyisheding[4];
	CMyPublicData::setfunc(40, 16, 8, 1);
}


void Pingyi::OnBnClickedButton54()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_6_edit--;
	if (0 <= m_double_6_edit&& m_double_6_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[5] = m_double_6_edit;
	}
	else
	{
		m_double_6_edit++;
		UpdateData(FALSE);
		pingyisheding[5] = m_double_6_edit;
	}
	datatestDPU[4] = pingyisheding[5];
	CMyPublicData::setfunc(42, 16, 8, 1);
}


void Pingyi::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_7_edit--;
	if (0 <= m_double_7_edit&& m_double_7_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[6] = m_double_7_edit;
	}
	else
	{
		m_double_7_edit++;
		UpdateData(FALSE);
		pingyisheding[6] = m_double_7_edit;
	}
	datatestDPU[4] = pingyisheding[6];
	CMyPublicData::setfunc(44, 16, 8, 1);
}


void Pingyi::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_8_edit--;
	if (0 <= m_double_8_edit&& m_double_8_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[7] = m_double_8_edit;
	}
	else
	{
		m_double_8_edit++;
		UpdateData(FALSE);
		pingyisheding[7] = m_double_8_edit;
	}
	datatestDPU[4] = pingyisheding[7];
	CMyPublicData::setfunc(46, 16, 8, 1);
}


void Pingyi::OnBnClickedButton77()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_9_edit--;
	if (0 <= m_double_9_edit&& m_double_9_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[8] = m_double_9_edit;
	}
	else
	{
		m_double_9_edit++;
		UpdateData(FALSE);
		pingyisheding[8] = m_double_9_edit;
	}
	datatestDPU[4] = pingyisheding[8];
	CMyPublicData::setfunc(48, 16, 8, 1);
}


void Pingyi::OnBnClickedButton80()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_10_edit--;
	if (0 <= m_double_10_edit&& m_double_10_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[9] = m_double_10_edit;
	}
	else
	{
		m_double_10_edit++;
		UpdateData(FALSE);
		pingyisheding[9] = m_double_10_edit;
	}
	datatestDPU[4] = pingyisheding[9];
	CMyPublicData::setfunc(50, 16, 8, 1);
}


void Pingyi::OnBnClickedButton85()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit--;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit++;
		UpdateData(FALSE);
		pingyisheding[10] = m_double_11_edit;
	}
	datatestDPU[4] = pingyisheding[10];
	CMyPublicData::setfunc(33, 16, 8, 1);
}


void Pingyi::OnBnClickedButton87()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit--;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit++;
		UpdateData(FALSE);
		pingyisheding[11] = m_double_12_edit;
	}
	datatestDPU[4] = pingyisheding[11];
	CMyPublicData::setfunc(35, 16, 8, 1);
}


void Pingyi::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}


void Pingyi::OnBnClickedButton88()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_13_edit++;
	if (0 <= m_double_13_edit&& m_double_13_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[12] = m_double_13_edit;
	}
	else
	{
		m_double_13_edit--;
		UpdateData(FALSE);
		pingyisheding[12] = m_double_13_edit;
	}
	datatestDPU[4] = pingyisheding[12];
	CMyPublicData::setfunc(37, 16, 8, 1);
}


void Pingyi::OnBnClickedButton106()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_14_edit++;
	if (0 <= m_double_14_edit&& m_double_14_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[13] = m_double_14_edit;
	}
	else
	{
		m_double_14_edit--;
		UpdateData(FALSE);
		pingyisheding[13] = m_double_14_edit;
	}
	datatestDPU[4] = pingyisheding[13];
	CMyPublicData::setfunc(39, 16, 8, 1);
}


void Pingyi::OnBnClickedButton108()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_15_edit++;
	if (0 <= m_double_15_edit&& m_double_15_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[14] = m_double_15_edit;
	}
	else
	{
		m_double_15_edit--;
		UpdateData(FALSE);
		pingyisheding[14] = m_double_15_edit;
	}
	datatestDPU[4] = pingyisheding[14];
	CMyPublicData::setfunc(41, 16, 8, 1);
}


void Pingyi::OnBnClickedButton110()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_16_edit++;
	if (0 <= m_double_16_edit&& m_double_16_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[15] = m_double_16_edit;
	}
	else
	{
		m_double_16_edit--;
		UpdateData(FALSE);
		pingyisheding[15] = m_double_16_edit;
	}
	datatestDPU[4] = pingyisheding[15];
	CMyPublicData::setfunc(43, 16, 8, 1);
}


void Pingyi::OnBnClickedButton112()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_17_edit++;
	if (0 <= m_double_17_edit&& m_double_17_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[16] = m_double_17_edit;
	}
	else
	{
		m_double_17_edit--;
		UpdateData(FALSE);
		pingyisheding[16] = m_double_17_edit;
	}
	datatestDPU[4] = pingyisheding[16];
	CMyPublicData::setfunc(45, 16, 8, 1);
}


void Pingyi::OnBnClickedButton114()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_18_edit++;
	if (0 <= m_double_18_edit&& m_double_18_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[17] = m_double_18_edit;
	}
	else
	{
		m_double_18_edit--;
		UpdateData(FALSE);
		pingyisheding[17] = m_double_18_edit;
	}
	datatestDPU[4] = pingyisheding[17];
	CMyPublicData::setfunc(47, 16, 8, 1);
}


void Pingyi::OnBnClickedButton116()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_19_edit++;
	if (0 <= m_double_19_edit&& m_double_19_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[18] = m_double_19_edit;
	}
	else
	{
		m_double_19_edit--;
		UpdateData(FALSE);
		pingyisheding[18] = m_double_19_edit;
	}
	datatestDPU[4] = pingyisheding[18];
	CMyPublicData::setfunc(49, 16, 8, 1);
}


void Pingyi::OnBnClickedButton118()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_20_edit++;
	if (0 <= m_double_20_edit&& m_double_20_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[19] = m_double_20_edit;
	}
	else
	{
		m_double_20_edit--;
		UpdateData(FALSE);
		pingyisheding[19] = m_double_20_edit;
	}
	datatestDPU[4] = pingyisheding[19];
	CMyPublicData::setfunc(51, 16, 8, 1);
}


BOOL Pingyi::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT_1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 255;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double_1_edit = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			pingyisheding[0] = m_double_1_edit;
		}
		datatestDPU[4] = pingyisheding[0];
		CMyPublicData::setfunc(32, 16, 8, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT_2);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		{
			CInputDlg dlg;
			dlg.ValueMax = 255;
			dlg.ValueMin = 0;

			if (dlg.DoModal() == IDOK)
			{
				UpdateData(TRUE);
				m_double_2_edit = _wtof(dlg.ValueShow);
				UpdateData(FALSE);
				pingyisheding[1] = m_double_2_edit;
			}
			datatestDPU[4] = pingyisheding[1];
			CMyPublicData::setfunc(34, 16, 8, 1);
			return TRUE;
		}
		else
		{
			pEdit = (CEdit*)GetDlgItem(IDC_EDIT_3);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				CInputDlg dlg;
				dlg.ValueMax = 255;
				dlg.ValueMin = 0;
				if (dlg.DoModal() == IDOK)
				{
					UpdateData(TRUE);
					m_double_3_edit = _wtof(dlg.ValueShow);
					UpdateData(FALSE);
					pingyisheding[2] = m_double_3_edit;
				}
				datatestDPU[4] = pingyisheding[2];
				CMyPublicData::setfunc(36, 16, 8, 1);
				return TRUE;
			}
			else
			{
				pEdit = (CEdit*)GetDlgItem(IDC_EDIT_4);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					CInputDlg dlg;
					dlg.ValueMax = 255;
					dlg.ValueMin = 0;
					if (dlg.DoModal() == IDOK)
					{
						UpdateData(TRUE);
						m_double_4_edit = _wtof(dlg.ValueShow);
						UpdateData(FALSE);
						pingyisheding[3] = m_double_4_edit;
					}
					datatestDPU[4] = pingyisheding[3];
					CMyPublicData::setfunc(38, 16, 8, 1);
					return TRUE;
				}
				else
				{
					pEdit = (CEdit*)GetDlgItem(IDC_EDIT_5);
					ASSERT(pEdit && pEdit->GetSafeHwnd());
					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
					{
						CInputDlg dlg;
						dlg.ValueMax = 255;
						dlg.ValueMin = 0;
						if (dlg.DoModal() == IDOK)
						{
							UpdateData(TRUE);
							m_double_5_edit = _wtof(dlg.ValueShow);
							UpdateData(FALSE);
							pingyisheding[4] = m_double_5_edit;
						}
						datatestDPU[4] = pingyisheding[4];
						CMyPublicData::setfunc(40, 16, 8, 1);
						return TRUE;
					}
					else
					{
						pEdit = (CEdit*)GetDlgItem(IDC_EDIT_6);
						ASSERT(pEdit && pEdit->GetSafeHwnd());
						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
						{
							CInputDlg dlg;
							dlg.ValueMax = 255;
							dlg.ValueMin = 0;
							if (dlg.DoModal() == IDOK)
							{
								UpdateData(TRUE);
								m_double_6_edit = _wtof(dlg.ValueShow);
								UpdateData(FALSE);
								pingyisheding[5] = m_double_6_edit;
							}
							datatestDPU[4] = pingyisheding[5];
							CMyPublicData::setfunc(42, 16, 8, 1);
							return TRUE;
						}
						else
						{
							pEdit = (CEdit*)GetDlgItem(IDC_EDIT_7);
							ASSERT(pEdit && pEdit->GetSafeHwnd());
							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
							{
								CInputDlg dlg;
								dlg.ValueMax = 255;
								dlg.ValueMin = 0;
								if (dlg.DoModal() == IDOK)
								{
									UpdateData(TRUE);
									m_double_7_edit = _wtof(dlg.ValueShow);
									UpdateData(FALSE);
									pingyisheding[6] = m_double_7_edit;
								}
								datatestDPU[4] = pingyisheding[6];
								CMyPublicData::setfunc(44, 16, 8, 1);
								return TRUE;
							}
							else
							{
								pEdit = (CEdit*)GetDlgItem(IDC_EDIT_8);
								ASSERT(pEdit && pEdit->GetSafeHwnd());
								if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
								{
									CInputDlg dlg;
									dlg.ValueMax = 255;
									dlg.ValueMin = 0;
									if (dlg.DoModal() == IDOK)
									{
										UpdateData(TRUE);
										m_double_8_edit = _wtof(dlg.ValueShow);
										UpdateData(FALSE);
										pingyisheding[7] = m_double_8_edit;
									}
									datatestDPU[4] = pingyisheding[7];
									CMyPublicData::setfunc(46, 16, 8, 1);
									return TRUE;
								}
								else
								{
									pEdit = (CEdit*)GetDlgItem(IDC_EDIT_9);
									ASSERT(pEdit && pEdit->GetSafeHwnd());
									if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
									{
										CInputDlg dlg;
										dlg.ValueMax = 255;
										dlg.ValueMin = 0;
										if (dlg.DoModal() == IDOK)
										{
											UpdateData(TRUE);
											m_double_9_edit = _wtof(dlg.ValueShow);
											UpdateData(FALSE);
											pingyisheding[8] = m_double_9_edit;
										}
										datatestDPU[4] = pingyisheding[8];
										CMyPublicData::setfunc(48, 16, 8, 1);
										return TRUE;
									}
									else
									{
										pEdit = (CEdit*)GetDlgItem(IDC_EDIT_10);
										ASSERT(pEdit && pEdit->GetSafeHwnd());
										if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
										{
											CInputDlg dlg;
											dlg.ValueMax = 255;
											dlg.ValueMin = 0;
											if (dlg.DoModal() == IDOK)
											{
												UpdateData(TRUE);
												m_double_10_edit = _wtof(dlg.ValueShow);
												UpdateData(FALSE);
												pingyisheding[9] = m_double_10_edit;
											}
											datatestDPU[4] = pingyisheding[9];
											CMyPublicData::setfunc(50, 16, 8, 1);
											return TRUE;
										}
										else
										{
											pEdit = (CEdit*)GetDlgItem(IDC_EDIT_11);
											ASSERT(pEdit && pEdit->GetSafeHwnd());
											if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
											{
												CInputDlg dlg;
												dlg.ValueMax = 255;
												dlg.ValueMin = 0;
												if (dlg.DoModal() == IDOK)
												{
													UpdateData(TRUE);
													m_double_11_edit = _wtof(dlg.ValueShow);
													UpdateData(FALSE);
													pingyisheding[10] = m_double_11_edit;
												}
												datatestDPU[4] = pingyisheding[10];
												CMyPublicData::setfunc(33, 16, 8, 1);
												return TRUE;
											}
											else
											{
												pEdit = (CEdit*)GetDlgItem(IDC_EDIT12);
												ASSERT(pEdit && pEdit->GetSafeHwnd());
												if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
												{
													CInputDlg dlg;
													dlg.ValueMax = 255;
													dlg.ValueMin = 0;
													if (dlg.DoModal() == IDOK)
													{
														UpdateData(TRUE);
														m_double_12_edit = _wtof(dlg.ValueShow);
														UpdateData(FALSE);
														pingyisheding[11] = m_double_12_edit;
													}
													datatestDPU[4] = pingyisheding[11];
													CMyPublicData::setfunc(35, 16, 8, 1);
													return TRUE;
												}
												else
												{
													pEdit = (CEdit*)GetDlgItem(IDC_EDIT_12);
													ASSERT(pEdit && pEdit->GetSafeHwnd());
													if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
													{
														CInputDlg dlg;
														dlg.ValueMax = 255;
														dlg.ValueMin = 0;
														if (dlg.DoModal() == IDOK)
														{
															UpdateData(TRUE);
															m_double_13_edit = _wtof(dlg.ValueShow);
															UpdateData(FALSE);
															pingyisheding[12] = m_double_13_edit;
														}
														datatestDPU[4] = pingyisheding[12];
														CMyPublicData::setfunc(37, 16, 8, 1);
														return TRUE;
													}
													else
													{
														pEdit = (CEdit*)GetDlgItem(IDC_EDIT25);
														ASSERT(pEdit && pEdit->GetSafeHwnd());
														if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
														{
															CInputDlg dlg;
															dlg.ValueMax = 255;
															dlg.ValueMin = 0;
															if (dlg.DoModal() == IDOK)
															{
																UpdateData(TRUE);
																m_double_14_edit = _wtof(dlg.ValueShow);
																UpdateData(FALSE);
																pingyisheding[13] = m_double_14_edit;
															}
															datatestDPU[4] = pingyisheding[13];
															CMyPublicData::setfunc(39, 16, 8, 1);
															return TRUE;
														}
														else
														{
															pEdit = (CEdit*)GetDlgItem(IDC_EDIT_13);
															ASSERT(pEdit && pEdit->GetSafeHwnd());
															if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
															{
																CInputDlg dlg;
																dlg.ValueMax = 255;
																dlg.ValueMin = 0;
																if (dlg.DoModal() == IDOK)
																{
																	UpdateData(TRUE);
																	m_double_15_edit = _wtof(dlg.ValueShow);
																	UpdateData(FALSE);
																	pingyisheding[14] = m_double_15_edit;
																}
																datatestDPU[4] = pingyisheding[14];
																CMyPublicData::setfunc(41, 16, 8, 1);
																return TRUE;
															}
															else
															{
																pEdit = (CEdit*)GetDlgItem(IDC_EDIT37);
																ASSERT(pEdit && pEdit->GetSafeHwnd());
																if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																{
																	CInputDlg dlg;
																	dlg.ValueMax = 255;
																	dlg.ValueMin = 0;
																	if (dlg.DoModal() == IDOK)
																	{
																		UpdateData(TRUE);
																		m_double_16_edit = _wtof(dlg.ValueShow);
																		UpdateData(FALSE);
																		pingyisheding[15] = m_double_16_edit;
																	}
																	datatestDPU[4] = pingyisheding[15];
																	CMyPublicData::setfunc(43, 16, 8, 1);
																	return TRUE;
																}
																else
																{
																	pEdit = (CEdit*)GetDlgItem(IDC_EDIT_14);
																	ASSERT(pEdit && pEdit->GetSafeHwnd());
																	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																	{
																		CInputDlg dlg;
																		dlg.ValueMax = 255;
																		dlg.ValueMin = 0;
																		if (dlg.DoModal() == IDOK)
																		{
																			UpdateData(TRUE);
																			m_double_17_edit = _wtof(dlg.ValueShow);
																			UpdateData(FALSE);
																			pingyisheding[16] = m_double_17_edit;
																		}
																		datatestDPU[4] = pingyisheding[16];
																		CMyPublicData::setfunc(45, 16, 8, 1);
																		return TRUE;
																	}
																	else
																	{
																		pEdit = (CEdit*)GetDlgItem(IDC_EDIT38);
																		ASSERT(pEdit && pEdit->GetSafeHwnd());
																		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																		{
																			CInputDlg dlg;
																			dlg.ValueMax = 255;
																			dlg.ValueMin = 0;
																			if (dlg.DoModal() == IDOK)
																			{
																				UpdateData(TRUE);
																				m_double_18_edit = _wtof(dlg.ValueShow);
																				UpdateData(FALSE);
																				pingyisheding[17] = m_double_18_edit;
																			}
																			datatestDPU[4] = pingyisheding[17];
																			CMyPublicData::setfunc(47, 16, 8, 1);
																			return TRUE;
																		}
																		else
																		{
																			pEdit = (CEdit*)GetDlgItem(IDC_EDIT_15);
																			ASSERT(pEdit && pEdit->GetSafeHwnd());
																			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																			{
																				CInputDlg dlg;
																				dlg.ValueMax = 255;
																				dlg.ValueMin = 0;
																				if (dlg.DoModal() == IDOK)
																				{
																					UpdateData(TRUE);
																					m_double_19_edit = _wtof(dlg.ValueShow);
																					UpdateData(FALSE);
																					pingyisheding[18] = m_double_19_edit;
																				}
																				datatestDPU[4] = pingyisheding[18];
																				CMyPublicData::setfunc(49, 16, 8, 1);
																				return TRUE;
																			}
																			else
																			{
																				pEdit = (CEdit*)GetDlgItem(IDC_EDIT39);
																				ASSERT(pEdit && pEdit->GetSafeHwnd());
																				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																				{
																					CInputDlg dlg;
																					dlg.ValueMax = 255;
																					dlg.ValueMin = 0;
																					if (dlg.DoModal() == IDOK)
																					{
																						UpdateData(TRUE);
																						m_double_20_edit = _wtof(dlg.ValueShow);
																						UpdateData(FALSE);
																						pingyisheding[19] = m_double_20_edit;
																					}
																					datatestDPU[4] = pingyisheding[19];
																					CMyPublicData::setfunc(51, 16, 8, 1);
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


void Pingyi::OnBnClickedButton89()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_13_edit--;
	if (0 <= m_double_13_edit&& m_double_13_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[12] = m_double_13_edit;
	}
	else
	{
		m_double_13_edit++;
		UpdateData(FALSE);
		pingyisheding[12] = m_double_13_edit;
	}
	datatestDPU[4] = pingyisheding[12];
	CMyPublicData::setfunc(37, 16, 8, 1);
}


void Pingyi::OnBnClickedButton107()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_14_edit--;
	if (0 <= m_double_14_edit&& m_double_14_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[13] = m_double_14_edit;
	}
	else
	{
		m_double_14_edit++;
		UpdateData(FALSE);
		pingyisheding[13] = m_double_14_edit;
	}
	datatestDPU[4] = pingyisheding[13];
	CMyPublicData::setfunc(39, 16, 8, 1);
}


void Pingyi::OnBnClickedButton109()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_15_edit--;
	if (0 <= m_double_15_edit&& m_double_15_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[14] = m_double_15_edit;
	}
	else
	{
		m_double_15_edit++;
		UpdateData(FALSE);
		pingyisheding[14] = m_double_15_edit;
	}
	datatestDPU[4] = pingyisheding[14];
	CMyPublicData::setfunc(41, 16, 8, 1);
}


void Pingyi::OnBnClickedButton111()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_16_edit--;
	if (0 <= m_double_16_edit&& m_double_16_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[15] = m_double_16_edit;
	}
	else
	{
		m_double_16_edit++;
		UpdateData(FALSE);
		pingyisheding[15] = m_double_16_edit;
	}
	datatestDPU[4] = pingyisheding[15];
	CMyPublicData::setfunc(43, 16, 8, 1);
}


void Pingyi::OnBnClickedButton113()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_17_edit--;
	if (0 <= m_double_17_edit&& m_double_17_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[16] = m_double_17_edit;
	}
	else
	{
		m_double_17_edit++;
		UpdateData(FALSE);
		pingyisheding[16] = m_double_17_edit;
	}
	datatestDPU[4] = pingyisheding[16];
	CMyPublicData::setfunc(45, 16, 8, 1);
}


void Pingyi::OnBnClickedButton115()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_18_edit--;
	if (0 <= m_double_18_edit&& m_double_18_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[17] = m_double_18_edit;
	}
	else
	{
		m_double_18_edit++;
		UpdateData(FALSE);
		pingyisheding[17] = m_double_18_edit;
	}
	datatestDPU[4] = pingyisheding[17];
	CMyPublicData::setfunc(47, 16, 8, 1);
}


void Pingyi::OnBnClickedButton117()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_19_edit--;
	if (0 <= m_double_19_edit&& m_double_19_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[18] = m_double_19_edit;
	}
	else
	{
		m_double_19_edit++;
		UpdateData(FALSE);
		pingyisheding[18] = m_double_19_edit;
	}
	datatestDPU[4] = pingyisheding[18];
	CMyPublicData::setfunc(49, 16, 8, 1);
}


void Pingyi::OnBnClickedButton119()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_20_edit--;
	if (0 <= m_double_20_edit&& m_double_20_edit <= 255)
	{
		UpdateData(FALSE);
		pingyisheding[19] = m_double_20_edit;
	}
	else
	{
		m_double_20_edit++;
		UpdateData(FALSE);
		pingyisheding[19] = m_double_20_edit;
	}
	datatestDPU[4] = pingyisheding[19];
	CMyPublicData::setfunc(51, 16, 8, 1);
}


void Pingyi::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL Pingyi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num2401", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC0)->SetWindowText(cstr);
	opx.QueryNode_Text("num2402", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC21)->SetWindowText(cstr);
	opx.QueryNode_Text("num2403", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC22)->SetWindowText(cstr);
	opx.QueryNode_Text("num2404", yuyan);
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


	int nMargin = 15;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT_1)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT_1)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_3)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_4)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_5)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_6)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_7)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_8)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_9)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_10)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_11)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT12)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_12)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT25)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_13)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT37)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_14)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT38)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT_15)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT39)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void Pingyi::ReSize()
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

void Pingyi::OnBnClickedCancel()
{
	
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(pingyisheding[0]);
	opx.ModifyNode("num1201", str);
	str = opx.numtoString(pingyisheding[1]);
	opx.ModifyNode("num1202", str);
	str = opx.numtoString(pingyisheding[2]);
	opx.ModifyNode("num1203", str);
	str = opx.numtoString(pingyisheding[3]);
	opx.ModifyNode("num1204", str);
	str = opx.numtoString(pingyisheding[4]);
	opx.ModifyNode("num1205", str);
	str = opx.numtoString(pingyisheding[5]);
	opx.ModifyNode("num1206", str);
	str = opx.numtoString(pingyisheding[6]);
	opx.ModifyNode("num1207", str);
	str = opx.numtoString(pingyisheding[7]);
	opx.ModifyNode("num1208", str);
	str = opx.numtoString(pingyisheding[8]);
	opx.ModifyNode("num1209", str);
	str = opx.numtoString(pingyisheding[9]);
	opx.ModifyNode("num1210", str);
	str = opx.numtoString(pingyisheding[10]);
	opx.ModifyNode("num1211", str);
	str = opx.numtoString(pingyisheding[11]);
	opx.ModifyNode("num1212", str);
	str = opx.numtoString(pingyisheding[12]);
	opx.ModifyNode("num1213", str);
	str = opx.numtoString(pingyisheding[13]);
	opx.ModifyNode("num1214", str);
	str = opx.numtoString(pingyisheding[14]);
	opx.ModifyNode("num1215", str);
	str = opx.numtoString(pingyisheding[15]);
	opx.ModifyNode("num1216", str);
	str = opx.numtoString(pingyisheding[16]);
	opx.ModifyNode("num1217", str);
	str = opx.numtoString(pingyisheding[17]);
	opx.ModifyNode("num1218", str);
	str = opx.numtoString(pingyisheding[18]);
	opx.ModifyNode("num1219", str);
	str = opx.numtoString(pingyisheding[19]);
	opx.ModifyNode("num1220", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}
