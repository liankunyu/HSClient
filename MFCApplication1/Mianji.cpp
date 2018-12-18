// Mianji.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Mianji.h"
#include "afxdialogex.h"
#include "hunselingmindu.h"
#include "InputDlg.h"
#include "Liuliangsheding.h"
#include "rlingmindu.h"
#include "Blingmindu.h"
#include "Yansemingan.h"
#include "Famenceshi.h"
#include "Qinghui.h"
#include "Moshixuanze.h"
#include "Glingmindu.h"
#include "XMLHelper.h"

// Mianji 对话框

IMPLEMENT_DYNAMIC(Mianji, CDialogEx)

Mianji::Mianji(CWnd* pParent /*=NULL*/)
	: CDialogEx(Mianji::IDD, pParent)
	, m_double1(mian[0])
	, m_double2(mian[1])
	, m_double3(mian[2])
	, m_double4(mian[3])
	, m_double5(mian[4])
	, m_double6(mian[5])
	, m_double7(mian[6])
	, m_double8(mian[7])
	, m_double9(mian[8])
	, m_double10(mian[9])
	, m_double11(mian[10])
	, m_double12(mian[11])
	, m_double13(mian[12])
	, m_double14(mian[13])
	, m_double15(mian[14])
	, m_double16(mian[15])
	, m_double17(mian[16])
	, m_double18(mian[17])
{

}

Mianji::~Mianji()
{
}

void Mianji::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT18, m_double2);
	DDX_Text(pDX, IDC_EDIT3, m_double3);
	DDX_Text(pDX, IDC_EDIT12, m_double4);
	DDX_Text(pDX, IDC_EDIT13, m_double5);
	DDX_Text(pDX, IDC_EDIT19, m_double6);
	DDX_Text(pDX, IDC_EDIT14, m_double7);
	DDX_Text(pDX, IDC_EDIT20, m_double8);
	DDX_Text(pDX, IDC_EDIT16, m_double9);
	DDX_Text(pDX, IDC_EDIT17, m_double10);
	DDX_Text(pDX, IDC_EDIT21, m_double11);
	DDX_Text(pDX, IDC_EDIT22, m_double12);
	//  DDX_Text(pDX, IDC_EDIT40, m_double13);
	DDX_Text(pDX, IDC_EDIT40, m_double13);
	DDX_Text(pDX, IDC_EDIT41, m_double14);
	DDX_Text(pDX, IDC_EDIT42, m_double15);
	DDX_Text(pDX, IDC_EDIT43, m_double16);
	DDX_Text(pDX, IDC_EDIT44, m_double17);
	DDX_Text(pDX, IDC_EDIT85, m_double18);
}


BEGIN_MESSAGE_MAP(Mianji, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON10, &Mianji::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON35, &Mianji::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON37, &Mianji::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON39, &Mianji::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON49, &Mianji::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON41, &Mianji::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON43, &Mianji::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON45, &Mianji::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON47, &Mianji::OnBnClickedButton47)
	ON_BN_CLICKED(IDC_BUTTON51, &Mianji::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON53, &Mianji::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON9, &Mianji::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON33, &Mianji::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON16, &Mianji::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON38, &Mianji::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON40, &Mianji::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON50, &Mianji::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON42, &Mianji::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON44, &Mianji::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON46, &Mianji::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON48, &Mianji::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON52, &Mianji::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON54, &Mianji::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON8, &Mianji::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON1, &Mianji::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON17, &Mianji::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON2, &Mianji::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &Mianji::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON3, &Mianji::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON7, &Mianji::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON6, &Mianji::OnBnClickedButton6)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON5, &Mianji::OnBnClickedButton5)
	ON_BN_CLICKED(IDCANCEL, &Mianji::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON70, &Mianji::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON71, &Mianji::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON73, &Mianji::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON74, &Mianji::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON76, &Mianji::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON77, &Mianji::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON79, &Mianji::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON80, &Mianji::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_BUTTON82, &Mianji::OnBnClickedButton82)
	ON_BN_CLICKED(IDC_BUTTON85, &Mianji::OnBnClickedButton85)
	ON_BN_CLICKED(IDC_BUTTON86, &Mianji::OnBnClickedButton86)
	ON_BN_CLICKED(IDC_BUTTON87, &Mianji::OnBnClickedButton87)
	ON_BN_CLICKED(IDC_BUTTON18, &Mianji::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &Mianji::OnBnClickedButton19)
END_MESSAGE_MAP()


// Mianji 消息处理程序


void Mianji::OnBnClickedButton10()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		mian[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		mian[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i+1] == L"1")
		{
			datatestDPU[4] = mian[1];
			CMyPublicData::setfunc(33+2*i, 16, 82, 1);
		}
	}
}


void Mianji::OnBnClickedButton35()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		mian[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		mian[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = mian[2];
			CMyPublicData::setfunc(32 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton37()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		mian[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		mian[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i+1] == L"1")
		{
			datatestDPU[4] = mian[3];
			CMyPublicData::setfunc(33 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton39()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		mian[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		mian[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = mian[4];
			CMyPublicData::setfunc(32 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton49()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		mian[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		mian[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i+1] == L"1")
		{
			datatestDPU[4] = mian[5];
			CMyPublicData::setfunc(33 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton41()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		mian[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		mian[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = mian[6];
			CMyPublicData::setfunc(32 + 2 * i, 16, 82, 1);
		}
	}
}


void Mianji::OnBnClickedButton43()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		mian[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		mian[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = mian[7];
			CMyPublicData::setfunc(33 + 2 * i, 16, 82, 1);
		}
	}
}


void Mianji::OnBnClickedButton45()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		mian[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		mian[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = mian[8];
			CMyPublicData::setfunc(32 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton47()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		mian[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		mian[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = mian[9];
			CMyPublicData::setfunc(33 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton51()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		mian[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		mian[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = mian[10];
			CMyPublicData::setfunc(32 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton53()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		mian[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		mian[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = mian[11];
			CMyPublicData::setfunc(33 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton9()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		mian[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		mian[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = mian[0];
			CMyPublicData::setfunc(32 + 2 * i, 16, 82, 1);
		}
	}
}


void Mianji::OnBnClickedButton33()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		mian[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		mian[1] = m_double2;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = mian[1];
			CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
		}
	}
}


void Mianji::OnBnClickedButton16()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		mian[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		mian[2] = m_double3;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = mian[2];
			CMyPublicData::setfunc(32 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton38()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		mian[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		mian[3] = m_double4;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = mian[3];
			CMyPublicData::setfunc(33 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton40()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		mian[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		mian[4] = m_double5;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = mian[4];
			CMyPublicData::setfunc(32 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton50()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		mian[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		mian[5] = m_double6;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			datatestDPU[4] = mian[5];
			CMyPublicData::setfunc(33 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton42()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		mian[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		mian[6] = m_double7;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = mian[6];
			CMyPublicData::setfunc(32 + 2 * i, 16, 82, 1);
		}
	}
}


void Mianji::OnBnClickedButton44()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 255)
	{
		UpdateData(FALSE);
		mian[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		mian[7] = m_double8;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = mian[7];
			CMyPublicData::setfunc(33 + 2 * i, 16, 82, 1);
		}
	}
}


void Mianji::OnBnClickedButton46()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 255)
	{
		UpdateData(FALSE);
		mian[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		mian[8] = m_double9;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = mian[8];
			CMyPublicData::setfunc(32 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton48()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 255)
	{
		UpdateData(FALSE);
		mian[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		mian[9] = m_double10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = mian[9];
			CMyPublicData::setfunc(33 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton52()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 255)
	{
		UpdateData(FALSE);
		mian[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		mian[10] = m_double11;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			datatestDPU[4] = mian[10];
			CMyPublicData::setfunc(32 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton54()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 255)
	{
		UpdateData(FALSE);
		mian[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		mian[11] = m_double12;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			datatestDPU[4] = mian[11];
			CMyPublicData::setfunc(33 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton8()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		mian[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		mian[0] = m_double1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			datatestDPU[4] = mian[0];
			CMyPublicData::setfunc(32+2*i, 16, 82, 1);
		}
	}
}


void Mianji::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	CLiuliangsheding liuliang1;
	liuliang1.DoModal();
}



void Mianji::OnBnClickedButton17()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON17)->GetWindowText(zhendong[0]);
	if (zhendong[0] == L"ON")
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"1")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON17)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"1")
			{
				datatestDPU[4] = 0;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON17)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON17)->GetWindowText(zhendong[0]);
}



void Mianji::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	rlingmindu rlingmin1;
	rlingmin1.DoModal();
}


void Mianji::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	Yansemingan yanse1;
	yanse1.DoModal();
}


void Mianji::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	Famenceshi famen1;
	famen1.DoModal();
}


void Mianji::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	Qinghui qinghui1;
	qinghui1.DoModal();
}


void Mianji::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	Moshixuanze moshi1;
	moshi1.DoModal();
}


BOOL Mianji::PreTranslateMessage(MSG* pMsg)
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
			mian[0] = m_double1;
		}
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = mian[0];
				CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
			}
		}
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT18);
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
				mian[1] = m_double2;
			}
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i + 1] == L"1")
				{
					datatestDPU[4] = mian[1];
					CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
				}
			}
			return TRUE;
		}
		else
		{
			pEdit = (CEdit*)GetDlgItem(IDC_EDIT3);
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
					mian[2] = m_double3;
				}
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i] == L"1")
					{
						datatestDPU[4] = mian[2];
						CMyPublicData::setfunc(32 + 2 * i, 16, 27, 1);
					}
				}
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
						m_double4 = _wtof(dlg.ValueShow);
						UpdateData(FALSE);
						mian[3] = m_double4;
					}
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = mian[3];
							CMyPublicData::setfunc(33 + 2 * i, 16, 27, 1);
						}
					}
					return TRUE;
				}
				else
				{
					pEdit = (CEdit*)GetDlgItem(IDC_EDIT13);
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
							mian[4] = m_double5;
						}	
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i] == L"1")
							{
								datatestDPU[4] = mian[4];
								CMyPublicData::setfunc(32 + 2 * i, 16, 28, 1);
							}
						}
						return TRUE;
					}
					else
					{
						pEdit = (CEdit*)GetDlgItem(IDC_EDIT19);
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
								mian[5] = m_double6;
							}
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i + 1] == L"1")
								{
									datatestDPU[4] = mian[5];
									CMyPublicData::setfunc(33 + 2 * i, 16, 28, 1);
								}
							}
							return TRUE;
						}
						else
						{
							pEdit = (CEdit*)GetDlgItem(IDC_EDIT14);
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
									mian[6] = m_double7;
								}
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i] == L"2")
									{
										datatestDPU[4] = mian[6];
										CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
									}
								}
								return TRUE;
							}
							else
							{
								pEdit = (CEdit*)GetDlgItem(IDC_EDIT20);
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
										mian[7] = m_double8;
									}
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = mian[7];
											CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
										}
									}
									return TRUE;
								}
								else
								{
									pEdit = (CEdit*)GetDlgItem(IDC_EDIT16);
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
											mian[8] = m_double9;
										}
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i] == L"2")
											{
												datatestDPU[4] = mian[8];
												CMyPublicData::setfunc(32 + 2 * i, 16, 27, 1);
											}
										}
										return TRUE;
									}
									else
									{
										pEdit = (CEdit*)GetDlgItem(IDC_EDIT17);
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
												mian[9] = m_double10;
											}
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i + 1] == L"2")
												{
													datatestDPU[4] = mian[9];
													CMyPublicData::setfunc(33 + 2 * i, 16, 27, 1);
												}
											}
											return TRUE;
										}
										else
										{
											pEdit = (CEdit*)GetDlgItem(IDC_EDIT21);
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
													mian[10] = m_double11;
												}
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i] == L"2")
													{
														datatestDPU[4] = mian[10];
														CMyPublicData::setfunc(32 + 2 * i, 16, 28, 1);
													}
												}
												return TRUE;
											}
											else
											{
												pEdit = (CEdit*)GetDlgItem(IDC_EDIT22);
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
														mian[11] = m_double12;
													}
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"2")
														{
															datatestDPU[4] = mian[11];
															CMyPublicData::setfunc(33 + 2 * i, 16, 28, 1);
														}
													}
													return TRUE;
												}
												else
												{
													pEdit = (CEdit*)GetDlgItem(IDC_EDIT40);
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
															mian[12] = m_double13;
														}
														for (int i = 0; i < 10; i++)
														{
															if (modsd[2 * i] == L"3")
															{
																datatestDPU[4] = mian[12];
																CMyPublicData::setfunc(32 + 2 * i, 16, 94, 1);
															}
														}
														return TRUE;
													}
													else
													{
														pEdit = (CEdit*)GetDlgItem(IDC_EDIT41);
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
																mian[13] = m_double14;
															}
															for (int i = 0; i < 10; i++)
															{
																if (modsd[2 * i + 1] == L"3")
																{
																	datatestDPU[4] = mian[13];
																	CMyPublicData::setfunc(33 + 2 * i, 16, 94, 1);
																}
															}
															return TRUE;
														}
														else
														{
															pEdit = (CEdit*)GetDlgItem(IDC_EDIT42);
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
																	mian[14] = m_double15;
																}
																for (int i = 0; i < 10; i++)
																{
																	if (modsd[2 * i] == L"3")
																	{
																		datatestDPU[4] = mian[14];
																		CMyPublicData::setfunc(32 + 2 * i, 16, 27, 1);
																	}
																}
																return TRUE;
															}
															else
															{
																pEdit = (CEdit*)GetDlgItem(IDC_EDIT43);
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
																		mian[15] = m_double16;
																	}
																	for (int i = 0; i < 10; i++)
																	{
																		if (modsd[2 * i + 1] == L"3")
																		{
																			datatestDPU[4] = mian[15];
																			CMyPublicData::setfunc(33 + 2 * i, 16, 27, 1);
																		}
																	}
																	return TRUE;
																}
																else
																{
																	pEdit = (CEdit*)GetDlgItem(IDC_EDIT44);
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
																			mian[16] = m_double17;
																		}
																		for (int i = 0; i < 10; i++)
																		{
																			if (modsd[2 * i] == L"3")
																			{
																				datatestDPU[4] = mian[16];
																				CMyPublicData::setfunc(32 + 2 * i, 16, 28, 1);
																			}
																		}
																		return TRUE;
																	}
																	else
																	{
																		pEdit = (CEdit*)GetDlgItem(IDC_EDIT85);
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
																				mian[17] = m_double18;
																			}
																			for (int i = 0; i < 10; i++)
																			{
																				if (modsd[2 * i + 1] == L"3")
																				{
																					datatestDPU[4] = mian[17];
																					CMyPublicData::setfunc(33 + 2 * i, 16, 28, 1);
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
						}
					}
				}
			}
		}
	}
	UpdateData(FALSE);
	return CDialogEx::PreTranslateMessage(pMsg);
}


void Mianji::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL Mianji::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num1801", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num1802", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num1803", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num1804", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC24)->SetWindowText(cstr);
	opx.QueryNode_Text("num1805", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num1806", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num1807", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num1808", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num1809", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num1810", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC10)->SetWindowText(cstr);
	opx.QueryNode_Text("num1811", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC11)->SetWindowText(cstr);
	opx.QueryNode_Text("num1812", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	GetDlgItem(IDC_BUTTON17)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON18)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON19)->SetWindowText(zhendong[2]);


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
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT3)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT12)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT13)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT19)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT14)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT20)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT16)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT17)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT21)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT22)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT40)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT41)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT42)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT43)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT44)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT85)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void Mianji::ReSize()
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

void Mianji::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
}


void Mianji::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(mian[0]);
	opx.ModifyNode("num1101", str);
	str = opx.numtoString(mian[1]);
	opx.ModifyNode("num1102", str);
	str = opx.numtoString(mian[2]);
	opx.ModifyNode("num1103", str);
	str = opx.numtoString(mian[3]);
	opx.ModifyNode("num1104", str);
	str = opx.numtoString(mian[4]);
	opx.ModifyNode("num1105", str);
	str = opx.numtoString(mian[5]);
	opx.ModifyNode("num1106", str);
	str = opx.numtoString(mian[6]);
	opx.ModifyNode("num1107", str);
	str = opx.numtoString(mian[7]);
	opx.ModifyNode("num1108", str);
	str = opx.numtoString(mian[8]);
	opx.ModifyNode("num1109", str);
	str = opx.numtoString(mian[9]);
	opx.ModifyNode("num1110", str);
	str = opx.numtoString(mian[10]);
	opx.ModifyNode("num1111", str);
	str = opx.numtoString(mian[11]);
	opx.ModifyNode("num1112", str);
	str = opx.numtoString(mian[12]);
	opx.ModifyNode("num1113", str);
	str = opx.numtoString(mian[13]);
	opx.ModifyNode("num1114", str);
	str = opx.numtoString(mian[14]);
	opx.ModifyNode("num1115", str);
	str = opx.numtoString(mian[15]);
	opx.ModifyNode("num1116", str);
	str = opx.numtoString(mian[16]);
	opx.ModifyNode("num1117", str);
	str = opx.numtoString(mian[17]);
	opx.ModifyNode("num1118", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void Mianji::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13++;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		mian[12] = m_double13;
	}
	else
	{
		m_double13--;
		UpdateData(FALSE);
		mian[12] = m_double13;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = mian[12];
			CMyPublicData::setfunc(32 + 2 * i, 16, 82, 1);
		}
	}
}


void Mianji::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13--;
	if (0 <= m_double13&& m_double13 <= 255)
	{
		UpdateData(FALSE);
		mian[12] = m_double13;
	}
	else
	{
		m_double13++;
		UpdateData(FALSE);
		mian[12] = m_double13;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = mian[12];
			CMyPublicData::setfunc(32 + 2 * i, 16, 82, 1);
		}
	}
}


void Mianji::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14++;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		mian[13] = m_double14;
	}
	else
	{
		m_double14--;
		UpdateData(FALSE);
		mian[13] = m_double14;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = mian[13];
			CMyPublicData::setfunc(33 + 2 * i, 16, 82, 1);
		}
	}
}


void Mianji::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14--;
	if (0 <= m_double14&& m_double14 <= 255)
	{
		UpdateData(FALSE);
		mian[13] = m_double14;
	}
	else
	{
		m_double14++;
		UpdateData(FALSE);
		mian[13] = m_double14;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = mian[13];
			CMyPublicData::setfunc(33 + 2 * i, 16, 82, 1);
		}
	}
}


void Mianji::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15++;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		mian[14] = m_double15;
	}
	else
	{
		m_double15--;
		UpdateData(FALSE);
		mian[14] = m_double15;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = mian[14];
			CMyPublicData::setfunc(32 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton77()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15--;
	if (0 <= m_double15&& m_double15 <= 255)
	{
		UpdateData(FALSE);
		mian[14] = m_double15;
	}
	else
	{
		m_double15++;
		UpdateData(FALSE);
		mian[14] = m_double15;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = mian[14];
			CMyPublicData::setfunc(32 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton79()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16++;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		mian[15] = m_double16;
	}
	else
	{
		m_double16--;
		UpdateData(FALSE);
		mian[15] = m_double16;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = mian[15];
			CMyPublicData::setfunc(33 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton80()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16--;
	if (0 <= m_double16&& m_double16 <= 255)
	{
		UpdateData(FALSE);
		mian[15] = m_double16;
	}
	else
	{
		m_double16++;
		UpdateData(FALSE);
		mian[15] = m_double16;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = mian[15];
			CMyPublicData::setfunc(33 + 2 * i, 16, 27, 1);
		}
	}
}


void Mianji::OnBnClickedButton82()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17++;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		mian[16] = m_double17;
	}
	else
	{
		m_double17--;
		UpdateData(FALSE);
		mian[16] = m_double17;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = mian[16];
			CMyPublicData::setfunc(32 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton85()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17--;
	if (0 <= m_double17&& m_double17 <= 255)
	{
		UpdateData(FALSE);
		mian[16] = m_double17;
	}
	else
	{
		m_double17++;
		UpdateData(FALSE);
		mian[16] = m_double17;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			datatestDPU[4] = mian[16];
			CMyPublicData::setfunc(32 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton86()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18++;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		mian[17] = m_double18;
	}
	else
	{
		m_double18--;
		UpdateData(FALSE);
		mian[17] = m_double18;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = mian[17];
			CMyPublicData::setfunc(33 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton87()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18--;
	if (0 <= m_double18&& m_double18 <= 255)
	{
		UpdateData(FALSE);
		mian[17] = m_double18;
	}
	else
	{
		m_double18++;
		UpdateData(FALSE);
		mian[17] = m_double18;
	}
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			datatestDPU[4] = mian[17];
			CMyPublicData::setfunc(33 + 2 * i, 16, 28, 1);
		}
	}
}


void Mianji::OnBnClickedButton18()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON18)->GetWindowText(zhendong[1]);
	if (zhendong[1] == L"ON")
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"2")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON18)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"2")
			{
				datatestDPU[4] = 0;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON18)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON18)->GetWindowText(zhendong[1]);
}


void Mianji::OnBnClickedButton19()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON19)->GetWindowText(zhendong[2]);
	if (zhendong[2] == L"ON")
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"3")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON19)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"3")
			{
				datatestDPU[4] = 0;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON19)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON19)->GetWindowText(zhendong[2]);
}
