// Rzengyi.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Rzengyi.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "gzengyi.h"
#include "bzengyi.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
//#include "ADOConnect.h"
// Rzengyi 对话框

IMPLEMENT_DYNAMIC(Rzengyi, CDialogEx)

Rzengyi::Rzengyi(CWnd* pParent /*=NULL*/)
	: CDialogEx(Rzengyi::IDD, pParent)
	, m_double1(rzengyi[0])
	, m_double2(rzengyi[1])
	, m_double3(rzengyi[2])
	, m_double4(rzengyi[3])
	, m_double5(rzengyi[4])
	, m_double6(rzengyi[5])
	, m_double7(rzengyi[6])
	, m_double8(rzengyi[7])
	, m_double9(rzengyi[8])
	, m_double10(rzengyi[9])
	, m_double11(rzengyi[10])
	, m_double12(rzengyi[11])
	, m_double13(rzengyi[12])
	, m_double14(rzengyi[13])
	, m_double15(rzengyi[14])
	, m_double16(rzengyi[15])
	, m_double17(rzengyi[16])
	, m_double18(rzengyi[17])
	, m_double19(rzengyi[18])
	, m_double20(rzengyi[19])
{

}

Rzengyi::~Rzengyi()
{
}

void Rzengyi::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(Rzengyi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON12, &Rzengyi::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON14, &Rzengyi::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON64, &Rzengyi::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON65, &Rzengyi::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON67, &Rzengyi::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON69, &Rzengyi::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON71, &Rzengyi::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON73, &Rzengyi::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON75, &Rzengyi::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON77, &Rzengyi::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON79, &Rzengyi::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON81, &Rzengyi::OnBnClickedButton81)
	ON_BN_CLICKED(IDC_BUTTON13, &Rzengyi::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON15, &Rzengyi::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON51, &Rzengyi::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON66, &Rzengyi::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON68, &Rzengyi::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON70, &Rzengyi::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON72, &Rzengyi::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON74, &Rzengyi::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON76, &Rzengyi::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON78, &Rzengyi::OnBnClickedButton78)
	ON_BN_CLICKED(IDC_BUTTON80, &Rzengyi::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_BUTTON82, &Rzengyi::OnBnClickedButton82)
	ON_BN_CLICKED(IDC_BUTTON85, &Rzengyi::OnBnClickedButton85)
	ON_BN_CLICKED(IDC_BUTTON86, &Rzengyi::OnBnClickedButton86)
	ON_BN_CLICKED(IDC_BUTTON88, &Rzengyi::OnBnClickedButton88)
	ON_BN_CLICKED(IDC_BUTTON98, &Rzengyi::OnBnClickedButton98)
	ON_BN_CLICKED(IDC_BUTTON100, &Rzengyi::OnBnClickedButton100)
	ON_BN_CLICKED(IDC_BUTTON102, &Rzengyi::OnBnClickedButton102)
	ON_BN_CLICKED(IDC_BUTTON106, &Rzengyi::OnBnClickedButton106)
	ON_BN_CLICKED(IDC_BUTTON108, &Rzengyi::OnBnClickedButton108)
	ON_BN_CLICKED(IDC_BUTTON94, &Rzengyi::OnBnClickedButton94)
	ON_BN_CLICKED(IDC_BUTTON87, &Rzengyi::OnBnClickedButton87)
	ON_BN_CLICKED(IDC_BUTTON89, &Rzengyi::OnBnClickedButton89)
	ON_BN_CLICKED(IDC_BUTTON99, &Rzengyi::OnBnClickedButton99)
	ON_BN_CLICKED(IDC_BUTTON101, &Rzengyi::OnBnClickedButton101)
	ON_BN_CLICKED(IDC_BUTTON103, &Rzengyi::OnBnClickedButton103)
	ON_BN_CLICKED(IDC_BUTTON107, &Rzengyi::OnBnClickedButton107)
	ON_BN_CLICKED(IDC_BUTTON109, &Rzengyi::OnBnClickedButton109)
	ON_BN_CLICKED(IDC_BUTTON83, &Rzengyi::OnBnClickedButton83)
	ON_BN_CLICKED(IDC_BUTTON84, &Rzengyi::OnBnClickedButton84)
	ON_WM_SIZE()
//	ON_BN_CLICKED(IDC_BUTTON10, &Rzengyi::OnBnClickedButton10)
	ON_BN_CLICKED(IDCANCEL, &Rzengyi::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_KAISHIDA, &Rzengyi::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &Rzengyi::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// Rzengyi 消息处理程序


void Rzengyi::OnBnClickedButton12()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		rzengyi[0] = m_double1;
	}
	datatestDPU[4] = rzengyi[0];
	CMyPublicData::setfunc(32, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton14()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		rzengyi[1] = m_double2;
	}
	datatestDPU[4] = rzengyi[1];
	CMyPublicData::setfunc(34, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton64()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		rzengyi[2] = m_double3;
	}
	datatestDPU[4] = rzengyi[2];
	CMyPublicData::setfunc(36, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton65()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		rzengyi[3] = m_double4;
	}
	datatestDPU[4] = rzengyi[3];
	CMyPublicData::setfunc(38, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton67()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		rzengyi[4] = m_double5;
	}
	datatestDPU[4] = rzengyi[4];
	CMyPublicData::setfunc(40, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton69()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		rzengyi[5] = m_double6;
	}
	datatestDPU[4] = rzengyi[5];
	CMyPublicData::setfunc(42, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton71()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		rzengyi[10] = m_double11;
	}
	datatestDPU[4] = rzengyi[10];
	CMyPublicData::setfunc(33, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton73()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		rzengyi[11] = m_double12;
	}
	datatestDPU[4] = rzengyi[11];
	CMyPublicData::setfunc(35, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton75()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13++;
	if (0 <= m_double13&& m_double13 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[12] = m_double13;
	}
	else
	{
		m_double13--;
		UpdateData(FALSE);
		rzengyi[12] = m_double13;
	}
	datatestDPU[4] = rzengyi[12];
	CMyPublicData::setfunc(37, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton77()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14++;
	if (0 <= m_double14&& m_double14 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[13] = m_double14;
	}
	else
	{
		m_double14--;
		UpdateData(FALSE);
		rzengyi[13] = m_double14;
	}
	datatestDPU[4] = rzengyi[13];
	CMyPublicData::setfunc(39, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton79()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15++;
	if (0 <= m_double15&& m_double15 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[14] = m_double15;
	}
	else
	{
		m_double15--;
		UpdateData(FALSE);
		rzengyi[14] = m_double15;
	}
	datatestDPU[4] = rzengyi[14];
	CMyPublicData::setfunc(41, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton81()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16++;
	if (0 <= m_double16&& m_double16 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[15] = m_double16;
	}
	else
	{
		m_double16--;
		UpdateData(FALSE);
		rzengyi[15] = m_double16;
	}
	datatestDPU[4] = rzengyi[15];
	CMyPublicData::setfunc(43, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton13()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		rzengyi[0] = m_double1;
	}
	datatestDPU[4] = rzengyi[0];
	CMyPublicData::setfunc(32, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton15()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		rzengyi[1] = m_double2;
	}
	datatestDPU[4] = rzengyi[1];
	CMyPublicData::setfunc(34, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton51()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		rzengyi[2] = m_double3;
	}
	datatestDPU[4] = rzengyi[2];
	CMyPublicData::setfunc(36, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton66()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		rzengyi[3] = m_double4;
	}
	datatestDPU[4] = rzengyi[3];
	CMyPublicData::setfunc(38, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton68()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		rzengyi[4] = m_double5;
	}
	datatestDPU[4] = rzengyi[4];
	CMyPublicData::setfunc(40, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton70()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		rzengyi[5] = m_double6;
	}
	datatestDPU[4] = rzengyi[5];
	CMyPublicData::setfunc(42, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton72()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		rzengyi[10] = m_double11;
	}
	datatestDPU[4] = rzengyi[10];
	CMyPublicData::setfunc(33, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton74()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		rzengyi[11] = m_double12;
	}
	datatestDPU[4] = rzengyi[11];
	CMyPublicData::setfunc(35, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton76()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13--;
	if (0 <= m_double13&& m_double13 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[12] = m_double13;
	}
	else
	{
		m_double13++;
		UpdateData(FALSE);
		rzengyi[12] = m_double13;
	}
	datatestDPU[4] = rzengyi[12];
	CMyPublicData::setfunc(37, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton78()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14--;
	if (0 <= m_double14&& m_double14 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[13] = m_double14;
	}
	else
	{
		m_double14++;
		UpdateData(FALSE);
		rzengyi[13] = m_double14;
	}
	datatestDPU[4] = rzengyi[13];
	CMyPublicData::setfunc(39, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton80()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15--;
	if (0 <= m_double15&& m_double15 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[14] = m_double15;
	}
	else
	{
		m_double15++;
		UpdateData(FALSE);
		rzengyi[14] = m_double15;
	}
	datatestDPU[4] = rzengyi[14];
	CMyPublicData::setfunc(41, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton82()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16--;
	if (0 <= m_double16&& m_double16 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[15] = m_double16;
	}
	else
	{
		m_double16++;
		UpdateData(FALSE);
		rzengyi[15] = m_double16;
	}
	datatestDPU[4] = rzengyi[15];
	CMyPublicData::setfunc(43, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton85()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		rzengyi[6] = m_double7;
	}
	datatestDPU[4] = rzengyi[6];
	CMyPublicData::setfunc(44, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton86()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		rzengyi[7] = m_double8;
	}
	datatestDPU[4] = rzengyi[7];
	CMyPublicData::setfunc(46, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton88()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		rzengyi[8] = m_double9;
	}
	datatestDPU[4] = rzengyi[8];
	CMyPublicData::setfunc(48, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton98()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		rzengyi[9] = m_double10;
	}
	datatestDPU[4] = rzengyi[9];
	CMyPublicData::setfunc(50, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton100()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17++;
	if (0 <= m_double17&& m_double17 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[16] = m_double17;
	}
	else
	{
		m_double17--;
		UpdateData(FALSE);
		rzengyi[16] = m_double17;
	}
	datatestDPU[4] = rzengyi[16];
	CMyPublicData::setfunc(45, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton102()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18++;
	if (0 <= m_double18&& m_double18 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[17] = m_double18;
	}
	else
	{
		m_double18--;
		UpdateData(FALSE);
		rzengyi[17] = m_double18;
	}
	datatestDPU[4] = rzengyi[17];
	CMyPublicData::setfunc(47, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton106()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19++;
	if (0 <= m_double19&& m_double19 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[18] = m_double19;
	}
	else
	{
		m_double19--;
		UpdateData(FALSE);
		rzengyi[18] = m_double19;
	}
	datatestDPU[4] = rzengyi[18];
	CMyPublicData::setfunc(49, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton108()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20++;
	if (0 <= m_double20&& m_double20 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[19] = m_double20;
	}
	else
	{
		m_double20--;
		UpdateData(FALSE);
		rzengyi[19] = m_double20;
	}
	datatestDPU[4] = rzengyi[19];
	CMyPublicData::setfunc(51, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton94()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		rzengyi[6] = m_double7;
	}
	datatestDPU[4] = rzengyi[6];
	CMyPublicData::setfunc(44, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton87()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		rzengyi[7] = m_double8;
	}
	datatestDPU[4] = rzengyi[7];
	CMyPublicData::setfunc(46, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton89()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		rzengyi[8] = m_double9;
	}
	datatestDPU[4] = rzengyi[8];
	CMyPublicData::setfunc(48, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton99()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		rzengyi[9] = m_double10;
	}
	datatestDPU[4] = rzengyi[9];
	CMyPublicData::setfunc(50, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton101()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17--;
	if (0 <= m_double17&& m_double17 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[16] = m_double17;
	}
	else
	{
		m_double17++;
		UpdateData(FALSE);
		rzengyi[16] = m_double17;
	}
	datatestDPU[4] = rzengyi[16];
	CMyPublicData::setfunc(45, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton103()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18--;
	if (0 <= m_double18&& m_double18 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[17] = m_double18;
	}
	else
	{
		m_double18++;
		UpdateData(FALSE);
		rzengyi[17] = m_double18;
	}
	datatestDPU[4] = rzengyi[17];
	CMyPublicData::setfunc(47, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton107()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19--;
	if (0 <= m_double19&& m_double19 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[18] = m_double19;
	}
	else
	{
		m_double19++;
		UpdateData(FALSE);
		rzengyi[18] = m_double19;
	}
	datatestDPU[4] = rzengyi[18];
	CMyPublicData::setfunc(49, 16, 70, 1);
}


void Rzengyi::OnBnClickedButton109()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20--;
	if (0 <= m_double20&& m_double20 <= 999)
	{
		UpdateData(FALSE);
		rzengyi[19] = m_double20;
	}
	else
	{
		m_double20++;
		UpdateData(FALSE);
		rzengyi[19] = m_double20;
	}
	datatestDPU[4] = rzengyi[19];
	CMyPublicData::setfunc(51, 16, 70, 1);
}


BOOL Rzengyi::PreTranslateMessage(MSG* pMsg)
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
			m_double1= _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			rzengyi[0] = m_double1;
		}
		datatestDPU[4] = rzengyi[0];
		CMyPublicData::setfunc(32, 16, 70, 1);
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
			rzengyi[1] = m_double2;
		}
		datatestDPU[4] = rzengyi[1];
		CMyPublicData::setfunc(34, 16, 70, 1);
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
			rzengyi[2] = m_double3;
		}
		datatestDPU[4] = rzengyi[2];
		CMyPublicData::setfunc(36, 16, 70, 1);
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
			m_double4 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			rzengyi[3] = m_double4;
		}
		datatestDPU[4] = rzengyi[3];
		CMyPublicData::setfunc(38, 16, 70, 1);
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
			rzengyi[4] = m_double5;
		}
		datatestDPU[4] = rzengyi[4];
		CMyPublicData::setfunc(40, 16, 70, 1);
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
			rzengyi[5] = m_double6;
		}
		datatestDPU[4] = rzengyi[5];
		CMyPublicData::setfunc(42, 16, 70, 1);
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
			m_double7 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			rzengyi[6] = m_double7;
		}
		datatestDPU[4] = rzengyi[6];
		CMyPublicData::setfunc(44, 16, 70, 1);
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
			rzengyi[7] = m_double8;
		}
		datatestDPU[4] = rzengyi[7];
		CMyPublicData::setfunc(46, 16, 70, 1);
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
			m_double9 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			rzengyi[8] = m_double9;
		}
		datatestDPU[4] = rzengyi[8];
		CMyPublicData::setfunc(48, 16, 70, 1);
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
			rzengyi[9] = m_double10;
		}
		datatestDPU[4] = rzengyi[9];
		CMyPublicData::setfunc(50, 16, 70, 1);
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
			m_double11 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			rzengyi[10] = m_double11;
		}
		datatestDPU[4] = rzengyi[10];
		CMyPublicData::setfunc(33, 16, 70, 1);
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
			rzengyi[11] = m_double12;
		}
		datatestDPU[4] = rzengyi[11];
		CMyPublicData::setfunc(35, 16, 70, 1);
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
			rzengyi[12] = m_double13;
		}
		datatestDPU[4] = rzengyi[12];
		CMyPublicData::setfunc(37, 16, 70, 1);
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
			rzengyi[13] = m_double14;
		}
		datatestDPU[4] = rzengyi[13];
		CMyPublicData::setfunc(39, 16, 70, 1);
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
			rzengyi[14] = m_double15;
		}
		datatestDPU[4] = rzengyi[14];
		CMyPublicData::setfunc(41, 16, 70, 1);
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
			rzengyi[15] = m_double16;
		}
		datatestDPU[4] = rzengyi[15];
		CMyPublicData::setfunc(43, 16, 70, 1);
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
			rzengyi[16] = m_double17;
		}
		datatestDPU[4] = rzengyi[16];
		CMyPublicData::setfunc(45, 16, 70, 1);
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
			rzengyi[17] = m_double18;
		}
		datatestDPU[4] = rzengyi[17];
		CMyPublicData::setfunc(47, 16, 70, 1);
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
			rzengyi[18] = m_double19;
		}
		datatestDPU[4] = rzengyi[18];
		CMyPublicData::setfunc(49, 16, 70, 1);
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
			rzengyi[19] = m_double20;
		}
		datatestDPU[4] = rzengyi[19];
		CMyPublicData::setfunc(51, 16, 70, 1);
		return TRUE;
	}

	return CDialogEx::PreTranslateMessage(pMsg);
}

void Rzengyi::OnBnClickedButton83()
{
	// TODO: 在此添加控件通知处理程序代码
	gzengyi gzengyi1;
	gzengyi1.DoModal();
}


void Rzengyi::OnBnClickedButton84()
{
	// TODO: 在此添加控件通知处理程序代码
	bzengyi bzengyi1;
	bzengyi1.DoModal();
}


BOOL Rzengyi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num3201", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC0)->SetWindowText(cstr);
	opx.QueryNode_Text("num3202", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num3203", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num3204", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC21)->SetWindowText(cstr);
	opx.QueryNode_Text("num3205", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC22)->SetWindowText(cstr);
	opx.QueryNode_Text("num3206", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON83)->SetWindowText(cstr);
	opx.QueryNode_Text("num3207", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON84)->SetWindowText(cstr);
	opx.QueryNode_Text("num3208", yuyan);
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
	//初始化窗口位置
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


void Rzengyi::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void Rzengyi::ReSize()
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


//void Rzengyi::OnBnClickedButton10()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	datatestDPU[0] = 32;
//	datatestDPU[2] = 70;
//	datatestDPU[4] = rzengyi[0];
//
//	CMyPublicData::writeholdreg();
//}


void Rzengyi::OnBnClickedCancel()
{
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(rzengyi[0]);
	opx.ModifyNode("num1601", str);
	str = opx.numtoString(rzengyi[1]);
	opx.ModifyNode("num1602", str);
	str = opx.numtoString(rzengyi[2]);
	opx.ModifyNode("num1603", str);
	str = opx.numtoString(rzengyi[3]);
	opx.ModifyNode("num1604", str);
	str = opx.numtoString(rzengyi[4]);
	opx.ModifyNode("num1605", str);
	str = opx.numtoString(rzengyi[5]);
	opx.ModifyNode("num1606", str);
	str = opx.numtoString(rzengyi[6]);
	opx.ModifyNode("num1607", str);
	str = opx.numtoString(rzengyi[7]);
	opx.ModifyNode("num1608", str);
	str = opx.numtoString(rzengyi[8]);
	opx.ModifyNode("num1609", str);
	str = opx.numtoString(rzengyi[9]);
	opx.ModifyNode("num1610", str);
	str = opx.numtoString(rzengyi[10]);
	opx.ModifyNode("num1611", str);
	str = opx.numtoString(rzengyi[11]);
	opx.ModifyNode("num1612", str);
	str = opx.numtoString(rzengyi[12]);
	opx.ModifyNode("num1613", str);
	str = opx.numtoString(rzengyi[13]);
	opx.ModifyNode("num1614", str);
	str = opx.numtoString(rzengyi[14]);
	opx.ModifyNode("num1615", str);
	str = opx.numtoString(rzengyi[15]);
	opx.ModifyNode("num1616", str);
	str = opx.numtoString(rzengyi[16]);
	opx.ModifyNode("num1617", str);
	str = opx.numtoString(rzengyi[17]);
	opx.ModifyNode("num1618", str);
	str = opx.numtoString(rzengyi[18]);
	opx.ModifyNode("num1619", str);
	str = opx.numtoString(rzengyi[19]);
	opx.ModifyNode("num1620", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void Rzengyi::OnBnClickedKaishida()
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


void Rzengyi::OnBnClickedTingzhida()
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
