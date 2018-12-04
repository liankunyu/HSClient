// yanseminganqiangdu.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "yanseminganqiangdu.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"

// yanseminganqiangdu 对话框

IMPLEMENT_DYNAMIC(yanseminganqiangdu, CDialogEx)

yanseminganqiangdu::yanseminganqiangdu(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_YANSEMINGANQIANGDU_DIALOG, pParent)
	, m_double1(yanseminganqiangdusd[0])
	, m_double2(yanseminganqiangdusd[1])
	, m_double3(yanseminganqiangdusd[2])
	, m_double4(yanseminganqiangdusd[3])
	, m_double5(yanseminganqiangdusd[4])
	, m_double6(yanseminganqiangdusd[5])
{

}

yanseminganqiangdu::~yanseminganqiangdu()
{
}

void yanseminganqiangdu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT2, m_double2);
	DDX_Text(pDX, IDC_EDIT30, m_double3);
	DDX_Text(pDX, IDC_EDIT18, m_double4);
	DDX_Text(pDX, IDC_EDIT33, m_double5);
	DDX_Text(pDX, IDC_EDIT23, m_double6);
}


BEGIN_MESSAGE_MAP(yanseminganqiangdu, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &yanseminganqiangdu::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &yanseminganqiangdu::OnBnClickedButton2)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON3, &yanseminganqiangdu::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &yanseminganqiangdu::OnBnClickedButton4)
	ON_BN_CLICKED(IDCANCEL, &yanseminganqiangdu::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON7, &yanseminganqiangdu::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON5, &yanseminganqiangdu::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON8, &yanseminganqiangdu::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON6, &yanseminganqiangdu::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON32, &yanseminganqiangdu::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON38, &yanseminganqiangdu::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON9, &yanseminganqiangdu::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &yanseminganqiangdu::OnBnClickedButton10)
END_MESSAGE_MAP()


// yanseminganqiangdu 消息处理程序


void yanseminganqiangdu::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		yanseminganqiangdusd[0] = m_double1;
	}
	datatestDPU[4] = yanseminganqiangdusd[0];
	for (int i=0;i<10;i++)
	{
		if (modsd[2*i]==L"1")
		{
			CMyPublicData::setfunc(32 + 2*i, 16, 350, 1);
		}
	}
}


void yanseminganqiangdu::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		yanseminganqiangdusd[0] = m_double1;
	}
	datatestDPU[4] = yanseminganqiangdusd[0];
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 350, 1);
		}
	}
}


BOOL yanseminganqiangdu::PreTranslateMessage(MSG* pMsg)
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
			yanseminganqiangdusd[0] = m_double1;
			UpdateData(FALSE);
		}
		datatestDPU[4] = yanseminganqiangdusd[0];
		for (int i = 0; i < 10; i++)
		{
			if (modsd[2 * i] == L"1")
			{
				CMyPublicData::setfunc(32 + 2 * i, 16, 350, 1);
			}
		}
		return TRUE;
	}
	else
	{
		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT2);
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
				yanseminganqiangdusd[1] = m_double2;
				UpdateData(FALSE);
			}
			datatestDPU[4] = yanseminganqiangdusd[1];
			for (int i = 0; i < 10; i++)
			{
				if (modsd[2 * i + 1] == L"1")
				{
					CMyPublicData::setfunc(33 + 2 * i, 16, 350, 1);
				}
			}
			return TRUE;
		}
		else
		{
			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT30);
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
					yanseminganqiangdusd[2] = m_double3;
					UpdateData(FALSE);
				}
				datatestDPU[4] = yanseminganqiangdusd[2];
				for (int i = 0; i < 10; i++)
				{
					if (modsd[2 * i] == L"2")
					{
						CMyPublicData::setfunc(32 + 2 * i, 16, 350, 1);
					}
				}
				return TRUE;
			}
			else
			{
				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT18);
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
						yanseminganqiangdusd[3] = m_double4;
						UpdateData(FALSE);
					}
					datatestDPU[4] = yanseminganqiangdusd[3];
					for (int i = 0; i < 10; i++)
					{
						if (modsd[2 * i + 1] == L"2")
						{
							CMyPublicData::setfunc(33 + 2 * i, 16, 350, 1);
						}
					}
					return TRUE;
				}
				else
				{
					CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT33);
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
							yanseminganqiangdusd[4] = m_double5;
							UpdateData(FALSE);
						}
						datatestDPU[4] = yanseminganqiangdusd[4];
						for (int i = 0; i < 10; i++)
						{
							if (modsd[2 * i] == L"3")
							{
								CMyPublicData::setfunc(32 + 2 * i, 16, 350, 1);
							}
						}
						return TRUE;
					}
					else
					{
						CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT23);
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
								yanseminganqiangdusd[5] = m_double6;
								UpdateData(FALSE);
							}
							datatestDPU[4] = yanseminganqiangdusd[5];
							for (int i = 0; i < 10; i++)
							{
								if (modsd[2 * i + 1] == L"3")
								{
									CMyPublicData::setfunc(33 + 2 * i, 16, 350, 1);
								}
							}
							return TRUE;
						}
					}
				}
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


void yanseminganqiangdu::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void yanseminganqiangdu::ReSize()
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

BOOL yanseminganqiangdu::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num4201", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num4202", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num4203", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num4204", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num4205", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num4206", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num4207", yuyan);
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
	GetDlgItem(IDC_EDIT1)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT1)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT30)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT33)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT23)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void yanseminganqiangdu::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		yanseminganqiangdusd[1] = m_double2;
	}
	datatestDPU[4] = yanseminganqiangdusd[1];
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i+1] == L"1")
		{
			CMyPublicData::setfunc(33+2*i, 16, 350, 1);
		}
	}
}


void yanseminganqiangdu::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		yanseminganqiangdusd[1] = m_double2;
	}
	datatestDPU[4] = yanseminganqiangdusd[1];
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"1")
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 350, 1);
		}
	}
}




void yanseminganqiangdu::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		yanseminganqiangdusd[2] = m_double3;
	}
	datatestDPU[4] = yanseminganqiangdusd[2];
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 350, 1);
		}
	}
}


void yanseminganqiangdu::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		yanseminganqiangdusd[3] = m_double4;
	}
	datatestDPU[4] = yanseminganqiangdusd[3];
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 350, 1);
		}
	}
}


void yanseminganqiangdu::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		yanseminganqiangdusd[2] = m_double3;
	}
	datatestDPU[4] = yanseminganqiangdusd[2];
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"2")
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 350, 1);
		}
	}
}


void yanseminganqiangdu::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		yanseminganqiangdusd[3] = m_double4;
	}
	datatestDPU[4] = yanseminganqiangdusd[3];
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"2")
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 350, 1);
		}
	}
}



void yanseminganqiangdu::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(yanseminganqiangdusd[0]);
	opx.ModifyNode("num3301", str);
	str = opx.numtoString(yanseminganqiangdusd[1]);
	opx.ModifyNode("num3302", str);
	str = opx.numtoString(yanseminganqiangdusd[2]);
	opx.ModifyNode("num3303", str);
	str = opx.numtoString(yanseminganqiangdusd[3]);
	opx.ModifyNode("num3304", str);
	str = opx.numtoString(yanseminganqiangdusd[4]);
	opx.ModifyNode("num3305", str);
	str = opx.numtoString(yanseminganqiangdusd[5]);
	opx.ModifyNode("num3306", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}

void yanseminganqiangdu::OnBnClickedButton32()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		yanseminganqiangdusd[4] = m_double5;
	}
	datatestDPU[4] = yanseminganqiangdusd[4];
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 350, 1);
		}
	}
}


void yanseminganqiangdu::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		yanseminganqiangdusd[4] = m_double5;
	}
	datatestDPU[4] = yanseminganqiangdusd[4];
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"3")
		{
			CMyPublicData::setfunc(32 + 2 * i, 16, 350, 1);
		}
	}
}


void yanseminganqiangdu::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		yanseminganqiangdusd[5] = m_double6;
	}
	datatestDPU[4] = yanseminganqiangdusd[5];
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 350, 1);
		}
	}
}


void yanseminganqiangdu::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		yanseminganqiangdusd[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		yanseminganqiangdusd[5] = m_double6;
	}
	datatestDPU[4] = yanseminganqiangdusd[5];
	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i + 1] == L"3")
		{
			CMyPublicData::setfunc(33 + 2 * i, 16, 350, 1);
		}
	}
}
