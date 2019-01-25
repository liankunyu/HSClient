// Qinghui.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Qinghui.h"
#include "afxdialogex.h"
#include "Mianji.h"
#include "hunselingmindu.h"
#include "InputDlg.h"
#include "Liuliangsheding.h"
#include "rlingmindu.h"
#include "Blingmindu.h"
#include "Yansemingan.h"
#include "Famenceshi.h"
#include "Moshixuanze.h"
#include "Glingmindu.h"
#include "XMLHelper.h"

// Qinghui �Ի���

IMPLEMENT_DYNAMIC(Qinghui, CDialogEx)

Qinghui::Qinghui(CWnd* pParent /*=NULL*/)
	: CDialogEx(Qinghui::IDD, pParent)
	, m_double1(qinghui[0])
	, m_double2(qinghui[1])
	, m_double3(qinghui[2])
	//, qweqweqweqweqweqwe(0)
{

}

Qinghui::~Qinghui()
{
}

void Qinghui::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT2, m_double2);
	DDX_Text(pDX, IDC_EDIT23, m_double3);
}


BEGIN_MESSAGE_MAP(Qinghui, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON9, &Qinghui::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON8, &Qinghui::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON34, &Qinghui::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON10, &Qinghui::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON55, &Qinghui::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON35, &Qinghui::OnBnClickedButton35)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON11, &Qinghui::OnBnClickedButton11)
	ON_BN_CLICKED(IDCANCEL, &Qinghui::OnBnClickedCancel)
END_MESSAGE_MAP()


// Qinghui ��Ϣ�������


void Qinghui::OnBnClickedButton9()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double1++;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		qinghui[0] = m_double1;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		qinghui[0] = m_double1;
	}
	datatestDPU[4] = qinghui[0];
	CMyPublicData::setfunc(10, 16, 34, 1);
}


void Qinghui::OnBnClickedButton8()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double1--;
	if (0 <= m_double1&& m_double1 <= 255)
	{
		UpdateData(FALSE);
		qinghui[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		qinghui[0] = m_double1;
	}
	datatestDPU[4] = qinghui[0];
	CMyPublicData::setfunc(10, 16, 34, 1);
}


void Qinghui::OnBnClickedButton34()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double2++;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		qinghui[1] = m_double2;
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		qinghui[1] = m_double2;
	}
	datatestDPU[4] = qinghui[1];
	CMyPublicData::setfunc(10, 16, 35, 1);
}


void Qinghui::OnBnClickedButton10()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double2--;
	if (0 <= m_double2&& m_double2 <= 255)
	{
		UpdateData(FALSE);
		qinghui[1] = m_double2;
	}
	else
	{
		m_double2++;
		UpdateData(FALSE);
		qinghui[1] = m_double2;
	}
	datatestDPU[4] = qinghui[1];
	CMyPublicData::setfunc(10, 16, 35, 1);
}


void Qinghui::OnBnClickedButton55()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		qinghui[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		qinghui[2] = m_double3;
	}
	datatestDPU[4] = qinghui[2];
	CMyPublicData::setfunc(10, 16, 36, 1);
}


void Qinghui::OnBnClickedButton35()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		qinghui[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		qinghui[2] = m_double3;
	}
	datatestDPU[4] = qinghui[2];
	CMyPublicData::setfunc(10, 16, 36, 1);
}



BOOL Qinghui::PreTranslateMessage(MSG* pMsg)
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
			UpdateData(FALSE);
			qinghui[0] = m_double1;
		}
		datatestDPU[4] = qinghui[0];
		CMyPublicData::setfunc(10, 16, 34, 1);
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
				qinghui[1] = m_double2;
			}
			datatestDPU[4] = qinghui[1];
			CMyPublicData::setfunc(10, 16, 35, 1);
			return TRUE;
		}
		else
		{
			pEdit = (CEdit*)GetDlgItem(IDC_EDIT23);
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
					qinghui[2] = m_double3;
				}
				datatestDPU[4] = qinghui[2];
				CMyPublicData::setfunc(10, 16, 36, 1);
				return TRUE;
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


void Qinghui::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: �ڴ˴������Ϣ����������
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL Qinghui::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num2501", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC0)->SetWindowText(cstr);
	opx.QueryNode_Text("num2502", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num2503", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num2504", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2505", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON11)->SetWindowText(cstr);
	opx.QueryNode_Text("num2506", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);



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
	GetDlgItem(IDC_EDIT23)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}

void Qinghui::ReSize()
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

void Qinghui::OnBnClickedButton11()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CMyPublicData::setfunc(10, 3, 9, 1);
	//CMyPublicData::bit_set(10, 9, 6, false);
	//CMyPublicData::bit_set(10, 9, 8, false);
	CMyPublicData::bit_set(10, 9, 0, true);
}


void Qinghui::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(qinghui[0]);
	opx.ModifyNode("num1301", str);
	str = opx.numtoString(qinghui[1]);
	opx.ModifyNode("num1302", str);
	str = opx.numtoString(qinghui[2]);
	opx.ModifyNode("num1303", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}
