// moshixuanzeer.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Moshixuanzeer.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "InputDlg.h"
#include <sstream>
#include <string>
#include "Moshixuanze.h"
#include "moshixuanzesan.h"
#include "MyPublicData.h"
#include "ENINPUT.h"
#include "Tip.h"
#include "Tip2.h"
// moshixuanzeer �Ի���

IMPLEMENT_DYNAMIC(moshixuanzeer, CDialogEx)

moshixuanzeer::moshixuanzeer(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MOSHIXUANZEER_DIALOG, pParent)
	, m_mode6(_T(""))
	, m_mode7(_T(""))
	, m_mode8(_T(""))
	, m_mode9(_T(""))
	, m_mode10(_T(""))
	, m_mode16(_T(""))
{

}

moshixuanzeer::~moshixuanzeer()
{
}

void moshixuanzeer::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT4, m_mode6);
	DDX_Text(pDX, IDC_EDIT23, m_mode7);
	DDX_Text(pDX, IDC_EDIT24, m_mode8);
	DDX_Text(pDX, IDC_EDIT34, m_mode9);
	DDX_Text(pDX, IDC_EDIT35, m_mode10);
	DDX_Text(pDX, IDC_EDIT3, m_mode16);
}


BEGIN_MESSAGE_MAP(moshixuanzeer, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &moshixuanzeer::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &moshixuanzeer::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &moshixuanzeer::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &moshixuanzeer::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &moshixuanzeer::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &moshixuanzeer::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &moshixuanzeer::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &moshixuanzeer::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &moshixuanzeer::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON57, &moshixuanzeer::OnBnClickedButton57)
	//	ON_EN_CHANGE(IDC_EDIT4, &moshixuanzeer::OnEnChangeEdit4)
	//	ON_EN_CHANGE(IDC_EDIT23, &moshixuanzeer::OnEnChangeEdit23)
	//	ON_EN_CHANGE(IDC_EDIT24, &moshixuanzeer::OnEnChangeEdit24)
	//	ON_EN_CHANGE(IDC_EDIT34, &moshixuanzeer::OnEnChangeEdit34)
	//	ON_EN_CHANGE(IDC_EDIT35, &moshixuanzeer::OnEnChangeEdit35)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &moshixuanzeer::OnBnClickedCancel)
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BUTTON3, &moshixuanzeer::OnBnClickedButton3)
	//	ON_WM_TIMER()
	//	ON_BN_CLICKED(IDC_BUTTON11, &moshixuanzeer::OnBnClickedButton11)
	//	ON_BN_CLICKED(IDC_BUTTON12, &moshixuanzeer::OnBnClickedButton12)
	//	ON_BN_CLICKED(IDC_BUTTON13, &moshixuanzeer::OnBnClickedButton13)
END_MESSAGE_MAP()


// moshixuanzeer ��Ϣ�������




void moshixuanzeer::ReadXML(string str)
{
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





double moshixuanzeer::atoi(const char* str)
{
	string ss = str;
	istringstream iss(ss);
	double num;
	iss >> num;
	return num;
}



void moshixuanzeer::OnBnClickedButton1()
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
		ReadXML("mode6.xml");       //��ȡmode6.xml�ļ���������Ӧ�Ĳ���ֵ
		m_mode16 = L"MODE6   " + m_mode6;    //��ʾ��ǰɫѡ��������
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);             //CStringת��string
		opx.ModifyNode("name96", mc);   //�޸�name.xml��name96��ֵ
		mc = "6";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();                  //����
		UpdateData(FALSE);
	}
}

void moshixuanzeer::OnBnClickedButton2()
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
		CMyPublicData::writerXML("mode6.xml");
		m_mode16 = L"MODE6   " + m_mode6;    //��ʾ��ǰɫѡ��������
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);             //CStringת��string
		opx.ModifyNode("name96", mc);   //�޸�name.xml��name96��ֵ
		mc = "6";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();                  //����
		UpdateData(FALSE);
		m_Tip = "num6616";
		Tip tip;
		tip.DoModal();
	}
}

void moshixuanzeer::OnBnClickedButton4()
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
		ReadXML("mode7.xml");
		m_mode16 = L"MODE7   " + m_mode7;
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "7";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}


void moshixuanzeer::OnBnClickedButton5()
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
			CMyPublicData::writerXML("mode7.xml");
			m_mode16 = L"MODE7   " + m_mode7;    //��ʾ��ǰɫѡ��������
			string mc;
			opXML opx("name.xml");
			
			mc = opx.UnicodeToUTF8(m_mode16);             //CStringת��string
			opx.ModifyNode("name96", mc);   //�޸�name.xml��name96��ֵ
			mc = "7";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();                  //����
			UpdateData(FALSE);
			m_Tip = "num6616";
			Tip tip;
			tip.DoModal();
		}
}


void moshixuanzeer::OnBnClickedButton6()
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
		ReadXML("mode8.xml");
		m_mode16 = L"MODE8   " + m_mode8;
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "8";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}


void moshixuanzeer::OnBnClickedButton7()
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
			CMyPublicData::writerXML("mode8.xml");
			m_mode16 = L"MODE8   " + m_mode8;    //��ʾ��ǰɫѡ��������
			string mc;
			opXML opx("name.xml");
			
			mc = opx.UnicodeToUTF8(m_mode16);             //CStringת��string
			opx.ModifyNode("name96", mc);   //�޸�name.xml��name96��ֵ
			mc = "8";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();                  //����
			UpdateData(FALSE);
			m_Tip = "num6616";
			Tip tip;
			tip.DoModal();
		}
}


void moshixuanzeer::OnBnClickedButton8()
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
		ReadXML("mode9.xml");
		m_mode16 = L"MODE9   " + m_mode9;
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "9";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}


void moshixuanzeer::OnBnClickedButton9()
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
			CMyPublicData::writerXML("mode9.xml");
			m_mode16 = L"MODE9   " + m_mode9;    //��ʾ��ǰɫѡ��������
			string mc;
			opXML opx("name.xml");
			
			mc = opx.UnicodeToUTF8(m_mode16);             //CStringת��string
			opx.ModifyNode("name96", mc);   //�޸�name.xml��name96��ֵ
			mc = "9";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();                  //����
			UpdateData(FALSE);
			m_Tip = "num6616";
			Tip tip;
			tip.DoModal();
		}
}


void moshixuanzeer::OnBnClickedButton10()
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
		ReadXML("mode10.xml");
		m_mode16 = L"MODE10   " + m_mode10;
		string mc;
		opXML opx("name.xml");
		
		mc = opx.UnicodeToUTF8(m_mode16);
		opx.ModifyNode("name96", mc);
		mc = "10";
		opx.ModifyNode("name97", mc);
		opx.SaveFile();
		UpdateData(FALSE);
	}
}


void moshixuanzeer::OnBnClickedButton57()
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
			CMyPublicData::writerXML("mode10.xml");
			m_mode16 = L"MODE10   " + m_mode10;    //��ʾ��ǰɫѡ��������
			string mc;
			opXML opx("name.xml");
			
			mc = opx.UnicodeToUTF8(m_mode16);             //CStringת��string
			opx.ModifyNode("name96", mc);   //�޸�name.xml��name96��ֵ
			mc = "10";
			opx.ModifyNode("name97", mc);
			opx.SaveFile();                  //����
			UpdateData(FALSE);
			m_Tip = "num6616";
			Tip tip;
			tip.DoModal();
		}
}


//void moshixuanzeer::OnEnChangeEdit4()
//{
//	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
//	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
//	// ���������� CRichEditCtrl().SetEventMask()��
//	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");   //��name.xml�ļ�
//	
//	mc = W2A(m_mode6);       //��CStringת��Ϊstring
//	opx.ModifyNode("name6", mc);   //�޸ı���name.xml��name6��ֵ
//	opx.QueryNode_Text("name97", cstr);   //��ѯname.xml��name97��ֵ
//	mc = cstr;                            
//	if (mc == "6")                      //����޸ķ�������Ϊ��ǰ�������ƽ���ɫѡ����ˢ��
//	{
//		m_mode16 = L"MODE6   " + m_mode6;
//		mc = W2A(m_mode16);
//		opx.ModifyNode("name96", mc);    //�޸ĵĵ�ǰɫѡ����
//	}
//	opx.SaveFile();         //����
//	UpdateData(FALSE);
//}


//void moshixuanzeer::OnEnChangeEdit23()
//{
//	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
//	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
//	// ���������� CRichEditCtrl().SetEventMask()��
//	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	
//	mc = W2A(m_mode7);
//	opx.ModifyNode("name7", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "7")
//	{
//		m_mode16 = L"MODE7   " + m_mode7;
//		mc = W2A(m_mode16);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


//void moshixuanzeer::OnEnChangeEdit24()
//{
//	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
//	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
//	// ���������� CRichEditCtrl().SetEventMask()��
//	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	
//	mc = W2A(m_mode8);
//	opx.ModifyNode("name8", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "8")
//	{
//		m_mode16 = L"MODE8   " + m_mode8;
//		mc = W2A(m_mode16);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


//void moshixuanzeer::OnEnChangeEdit34()
//{
//	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
//	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
//	// ���������� CRichEditCtrl().SetEventMask()��
//	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	
//	mc = W2A(m_mode9);
//	opx.ModifyNode("name9", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "9")
//	{
//		m_mode16 = L"MODE9   " + m_mode9;
//		mc = W2A(m_mode16);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


//void moshixuanzeer::OnEnChangeEdit35()
//{
//	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
//	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
//	// ���������� CRichEditCtrl().SetEventMask()��
//	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
//	const char* cstr;
//	string mc;
//	UpdateData(TRUE);
//	opXML opx("name.xml");
//	
//	mc = W2A(m_mode10);
//	opx.ModifyNode("name10", mc);
//	opx.QueryNode_Text("name97", cstr);
//	mc = cstr;
//	if (mc == "10")
//	{
//		m_mode16 = L"MODE10   " + m_mode10;
//		mc = W2A(m_mode16);
//		opx.ModifyNode("name96", mc);
//	}
//	opx.SaveFile();
//	UpdateData(FALSE);
//}


void moshixuanzeer::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: �ڴ˴������Ϣ����������
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}
void moshixuanzeer::ReSize()
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


BOOL moshixuanzeer::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num2201", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num2202", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2203", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC12)->SetWindowText(cstr);
	opx.QueryNode_Text("num2204", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num2205", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(cstr);
	opx.QueryNode_Text("num2206", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON6)->SetWindowText(cstr);
	opx.QueryNode_Text("num2207", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON8)->SetWindowText(cstr);
	opx.QueryNode_Text("num2208", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON10)->SetWindowText(cstr);
	opx.QueryNode_Text("num2209", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
	opx.QueryNode_Text("num2210", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON5)->SetWindowText(cstr);
	opx.QueryNode_Text("num2211", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON7)->SetWindowText(cstr);
	opx.QueryNode_Text("num2212", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON9)->SetWindowText(cstr);
	opx.QueryNode_Text("num2213", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON57)->SetWindowText(cstr);
	opx.QueryNode_Text("num2214", yuyan);
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


	int nMargin = 18;                      //ʹ�༭�����ִ�ֱ����
	GetDlgItem(IDC_EDIT3)->GetClientRect(&rect);
	OffsetRect(&rect, 0, nMargin);
	GetDlgItem(IDC_EDIT3)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT4)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT23)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT24)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);


	UpdateData(TRUE);
	const char* mc;    //����
	opXML opxx("name.xml");
	opxx.QueryNode_Text("name6", mc);
	m_mode6 = opxx.UTF8ToUnicode(mc);
	opxx.QueryNode_Text("name7", mc);
	m_mode7 = opxx.UTF8ToUnicode(mc);
	opxx.QueryNode_Text("name8", mc);
	m_mode8 = opxx.UTF8ToUnicode(mc);
	opxx.QueryNode_Text("name9", mc);
	m_mode9 = opxx.UTF8ToUnicode(mc);
	opxx.QueryNode_Text("name10", mc);
	m_mode10 = opxx.UTF8ToUnicode(mc);
	opxx.QueryNode_Text("name96", mc);
	m_mode16 = opxx.UTF8ToUnicode(mc);
	opxx.SaveFile();
	GetDlgItem(IDC_EDIT4)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT23)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT24)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT34)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT35)->EnableWindow(FALSE);
	UpdateData(FALSE);
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void moshixuanzeer::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	sexuanfangan = true;   //��֤���ڵڶ�ҳ���ķ���ʱ����һҳɫѡ�������Ը��¡���sexuanfangan=trueʱ��������ʱ���еĺ�����ִ��ɫѡ����ˢ�¡�
	CDialogEx::OnCancel();
}


void moshixuanzeer::OnClose()
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CDialogEx::OnCancel();
}


void moshixuanzeer::OnOK()
{
	// TODO: �ڴ����ר�ô����/����û���
}


void moshixuanzeer::OnCancel()
{
	// TODO: �ڴ����ר�ô����/����û���
}


void moshixuanzeer::OnBnClickedButton3()
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


//void moshixuanzeer::OnTimer(UINT_PTR nIDEvent)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	if (nIDEvent == 1)
//	{
//		if (sexuanfangan == true)
//		{
//			const char* cstr;
//			opXML opx("name.xml");
//			opx.QueryNode_Text("name96", cstr);
//			m_mode16 = cstr;
//			opx.SaveFile();
//			UpdateData(FALSE);
//			sexuanfangan = false;
//		}
//	}
//	CDialogEx::OnTimer(nIDEvent);
//}





BOOL moshixuanzeer::PreTranslateMessage(MSG* pMsg)
{
	// TODO: �ڴ����ר�ô����/����û���
	
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
			m_mode6 = ent.ValueShow;
			opXML opx("name.xml");   //��name.xml�ļ�
			mc = opx.UnicodeToUTF8(m_mode6);       //��CStringת��Ϊstring
			opx.ModifyNode("name6", mc);   //�޸ı���name.xml��name6��ֵ
			opx.QueryNode_Text("name97", cstr);   //��ѯname.xml��name97��ֵ
			mc = cstr;
			if (mc == "6")                      //����޸ķ�������Ϊ��ǰ�������ƽ���ɫѡ����ˢ��
			{
				m_mode16 = L"MODE6   " + m_mode6;
				mc = opx.UnicodeToUTF8(m_mode16);
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
				m_mode7 = ent.ValueShow;
				opXML opx("name.xml");
				mc = opx.UnicodeToUTF8(m_mode7);
				opx.ModifyNode("name7", mc);
				opx.QueryNode_Text("name97", cstr);
				mc = cstr;
				if (mc == "7")
				{
					m_mode16 = L"MODE7   " + m_mode7;
					mc = opx.UnicodeToUTF8(m_mode16);
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
					m_mode8 = ent.ValueShow;
					opXML opx("name.xml");
					mc = opx.UnicodeToUTF8(m_mode8);
					opx.ModifyNode("name8", mc);
					opx.QueryNode_Text("name97", cstr);
					mc = cstr;
					if (mc == "8")
					{
						m_mode16 = L"MODE8   " + m_mode8;
						mc = opx.UnicodeToUTF8(m_mode16);
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
						m_mode9 = ent.ValueShow;
						opXML opx("name.xml");
						mc = opx.UnicodeToUTF8(m_mode9);
						opx.ModifyNode("name9", mc);
						opx.QueryNode_Text("name97", cstr);
						mc = cstr;
						if (mc == "9")
						{
							m_mode16 = L"MODE9   " + m_mode9;
							mc = opx.UnicodeToUTF8(m_mode16);
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
							m_mode10 = ent.ValueShow;
							opXML opx("name.xml");
							mc = opx.UnicodeToUTF8(m_mode10);
							opx.ModifyNode("name10", mc);
							opx.QueryNode_Text("name97", cstr);
							mc = cstr;
							if (mc == "10")
							{
								m_mode16 = L"MODE10   " + m_mode10;
								mc = opx.UnicodeToUTF8(m_mode16);
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
