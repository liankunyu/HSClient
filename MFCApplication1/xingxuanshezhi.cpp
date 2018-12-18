// xingxuanshezhi.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "xingxuanshezhi.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "xingxuanlingmindu.h"
#include "mianjiweitiao.h"
#include "huiduhulue.h"
#include "XMLHelper.h"

// xingxuanshezhi �Ի���

IMPLEMENT_DYNAMIC(xingxuanshezhi, CDialogEx)

xingxuanshezhi::xingxuanshezhi(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_XINGXUANSHEZHI_DIALOG, pParent)
	, m_double1(xingxuansd[0])
	, m_double2(xingxuansd[1])
	, m_double3(xingxuansd[2])
	, m_double4(xingxuansd[3])
{

}

xingxuanshezhi::~xingxuanshezhi()
{
}

void xingxuanshezhi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT2, m_double2);
	DDX_Text(pDX, IDC_EDIT18, m_double3);
	DDX_Text(pDX, IDC_EDIT30, m_double4);
	DDX_Control(pDX, IDC_COMBO1, m_combox1);
}


BEGIN_MESSAGE_MAP(xingxuanshezhi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &xingxuanshezhi::OnBnClickedButton1)
	ON_CBN_SELCHANGE(IDC_COMBO1, &xingxuanshezhi::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON2, &xingxuanshezhi::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &xingxuanshezhi::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &xingxuanshezhi::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &xingxuanshezhi::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &xingxuanshezhi::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &xingxuanshezhi::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &xingxuanshezhi::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &xingxuanshezhi::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &xingxuanshezhi::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON16, &xingxuanshezhi::OnBnClickedButton16)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &xingxuanshezhi::OnBnClickedCancel)
END_MESSAGE_MAP()


// xingxuanshezhi ��Ϣ�������


void xingxuanshezhi::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		xingxuansd[0] = m_double1;
	}
	else
	{
		m_double1--;
		UpdateData(FALSE);
		xingxuansd[0] = m_double1;
	}
	datatestDPU[4] = xingxuansd[0];
	for (int i=0;i<20;i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 114, 1);
		}
	}

}


BOOL xingxuanshezhi::PreTranslateMessage(MSG* pMsg)
{
	// TODO: �ڴ����ר�ô����/����û���
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
			xingxuansd[0] = m_double1;
			UpdateData(FALSE);
		}
		datatestDPU[4] = m_double1;
		for (int i = 0; i < 20; i++)
		{
			if (modsd[i] != "OFF")
			{
				CMyPublicData::setfunc(32 + i, 16, 114, 1);
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
				xingxuansd[1] = m_double2;
				UpdateData(FALSE);
			}
			datatestDPU[4] = m_double2;
			for (int i = 0; i < 20; i++)
			{
				if (modsd[i] != "OFF")
				{
					CMyPublicData::setfunc(32 + i, 16, 113, 1);
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
					m_double3 = _wtof(dlg.ValueShow);
					xingxuansd[2] = m_double3;
					UpdateData(FALSE);
				}
				datatestDPU[4] = m_double3;
				for (int i = 0; i < 20; i++)
				{
					if (modsd[i] != "OFF")
					{
						CMyPublicData::setfunc(32 + i, 16, 115, 1);
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
						m_double4 = _wtof(dlg.ValueShow);
						xingxuansd[3] = m_double4;
						UpdateData(FALSE);
					}
					datatestDPU[4] = m_double3;
					for (int i = 0; i < 20; i++)
					{
						if (modsd[i] != "OFF")
						{
							CMyPublicData::setfunc(32 + i, 16, 102, 1);
						}
					}
					return TRUE;
				}
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


BOOL xingxuanshezhi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num3801", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num3802", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num3803", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num3804", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num3805", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num3806", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num3807", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON9)->SetWindowText(cstr);
	opx.QueryNode_Text("num3808", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON10)->SetWindowText(cstr);
	opx.QueryNode_Text("num3809", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
	opx.QueryNode_Text("num3810", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.QueryNode_Text("num3815", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num3816", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num3817", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num3818", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	m_combox1.AddString(cstr);
	opx.SaveFile();

	if (xingxuansd[4] == 0)            //����COMBOX�ĳ�ʼֵ 
	{
		m_combox1.SetCurSel(0);
	}
	if (xingxuansd[4] == 1)        
	{
		m_combox1.SetCurSel(1);
	}
	if (xingxuansd[4] == 2)     
	{
		m_combox1.SetCurSel(2);
	}
	if (xingxuansd[4] == 3)           
	{
		m_combox1.SetCurSel(3);
	}

	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//��ʼ������λ��
	CRect rect;
	GetClientRect(&rect);     //ȡ�ͻ�����С    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;


	int nMargin = 15;                      //ʹ�༭�����ִ�ֱ����
	GetDlgItem(IDC_EDIT1)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT1)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT2)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT30)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void xingxuanshezhi::OnCbnSelchangeCombo1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if (m_combox1.GetCurSel()==0)
	{
		xingxuansd[4] = 0;
		datatestDPU[4] = 0;
		for (int i = 0; i < 20; i++)
		{
			if (modsd[i]!="OFF")
			{
				CMyPublicData::setfunc(32 + i, 16, 106, 1);
			}
		}
	}
	if (m_combox1.GetCurSel() == 1)
	{
		xingxuansd[4] = 1;
		datatestDPU[4] = 1;
		for (int i = 0; i < 20; i++)
		{
			if (modsd[i] != "OFF")
			{
				CMyPublicData::setfunc(32 + i, 16, 106, 1);
			}
		}
	}
	if (m_combox1.GetCurSel() == 2)
	{
		xingxuansd[4] = 2;
		datatestDPU[4] = 2;
		for (int i = 0; i < 20; i++)
		{
			if (modsd[i] != "OFF")
			{
				CMyPublicData::setfunc(32 + i, 16, 106, 1);
			}
		}
	}
	if (m_combox1.GetCurSel() == 3)
	{
		xingxuansd[4] = 3;
		datatestDPU[4] = 3;
		for (int i = 0; i < 20; i++)
		{
			if (modsd[i] != "OFF")
			{
				CMyPublicData::setfunc(32 + i, 16, 106, 1);
			}
		}
	}
}


void xingxuanshezhi::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		xingxuansd[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		xingxuansd[0] = m_double1;
	}
	datatestDPU[4] = m_double1;
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 114, 1);
		}
	}
}


void xingxuanshezhi::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		xingxuansd[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		xingxuansd[1] = m_double2;
	}
	datatestDPU[4] =xingxuansd[1];
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 113, 1);
		}
	}
}


void xingxuanshezhi::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		xingxuansd[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		xingxuansd[1] = m_double2;
	}
	datatestDPU[4] = m_double2;
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 113, 1);
		}
	}
}


void xingxuanshezhi::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		xingxuansd[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		xingxuansd[2] = m_double3;
	}
	datatestDPU[4] = m_double3;
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 115, 1);
		}
	}
}


void xingxuanshezhi::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		xingxuansd[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		xingxuansd[2] = m_double3;
	}
	datatestDPU[4] = m_double3;
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 115, 1);
		}
	}
}


void xingxuanshezhi::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		xingxuansd[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		xingxuansd[3] = m_double4;
	}
	datatestDPU[4] = m_double4;
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 102, 1);
		}
	}
}


void xingxuanshezhi::OnBnClickedButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		xingxuansd[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		xingxuansd[3] = m_double4;
	}
	datatestDPU[4] = m_double4;
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			CMyPublicData::setfunc(32 + i, 16, 102, 1);
		}
	}
}


void xingxuanshezhi::OnBnClickedButton9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	xingxuanlingmindu xingxuanlingmindu1;
	xingxuanlingmindu1.DoModal();
}


void xingxuanshezhi::OnBnClickedButton10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	mianjiweitiao mianjiweitiao1;
	mianjiweitiao1.DoModal();
}


void xingxuanshezhi::OnBnClickedButton16()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	huiduhulue huduhulue1;
	huduhulue1.DoModal();
}
void xingxuanshezhi::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: �ڴ˴������Ϣ����������
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void xingxuanshezhi::ReSize()
{
	float fsp[2];
	POINT Newp; //��ȡ���ڶԻ���Ĵ�С  
	CRect recta;
	GetClientRect(&recta);     //ȡ�ͻ�����С    
	Newp.x = recta.right - recta.left;
	Newp.y = recta.bottom - recta.top;
	fsp[0] = (float)Newp.x / old.x;
	fsp[1] = (float)Newp.y / old.y;
	CRect Rect;
	int woc;
	CPoint OldTLPoint, TLPoint; //���Ͻ�  
	CPoint OldBRPoint, BRPoint; //���½�  
	HWND  hwndChild = ::GetWindow(m_hWnd, GW_CHILD);  //�г����пؼ�    
	while (hwndChild)
	{
		woc = ::GetDlgCtrlID(hwndChild);//ȡ��ID  
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



void xingxuanshezhi::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(xingxuansd[0]);
	opx.ModifyNode("num3101", str);
	str = opx.numtoString(xingxuansd[1]);
	opx.ModifyNode("num3102", str);
	str = opx.numtoString(xingxuansd[2]);
	opx.ModifyNode("num3103", str);
	str = opx.numtoString(xingxuansd[3]);
	opx.ModifyNode("num3104", str);
	str = opx.numtoString(xingxuansd[4]);
	opx.ModifyNode("num3105", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}
