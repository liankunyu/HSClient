// Blingmindu.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Blingmindu.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "Liuliangsheding.h"
#include "rlingmindu.h"
#include "hunselingmindu.h"
#include "Mianji.h"
#include "Yansemingan.h"
#include "Famenceshi.h"
#include "Qinghui.h"
#include "Moshixuanze.h"
#include "Glingmindu.h"
#include "XMLHelper.h"
#include "BFEN.h"

// Blingmindu 对话框

IMPLEMENT_DYNAMIC(Blingmindu, CDialogEx)

Blingmindu::Blingmindu(CWnd* pParent /*=NULL*/)
	: CDialogEx(Blingmindu::IDD, pParent)
	, m_double_1_edit(blingmin[0])
	, m_double_2_edit(blingmin[1])
	, m_double_3_edit(blingmin[2])
	, m_double_4_edit(blingmin[3])
	, m_double_5_edit(blingmin[4])
	, m_double_6_edit(blingmin[5])
	, m_double_7_edit(blingmin[6])
	, m_double_8_edit(blingmin[7])
	, m_double_9_edit(blingmin[8])
	, m_double_10_edit(blingmin[9])
	, m_double_11_edit(blingmin[10])
	, m_double_12_edit(blingmin[11])
{

}

Blingmindu::~Blingmindu()
{
}

void Blingmindu::DoDataExchange(CDataExchange* pDX)
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
	//DDX_Text(pDX, IDC_STATIC1, m_static1);
	//DDX_Text(pDX, IDC_STATIC2, m_static2);
	//DDX_Text(pDX, IDC_KAISHIDA_BUTTON, m_static3);
	//DDX_Text(pDX, IDC_TINGZHIDA_BUTTON, m_static4);
	//DDX_Text(pDX, IDC_STATIC3, m_static5);
	//DDX_Text(pDX, IDC_STATIC4, m_static6);
	//DDX_Text(pDX, IDC_STATIC5, m_static7);
	//DDX_Text(pDX, IDC_STATIC6, m_static8);
	//DDX_Text(pDX, IDC_STATIC7, m_static9);
	//DDX_Text(pDX, IDC_STATIC8, m_static10);
	//DDX_Text(pDX, IDC_RMIN_BUTTON, m_static11);
	//DDX_Text(pDX, IDC_GMIN_BUTTON, m_static12);
	//DDX_Text(pDX, IDC_HUNMIN_BUTTON, m_static14);
	//DDX_Text(pDX, IDCANCEL, m_static15);
	//DDX_Text(pDX, IDC_STATIC9, m_static16);
	DDX_Text(pDX, IDC_5_EDIT2, m_double_9_edit);
	DDX_Text(pDX, IDC_6_EDIT2, m_double_10_edit);
	DDX_Text(pDX, IDC_7_EDIT2, m_double_11_edit);
	DDX_Text(pDX, IDC_8_EDIT2, m_double_12_edit);
	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA, m_tingzhi);
	DDX_Control(pDX, IDC_1_EDIT, m_edit1);
}


BEGIN_MESSAGE_MAP(Blingmindu, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON34, &Blingmindu::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON36, &Blingmindu::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON38, &Blingmindu::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON40, &Blingmindu::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON42, &Blingmindu::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON44, &Blingmindu::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON46, &Blingmindu::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON48, &Blingmindu::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON33, &Blingmindu::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON35, &Blingmindu::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON37, &Blingmindu::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON39, &Blingmindu::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON41, &Blingmindu::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON43, &Blingmindu::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON45, &Blingmindu::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON47, &Blingmindu::OnBnClickedButton47)
	//ON_BN_CLICKED(IDC_LIULIANG_BUTTON, &Blingmindu::OnBnClickedLiuliangButton)
	//ON_BN_CLICKED(IDC_LINGMINDU_BUTTON, &Blingmindu::OnBnClickedLingminduButton)
	//ON_BN_CLICKED(IDC_MIANJI_BUTTON, &Blingmindu::OnBnClickedMianjiButton)
	//ON_BN_CLICKED(IDC_YANSE_BUTTON, &Blingmindu::OnBnClickedYanseButton)
	//ON_BN_CLICKED(IDC_FAMEN_BUTTON, &Blingmindu::OnBnClickedFamenButton)
	//ON_BN_CLICKED(IDC_QINGHUI_BUTTON, &Blingmindu::OnBnClickedQinghuiButton)
	//ON_BN_CLICKED(IDC_MOSHI_BUTTON, &Blingmindu::OnBnClickedMoshiButton)
//	ON_BN_CLICKED(IDC_RMIN_BUTTON, &Blingmindu::OnBnClickedRminButton)
//	ON_BN_CLICKED(IDC_GMIN_BUTTON, &Blingmindu::OnBnClickedGminButton)
//	ON_BN_CLICKED(IDC_HUNMIN_BUTTON, &Blingmindu::OnBnClickedHunminButton)
//	ON_BN_CLICKED(IDC_KAISHIDA_BUTTON, &Blingmindu::OnBnClickedKaishidaButton)
//	ON_BN_CLICKED(IDC_TINGZHIDA_BUTTON, &Blingmindu::OnBnClickedTingzhidaButton)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &Blingmindu::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON161, &Blingmindu::OnBnClickedButton161)
	ON_BN_CLICKED(IDC_BUTTON167, &Blingmindu::OnBnClickedButton167)
	ON_BN_CLICKED(IDC_BUTTON164, &Blingmindu::OnBnClickedButton164)
	ON_BN_CLICKED(IDC_BUTTON168, &Blingmindu::OnBnClickedButton168)
	ON_BN_CLICKED(IDC_BUTTON165, &Blingmindu::OnBnClickedButton165)
	ON_BN_CLICKED(IDC_BUTTON169, &Blingmindu::OnBnClickedButton169)
	ON_BN_CLICKED(IDC_BUTTON166, &Blingmindu::OnBnClickedButton166)
	ON_BN_CLICKED(IDC_BUTTON170, &Blingmindu::OnBnClickedButton170)
	ON_BN_CLICKED(IDC_BFEN_BUTTON, &Blingmindu::OnBnClickedBfenButton)
	ON_BN_CLICKED(IDC_KAISHIDA, &Blingmindu::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &Blingmindu::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// Blingmindu 消息处理程序

void Blingmindu::OnBnClickedButton34()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_1_edit++;          //编辑框相关联变量+1
	if (0 <= m_double_1_edit&& m_double_1_edit <= 245)  //判断是否超出范围
	{
		UpdateData(FALSE);                  //将修改值在界面实时更新
		blingmin[0] = m_double_1_edit;      //将编辑框的值传给blingmin全局变量，用于其他功能界面、保存、下发
	}
	else
	{
		m_double_1_edit--;   //如果值超出范围，恢复原值
		UpdateData(FALSE);      //更新界面变量
		blingmin[0] = m_double_1_edit;
	}
	if (addSW==1)                  //利用addSW判断使用的是第几种算法，=1为第一种算法
	{
		for (int i = 0; i < 10; i++)          //由于灵敏度分为三组数据，blingmin[0]对应的是前面10个相机中mod[1-20]=="1"的B灵敏度，所以使用for循环进行判断 
		{
			if (modsd[2 * i] == L"1")       
			{
				datatestDPU[4] = blingmin[0] + blingminf[i];     //B灵敏度值由blingmin+blingminf组成，然后将B灵敏度赋值给datatestDPU数组，下发到相应的相机
				CMyPublicData::setfunc(32 + 2 * i, 16, 68, 1);   //利用setfunc函数下发B灵敏度数据，setfunc（a,b,c,d）;其中a,b,c,d四个参数 a是代表设备号：10是主板，32-51是相机设备号； b是功能码：3表示读操作，16表示写操作； c是起始地址，d是从c地址开始发送多少位数据。setfunc(32,16,1,2)表示向32号相机的地址1开始（即地址1、2）发送两个数据。
			}
		}
	}
	if (addSW==2)                     //addSW=2代表第二种算法
	{
		for (int i = 0; i < 10; i++)   //循环向前相机发送指令
		{
			if (modsd[2 * i] == L"1")  //判断前相机中哪个相机属于第一组别
			{
				datatestDPU[4] = blingmin[0] + blingminf[i];    //合成灵敏度
				CMyPublicData::setfunc(32 + 2 * i, 16, 355, 1); //下发灵敏度
			}
		}
	}
}




void Blingmindu::OnBnClickedButton36()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_2_edit++;
	if (0 <= m_double_2_edit&& m_double_2_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[1] = m_double_2_edit;
	}
	else
	{
		m_double_2_edit--;
		UpdateData(FALSE);
		blingmin[1] = m_double_2_edit;
	}
	if (addSW==1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = blingmin[1] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW==2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = blingmin[1] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 356, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton38()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_3_edit++;
	if (0 <= m_double_3_edit&& m_double_3_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[2] = m_double_3_edit;
	}
	else
	{
		m_double_3_edit--;
		UpdateData(FALSE);
		blingmin[2] = m_double_3_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = blingmin[2] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 68, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = blingmin[2] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 355, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton40()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_4_edit++;
	if (0 <= m_double_4_edit&& m_double_4_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[3] = m_double_4_edit;
	}
	else
	{
		m_double_4_edit--;
		UpdateData(FALSE);
		blingmin[3] = m_double_4_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = blingmin[3] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = blingmin[3] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 356, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton42()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_5_edit++;
	if (0 <= m_double_5_edit&& m_double_5_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[4] = m_double_5_edit;
	}
	else
	{
		m_double_5_edit--;
		UpdateData(FALSE);
		blingmin[4] = m_double_5_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = blingmin[4] + blingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 68, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = blingmin[4] + blingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 355, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton44()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_6_edit++;
	if (0 <= m_double_6_edit&& m_double_6_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[5] = m_double_6_edit;
	}
	else
	{
		m_double_6_edit--;
		UpdateData(FALSE);
		blingmin[5] = m_double_6_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = blingmin[5] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = blingmin[5] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 356, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton46()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_7_edit++;
	if (0 <= m_double_7_edit&& m_double_7_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[6] = m_double_7_edit;
	}
	else
	{
		m_double_7_edit--;
		UpdateData(FALSE);
		blingmin[6] = m_double_7_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = blingmin[6] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 68, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = blingmin[6] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 355, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton48()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_8_edit++;
	if (0 <= m_double_8_edit&& m_double_8_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[7] = m_double_8_edit;
	}
	else
	{
		m_double_8_edit--;
		UpdateData(FALSE);
		blingmin[7] = m_double_8_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = blingmin[7] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = blingmin[7] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 356, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton33()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_1_edit--;
	if (0 <= m_double_1_edit&& m_double_1_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[0] = m_double_1_edit;
	}
	else
	{
		m_double_1_edit++;
		UpdateData(FALSE);
		blingmin[0] = m_double_1_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = blingmin[0] + blingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 68, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = blingmin[0] + blingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 355, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton35()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_2_edit--;
	if (0 <= m_double_2_edit&& m_double_2_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[1] = m_double_2_edit;
	}
	else
	{
		m_double_2_edit++;
		UpdateData(FALSE);
		blingmin[1] = m_double_2_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = blingmin[1] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				datatestDPU[4] = blingmin[1] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 356, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton37()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_3_edit--;
	if (0 <= m_double_3_edit&& m_double_3_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[2] = m_double_3_edit;
	}
	else
	{
		m_double_3_edit++;
		UpdateData(FALSE);
		blingmin[2] = m_double_3_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = blingmin[2] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 68, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = blingmin[2] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 355, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton39()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_4_edit--;
	if (0 <= m_double_4_edit&& m_double_4_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[3] = m_double_4_edit;
	}
	else
	{
		m_double_4_edit++;
		UpdateData(FALSE);
		blingmin[3] = m_double_4_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = blingmin[3] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"1")
			{
				datatestDPU[4] = blingmin[3] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 356, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton41()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_5_edit--;
	if (0 <= m_double_5_edit&& m_double_5_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[4] = m_double_5_edit;
	}
	else
	{
		m_double_5_edit++;
		UpdateData(FALSE);
		blingmin[4] = m_double_5_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = blingmin[4] + blingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 68, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = blingmin[4] + blingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 355, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton43()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_6_edit--;
	if (0 <= m_double_6_edit&& m_double_6_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[5] = m_double_6_edit;
	}
	else
	{
		m_double_6_edit++;
		UpdateData(FALSE);
		blingmin[5] = m_double_6_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = blingmin[5] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"2")
			{
				datatestDPU[4] = blingmin[5] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 356, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton45()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_7_edit--;
	if (0 <= m_double_7_edit&& m_double_7_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[6] = m_double_7_edit;
	}
	else
	{
		m_double_7_edit++;
		UpdateData(FALSE);
		blingmin[6] = m_double_7_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = blingmin[6] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 68, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = blingmin[6] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 355, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton47()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_8_edit--;
	if (0 <= m_double_8_edit&& m_double_8_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[7] = m_double_8_edit;
	}
	else
	{
		m_double_8_edit++;
		UpdateData(FALSE);
		blingmin[7] = m_double_8_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = blingmin[7] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"2")
			{
				datatestDPU[4] = blingmin[7] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 356, 1);
			}
		}
	}
}



//void Blingmindu::OnBnClickedLiuliangButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	CLiuliangsheding liuliang1;
//	liuliang1.DoModal();
//}
//
//
//void Blingmindu::OnBnClickedLingminduButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	rlingmindu rlingmin1;
//	rlingmin1.DoModal();
//}
//
//
//void Blingmindu::OnBnClickedMianjiButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	Mianji mianji1;
//	mianji1.DoModal();
//}
//
//
//void Blingmindu::OnBnClickedYanseButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	Yansemingan yanse1;
//	yanse1.DoModal();
//}
//
//
//void Blingmindu::OnBnClickedFamenButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	Famenceshi famen1;
//	famen1.DoModal();
//}
//
//
//void Blingmindu::OnBnClickedQinghuiButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	Qinghui qinghui1;
//	qinghui1.DoModal();
//}
//
//
//void Blingmindu::OnBnClickedMoshiButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	Moshixuanze moshi1;
//	moshi1.DoModal();
//}


//void Blingmindu::OnBnClickedRminButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	rlingmindu rlingmin1;
//	rlingmin1.DoModal();
//	CDialogEx::OnCancel();
//}


//void Blingmindu::OnBnClickedGminButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	Glingmindu glingmin1;
//	glingmin1.DoModal();
//	CDialogEx::OnCancel();
//}


//void Blingmindu::OnBnClickedHunminButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	hunselingmindu hunse1;
//	hunse1.DoModal();
//	CDialogEx::OnCancel();
//}


BOOL Blingmindu::PreTranslateMessage(MSG* pMsg)         //此函数主要功能适用于判断是否点击了编辑框，如果点击了编辑框执行函数中的程序，如果点击的不是编辑框则不反应
{
	// TODO: 在此添加专用代码和/或调用基类

	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_1_EDIT);    //得到IDC_1_EDIT 编辑框控件的指针
	ASSERT(pEdit && pEdit->GetSafeHwnd());           
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)  //如果点击了 IDC_1_EDIT 编辑框
	{
		CInputDlg dlg;               //创建输入计算器对象
		dlg.ValueMax = 245;         //计算器上限值
		dlg.ValueMin = 0;           //计算器下限值
		if (dlg.DoModal() == IDOK)  //打开计算器
		{
			UpdateData(TRUE);  
			m_double_1_edit = _wtof(dlg.ValueShow);  //将计算器的数值赋值给 IDC_1_EDIT 编辑框相关联的变量
			UpdateData(FALSE);             
			blingmin[0] = m_double_1_edit;            //将值赋值给blingmin[0]
		}
		if (addSW == 1)
		{
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = blingmin[0] + blingminf[i];      //每一次更改编辑框的值都需要想发到下位机，做到实时更新数据
					CMyPublicData::setfunc(32 + 2 * i, 16, 68, 1);
				}
			}
		}
		if (addSW == 2)
		{
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i] == L"1")
				{
					datatestDPU[4] = blingmin[0] + blingminf[i];
					CMyPublicData::setfunc(32 + 2 * i, 16, 355, 1);
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
				blingmin[1] = m_double_2_edit;
			}
			if (addSW == 1)
			{
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i] == L"1")
					{
						datatestDPU[4] = blingmin[1] + blingminf[10 + i];
						CMyPublicData::setfunc(32 + 2 * i, 16, 69, 1);
					}
				}
			}
			if (addSW == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i] == L"1")
					{
						datatestDPU[4] = blingmin[1] + blingminf[10 + i];
						CMyPublicData::setfunc(32 + 2 * i, 16, 356, 1);
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
					blingmin[2] = m_double_3_edit;
				}
				if (addSW == 1)
				{
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = blingmin[2] + blingminf[20 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 68, 1);
						}
					}
				}
				if (addSW == 2)
				{
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"1")
						{
							datatestDPU[4] = blingmin[2] + blingminf[20 + i];
							CMyPublicData::setfunc(33 + 2 * i, 16, 355, 1);
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
						blingmin[3] = m_double_4_edit;
					}
					if (addSW == 1)
					{
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i + 1] == L"1")
							{
								datatestDPU[4] = blingmin[3] + blingminf[30 + i];
								CMyPublicData::setfunc(33 + 2 * i, 16, 69, 1);
							}
						}
					}
					if (addSW == 2)
					{
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i + 1] == L"1")
							{
								datatestDPU[4] = blingmin[3] + blingminf[30 + i];
								CMyPublicData::setfunc(33 + 2 * i, 16, 356, 1);
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
							blingmin[4] = m_double_5_edit;
						}
						if (addSW == 1)
						{
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = blingmin[4] + blingminf[i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 68, 1);
								}
							}
						}
						if (addSW == 2)
						{
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i] == L"2")
								{
									datatestDPU[4] = blingmin[4] + blingminf[i];
									CMyPublicData::setfunc(32 + 2 * i, 16, 355, 1);
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
								blingmin[5] = m_double_6_edit;
							}
							if (addSW == 1)
							{
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i] == L"2")
									{
										datatestDPU[4] = blingmin[5] + blingminf[10 + i];
										CMyPublicData::setfunc(32 + 2 * i, 16, 69, 1);
									}
								}
							}
							if (addSW == 2)
							{
								for (int i = 0; i < 10; i++)
								{
									if (modsd[2 * i] == L"2")
									{
										datatestDPU[4] = blingmin[5] + blingminf[10 + i];
										CMyPublicData::setfunc(32 + 2 * i, 16, 356, 1);
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
									blingmin[6] = m_double_7_edit;
								}
								if (addSW == 1)
								{
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = blingmin[6] + blingminf[20 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 68, 1);
										}
									}
								}
								if (addSW == 2)
								{
									for (int i = 0; i < 10; i++)
									{
										if (modsd[2 * i + 1] == L"2")
										{
											datatestDPU[4] = blingmin[6] + blingminf[20 + i];
											CMyPublicData::setfunc(33 + 2 * i, 16, 355, 1);
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
										blingmin[7] = m_double_8_edit;
									}
									if (addSW == 1)
									{
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i + 1] == L"2")
											{
												datatestDPU[4] = blingmin[7] + blingminf[30 + i];
												CMyPublicData::setfunc(33 + 2 * i, 16, 69, 1);
											}
										}
									}
									if (addSW == 2)
									{
										for (int i = 0; i < 10; i++)
										{
											if (modsd[2 * i + 1] == L"2")
											{
												datatestDPU[4] = blingmin[7] + blingminf[30 + i];
												CMyPublicData::setfunc(33 + 2 * i, 16, 356, 1);
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
											blingmin[8] = m_double_9_edit;
										}
										if (addSW == 1)
										{
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = blingmin[8] + blingminf[i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 68, 1);
												}
											}
										}
										if (addSW == 2)
										{
											for (int i = 0; i < 10; i++)
											{
												if (modsd[2 * i] == L"3")
												{
													datatestDPU[4] = blingmin[8] + blingminf[i];
													CMyPublicData::setfunc(32 + 2 * i, 16, 355, 1);
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
												blingmin[9] = m_double_10_edit;
											}
											if (addSW == 1)
											{
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i] == L"3")
													{
														datatestDPU[4] = blingmin[9] + blingminf[10 + i];
														CMyPublicData::setfunc(32 + 2 * i, 16, 69, 1);
													}
												}
											}
											if (addSW == 2)
											{
												for (int i = 0; i < 10; i++)
												{
													if (modsd[2 * i] == L"3")
													{
														datatestDPU[4] = blingmin[9] + blingminf[10 + i];
														CMyPublicData::setfunc(32 + 2 * i, 16, 356, 1);
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
													blingmin[10] = m_double_11_edit;
												}
												if (addSW == 1)
												{
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = blingmin[10] + blingminf[20 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 68, 1);
														}
													}
												}
												if (addSW == 2)
												{
													for (int i = 0; i < 10; i++)
													{
														if (modsd[2 * i + 1] == L"3")
														{
															datatestDPU[4] = blingmin[10] + blingminf[20 + i];
															CMyPublicData::setfunc(33 + 2 * i, 16, 355, 1);
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
														blingmin[11] = m_double_12_edit;
													}
													if (addSW == 1)
													{
														for (int i = 0; i < 10; i++)
														{
															if (modsd[2 * i + 1] == L"3")
															{
																datatestDPU[4] = blingmin[11] + blingminf[30 + i];
																CMyPublicData::setfunc(33 + 2 * i, 16, 69, 1);
															}
														}
													}
													if (addSW == 2)
													{
														for (int i = 0; i < 10; i++)
														{
															if (modsd[2 * i + 1] == L"3")
															{
																datatestDPU[4] = blingmin[11] + blingminf[30 + i];
																CMyPublicData::setfunc(33 + 2 * i, 16, 356, 1);
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


void Blingmindu::OnSize(UINT nType, int cx, int cy)     //用于控制窗体大小
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL Blingmindu::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;                                  //语言控制，通过xml文件更改语言
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num0101", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num0102", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BFEN_BUTTON)->SetWindowText(cstr);
	opx.QueryNode_Text("num0103", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num0104", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num0105", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num0106", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num0107", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num0108", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num0109", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num0110", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num0111", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num0112", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);

	if (quanxian)
	{
		GetDlgItem(IDC_BFEN_BUTTON)->ShowWindow(true);
	}
	if (kaishida)
	{
		m_kaishi.m_bTransparent = FALSE;
		m_kaishi.m_bDontUseWinXPTheme = TRUE;
		m_kaishi.SetFaceColor(RGB(0, 255, 127));
		m_tingzhi.m_bTransparent = FALSE;
		m_tingzhi.m_bDontUseWinXPTheme = TRUE;
		m_tingzhi.SetFaceColor(RGB(255, 215,0));
		kaishida = true;
	}
	else
	{
		m_tingzhi.m_bTransparent = FALSE;
		m_tingzhi.m_bDontUseWinXPTheme = TRUE;
		m_tingzhi.SetFaceColor(RGB(0,255,127));
		m_kaishi.m_bTransparent = FALSE;
		m_kaishi.m_bDontUseWinXPTheme = TRUE;
		m_kaishi.SetFaceColor(RGB(255,215,0));
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


void Blingmindu::ReSize()
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

//void Blingmindu::OnBnClickedKaishidaButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	////static uint16_t datatestDPU[200] = { 32,3,0,10,0,0,0,145,0,0,0,0,0,0 };//10进制的原始命令
//	//datatestDPU[0] = 32;
//	//datatestDPU[2] = 60;
//	//datatestDPU[12] = blingmin[0];
//	//datatestDPU[13] = blingmin[1];
//
//	//CMyPublicData::writeholdreg();
//}










void Blingmindu::OnBnClickedCancel()
{
	
	string str;
	opXML opx("lasttime.xml");                //保存相应的更改设置
	str = opx.numtoString(blingmin[0]);
	opx.ModifyNode("num0201", str);
	str = opx.numtoString(blingmin[1]);
	opx.ModifyNode("num0202", str);
	str = opx.numtoString(blingmin[2]);
	opx.ModifyNode("num0203", str);
	str = opx.numtoString(blingmin[3]);
	opx.ModifyNode("num0204", str);
	str = opx.numtoString(blingmin[4]);
	opx.ModifyNode("num0205", str);
	str = opx.numtoString(blingmin[5]);
	opx.ModifyNode("num0206", str);
	str = opx.numtoString(blingmin[6]);
	opx.ModifyNode("num0207", str);
	str = opx.numtoString(blingmin[7]);
	opx.ModifyNode("num0208", str);
	str = opx.numtoString(blingmin[8]);
	opx.ModifyNode("num0209", str);
	str = opx.numtoString(blingmin[9]);
	opx.ModifyNode("num0210", str);
	str = opx.numtoString(blingmin[10]);
	opx.ModifyNode("num0211", str);
	str = opx.numtoString(blingmin[11]);
	opx.ModifyNode("num0212", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


//void Blingmindu::OnBnClickedTingzhidaButton()
//{
//	// TODO: 在此添加控件通知处理程序代码
//}




void Blingmindu::OnBnClickedButton161()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_9_edit++;
	if (0 <= m_double_9_edit&& m_double_9_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[8] = m_double_9_edit;
	}
	else
	{
		m_double_9_edit--;
		UpdateData(FALSE);
		blingmin[8] = m_double_9_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = blingmin[8] + blingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 68, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = blingmin[8] + blingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 355, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton167()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_9_edit--;
	if (0 <= m_double_9_edit&& m_double_9_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[8] = m_double_9_edit;
	}
	else
	{
		m_double_9_edit++;
		UpdateData(FALSE);
		blingmin[8] = m_double_9_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = blingmin[8] + blingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 68, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = blingmin[8] + blingminf[i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 355, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton164()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_10_edit++;
	if (0 <= m_double_10_edit&& m_double_10_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[9] = m_double_10_edit;
	}
	else
	{
		m_double_10_edit--;
		UpdateData(FALSE);
		blingmin[9] = m_double_10_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = blingmin[9] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = blingmin[9] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 356, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton168()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_10_edit--;
	if (0 <= m_double_10_edit&& m_double_10_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[9] = m_double_10_edit;
	}
	else
	{
		m_double_10_edit++;
		UpdateData(FALSE);
		blingmin[9] = m_double_10_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = blingmin[9] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"3")
			{
				datatestDPU[4] = blingmin[9] + blingminf[10 + i];
				CMyPublicData::setfunc(32 + 2 * i, 16, 356, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton165()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit++;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit--;
		UpdateData(FALSE);
		blingmin[10] = m_double_11_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = blingmin[10] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 68, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = blingmin[10] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 355, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton169()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_11_edit--;
	if (0 <= m_double_11_edit&& m_double_11_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[10] = m_double_11_edit;
	}
	else
	{
		m_double_11_edit++;
		UpdateData(FALSE);
		blingmin[10] = m_double_11_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = blingmin[10] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 68, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = blingmin[10] + blingminf[20 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 355, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton166()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit++;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit--;
		UpdateData(FALSE);
		blingmin[11] = m_double_12_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = blingmin[11] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = blingmin[11] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 356, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedButton170()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double_12_edit--;
	if (0 <= m_double_12_edit&& m_double_12_edit <= 245)
	{
		UpdateData(FALSE);
		blingmin[11] = m_double_12_edit;
	}
	else
	{
		m_double_12_edit++;
		UpdateData(FALSE);
		blingmin[11] = m_double_12_edit;
	}
	if (addSW == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = blingmin[11] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 69, 1);
			}
		}
	}
	if (addSW == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i + 1] == L"3")
			{
				datatestDPU[4] = blingmin[11] + blingminf[30 + i];
				CMyPublicData::setfunc(33 + 2 * i, 16, 356, 1);
			}
		}
	}
}


void Blingmindu::OnBnClickedBfenButton()
{
	// TODO: 在此添加控件通知处理程序代码
	BFEN bf;
	bf.DoModal();
}


void Blingmindu::OnBnClickedKaishida()
{
	// TODO: 在此添加控件通知处理程序代码
	datatestDPU[4] = 1;           //1为开始打，0为停止打
	for (int i = 0; i < 20; i++)  //向20个相机分别发送开始打指令
	{
		if (modsd[i] != L"OFF")   //判断相机是否处于开启状态
		{
			CMyPublicData::setfunc(32 + i, 16, 1, 1);    //下发指令函数
		}
	}
	m_kaishi.m_bTransparent = FALSE;              //控制开始打与停止打按钮颜色变化
	m_kaishi.m_bDontUseWinXPTheme = TRUE;
	m_kaishi.SetFaceColor(RGB(0, 255, 127));
	m_tingzhi.m_bTransparent = FALSE;
	m_tingzhi.m_bDontUseWinXPTheme = TRUE;
	m_tingzhi.SetFaceColor(RGB(255, 215, 0));
	kaishida = true;
}


void Blingmindu::OnBnClickedTingzhida()              //与开始打功能相反
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
