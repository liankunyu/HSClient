// Beijing.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Beijing.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
// Beijing �Ի���

IMPLEMENT_DYNAMIC(Beijing, CDialogEx)

Beijing::Beijing(CWnd* pParent /*=NULL*/)
	: CDialogEx(Beijing::IDD, pParent)
	, m_double1_edit18(beijingban[0])
	, m_double2_edit23(beijingban[1])
	, m_double_edit30(beijingban[2])
	, m_double3_edit32(beijingban[3])
{

}

Beijing::~Beijing()
{
}

void Beijing::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT18, m_double1_edit18);
	DDX_Text(pDX, IDC_EDIT23, m_double2_edit23);
	DDX_Text(pDX, IDC_EDIT30, m_double_edit30);
	DDX_Text(pDX, IDC_EDIT32, m_double3_edit32);
	DDX_Control(pDX, IDC_KAISHIDA, m_kaishi);
	DDX_Control(pDX, IDC_TINGZHIDA, m_tingzhi);
}


BEGIN_MESSAGE_MAP(Beijing, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON12, &Beijing::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON15, &Beijing::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON11, &Beijing::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON14, &Beijing::OnBnClickedButton14)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON13, &Beijing::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON64, &Beijing::OnBnClickedButton64)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDCANCEL, &Beijing::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON50, &Beijing::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON59, &Beijing::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON83, &Beijing::OnBnClickedButton83)
	ON_BN_CLICKED(IDC_KAISHIDA, &Beijing::OnBnClickedKaishida)
	ON_BN_CLICKED(IDC_TINGZHIDA, &Beijing::OnBnClickedTingzhida)
END_MESSAGE_MAP()


// Beijing ��Ϣ�������


void Beijing::OnBnClickedButton12()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double1_edit18++;
	if (0 <= m_double1_edit18&& m_double1_edit18 <= 255)
	{
		UpdateData(FALSE);
		beijingban[0] = m_double1_edit18;
	}
	else
	{
		m_double1_edit18--;
		UpdateData(FALSE);
		beijingban[0] = m_double1_edit18;
	}
	datatestDPU[4] = beijingban[0];
	CMyPublicData::setfunc(10, 16, 38, 1);
}


void Beijing::OnBnClickedButton15()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double2_edit23++;
	if (0 <= m_double2_edit23&& m_double2_edit23 <= 255)
	{
		UpdateData(FALSE);
		beijingban[1] = m_double2_edit23;
	}
	else
	{
		m_double2_edit23--;
		UpdateData(FALSE);
		beijingban[1] = m_double2_edit23;
	}
	datatestDPU[4] = beijingban[1];
	CMyPublicData::setfunc(10, 16, 39, 1);
}


void Beijing::OnBnClickedButton11()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double1_edit18--;
	if (0 <= m_double1_edit18&& m_double1_edit18 <= 255)
	{
		UpdateData(FALSE);
		beijingban[0] = m_double1_edit18;
	}
	else
	{
		m_double1_edit18++;
		UpdateData(FALSE);
		beijingban[0] = m_double1_edit18;
	}
	datatestDPU[4] = beijingban[0];
	CMyPublicData::setfunc(10, 16, 38, 1);
}


void Beijing::OnBnClickedButton14()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double2_edit23--;
	if (0 <= m_double2_edit23&& m_double2_edit23 <= 255)
	{
		UpdateData(FALSE);
		beijingban[1] = m_double2_edit23;
		allData[0][39] = m_double2_edit23;
	}
	else
	{
		m_double2_edit23++;
		UpdateData(FALSE);
		beijingban[1] = m_double2_edit23;
		allData[0][39] = m_double2_edit23;
	}
	datatestDPU[4] = beijingban[1];
	CMyPublicData::setfunc(10, 16, 39, 1);
}



BOOL Beijing::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num0201", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC12)->SetWindowText(cstr);
	opx.QueryNode_Text("num0202", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_KAISHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num0203", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_TINGZHIDA)->SetWindowText(cstr);
	opx.QueryNode_Text("num0204", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num0205", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num0206", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num0207", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	//��ֵ����״̬
	GetDlgItem(IDC_BUTTON50)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON59)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON83)->SetWindowText(zhendong[2]);

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
	UpdateData(FALSE);

	//��ʼ������
	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//��ʼ������λ��
	CRect rect;
	GetClientRect(&rect);     //ȡ�ͻ�����С    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;

	int nMargin = 15;                      //ʹ�༭�����ִ�ֱ����
	GetDlgItem(IDC_EDIT18)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT23)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT30)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT32)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);

	//��ʱ����ÿ��1�β�ѯ
	SetTimer(1, 1000, NULL);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void Beijing::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: �ڴ˴������Ϣ����������
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void Beijing::ReSize()
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


void Beijing::OnBnClickedButton13()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//datatestDPU[4] = 0;
	//CMyPublicData::setfunc(10, 16, 105, 1);
}
void Beijing::OnBnClickedButton64()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//datatestDPU[4] = 0;
	//CMyPublicData::setfunc(10, 16, 106, 1);
}
BOOL Beijing::PreTranslateMessage(MSG* pMsg)         //�����Ļʱ�����˺���������Ϊ�жϵ���ĸ��ؼ��������ж�
{
	// TODO: �ڴ����ר�ô����/����û���
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
			m_double1_edit18 = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
			beijingban[0] = m_double1_edit18;
		}
		datatestDPU[4] = beijingban[0];
		CMyPublicData::setfunc(10, 16, 38, 1);
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
				m_double2_edit23 = _wtof(dlg.ValueShow);
				UpdateData(FALSE);
				beijingban[1] = m_double2_edit23;
			}
			datatestDPU[4] = beijingban[1];
			CMyPublicData::setfunc(10, 16, 39, 1);
			return TRUE;
		}
		//else
		//{
		//	pEdit = (CEdit*)GetDlgItem(IDC_EDIT30);
		//	ASSERT(pEdit && pEdit->GetSafeHwnd());
		//	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		//	{
		//		CInputDlg dlg;
		//		dlg.ValueMax = 999;
		//		dlg.ValueMin = 0;
		//		if (dlg.DoModal() == IDOK)
		//		{
		//			UpdateData(TRUE);
		//			m_double_edit30 = _wtof(dlg.ValueShow);
		//			UpdateData(FALSE);
		//			beijingban[2] = m_double_edit30;
		//		}
		//		datatestDPU[4] = beijingban[2];
		//		CMyPublicData::setfunc(10, 16, 101, 1);
		//		return TRUE;
		//	}
		//	else
		//	{
		//		pEdit = (CEdit*)GetDlgItem(IDC_EDIT32);
		//		ASSERT(pEdit && pEdit->GetSafeHwnd());
		//		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		//		{
		//			CInputDlg dlg;
		//			dlg.ValueMax = 999;
		//			dlg.ValueMin = 0;
		//			if (dlg.DoModal() == IDOK)
		//			{
		//				UpdateData(TRUE);
		//				m_double3_edit32 = _wtof(dlg.ValueShow);
		//				UpdateData(FALSE);
		//				beijingban[3] = m_double3_edit32;
		//			}
		//			datatestDPU[4] = beijingban[3];
		//			CMyPublicData::setfunc(10, 16, 102, 1);
		//			return TRUE;


		//UpdateData(FALSE);
		//return CDialogEx::PreTranslateMessage(pMsg);
		//		}
		//	}
		//}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


void Beijing::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (nIDEvent==1)
	{
		CMyPublicData::setfunc(10, 3, 101, 6);
		if (databuff[4] == 0)
		{
			GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("��λ���"));
		}
		else if (databuff[4] == 2)
		{
			GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("��λ�쳣"));
		}
		else
		{
			GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("��λ��"));
		}
		if (databuff[5] == 0)
		{
			GetDlgItem(IDC_BUTTON64)->SetWindowText(_T("��λ���"));
		}
		else if (databuff[5] == 2)
		{
			GetDlgItem(IDC_BUTTON64)->SetWindowText(_T("��λ�쳣"));
		}
		else
		{
			GetDlgItem(IDC_BUTTON64)->SetWindowText(_T("��λ��"));
		}
		m_double_edit30 = databuff[0];
		m_double3_edit32 = databuff[1];
		UpdateData(FALSE);
	}
	CDialogEx::OnTimer(nIDEvent);
}


void Beijing::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	beijingban[2]=m_double_edit30 ;
	beijingban[3]= m_double3_edit32;
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(beijingban[0]);
	opx.ModifyNode("num0001", str);
	str = opx.numtoString(beijingban[1]);
	opx.ModifyNode("num0002", str);
	str = opx.numtoString(beijingban[2]);
	opx.ModifyNode("num0003", str);
	str = opx.numtoString(beijingban[3]);
	opx.ModifyNode("num0004", str);
	opx.SaveFile();
	KillTimer(1);
	CDialogEx::OnCancel();
}




void Beijing::OnBnClickedButton50()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	GetDlgItem(IDC_BUTTON50)->GetWindowText(zhendong[0]);
	if (zhendong[0] == L"ON")
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"1")
			{
				datatestDPU[4] = 0;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON50)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"1")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON50)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON50)->GetWindowText(zhendong[0]);
}


void Beijing::OnBnClickedButton59()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	GetDlgItem(IDC_BUTTON59)->GetWindowText(zhendong[1]);
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
		GetDlgItem(IDC_BUTTON59)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"2")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON59)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON59)->GetWindowText(zhendong[1]);
}


void Beijing::OnBnClickedButton83()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	GetDlgItem(IDC_BUTTON83)->GetWindowText(zhendong[2]);
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
		GetDlgItem(IDC_BUTTON83)->SetWindowText(_T("OFF"));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (liuliangsd[i] == L"3")
			{
				datatestDPU[4] = 1;
				CMyPublicData::setfunc(10, 16, 20 + i, 1);
			}
		}
		GetDlgItem(IDC_BUTTON83)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON83)->GetWindowText(zhendong[2]);
}


void Beijing::OnBnClickedKaishida()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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


void Beijing::OnBnClickedTingzhida()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
