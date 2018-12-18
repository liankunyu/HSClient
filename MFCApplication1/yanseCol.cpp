// yanseCol.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "yanseCol.h"
#include "afxdialogex.h"
#include "Yansemingan.h"
#include "quyuer.h"
#include "quyusan.h"
#include "quyusi.h"
#include "quyuwu.h"
#include "shendu.h"
#include "shenduer.h"
#include "huidu1.h"
#include "huidu2.h"
#include "yansehangmianji.h"
#include "beijingyuzhi.h"
#include "yanseminganqiangdu.h"
#include "shujuduqu.h"
#include "XMLHelper.h"
// yanseCol �Ի���

IMPLEMENT_DYNAMIC(yanseCol, CDialogEx)

yanseCol::yanseCol(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_YANSE1_DIALOG1, pParent)
{

}

yanseCol::~yanseCol()
{
}

void yanseCol::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(yanseCol, CDialogEx)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON1, &yanseCol::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &yanseCol::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &yanseCol::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &yanseCol::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON7, &yanseCol::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON5, &yanseCol::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON8, &yanseCol::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON6, &yanseCol::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON9, &yanseCol::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &yanseCol::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON57, &yanseCol::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON33, &yanseCol::OnBnClickedButton33)
	ON_BN_CLICKED(IDCANCEL, &yanseCol::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON34, &yanseCol::OnBnClickedButton34)
END_MESSAGE_MAP()


// yanseCol ��Ϣ�������



BOOL yanseCol::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//��ʼ������λ��
	CRect rect;
	GetClientRect(&rect);     //ȡ�ͻ�����С    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;


	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num6301", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num6302", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num6303", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(cstr);
	opx.QueryNode_Text("num6304", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON7)->SetWindowText(cstr);
	opx.QueryNode_Text("num6305", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON10)->SetWindowText(cstr);
	opx.QueryNode_Text("num6306", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON34)->SetWindowText(cstr);
	opx.QueryNode_Text("num6307", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
	opx.QueryNode_Text("num6308", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON5)->SetWindowText(cstr);
	opx.QueryNode_Text("num6309", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON8)->SetWindowText(cstr);
	opx.QueryNode_Text("num6310", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON57)->SetWindowText(cstr);
	opx.QueryNode_Text("num6311", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
	opx.QueryNode_Text("num6312", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON6)->SetWindowText(cstr);
	opx.QueryNode_Text("num6313", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON9)->SetWindowText(cstr);
	opx.QueryNode_Text("num6314", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON33)->SetWindowText(cstr);
	opx.QueryNode_Text("num6315", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}



void yanseCol::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: �ڴ˴������Ϣ����������
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}

void yanseCol::ReSize()
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


void yanseCol::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Yansemingan ys;
	ys.DoModal();
}


void yanseCol::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	quyuer qe;
	qe.DoModal();
}


void yanseCol::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	quyusan qs;
	qs.DoModal();
}


void yanseCol::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	quyusi qs;
	qs.DoModal();
}


void yanseCol::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	quyuwu qw;
	qw.DoModal();
}


void yanseCol::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	shendu sd;
	sd.DoModal();
}


void yanseCol::OnBnClickedButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	shenduer sde;
	sde.DoModal();
}


void yanseCol::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	huidu1 hd;
	hd.DoModal();
}


void yanseCol::OnBnClickedButton9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	huidu2 hde;
	hde.DoModal();
}


void yanseCol::OnBnClickedButton10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	yansehangmianji yh;
	yh.DoModal();
}


void yanseCol::OnBnClickedButton57()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	beijingyuzhi bz;
	bz.DoModal();
}


void yanseCol::OnBnClickedButton33()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	yanseminganqiangdu yq;
	yq.DoModal();
}


void yanseCol::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}


void yanseCol::OnBnClickedButton34()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	shujuduqu sd;
	sd.DoModal();
}
