// Liuliangsheding.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Liuliangsheding.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "VGAsheding.h"
#include "rlingmindu.h"
#include "Mianji.h"
#include "Yansemingan.h"
#include "Famenceshi.h"
#include "Qinghui.h"
#include "Moshixuanze.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
//#include "ADOConnect.h"
// CLiuliangsheding 对话框

IMPLEMENT_DYNAMIC(CLiuliangsheding, CDialogEx)

CLiuliangsheding::CLiuliangsheding(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLiuliangsheding::IDD, pParent)
	, m_double1(liuliang[0])
	, m_double2(liuliang[1])
	, m_double3(liuliang[2])
	, m_double4(liuliang[3])
	, m_double5(liuliang[4])
	, m_double6(liuliang[5])
	, m_double7(liuliang[6])
	, m_double8(liuliang[7])
	, m_double9(liuliang[8])
	, m_double10(liuliang[9])
	, m_double11(liuliang[10])
	, m_double12(liuliang[11])
	, m_double13(liuliang[12])
{
	OnEnSet = true;
}

CLiuliangsheding::~CLiuliangsheding()
{
}

void CLiuliangsheding::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT4, m_double1);
	DDX_Text(pDX, IDC_EDIT5, m_double2);
	DDX_Text(pDX, IDC_EDIT6, m_double3);
	DDX_Text(pDX, IDC_EDIT7, m_double4);
	DDX_Text(pDX, IDC_EDIT8, m_double5);
	DDX_Text(pDX, IDC_EDIT9, m_double6);
	DDX_Text(pDX, IDC_EDIT10, m_double7);
	DDX_Text(pDX, IDC_EDIT11, m_double8);
	DDX_Text(pDX, IDC_EDIT74, m_double9);
	DDX_Text(pDX, IDC_EDIT75, m_double10);
	DDX_Text(pDX, IDC_EDIT1, m_double11);
	DDX_Text(pDX, IDC_EDIT2, m_double12);
	DDX_Text(pDX, IDC_EDIT18, m_double13);
	//  DDX_Control(pDX, IDC_EDIT1, m_Edit1);
	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA, m_tingzhi);
}


BEGIN_MESSAGE_MAP(CLiuliangsheding, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON9, &CLiuliangsheding::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON12, &CLiuliangsheding::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON11, &CLiuliangsheding::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON15, &CLiuliangsheding::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON17, &CLiuliangsheding::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON19, &CLiuliangsheding::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON21, &CLiuliangsheding::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON23, &CLiuliangsheding::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON25, &CLiuliangsheding::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON27, &CLiuliangsheding::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON29, &CLiuliangsheding::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON31, &CLiuliangsheding::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON18, &CLiuliangsheding::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON20, &CLiuliangsheding::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON22, &CLiuliangsheding::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON24, &CLiuliangsheding::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON26, &CLiuliangsheding::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON28, &CLiuliangsheding::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON30, &CLiuliangsheding::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON32, &CLiuliangsheding::OnBnClickedButton32)
	ON_BN_CLICKED(IDCANCEL, &CLiuliangsheding::OnBnClickedCancel)
	ON_EN_SETFOCUS(IDC_EDIT4, &CLiuliangsheding::OnEnSetfocusEdit4)
//	ON_BN_CLICKED(IDC_BUTTON8, &CLiuliangsheding::OnBnClickedButton8)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON13, &CLiuliangsheding::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CLiuliangsheding::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON16, &CLiuliangsheding::OnBnClickedButton16)
//	ON_BN_CLICKED(IDC_BUTTON10, &CLiuliangsheding::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON164, &CLiuliangsheding::OnBnClickedButton164)
	ON_BN_CLICKED(IDC_BUTTON151, &CLiuliangsheding::OnBnClickedButton151)
	ON_BN_CLICKED(IDC_BUTTON37, &CLiuliangsheding::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &CLiuliangsheding::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON93, &CLiuliangsheding::OnBnClickedButton93)
	ON_BN_CLICKED(IDC_BUTTON56, &CLiuliangsheding::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON140, &CLiuliangsheding::OnBnClickedButton140)
	ON_BN_CLICKED(IDC_BUTTON141, &CLiuliangsheding::OnBnClickedButton141)
	ON_BN_CLICKED(IDC_BUTTON142, &CLiuliangsheding::OnBnClickedButton142)
	ON_BN_CLICKED(IDC_BUTTON143, &CLiuliangsheding::OnBnClickedButton143)
	ON_BN_CLICKED(IDC_BUTTON144, &CLiuliangsheding::OnBnClickedButton144)
	ON_BN_CLICKED(IDC_BUTTON136, &CLiuliangsheding::OnBnClickedButton136)
	ON_BN_CLICKED(IDC_BUTTON137, &CLiuliangsheding::OnBnClickedButton137)
	ON_BN_CLICKED(IDC_BUTTON138, &CLiuliangsheding::OnBnClickedButton138)
	ON_BN_CLICKED(IDC_BUTTON139, &CLiuliangsheding::OnBnClickedButton139)
	ON_BN_CLICKED(IDC_BUTTON152, &CLiuliangsheding::OnBnClickedButton152)
	ON_BN_CLICKED(IDC_KAISHIDA, &CLiuliangsheding::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &CLiuliangsheding::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// CLiuliangsheding 消息处理程序


void CLiuliangsheding::OnBnClickedButton9()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double11, liuliang, 10, 100, 1);
	UpdateData(FALSE);
	for (int i = 0; i < 10; i++)
	{
		if (liuliangsd[i] == L"1")
		{
			datatestDPU[4] = liuliang[10] + liuliang[i];
			CMyPublicData::setfunc(10, 16, 10 + i, 1);
		}
	}
}


void CLiuliangsheding::OnBnClickedButton12()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double11, liuliang, 10, 100, 1);
	UpdateData(FALSE);
	for (int i = 0; i < 10; i++)
	{
		if (liuliangsd[i] == L"1")
		{
			datatestDPU[4] = liuliang[10]+liuliang[i];
			CMyPublicData::setfunc(10, 16, 10 + i, 1);
		}
	}
}


void CLiuliangsheding::OnBnClickedButton11()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double12, liuliang, 11, 100, 1);
	UpdateData(FALSE);
	for (int i = 0; i < 10; i++)
	{
		if (liuliangsd[i] == L"2")
		{
			datatestDPU[4] = liuliang[11] + liuliang[i];
			CMyPublicData::setfunc(10, 16, 10 + i, 1);
		}
	}

}


void CLiuliangsheding::OnBnClickedButton15()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double12, liuliang, 11, 100, 1);
	UpdateData(FALSE);
	for (int i = 0; i < 10; i++)
	{
		if (liuliangsd[i] == L"2")
		{
			datatestDPU[4] = liuliang[11] + liuliang[i];
			CMyPublicData::setfunc(10, 16, 10 + i, 1);
		}
	}
}


void CLiuliangsheding::OnBnClickedButton17()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double1, liuliang, 0, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[0] == L"1")
	{
		datatestDPU[4] = liuliang[0] + m_double11;
		CMyPublicData::setfunc(10, 16, 10, 1);
	}
	if (liuliangsd[0] == L"2")
	{
		datatestDPU[4] = liuliang[0] + m_double12;
		CMyPublicData::setfunc(10, 16, 10, 1);
	}
	if (liuliangsd[0] == L"3")
	{
		datatestDPU[4] = liuliang[0] + m_double13;
		CMyPublicData::setfunc(10, 16, 10, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton19()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double2, liuliang, 1, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[1] == L"1")
	{
		datatestDPU[4] = liuliang[1] + m_double11;
		CMyPublicData::setfunc(10, 16, 11, 1);
	}
	if (liuliangsd[1] == L"2")
	{
		datatestDPU[4] = liuliang[1] + m_double12;
		CMyPublicData::setfunc(10, 16, 11, 1);
	}
	if (liuliangsd[1] == L"3")
	{
		datatestDPU[4] = liuliang[1] + m_double13;
		CMyPublicData::setfunc(10, 16, 11, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton21()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double3, liuliang, 2, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[2] == L"1")
	{
		datatestDPU[4] = liuliang[2] + m_double11;
		CMyPublicData::setfunc(10, 16, 12, 1);
	}
	if (liuliangsd[2] == L"2")
	{
		datatestDPU[4] = liuliang[2] + m_double12;
		CMyPublicData::setfunc(10, 16, 12, 1);
	}
	if (liuliangsd[2] == L"3")
	{
		datatestDPU[4] = liuliang[2] + m_double13;
		CMyPublicData::setfunc(10, 16, 12, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton23()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double4, liuliang, 3, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[3] == L"1")
	{
		datatestDPU[4] = liuliang[3] + m_double11;
		CMyPublicData::setfunc(10, 16, 13, 1);
	}
	if (liuliangsd[3] == L"2")
	{
		datatestDPU[4] = liuliang[3] + m_double12;
		CMyPublicData::setfunc(10, 16, 13, 1);
	}
	if (liuliangsd[3] == L"3")
	{
		datatestDPU[4] = liuliang[3] + m_double13;
		CMyPublicData::setfunc(10, 16, 13, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton25()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double5, liuliang, 4, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[4] == L"1")
	{
		datatestDPU[4] = liuliang[4] + m_double11;
		CMyPublicData::setfunc(10, 16, 14, 1);
	}
	if (liuliangsd[4] == L"2")
	{
		datatestDPU[4] = liuliang[4] + m_double12;
		CMyPublicData::setfunc(10, 16, 14, 1);
	}
	if (liuliangsd[4] == L"3")
	{
		datatestDPU[4] = liuliang[4] + m_double13;
		CMyPublicData::setfunc(10, 16, 14, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton27()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double6, liuliang, 5, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[5] == L"1")
	{
		datatestDPU[4] = liuliang[5] + m_double11;
		CMyPublicData::setfunc(10, 16, 15, 1);
	}
	if (liuliangsd[5] == L"2")
	{
		datatestDPU[4] = liuliang[5] + m_double12;
		CMyPublicData::setfunc(10, 16, 15, 1);
	}
	if (liuliangsd[5] == L"3")
	{
		datatestDPU[4] = liuliang[5] + m_double13;
		CMyPublicData::setfunc(10, 16, 10, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton29()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double7, liuliang, 6, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[6] == L"1")
	{
		datatestDPU[4] = liuliang[6] + m_double11;
		CMyPublicData::setfunc(10, 16, 16, 1);
	}
	if (liuliangsd[6] == L"2")
	{
		datatestDPU[4] = liuliang[6] + m_double12;
		CMyPublicData::setfunc(10, 16, 16, 1);
	}
	if (liuliangsd[6] == L"3")
	{
		datatestDPU[4] = liuliang[6] + m_double13;
		CMyPublicData::setfunc(10, 16, 16, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton31()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double8, liuliang, 7, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[7] == L"1")
	{
		datatestDPU[4] = liuliang[7] + m_double11;
		CMyPublicData::setfunc(10, 16, 17, 1);
	}
	if (liuliangsd[7] == L"2")
	{
		datatestDPU[4] = liuliang[7] + m_double12;
		CMyPublicData::setfunc(10, 16, 17, 1);
	}
	if (liuliangsd[7] == L"3")
	{
		datatestDPU[4] = liuliang[7] + m_double13;
		CMyPublicData::setfunc(10, 16, 17, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton18()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double2, liuliang, 1, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[1] == L"1")
	{
		datatestDPU[4] = liuliang[1] + m_double11;
		CMyPublicData::setfunc(10, 16, 11, 1);
	}
	if (liuliangsd[1] == L"2")
	{
		datatestDPU[4] = liuliang[1] + m_double12;
		CMyPublicData::setfunc(10, 16, 11, 1);
	}
	if (liuliangsd[1] == L"3")
	{
		datatestDPU[4] = liuliang[1] + m_double13;
		CMyPublicData::setfunc(10, 16, 11, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton20()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double3, liuliang, 2, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[2] == L"1")
	{
		datatestDPU[4] = liuliang[2] + m_double11;
		CMyPublicData::setfunc(10, 16, 12, 1);
	}
	if (liuliangsd[2] == L"2")
	{
		datatestDPU[4] = liuliang[2] + m_double12;
		CMyPublicData::setfunc(10, 16, 12, 1);
	}
	if (liuliangsd[2] == L"3")
	{
		datatestDPU[4] = liuliang[2] + m_double13;
		CMyPublicData::setfunc(10, 16, 12, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton22()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double4, liuliang, 3, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[3] == L"1")
	{
		datatestDPU[4] = liuliang[3] + m_double11;
		CMyPublicData::setfunc(10, 16, 13, 1);
	}
	if (liuliangsd[3] == L"2")
	{
		datatestDPU[4] = liuliang[3] + m_double12;
		CMyPublicData::setfunc(10, 16, 13, 1);
	}
	if (liuliangsd[3] == L"3")
	{
		datatestDPU[4] = liuliang[3] + m_double13;
		CMyPublicData::setfunc(10, 16, 13, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton24()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double5, liuliang, 4, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[4] == L"1")
	{
		datatestDPU[4] = liuliang[4] + m_double11;
		CMyPublicData::setfunc(10, 16, 14, 1);
	}
	if (liuliangsd[4] == L"2")
	{
		datatestDPU[4] = liuliang[4] + m_double12;
		CMyPublicData::setfunc(10, 16, 14, 1);
	}
	if (liuliangsd[4] == L"3")
	{
		datatestDPU[4] = liuliang[4] + m_double13;
		CMyPublicData::setfunc(10, 16, 14, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton26()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double6, liuliang, 5, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[5] == L"1")
	{
		datatestDPU[4] = liuliang[5] + m_double11;
		CMyPublicData::setfunc(10, 16, 15, 1);
	}
	if (liuliangsd[5] == L"2")
	{
		datatestDPU[4] = liuliang[5] + m_double12;
		CMyPublicData::setfunc(10, 16, 15, 1);
	}
	if (liuliangsd[5] == L"3")
	{
		datatestDPU[4] = liuliang[5] + m_double13;
		CMyPublicData::setfunc(10, 16, 15, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton28()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double7, liuliang, 6, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[6] == L"1")
	{
		datatestDPU[4] = liuliang[6] + m_double11;
		CMyPublicData::setfunc(10, 16, 16, 1);
	}
	if (liuliangsd[6] == L"2")
	{
		datatestDPU[4] = liuliang[6] + m_double12;
		CMyPublicData::setfunc(10, 16, 16, 1);
	}
	if (liuliangsd[6] == L"3")
	{
		datatestDPU[4] = liuliang[6] + m_double13;
		CMyPublicData::setfunc(10, 16, 16, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton30()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double8, liuliang, 7, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[7] == L"1")
	{
		datatestDPU[4] = liuliang[7] + m_double11;
		CMyPublicData::setfunc(10, 16, 17, 1);
	}
	if (liuliangsd[7] == L"2")
	{
		datatestDPU[4] = liuliang[7] + m_double12;
		CMyPublicData::setfunc(10, 16, 17, 1);
	}
	if (liuliangsd[7] == L"3")
	{
		datatestDPU[4] = liuliang[7] + m_double13;
		CMyPublicData::setfunc(10, 16, 17, 1);
	}
}




void CLiuliangsheding::OnNMThemeChangedScrollbar1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// 该功能要求使用 Windows XP 或更高版本。
	// 符号 _WIN32_WINNT 必须 >= 0x0501。
	// TODO: 在此添加控件通知处理程序代码
	*pResult = 0;
}





//void CLiuliangsheding::OnBnClickedButton34()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	UpdateData(TRUE);
//	CInputDlg dlg;
//	CMyPublicData::calculate(m_double9, liuliang, 8, dlg, 100, 0);
//	UpdateData(FALSE);
//	datatestDPU[4] = liuliang[8];
//	CMyPublicData::setfunc(10, 16, 30, 1);
//}


//void CLiuliangsheding::OnBnClickedButton58()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	UpdateData(TRUE);
//	CInputDlg dlg;
//	CMyPublicData::calculate(m_double10, liuliang, 9, dlg, 10, 0);
//	UpdateData(FALSE);
//	datatestDPU[4] = liuliang[9];
//	CMyPublicData::setfunc(32, 16, 31, 1);
//}






void CLiuliangsheding::OnBnClickedButton32()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double1, liuliang, 0, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[0] == L"1")
	{
		datatestDPU[4] = liuliang[0] + m_double11;
		CMyPublicData::setfunc(10, 16, 10, 1);
	}
	if (liuliangsd[0] == L"2")
	{
		datatestDPU[4] = liuliang[0] + m_double12;
		CMyPublicData::setfunc(10, 16, 10, 1);
	}
	if (liuliangsd[0] == L"3")
	{
		datatestDPU[4] = liuliang[0] + m_double13;
		CMyPublicData::setfunc(10, 16, 10, 1);
	}
}


void CLiuliangsheding::OnBnClickedCancel()
{
	USES_CONVERSION;
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(liuliang[0]);
	opx.ModifyNode("num1001", str);
	str = opx.numtoString(liuliang[1]);
	opx.ModifyNode("num1002", str);
	str = opx.numtoString(liuliang[2]);
	opx.ModifyNode("num1003", str);
	str = opx.numtoString(liuliang[3]);
	opx.ModifyNode("num1004", str);
	str = opx.numtoString(liuliang[4]);
	opx.ModifyNode("num1005", str);
	str = opx.numtoString(liuliang[5]);
	opx.ModifyNode("num1006", str);
	str = opx.numtoString(liuliang[6]);
	opx.ModifyNode("num1007", str);
	str = opx.numtoString(liuliang[7]);
	opx.ModifyNode("num1008", str);
	str = opx.numtoString(liuliang[8]);
	opx.ModifyNode("num1009", str);
	str = opx.numtoString(liuliang[9]);
	opx.ModifyNode("num1010", str);
	str = opx.numtoString(liuliang[10]);
	opx.ModifyNode("num1011", str);
	str = opx.numtoString(liuliang[11]);
	opx.ModifyNode("num1012", str);
	str = opx.numtoString(liuliang[12]);
	opx.ModifyNode("num1013", str);


	str = W2A(liuliangsd[0]);
	opx.ModifyNode("num3501", str);
	str = W2A(liuliangsd[1]);
	opx.ModifyNode("num3502", str);
	str = W2A(liuliangsd[2]);
	opx.ModifyNode("num3503", str);
	str = W2A(liuliangsd[3]);
	opx.ModifyNode("num3504", str);
	str = W2A(liuliangsd[4]);
	opx.ModifyNode("num3505", str);
	str = W2A(liuliangsd[5]);
	opx.ModifyNode("num3506", str);
	str = W2A(liuliangsd[6]);
	opx.ModifyNode("num3507", str);
	str = W2A(liuliangsd[7]);
	opx.ModifyNode("num3508", str);
	str = W2A(liuliangsd[8]);
	opx.ModifyNode("num3509", str);
	str = W2A(liuliangsd[9]);
	opx.ModifyNode("num3510", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}





void CLiuliangsheding::OnEnSetfocusEdit4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CInputDlg dlg;
	CMyPublicData::calculate(m_double10, liuliang, 9, dlg, 10, 0);
	UpdateData(FALSE);

}


//void CLiuliangsheding::OnBnClickedButton8()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	datatestDPU[4] = 1;
//	CMyPublicData::setfunc(32, 16, 1, 1);
//}




BOOL CLiuliangsheding::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT4);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		UpdateData(TRUE);
		CInputDlg dlg;
		CMyPublicData::calculate(m_double1, liuliang, 0, dlg, 50, 0);
		UpdateData(FALSE);
		if (liuliangsd[0] == L"1")
		{
			datatestDPU[4] = liuliang[0] + m_double11;
			CMyPublicData::setfunc(10, 16, 10, 1);
		}
		if (liuliangsd[0] == L"2")
		{
			datatestDPU[4] = liuliang[0] + m_double12;
			CMyPublicData::setfunc(10, 16, 10, 1);
		}
		if (liuliangsd[0] == L"3")
		{
			datatestDPU[4] = liuliang[0] + m_double13;
			CMyPublicData::setfunc(10, 16, 10, 1);
		}
		return TRUE;
	}
	else
	{
		pEdit = (CEdit*)GetDlgItem(IDC_EDIT5);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		{
			UpdateData(TRUE);
			CInputDlg dlg;
			CMyPublicData::calculate(m_double2, liuliang, 1, dlg, 50, 0);
			UpdateData(FALSE);
			if (liuliangsd[1] == L"1")
			{
				datatestDPU[4] = liuliang[1] + m_double11;
				CMyPublicData::setfunc(10, 16, 11, 1);
			}
			if (liuliangsd[1] == L"2")
			{
				datatestDPU[4] = liuliang[1] + m_double12;
				CMyPublicData::setfunc(10, 16, 11, 1);
			}
			if (liuliangsd[1] == L"3")
			{
				datatestDPU[4] = liuliang[1] + m_double13;
				CMyPublicData::setfunc(10, 16, 11, 1);
			}
			return TRUE;
		}
		else
		{
			pEdit = (CEdit*)GetDlgItem(IDC_EDIT6);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				UpdateData(TRUE);
				CInputDlg dlg;
				CMyPublicData::calculate(m_double3, liuliang, 2, dlg, 50, 0);
				UpdateData(FALSE);
				if (liuliangsd[2] == L"1")
				{
					datatestDPU[4] = liuliang[2] + m_double11;
					CMyPublicData::setfunc(10, 16, 12, 1);
				}
				if (liuliangsd[2] == L"2")
				{
					datatestDPU[4] = liuliang[2] + m_double12;
					CMyPublicData::setfunc(10, 16, 12, 1);
				}
				if (liuliangsd[2] == L"3")
				{
					datatestDPU[4] = liuliang[2] + m_double13;
					CMyPublicData::setfunc(10, 16, 12, 1);
				}
				return TRUE;
			}
			else
			{
				pEdit = (CEdit*)GetDlgItem(IDC_EDIT7);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					UpdateData(TRUE);
					CInputDlg dlg;
					CMyPublicData::calculate(m_double4, liuliang, 3, dlg, 50, 0);
					UpdateData(FALSE);
					if (liuliangsd[3] == L"1")
					{
						datatestDPU[4] = liuliang[3] + m_double11;
						CMyPublicData::setfunc(10, 16, 13, 1);
					}
					if (liuliangsd[3] == L"2")
					{
						datatestDPU[4] = liuliang[3] + m_double12;
						CMyPublicData::setfunc(10, 16, 13, 1);
					}
					if (liuliangsd[3] == L"3")
					{
						datatestDPU[4] = liuliang[3] + m_double13;
						CMyPublicData::setfunc(10, 16, 13, 1);
					}
					return TRUE;
				}
				else
				{
					pEdit = (CEdit*)GetDlgItem(IDC_EDIT8);
					ASSERT(pEdit && pEdit->GetSafeHwnd());
					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
					{
						UpdateData(TRUE);
						CInputDlg dlg;
						CMyPublicData::calculate(m_double5, liuliang, 4, dlg, 50, 0);
						UpdateData(FALSE);
						if (liuliangsd[4] == L"1")
						{
							datatestDPU[4] = liuliang[4] + m_double11;
							CMyPublicData::setfunc(10, 16, 14, 1);
						}
						if (liuliangsd[4] == L"2")
						{
							datatestDPU[4] = liuliang[4] + m_double12;
							CMyPublicData::setfunc(10, 16, 14, 1);
						}
						if (liuliangsd[4] == L"3")
						{
							datatestDPU[4] = liuliang[4] + m_double13;
							CMyPublicData::setfunc(10, 16, 14, 1);
						}
						return TRUE;
					}
					else
					{
						pEdit = (CEdit*)GetDlgItem(IDC_EDIT9);
						ASSERT(pEdit && pEdit->GetSafeHwnd());
						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
						{
							UpdateData(TRUE);
							CInputDlg dlg;
							CMyPublicData::calculate(m_double6, liuliang, 5, dlg, 50, 0);
							UpdateData(FALSE);
							if (liuliangsd[5] == L"1")
							{
								datatestDPU[4] = liuliang[5] + m_double11;
								CMyPublicData::setfunc(10, 16, 15, 1);
							}
							if (liuliangsd[5] == L"2")
							{
								datatestDPU[4] = liuliang[5] + m_double12;
								CMyPublicData::setfunc(10, 16, 15, 1);
							}
							if (liuliangsd[5] == L"3")
							{
								datatestDPU[4] = liuliang[5] + m_double13;
								CMyPublicData::setfunc(10, 16, 10, 1);
							}
							return TRUE;
						}
						else
						{
							pEdit = (CEdit*)GetDlgItem(IDC_EDIT10);
							ASSERT(pEdit && pEdit->GetSafeHwnd());
							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
							{
								UpdateData(TRUE);
								CInputDlg dlg;
								CMyPublicData::calculate(m_double7, liuliang, 6, dlg, 50, 0);
								UpdateData(FALSE);
								if (liuliangsd[6] == L"1")
								{
									datatestDPU[4] = liuliang[6] + m_double11;
									CMyPublicData::setfunc(10, 16, 16, 1);
								}
								if (liuliangsd[6] == L"2")
								{
									datatestDPU[4] = liuliang[6] + m_double12;
									CMyPublicData::setfunc(10, 16, 16, 1);
								}
								if (liuliangsd[6] == L"3")
								{
									datatestDPU[4] = liuliang[6] + m_double13;
									CMyPublicData::setfunc(10, 16, 16, 1);
								}
								return TRUE;
							}
							else
							{
								pEdit = (CEdit*)GetDlgItem(IDC_EDIT11);
								ASSERT(pEdit && pEdit->GetSafeHwnd());
								if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
								{
									UpdateData(TRUE);
									CInputDlg dlg;
									CMyPublicData::calculate(m_double8, liuliang, 7, dlg, 50, 0);
									UpdateData(FALSE);
									if (liuliangsd[7] == L"1")
									{
										datatestDPU[4] = liuliang[7] + m_double11;
										CMyPublicData::setfunc(10, 16, 17, 1);
									}
									if (liuliangsd[7] == L"2")
									{
										datatestDPU[4] = liuliang[7] + m_double12;
										CMyPublicData::setfunc(10, 16, 17, 1);
									}
									if (liuliangsd[7] == L"3")
									{
										datatestDPU[4] = liuliang[7] + m_double13;
										CMyPublicData::setfunc(10, 16, 17, 1);
									}
									return TRUE;
								}
								else
								{
									pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
									ASSERT(pEdit && pEdit->GetSafeHwnd());
									if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
									{
										UpdateData(TRUE);
										CInputDlg dlg;
										CMyPublicData::calculate(m_double11, liuliang, 10, dlg, 100, 1);
										UpdateData(FALSE);
										for (int i = 0; i < 10; i++)
										{
											if (liuliangsd[i] == L"1")
											{
												datatestDPU[4] = liuliang[10] + liuliang[i];
												CMyPublicData::setfunc(10, 16, 10 + i, 1);
											}
										}
										return TRUE;
									}
									else
									{
										pEdit = (CEdit*)GetDlgItem(IDC_EDIT2);
										ASSERT(pEdit && pEdit->GetSafeHwnd());
										if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
										{
											UpdateData(TRUE);
											CInputDlg dlg;
											CMyPublicData::calculate(m_double12, liuliang, 11, dlg, 100, 1);
											UpdateData(FALSE);
											for (int i = 0; i < 10; i++)
											{
												if (liuliangsd[i] == L"2")
												{
													datatestDPU[4] = liuliang[11] + liuliang[i];
													CMyPublicData::setfunc(10, 16, 10 + i, 1);
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
												UpdateData(TRUE);
												CInputDlg dlg;
												CMyPublicData::calculate(m_double13, liuliang, 12, dlg, 100, 1);
												UpdateData(FALSE);
												for (int i = 0; i < 10; i++)
												{
													if (liuliangsd[i] == L"3")
													{
														datatestDPU[4] = liuliang[12] + liuliang[i];
														CMyPublicData::setfunc(10, 16, 10 + i, 1);
													}
												}
												return TRUE;
											}
											else
											{
												pEdit = (CEdit*)GetDlgItem(IDC_EDIT74);
												ASSERT(pEdit && pEdit->GetSafeHwnd());
												if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
												{
													UpdateData(TRUE);
													CInputDlg dlg;
													CMyPublicData::calculate(m_double9, liuliang, 8, dlg, 50, 0);
													UpdateData(FALSE);
													if (liuliangsd[8] == L"1")
													{
														datatestDPU[4] = liuliang[8] + m_double11;
														CMyPublicData::setfunc(10, 16, 18, 1);
													}
													if (liuliangsd[8] == L"2")
													{
														datatestDPU[4] = liuliang[8] + m_double12;
														CMyPublicData::setfunc(10, 16, 18, 1);
													}
													if (liuliangsd[8] == L"3")
													{
														datatestDPU[4] = liuliang[8] + m_double13;
														CMyPublicData::setfunc(10, 16, 18, 1);
													}
													return TRUE;
												}
												else
												{
													pEdit = (CEdit*)GetDlgItem(IDC_EDIT75);
													ASSERT(pEdit && pEdit->GetSafeHwnd());
													if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
													{
														UpdateData(TRUE);
														CInputDlg dlg;
														CMyPublicData::calculate(m_double10, liuliang, 9, dlg, 50, 0);
														UpdateData(FALSE);
														if (liuliangsd[9] == L"1")
														{
															datatestDPU[4] = liuliang[9] + m_double11;
															CMyPublicData::setfunc(10, 16, 19, 1);
														}
														if (liuliangsd[9] == L"2")
														{
															datatestDPU[4] = liuliang[9] + m_double12;
															CMyPublicData::setfunc(10, 16, 19, 1);
														}
														if (liuliangsd[9] == L"3")
														{
															datatestDPU[4] = liuliang[9] + m_double13;
															CMyPublicData::setfunc(10, 16, 19, 1);
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

				UpdateData(FALSE);
				return CDialogEx::PreTranslateMessage(pMsg);
			}
		}
	}
}

void CLiuliangsheding::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void CLiuliangsheding::ReSize()
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

BOOL CLiuliangsheding::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num1501", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num1502", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num1503", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num1504", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num1505", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num1506", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC14)->SetWindowText(cstr);
	opx.QueryNode_Text("num1507", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();

	GetDlgItem(IDC_BUTTON14)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON13)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON152)->SetWindowText(zhendong[2]);

	GetDlgItem(IDC_BUTTON16)->SetWindowText(liuliangsd[0]);
	GetDlgItem(IDC_BUTTON37)->SetWindowText(liuliangsd[1]);
	GetDlgItem(IDC_BUTTON38)->SetWindowText(liuliangsd[2]);
	GetDlgItem(IDC_BUTTON93)->SetWindowText(liuliangsd[3]);
	GetDlgItem(IDC_BUTTON56)->SetWindowText(liuliangsd[4]);
	GetDlgItem(IDC_BUTTON140)->SetWindowText(liuliangsd[5]);
	GetDlgItem(IDC_BUTTON141)->SetWindowText(liuliangsd[6]);
	GetDlgItem(IDC_BUTTON142)->SetWindowText(liuliangsd[7]);
	GetDlgItem(IDC_BUTTON143)->SetWindowText(liuliangsd[8]);
	GetDlgItem(IDC_BUTTON144)->SetWindowText(liuliangsd[9]);

	if (quanxian)
	{
		GetDlgItem(IDC_BUTTON16)->ShowWindow(true);
		GetDlgItem(IDC_BUTTON37)->ShowWindow(true);
		GetDlgItem(IDC_BUTTON38)->ShowWindow(true);
		GetDlgItem(IDC_BUTTON93)->ShowWindow(true);
		GetDlgItem(IDC_BUTTON56)->ShowWindow(true);
		GetDlgItem(IDC_BUTTON140)->ShowWindow(true);
		GetDlgItem(IDC_BUTTON141)->ShowWindow(true);
		GetDlgItem(IDC_BUTTON142)->ShowWindow(true);
		GetDlgItem(IDC_BUTTON143)->ShowWindow(true);
		GetDlgItem(IDC_BUTTON144)->ShowWindow(true);
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
		m_tingzhi.SetFaceColor(RGB(0, 255,127));
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



	int nMargin = 8;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT1)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT1)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);

	GetDlgItem(IDC_EDIT4)->GetClientRect(&rect);
	OffsetRect(&rect, 0, 15);
	GetDlgItem(IDC_EDIT4)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT5)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT6)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT7)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT8)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT9)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT10)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT11)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT74)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT75)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CLiuliangsheding::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON13)->GetWindowText(zhendong[1]);
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
		GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"2")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
				datatestDPU[4] = liuliang[11] + liuliang[i];
				CMyPublicData::setfunc(10, 16, 10 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON13)->GetWindowText(zhendong[1]);
}


void CLiuliangsheding::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON14)->GetWindowText(zhendong[0]);
	if (zhendong[0]==L"ON")
	{
		for (int i=0;i<10;i++)
		{
			if (liuliangsd[i]==L"1")
			{
				datatestDPU[4] = 0;
				CMyPublicData::setfunc(10, 16, 20+i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON14)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"1")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
				datatestDPU[4] = liuliang[10] + liuliang[i];
				CMyPublicData::setfunc(10, 16, 10 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON14)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON14)->GetWindowText(zhendong[0]);
}


//void CLiuliangsheding::OnBnClickedButton49()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	/*tongdao1 = 10;
//	datatestDPU[4] = 1;
//	CMyPublicData::setfunc(10, 16, 20, 1);*/
//}


void CLiuliangsheding::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON16)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
		liuliangsd[0] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr==L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
		liuliangsd[0] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
		liuliangsd[0] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
		liuliangsd[0] = cstr;
		UpdateData(FALSE);
		return;
	}
}


//void CLiuliangsheding::OnBnClickedButton41()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	tongdao1 = 20;
//	datatestDPU[4] = 1;
//	CMyPublicData::setfunc(10, 16, 20, 1);
//}


//void CLiuliangsheding::OnBnClickedButton10()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	datatestDPU[4] = 0;
//	CMyPublicData::setfunc(32, 16, 1, 1);
//}


void CLiuliangsheding::OnBnClickedButton164()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double13, liuliang, 12, 100, 1);
	UpdateData(FALSE);
	for (int i = 0; i < 10; i++)
	{
		if (liuliangsd[i] == L"3")
		{
			datatestDPU[4] = liuliang[12] + liuliang[i];
			CMyPublicData::setfunc(10, 16, 10 + i, 1);
		}
	}
}


void CLiuliangsheding::OnBnClickedButton151()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double13, liuliang, 12, 100, 1);
	UpdateData(FALSE);
	for (int i = 0; i < 10; i++)
	{
		if (liuliangsd[i] == L"3")
		{
			datatestDPU[4] = liuliang[12] + liuliang[i];
			CMyPublicData::setfunc(10, 16, 10 + i, 1);
		}
	}
}


void CLiuliangsheding::OnBnClickedButton37()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON37)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON37)->SetWindowText(cstr);
		liuliangsd[1] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON37)->SetWindowText(cstr);
		liuliangsd[1] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON37)->SetWindowText(cstr);
		liuliangsd[1] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON37)->SetWindowText(cstr);
		liuliangsd[1] = cstr;
		UpdateData(FALSE);
		return;
	}
}


void CLiuliangsheding::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON38)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON38)->SetWindowText(cstr);
		liuliangsd[2] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON38)->SetWindowText(cstr);
		liuliangsd[2] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON38)->SetWindowText(cstr);
		liuliangsd[2] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON38)->SetWindowText(cstr);
		liuliangsd[2] = cstr;
		UpdateData(FALSE);
		return;
	}
}


void CLiuliangsheding::OnBnClickedButton93()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON93)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON93)->SetWindowText(cstr);
		liuliangsd[3] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON93)->SetWindowText(cstr);
		liuliangsd[3] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON93)->SetWindowText(cstr);
		liuliangsd[3] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON93)->SetWindowText(cstr);
		liuliangsd[3] = cstr;
		UpdateData(FALSE);
		return;
	}
}


void CLiuliangsheding::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON56)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON56)->SetWindowText(cstr);
		liuliangsd[4] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON56)->SetWindowText(cstr);
		liuliangsd[4] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON56)->SetWindowText(cstr);
		liuliangsd[4] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON56)->SetWindowText(cstr);
		liuliangsd[4] = cstr;
		UpdateData(FALSE);
		return;
	}
}


void CLiuliangsheding::OnBnClickedButton140()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON140)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON140)->SetWindowText(cstr);
		liuliangsd[5] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON140)->SetWindowText(cstr);
		liuliangsd[5] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON140)->SetWindowText(cstr);
		liuliangsd[5] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON140)->SetWindowText(cstr);
		liuliangsd[5] = cstr;
		UpdateData(FALSE);
		return;
	}
}


void CLiuliangsheding::OnBnClickedButton141()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON141)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON141)->SetWindowText(cstr);
		liuliangsd[6] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON141)->SetWindowText(cstr);
		liuliangsd[6] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON141)->SetWindowText(cstr);
		liuliangsd[6] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON141)->SetWindowText(cstr);
		liuliangsd[6] = cstr;
		UpdateData(FALSE);
		return;
	}
}


void CLiuliangsheding::OnBnClickedButton142()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON142)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON142)->SetWindowText(cstr);
		liuliangsd[7] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON142)->SetWindowText(cstr);
		liuliangsd[7] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON142)->SetWindowText(cstr);
		liuliangsd[7] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON142)->SetWindowText(cstr);
		liuliangsd[7] = cstr;
		UpdateData(FALSE);
		return;
	}
}


void CLiuliangsheding::OnBnClickedButton143()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON143)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON143)->SetWindowText(cstr);
		liuliangsd[8] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON143)->SetWindowText(cstr);
		liuliangsd[8] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON143)->SetWindowText(cstr);
		liuliangsd[8] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON143)->SetWindowText(cstr);
		liuliangsd[8] = cstr;
		UpdateData(FALSE);
		return;
	}
}


void CLiuliangsheding::OnBnClickedButton144()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString cstr;
	GetDlgItem(IDC_BUTTON144)->GetWindowText(cstr);
	if (cstr == L"OFF")
	{
		cstr = L"1";
		GetDlgItem(IDC_BUTTON144)->SetWindowText(cstr);
		liuliangsd[9] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"1")
	{
		cstr = L"2";
		GetDlgItem(IDC_BUTTON144)->SetWindowText(cstr);
		liuliangsd[9] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"2")
	{
		cstr = L"3";
		GetDlgItem(IDC_BUTTON144)->SetWindowText(cstr);
		liuliangsd[9] = cstr;
		UpdateData(FALSE);
		return;
	}
	if (cstr == L"3")
	{
		cstr = L"OFF";
		GetDlgItem(IDC_BUTTON144)->SetWindowText(cstr);
		liuliangsd[9] = cstr;
		UpdateData(FALSE);
		return;
	}
}


void CLiuliangsheding::OnBnClickedButton136()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double9, liuliang, 8, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[8] == L"1")
	{
		datatestDPU[4] = liuliang[8] + m_double11;
		CMyPublicData::setfunc(10, 16, 18, 1);
	}
	if (liuliangsd[8] == L"2")
	{
		datatestDPU[4] = liuliang[8] + m_double12;
		CMyPublicData::setfunc(10, 16, 18, 1);
	}
	if (liuliangsd[8] == L"3")
	{
		datatestDPU[4] = liuliang[8] + m_double13;
		CMyPublicData::setfunc(10, 16, 18, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton137()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double9, liuliang, 8, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[8] == L"1")
	{
		datatestDPU[4] = liuliang[8] + m_double11;
		CMyPublicData::setfunc(10, 16, 18, 1);
	}
	if (liuliangsd[8] == L"2")
	{
		datatestDPU[4] = liuliang[8] + m_double12;
		CMyPublicData::setfunc(10, 16, 18, 1);
	}
	if (liuliangsd[8] == L"3")
	{
		datatestDPU[4] = liuliang[8] + m_double13;
		CMyPublicData::setfunc(10, 16, 18, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton138()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::add(m_double10, liuliang, 9, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[9] == L"1")
	{
		datatestDPU[4] = liuliang[9] + m_double11;
		CMyPublicData::setfunc(10, 16, 19, 1);
	}
	if (liuliangsd[9] == L"2")
	{
		datatestDPU[4] = liuliang[9] + m_double12;
		CMyPublicData::setfunc(10, 16, 19, 1);
	}
	if (liuliangsd[9] == L"3")
	{
		datatestDPU[4] = liuliang[9] + m_double13;
		CMyPublicData::setfunc(10, 16, 19, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton139()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CMyPublicData::reduce(m_double10, liuliang, 9, 50, 0);
	UpdateData(FALSE);
	if (liuliangsd[9] == L"1")
	{
		datatestDPU[4] = liuliang[9] + m_double11;
		CMyPublicData::setfunc(10, 16, 19, 1);
	}
	if (liuliangsd[9] == L"2")
	{
		datatestDPU[4] = liuliang[9] + m_double12;
		CMyPublicData::setfunc(10, 16, 19, 1);
	}
	if (liuliangsd[9] == L"3")
	{
		datatestDPU[4] = liuliang[9] + m_double13;
		CMyPublicData::setfunc(10, 16, 19, 1);
	}
}


void CLiuliangsheding::OnBnClickedButton152()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON152)->GetWindowText(zhendong[2]);
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
		GetDlgItem(IDC_BUTTON152)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"3")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
				datatestDPU[4] = liuliang[12] + liuliang[i];
				CMyPublicData::setfunc(10, 16, 10 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON152)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON152)->GetWindowText(zhendong[2]);
}




void CLiuliangsheding::OnBnClickedKaishida()
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


void CLiuliangsheding::OnBnClickedTingzhida()
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
