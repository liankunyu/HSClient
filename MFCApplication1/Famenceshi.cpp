// Famenceshi.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Famenceshi.h"
#include "afxdialogex.h"
#include "Mianji.h"
#include "hunselingmindu.h"
#include "InputDlg.h"
#include "Liuliangsheding.h"
#include "rlingmindu.h"
#include "Blingmindu.h"
#include "Yansemingan.h"
#include "Qinghui.h"
#include "Moshixuanze.h"
#include "Glingmindu.h"
#include "XMLHelper.h"

// Famenceshi �Ի���

IMPLEMENT_DYNAMIC(Famenceshi, CDialogEx)

Famenceshi::Famenceshi(CWnd* pParent /*=NULL*/)
	: CDialogEx(Famenceshi::IDD, pParent)
	, m_double1(famen[0])
	, m_double2(famen[1])
	, m_double3(famen[2])
	, m_double4(famen[3])
	, m_double5(famen[4])
	, m_double6(famen[5])
	, xiangjixuanze(32)
	, flag_num(1)
	, m_double7(famen[6])
{

}

Famenceshi::~Famenceshi()
{
}

void Famenceshi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT18, m_double2);
	DDX_Text(pDX, IDC_EDIT24, m_double3);
	DDX_Text(pDX, IDC_EDIT47, m_double4);
	DDX_Text(pDX, IDC_EDIT46, m_double5);
	DDX_Text(pDX, IDC_EDIT51, m_double6);
	DDX_Control(pDX, IDC_COMBO1, m_combox1);
	DDX_Text(pDX, IDC_EDIT62, m_double7);
}


BEGIN_MESSAGE_MAP(Famenceshi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON9, &Famenceshi::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON35, &Famenceshi::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON38, &Famenceshi::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON8, &Famenceshi::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON33, &Famenceshi::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON55, &Famenceshi::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON1, &Famenceshi::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Famenceshi::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON5, &Famenceshi::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON4, &Famenceshi::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON7, &Famenceshi::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON6, &Famenceshi::OnBnClickedButton6)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON59, &Famenceshi::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON49, &Famenceshi::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON60, &Famenceshi::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON41, &Famenceshi::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON61, &Famenceshi::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON120, &Famenceshi::OnBnClickedButton120)
	ON_CBN_SELCHANGE(IDC_COMBO1, &Famenceshi::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON14, &Famenceshi::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON10, &Famenceshi::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON16, &Famenceshi::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON56, &Famenceshi::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON15, &Famenceshi::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON17, &Famenceshi::OnBnClickedButton17)
	ON_BN_CLICKED(IDCANCEL, &Famenceshi::OnBnClickedCancel)
	//	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON62, &Famenceshi::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON128, &Famenceshi::OnBnClickedButton128)
END_MESSAGE_MAP()


// Famenceshi ��Ϣ�������


void Famenceshi::OnBnClickedButton9()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	ShutDown(famen[0], famen[1]);     //�ر���һ��ѡ������������ʹ��һλ��0.
	UpdateData(TRUE);
	m_double1++;
	if (1 <= m_double1&& m_double1 <= 10)
	{
		famen[0] = m_double1;
		xiangjixuanze = 29 + flag_num + m_double1 * 2; //���ѡ���������
		UpdateData(FALSE);
	}
	else
	{
		m_double1--;
		famen[0] = m_double1;
		UpdateData(FALSE);
	}
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		datatestDPU[4] = famen[40];     //famnen[40]�������ѡ����������״̬ 0Ϊֹͣ���� 1Ϊ��������
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
		datatestDPU[4] = famen[2];
		CMyPublicData::setfunc(xiangjixuanze, 16, 12, 1);
		datatestDPU[4] = famen[1];
		CMyPublicData::setfunc(xiangjixuanze, 16, 13, 1);
	}
}


void Famenceshi::OnBnClickedButton35()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	ShutDown(famen[0], famen[1]);
	m_double2++;
	if (1 <= m_double2&& m_double2 <= 64)
	{
		famen[1] = m_double2;
		UpdateData(FALSE);
	}
	else
	{
		m_double2--;
		UpdateData(FALSE);
		famen[1] = m_double2;
	}
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		datatestDPU[4] = famen[40];
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
		datatestDPU[4] = famen[1];
		CMyPublicData::setfunc(xiangjixuanze, 16, 13, 1);
	}
}


void Famenceshi::OnBnClickedButton38()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double3++;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		famen[2] = m_double3;
	}
	else
	{
		m_double3--;
		UpdateData(FALSE);
		famen[2] = m_double3;
	}
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		datatestDPU[4] = famen[2];
		CMyPublicData::setfunc(xiangjixuanze, 16, 12, 1);
	}
}


void Famenceshi::OnBnClickedButton8()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	ShutDown(famen[0], famen[1]);
	UpdateData(TRUE);
	m_double1--;
	if (1 <= m_double1&& m_double1 <= 10)
	{
		UpdateData(FALSE);
		xiangjixuanze = 29 + flag_num + m_double1 * 2; //���ѡ���������
		famen[0] = m_double1;
	}
	else
	{
		m_double1++;
		UpdateData(FALSE);
		famen[0] = m_double1;
	}
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		datatestDPU[4] = famen[40];     //famnen[40]�������ѡ����������״̬ 0Ϊֹͣ���� 1Ϊ��������
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
		datatestDPU[4] = famen[2];
		CMyPublicData::setfunc(xiangjixuanze, 16, 12, 1);
		datatestDPU[4] = famen[1];
		CMyPublicData::setfunc(xiangjixuanze, 16, 13, 1);
	}
}


void Famenceshi::OnBnClickedButton33()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	ShutDown(famen[0], famen[1]);
	m_double2--;
	if (1 <= m_double2&& m_double2 <= 64)
	{
		famen[1] = m_double2;
		UpdateData(FALSE);
	}
	else
	{
		m_double2++;
		famen[1] = m_double2;
		UpdateData(FALSE);
	}
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		datatestDPU[4] = famen[40];
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
		datatestDPU[4] = famen[1];
		CMyPublicData::setfunc(xiangjixuanze, 16, 13, 1);
	}
}


void Famenceshi::OnBnClickedButton55()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double3--;
	if (0 <= m_double3&& m_double3 <= 255)
	{
		UpdateData(FALSE);
		famen[2] = m_double3;
	}
	else
	{
		m_double3++;
		UpdateData(FALSE);
		famen[2] = m_double3;
	}
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		datatestDPU[4] = famen[2];
		CMyPublicData::setfunc(xiangjixuanze, 16, 12, 1);
	}
}





void Famenceshi::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CLiuliangsheding liuliang1;
	liuliang1.DoModal();
}


void Famenceshi::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	rlingmindu rlingmin1;
	rlingmin1.DoModal();
}


void Famenceshi::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mianji mianji1;
	mianji1.DoModal();
}


void Famenceshi::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Yansemingan yanse1;
	yanse1.DoModal();
}


void Famenceshi::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Qinghui qinghui1;
	qinghui1.DoModal();
}


void Famenceshi::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Moshixuanze moshi1;
	moshi1.DoModal();
}


BOOL Famenceshi::PreTranslateMessage(MSG* pMsg)
{
	// TODO: �ڴ����ר�ô����/����û���
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		ShutDown(famen[0], famen[1]);
		UpdateData(TRUE);
		CInputDlg dlg;
		CMyPublicData::calculate(m_double1, famen, 0, dlg, 10, 1);
		UpdateData(FALSE);
		xiangjixuanze = 29 + flag_num + m_double1 * 2; //���ѡ���������
		if (modsd[xiangjixuanze - 32] != "OFF")
		{
			datatestDPU[4] = famen[40];
			CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
			datatestDPU[4] = famen[1];
			CMyPublicData::setfunc(xiangjixuanze, 16, 13, 1);
		}
		//datatestDPU[4] = famen[0];
		//CMyPublicData::setfunc(xiangjixuanze, 16, 10, 1);
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
			CMyPublicData::calculate(m_double2, famen, 1, dlg, 64, 1);
			UpdateData(FALSE);
			if (modsd[xiangjixuanze - 32] != "OFF")
			{
				datatestDPU[4] = famen[40];
				CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
				datatestDPU[4] = famen[1];
				CMyPublicData::setfunc(xiangjixuanze, 16, 13, 1);
			}
			//datatestDPU[4] = famen[1];
			//CMyPublicData::setfunc(xiangjixuanze, 16, 13, 1);
			return TRUE;
		}
		else
		{
			pEdit = (CEdit*)GetDlgItem(IDC_EDIT24);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				UpdateData(TRUE);
				CInputDlg dlg;
				CMyPublicData::calculate(m_double3, famen, 2, dlg, 255, 0);
				UpdateData(FALSE);
				if (modsd[xiangjixuanze - 32] != "OFF")
				{
					datatestDPU[4] = famen[2];
					CMyPublicData::setfunc(xiangjixuanze, 16, 12, 1);
				}
				return TRUE;
			}
			else
			{
				pEdit = (CEdit*)GetDlgItem(IDC_EDIT47);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					UpdateData(TRUE);
					CInputDlg dlg;
					CMyPublicData::calculate(m_double4, famen, 3, dlg, 255, 0);
					UpdateData(FALSE);
					for (int i = 0; i < 20; i++)
					{
						if (modsd[i] == "1")//�ж����ѡ�����ʲôģʽ
						{
							datatestDPU[4] = famen[3];
							CMyPublicData::setfunc(32 + i, 16, 4, 1);
						}
					}
					return TRUE;
				}
				else
				{
					pEdit = (CEdit*)GetDlgItem(IDC_EDIT46);
					ASSERT(pEdit && pEdit->GetSafeHwnd());
					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
					{
						UpdateData(TRUE);
						CInputDlg dlg;
						CMyPublicData::calculate(m_double5, famen, 4, dlg, 255, 0);
						UpdateData(FALSE);
						for (int i = 0; i < 20; i++)
						{
							if (modsd[i] == "2")//�ж����ѡ�����ʲôģʽ
							{
								datatestDPU[4] = famen[4];
								CMyPublicData::setfunc(32 + i, 16, 4, 1);
							}
						}
						return TRUE;
					}
					else
					{
						pEdit = (CEdit*)GetDlgItem(IDC_EDIT51);
						ASSERT(pEdit && pEdit->GetSafeHwnd());
						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
						{
							UpdateData(TRUE);
							CInputDlg dlg;
							CMyPublicData::calculate(m_double6, famen, 5, dlg, 255, 0);
							UpdateData(FALSE);
							for (int i = 0; i < 20; i++)
							{
								if (modsd[i] != "OFF")
								{
									datatestDPU[4] = famen[5];
									CMyPublicData::setfunc(32 + i, 16, 9, 1);
								}
							}
							return TRUE;
						}
						else
						{
							pEdit = (CEdit*)GetDlgItem(IDC_EDIT62);
							ASSERT(pEdit && pEdit->GetSafeHwnd());
							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
							{
								UpdateData(TRUE);
								CInputDlg dlg;
								CMyPublicData::calculate(m_double7, famen, 6, dlg, 255, 0);
								UpdateData(FALSE);
								for (int i = 0; i < 20; i++)
								{
									if (modsd[i] == "3")//�ж����ѡ�����ʲôģʽ
									{
										datatestDPU[4] = famen[6];
										CMyPublicData::setfunc(32 + i, 16, 4, 1);
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
	return CDialogEx::PreTranslateMessage(pMsg);
}


void Famenceshi::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: �ڴ˴������Ϣ����������
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


BOOL Famenceshi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num0701", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC0)->SetWindowText(cstr);
	opx.QueryNode_Text("num0702", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC8)->SetWindowText(cstr);
	opx.QueryNode_Text("num0703", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num0704", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num0705", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num0706", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num0707", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num0708", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC9)->SetWindowText(cstr);
	opx.QueryNode_Text("num0709", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC7)->SetWindowText(cstr);
	opx.QueryNode_Text("num0710", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON14)->SetWindowText(cstr);
	opx.QueryNode_Text("num0711", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON10)->SetWindowText(cstr);
	opx.QueryNode_Text("num0712", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON16)->SetWindowText(cstr);
	opx.QueryNode_Text("num0713", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON56)->SetWindowText(cstr);
	opx.QueryNode_Text("num0714", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC33)->SetWindowText(cstr);
	opx.QueryNode_Text("num0715", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.QueryNode_Text("num0720", yuyan); //��ʼ��combobox
	cstr = opx.UTF8ToUnicode(yuyan);
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num0721", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num0722", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num0723", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	m_combox1.AddString(cstr);
	opx.QueryNode_Text("num0724", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON17)->SetWindowText(cstr);
	if (famencs == true)
	{
		flag_num = famen[41];
		if (famen[41] == 2)
		{
			opx.QueryNode_Text("num0725", yuyan);
			cstr = opx.UTF8ToUnicode(yuyan);
			GetDlgItem(IDC_BUTTON17)->SetWindowText(cstr);
		}
		if (famen[40] == 0)
		{
			m_combox1.SetCurSel(3);
		}
		if (famen[40] == 1)
		{
			m_combox1.SetCurSel(0);
		}
		if (famen[40] == 2)
		{
			m_combox1.SetCurSel(2);
		}
		if (famen[40] == 3)
		{
			m_combox1.SetCurSel(1);
		}
		xiangjixuanze = 29 + flag_num + m_double1 * 2; //���ѡ���������
		datatestDPU[4] = famen[40];     //famnen[40]�������ѡ����������״̬ 0Ϊֹͣ���� 1Ϊ��������
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
		datatestDPU[4] = famen[1];
		CMyPublicData::setfunc(xiangjixuanze, 16, 13, 1);
	}
	CMyPublicData::setfunc(10, 3, 9, 1);
	if (CMyPublicData::bit_read(10, 9, 6))
	{
		GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("ON"));
	}
	else
	{
		GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("OFF"));
	}
	opx.SaveFile();
	UpdateData(FALSE);
	GetDlgItem(IDC_COMBO1)->EnableWindow(FALSE);
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
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT24)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT47)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT46)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT62)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT51)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}

void Famenceshi::ReSize()
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

void Famenceshi::OnBnClickedButton59()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double4++;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		famen[3] = m_double4;
	}
	else
	{
		m_double4--;
		UpdateData(FALSE);
		famen[3] = m_double4;
	}
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] == "1")//�ж����ѡ�����ʲôģʽ
		{
			datatestDPU[4] = famen[3];
			CMyPublicData::setfunc(32 + i, 16, 4, 1);
		}
	}
}


void Famenceshi::OnBnClickedButton49()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double4--;
	if (0 <= m_double4&& m_double4 <= 255)
	{
		UpdateData(FALSE);
		famen[3] = m_double4;
	}
	else
	{
		m_double4++;
		UpdateData(FALSE);
		famen[3] = m_double4;
	}
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] == "1")//�ж����ѡ�����ʲôģʽ
		{
			datatestDPU[4] = famen[3];
			CMyPublicData::setfunc(32 + i, 16, 4, 1);
		}
	}
}


void Famenceshi::OnBnClickedButton60()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double5++;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		famen[4] = m_double5;
	}
	else
	{
		m_double5--;
		UpdateData(FALSE);
		famen[4] = m_double5;
	}
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] == "2")//�ж����ѡ�����ʲôģʽ
		{
			datatestDPU[4] = famen[4];
			CMyPublicData::setfunc(32 + i, 16, 4, 1);
		}
	}
}


void Famenceshi::OnBnClickedButton41()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double5--;
	if (0 <= m_double5&& m_double5 <= 255)
	{
		UpdateData(FALSE);
		famen[4] = m_double5;
	}
	else
	{
		m_double5++;
		UpdateData(FALSE);
		famen[4] = m_double5;
	}
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] == "2")      //�ж����ѡ�����ʲôģʽ
		{
			datatestDPU[4] = famen[4];
			CMyPublicData::setfunc(32 + i, 16, 4, 1);
		}
	}
}


void Famenceshi::OnBnClickedButton61()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double6++;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		famen[5] = m_double6;
	}
	else
	{
		m_double6--;
		UpdateData(FALSE);
		famen[5] = m_double6;
	}
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			datatestDPU[4] = famen[5];
			CMyPublicData::setfunc(32 + i, 16, 9, 1);
		}
	}
}


void Famenceshi::OnBnClickedButton120()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double6--;
	if (0 <= m_double6&& m_double6 <= 255)
	{
		UpdateData(FALSE);
		famen[5] = m_double6;
	}
	else
	{
		m_double6++;
		UpdateData(FALSE);
		famen[5] = m_double6;
	}
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			datatestDPU[4] = famen[5];
			CMyPublicData::setfunc(32 + i, 16, 9, 1);
		}
	}
}




void Famenceshi::OnCbnSelchangeCombo1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString strChoosed;
	m_combox1.GetLBText(m_combox1.GetCurSel(), strChoosed);
	if (strChoosed == "ֹͣ����")
	{
		datatestDPU[4] = 0;
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
	}
	if (strChoosed == "������")
	{
		datatestDPU[4] = 1;
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
	}
	if (strChoosed == "ѭ������")
	{
		datatestDPU[4] = 2;
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
	}
	if (strChoosed == "���ײ���")
	{
		datatestDPU[4] = 3;
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
	}
}


void Famenceshi::OnBnClickedButton14()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		datatestDPU[4] = 1;
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
	}
	m_combox1.SetCurSel(0);
	famen[40] = 1;
}


void Famenceshi::OnBnClickedButton10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	xiangjixuanze = 29 + flag_num + famen[0] * 2; //���ѡ���������
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		datatestDPU[4] = 3;
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
		m_combox1.SetCurSel(1);
		datatestDPU[4] = famen[1];
		CMyPublicData::setfunc(xiangjixuanze, 16, 13, 1);
		famen[40] = 3;
	}
}


void Famenceshi::OnBnClickedButton16()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	xiangjixuanze = 29 + flag_num + famen[0] * 2; //���ѡ���������
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		datatestDPU[4] = famen[1];
		CMyPublicData::setfunc(xiangjixuanze, 16, 13, 1);
		datatestDPU[4] = 2;
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
		m_combox1.SetCurSel(2);
		famen[40] = 2;
	}
}


void Famenceshi::OnBnClickedButton56()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	xiangjixuanze = 29 + flag_num + famen[0] * 2; //���ѡ���������
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		datatestDPU[4] = 0;
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
	}
	m_combox1.SetCurSel(3);
	famen[40] = 0;
}


void Famenceshi::OnBnClickedButton15()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CMyPublicData::setfunc(10, 3, 9, 1);
	if (CMyPublicData::bit_read(10, 9, 6))
	{
		CMyPublicData::bit_set(10, 9, 6, false);
		GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("OFF"));
	}
	else
	{
		CMyPublicData::bit_set(10, 9, 6, true);
		GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("ON"));
	}
}


void Famenceshi::OnBnClickedButton17()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	ShutDown(famen[0], famen[1]);
	if (flag_num == 2)
	{
		opx.QueryNode_Text("num0724", yuyan);
		cstr = opx.UTF8ToUnicode(yuyan);
		GetDlgItem(IDC_BUTTON17)->SetWindowText(cstr);
		flag_num = 1;
		xiangjixuanze = 29 + flag_num + m_double1 * 2; //���ѡ���������
		UpdateData(FALSE);
	}
	else
	{
		opx.QueryNode_Text("num0725", yuyan);
		cstr = opx.UTF8ToUnicode(yuyan);
		GetDlgItem(IDC_BUTTON17)->SetWindowText(cstr);
		flag_num = 2;
		xiangjixuanze = 29 + flag_num + m_double1 * 2; //���ѡ���������
		UpdateData(FALSE);
	}
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		datatestDPU[4] = famen[40];     //famnen[40]�������ѡ����������״̬ 0Ϊֹͣ���� 1Ϊ��������
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
		datatestDPU[4] = famen[2];
		CMyPublicData::setfunc(xiangjixuanze, 16, 12, 1);
		datatestDPU[4] = famen[1];
		CMyPublicData::setfunc(xiangjixuanze, 16, 13, 1);
	}
	opx.SaveFile();
}


void Famenceshi::OnBnClickedCancel()
{
	xiangjixuanze = 29 + flag_num + famen[0] * 2;
	if (modsd[xiangjixuanze - 32] != "OFF")
	{
		ShutDown(famen[0], famen[1]);
	}
	if (flag_num == 1)
	{
		famen[41] = 1;
	}
	else
	{
		famen[41] = 2;
	}
	famencs = true;
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(famen[0]);
	opx.ModifyNode("num0501", str);
	str = opx.numtoString(famen[1]);
	opx.ModifyNode("num0502", str);
	str = opx.numtoString(famen[2]);
	opx.ModifyNode("num0503", str);
	str = opx.numtoString(famen[3]);
	opx.ModifyNode("num0504", str);
	str = opx.numtoString(famen[4]);
	opx.ModifyNode("num0505", str);
	str = opx.numtoString(famen[5]);
	opx.ModifyNode("num0506", str);
	str = opx.numtoString(famen[6]);
	opx.ModifyNode("num0507", str);
	str = opx.numtoString(famen[7]);
	opx.ModifyNode("num0508", str);
	str = opx.numtoString(famen[8]);
	opx.ModifyNode("num0509", str);
	str = opx.numtoString(famen[9]);
	opx.ModifyNode("num0510", str);
	str = opx.numtoString(famen[10]);
	opx.ModifyNode("num0511", str);
	str = opx.numtoString(famen[11]);
	opx.ModifyNode("num0512", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}

void  Famenceshi::ShutDown(double dao, double kong)
{
	xiangjixuanze = 29 + flag_num + dao * 2;
	if (modsd[xiangjixuanze-32] != "OFF") //���ж�����Ƿ��ڿ���״̬
	{
		datatestDPU[4] = 0;
		CMyPublicData::setfunc(xiangjixuanze, 16, 1, 1);
	}
}


void Famenceshi::OnBnClickedButton62()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double7++;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		famen[6] = m_double7;
	}
	else
	{
		m_double7--;
		UpdateData(FALSE);
		famen[6] = m_double7;
	}
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] == "3")//�ж����ѡ�����ʲôģʽ
		{
			datatestDPU[4] = famen[6];
			CMyPublicData::setfunc(32 + i, 16, 4, 1);
		}
	}
}


void Famenceshi::OnBnClickedButton128()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	m_double7--;
	if (0 <= m_double7&& m_double7 <= 255)
	{
		UpdateData(FALSE);
		famen[6] = m_double7;
	}
	else
	{
		m_double7++;
		UpdateData(FALSE);
		famen[6] = m_double7;
	}
	if (modsd[xiangjixuanze - 32] == "3")//�ж����ѡ�����ʲôģʽ
	{
		datatestDPU[4] = famen[6];
		CMyPublicData::setfunc(xiangjixuanze, 16, 4, 1);
	}
}
