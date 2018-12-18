// VGAsheding.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "VGAsheding.h"
#include "afxdialogex.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
// VGAsheding 对话框

IMPLEMENT_DYNAMIC(VGAsheding, CDialogEx)

VGAsheding::VGAsheding(CWnd* pParent /*=NULL*/)
	: CDialogEx(VGAsheding::IDD, pParent)
	, m_double1_edit1(vga[0])
	, m_double2_edit2(vga[1])
	, m_double3_edit18(vga[2])
	, m_double_4(vga[3])
	,flag_num(1)
{

}

VGAsheding::~VGAsheding()
{
}

void VGAsheding::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_double2_edit2);
	DDX_Text(pDX, IDC_EDIT18, m_double3_edit18);
	DDX_Text(pDX, IDC_EDIT4, m_double_4);
	DDX_Control(pDX, IDC_COMBO1, m_combo1);
}


BEGIN_MESSAGE_MAP(VGAsheding, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON12, &VGAsheding::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON15, &VGAsheding::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON51, &VGAsheding::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON14, &VGAsheding::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON64, &VGAsheding::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON52, &VGAsheding::OnBnClickedButton52)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON10, &VGAsheding::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON54, &VGAsheding::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON69, &VGAsheding::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON39, &VGAsheding::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON1, &VGAsheding::OnBnClickedButton1)
	ON_BN_CLICKED(IDCANCEL, &VGAsheding::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON16, &VGAsheding::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON40, &VGAsheding::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON55, &VGAsheding::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON58, &VGAsheding::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON37, &VGAsheding::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON49, &VGAsheding::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON38, &VGAsheding::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON50, &VGAsheding::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON56, &VGAsheding::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON59, &VGAsheding::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON83, &VGAsheding::OnBnClickedButton83)
	ON_BN_CLICKED(IDC_BUTTON122, &VGAsheding::OnBnClickedButton122)
	ON_BN_CLICKED(IDC_BUTTON42, &VGAsheding::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON61, &VGAsheding::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON60, &VGAsheding::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON66, &VGAsheding::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON120, &VGAsheding::OnBnClickedButton120)
	ON_BN_CLICKED(IDC_BUTTON123, &VGAsheding::OnBnClickedButton123)
	ON_BN_CLICKED(IDC_BUTTON13, &VGAsheding::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON11, &VGAsheding::OnBnClickedButton11)
END_MESSAGE_MAP()


// VGAsheding 消息处理程序


void VGAsheding::OnBnClickedButton12()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1_edit1++;
	if (0 <= m_double1_edit1&& m_double1_edit1 <= 255)
	{
		UpdateData(FALSE);
		vga[0] = m_double1_edit1;
	}
	else
	{
		m_double1_edit1--;
		UpdateData(FALSE);
		vga[0] = m_double1_edit1;
	}
	datatestDPU[4] = vga[0];
	for (int i=0;i<20;i++)
	{
		if (modsd[i]!="OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 24, 1);
		}
	}
}


void VGAsheding::OnBnClickedButton15()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2_edit2++;
	if (0 <= m_double2_edit2&& m_double2_edit2 <= 255)
	{
		UpdateData(FALSE);
		vga[1] = m_double2_edit2;
	}
	else
	{
		m_double2_edit2--;
		UpdateData(FALSE);
		vga[1] = m_double2_edit2;
	}
	datatestDPU[4] = vga[1];
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 25, 1);
		}
	}
}


void VGAsheding::OnBnClickedButton51()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3_edit18++;
	if (0 <= m_double3_edit18&& m_double3_edit18 <= 255)
	{
		UpdateData(FALSE);
		vga[2] = m_double3_edit18;
	}
	else
	{
		m_double3_edit18--;
		UpdateData(FALSE);
		vga[2] = m_double3_edit18;
	}
	datatestDPU[4] = vga[2];
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 17, 1);
		}
	}
}


void VGAsheding::OnBnClickedButton14()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1_edit1--;
	if (0 <= m_double1_edit1&& m_double1_edit1 <= 255)
	{
		UpdateData(FALSE);
		vga[0] = m_double1_edit1;
	}
	else
	{
		m_double1_edit1++;
		UpdateData(FALSE);
		vga[0] = m_double1_edit1;
	}
	datatestDPU[4] = vga[0];
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 24, 1);
		}
	}
}


void VGAsheding::OnBnClickedButton64()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2_edit2--;
	if (0 <= m_double2_edit2&& m_double2_edit2 <= 255)
	{
		UpdateData(FALSE);
		vga[1] = m_double2_edit2;
	}
	else
	{
		m_double2_edit2++;
		UpdateData(FALSE);
		vga[1] = m_double2_edit2;
	}
	datatestDPU[4] = vga[1];
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 25, 1);
		}
	}
}


void VGAsheding::OnBnClickedButton52()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3_edit18--;
	if (0 <= m_double3_edit18&& m_double3_edit18 <= 255)
	{
		UpdateData(FALSE);
		vga[2] = m_double3_edit18;
	}
	else
	{
		m_double3_edit18++;
		UpdateData(FALSE);
		vga[2] = m_double3_edit18;
	}
	datatestDPU[4] = vga[2];
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 17, 1);
		}
	}
}


void VGAsheding::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL VGAsheding::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num4501", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC33)->SetWindowText(cstr);
	opx.QueryNode_Text("num4502", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC34)->SetWindowText(cstr);
	opx.QueryNode_Text("num4503", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC35)->SetWindowText(cstr);
	opx.QueryNode_Text("num4504", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC36)->SetWindowText(cstr);
	opx.QueryNode_Text("num4505", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC37)->SetWindowText(cstr);
	opx.QueryNode_Text("num4506", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON11)->SetWindowText(cstr);
	opx.QueryNode_Text("num4507", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON13)->SetWindowText(cstr);
	opx.QueryNode_Text("num4508", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC20)->SetWindowText(cstr);
	opx.QueryNode_Text("num4509", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC21)->SetWindowText(cstr);
	opx.QueryNode_Text("num4510", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC22)->SetWindowText(cstr);
	opx.QueryNode_Text("num4511", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC23)->SetWindowText(cstr);
	opx.QueryNode_Text("num4512", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON69)->SetWindowText(cstr);
	opx.QueryNode_Text("num4513", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num4514", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);
	GetDlgItem(IDC_BUTTON10)->SetWindowText(vgasd[0]);
	GetDlgItem(IDC_BUTTON39)->SetWindowText(vgasd[1]);
	GetDlgItem(IDC_BUTTON16)->SetWindowText(vgasd[2]);
	GetDlgItem(IDC_BUTTON40)->SetWindowText(vgasd[3]);
	GetDlgItem(IDC_BUTTON55)->SetWindowText(vgasd[4]);
	GetDlgItem(IDC_BUTTON58)->SetWindowText(vgasd[5]);
	GetDlgItem(IDC_BUTTON37)->SetWindowText(vgasd[6]);
	GetDlgItem(IDC_BUTTON49)->SetWindowText(vgasd[7]);
	GetDlgItem(IDC_BUTTON38)->SetWindowText(vgasd[8]);
	GetDlgItem(IDC_BUTTON50)->SetWindowText(vgasd[9]);
	GetDlgItem(IDC_BUTTON56)->SetWindowText(vgasd[10]);
	GetDlgItem(IDC_BUTTON59)->SetWindowText(vgasd[11]);
	GetDlgItem(IDC_BUTTON83)->SetWindowText(vgasd[12]);
	GetDlgItem(IDC_BUTTON122)->SetWindowText(vgasd[13]);
	GetDlgItem(IDC_BUTTON42)->SetWindowText(vgasd[14]);
	GetDlgItem(IDC_BUTTON61)->SetWindowText(vgasd[15]);
	GetDlgItem(IDC_BUTTON60)->SetWindowText(vgasd[16]);
	GetDlgItem(IDC_BUTTON66)->SetWindowText(vgasd[17]);
	GetDlgItem(IDC_BUTTON120)->SetWindowText(vgasd[18]);
	GetDlgItem(IDC_BUTTON123)->SetWindowText(vgasd[19]);

	m_combo1.SetCurSel(0);   //设置COMBOX的初始值

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
	GetDlgItem(IDC_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT4)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void VGAsheding::ReSize()
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

void VGAsheding::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON10)->GetWindowText(vgasd[0]);
	if (vgasd[0] =="OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(32, 16, 26, 1);
	GetDlgItem(IDC_BUTTON10)->GetWindowText(vgasd[0]);
}


void VGAsheding::OnBnClickedButton54()
{
	// TODO: 在此添加控件通知处理程序代码

}


BOOL VGAsheding::PreTranslateMessage(MSG* pMsg)
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
			m_double1_edit1 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			vga[0] = m_double1_edit1;
		}
		datatestDPU[4] = vga[0];
		for (int i = 0; i < 20; i++)
		{
			if (modsd[i] != "OFF")
			{
				CMyPublicData::setfunc(32, 16, 24, 1);
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
			CInputDlg dlg;
			dlg.ValueMax = 255;
			dlg.ValueMin = 0;

			if (dlg.DoModal() == IDOK)
			{
				UpdateData(TRUE);
				m_double2_edit2 = _wtof(dlg.ValueShow);
				UpdateData(FALSE);
				vga[1] = m_double2_edit2;
			}
			datatestDPU[4] = vga[1];
			for (int i=0;i<20;i++)
			{
				if (modsd[i] != "OFF")
				{
					CMyPublicData::setfunc(32, 16, 25, 1);
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
					m_double3_edit18 = _wtof(dlg.ValueShow);
					UpdateData(FALSE);
					vga[2] = m_double3_edit18;
				}
				datatestDPU[4] = vga[2];
				for (int i = 0; i < 20; i++)
				{
					if (modsd[i] != "OFF")
					{
						CMyPublicData::setfunc(32, 16, 17, 1);
					}
				}
				return TRUE;
			}
			else
			{
				pEdit = (CEdit*)GetDlgItem(IDC_EDIT4);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					CInputDlg dlg;
					dlg.ValueMax = 10;
					dlg.ValueMin = 0;
					if (dlg.DoModal() == IDOK)
					{
						UpdateData(TRUE);
						m_double_4 = _wtof(dlg.ValueShow);
						UpdateData(FALSE);
						vga[3] = m_double_4;
					}
					datatestDPU[4] = vga[3];
					for (int i=0;i<20;i++)
					{
						if (modsd[i] != "OFF")
						{
							CMyPublicData::setfunc(32 + i, 16, 31, 1);
						}
					}
					return TRUE;
				}
			}
		}
	}
	UpdateData(FALSE);
	return CDialogEx::PreTranslateMessage(pMsg);
}


void VGAsheding::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString	ComChoosed;
	m_combo1.GetLBText(m_combo1.GetCurSel(), ComChoosed);
	if (ComChoosed == "f1")
	{
		flag_num = 1;
	}
	if (ComChoosed == "b1")
	{
		flag_num = 2;
	}
	if (ComChoosed == "f2")
	{
		flag_num = 3;
	}
	if (ComChoosed == "b2")
	{
		flag_num = 4;
	}
	if (ComChoosed == "f3")
	{
		flag_num = 5;
	}
	if (ComChoosed == "b3")
	{
		flag_num = 6;
	}
	if (ComChoosed == "f4")
	{
		flag_num = 7;
	}
	if (ComChoosed == "b4")
	{
		flag_num = 8;
	}
	if (ComChoosed == "f5")
	{
		flag_num = 9;
	}
	if (ComChoosed == "b5")
	{
		flag_num = 10;
	}
	if (ComChoosed == "f6")
	{
		flag_num = 11;
	}
	if (ComChoosed == "b6")
	{
		flag_num = 12;
	}
	if (ComChoosed == "f7")
	{
		flag_num = 13;
	}
	if (ComChoosed == "b7")
	{
		flag_num = 14;
	}
	if (ComChoosed == "f8")
	{
		flag_num = 15;
	}
	if (ComChoosed == "b8")
	{
		flag_num = 16;
	}
	if (ComChoosed == "f9")
	{
		flag_num = 17;
	}
	if (ComChoosed == "b9")
	{
		flag_num = 18;
	}
	if (ComChoosed == "f10")
	{
		flag_num = 19;
	}
	if (ComChoosed == "b10")
	{
		flag_num = 20;
	}
	datatestDPU[4] = 107;
	CMyPublicData::setfunc(31+flag_num, 16, 121, 1);
	UpdateData(FALSE);
}


void VGAsheding::OnBnClickedButton39()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON39)->GetWindowText(vgasd[1]);
	//如何按钮为OFF关闭状态，点击为ON发送打开命令，显示为打开状态
	if (vgasd[1] == "OFF")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON39)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON39)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(33, 16, 26, 1);
	GetDlgItem(IDC_BUTTON39)->GetWindowText(vgasd[1]);
}


void VGAsheding::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	CString	ComChoosed;
	m_combo1.GetLBText(m_combo1.GetCurSel(), ComChoosed);
	if (ComChoosed == "f1")
	{
		flag_num = 1;
	}
	if (ComChoosed == "b1")
	{
		flag_num = 2;
	}
	if (ComChoosed == "f2")
	{
		flag_num = 3;
	}
	if (ComChoosed == "b2")
	{
		flag_num = 4;
	}
	if (ComChoosed == "f3")
	{
		flag_num = 5;
	}
	if (ComChoosed == "b3")
	{
		flag_num = 6;
	}
	if (ComChoosed == "f4")
	{
		flag_num = 7;
	}
	if (ComChoosed == "b4")
	{
		flag_num = 8;
	}
	if (ComChoosed == "f5")
	{
		flag_num = 9;
	}
	if (ComChoosed == "b5")
	{
		flag_num = 10;
	}
	if (ComChoosed == "f6")
	{
		flag_num = 11;
	}
	if (ComChoosed == "b6")
	{
		flag_num = 12;
	}
	if (ComChoosed == "f7")
	{
		flag_num = 13;
	}
	if (ComChoosed == "b7")
	{
		flag_num = 14;
	}
	if (ComChoosed == "f8")
	{
		flag_num = 15;
	}
	if (ComChoosed == "b8")
	{
		flag_num = 16;
	}
	if (ComChoosed == "f9")
	{
		flag_num = 17;
	}
	if (ComChoosed == "b9")
	{
		flag_num = 18;
	}
	if (ComChoosed == "f10")
	{
		flag_num = 19;
	}
	if (ComChoosed == "b10")
	{
		flag_num = 20;
	}
	datatestDPU[4] = 106;
	CMyPublicData::setfunc(31 + flag_num, 16, 121, 1);
	UpdateData(FALSE);
}


void VGAsheding::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	USES_CONVERSION;
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(vga[0]);
	opx.ModifyNode("num1801", str);
	str = opx.numtoString(vga[1]);
	opx.ModifyNode("num1802", str);
	str = opx.numtoString(vga[2]);
	opx.ModifyNode("num1803", str);
	str = opx.numtoString(vga[3]);
	opx.ModifyNode("num1804", str);

	str = W2A(vgasd[0]);
	opx.ModifyNode("num1821", str);
	str = W2A(vgasd[1]);
	opx.ModifyNode("num1822", str);
	str = W2A(vgasd[2]);
	opx.ModifyNode("num1823", str);
	str = W2A(vgasd[3]);
	opx.ModifyNode("num1824", str);
	str = W2A(vgasd[4]);
	opx.ModifyNode("num1825", str);
	str = W2A(vgasd[5]);
	opx.ModifyNode("num1826", str);
	str = W2A(vgasd[6]);
	opx.ModifyNode("num1827", str);
	str = W2A(vgasd[7]);
	opx.ModifyNode("num1828", str);
	str = W2A(vgasd[8]);
	opx.ModifyNode("num1829", str);
	str = W2A(vgasd[9]);
	opx.ModifyNode("num1830", str);
	str = W2A(vgasd[10]);
	opx.ModifyNode("num1831", str);
	str = W2A(vgasd[11]);
	opx.ModifyNode("num1832", str);
	str = W2A(vgasd[12]);
	opx.ModifyNode("num1833", str);
	str = W2A(vgasd[13]);
	opx.ModifyNode("num1834", str);
	str = W2A(vgasd[14]);
	opx.ModifyNode("num1835", str);
	str = W2A(vgasd[15]);
	opx.ModifyNode("num1836", str);
	str = W2A(vgasd[16]);
	opx.ModifyNode("num1837", str);
	str = W2A(vgasd[17]);
	opx.ModifyNode("num1838", str);
	str = W2A(vgasd[18]);
	opx.ModifyNode("num1839", str);
	str = W2A(vgasd[19]);
	opx.ModifyNode("num1840", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void VGAsheding::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON16)->GetWindowText(vgasd[2]);
	if (vgasd[2] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(34, 16, 26, 1);
	GetDlgItem(IDC_BUTTON16)->GetWindowText(vgasd[2]);
}


void VGAsheding::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON40)->GetWindowText(vgasd[3]);
	if (vgasd[3] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON40)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON40)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(35, 16, 26, 1);
	GetDlgItem(IDC_BUTTON40)->GetWindowText(vgasd[3]);
}


void VGAsheding::OnBnClickedButton55()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON55)->GetWindowText(vgasd[4]);
	if (vgasd[4] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON55)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON55)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(36, 16, 26, 1);
	GetDlgItem(IDC_BUTTON55)->GetWindowText(vgasd[4]);
}


void VGAsheding::OnBnClickedButton58()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON58)->GetWindowText(vgasd[5]);
	if (vgasd[5] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON58)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON58)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(37, 16, 26, 1);
	GetDlgItem(IDC_BUTTON58)->GetWindowText(vgasd[5]);
}


void VGAsheding::OnBnClickedButton37()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON37)->GetWindowText(vgasd[6]);
	if (vgasd[6] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON37)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON37)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(38, 16, 26, 1);
	GetDlgItem(IDC_BUTTON37)->GetWindowText(vgasd[6]);
}


void VGAsheding::OnBnClickedButton49()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON49)->GetWindowText(vgasd[7]);
	if (vgasd[7] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON49)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON49)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(39, 16, 26, 1);
	GetDlgItem(IDC_BUTTON49)->GetWindowText(vgasd[7]);
}


void VGAsheding::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON38)->GetWindowText(vgasd[8]);
	if (vgasd[8] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON38)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON38)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(40, 16, 26, 1);
	GetDlgItem(IDC_BUTTON38)->GetWindowText(vgasd[8]);
}


void VGAsheding::OnBnClickedButton50()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON50)->GetWindowText(vgasd[9]);
	if (vgasd[9] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON50)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON50)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(41, 16, 26, 1);
	GetDlgItem(IDC_BUTTON50)->GetWindowText(vgasd[9]);
}


void VGAsheding::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON56)->GetWindowText(vgasd[10]);
	if (vgasd[10] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON56)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON56)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(42, 16, 26, 1);
	GetDlgItem(IDC_BUTTON56)->GetWindowText(vgasd[10]);
}


void VGAsheding::OnBnClickedButton59()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON59)->GetWindowText(vgasd[11]);
	if (vgasd[11] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON59)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON59)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(43, 16, 26, 1);
	GetDlgItem(IDC_BUTTON59)->GetWindowText(vgasd[11]);
}


void VGAsheding::OnBnClickedButton83()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON83)->GetWindowText(vgasd[12]);
	if (vgasd[12]== "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON83)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON83)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(44, 16, 26, 1);
	GetDlgItem(IDC_BUTTON83)->GetWindowText(vgasd[12]);
}


void VGAsheding::OnBnClickedButton122()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON122)->GetWindowText(vgasd[13]);
	if (vgasd[13] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON122)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON122)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(45, 16, 26, 1);
	GetDlgItem(IDC_BUTTON122)->GetWindowText(vgasd[13]);
}


void VGAsheding::OnBnClickedButton42()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON42)->GetWindowText(vgasd[14]);
	if (vgasd[14] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON42)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON42)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(46, 16, 26, 1);
	GetDlgItem(IDC_BUTTON42)->GetWindowText(vgasd[14]);
}


void VGAsheding::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON61)->GetWindowText(vgasd[15]);
	if (vgasd[15] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON61)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON61)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(47, 16, 26, 1);
	GetDlgItem(IDC_BUTTON61)->GetWindowText(vgasd[15]);
}


void VGAsheding::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON60)->GetWindowText(vgasd[16]);
	if (vgasd[16] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON60)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON60)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(48, 16, 26, 1);
	GetDlgItem(IDC_BUTTON60)->GetWindowText(vgasd[16]);
}


void VGAsheding::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON66)->GetWindowText(vgasd[17]);
	if (vgasd[17] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON66)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON66)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(49, 16, 26, 1);
	GetDlgItem(IDC_BUTTON66)->GetWindowText(vgasd[17]);
}


void VGAsheding::OnBnClickedButton120()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON120)->GetWindowText(vgasd[18]);
	if (vgasd[18] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON120)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON120)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(50, 16, 26, 1);
	GetDlgItem(IDC_BUTTON120)->GetWindowText(vgasd[18]);
}


void VGAsheding::OnBnClickedButton123()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON123)->GetWindowText(vgasd[19]);
	if (vgasd[19] == "OFF")//databuff[0] == 1)//(str == "off")
	{
		datatestDPU[4] = 1;
		GetDlgItem(IDC_BUTTON123)->SetWindowText(_T("ON"));
	}
	else
	{
		datatestDPU[4] = 0;
		GetDlgItem(IDC_BUTTON123)->SetWindowText(_T("OFF"));

	}
	CMyPublicData::setfunc(51, 16, 26, 1);
	GetDlgItem(IDC_BUTTON123)->GetWindowText(vgasd[19]);
}



void VGAsheding::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON55)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON37)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON38)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON56)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON83)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON42)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON60)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON120)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON39)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON40)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON58)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON49)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON50)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON59)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON122)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON61)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON66)->SetWindowText(_T("ON"));
	GetDlgItem(IDC_BUTTON123)->SetWindowText(_T("ON"));
	datatestDPU[4] = 1;
	for (int i=0;i<20;i++)
	{
		CMyPublicData::setfunc(32+i, 16, 26, 1);
	}
	GetDlgItem(IDC_BUTTON10)->GetWindowText(vgasd[0]);
	GetDlgItem(IDC_BUTTON39)->GetWindowText(vgasd[1]);
	GetDlgItem(IDC_BUTTON16)->GetWindowText(vgasd[2]);
	GetDlgItem(IDC_BUTTON40)->GetWindowText(vgasd[3]);
	GetDlgItem(IDC_BUTTON55)->GetWindowText(vgasd[4]);
	GetDlgItem(IDC_BUTTON58)->GetWindowText(vgasd[5]);
	GetDlgItem(IDC_BUTTON37)->GetWindowText(vgasd[6]);
	GetDlgItem(IDC_BUTTON49)->GetWindowText(vgasd[7]);
	GetDlgItem(IDC_BUTTON38)->GetWindowText(vgasd[8]);
	GetDlgItem(IDC_BUTTON50)->GetWindowText(vgasd[9]);
	GetDlgItem(IDC_BUTTON56)->GetWindowText(vgasd[10]);
	GetDlgItem(IDC_BUTTON59)->GetWindowText(vgasd[11]);
	GetDlgItem(IDC_BUTTON83)->GetWindowText(vgasd[12]);
	GetDlgItem(IDC_BUTTON122)->GetWindowText(vgasd[13]);
	GetDlgItem(IDC_BUTTON42)->GetWindowText(vgasd[14]);
	GetDlgItem(IDC_BUTTON61)->GetWindowText(vgasd[15]);
	GetDlgItem(IDC_BUTTON60)->GetWindowText(vgasd[16]);
	GetDlgItem(IDC_BUTTON66)->GetWindowText(vgasd[17]);
	GetDlgItem(IDC_BUTTON120)->GetWindowText(vgasd[18]);
	GetDlgItem(IDC_BUTTON123)->GetWindowText(vgasd[19]);
}


void VGAsheding::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON55)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON37)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON38)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON56)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON83)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON42)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON60)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON120)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON39)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON40)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON58)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON49)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON50)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON59)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON122)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON61)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON66)->SetWindowText(_T("OFF"));
	GetDlgItem(IDC_BUTTON123)->SetWindowText(_T("OFF"));
	datatestDPU[4] = 0;
	for (int i = 0; i < 20; i++)
	{
		CMyPublicData::setfunc(32 + i, 16, 26, 1);
	}
	GetDlgItem(IDC_BUTTON10)->GetWindowText(vgasd[0]);
	GetDlgItem(IDC_BUTTON39)->GetWindowText(vgasd[1]);
	GetDlgItem(IDC_BUTTON16)->GetWindowText(vgasd[2]);
	GetDlgItem(IDC_BUTTON40)->GetWindowText(vgasd[3]);
	GetDlgItem(IDC_BUTTON55)->GetWindowText(vgasd[4]);
	GetDlgItem(IDC_BUTTON58)->GetWindowText(vgasd[5]);
	GetDlgItem(IDC_BUTTON37)->GetWindowText(vgasd[6]);
	GetDlgItem(IDC_BUTTON49)->GetWindowText(vgasd[7]);
	GetDlgItem(IDC_BUTTON38)->GetWindowText(vgasd[8]);
	GetDlgItem(IDC_BUTTON50)->GetWindowText(vgasd[9]);
	GetDlgItem(IDC_BUTTON56)->GetWindowText(vgasd[10]);
	GetDlgItem(IDC_BUTTON59)->GetWindowText(vgasd[11]);
	GetDlgItem(IDC_BUTTON83)->GetWindowText(vgasd[12]);
	GetDlgItem(IDC_BUTTON122)->GetWindowText(vgasd[13]);
	GetDlgItem(IDC_BUTTON42)->GetWindowText(vgasd[14]);
	GetDlgItem(IDC_BUTTON61)->GetWindowText(vgasd[15]);
	GetDlgItem(IDC_BUTTON60)->GetWindowText(vgasd[16]);
	GetDlgItem(IDC_BUTTON66)->GetWindowText(vgasd[17]);
	GetDlgItem(IDC_BUTTON120)->GetWindowText(vgasd[18]);
	GetDlgItem(IDC_BUTTON123)->GetWindowText(vgasd[19]);
}