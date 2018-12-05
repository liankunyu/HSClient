// shujuduqu.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "shujuduqu.h"
#include "afxdialogex.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
// shujuduqu 对话框

IMPLEMENT_DYNAMIC(shujuduqu, CDialogEx)

shujuduqu::shujuduqu(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SHUJUDUQU_DIALOG, pParent)
	,xiangjixuanze(32)
	, m_double1(0)
	, m_double2(0)
	, m_double3(0)
	, m_double4(0)
	, m_double5(0)
	, m_double6(0)
	, m_double7(0)
	, m_double8(0)
{

}

shujuduqu::~shujuduqu()
{
}

void shujuduqu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT63, m_double1);
	DDX_Text(pDX, IDC_EDIT17, m_double2);
	DDX_Text(pDX, IDC_EDIT78, m_double3);
	DDX_Text(pDX, IDC_EDIT64, m_double4);
	DDX_Text(pDX, IDC_EDIT56, m_double5);
	DDX_Text(pDX, IDC_EDIT79, m_double6);
	DDX_Text(pDX, IDC_EDIT43, m_double7);
	DDX_Text(pDX, IDC_EDIT1, m_double8);
	DDX_Control(pDX, IDC_COMBO1, m_combox1);
}


BEGIN_MESSAGE_MAP(shujuduqu, CDialogEx)
	/*ON_BN_CLICKED(IDC_BUTTON1, &shujuduqu::OnBnClickedButton1)*/
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON3, &shujuduqu::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &shujuduqu::OnBnClickedButton2)
	ON_BN_CLICKED(IDCANCEL, &shujuduqu::OnBnClickedCancel)
	ON_CBN_SELCHANGE(IDC_COMBO1, &shujuduqu::OnCbnSelchangeCombo1)
END_MESSAGE_MAP()


// shujuduqu 消息处理程序


//void shujuduqu::OnBnClickedButton1()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	UpdateData(TRUE);
//	CString cstr;
//	GetDlgItem(IDC_BUTTON1)->GetWindowText(cstr);
//	if (cstr== m_Btn[0])
//	{
//		xiangjixuanze = 33;
//		if (modsd[xiangjixuanze-32]!="OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(m_Btn[1]);
//	}
//	if (cstr == m_Btn[1])
//	{
//		xiangjixuanze = 34;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(m_Btn[2]);
//	}	
//	if (cstr == m_Btn[2])
//	{
//		xiangjixuanze = 35;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(m_Btn[3]);
//	}	
//	if (cstr == m_Btn[3])
//	{
//		xiangjixuanze = 36;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(m_Btn[4]);
//	}	
//	if (cstr == m_Btn[4])
//	{
//		xiangjixuanze = 37;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(m_Btn[5]);
//	}	
//	if (cstr == m_Btn[5])
//	{
//		xiangjixuanze = 38;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(m_Btn[6]);
//	}	
//	if (cstr == m_Btn[6])
//	{
//		xiangjixuanze = 39;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(m_Btn[7]);
//	}	
//	if (cstr == L"通道4后相机")
//	{
//		xiangjixuanze = 40;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道5前相机");
//	}	
//	if (cstr == L"通道5前相机")
//	{
//		xiangjixuanze = 41;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道5后相机");
//	}	
//	if (cstr == L"通道5后相机")
//	{
//		xiangjixuanze = 42;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道6前相机");
//	}	
//	if (cstr == L"通道6前相机")
//	{
//		xiangjixuanze = 43;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道6后相机");
//	}	
//	if (cstr == L"通道6后相机")
//	{
//		xiangjixuanze = 44;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道7前相机");
//	}	
//	if (cstr == L"通道7前相机")
//	{
//		xiangjixuanze = 45;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道7后相机");
//	}
//	if (cstr == L"通道7后相机")
//	{
//		xiangjixuanze = 46;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道8前相机");
//	}	
//	if (cstr == L"通道8前相机")
//	{
//		xiangjixuanze = 47;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道8后相机");
//	}	
//	if (cstr == L"通道8后相机")
//	{
//		xiangjixuanze = 48;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道9前相机");
//	}	
//	if (cstr == L"通道9前相机")
//	{
//		xiangjixuanze = 49;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道9后相机");
//	}	
//	if (cstr == L"通道9后相机")
//	{
//		xiangjixuanze = 50;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道10前相机");
//	}	
//	if (cstr == L"通道10前相机")
//	{
//		xiangjixuanze = 51;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道10后相机");
//	}
//	if (cstr == L"通道10后相机")
//	{
//		xiangjixuanze = 32;
//		if (modsd[xiangjixuanze - 32] != "OFF")
//		{
//			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
//			m_double2 = databuff[0];
//			m_double3 = databuff[1];
//			m_double4 = databuff[2];
//			m_double5 = databuff[3];
//			m_double6 = databuff[4];
//			m_double7 = databuff[5];
//			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
//			m_double1 = databuff[0];
//		}
//		GetDlgItem(IDC_BUTTON1)->SetWindowText(L"通道1前相机");
//	}
//	UpdateData(FALSE);
//}


BOOL shujuduqu::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
	m_double2 = databuff[0];
	m_double3 = databuff[1];
	m_double4 = databuff[2];
	m_double5 = databuff[3];
	m_double6 = databuff[4];
	m_double7 = databuff[5];
	CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
	m_double1 = databuff[0];
	UpdateData(FALSE);
	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//初始化窗口位置
	CRect rect;
	GetClientRect(&rect);     //取客户区大小    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;

	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num6101", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC25)->SetWindowText(cstr);
	opx.QueryNode_Text("num6102", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num6103", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC10)->SetWindowText(cstr);
	opx.QueryNode_Text("num6104", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC11)->SetWindowText(cstr);
	opx.QueryNode_Text("num6105", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC19)->SetWindowText(cstr);
	//opx.QueryNode_Text("num6106", yuyan);    //相机点击事件需要判断按钮值
	//cstr = yuyan;
	//GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num6107", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC23)->SetWindowText(cstr);
	opx.QueryNode_Text("num6108", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC20)->SetWindowText(cstr);
	opx.QueryNode_Text("num6109", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC21)->SetWindowText(cstr);
	opx.QueryNode_Text("num6110", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC22)->SetWindowText(cstr);
	opx.QueryNode_Text("num6111", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
	opx.QueryNode_Text("num6112", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
	opx.QueryNode_Text("num6113", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.QueryNode_Text("num6115", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6116", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6117", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6118", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6119", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6120", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6121", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6122", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6123", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6124", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6125", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6126", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6127", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6128", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6129", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6130", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6131", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6132", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6133", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num6134", yuyan);
	cstr = yuyan;
	m_combox1.AddString(cstr);
	opx.SaveFile();

	int nMargin = 15;                      //使编辑框文字垂直居中
	GetDlgItem(IDC_EDIT63)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT63)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT1)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT17)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT17)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT78)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT64)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT56)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT79)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT43)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void shujuduqu::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


void shujuduqu::ReSize()
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

BOOL shujuduqu::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		UpdateData(TRUE);
		CInputDlg dlg;
		CMyPublicData::calculate(m_double8, shudu, 0, dlg, 255, 0);
		UpdateData(FALSE);
		datatestDPU[4] = m_double8;
		for (int i=0;i<20;i++)
		{
			if (modsd[i]!=L"OFF")
			{
				CMyPublicData::setfunc(32 + i, 16, 19, 1);
			}
		}
		return TRUE;
	}
	else
	{
		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT63);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		{
			UpdateData(TRUE);
			CInputDlg dlg;
			CMyPublicData::calculate(m_double1, shudu, 0, dlg, 255, 0);
			UpdateData(FALSE);
			datatestDPU[4] = m_double1;
			for (int i = 0; i < 20; i++)
			{
				if (modsd[i] != L"OFF")
				{
					CMyPublicData::setfunc(32 + i, 16, 25, 1);
				}
			}
			return TRUE;
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


void shujuduqu::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
		m_double2 = databuff[0];
		m_double3 = databuff[1];
		m_double4 = databuff[2];
		m_double5 = databuff[3];
		m_double6 = databuff[4];
		m_double7 = databuff[5];
		CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
		m_double1 = databuff[0];
	}
	UpdateData(FALSE);
}


void shujuduqu::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
}


void shujuduqu::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}


void shujuduqu::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
		UpdateData(TRUE);
		xiangjixuanze = 33 + m_combox1.GetCurSel();
		if (modsd[xiangjixuanze - 32] != "OFF")
		{
			CMyPublicData::setfunc(xiangjixuanze, 3, 130, 6);
			m_double2 = databuff[0];
			m_double3 = databuff[1];
			m_double4 = databuff[2];
			m_double5 = databuff[3];
			m_double6 = databuff[4];
			m_double7 = databuff[5];
			CMyPublicData::setfunc(xiangjixuanze, 3, 25, 1);
			m_double1 = databuff[0];
		}
		UpdateData(FALSE);
}
