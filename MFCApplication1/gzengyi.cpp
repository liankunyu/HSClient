// gzengyi.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "gzengyi.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include "Rzengyi.h"
#include "bzengyi.h"
//#include "ADOConnect.h"
// gzengyi 对话框

IMPLEMENT_DYNAMIC(gzengyi, CDialogEx)

gzengyi::gzengyi(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_GZENGYI_DIALOG, pParent)
	, m_double1(gzengyisheding[0])
	, m_double2(gzengyisheding[1])
	, m_double3(gzengyisheding[2])
	, m_double4(gzengyisheding[3])
	, m_double5(gzengyisheding[4])
	, m_double6(gzengyisheding[5])
	, m_double7(gzengyisheding[6])
	, m_double8(gzengyisheding[7])
	, m_double9(gzengyisheding[8])
	, m_double10(gzengyisheding[9])
	, m_double11(gzengyisheding[10])
	, m_double12(gzengyisheding[11])
	, m_double13(gzengyisheding[12])
	, m_double14(gzengyisheding[13])
	, m_double15(gzengyisheding[14])
	, m_double16(gzengyisheding[15])
	, m_double17(gzengyisheding[16])
	, m_double18(gzengyisheding[17])
	, m_double19(gzengyisheding[18])
	, m_double20(gzengyisheding[19])
{

}

gzengyi::~gzengyi()
{
}

void gzengyi::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(gzengyi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON12, &gzengyi::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON14, &gzengyi::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON64, &gzengyi::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON65, &gzengyi::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON67, &gzengyi::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON69, &gzengyi::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON71, &gzengyi::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON73, &gzengyi::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON75, &gzengyi::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON77, &gzengyi::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON79, &gzengyi::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON81, &gzengyi::OnBnClickedButton81)
	ON_BN_CLICKED(IDC_BUTTON13, &gzengyi::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON15, &gzengyi::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON51, &gzengyi::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON66, &gzengyi::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON68, &gzengyi::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON70, &gzengyi::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON72, &gzengyi::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON74, &gzengyi::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON76, &gzengyi::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON78, &gzengyi::OnBnClickedButton78)
	ON_BN_CLICKED(IDC_BUTTON80, &gzengyi::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_BUTTON82, &gzengyi::OnBnClickedButton82)
	ON_BN_CLICKED(IDC_BUTTON85, &gzengyi::OnBnClickedButton85)
	ON_BN_CLICKED(IDC_BUTTON86, &gzengyi::OnBnClickedButton86)
	ON_BN_CLICKED(IDC_BUTTON88, &gzengyi::OnBnClickedButton88)
	ON_BN_CLICKED(IDC_BUTTON98, &gzengyi::OnBnClickedButton98)
	ON_BN_CLICKED(IDC_BUTTON100, &gzengyi::OnBnClickedButton100)
	ON_BN_CLICKED(IDC_BUTTON102, &gzengyi::OnBnClickedButton102)
	ON_BN_CLICKED(IDC_BUTTON106, &gzengyi::OnBnClickedButton106)
	ON_BN_CLICKED(IDC_BUTTON108, &gzengyi::OnBnClickedButton108)
	ON_BN_CLICKED(IDC_BUTTON94, &gzengyi::OnBnClickedButton94)
	ON_BN_CLICKED(IDC_BUTTON87, &gzengyi::OnBnClickedButton87)
	ON_BN_CLICKED(IDC_BUTTON89, &gzengyi::OnBnClickedButton89)
	ON_BN_CLICKED(IDC_BUTTON99, &gzengyi::OnBnClickedButton99)
	ON_BN_CLICKED(IDC_BUTTON101, &gzengyi::OnBnClickedButton101)
	ON_BN_CLICKED(IDC_BUTTON103, &gzengyi::OnBnClickedButton103)
	ON_BN_CLICKED(IDC_BUTTON107, &gzengyi::OnBnClickedButton107)
	ON_BN_CLICKED(IDC_BUTTON109, &gzengyi::OnBnClickedButton109)
//	ON_BN_CLICKED(IDC_BUTTON10, &gzengyi::OnBnClickedButton10)
	ON_BN_CLICKED(IDCANCEL, &gzengyi::OnBnClickedCancel)
	ON_WM_SIZE()
//	ON_BN_CLICKED(IDC_BUTTON83, &gzengyi::OnBnClickedButton83)
//	ON_BN_CLICKED(IDC_BUTTON84, &gzengyi::OnBnClickedButton84)
	ON_BN_CLICKED(IDC_KAISHIDA, &gzengyi::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &gzengyi::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// gzengyi 消息处理程序
void gzengyi::OnBnClickedButton12()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		gzengyisheding[0] = m_double1;
	}
	if (modsd[0] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[0];
		CMyPublicData::setfunc(32, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton14()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		gzengyisheding[1] = m_double2;
	}
	if (modsd[2] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[1];
		CMyPublicData::setfunc(34, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton64()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		gzengyisheding[2] = m_double3;
	}
	if (modsd[4] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[2];
		CMyPublicData::setfunc(36, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton65()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		gzengyisheding[3] = m_double4;
	}
	if (modsd[6] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[3];
		CMyPublicData::setfunc(38, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton67()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		gzengyisheding[4] = m_double5;
	}
	if (modsd[8] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[4];
		CMyPublicData::setfunc(40, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton69()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		gzengyisheding[5] = m_double6;
	}
	if (modsd[10] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[5];
		CMyPublicData::setfunc(42, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton71()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11++;
	if (0 <= m_double11&& m_double11 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[10] = m_double11;
	}
	else
	{
		m_double11--;
		UpdateData(FALSE);
		gzengyisheding[10] = m_double11;
	}
	if (modsd[1] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[10];
		CMyPublicData::setfunc(33, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton73()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12++;
	if (0 <= m_double12&& m_double12 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[11] = m_double12;
	}
	else
	{
		m_double12--;
		UpdateData(FALSE);
		gzengyisheding[11] = m_double12;
	}
	if (modsd[3] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[11];
		CMyPublicData::setfunc(35, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton75()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13++;
	if (0 <= m_double13&& m_double13 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[12] = m_double13;
	}
	else
	{
		m_double13--;
		UpdateData(FALSE);
		gzengyisheding[12] = m_double13;
	}
	if (modsd[5] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[12];
		CMyPublicData::setfunc(37, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton77()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14++;
	if (0 <= m_double14&& m_double14 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[13] = m_double14;
	}
	else
	{
		m_double14--;
		UpdateData(FALSE);
		gzengyisheding[13] = m_double14;
	}
	if (modsd[7] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[13];
		CMyPublicData::setfunc(39, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton79()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15++;
	if (0 <= m_double15&& m_double15 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[14] = m_double15;
	}
	else
	{
		m_double15--;
		UpdateData(FALSE);
		gzengyisheding[14] = m_double15;
	}
	if (modsd[9] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[14];
		CMyPublicData::setfunc(41, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton81()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16++;
	if (0 <= m_double16&& m_double16 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[15] = m_double16;
	}
	else
	{
		m_double16--;
		UpdateData(FALSE);
		gzengyisheding[15] = m_double16;
	}
	if (modsd[11] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[15];
		CMyPublicData::setfunc(43, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton13()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		gzengyisheding[0] = m_double1;
	}
	if (modsd[0] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[0];
		CMyPublicData::setfunc(32, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton15()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		gzengyisheding[1] = m_double2;
	}
	if (modsd[2] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[1];
		CMyPublicData::setfunc(34, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton51()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		gzengyisheding[2] = m_double3;
	}
	if (modsd[4] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[2];
		CMyPublicData::setfunc(36, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton66()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		gzengyisheding[3] = m_double4;
	}
	if (modsd[6] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[3];
		CMyPublicData::setfunc(38, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton68()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		gzengyisheding[4] = m_double5;
	}
	if (modsd[8] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[4];
		CMyPublicData::setfunc(40, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton70()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		gzengyisheding[5] = m_double6;
	}
	if (modsd[10] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[5];
		CMyPublicData::setfunc(42, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton72()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double11--;
	if (0 <= m_double11&& m_double11 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[10] = m_double11;
	}
	else
	{
		m_double11++;
		UpdateData(FALSE);
		gzengyisheding[10] = m_double11;
	}
	if (modsd[1] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[10];
		CMyPublicData::setfunc(33, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton74()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double12--;
	if (0 <= m_double12&& m_double12 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[11] = m_double12;
	}
	else
	{
		m_double12++;
		UpdateData(FALSE);
		gzengyisheding[11] = m_double12;
	}
	if (modsd[3] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[11];
		CMyPublicData::setfunc(35, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton76()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double13--;
	if (0 <= m_double13&& m_double13 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[12] = m_double13;
	}
	else
	{
		m_double13++;
		UpdateData(FALSE);
		gzengyisheding[12] = m_double13;
	}
	if (modsd[5] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[12];
		CMyPublicData::setfunc(37, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton78()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double14--;
	if (0 <= m_double14&& m_double14 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[13] = m_double14;
	}
	else
	{
		m_double14++;
		UpdateData(FALSE);
		gzengyisheding[13] = m_double14;
	}
	if (modsd[7] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[13];
		CMyPublicData::setfunc(39, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton80()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double15--;
	if (0 <= m_double15&& m_double15 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[14] = m_double15;
	}
	else
	{
		m_double15++;
		UpdateData(FALSE);
		gzengyisheding[14] = m_double15;
	}
	if (modsd[9] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[14];
		CMyPublicData::setfunc(41, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton82()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double16--;
	if (0 <= m_double16&& m_double16 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[15] = m_double16;
	}
	else
	{
		m_double16++;
		UpdateData(FALSE);
		gzengyisheding[15] = m_double16;
	}
	if (modsd[11] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[15];
		CMyPublicData::setfunc(43, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton85()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		gzengyisheding[6] = m_double7;
	}
	if (modsd[12] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[6];
		CMyPublicData::setfunc(44, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton86()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8++;
	if (0 <= m_double8&& m_double8 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[7] = m_double8;
	}
	else
	{
		m_double8--;
		UpdateData(FALSE);
		gzengyisheding[7] = m_double8;
	}
	if (modsd[14] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[7];
		CMyPublicData::setfunc(46, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton88()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9++;
	if (0 <= m_double9&& m_double9 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[8] = m_double9;
	}
	else
	{
		m_double9--;
		UpdateData(FALSE);
		gzengyisheding[8] = m_double9;
	}
	if (modsd[16] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[8];
		CMyPublicData::setfunc(48, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton98()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10++;
	if (0 <= m_double10&& m_double10 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[9] = m_double10;
	}
	else
	{
		m_double10--;
		UpdateData(FALSE);
		gzengyisheding[9] = m_double10;
	}
	if (modsd[18] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[9];
		CMyPublicData::setfunc(50, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton100()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17++;
	if (0 <= m_double17&& m_double17 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[16] = m_double17;
	}
	else
	{
		m_double17--;
		UpdateData(FALSE);
		gzengyisheding[16] = m_double17;
	}
	if (modsd[13] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[16];
		CMyPublicData::setfunc(45, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton102()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18++;
	if (0 <= m_double18&& m_double18 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[17] = m_double18;
	}
	else
	{
		m_double18--;
		UpdateData(FALSE);
		gzengyisheding[17] = m_double18;
	}
	if (modsd[15] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[17];
		CMyPublicData::setfunc(47, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton106()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19++;
	if (0 <= m_double19&& m_double19 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[18] = m_double19;
	}
	else
	{
		m_double19--;
		UpdateData(FALSE);
		gzengyisheding[18] = m_double19;
	}
	if (modsd[17] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[18];
		CMyPublicData::setfunc(49, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton108()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20++;
	if (0 <= m_double20&& m_double20 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[19] = m_double20;
	}
	else
	{
		m_double20--;
		UpdateData(FALSE);
		gzengyisheding[19] = m_double20;
	}
	if (modsd[19] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[19];
		CMyPublicData::setfunc(51, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton94()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		gzengyisheding[6] = m_double7;
	}
	if (modsd[12] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[6];
		CMyPublicData::setfunc(44, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton87()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double8--;
	if (0 <= m_double8&& m_double8 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[7] = m_double8;
	}
	else
	{
		m_double8++;
		UpdateData(FALSE);
		gzengyisheding[7] = m_double8;
	}
	if (modsd[14] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[7];
		CMyPublicData::setfunc(46, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton89()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double9--;
	if (0 <= m_double9&& m_double9 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[8] = m_double9;
	}
	else
	{
		m_double9++;
		UpdateData(FALSE);
		gzengyisheding[8] = m_double9;
	}
	if (modsd[16] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[8];
		CMyPublicData::setfunc(48, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton99()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double10--;
	if (0 <= m_double10&& m_double10 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[9] = m_double10;
	}
	else
	{
		m_double10++;
		UpdateData(FALSE);
		gzengyisheding[9] = m_double10;
	}
	if (modsd[18] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[9];
		CMyPublicData::setfunc(50, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton101()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double17--;
	if (0 <= m_double17&& m_double17 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[16] = m_double17;
	}
	else
	{
		m_double17++;
		UpdateData(FALSE);
		gzengyisheding[16] = m_double17;
	}
	if (modsd[13] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[16];
		CMyPublicData::setfunc(45, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton103()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double18--;
	if (0 <= m_double18&& m_double18 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[17] = m_double18;
	}
	else
	{
		m_double18++;
		UpdateData(FALSE);
		gzengyisheding[17] = m_double18;
	}
	if (modsd[15] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[17];
		CMyPublicData::setfunc(47, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton107()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double19--;
	if (0 <= m_double19&& m_double19 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[18] = m_double19;
	}
	else
	{
		m_double19++;
		UpdateData(FALSE);
		gzengyisheding[18] = m_double19;
	}
	if (modsd[17] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[18];
		CMyPublicData::setfunc(49, 16, 72, 1);
	}
}


void gzengyi::OnBnClickedButton109()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double20--;
	if (0 <= m_double20&& m_double20 <= 999)
	{
		UpdateData(FALSE);
		gzengyisheding[19] = m_double20;
	}
	else
	{
		m_double20++;
		UpdateData(FALSE);
		gzengyisheding[19] = m_double20;
	}
	if (modsd[19] != L"OFF")
	{
		datatestDPU[4] = gzengyisheding[19];
		CMyPublicData::setfunc(51, 16, 72, 1);
	}
}


BOOL gzengyi::PreTranslateMessage(MSG* pMsg)
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
			gzengyisheding[0] = m_double1;
		}
		if (modsd[0] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[0];
			CMyPublicData::setfunc(32, 16, 72, 1);
		}
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
			gzengyisheding[1] = m_double2;
		}
		if (modsd[2] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[1];
			CMyPublicData::setfunc(34, 16, 72, 1);
		}
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
			gzengyisheding[2] = m_double3;
		}
		if (modsd[4] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[2];
			CMyPublicData::setfunc(36, 16, 72, 1);
		}
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
			gzengyisheding[3] = m_double4;
		}
		if (modsd[6] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[3];
			CMyPublicData::setfunc(38, 16, 72, 1);
		}
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
			gzengyisheding[4] = m_double5;
		}
		if (modsd[8] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[4];
			CMyPublicData::setfunc(40, 16, 72, 1);
		}
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
			gzengyisheding[5] = m_double6;
		}
		if (modsd[10] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[5];
			CMyPublicData::setfunc(42, 16, 72, 1);
		}
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
			gzengyisheding[6] = m_double7;
		}
		if (modsd[12] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[6];
			CMyPublicData::setfunc(44, 16, 72, 1);
		}
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
			gzengyisheding[7] = m_double8;
		}
		if (modsd[14] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[7];
			CMyPublicData::setfunc(46, 16, 72, 1);
		}
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
			gzengyisheding[8] = m_double9;
		}
		if (modsd[16] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[8];
			CMyPublicData::setfunc(48, 16, 72, 1);
		}
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
			gzengyisheding[9] = m_double10;
		}
		if (modsd[18] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[9];
			CMyPublicData::setfunc(50, 16, 72, 1);
		}
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
			gzengyisheding[10] = m_double11;
		}
		if (modsd[1] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[10];
			CMyPublicData::setfunc(33, 16, 72, 1);
		}
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
			gzengyisheding[11] = m_double12;
		}
		if (modsd[3] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[11];
			CMyPublicData::setfunc(35, 16, 72, 1);
		}
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
			gzengyisheding[12] = m_double13;
		}
		if (modsd[5] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[12];
			CMyPublicData::setfunc(37, 16, 72, 1);
		}
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
			gzengyisheding[13] = m_double14;
		}
		if (modsd[7] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[13];
			CMyPublicData::setfunc(39, 16, 72, 1);
		}
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
			gzengyisheding[14] = m_double15;
		}
		if (modsd[9] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[14];
			CMyPublicData::setfunc(41, 16, 72, 1);
		}
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
			gzengyisheding[15] = m_double16;
		}
		if (modsd[11] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[15];
			CMyPublicData::setfunc(43, 16, 72, 1);
		}
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
			gzengyisheding[16] = m_double17;
		}
		if (modsd[13] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[16];
			CMyPublicData::setfunc(45, 16, 72, 1);
		}
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
			gzengyisheding[17] = m_double18;
		}
		if (modsd[15] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[17];
			CMyPublicData::setfunc(47, 16, 72, 1);
		}
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
			gzengyisheding[18] = m_double19;
		}
		if (modsd[17] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[18];
			CMyPublicData::setfunc(49, 16, 72, 1);
		}
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
			gzengyisheding[19] = m_double20;
		}
		if (modsd[19] != L"OFF")
		{
			datatestDPU[4] = gzengyisheding[19];
			CMyPublicData::setfunc(51, 16, 72, 1);
		}
		return TRUE;
	}

	return CDialogEx::PreTranslateMessage(pMsg);
}



BOOL gzengyi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num1001", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC0)->SetWindowText(cstr);
	opx.QueryNode_Text("num1002", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num1003", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num1004", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC21)->SetWindowText(cstr);
	opx.QueryNode_Text("num1005", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC22)->SetWindowText(cstr);
	opx.QueryNode_Text("num1006", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
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

void gzengyi::ReSize()
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

//void gzengyi::OnBnClickedButton10()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	datatestDPU[0] = 32;
//	datatestDPU[2] = 70;
//	datatestDPU[6] = gzengyisheding[0];
//	CMyPublicData::writeholdreg();
//}


void gzengyi::OnBnClickedCancel()
{
	
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(gzengyisheding[0]);
	opx.ModifyNode("num0801", str);
	str = opx.numtoString(gzengyisheding[1]);
	opx.ModifyNode("num0802", str);
	str = opx.numtoString(gzengyisheding[2]);
	opx.ModifyNode("num0803", str);
	str = opx.numtoString(gzengyisheding[3]);
	opx.ModifyNode("num0804", str);
	str = opx.numtoString(gzengyisheding[4]);
	opx.ModifyNode("num0805", str);
	str = opx.numtoString(gzengyisheding[5]);
	opx.ModifyNode("num0806", str);
	str = opx.numtoString(gzengyisheding[6]);
	opx.ModifyNode("num0807", str);
	str = opx.numtoString(gzengyisheding[7]);
	opx.ModifyNode("num0808", str);
	str = opx.numtoString(gzengyisheding[8]);
	opx.ModifyNode("num0809", str);
	str = opx.numtoString(gzengyisheding[9]);
	opx.ModifyNode("num0810", str);
	str = opx.numtoString(gzengyisheding[10]);
	opx.ModifyNode("num0811", str);
	str = opx.numtoString(gzengyisheding[11]);
	opx.ModifyNode("num0812", str);
	str = opx.numtoString(gzengyisheding[12]);
	opx.ModifyNode("num0813", str);
	str = opx.numtoString(gzengyisheding[13]);
	opx.ModifyNode("num0814", str);
	str = opx.numtoString(gzengyisheding[14]);
	opx.ModifyNode("num0815", str);
	str = opx.numtoString(gzengyisheding[15]);
	opx.ModifyNode("num0816", str);
	str = opx.numtoString(gzengyisheding[16]);
	opx.ModifyNode("num0817", str);
	str = opx.numtoString(gzengyisheding[17]);
	opx.ModifyNode("num0818", str);
	str = opx.numtoString(gzengyisheding[18]);
	opx.ModifyNode("num0819", str);
	str = opx.numtoString(gzengyisheding[19]);
	opx.ModifyNode("num0820", str);

	opx.SaveFile();
	CDialogEx::OnCancel();
}


void gzengyi::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


//void gzengyi::OnBnClickedButton83()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	Rzengyi rz;
//	rz.DoModal();
//	CDialogEx::OnCancel();
//}


//void gzengyi::OnBnClickedButton84()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	bzengyi bz;
//	bz.DoModal();
//	CDialogEx::OnCancel();
//}


void gzengyi::OnBnClickedKaishida()
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


void gzengyi::OnBnClickedTingzhida()
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
