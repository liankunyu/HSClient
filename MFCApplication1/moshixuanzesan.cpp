// moshixuanzesan.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "moshixuanzesan.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "InputDlg.h"
#include <sstream>
#include <string>
#include "Moshixuanze.h"
#include "moshixuanzeer.h"
#include "MyPublicData.h"
#include "ENINPUT.h"
#include "Tip.h"
#include "Tip2.h"
// moshixuanzesan �Ի���

IMPLEMENT_DYNAMIC(moshixuanzesan, CDialogEx)

moshixuanzesan::moshixuanzesan(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MOSHIXUANZESAN_DIALOG, pParent)
	, m_mode11(_T("Default"))
	, m_mode12(_T("Default"))
	, m_mode13(_T("Default"))
	, m_mode14(_T("Default"))
	, m_mode15(_T("Default"))
	, m_mode16(_T(""))
{

}

moshixuanzesan::~moshixuanzesan()
{
}

void moshixuanzesan::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT4, m_mode11);
	DDX_Text(pDX, IDC_EDIT23, m_mode12);
	DDX_Text(pDX, IDC_EDIT24, m_mode13);
	DDX_Text(pDX, IDC_EDIT34, m_mode14);
	DDX_Text(pDX, IDC_EDIT35, m_mode15);
	DDX_Text(pDX, IDC_EDIT25, m_mode16);
}


BEGIN_MESSAGE_MAP(moshixuanzesan, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &moshixuanzesan::OnBnClickedButton1)
	ON_WM_SIZE()
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BUTTON4, &moshixuanzesan::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, &moshixuanzesan::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON8, &moshixuanzesan::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON10, &moshixuanzesan::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON2, &moshixuanzesan::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON5, &moshixuanzesan::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON7, &moshixuanzesan::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON9, &moshixuanzesan::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON57, &moshixuanzesan::OnBnClickedButton57)
	ON_BN_CLICKED(IDCANCEL, &moshixuanzesan::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON3, &moshixuanzesan::OnBnClickedButton3)
END_MESSAGE_MAP()


// moshixuanzesan ��Ϣ�������


void moshixuanzesan::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Tip2 = "num6801";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
			UpdateData(TRUE);
			ReadXML("mode11.xml");
			m_mode16 = L"MODE11   " + m_mode11;
			string mc;
			opXML opx("name.xml");
			USES_CONVERSION;
			mc = W2A(m_mode16);
			opx.ModifyNode("name96", mc);
			mc = "11";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();
			UpdateData(FALSE);
		}
}


void moshixuanzesan::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: �ڴ˴������Ϣ����������
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}
void moshixuanzesan::ReSize()
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

void moshixuanzesan::OnOK()
{
	// TODO: �ڴ����ר�ô����/����û���
}


void moshixuanzesan::OnCancel()
{
	// TODO: �ڴ����ר�ô����/����û���
}


BOOL moshixuanzesan::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);	
	opx.QueryNode_Text("num2301", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num2302", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2303", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC12)->SetWindowText(cstr);
	opx.QueryNode_Text("num2304", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num2305", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2306", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON6)->SetWindowText(cstr);
	opx.QueryNode_Text("num2307", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON8)->SetWindowText(cstr);
	opx.QueryNode_Text("num2308", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON10)->SetWindowText(cstr);
	opx.QueryNode_Text("num2309", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
	opx.QueryNode_Text("num2310", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON5)->SetWindowText(cstr);
	opx.QueryNode_Text("num2311", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON7)->SetWindowText(cstr);
	opx.QueryNode_Text("num2312", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON9)->SetWindowText(cstr);
	opx.QueryNode_Text("num2313", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_BUTTON57)->SetWindowText(cstr);
	opx.QueryNode_Text("num2314", yuyan);
	cstr = yuyan;
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

	GetDlgItem(IDC_EDIT4)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT23)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT24)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT34)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT35)->EnableWindow(FALSE);

	int nMargin = 18;                      //ʹ�༭�����ִ�ֱ����
	GetDlgItem(IDC_EDIT4)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT4)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT23)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT24)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT25)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);

	UpdateData(TRUE);
	const char* mc;    //����
	opXML opxx("name.xml");
	opxx.QueryNode_Text("name11", mc);
	m_mode11 = mc;
	opxx.QueryNode_Text("name12", mc);
	m_mode12= mc;
	opxx.QueryNode_Text("name13", mc);
	m_mode13 = mc;
	opxx.QueryNode_Text("name14", mc);
	m_mode14= mc;
	opxx.QueryNode_Text("name15", mc);
	m_mode15 = mc;
	opxx.QueryNode_Text("name96", mc);
	m_mode16 = mc;
	opxx.SaveFile();
	UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void moshixuanzesan::OnClose()
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CDialogEx::OnCancel();
}


void moshixuanzesan::ReadXML(string str)
{
	//��ȡXML�ļ�����ֵ
	CMyPublicData::readXML(str);
	for (int i = 0; i < 21; i++)
	{
		if (tongxincuowu[i] == (-1))
		{
			m_Tip = "num6601";
			Tip tip;
			tip.DoModal();
			return;
		}
	}
	m_Tip = "num6615";
	Tip tip;
	tip.DoModal();
}



double moshixuanzesan::atoi(const char* str)
{
	try
	{
		string ss = str;
		istringstream iss(ss);
		double num;
		iss >> num;
		return num;
	}
	catch (const std::exception&)
	{
	}
}


void moshixuanzesan::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Tip2 = "num6801";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
			UpdateData(TRUE);
			ReadXML("mode12.xml");
			m_mode16 = L"MODE12   " + m_mode12;
			string mc;
			opXML opx("name.xml");
			USES_CONVERSION;
			mc = W2A(m_mode16);
			opx.ModifyNode("name96", mc);
			mc = "12";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();
			UpdateData(FALSE);
		}
}


void moshixuanzesan::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Tip2 = "num6801";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
			UpdateData(TRUE);
			ReadXML("mode13.xml");
			m_mode16 = L"MODE13   " + m_mode13;
			string mc;
			opXML opx("name.xml");
			USES_CONVERSION;
			mc = W2A(m_mode16);
			opx.ModifyNode("name96", mc);
			mc = "13";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();
			UpdateData(FALSE);
		}
}


void moshixuanzesan::OnBnClickedButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Tip2 = "num6801";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
			UpdateData(TRUE);
			ReadXML("mode14.xml");
			m_mode16 = L"MODE14   " + m_mode14;
			string mc;
			opXML opx("name.xml");
			USES_CONVERSION;
			mc = W2A(m_mode16);
			opx.ModifyNode("name96", mc);
			mc = "14";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();
			UpdateData(FALSE);
		}
}


void moshixuanzesan::OnBnClickedButton10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Tip2 = "num6801";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
			UpdateData(TRUE);
			ReadXML("mode15.xml");
			m_mode16 = L"MODE15   " + m_mode15;
			string mc;
			opXML opx("name.xml");
			USES_CONVERSION;
			mc = W2A(m_mode16);
			opx.ModifyNode("name96", mc);
			mc = "15";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();
			UpdateData(FALSE);
		}
}


void moshixuanzesan::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Tip2 = "num6802";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		CMyPublicData::writerXML("mode11.xml");
		m_mode16 = L"MODE11   " + m_mode11;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "11";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();
	}
}


void moshixuanzesan::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Tip2 = "num6802";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		CMyPublicData::writerXML("mode12.xml");
		m_mode16 = L"MODE12   " + m_mode12;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "12";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();
	}
}


void moshixuanzesan::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Tip2 = "num6802";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		CMyPublicData::writerXML("mode13.xml");
		MessageBox(L"�洢�ɹ���", L"��ʾ");
		m_mode16 = L"MODE13   " + m_mode13;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "13";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();
	}
}


void moshixuanzesan::OnBnClickedButton9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Tip2 = "num6802";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		CMyPublicData::writerXML("mode14.xml");
		m_mode16 = L"MODE14   " + m_mode14;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "14";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();
	}
}


void moshixuanzesan::OnBnClickedButton57()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_Tip2 = "num6802";
	Tip2 tip2;
	tip2.DoModal();
	if (m_Retip == 0)
	{
		m_Tip = "num6614";
		Tip tip;
		tip.DoModal();
	}
	if (m_Retip == 1)
	{
		UpdateData(TRUE);
		CMyPublicData::writerXML("mode11.xml");
		m_mode16 = L"MODE15   " + m_mode15;
		string mc;
		opXML opx("name.xml");
		USES_CONVERSION;
		mc = W2A(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "15";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();
	}
}



void moshixuanzesan::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	sexuanfangan = true;
	CDialogEx::OnCancel();
}



void moshixuanzesan::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString cstr;
	GetDlgItem(IDC_BUTTON3)->GetWindowText(cstr);
	if (cstr.Trim() == L"ON")
	{
		GetDlgItem(IDC_EDIT4)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT23)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT24)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT34)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT35)->EnableWindow(TRUE);
		GetDlgItem(IDC_BUTTON3)->SetWindowText(L"OFF");
	}
	else
	{
		GetDlgItem(IDC_EDIT4)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT23)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT24)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT34)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT35)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON3)->SetWindowText(L"ON");
	}
}


BOOL moshixuanzesan::PreTranslateMessage(MSG* pMsg)
{
	// TODO: �ڴ����ר�ô����/����û���
	USES_CONVERSION;
	UpdateData(TRUE);
	const char* cstr;
	string mc;
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT4);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		ENINPUT ent;
		if (ent.DoModal() == IDOK)
		{
			m_mode11 = ent.ValueShow;
			opXML opx("name.xml");   //��name.xml�ļ�
			mc = W2A(m_mode11);       //��CStringת��Ϊstring
			opx.ModifyNode("name11", mc);   //�޸ı���name.xml��name6��ֵ
			opx.QueryNode_Text("name97", cstr);   //��ѯname.xml��name97��ֵ
			mc = cstr;
			if (mc == "11")                      //����޸ķ�������Ϊ��ǰ�������ƽ���ɫѡ����ˢ��
			{
				m_mode16 = L"MODE11   " + m_mode11;
				mc = W2A(m_mode16);
				opx.ModifyNode("name96", mc);    //�޸ĵĵ�ǰɫѡ����
			}
			opx.SaveFile();         //����
			UpdateData(FALSE);
		}
		return TRUE;
	}
	else
	{
		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT23);
		ASSERT(pEdit && pEdit->GetSafeHwnd());
		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
		{
			ENINPUT ent;
			if (ent.DoModal() == IDOK)
			{
				m_mode12 = ent.ValueShow;
				opXML opx("name.xml");
				mc = W2A(m_mode12);
				opx.ModifyNode("name12", mc);
				opx.QueryNode_Text("name97", cstr);
				mc = cstr;
				if (mc == "12")
				{
					m_mode16 = L"MODE12   " + m_mode12;
					mc = W2A(m_mode16);
					opx.ModifyNode("name96", mc);
				}
				opx.SaveFile();
				UpdateData(FALSE);
			}
			return TRUE;
		}
		else
		{
			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT24);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				ENINPUT ent;
				if (ent.DoModal() == IDOK)
				{
					m_mode13 = ent.ValueShow;
					opXML opx("name.xml");
					mc = W2A(m_mode13);
					opx.ModifyNode("name13", mc);
					opx.QueryNode_Text("name97", cstr);
					mc = cstr;
					if (mc == "13")
					{
						m_mode16 = L"MODE13   " + m_mode13;
						mc = W2A(m_mode16);
						opx.ModifyNode("name96", mc);
					}
					opx.SaveFile();
					UpdateData(FALSE);
				}
				return TRUE;
			}
			else
			{
				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT34);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					ENINPUT ent;
					if (ent.DoModal() == IDOK)
					{
						m_mode14 = ent.ValueShow;
						opXML opx("name.xml");
						mc = W2A(m_mode14);
						opx.ModifyNode("name14", mc);
						opx.QueryNode_Text("name97", cstr);
						mc = cstr;
						if (mc == "14")
						{
							m_mode16 = L"MODE14   " + m_mode14;
							mc = W2A(m_mode16);
							opx.ModifyNode("name96", mc);
						}
						opx.SaveFile();
						UpdateData(FALSE);
					}
					return TRUE;
				}
				else
				{
					CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT34);
					ASSERT(pEdit && pEdit->GetSafeHwnd());
					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
					{
						ENINPUT ent;
						if (ent.DoModal() == IDOK)
						{
							m_mode15 = ent.ValueShow;
							opXML opx("name.xml");
							mc = W2A(m_mode15);
							opx.ModifyNode("name15", mc);
							opx.QueryNode_Text("name97", cstr);
							mc = cstr;
							if (mc == "15")
							{
								m_mode16 = L"MODE15   " + m_mode15;
								mc = W2A(m_mode16);
								opx.ModifyNode("name96", mc);
							}
							opx.SaveFile();
							UpdateData(FALSE);
						}
						return TRUE;
					}
				}
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}
