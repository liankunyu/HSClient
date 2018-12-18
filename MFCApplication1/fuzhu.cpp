// fuzhu.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "fuzhu.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
//#include "ADOConnect.h"
// fuzhu 对话框

IMPLEMENT_DYNAMIC(fuzhu, CDialogEx)

fuzhu::fuzhu(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_FUZHU_DIALOG, pParent)
	, m_double1(fuzhugongneng[0])
	, m_double2(fuzhugongneng[1])
	, m_double3(fuzhugongneng[2])
	, m_double4(fuzhugongneng[3])
{

}

fuzhu::~fuzhu()
{
}

void fuzhu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT2, m_double2);
	DDX_Text(pDX, IDC_EDIT18, m_double3);
	DDX_Text(pDX, IDC_EDIT30, m_double4);
	DDX_Control(pDX, IDC_COMBO1, m_comBo);
}


BEGIN_MESSAGE_MAP(fuzhu, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &fuzhu::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON5, &fuzhu::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &fuzhu::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON2, &fuzhu::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &fuzhu::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &fuzhu::OnBnClickedButton4)
	ON_BN_CLICKED(IDCANCEL, &fuzhu::OnBnClickedCancel)
	ON_CBN_SELCHANGE(IDC_COMBO1, &fuzhu::OnCbnSelchangeCombo1)
	ON_WM_SIZE()
END_MESSAGE_MAP()


// fuzhu 消息处理程序


void fuzhu::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//CString str;
	GetDlgItem(IDC_BUTTON1)->GetWindowText(fuzhusd[0]);
	CMyPublicData::setfunc(10, 3, 9, 1);
	//获得databuff[0]
	if (fuzhusd[0]==L"ON")
	{
		CMyPublicData::bit_set(10, 9, 1, false);
		GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("OFF"));
	}
	else
	{
		CMyPublicData::bit_set(10, 9, 1, true);
		GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON1)->GetWindowText(fuzhusd[0]);
}


void fuzhu::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	//CString str;
	//GetDlgItem(IDC_BUTTON5)->GetWindowText(str);
	//if (CMyPublicData::bit_read(10, 7, 2))
	//{
	GetDlgItem(IDC_BUTTON5)->GetWindowText(fuzhusd[4]);
	CMyPublicData::bit_read(10, 7, 2);
	if (fuzhusd[4] == L"ON")
	{
		CMyPublicData::bit_set(10, 7, 2, false);
		GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("OFF"));
	}
	else
	{
		CMyPublicData::bit_set(10, 7, 2, true);
		GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON5)->GetWindowText(fuzhusd[4]);
}


BOOL fuzhu::PreTranslateMessage(MSG* pMsg)
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
			fuzhugongneng[0] = m_double1;
		}
		datatestDPU[4] = fuzhugongneng[0];
		for (int i=0;i<20;i++)
		{
			CMyPublicData::setfunc(32+i, 16, 71, 1);
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
				m_double2 = _wtof(dlg.ValueShow);
				UpdateData(FALSE);
				fuzhugongneng[1] = m_double2;
			}
			datatestDPU[4] = fuzhugongneng[1];
			for (int i = 0; i <20; i++)
			{
				CMyPublicData::setfunc(32 + i, 16, 73, 1);
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
					m_double3 = _wtof(dlg.ValueShow);
					UpdateData(FALSE);
					fuzhugongneng[2] = m_double3;
				}
				datatestDPU[4] = fuzhugongneng[2];
				for (int i = 0; i <20; i++)
				{
					CMyPublicData::setfunc(32 + i, 16, 75, 1);
				}
				return TRUE;
			}
			else
			{
				pEdit = (CEdit*)GetDlgItem(IDC_EDIT30);
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
						fuzhugongneng[3] = m_double4;
					}
					datatestDPU[4] = fuzhugongneng[3];
					for (int i = 0; i <20; i++)
					{
						CMyPublicData::setfunc(32 + i, 16, 10, 1);
					}
					return TRUE;
				}
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


BOOL fuzhu::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num0801", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num0802", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num0803", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num0804", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num0805", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num0806", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num0807", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num0808", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num0809", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC19)->SetWindowText(cstr);
	opx.QueryNode_Text("num0810", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num0811", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC10)->SetWindowText(cstr);
	opx.QueryNode_Text("num0812", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC11)->SetWindowText(cstr);
	opx.QueryNode_Text("num0813", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC12)->SetWindowText(cstr);
	opx.QueryNode_Text("num0814", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	GetDlgItem(IDC_BUTTON1)->SetWindowText(fuzhusd[0]);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(fuzhusd[1]);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(fuzhusd[2]);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(fuzhusd[3]);
	GetDlgItem(IDC_BUTTON5)->SetWindowText(fuzhusd[4]);
	GetDlgItem(IDC_BUTTON6)->SetWindowText(fuzhusd[5]);



	UpdateData(FALSE);




	//if (CMyPublicData::bit_read(10, 9, 1))
	//{
	//	CMyPublicData::bit_set(10, 9, 1, false);
	//	GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("OFF"));
	//}
	//else
	//{
	//	CMyPublicData::bit_set(10, 9, 1, true);
	//	GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("ON"));
	//}
	//if (CMyPublicData::bit_read(10, 9, 2))
	//{
	//	CMyPublicData::bit_set(10, 9, 2, false);
	//	GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("OFF"));
	//}
	//else
	//{
	//	CMyPublicData::bit_set(10, 9, 2, true);
	//	GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("ON"));
	//}
	//if (CMyPublicData::bit_read(10, 9, 3))
	//{
	//	CMyPublicData::bit_set(10, 9, 3, false);
	//	GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("OFF"));
	//}
	//else
	//{
	//	CMyPublicData::bit_set(10, 9, 3, true);
	//	GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("ON"));
	//}
	//if (CMyPublicData::bit_read(10, 9, 4))
	//{
	//	CMyPublicData::bit_set(10, 9, 4, false);
	//	GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("OFF"));
	//}
	//else
	//{
	//	CMyPublicData::bit_set(10, 9, 4, true);
	//	GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("ON"));
	//}
	//if (CMyPublicData::bit_read(10, 7, 2))
	//{

	//	CMyPublicData::bit_set(10, 7, 2, false);
	//	GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("OFF"));
	//}
	//else
	//{
	//	CMyPublicData::bit_set(10, 7, 2, true);
	//	GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("ON"));
	//}
	//if (CMyPublicData::bit_read(10, 7, 3))
	//{
	//	CMyPublicData::bit_set(10, 7, 3, false);
	//	GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("OFF"));
	//}
	//else
	//{
	//	CMyPublicData::bit_set(10, 7, 3, true);
	//	GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("ON"));
	//}
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
	GetDlgItem(IDC_EDIT30)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void fuzhu::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	//if (CMyPublicData::bit_read(10,7,3))
	//{
	GetDlgItem(IDC_BUTTON6)->GetWindowText(fuzhusd[5]);
	CMyPublicData::bit_read(10, 7, 3);
	if (fuzhusd[5] == L"ON")
	{
		CMyPublicData::bit_set(10, 7, 3, false);
		GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("OFF"));
	}
	else
	{
		CMyPublicData::bit_set(10, 7, 3, true);
		GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON6)->GetWindowText(fuzhusd[5]);
}


void fuzhu::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON2)->GetWindowText(fuzhusd[1]);
	CMyPublicData::setfunc(10, 3, 9, 1);
	if (fuzhusd[1]==L"ON")
	{
		CMyPublicData::bit_set(10, 9, 2, false);
		GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("OFF"));
	}
	else
	{
		CMyPublicData::bit_set(10, 9, 2, true);
		GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON2)->GetWindowText(fuzhusd[1]);
}


void fuzhu::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON3)->GetWindowText(fuzhusd[2]);
	CMyPublicData::setfunc(10, 3, 9, 1);
	if (fuzhusd[2] == L"ON")
	{
		CMyPublicData::bit_set(10, 9, 3, false);
		GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("OFF"));
	}
	else
	{
		CMyPublicData::bit_set(10, 9, 3, true);
		GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON3)->GetWindowText(fuzhusd[2]);
}


void fuzhu::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON4)->GetWindowText(fuzhusd[3]);
	CMyPublicData::setfunc(10, 3, 9, 1);
	if (fuzhusd[3] == L"ON")
	{
		CMyPublicData::bit_set(10, 9, 4, false);
		GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("OFF"));
	}
	else
	{
		CMyPublicData::bit_set(10, 9, 4, true);
		GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON4)->GetWindowText(fuzhusd[3]);
}


void fuzhu::OnBnClickedCancel()
{
	
	string str;
	USES_CONVERSION;
	opXML opx("lasttime.xml");
	str = opx.numtoString(fuzhugongneng[0]);
	opx.ModifyNode("num0601", str);
	str = opx.numtoString(fuzhugongneng[1]);
	opx.ModifyNode("num0602", str);
	str = opx.numtoString(fuzhugongneng[2]);
	opx.ModifyNode("num0603", str);
	str = opx.numtoString(fuzhugongneng[3]);
	opx.ModifyNode("num0604", str);
	str = opx.numtoString(fuzhugongneng[4]);
	opx.ModifyNode("num0605", str);
	str = opx.numtoString(fuzhugongneng[5]);
	opx.ModifyNode("num0606", str);
	str = opx.numtoString(fuzhugongneng[6]);
	opx.ModifyNode("num0607", str);
	str = opx.numtoString(fuzhugongneng[7]);
	opx.ModifyNode("num0608", str);
	str = opx.numtoString(fuzhugongneng[8]);
	opx.ModifyNode("num0609", str);
	str = opx.numtoString(fuzhugongneng[9]);
	opx.ModifyNode("num0610", str);
	str = opx.numtoString(fuzhugongneng[10]);
	opx.ModifyNode("num0611", str);
	str = opx.numtoString(fuzhugongneng[11]);
	opx.ModifyNode("num0612", str);


	str = W2A(fuzhusd[0]);
	opx.ModifyNode("num0621", str);
	str = W2A(fuzhusd[1]);
	opx.ModifyNode("num0622", str);
	str = W2A(fuzhusd[2]);
	opx.ModifyNode("num0623", str);
	str = W2A(fuzhusd[3]);
	opx.ModifyNode("num0624", str);
	str = W2A(fuzhusd[4]);
	opx.ModifyNode("num0625", str);
	str = W2A(fuzhusd[5]);
	opx.ModifyNode("num0626", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void fuzhu::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
	int nIndex = m_comBo.GetCurSel();
	CString strCBText;
	m_comBo.GetLBText(nIndex, strCBText);
	USES_CONVERSION;
	string str = T2A(strCBText);
	lang = str + ".xml";
	
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num0801", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num0802", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num0803", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num0804", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num0805", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num0806", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num0807", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num0808", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num0809", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC19)->SetWindowText(cstr);
	opx.QueryNode_Text("num0810", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num0811", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC10)->SetWindowText(cstr);
	opx.QueryNode_Text("num0812", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC11)->SetWindowText(cstr);
	opx.QueryNode_Text("num0813", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC12)->SetWindowText(cstr);
	opx.QueryNode_Text("num0814", yuyan);
	cstr = yuyan;
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();

	opXML opx8("lasttime.xml");
	opx8.ModifyNode("lastlang", lang);
	opx8.SaveFile();
	SWlang = 2;
	UpdateData(FALSE);
}


void fuzhu::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


void fuzhu::ReSize()
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