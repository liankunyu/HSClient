// bzengyi.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "bzengyi.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include "gzengyi.h"
#include "Rzengyi.h"

// bzengyi 对话框

IMPLEMENT_DYNAMIC(bzengyi, CDialogEx)

bzengyi::bzengyi(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_BZENGYI_DIALOG, pParent)
	, m_double1(bzengyisheding[0])
	, m_double2(bzengyisheding[1])
	, m_double3(bzengyisheding[2])
	, m_double4(bzengyisheding[3])
	, m_double5(bzengyisheding[4])
	, m_double6(bzengyisheding[5])
	, m_double7(bzengyisheding[6])
	, m_double8(bzengyisheding[7])
	, m_double9(bzengyisheding[8])
	, m_double10(bzengyisheding[9])
	, m_double11(bzengyisheding[10])
	, m_double12(bzengyisheding[11])
	, m_double13(bzengyisheding[12])
	, m_double14(bzengyisheding[13])
	, m_double15(bzengyisheding[14])
	, m_double16(bzengyisheding[15])
	, m_double17(bzengyisheding[16])
	, m_double18(bzengyisheding[17])
	, m_double19(bzengyisheding[18])
	, m_double20(bzengyisheding[19])
{

}

bzengyi::~bzengyi()
{
}

void bzengyi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, m_double1);
	DDX_Text(pDX, IDC_EDIT18, m_double2);
	DDX_Text(pDX, IDC_EDIT30, m_double3);
	DDX_Text(pDX, IDC_EDIT31, m_double4);
	DDX_Text(pDX, IDC_EDIT32, m_double5);
	DDX_Text(pDX, IDC_EDIT33, m_double6);
	DDX_Text(pDX, IDC_EDIT47, m_double7);
	DDX_Text(pDX, IDC_EDIT48, m_double8);
	DDX_Text(pDX, IDC_EDIT49, m_double9);
	DDX_Text(pDX, IDC_EDIT50, m_double10);
	DDX_Text(pDX, IDC_EDIT34, m_double11);
	DDX_Text(pDX, IDC_EDIT35, m_double12);
	DDX_Text(pDX, IDC_EDIT36, m_double13);
	DDX_Text(pDX, IDC_EDIT37, m_double14);
	DDX_Text(pDX, IDC_EDIT38, m_double15);
	DDX_Text(pDX, IDC_EDIT39, m_double16);
	DDX_Text(pDX, IDC_EDIT51, m_double17);
	DDX_Text(pDX, IDC_EDIT52, m_double18);
	DDX_Text(pDX, IDC_EDIT53, m_double19);
	DDX_Text(pDX, IDC_EDIT54, m_double20);
	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA, m_tingzhi);
}


BEGIN_MESSAGE_MAP(bzengyi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON12, &bzengyi::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON14, &bzengyi::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON64, &bzengyi::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON65, &bzengyi::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON67, &bzengyi::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON69, &bzengyi::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON71, &bzengyi::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON73, &bzengyi::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON75, &bzengyi::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON77, &bzengyi::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON79, &bzengyi::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON81, &bzengyi::OnBnClickedButton81)
	ON_BN_CLICKED(IDC_BUTTON13, &bzengyi::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON15, &bzengyi::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON51, &bzengyi::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON66, &bzengyi::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON68, &bzengyi::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON70, &bzengyi::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON72, &bzengyi::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON74, &bzengyi::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON76, &bzengyi::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON78, &bzengyi::OnBnClickedButton78)
	ON_BN_CLICKED(IDC_BUTTON80, &bzengyi::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_BUTTON82, &bzengyi::OnBnClickedButton82)
	ON_BN_CLICKED(IDC_BUTTON85, &bzengyi::OnBnClickedButton85)
	ON_BN_CLICKED(IDC_BUTTON86, &bzengyi::OnBnClickedButton86)
	ON_BN_CLICKED(IDC_BUTTON88, &bzengyi::OnBnClickedButton88)
	ON_BN_CLICKED(IDC_BUTTON98, &bzengyi::OnBnClickedButton98)
	ON_BN_CLICKED(IDC_BUTTON100, &bzengyi::OnBnClickedButton100)
	ON_BN_CLICKED(IDC_BUTTON102, &bzengyi::OnBnClickedButton102)
	ON_BN_CLICKED(IDC_BUTTON106, &bzengyi::OnBnClickedButton106)
	ON_BN_CLICKED(IDC_BUTTON108, &bzengyi::OnBnClickedButton108)
	ON_BN_CLICKED(IDC_BUTTON94, &bzengyi::OnBnClickedButton94)
	ON_BN_CLICKED(IDC_BUTTON87, &bzengyi::OnBnClickedButton87)
	ON_BN_CLICKED(IDC_BUTTON89, &bzengyi::OnBnClickedButton89)
	ON_BN_CLICKED(IDC_BUTTON99, &bzengyi::OnBnClickedButton99)
	ON_BN_CLICKED(IDC_BUTTON101, &bzengyi::OnBnClickedButton101)
	ON_BN_CLICKED(IDC_BUTTON103, &bzengyi::OnBnClickedButton103)
	ON_BN_CLICKED(IDC_BUTTON107, &bzengyi::OnBnClickedButton107)
	ON_BN_CLICKED(IDC_BUTTON109, &bzengyi::OnBnClickedButton109)
//	ON_BN_CLICKED(IDC_BUTTON10, &bzengyi::OnBnClickedButton10)
	ON_BN_CLICKED(IDCANCEL, &bzengyi::OnBnClickedCancel)
	ON_WM_SIZE()
//	ON_BN_CLICKED(IDC_BUTTON83, &bzengyi::OnBnClickedButton83)
//	ON_BN_CLICKED(IDC_BUTTON84, &bzengyi::OnBnClickedButton84)
	ON_BN_CLICKED(IDC_KAISHIDA, &bzengyi::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &bzengyi::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// bzengyi 消息处理程序
void bzengyi::OnBnClickedButton12()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		bzengyisheding[0] = m_double1;
	}
	datatestDPU[4] = bzengyisheding[0];
	CMyPublicData::setfunc(32, 16, 74, 1);
}


void bzengyi::OnBnClickedButton14()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		bzengyisheding[1] = m_double2;
	}
	datatestDPU[4] = bzengyisheding[1];
	CMyPublicData::setfunc(34, 16, 74, 1);
}


void bzengyi::OnBnClickedButton64()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		bzengyisheding[2] = m_double3;
	}
	datatestDPU[4] = bzengyisheding[2];
	CMyPublicData::setfunc(36, 16, 74, 1);
}


void bzengyi::OnBnClickedButton65()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		bzengyisheding[3] = m_double4;
	}
	datatestDPU[4] = bzengyisheding[3];
	CMyPublicData::setfunc(38, 16, 74, 1);
}


void bzengyi::OnBnClickedButton67()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		bzengyisheding[4] = m_double5;
	}
	datatestDPU[4] = bzengyisheding[4];
	CMyPublicData::setfunc(40, 16, 74, 1);
}


void bzengyi::OnBnClickedButton69()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		bzengyisheding[5] = m_double6;
	}
	datatestDPU[4] = bzengyisheding[5];
	CMyPublicData::setfunc(42, 16, 74, 1);
}


void bzengyi::OnBnClickedButton85()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		bzengyisheding[6] = m_double7;
	}
	datatestDPU[4] = bzengyisheding[6];
	CMyPublicData::setfunc(44, 16, 74, 1);
}

void bzengyi::OnBnClickedButton86()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		bzengyisheding[7] = m_double8;
	}
	datatestDPU[4] = bzengyisheding[7];
	CMyPublicData::setfunc(46, 16, 74, 1);
}

void bzengyi::OnBnClickedButton88()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		bzengyisheding[8] = m_double9;
	}
	datatestDPU[4] = bzengyisheding[8];
	CMyPublicData::setfunc(48, 16, 74, 1);
}


void bzengyi::OnBnClickedButton98()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		bzengyisheding[9] = m_double10;
	}
	datatestDPU[4] = bzengyisheding[9];
	CMyPublicData::setfunc(50, 16, 74, 1);
}
void bzengyi::OnBnClickedButton71()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		bzengyisheding[10] = m_double11;
	}
	datatestDPU[4] = bzengyisheding[10];
	CMyPublicData::setfunc(33, 16, 74, 1);
}


void bzengyi::OnBnClickedButton73()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		bzengyisheding[11] = m_double12;
	}
	datatestDPU[4] = bzengyisheding[11];
	CMyPublicData::setfunc(35, 16, 74, 1);
}


void bzengyi::OnBnClickedButton75()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13++;
	if (0 <= m_double13&& m_double13 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[12] = m_double13;
	}
	else
	{
		m_double13--;
		UpdateData(FALSE);
		bzengyisheding[12] = m_double13;
	}
	datatestDPU[4] = bzengyisheding[12];
	CMyPublicData::setfunc(37, 16, 74, 1);
}


void bzengyi::OnBnClickedButton77()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14++;
	if (0 <= m_double14&& m_double14 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[13] = m_double14;
	}
	else
	{
		m_double14--;
		UpdateData(FALSE);
		bzengyisheding[13] = m_double14;
	}
	datatestDPU[4] = bzengyisheding[13];
	CMyPublicData::setfunc(39, 16, 74, 1);
}


void bzengyi::OnBnClickedButton79()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15++;
	if (0 <= m_double15&& m_double15 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[14] = m_double15;
	}
	else
	{
		m_double15--;
		UpdateData(FALSE);
		bzengyisheding[14] = m_double15;
	}
	datatestDPU[4] = bzengyisheding[14];
	CMyPublicData::setfunc(41, 16, 74, 1);
}


void bzengyi::OnBnClickedButton81()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16++;
	if (0 <= m_double16&& m_double16 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[15] = m_double16;
	}
	else
	{
		m_double16--;
		UpdateData(FALSE);
		bzengyisheding[15] = m_double16;
	}
	datatestDPU[4] = bzengyisheding[15];
	CMyPublicData::setfunc(43, 16, 74, 1);
}




void bzengyi::OnBnClickedButton100()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17++;
	if (0 <= m_double17&& m_double17 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[16] = m_double17;
	}
	else
	{
		m_double17--;
		UpdateData(FALSE);
		bzengyisheding[16] = m_double17;
	}
	datatestDPU[4] = bzengyisheding[16];
	CMyPublicData::setfunc(45, 16, 74, 1);
}


void bzengyi::OnBnClickedButton102()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18++;
	if (0 <= m_double18&& m_double18 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[17] = m_double18;
	}
	else
	{
		m_double18--;
		UpdateData(FALSE);
		bzengyisheding[17] = m_double18;
	}
	datatestDPU[4] = bzengyisheding[17];
	CMyPublicData::setfunc(47, 16, 74, 1);
}


void bzengyi::OnBnClickedButton106()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19++;
	if (0 <= m_double19&& m_double19 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[18] = m_double19;
	}
	else
	{
		m_double19--;
		UpdateData(FALSE);
		bzengyisheding[18] = m_double19;
	}
	datatestDPU[4] = bzengyisheding[18];
	CMyPublicData::setfunc(49, 16, 74, 1);
}


void bzengyi::OnBnClickedButton108()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20++;
	if (0 <= m_double20&& m_double20 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[19] = m_double20;
	}
	else
	{
		m_double20--;
		UpdateData(FALSE);
		bzengyisheding[19] = m_double20;
	}
	datatestDPU[4] = bzengyisheding[19];
	CMyPublicData::setfunc(51, 16, 74, 1);
}
void bzengyi::OnBnClickedButton13()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		bzengyisheding[0] = m_double1;
	}
	datatestDPU[4] = bzengyisheding[0];
	CMyPublicData::setfunc(32, 16, 74, 1);
}


void bzengyi::OnBnClickedButton15()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		bzengyisheding[1] = m_double2;
	}
	datatestDPU[4] = bzengyisheding[1];
	CMyPublicData::setfunc(34, 16, 74, 1);
}


void bzengyi::OnBnClickedButton51()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		bzengyisheding[2] = m_double3;
	}
	datatestDPU[4] = bzengyisheding[2];
	CMyPublicData::setfunc(36, 16, 74, 1);
}


void bzengyi::OnBnClickedButton66()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		bzengyisheding[3] = m_double4;
	}
	datatestDPU[4] = bzengyisheding[3];
	CMyPublicData::setfunc(38, 16, 74, 1);
}


void bzengyi::OnBnClickedButton68()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		bzengyisheding[4] = m_double5;
	}
	datatestDPU[4] = bzengyisheding[4];
	CMyPublicData::setfunc(40, 16, 74, 1);
}


void bzengyi::OnBnClickedButton70()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		bzengyisheding[5] = m_double6;
	}
	datatestDPU[4] = bzengyisheding[5];
	CMyPublicData::setfunc(42, 16, 74, 1);
}

void bzengyi::OnBnClickedButton94()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		bzengyisheding[6] = m_double7;
	}
	datatestDPU[4] = bzengyisheding[6];
	CMyPublicData::setfunc(44, 16, 74, 1);
}


void bzengyi::OnBnClickedButton87()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		bzengyisheding[7] = m_double8;
	}
	datatestDPU[4] = bzengyisheding[7];
	CMyPublicData::setfunc(46, 16, 74, 1);
}


void bzengyi::OnBnClickedButton89()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		bzengyisheding[8] = m_double9;
	}
	datatestDPU[4] = bzengyisheding[8];
	CMyPublicData::setfunc(48, 16, 74, 1);
}


void bzengyi::OnBnClickedButton99()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		bzengyisheding[9] = m_double10;
	}
	datatestDPU[4] = bzengyisheding[9];
	CMyPublicData::setfunc(50, 16, 74, 1);
}

void bzengyi::OnBnClickedButton72()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		bzengyisheding[10] = m_double11;
	}
	datatestDPU[4] = bzengyisheding[10];
	CMyPublicData::setfunc(33, 16, 74, 1);
}


void bzengyi::OnBnClickedButton74()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		bzengyisheding[11] = m_double12;
	}
	datatestDPU[4] = bzengyisheding[11];
	CMyPublicData::setfunc(35, 16, 74, 1);
}


void bzengyi::OnBnClickedButton76()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13--;
	if (0 <= m_double13&& m_double13 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[12] = m_double13;
	}
	else
	{
		m_double13++;
		UpdateData(FALSE);
		bzengyisheding[12] = m_double13;
	}
	datatestDPU[4] = bzengyisheding[12];
	CMyPublicData::setfunc(37, 16, 74, 1);
}


void bzengyi::OnBnClickedButton78()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14--;
	if (0 <= m_double14&& m_double14 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[13] = m_double14;
	}
	else
	{
		m_double14++;
		UpdateData(FALSE);
		bzengyisheding[13] = m_double14;
	}
	datatestDPU[4] = bzengyisheding[13];
	CMyPublicData::setfunc(39, 16, 74, 1);
}


void bzengyi::OnBnClickedButton80()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15--;
	if (0 <= m_double15&& m_double15 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[14] = m_double15;
	}
	else
	{
		m_double15++;
		UpdateData(FALSE);
		bzengyisheding[14] = m_double15;
	}
	datatestDPU[4] = bzengyisheding[14];
	CMyPublicData::setfunc(41, 16, 74, 1);
}


void bzengyi::OnBnClickedButton82()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16--;
	if (0 <= m_double16&& m_double16 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[15] = m_double16;
	}
	else
	{
		m_double16++;
		UpdateData(FALSE);
		bzengyisheding[15] = m_double16;
	}
	datatestDPU[4] = bzengyisheding[15];
	CMyPublicData::setfunc(43, 16, 74, 1);
}

void bzengyi::OnBnClickedButton101()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17--;
	if (0 <= m_double17&& m_double17 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[16] = m_double17;
	}
	else
	{
		m_double17++;
		UpdateData(FALSE);
		bzengyisheding[16] = m_double17;
	}
	datatestDPU[4] = bzengyisheding[16];
	CMyPublicData::setfunc(45, 16, 74, 1);
}


void bzengyi::OnBnClickedButton103()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18--;
	if (0 <= m_double18&& m_double18 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[17] = m_double18;
	}
	else
	{
		m_double18++;
		UpdateData(FALSE);
		bzengyisheding[17] = m_double18;
	}
	datatestDPU[4] = bzengyisheding[17];
	CMyPublicData::setfunc(47, 16, 74, 1);
}


void bzengyi::OnBnClickedButton107()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19--;
	if (0 <= m_double19&& m_double19 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[18] = m_double19;
	}
	else
	{
		m_double19++;
		UpdateData(FALSE);
		bzengyisheding[18] = m_double19;
	}
	datatestDPU[4] = bzengyisheding[18];
	CMyPublicData::setfunc(49, 16, 74, 1);
}


void bzengyi::OnBnClickedButton109()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20--;
	if (0 <= m_double20&& m_double20 <= 999)
	{
		UpdateData(FALSE);
		bzengyisheding[19] = m_double20;
	}
	else
	{
		m_double20++;
		UpdateData(FALSE);
		bzengyisheding[19] = m_double20;
	}
	datatestDPU[4] = bzengyisheding[19];
	CMyPublicData::setfunc(51, 16, 74, 1);
}


BOOL bzengyi::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT2);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double1 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[0] = m_double1;
		}
		datatestDPU[4] = bzengyisheding[0];
		CMyPublicData::setfunc(32, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT18);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double2 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[1] = m_double2;
		}
		datatestDPU[4] = bzengyisheding[1];
		CMyPublicData::setfunc(34, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT30);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double3 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[2] = m_double3;
		}
		datatestDPU[4] = bzengyisheding[2];
		CMyPublicData::setfunc(36, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT31);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double4= _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[3] = m_double4;
		}
		datatestDPU[4] = bzengyisheding[3];
		CMyPublicData::setfunc(38, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT32);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double5 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[4] = m_double5;
		}
		datatestDPU[4] = bzengyisheding[4];
		CMyPublicData::setfunc(40, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT33);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double6 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[5] = m_double6;
		}
		datatestDPU[4] = bzengyisheding[5];
		CMyPublicData::setfunc(42, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT47);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double7= _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[6] = m_double7;
		}
		datatestDPU[4] = bzengyisheding[6];
		CMyPublicData::setfunc(44, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT48);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double8 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[7] = m_double8;
		}
		datatestDPU[4] = bzengyisheding[7];
		CMyPublicData::setfunc(46, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT49);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double9= _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[8] = m_double9;
		}
		datatestDPU[4] = bzengyisheding[8];
		CMyPublicData::setfunc(48, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT50);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double10 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[9] = m_double10;
		}
		datatestDPU[4] = bzengyisheding[9];
		CMyPublicData::setfunc(50, 16, 74, 1);
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
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double11= _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[10] = m_double11;
		}
		datatestDPU[4] = bzengyisheding[10];
		CMyPublicData::setfunc(33, 16, 74, 1);
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
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double12 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[11] = m_double12;
		}
		datatestDPU[4] = bzengyisheding[11];
		CMyPublicData::setfunc(35, 16, 74, 1);
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
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double13 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[12] = m_double13;
		}
		datatestDPU[4] = bzengyisheding[12];
		CMyPublicData::setfunc(37, 16, 74, 1);
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
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double14 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[13] = m_double14;
		}
		datatestDPU[4] = bzengyisheding[13];
		CMyPublicData::setfunc(39, 16, 74, 1);
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
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double15 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[14] = m_double15;
		}
		datatestDPU[4] = bzengyisheding[14];
		CMyPublicData::setfunc(41, 16, 74, 1);
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
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double16 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[15] = m_double16;
		}
		datatestDPU[4] = bzengyisheding[15];
		CMyPublicData::setfunc(43, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT51);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double17 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[16] = m_double17;
		}
		datatestDPU[4] = bzengyisheding[16];
		CMyPublicData::setfunc(45, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT52);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double18 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[17] = m_double18;
		}
		datatestDPU[4] = bzengyisheding[17];
		CMyPublicData::setfunc(47, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT53);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}

	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double19 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[18] = m_double19;
		}
		datatestDPU[4] = bzengyisheding[18];
		CMyPublicData::setfunc(49, 16, 74, 1);
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT54);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
	}
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 999;
		dlg.ValueMin = 0;
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_double20 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			bzengyisheding[19] = m_double20;
		}
		datatestDPU[4] = bzengyisheding[19];
		CMyPublicData::setfunc(51, 16, 74, 1);
		return TRUE;
	}

	return CDialogEx::PreTranslateMessage(pMsg);
}




void bzengyi::OnBnClickedCancel()
{
	
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(bzengyisheding[0]);
	opx.ModifyNode("num0301", str);
	str = opx.numtoString(bzengyisheding[1]);
	opx.ModifyNode("num0302", str);
	str = opx.numtoString(bzengyisheding[2]);
	opx.ModifyNode("num0303", str);
	str = opx.numtoString(bzengyisheding[3]);
	opx.ModifyNode("num0304", str);
	str = opx.numtoString(bzengyisheding[4]);
	opx.ModifyNode("num0305", str);
	str = opx.numtoString(bzengyisheding[5]);
	opx.ModifyNode("num0306", str);
	str = opx.numtoString(bzengyisheding[6]);
	opx.ModifyNode("num0307", str);
	str = opx.numtoString(bzengyisheding[7]);
	opx.ModifyNode("num0308", str);
	str = opx.numtoString(bzengyisheding[8]);
	opx.ModifyNode("num0309", str);
	str = opx.numtoString(bzengyisheding[9]);
	opx.ModifyNode("num0310", str);
	str = opx.numtoString(bzengyisheding[10]);
	opx.ModifyNode("num0311", str);
	str = opx.numtoString(bzengyisheding[11]);
	opx.ModifyNode("num0312", str);
	str = opx.numtoString(bzengyisheding[12]);
	opx.ModifyNode("num0313", str);
	str = opx.numtoString(bzengyisheding[13]);
	opx.ModifyNode("num0314", str);
	str = opx.numtoString(bzengyisheding[14]);
	opx.ModifyNode("num0315", str);
	str = opx.numtoString(bzengyisheding[15]);
	opx.ModifyNode("num0316", str);
	str = opx.numtoString(bzengyisheding[16]);
	opx.ModifyNode("num0317", str);
	str = opx.numtoString(bzengyisheding[17]);
	opx.ModifyNode("num0318", str);
	str = opx.numtoString(bzengyisheding[18]);
	opx.ModifyNode("num0319", str);
	str = opx.numtoString(bzengyisheding[19]);
	opx.ModifyNode("num0320", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


BOOL bzengyi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num0401", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC0)->SetWindowText(cstr);
	opx.QueryNode_Text("num0402", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num0403", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num0404", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC21)->SetWindowText(cstr);
	opx.QueryNode_Text("num0405", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC22)->SetWindowText(cstr);
	opx.QueryNode_Text("num0406", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
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
	CRect rect;
	GetClientRect(&rect);     //取客户区大小    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;

	int nMargin = 15;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT2)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT30)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT31)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT32)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT33)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT47)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT48)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT49)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT50)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT36)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT37)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT38)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT39)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT51)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT52)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT53)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT54)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void bzengyi::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void bzengyi::ReSize()
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


void bzengyi::OnBnClickedKaishida()
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


void bzengyi::OnBnClickedTingzhida()
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
