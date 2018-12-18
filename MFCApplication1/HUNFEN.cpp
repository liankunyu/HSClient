// HUNFEN.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "HUNFEN.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "MyPublicData.h"
#include "RFEN.h"
#include "GFEN.h"
#include "BFEN.h"

// HUNFEN 对话框

IMPLEMENT_DYNAMIC(HUNFEN, CDialogEx)

HUNFEN::HUNFEN(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_HUN_FEN_DIALOG, pParent)
	, m_double1(hunlingminf[0])
	, m_double2(hunlingminf[1])
	, m_double3(hunlingminf[2])
	, m_double4(hunlingminf[3])
	, m_double5(hunlingminf[4])
	, m_double6(hunlingminf[5])
	, m_double7(hunlingminf[6])
	, m_double8(hunlingminf[7])
	, m_double9(hunlingminf[8])
	, m_double10(hunlingminf[9])
	, m_double11(hunlingminf[10])
	, m_double12(hunlingminf[11])
	, m_double13(hunlingminf[12])
	, m_double14(hunlingminf[13])
	, m_double15(hunlingminf[14])
	, m_double16(hunlingminf[15])
	, m_double17(hunlingminf[16])
	, m_double18(hunlingminf[17])
	, m_double19(hunlingminf[18])
	, m_double20(hunlingminf[19])
	, m_double21(hunlingminf[20])
	, m_double22(hunlingminf[21])
	, m_double23(hunlingminf[22])
	, m_double24(hunlingminf[23])
	, m_double25(hunlingminf[24])
	, m_double26(hunlingminf[25])
	, m_double27(hunlingminf[26])
	, m_double28(hunlingminf[27])
	, m_double29(hunlingminf[28])
	, m_double30(hunlingminf[29])
	, m_double31(hunlingminf[30])
	, m_double32(hunlingminf[31])
	, m_double33(hunlingminf[32])
	, m_double34(hunlingminf[33])
	, m_double35(hunlingminf[34])
	, m_double36(hunlingminf[35])
	, m_double37(hunlingminf[36])
	, m_double38(hunlingminf[37])
	, m_double39(hunlingminf[38])
	, m_double40(hunlingminf[39])
{

}

HUNFEN::~HUNFEN()
{
}

void HUNFEN::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_double1);
	DDX_Text(pDX, IDC_EDIT2, m_double2);
	DDX_Text(pDX, IDC_EDIT13, m_double3);
	DDX_Text(pDX, IDC_EDIT15, m_double4);
	DDX_Text(pDX, IDC_EDIT18, m_double5);
	DDX_Text(pDX, IDC_EDIT26, m_double6);
	DDX_Text(pDX, IDC_EDIT29, m_double7);
	DDX_Text(pDX, IDC_EDIT30, m_double8);
	DDX_Text(pDX, IDC_EDIT31, m_double9);
	DDX_Text(pDX, IDC_EDIT32, m_double10);
	DDX_Text(pDX, IDC_EDIT33, m_double11);
	DDX_Text(pDX, IDC_EDIT34, m_double12);
	DDX_Text(pDX, IDC_EDIT35, m_double13);
	DDX_Text(pDX, IDC_EDIT36, m_double14);
	DDX_Text(pDX, IDC_EDIT37, m_double15);
	DDX_Text(pDX, IDC_EDIT45, m_double16);
	DDX_Text(pDX, IDC_EDIT46, m_double17);
	DDX_Text(pDX, IDC_EDIT47, m_double18);
	DDX_Text(pDX, IDC_EDIT48, m_double19);
	DDX_Text(pDX, IDC_EDIT49, m_double20);
	DDX_Text(pDX, IDC_EDIT50, m_double21);
	DDX_Text(pDX, IDC_EDIT51, m_double22);
	DDX_Text(pDX, IDC_EDIT55, m_double23);
	DDX_Text(pDX, IDC_EDIT56, m_double24);
	DDX_Text(pDX, IDC_EDIT57, m_double25);
	DDX_Text(pDX, IDC_EDIT62, m_double26);
	DDX_Text(pDX, IDC_EDIT63, m_double27);
	DDX_Text(pDX, IDC_EDIT64, m_double28);
	DDX_Text(pDX, IDC_EDIT65, m_double29);
	DDX_Text(pDX, IDC_EDIT66, m_double30);
	DDX_Text(pDX, IDC_EDIT67, m_double31);
	DDX_Text(pDX, IDC_EDIT76, m_double32);
	DDX_Text(pDX, IDC_EDIT77, m_double33);
	DDX_Text(pDX, IDC_EDIT78, m_double34);
	DDX_Text(pDX, IDC_EDIT79, m_double35);
	DDX_Text(pDX, IDC_EDIT80, m_double36);
	DDX_Text(pDX, IDC_EDIT81, m_double37);
	DDX_Text(pDX, IDC_EDIT82, m_double38);
	DDX_Text(pDX, IDC_EDIT83, m_double39);
	DDX_Text(pDX, IDC_EDIT84, m_double40);
}


BEGIN_MESSAGE_MAP(HUNFEN, CDialogEx)
	ON_BN_CLICKED(IDCANCEL, &HUNFEN::OnBnClickedCancel)
//	ON_BN_CLICKED(IDC_BUTTON4, &HUNFEN::OnBnClickedButton4)
//	ON_BN_CLICKED(IDC_BUTTON5, &HUNFEN::OnBnClickedButton5)
//	ON_BN_CLICKED(IDC_BUTTON6, &HUNFEN::OnBnClickedButton6)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON1, &HUNFEN::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &HUNFEN::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &HUNFEN::OnBnClickedButton3)
END_MESSAGE_MAP()


// HUNFEN 消息处理程序


BOOL HUNFEN::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	GetDlgItem(IDC_BUTTON1)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(zhendong[2]);

	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num5101", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num5102", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num5103", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num5104", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num5105", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num5106", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num5107", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();

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
	GetDlgItem(IDC_EDIT13)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT15)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT18)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT26)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT29)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT30)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT31)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT32)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT33)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT34)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT35)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT36)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT37)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT45)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT46)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT47)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT48)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT49)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT50)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT51)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT55)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT56)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT57)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT62)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT63)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT64)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT65)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT66)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT67)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT76)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT77)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT78)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT79)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT80)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT81)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT82)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT83)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	GetDlgItem(IDC_EDIT84)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


BOOL HUNFEN::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		UpdateData(TRUE);
		CInputDlg dlg;
		CMyPublicData::calculate(m_double1, hunlingminf, 0, dlg, 10, 0);
		UpdateData(FALSE);
		if (addSW == 1)
		{
			if (modsd[0] == L"1")
			{
				datatestDPU[4] = hunselingmin[0] + hunlingminf[0];
				CMyPublicData::setfunc(32, 16, 78, 1);
			}
			if (modsd[0] == L"2")
			{
				datatestDPU[4] = hunselingmin[4] + hunlingminf[0];
				CMyPublicData::setfunc(32, 16, 78, 1);
			}
			if (modsd[0] == L"3")
			{
				datatestDPU[4] = hunselingmin[8] + hunlingminf[0];
				CMyPublicData::setfunc(32, 16, 78, 1);
			}
		}
		if (addSW == 2)
		{
			if (modsd[0] == L"1")
			{
				datatestDPU[4] = hunselingmin[0] + hunlingminf[0];
				CMyPublicData::setfunc(32, 16, 357, 1);
			}
			if (modsd[0] == L"2")
			{
				datatestDPU[4] = hunselingmin[4] + hunlingminf[0];
				CMyPublicData::setfunc(32, 16, 357, 1);
			}
			if (modsd[0] == L"3")
			{
				datatestDPU[4] = hunselingmin[8] + hunlingminf[0];
				CMyPublicData::setfunc(32, 16, 357, 1);
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
			UpdateData(TRUE);
			CInputDlg dlg;
			CMyPublicData::calculate(m_double2, hunlingminf, 1, dlg, 10, 0);
			UpdateData(FALSE);
			if (addSW == 1)
			{
				if (modsd[2] == L"1")
				{
					datatestDPU[4] = hunselingmin[0] + hunlingminf[1];
					CMyPublicData::setfunc(34, 16, 78, 1);
				}
				if (modsd[2] == L"2")
				{
					datatestDPU[4] = hunselingmin[4] + hunlingminf[1];
					CMyPublicData::setfunc(34, 16, 78, 1);
				}
				if (modsd[2] == L"3")
				{
					datatestDPU[4] = hunselingmin[8] + hunlingminf[1];
					CMyPublicData::setfunc(34, 16, 78, 1);
				}
			}
			if (addSW == 2)
			{
				if (modsd[2] == L"1")
				{
					datatestDPU[4] = hunselingmin[0] + hunlingminf[1];
					CMyPublicData::setfunc(34, 16, 357, 1);
				}
				if (modsd[2] == L"2")
				{
					datatestDPU[4] = hunselingmin[4] + hunlingminf[1];
					CMyPublicData::setfunc(34, 16, 357, 1);
				}
				if (modsd[2] == L"3")
				{
					datatestDPU[4] = hunselingmin[8] + hunlingminf[1];
					CMyPublicData::setfunc(34, 16, 357, 1);
				}
			}
			return TRUE;
		}
		else
		{
			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT13);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				UpdateData(TRUE);
				CInputDlg dlg;
				CMyPublicData::calculate(m_double3, hunlingminf, 2, dlg, 10, 0);
				UpdateData(FALSE);
				if (addSW == 1)
				{
					if (modsd[4] == L"1")
					{
						datatestDPU[4] = hunselingmin[0] + hunlingminf[2];
						CMyPublicData::setfunc(36, 16, 78, 1);
					}
					if (modsd[4] == L"2")
					{
						datatestDPU[4] = hunselingmin[4] + hunlingminf[2];
						CMyPublicData::setfunc(36, 16, 78, 1);
					}
					if (modsd[4] == L"3")
					{
						datatestDPU[4] = hunselingmin[8] + hunlingminf[2];
						CMyPublicData::setfunc(36, 16, 78, 1);
					}
				}
				if (addSW == 2)
				{
					if (modsd[4] == L"1")
					{
						datatestDPU[4] = hunselingmin[0] + hunlingminf[2];
						CMyPublicData::setfunc(36, 16, 357, 1);
					}
					if (modsd[4] == L"2")
					{
						datatestDPU[4] = hunselingmin[4] + hunlingminf[2];
						CMyPublicData::setfunc(36, 16, 357, 1);
					}
					if (modsd[4] == L"3")
					{
						datatestDPU[4] = hunselingmin[8] + hunlingminf[2];
						CMyPublicData::setfunc(36, 16, 357, 1);
					}
				}
				return TRUE;
			}
			else
			{
				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT15);
				ASSERT(pEdit && pEdit->GetSafeHwnd());
				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
				{
					UpdateData(TRUE);
					CInputDlg dlg;
					CMyPublicData::calculate(m_double4, hunlingminf, 3, dlg, 10, 0);
					UpdateData(FALSE);
					if (addSW == 1)
					{
						if (modsd[6] == L"1")
						{
							datatestDPU[4] = hunselingmin[0] + hunlingminf[3];
							CMyPublicData::setfunc(38, 16, 78, 1);
						}
						if (modsd[6] == L"2")
						{
							datatestDPU[4] = hunselingmin[4] + hunlingminf[3];
							CMyPublicData::setfunc(38, 16, 78, 1);
						}
						if (modsd[6] == L"3")
						{
							datatestDPU[4] = hunselingmin[8] + hunlingminf[3];
							CMyPublicData::setfunc(38, 16, 78, 1);
						}
					}
					if (addSW == 2)
					{
						if (modsd[6] == L"1")
						{
							datatestDPU[4] = hunselingmin[0] + hunlingminf[3];
							CMyPublicData::setfunc(38, 16, 357, 1);
						}
						if (modsd[6] == L"2")
						{
							datatestDPU[4] = hunselingmin[4] + hunlingminf[3];
							CMyPublicData::setfunc(38, 16, 357, 1);
						}
						if (modsd[6] == L"3")
						{
							datatestDPU[4] = hunselingmin[8] + hunlingminf[3];
							CMyPublicData::setfunc(38, 16, 357, 1);
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
						UpdateData(TRUE);
						CInputDlg dlg;
						CMyPublicData::calculate(m_double5, hunlingminf, 4, dlg, 10, 0);
						UpdateData(FALSE);
						if (addSW == 1)
						{
							if (modsd[8] == L"1")
							{
								datatestDPU[4] = hunselingmin[0] + hunlingminf[4];
								CMyPublicData::setfunc(40, 16, 78, 1);
							}
							if (modsd[8] == L"2")
							{
								datatestDPU[4] = hunselingmin[4] + hunlingminf[4];
								CMyPublicData::setfunc(40, 16, 78, 1);
							}
							if (modsd[8] == L"3")
							{
								datatestDPU[4] = hunselingmin[8] + hunlingminf[4];
								CMyPublicData::setfunc(40, 16, 78, 1);
							}
						}
						if (addSW == 2)
						{
							if (modsd[8] == L"1")
							{
								datatestDPU[4] = hunselingmin[0] + hunlingminf[4];
								CMyPublicData::setfunc(40, 16, 357, 1);
							}
							if (modsd[8] == L"2")
							{
								datatestDPU[4] = hunselingmin[4] + hunlingminf[4];
								CMyPublicData::setfunc(40, 16, 357, 1);
							}
							if (modsd[8] == L"3")
							{
								datatestDPU[4] = hunselingmin[8] + hunlingminf[4];
								CMyPublicData::setfunc(40, 16, 357, 1);
							}
						}
						return TRUE;
					}
					else
					{
						CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT26);
						ASSERT(pEdit && pEdit->GetSafeHwnd());
						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
						{
							UpdateData(TRUE);
							CInputDlg dlg;
							CMyPublicData::calculate(m_double6, hunlingminf, 5, dlg, 10, 0);
							UpdateData(FALSE);
							if (addSW == 1)
							{
								if (modsd[10] == L"1")
								{
									datatestDPU[4] = hunselingmin[0] + hunlingminf[5];
									CMyPublicData::setfunc(42, 16, 78, 1);
								}
								if (modsd[10] == L"2")
								{
									datatestDPU[4] = hunselingmin[4] + hunlingminf[5];
									CMyPublicData::setfunc(42, 16, 78, 1);
								}
								if (modsd[10] == L"3")
								{
									datatestDPU[4] = hunselingmin[8] + hunlingminf[5];
									CMyPublicData::setfunc(42, 16, 78, 1);
								}
							}
							if (addSW == 2)
							{
								if (modsd[10] == L"1")
								{
									datatestDPU[4] = hunselingmin[0] + hunlingminf[5];
									CMyPublicData::setfunc(42, 16, 357, 1);
								}
								if (modsd[10] == L"2")
								{
									datatestDPU[4] = hunselingmin[4] + hunlingminf[5];
									CMyPublicData::setfunc(42, 16, 357, 1);
								}
								if (modsd[10] == L"3")
								{
									datatestDPU[4] = hunselingmin[8] + hunlingminf[5];
									CMyPublicData::setfunc(42, 16, 357, 1);
								}
							}
							return TRUE;
						}
						else
						{
							CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT29);
							ASSERT(pEdit && pEdit->GetSafeHwnd());
							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
							{
								UpdateData(TRUE);
								CInputDlg dlg;
								CMyPublicData::calculate(m_double7, hunlingminf, 6, dlg, 10, 0);
								UpdateData(FALSE);
								if (addSW == 1)
								{
									if (modsd[12] == L"1")
									{
										datatestDPU[4] = hunselingmin[0] + hunlingminf[6];
										CMyPublicData::setfunc(44, 16, 78, 1);
									}
									if (modsd[12] == L"2")
									{
										datatestDPU[4] = hunselingmin[4] + hunlingminf[6];
										CMyPublicData::setfunc(44, 16, 78, 1);
									}
									if (modsd[12] == L"3")
									{
										datatestDPU[4] = hunselingmin[8] + hunlingminf[6];
										CMyPublicData::setfunc(44, 16, 78, 1);
									}
								}
								if (addSW == 2)
								{
									if (modsd[12] == L"1")
									{
										datatestDPU[4] = hunselingmin[0] + hunlingminf[6];
										CMyPublicData::setfunc(44, 16, 357, 1);
									}
									if (modsd[12] == L"2")
									{
										datatestDPU[4] = hunselingmin[4] + hunlingminf[6];
										CMyPublicData::setfunc(44, 16, 357, 1);
									}
									if (modsd[12] == L"3")
									{
										datatestDPU[4] = hunselingmin[8] + hunlingminf[6];
										CMyPublicData::setfunc(44, 16, 357, 1);
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
									UpdateData(TRUE);
									CInputDlg dlg;
									CMyPublicData::calculate(m_double8, hunlingminf, 7, dlg, 10, 0);
									UpdateData(FALSE);
									if (addSW == 1)
									{
										if (modsd[14] == L"1")
										{
											datatestDPU[4] = hunselingmin[0] + hunlingminf[7];
											CMyPublicData::setfunc(46, 16, 78, 1);
										}
										if (modsd[14] == L"2")
										{
											datatestDPU[4] = hunselingmin[4] + hunlingminf[7];
											CMyPublicData::setfunc(46, 16, 78, 1);
										}
										if (modsd[14] == L"3")
										{
											datatestDPU[4] = hunselingmin[8] + hunlingminf[7];
											CMyPublicData::setfunc(46, 16, 78, 1);
										}
									}
									if (addSW == 2)
									{
										if (modsd[14] == L"1")
										{
											datatestDPU[4] = hunselingmin[0] + hunlingminf[7];
											CMyPublicData::setfunc(46, 16, 357, 1);
										}
										if (modsd[14] == L"2")
										{
											datatestDPU[4] = hunselingmin[4] + hunlingminf[7];
											CMyPublicData::setfunc(46, 16, 357, 1);
										}
										if (modsd[14] == L"3")
										{
											datatestDPU[4] = hunselingmin[8] + hunlingminf[7];
											CMyPublicData::setfunc(46, 16, 357, 1);
										}
									}
									return TRUE;
								}
								else
								{
									CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT31);
									ASSERT(pEdit && pEdit->GetSafeHwnd());
									if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
									{
										UpdateData(TRUE);
										CInputDlg dlg;
										CMyPublicData::calculate(m_double9, hunlingminf, 8, dlg, 10, 0);
										UpdateData(FALSE);
										if (addSW == 1)
										{
											if (modsd[16] == L"1")
											{
												datatestDPU[4] = hunselingmin[0] + hunlingminf[8];
												CMyPublicData::setfunc(48, 16, 78, 1);
											}
											if (modsd[16] == L"2")
											{
												datatestDPU[4] = hunselingmin[4] + hunlingminf[8];
												CMyPublicData::setfunc(48, 16, 78, 1);
											}
											if (modsd[16] == L"3")
											{
												datatestDPU[4] = hunselingmin[8] + hunlingminf[8];
												CMyPublicData::setfunc(48, 16, 78, 1);
											}
										}
										if (addSW == 2)
										{
											if (modsd[16] == L"1")
											{
												datatestDPU[4] = hunselingmin[0] + hunlingminf[8];
												CMyPublicData::setfunc(48, 16, 357, 1);
											}
											if (modsd[16] == L"2")
											{
												datatestDPU[4] = hunselingmin[4] + hunlingminf[8];
												CMyPublicData::setfunc(48, 16, 357, 1);
											}
											if (modsd[16] == L"3")
											{
												datatestDPU[4] = hunselingmin[8] + hunlingminf[8];
												CMyPublicData::setfunc(48, 16, 357, 1);
											}
										}
										return TRUE;
									}
									else
									{
										CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT32);
										ASSERT(pEdit && pEdit->GetSafeHwnd());
										if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
										{
											UpdateData(TRUE);
											CInputDlg dlg;
											CMyPublicData::calculate(m_double10, hunlingminf, 9, dlg, 10, 0);
											UpdateData(FALSE);
											if (addSW == 1)
											{
												if (modsd[18] == L"1")
												{
													datatestDPU[4] = hunselingmin[0] + hunlingminf[9];
													CMyPublicData::setfunc(50, 16, 78, 1);
												}
												if (modsd[18] == L"2")
												{
													datatestDPU[4] = hunselingmin[4] + hunlingminf[9];
													CMyPublicData::setfunc(50, 16, 78, 1);
												}
												if (modsd[18] == L"3")
												{
													datatestDPU[4] = hunselingmin[8] + hunlingminf[9];
													CMyPublicData::setfunc(50, 16, 78, 1);
												}
											}
											if (addSW == 2)
											{
												if (modsd[18] == L"1")
												{
													datatestDPU[4] = hunselingmin[0] + hunlingminf[9];
													CMyPublicData::setfunc(50, 16, 357, 1);
												}
												if (modsd[18] == L"2")
												{
													datatestDPU[4] = hunselingmin[4] + hunlingminf[9];
													CMyPublicData::setfunc(50, 16, 357, 1);
												}
												if (modsd[18] == L"3")
												{
													datatestDPU[4] = hunselingmin[8] + hunlingminf[9];
													CMyPublicData::setfunc(50, 16, 357, 1);
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
												UpdateData(TRUE);
												CInputDlg dlg;
												CMyPublicData::calculate(m_double11, hunlingminf, 10, dlg, 10, 0);
												UpdateData(FALSE);
												if (addSW == 1)
												{
													if (modsd[0] == L"1")
													{
														datatestDPU[4] = hunselingmin[1] + hunlingminf[10];
														CMyPublicData::setfunc(32, 16, 79, 1);
													}
													if (modsd[0] == L"2")
													{
														datatestDPU[4] = hunselingmin[5] + hunlingminf[10];
														CMyPublicData::setfunc(32, 16, 79, 1);
													}
													if (modsd[0] == L"3")
													{
														datatestDPU[4] = hunselingmin[9] + hunlingminf[10];
														CMyPublicData::setfunc(32, 16, 79, 1);
													}
												}
												if (addSW == 2)
												{
													if (modsd[0] == L"1")
													{
														datatestDPU[4] = hunselingmin[1] + hunlingminf[10];
														CMyPublicData::setfunc(32, 16, 358, 1);
													}
													if (modsd[0] == L"2")
													{
														datatestDPU[4] = hunselingmin[5] + hunlingminf[10];
														CMyPublicData::setfunc(32, 16, 358, 1);
													}
													if (modsd[0] == L"3")
													{
														datatestDPU[4] = hunselingmin[9] + hunlingminf[10];
														CMyPublicData::setfunc(32, 16, 358, 1);
													}
												}
												return TRUE;
											}
											else
											{
												CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT34);
												ASSERT(pEdit && pEdit->GetSafeHwnd());
												if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
												{
													UpdateData(TRUE);
													CInputDlg dlg;
													CMyPublicData::calculate(m_double12, hunlingminf, 11, dlg, 10, 0);
													UpdateData(FALSE);
													if (addSW == 1)
													{
														if (modsd[2] == L"1")
														{
															datatestDPU[4] = hunselingmin[1] + hunlingminf[11];
															CMyPublicData::setfunc(34, 16, 79, 1);
														}
														if (modsd[2] == L"2")
														{
															datatestDPU[4] = hunselingmin[5] + hunlingminf[11];
															CMyPublicData::setfunc(34, 16, 79, 1);
														}
														if (modsd[2] == L"3")
														{
															datatestDPU[4] = hunselingmin[9] + hunlingminf[11];
															CMyPublicData::setfunc(34, 16, 79, 1);
														}
													}
													if (addSW == 2)
													{
														if (modsd[2] == L"1")
														{
															datatestDPU[4] = hunselingmin[1] + hunlingminf[11];
															CMyPublicData::setfunc(34, 16, 358, 1);
														}
														if (modsd[2] == L"2")
														{
															datatestDPU[4] = hunselingmin[5] + hunlingminf[11];
															CMyPublicData::setfunc(34, 16, 358, 1);
														}
														if (modsd[2] == L"3")
														{
															datatestDPU[4] = hunselingmin[9] + hunlingminf[11];
															CMyPublicData::setfunc(34, 16, 358, 1);
														}
													}
													return TRUE;
												}
												else
												{
													CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT35);
													ASSERT(pEdit && pEdit->GetSafeHwnd());
													if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
													{
														UpdateData(TRUE);
														CInputDlg dlg;
														CMyPublicData::calculate(m_double13, hunlingminf, 12, dlg, 10, 0);
														UpdateData(FALSE);
														if (addSW == 1)
														{
															if (modsd[4] == L"1")
															{
																datatestDPU[4] = hunselingmin[1] + hunlingminf[12];
																CMyPublicData::setfunc(36, 16, 79, 1);
															}
															if (modsd[4] == L"2")
															{
																datatestDPU[4] = hunselingmin[5] + hunlingminf[12];
																CMyPublicData::setfunc(36, 16, 79, 1);
															}
															if (modsd[4] == L"3")
															{
																datatestDPU[4] = hunselingmin[9] + hunlingminf[12];
																CMyPublicData::setfunc(36, 16, 79, 1);
															}
														}
														if (addSW == 2)
														{
															if (modsd[4] == L"1")
															{
																datatestDPU[4] = hunselingmin[1] + hunlingminf[12];
																CMyPublicData::setfunc(36, 16, 358, 1);
															}
															if (modsd[4] == L"2")
															{
																datatestDPU[4] = hunselingmin[5] + hunlingminf[12];
																CMyPublicData::setfunc(36, 16, 358, 1);
															}
															if (modsd[4] == L"3")
															{
																datatestDPU[4] = hunselingmin[9] + hunlingminf[12];
																CMyPublicData::setfunc(36, 16, 358, 1);
															}
														}
														return TRUE;
													}
													else
													{
														CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT36);
														ASSERT(pEdit && pEdit->GetSafeHwnd());
														if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
														{
															UpdateData(TRUE);
															CInputDlg dlg;
															CMyPublicData::calculate(m_double14, hunlingminf, 13, dlg, 10, 0);
															UpdateData(FALSE);
															if (addSW == 1)
															{
																if (modsd[6] == L"1")
																{
																	datatestDPU[4] = hunselingmin[1] + hunlingminf[13];
																	CMyPublicData::setfunc(38, 16, 79, 1);
																}
																if (modsd[6] == L"2")
																{
																	datatestDPU[4] = hunselingmin[5] + hunlingminf[13];
																	CMyPublicData::setfunc(38, 16, 79, 1);
																}
																if (modsd[6] == L"3")
																{
																	datatestDPU[4] = hunselingmin[9] + hunlingminf[13];
																	CMyPublicData::setfunc(38, 16, 79, 1);
																}
															}
															if (addSW == 2)
															{
																if (modsd[6] == L"1")
																{
																	datatestDPU[4] = hunselingmin[1] + hunlingminf[13];
																	CMyPublicData::setfunc(38, 16, 358, 1);
																}
																if (modsd[6] == L"2")
																{
																	datatestDPU[4] = hunselingmin[5] + hunlingminf[13];
																	CMyPublicData::setfunc(38, 16, 358, 1);
																}
																if (modsd[6] == L"3")
																{
																	datatestDPU[4] = hunselingmin[9] + hunlingminf[13];
																	CMyPublicData::setfunc(38, 16, 358, 1);
																}
															}
															return TRUE;
														}
														else
														{
															CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT37);
															ASSERT(pEdit && pEdit->GetSafeHwnd());
															if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
															{
																UpdateData(TRUE);
																CInputDlg dlg;
																CMyPublicData::calculate(m_double15, hunlingminf, 14, dlg, 10, 0);
																UpdateData(FALSE);
																if (addSW == 1)
																{
																	if (modsd[8] == L"1")
																	{
																		datatestDPU[4] = hunselingmin[1] + hunlingminf[14];
																		CMyPublicData::setfunc(40, 16, 79, 1);
																	}
																	if (modsd[8] == L"2")
																	{
																		datatestDPU[4] = hunselingmin[5] + hunlingminf[14];
																		CMyPublicData::setfunc(40, 16, 79, 1);
																	}
																	if (modsd[8] == L"3")
																	{
																		datatestDPU[4] = hunselingmin[9] + hunlingminf[14];
																		CMyPublicData::setfunc(40, 16, 79, 1);
																	}
																}
																if (addSW == 2)
																{
																	if (modsd[8] == L"1")
																	{
																		datatestDPU[4] = hunselingmin[1] + hunlingminf[14];
																		CMyPublicData::setfunc(40, 16, 358, 1);
																	}
																	if (modsd[8] == L"2")
																	{
																		datatestDPU[4] = hunselingmin[5] + hunlingminf[14];
																		CMyPublicData::setfunc(40, 16, 358, 1);
																	}
																	if (modsd[8] == L"3")
																	{
																		datatestDPU[4] = hunselingmin[9] + hunlingminf[14];
																		CMyPublicData::setfunc(40, 16, 358, 1);
																	}
																}
																return TRUE;
															}
															else
															{
																CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT45);
																ASSERT(pEdit && pEdit->GetSafeHwnd());
																if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																{
																	UpdateData(TRUE);
																	CInputDlg dlg;
																	CMyPublicData::calculate(m_double16, hunlingminf, 15, dlg, 10, 0);
																	UpdateData(FALSE);
																	if (addSW == 1)
																	{
																		if (modsd[10] == L"1")
																		{
																			datatestDPU[4] = hunselingmin[1] + hunlingminf[15];
																			CMyPublicData::setfunc(42, 16, 79, 1);
																		}
																		if (modsd[10] == L"2")
																		{
																			datatestDPU[4] = hunselingmin[5] + hunlingminf[15];
																			CMyPublicData::setfunc(42, 16, 79, 1);
																		}
																		if (modsd[10] == L"3")
																		{
																			datatestDPU[4] = hunselingmin[9] + hunlingminf[15];
																			CMyPublicData::setfunc(42, 16, 79, 1);
																		}
																	}
																	if (addSW == 2)
																	{
																		if (modsd[10] == L"1")
																		{
																			datatestDPU[4] = hunselingmin[1] + hunlingminf[15];
																			CMyPublicData::setfunc(42, 16, 358, 1);
																		}
																		if (modsd[10] == L"2")
																		{
																			datatestDPU[4] = hunselingmin[5] + hunlingminf[15];
																			CMyPublicData::setfunc(42, 16, 358, 1);
																		}
																		if (modsd[10] == L"3")
																		{
																			datatestDPU[4] = hunselingmin[9] + hunlingminf[15];
																			CMyPublicData::setfunc(42, 16, 358, 1);
																		}
																	}
																	return TRUE;
																}
																else
																{
																	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT46);
																	ASSERT(pEdit && pEdit->GetSafeHwnd());
																	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																	{
																		UpdateData(TRUE);
																		CInputDlg dlg;
																		CMyPublicData::calculate(m_double17, hunlingminf, 16, dlg, 10, 0);
																		UpdateData(FALSE);
																		if (addSW == 1)
																		{
																			if (modsd[12] == L"1")
																			{
																				datatestDPU[4] = hunselingmin[1] + hunlingminf[16];
																				CMyPublicData::setfunc(44, 16, 79, 1);
																			}
																			if (modsd[12] == L"2")
																			{
																				datatestDPU[4] = hunselingmin[5] + hunlingminf[16];
																				CMyPublicData::setfunc(44, 16, 79, 1);
																			}
																			if (modsd[12] == L"3")
																			{
																				datatestDPU[4] = hunselingmin[9] + hunlingminf[16];
																				CMyPublicData::setfunc(44, 16, 79, 1);
																			}
																		}
																		if (addSW == 2)
																		{
																			if (modsd[12] == L"1")
																			{
																				datatestDPU[4] = hunselingmin[1] + hunlingminf[16];
																				CMyPublicData::setfunc(44, 16, 358, 1);
																			}
																			if (modsd[12] == L"2")
																			{
																				datatestDPU[4] = hunselingmin[5] + hunlingminf[16];
																				CMyPublicData::setfunc(44, 16, 358, 1);
																			}
																			if (modsd[12] == L"3")
																			{
																				datatestDPU[4] = hunselingmin[9] + hunlingminf[16];
																				CMyPublicData::setfunc(44, 16, 358, 1);
																			}
																		}
																		return TRUE;
																	}
																	else
																	{
																		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT47);
																		ASSERT(pEdit && pEdit->GetSafeHwnd());
																		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																		{
																			UpdateData(TRUE);
																			CInputDlg dlg;
																			CMyPublicData::calculate(m_double18, hunlingminf, 17, dlg, 10, 0);
																			UpdateData(FALSE);
																			if (addSW == 1)
																			{
																				if (modsd[14] == L"1")
																				{
																					datatestDPU[4] = hunselingmin[1] + hunlingminf[17];
																					CMyPublicData::setfunc(46, 16, 79, 1);
																				}
																				if (modsd[14] == L"2")
																				{
																					datatestDPU[4] = hunselingmin[5] + hunlingminf[17];
																					CMyPublicData::setfunc(46, 16, 79, 1);
																				}
																				if (modsd[14] == L"3")
																				{
																					datatestDPU[4] = hunselingmin[9] + hunlingminf[17];
																					CMyPublicData::setfunc(46, 16, 79, 1);
																				}
																			}
																			if (addSW == 2)
																			{
																				if (modsd[14] == L"1")
																				{
																					datatestDPU[4] = hunselingmin[1] + hunlingminf[17];
																					CMyPublicData::setfunc(46, 16, 358, 1);
																				}
																				if (modsd[14] == L"2")
																				{
																					datatestDPU[4] = hunselingmin[5] + hunlingminf[17];
																					CMyPublicData::setfunc(46, 16, 358, 1);
																				}
																				if (modsd[14] == L"3")
																				{
																					datatestDPU[4] = hunselingmin[9] + hunlingminf[17];
																					CMyPublicData::setfunc(46, 16, 358, 1);
																				}
																			}
																			return TRUE;
																		}
																		else
																		{
																			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT48);
																			ASSERT(pEdit && pEdit->GetSafeHwnd());
																			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																			{
																				UpdateData(TRUE);
																				CInputDlg dlg;
																				CMyPublicData::calculate(m_double19, hunlingminf, 18, dlg, 10, 0);
																				UpdateData(FALSE);
																				if (addSW == 1)
																				{
																					if (modsd[16] == L"1")
																					{
																						datatestDPU[4] = hunselingmin[1] + hunlingminf[18];
																						CMyPublicData::setfunc(48, 16, 79, 1);
																					}
																					if (modsd[16] == L"2")
																					{
																						datatestDPU[4] = hunselingmin[5] + hunlingminf[18];
																						CMyPublicData::setfunc(48, 16, 79, 1);
																					}
																					if (modsd[16] == L"3")
																					{
																						datatestDPU[4] = hunselingmin[9] + hunlingminf[18];
																						CMyPublicData::setfunc(48, 16, 79, 1);
																					}
																				}
																				if (addSW == 2)
																				{
																					if (modsd[16] == L"1")
																					{
																						datatestDPU[4] = hunselingmin[1] + hunlingminf[18];
																						CMyPublicData::setfunc(48, 16, 358, 1);
																					}
																					if (modsd[16] == L"2")
																					{
																						datatestDPU[4] = hunselingmin[5] + hunlingminf[18];
																						CMyPublicData::setfunc(48, 16, 358, 1);
																					}
																					if (modsd[16] == L"3")
																					{
																						datatestDPU[4] = hunselingmin[9] + hunlingminf[18];
																						CMyPublicData::setfunc(48, 16, 358, 1);
																					}
																				}
																				return TRUE;
																			}
																			else
																			{
																				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT49);
																				ASSERT(pEdit && pEdit->GetSafeHwnd());
																				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																				{
																					UpdateData(TRUE);
																					CInputDlg dlg;
																					CMyPublicData::calculate(m_double20, hunlingminf, 19, dlg, 10, 0);
																					UpdateData(FALSE);
																					if (addSW == 1)
																					{
																						if (modsd[18] == L"1")
																						{
																							datatestDPU[4] = hunselingmin[1] + hunlingminf[19];
																							CMyPublicData::setfunc(50, 16, 79, 1);
																						}
																						if (modsd[18] == L"2")
																						{
																							datatestDPU[4] = hunselingmin[5] + hunlingminf[19];
																							CMyPublicData::setfunc(50, 16, 79, 1);
																						}
																						if (modsd[18] == L"3")
																						{
																							datatestDPU[4] = hunselingmin[9] + hunlingminf[19];
																							CMyPublicData::setfunc(50, 16, 79, 1);
																						}
																					}
																					if (addSW == 2)
																					{
																						if (modsd[18] == L"1")
																						{
																							datatestDPU[4] = hunselingmin[1] + hunlingminf[19];
																							CMyPublicData::setfunc(50, 16, 358, 1);
																						}
																						if (modsd[18] == L"2")
																						{
																							datatestDPU[4] = hunselingmin[5] + hunlingminf[19];
																							CMyPublicData::setfunc(50, 16, 358, 1);
																						}
																						if (modsd[18] == L"3")
																						{
																							datatestDPU[4] = hunselingmin[9] + hunlingminf[19];
																							CMyPublicData::setfunc(50, 16, 358, 1);
																						}
																					}
																					return TRUE;
																				}
																				else
																				{
																					CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT50);
																					ASSERT(pEdit && pEdit->GetSafeHwnd());
																					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																					{
																						UpdateData(TRUE);
																						CInputDlg dlg;
																						CMyPublicData::calculate(m_double21, hunlingminf, 20, dlg, 10, 0);
																						UpdateData(FALSE);
																						if (addSW == 1)
																						{
																							if (modsd[1] == L"1")
																							{
																								datatestDPU[4] = hunselingmin[2] + hunlingminf[20];
																								CMyPublicData::setfunc(33, 16, 78, 1);
																							}
																							if (modsd[1] == L"2")
																							{
																								datatestDPU[4] = hunselingmin[6] + hunlingminf[20];
																								CMyPublicData::setfunc(33, 16, 78, 1);
																							}
																							if (modsd[1] == L"3")
																							{
																								datatestDPU[4] = hunselingmin[10] + hunlingminf[20];
																								CMyPublicData::setfunc(33, 16, 78, 1);
																							}
																						}
																						if (addSW == 2)
																						{
																							if (modsd[1] == L"1")
																							{
																								datatestDPU[4] = hunselingmin[2] + hunlingminf[20];
																								CMyPublicData::setfunc(33, 16, 357, 1);
																							}
																							if (modsd[1] == L"2")
																							{
																								datatestDPU[4] = hunselingmin[6] + hunlingminf[20];
																								CMyPublicData::setfunc(33, 16, 357, 1);
																							}
																							if (modsd[1] == L"3")
																							{
																								datatestDPU[4] = hunselingmin[10] + hunlingminf[20];
																								CMyPublicData::setfunc(33, 16, 357, 1);
																							}
																						}
																						return TRUE;
																					}
																					else
																					{
																						CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT51);
																						ASSERT(pEdit && pEdit->GetSafeHwnd());
																						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																						{
																							UpdateData(TRUE);
																							CInputDlg dlg;
																							CMyPublicData::calculate(m_double22, hunlingminf, 21, dlg, 10, 0);
																							UpdateData(FALSE);
																							if (addSW == 1)
																							{
																								if (modsd[3] == L"1")
																								{
																									datatestDPU[4] = hunselingmin[2] + hunlingminf[21];
																									CMyPublicData::setfunc(35, 16, 78, 1);
																								}
																								if (modsd[3] == L"2")
																								{
																									datatestDPU[4] = hunselingmin[6] + hunlingminf[21];
																									CMyPublicData::setfunc(35, 16, 78, 1);
																								}
																								if (modsd[3] == L"3")
																								{
																									datatestDPU[4] = hunselingmin[10] + hunlingminf[21];
																									CMyPublicData::setfunc(35, 16, 78, 1);
																								}
																							}
																							if (addSW == 2)
																							{
																								if (modsd[3] == L"1")
																								{
																									datatestDPU[4] = hunselingmin[2] + hunlingminf[21];
																									CMyPublicData::setfunc(35, 16, 357, 1);
																								}
																								if (modsd[3] == L"2")
																								{
																									datatestDPU[4] = hunselingmin[6] + hunlingminf[21];
																									CMyPublicData::setfunc(35, 16, 357, 1);
																								}
																								if (modsd[3] == L"3")
																								{
																									datatestDPU[4] = hunselingmin[10] + hunlingminf[21];
																									CMyPublicData::setfunc(35, 16, 357, 1);
																								}
																							}
																							return TRUE;
																						}
																						else
																						{
																							CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT55);
																							ASSERT(pEdit && pEdit->GetSafeHwnd());
																							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																							{
																								UpdateData(TRUE);
																								CInputDlg dlg;
																								CMyPublicData::calculate(m_double23, hunlingminf, 22, dlg, 10, 0);
																								UpdateData(FALSE);
																								if (addSW == 1)
																								{
																									if (modsd[5] == L"1")
																									{
																										datatestDPU[4] = hunselingmin[2] + hunlingminf[22];
																										CMyPublicData::setfunc(37, 16, 78, 1);
																									}
																									if (modsd[5] == L"2")
																									{
																										datatestDPU[4] = hunselingmin[6] + hunlingminf[22];
																										CMyPublicData::setfunc(37, 16, 78, 1);
																									}
																									if (modsd[5] == L"3")
																									{
																										datatestDPU[4] = hunselingmin[10] + hunlingminf[22];
																										CMyPublicData::setfunc(37, 16, 78, 1);
																									}
																								}
																								if (addSW == 2)
																								{
																									if (modsd[5] == L"1")
																									{
																										datatestDPU[4] = hunselingmin[2] + hunlingminf[22];
																										CMyPublicData::setfunc(37, 16, 357, 1);
																									}
																									if (modsd[5] == L"2")
																									{
																										datatestDPU[4] = hunselingmin[6] + hunlingminf[22];
																										CMyPublicData::setfunc(37, 16, 357, 1);
																									}
																									if (modsd[5] == L"3")
																									{
																										datatestDPU[4] = hunselingmin[10] + hunlingminf[22];
																										CMyPublicData::setfunc(37, 16, 357, 1);
																									}
																								}
																								return TRUE;
																							}
																							else
																							{
																								CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT56);
																								ASSERT(pEdit && pEdit->GetSafeHwnd());
																								if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																								{
																									UpdateData(TRUE);
																									CInputDlg dlg;
																									CMyPublicData::calculate(m_double24, hunlingminf, 23, dlg, 10, 0);
																									UpdateData(FALSE);
																									if (addSW == 1)
																									{
																										if (modsd[7] == L"1")
																										{
																											datatestDPU[4] = hunselingmin[2] + hunlingminf[23];
																											CMyPublicData::setfunc(39, 16, 78, 1);
																										}
																										if (modsd[7] == L"2")
																										{
																											datatestDPU[4] = hunselingmin[6] + hunlingminf[23];
																											CMyPublicData::setfunc(39, 16, 78, 1);
																										}
																										if (modsd[7] == L"3")
																										{
																											datatestDPU[4] = hunselingmin[10] + hunlingminf[23];
																											CMyPublicData::setfunc(39, 16, 78, 1);
																										}
																									}
																									if (addSW == 2)
																									{
																										if (modsd[7] == L"1")
																										{
																											datatestDPU[4] = hunselingmin[2] + hunlingminf[23];
																											CMyPublicData::setfunc(39, 16, 357, 1);
																										}
																										if (modsd[7] == L"2")
																										{
																											datatestDPU[4] = hunselingmin[6] + hunlingminf[23];
																											CMyPublicData::setfunc(39, 16, 357, 1);
																										}
																										if (modsd[7] == L"3")
																										{
																											datatestDPU[4] = hunselingmin[10] + hunlingminf[23];
																											CMyPublicData::setfunc(39, 16, 357, 1);
																										}
																									}
																									return TRUE;
																								}
																								else
																								{
																									CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT57);
																									ASSERT(pEdit && pEdit->GetSafeHwnd());
																									if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																									{
																										UpdateData(TRUE);
																										CInputDlg dlg;
																										CMyPublicData::calculate(m_double25, hunlingminf, 24, dlg, 10, 0);
																										UpdateData(FALSE);
																										if (addSW == 1)
																										{
																											if (modsd[9] == L"1")
																											{
																												datatestDPU[4] = hunselingmin[2] + hunlingminf[24];
																												CMyPublicData::setfunc(41, 16, 78, 1);
																											}
																											if (modsd[9] == L"2")
																											{
																												datatestDPU[4] = hunselingmin[6] + hunlingminf[24];
																												CMyPublicData::setfunc(41, 16, 78, 1);
																											}
																											if (modsd[9] == L"3")
																											{
																												datatestDPU[4] = hunselingmin[10] + hunlingminf[24];
																												CMyPublicData::setfunc(41, 16, 78, 1);
																											}
																										}
																										if (addSW == 2)
																										{
																											if (modsd[9] == L"1")
																											{
																												datatestDPU[4] = hunselingmin[2] + hunlingminf[24];
																												CMyPublicData::setfunc(41, 16, 357, 1);
																											}
																											if (modsd[9] == L"2")
																											{
																												datatestDPU[4] = hunselingmin[6] + hunlingminf[24];
																												CMyPublicData::setfunc(41, 16, 357, 1);
																											}
																											if (modsd[9] == L"3")
																											{
																												datatestDPU[4] = hunselingmin[10] + hunlingminf[24];
																												CMyPublicData::setfunc(41, 16, 357, 1);
																											}
																										}
																										return TRUE;
																									}
																									else
																									{
																										CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT62);
																										ASSERT(pEdit && pEdit->GetSafeHwnd());
																										if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																										{
																											UpdateData(TRUE);
																											CInputDlg dlg;
																											CMyPublicData::calculate(m_double26, hunlingminf, 25, dlg, 10, 0);
																											UpdateData(FALSE);
																											if (addSW == 1)
																											{
																												if (modsd[11] == L"1")
																												{
																													datatestDPU[4] = hunselingmin[2] + hunlingminf[25];
																													CMyPublicData::setfunc(43, 16, 78, 1);
																												}
																												if (modsd[11] == L"2")
																												{
																													datatestDPU[4] = hunselingmin[6] + hunlingminf[25];
																													CMyPublicData::setfunc(43, 16, 78, 1);
																												}
																												if (modsd[11] == L"3")
																												{
																													datatestDPU[4] = hunselingmin[10] + hunlingminf[25];
																													CMyPublicData::setfunc(43, 16, 78, 1);
																												}
																											}
																											if (addSW == 2)
																											{
																												if (modsd[11] == L"1")
																												{
																													datatestDPU[4] = hunselingmin[2] + hunlingminf[25];
																													CMyPublicData::setfunc(43, 16, 357, 1);
																												}
																												if (modsd[11] == L"2")
																												{
																													datatestDPU[4] = hunselingmin[6] + hunlingminf[25];
																													CMyPublicData::setfunc(43, 16, 357, 1);
																												}
																												if (modsd[11] == L"3")
																												{
																													datatestDPU[4] = hunselingmin[10] + hunlingminf[25];
																													CMyPublicData::setfunc(43, 16, 357, 1);
																												}
																											}
																											return TRUE;
																										}
																										else
																										{
																											CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT63);
																											ASSERT(pEdit && pEdit->GetSafeHwnd());
																											if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																											{
																												UpdateData(TRUE);
																												CInputDlg dlg;
																												CMyPublicData::calculate(m_double27, hunlingminf, 26, dlg, 10, 0);
																												UpdateData(FALSE);
																												if (addSW == 1)
																												{
																													if (modsd[13] == L"1")
																													{
																														datatestDPU[4] = hunselingmin[2] + hunlingminf[26];
																														CMyPublicData::setfunc(45, 16, 78, 1);
																													}
																													if (modsd[13] == L"2")
																													{
																														datatestDPU[4] = hunselingmin[6] + hunlingminf[26];
																														CMyPublicData::setfunc(45, 16, 78, 1);
																													}
																													if (modsd[13] == L"3")
																													{
																														datatestDPU[4] = hunselingmin[10] + hunlingminf[26];
																														CMyPublicData::setfunc(45, 16, 78, 1);
																													}
																												}
																												if (addSW == 2)
																												{
																													if (modsd[13] == L"1")
																													{
																														datatestDPU[4] = hunselingmin[2] + hunlingminf[26];
																														CMyPublicData::setfunc(45, 16, 357, 1);
																													}
																													if (modsd[13] == L"2")
																													{
																														datatestDPU[4] = hunselingmin[6] + hunlingminf[26];
																														CMyPublicData::setfunc(45, 16, 357, 1);
																													}
																													if (modsd[13] == L"3")
																													{
																														datatestDPU[4] = hunselingmin[10] + hunlingminf[26];
																														CMyPublicData::setfunc(45, 16, 357, 1);
																													}
																												}
																												return TRUE;
																											}
																											else
																											{
																												CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT64);
																												ASSERT(pEdit && pEdit->GetSafeHwnd());
																												if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																												{
																													UpdateData(TRUE);
																													CInputDlg dlg;
																													CMyPublicData::calculate(m_double28, hunlingminf, 27, dlg, 10, 0);
																													UpdateData(FALSE);
																													if (addSW == 1)
																													{
																														if (modsd[15] == L"1")
																														{
																															datatestDPU[4] = hunselingmin[2] + hunlingminf[27];
																															CMyPublicData::setfunc(47, 16, 78, 1);
																														}
																														if (modsd[15] == L"2")
																														{
																															datatestDPU[4] = hunselingmin[6] + hunlingminf[27];
																															CMyPublicData::setfunc(47, 16, 78, 1);
																														}
																														if (modsd[15] == L"3")
																														{
																															datatestDPU[4] = hunselingmin[10] + hunlingminf[27];
																															CMyPublicData::setfunc(47, 16, 78, 1);
																														}
																													}
																													if (addSW == 2)
																													{
																														if (modsd[15] == L"1")
																														{
																															datatestDPU[4] = hunselingmin[2] + hunlingminf[27];
																															CMyPublicData::setfunc(47, 16, 357, 1);
																														}
																														if (modsd[15] == L"2")
																														{
																															datatestDPU[4] = hunselingmin[6] + hunlingminf[27];
																															CMyPublicData::setfunc(47, 16, 357, 1);
																														}
																														if (modsd[15] == L"3")
																														{
																															datatestDPU[4] = hunselingmin[10] + hunlingminf[27];
																															CMyPublicData::setfunc(47, 16, 357, 1);
																														}
																													}
																													return TRUE;
																												}
																												else
																												{
																													CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT65);
																													ASSERT(pEdit && pEdit->GetSafeHwnd());
																													if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																													{
																														UpdateData(TRUE);
																														CInputDlg dlg;
																														CMyPublicData::calculate(m_double29, hunlingminf, 28, dlg, 10, 0);
																														UpdateData(FALSE);
																														if (addSW == 1)
																														{
																															if (modsd[17] == L"1")
																															{
																																datatestDPU[4] = hunselingmin[2] + hunlingminf[28];
																																CMyPublicData::setfunc(49, 16, 78, 1);
																															}
																															if (modsd[17] == L"2")
																															{
																																datatestDPU[4] = hunselingmin[6] + hunlingminf[28];
																																CMyPublicData::setfunc(49, 16, 78, 1);
																															}
																															if (modsd[17] == L"3")
																															{
																																datatestDPU[4] = hunselingmin[10] + hunlingminf[28];
																																CMyPublicData::setfunc(49, 16, 78, 1);
																															}
																														}
																														if (addSW == 2)
																														{
																															if (modsd[17] == L"1")
																															{
																																datatestDPU[4] = hunselingmin[2] + hunlingminf[28];
																																CMyPublicData::setfunc(49, 16, 357, 1);
																															}
																															if (modsd[17] == L"2")
																															{
																																datatestDPU[4] = hunselingmin[6] + hunlingminf[28];
																																CMyPublicData::setfunc(49, 16, 357, 1);
																															}
																															if (modsd[17] == L"3")
																															{
																																datatestDPU[4] = hunselingmin[10] + hunlingminf[28];
																																CMyPublicData::setfunc(49, 16, 357, 1);
																															}
																														}
																														return TRUE;
																													}
																													else
																													{
																														CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT66);
																														ASSERT(pEdit && pEdit->GetSafeHwnd());
																														if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																														{
																															UpdateData(TRUE);
																															CInputDlg dlg;
																															CMyPublicData::calculate(m_double30, hunlingminf, 29, dlg, 10, 0);
																															UpdateData(FALSE);
																															if (addSW == 1)
																															{
																																if (modsd[19] == L"1")
																																{
																																	datatestDPU[4] = hunselingmin[2] + hunlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 78, 1);
																																}
																																if (modsd[19] == L"2")
																																{
																																	datatestDPU[4] = hunselingmin[6] + hunlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 78, 1);
																																}
																																if (modsd[19] == L"3")
																																{
																																	datatestDPU[4] = hunselingmin[10] + hunlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 78, 1);
																																}
																															}
																															if (addSW == 2)
																															{
																																if (modsd[19] == L"1")
																																{
																																	datatestDPU[4] = hunselingmin[2] + hunlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 357, 1);
																																}
																																if (modsd[19] == L"2")
																																{
																																	datatestDPU[4] = hunselingmin[6] + hunlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 357, 1);
																																}
																																if (modsd[19] == L"3")
																																{
																																	datatestDPU[4] = hunselingmin[10] + hunlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 357, 1);
																																}
																															}
																															return TRUE;
																														}
																														else
																														{
																															CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT67);
																															ASSERT(pEdit && pEdit->GetSafeHwnd());
																															if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																															{
																																UpdateData(TRUE);
																																CInputDlg dlg;
																																CMyPublicData::calculate(m_double31, hunlingminf, 30, dlg, 10, 0);
																																UpdateData(FALSE);
																																if (addSW == 1)
																																{
																																	if (modsd[1] == L"1")
																																	{
																																		datatestDPU[4] = hunselingmin[3] + hunlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 79, 1);
																																	}
																																	if (modsd[1] == L"2")
																																	{
																																		datatestDPU[4] = hunselingmin[7] + hunlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 79, 1);
																																	}
																																	if (modsd[1] == L"3")
																																	{
																																		datatestDPU[4] = hunselingmin[11] + hunlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 79, 1);
																																	}
																																}
																																if (addSW == 2)
																																{
																																	if (modsd[1] == L"1")
																																	{
																																		datatestDPU[4] = hunselingmin[3] + hunlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 358, 1);
																																	}
																																	if (modsd[1] == L"2")
																																	{
																																		datatestDPU[4] = hunselingmin[7] + hunlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 358, 1);
																																	}
																																	if (modsd[1] == L"3")
																																	{
																																		datatestDPU[4] = hunselingmin[11] + hunlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 358, 1);
																																	}
																																}
																																return TRUE;
																															}
																															else
																															{
																																CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT76);
																																ASSERT(pEdit && pEdit->GetSafeHwnd());
																																if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																{
																																	UpdateData(TRUE);
																																	CInputDlg dlg;
																																	CMyPublicData::calculate(m_double32, hunlingminf, 31, dlg, 10, 0);
																																	UpdateData(FALSE);
																																	if (addSW == 1)
																																	{
																																		if (modsd[3] == L"1")
																																		{
																																			datatestDPU[4] = hunselingmin[3] + hunlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 79, 1);
																																		}
																																		if (modsd[3] == L"2")
																																		{
																																			datatestDPU[4] = hunselingmin[7] + hunlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 79, 1);
																																		}
																																		if (modsd[3] == L"3")
																																		{
																																			datatestDPU[4] = hunselingmin[11] + hunlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 79, 1);
																																		}
																																	}
																																	if (addSW == 2)
																																	{
																																		if (modsd[3] == L"1")
																																		{
																																			datatestDPU[4] = hunselingmin[3] + hunlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 358, 1);
																																		}
																																		if (modsd[3] == L"2")
																																		{
																																			datatestDPU[4] = hunselingmin[7] + hunlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 358, 1);
																																		}
																																		if (modsd[3] == L"3")
																																		{
																																			datatestDPU[4] = hunselingmin[11] + hunlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 358, 1);
																																		}
																																	}
																																	return TRUE;
																																}
																																else
																																{
																																	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT77);
																																	ASSERT(pEdit && pEdit->GetSafeHwnd());
																																	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																	{
																																		UpdateData(TRUE);
																																		CInputDlg dlg;
																																		CMyPublicData::calculate(m_double33, hunlingminf, 32, dlg, 10, 0);
																																		UpdateData(FALSE);
																																		if (addSW == 1)
																																		{
																																			if (modsd[5] == L"1")
																																			{
																																				datatestDPU[4] = hunselingmin[3] + hunlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 79, 1);
																																			}
																																			if (modsd[5] == L"2")
																																			{
																																				datatestDPU[4] = hunselingmin[7] + hunlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 79, 1);
																																			}
																																			if (modsd[5] == L"3")
																																			{
																																				datatestDPU[4] = hunselingmin[11] + hunlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 79, 1);
																																			}
																																		}
																																		if (addSW == 2)
																																		{
																																			if (modsd[5] == L"1")
																																			{
																																				datatestDPU[4] = hunselingmin[3] + hunlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 358, 1);
																																			}
																																			if (modsd[5] == L"2")
																																			{
																																				datatestDPU[4] = hunselingmin[7] + hunlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 358, 1);
																																			}
																																			if (modsd[5] == L"3")
																																			{
																																				datatestDPU[4] = hunselingmin[11] + hunlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 358, 1);
																																			}
																																		}
																																		return TRUE;
																																	}
																																	else
																																	{
																																		CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT78);
																																		ASSERT(pEdit && pEdit->GetSafeHwnd());
																																		if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																		{
																																			UpdateData(TRUE);
																																			CInputDlg dlg;
																																			CMyPublicData::calculate(m_double34, hunlingminf, 33, dlg, 10, 0);
																																			UpdateData(FALSE);
																																			if (addSW == 1)
																																			{
																																				if (modsd[7] == L"1")
																																				{
																																					datatestDPU[4] = hunselingmin[3] + hunlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 79, 1);
																																				}
																																				if (modsd[7] == L"2")
																																				{
																																					datatestDPU[4] = hunselingmin[7] + hunlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 79, 1);
																																				}
																																				if (modsd[7] == L"3")
																																				{
																																					datatestDPU[4] = hunselingmin[11] + hunlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 79, 1);
																																				}
																																			}
																																			if (addSW == 2)
																																			{
																																				if (modsd[7] == L"1")
																																				{
																																					datatestDPU[4] = hunselingmin[3] + hunlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 358, 1);
																																				}
																																				if (modsd[7] == L"2")
																																				{
																																					datatestDPU[4] = hunselingmin[7] + hunlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 358, 1);
																																				}
																																				if (modsd[7] == L"3")
																																				{
																																					datatestDPU[4] = hunselingmin[11] + hunlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 358, 1);
																																				}
																																			}
																																			return TRUE;
																																		}
																																		else
																																		{
																																			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT79);
																																			ASSERT(pEdit && pEdit->GetSafeHwnd());
																																			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																			{
																																				UpdateData(TRUE);
																																				CInputDlg dlg;
																																				CMyPublicData::calculate(m_double35, hunlingminf, 34, dlg, 10, 0);
																																				UpdateData(FALSE);
																																				if (addSW == 1)
																																				{
																																					if (modsd[9] == L"1")
																																					{
																																						datatestDPU[4] = hunselingmin[3] + hunlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 79, 1);
																																					}
																																					if (modsd[9] == L"2")
																																					{
																																						datatestDPU[4] = hunselingmin[7] + hunlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 79, 1);
																																					}
																																					if (modsd[9] == L"3")
																																					{
																																						datatestDPU[4] = hunselingmin[11] + hunlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 79, 1);
																																					}
																																				}
																																				if (addSW == 2)
																																				{
																																					if (modsd[9] == L"1")
																																					{
																																						datatestDPU[4] = hunselingmin[3] + hunlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 358, 1);
																																					}
																																					if (modsd[9] == L"2")
																																					{
																																						datatestDPU[4] = hunselingmin[7] + hunlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 358, 1);
																																					}
																																					if (modsd[9] == L"3")
																																					{
																																						datatestDPU[4] = hunselingmin[11] + hunlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 358, 1);
																																					}
																																				}
																																				return TRUE;
																																			}
																																			else
																																			{
																																				CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT80);
																																				ASSERT(pEdit && pEdit->GetSafeHwnd());
																																				if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																				{
																																					UpdateData(TRUE);
																																					CInputDlg dlg;
																																					CMyPublicData::calculate(m_double36, hunlingminf, 35, dlg, 10, 0);
																																					UpdateData(FALSE);
																																					if (addSW == 1)
																																					{
																																						if (modsd[11] == L"1")
																																						{
																																							datatestDPU[4] = hunselingmin[3] + hunlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 79, 1);
																																						}
																																						if (modsd[11] == L"2")
																																						{
																																							datatestDPU[4] = hunselingmin[7] + hunlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 79, 1);
																																						}
																																						if (modsd[11] == L"3")
																																						{
																																							datatestDPU[4] = hunselingmin[11] + hunlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 79, 1);
																																						}
																																					}
																																					if (addSW == 2)
																																					{
																																						if (modsd[11] == L"1")
																																						{
																																							datatestDPU[4] = hunselingmin[3] + hunlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 358, 1);
																																						}
																																						if (modsd[11] == L"2")
																																						{
																																							datatestDPU[4] = hunselingmin[7] + hunlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 358, 1);
																																						}
																																						if (modsd[11] == L"3")
																																						{
																																							datatestDPU[4] = hunselingmin[11] + hunlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 358, 1);
																																						}
																																					}
																																					return TRUE;
																																				}
																																				else
																																				{
																																					CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT81);
																																					ASSERT(pEdit && pEdit->GetSafeHwnd());
																																					if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																					{
																																						UpdateData(TRUE);
																																						CInputDlg dlg;
																																						CMyPublicData::calculate(m_double37, hunlingminf, 36, dlg, 10, 0);
																																						UpdateData(FALSE);
																																						if (addSW == 1)
																																						{
																																							if (modsd[13] == L"1")
																																							{
																																								datatestDPU[4] = hunselingmin[3] + hunlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 79, 1);
																																							}
																																							if (modsd[13] == L"2")
																																							{
																																								datatestDPU[4] = hunselingmin[7] + hunlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 79, 1);
																																							}
																																							if (modsd[13] == L"3")
																																							{
																																								datatestDPU[4] = hunselingmin[11] + hunlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 79, 1);
																																							}
																																						}
																																						if (addSW == 2)
																																						{
																																							if (modsd[13] == L"1")
																																							{
																																								datatestDPU[4] = hunselingmin[3] + hunlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 358, 1);
																																							}
																																							if (modsd[13] == L"2")
																																							{
																																								datatestDPU[4] = hunselingmin[7] + hunlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 358, 1);
																																							}
																																							if (modsd[13] == L"3")
																																							{
																																								datatestDPU[4] = hunselingmin[11] + hunlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 358, 1);
																																							}
																																						}
																																						return TRUE;
																																					}
																																					else
																																					{
																																						CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT82);
																																						ASSERT(pEdit && pEdit->GetSafeHwnd());
																																						if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																						{
																																							UpdateData(TRUE);
																																							CInputDlg dlg;
																																							CMyPublicData::calculate(m_double38, hunlingminf, 37, dlg, 10, 0);
																																							UpdateData(FALSE);
																																							if (addSW == 1)
																																							{
																																								if (modsd[15] == L"1")
																																								{
																																									datatestDPU[4] = hunselingmin[3] + hunlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 79, 1);
																																								}
																																								if (modsd[15] == L"2")
																																								{
																																									datatestDPU[4] = hunselingmin[7] + hunlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 79, 1);
																																								}
																																								if (modsd[15] == L"3")
																																								{
																																									datatestDPU[4] = hunselingmin[11] + hunlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 79, 1);
																																								}
																																							}
																																							if (addSW == 2)
																																							{
																																								if (modsd[15] == L"1")
																																								{
																																									datatestDPU[4] = hunselingmin[3] + hunlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 358, 1);
																																								}
																																								if (modsd[15] == L"2")
																																								{
																																									datatestDPU[4] = hunselingmin[7] + hunlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 358, 1);
																																								}
																																								if (modsd[15] == L"3")
																																								{
																																									datatestDPU[4] = hunselingmin[11] + hunlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 358, 1);
																																								}
																																							}
																																							return TRUE;
																																						}
																																						else
																																						{
																																							CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT83);
																																							ASSERT(pEdit && pEdit->GetSafeHwnd());
																																							if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																							{
																																								UpdateData(TRUE);
																																								CInputDlg dlg;
																																								CMyPublicData::calculate(m_double39, hunlingminf, 38, dlg, 10, 0);
																																								UpdateData(FALSE);
																																								if (addSW == 1)
																																								{
																																									if (modsd[17] == L"1")
																																									{
																																										datatestDPU[4] = hunselingmin[3] + hunlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 79, 1);
																																									}
																																									if (modsd[17] == L"2")
																																									{
																																										datatestDPU[4] = hunselingmin[7] + hunlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 79, 1);
																																									}
																																									if (modsd[17] == L"3")
																																									{
																																										datatestDPU[4] = hunselingmin[11] + hunlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 79, 1);
																																									}
																																								}
																																								if (addSW == 2)
																																								{
																																									if (modsd[17] == L"1")
																																									{
																																										datatestDPU[4] = hunselingmin[3] + hunlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 358, 1);
																																									}
																																									if (modsd[17] == L"2")
																																									{
																																										datatestDPU[4] = hunselingmin[7] + hunlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 358, 1);
																																									}
																																									if (modsd[17] == L"3")
																																									{
																																										datatestDPU[4] = hunselingmin[11] + hunlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 358, 1);
																																									}
																																								}
																																								return TRUE;
																																							}
																																							else
																																							{
																																								CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT84);
																																								ASSERT(pEdit && pEdit->GetSafeHwnd());
																																								if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
																																								{
																																									UpdateData(TRUE);
																																									CInputDlg dlg;
																																									CMyPublicData::calculate(m_double40, hunlingminf, 39, dlg, 10, 0);
																																									UpdateData(FALSE);
																																									if (addSW == 1)
																																									{
																																										if (modsd[19] == L"1")
																																										{
																																											datatestDPU[4] = hunselingmin[3] + hunlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 79, 1);
																																										}
																																										if (modsd[19] == L"2")
																																										{
																																											datatestDPU[4] = hunselingmin[7] + hunlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 79, 1);
																																										}
																																										if (modsd[19] == L"3")
																																										{
																																											datatestDPU[4] = hunselingmin[11] + hunlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 79, 1);
																																										}
																																									}
																																									if (addSW == 2)
																																									{
																																										if (modsd[19] == L"1")
																																										{
																																											datatestDPU[4] = hunselingmin[3] + hunlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 358, 1);
																																										}
																																										if (modsd[19] == L"2")
																																										{
																																											datatestDPU[4] = hunselingmin[7] + hunlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 358, 1);
																																										}
																																										if (modsd[19] == L"3")
																																										{
																																											datatestDPU[4] = hunselingmin[11] + hunlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 358, 1);
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
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


void HUNFEN::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(hunlingminf[0]);
	opx.ModifyNode("num3901", str);
	str = opx.numtoString(hunlingminf[1]);
	opx.ModifyNode("num3902", str);
	str = opx.numtoString(hunlingminf[2]);
	opx.ModifyNode("num3903", str);
	str = opx.numtoString(hunlingminf[3]);
	opx.ModifyNode("num3904", str);
	str = opx.numtoString(hunlingminf[4]);
	opx.ModifyNode("num3905", str);
	str = opx.numtoString(hunlingminf[5]);
	opx.ModifyNode("num3906", str);
	str = opx.numtoString(hunlingminf[6]);
	opx.ModifyNode("num3907", str);
	str = opx.numtoString(hunlingminf[7]);
	opx.ModifyNode("num3908", str);
	str = opx.numtoString(hunlingminf[8]);
	opx.ModifyNode("num3909", str);
	str = opx.numtoString(hunlingminf[9]);
	opx.ModifyNode("num3910", str);
	str = opx.numtoString(hunlingminf[10]);
	opx.ModifyNode("num3911", str);
	str = opx.numtoString(hunlingminf[11]);
	opx.ModifyNode("num3912", str);
	str = opx.numtoString(hunlingminf[12]);
	opx.ModifyNode("num3913", str);
	str = opx.numtoString(hunlingminf[13]);
	opx.ModifyNode("num3914", str);
	str = opx.numtoString(hunlingminf[14]);
	opx.ModifyNode("num3915", str);
	str = opx.numtoString(hunlingminf[15]);
	opx.ModifyNode("num3916", str);
	str = opx.numtoString(hunlingminf[16]);
	opx.ModifyNode("num3917", str);
	str = opx.numtoString(hunlingminf[17]);
	opx.ModifyNode("num3918", str);
	str = opx.numtoString(hunlingminf[18]);
	opx.ModifyNode("num3919", str);
	str = opx.numtoString(hunlingminf[19]);
	opx.ModifyNode("num3920", str);
	str = opx.numtoString(hunlingminf[20]);
	opx.ModifyNode("num3921", str);
	str = opx.numtoString(hunlingminf[21]);
	opx.ModifyNode("num3922", str);
	str = opx.numtoString(hunlingminf[22]);
	opx.ModifyNode("num3923", str);
	str = opx.numtoString(hunlingminf[23]);
	opx.ModifyNode("num3924", str);
	str = opx.numtoString(hunlingminf[24]);
	opx.ModifyNode("num3925", str);
	str = opx.numtoString(hunlingminf[25]);
	opx.ModifyNode("num3926", str);
	str = opx.numtoString(hunlingminf[26]);
	opx.ModifyNode("num3927", str);
	str = opx.numtoString(hunlingminf[27]);
	opx.ModifyNode("num3928", str);
	str = opx.numtoString(hunlingminf[28]);
	opx.ModifyNode("num3929", str);
	str = opx.numtoString(hunlingminf[29]);
	opx.ModifyNode("num3930", str);
	str = opx.numtoString(hunlingminf[30]);
	opx.ModifyNode("num3931", str);
	str = opx.numtoString(hunlingminf[31]);
	opx.ModifyNode("num3932", str);
	str = opx.numtoString(hunlingminf[32]);
	opx.ModifyNode("num3933", str);
	str = opx.numtoString(hunlingminf[33]);
	opx.ModifyNode("num3934", str);
	str = opx.numtoString(hunlingminf[34]);
	opx.ModifyNode("num3935", str);
	str = opx.numtoString(hunlingminf[35]);
	opx.ModifyNode("num3936", str);
	str = opx.numtoString(hunlingminf[36]);
	opx.ModifyNode("num3937", str);
	str = opx.numtoString(hunlingminf[37]);
	opx.ModifyNode("num3938", str);
	str = opx.numtoString(hunlingminf[38]);
	opx.ModifyNode("num3939", str);
	str = opx.numtoString(hunlingminf[39]);
	opx.ModifyNode("num3940", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


//void HUNFEN::OnBnClickedButton4()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	GFEN gf;
//	gf.DoModal();
//	CDialogEx::OnCancel();
//}


//void HUNFEN::OnBnClickedButton5()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	BFEN bf;
//	bf.DoModal();
//	CDialogEx::OnCancel();
//}


//void HUNFEN::OnBnClickedButton6()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	RFEN rf;
//	rf.DoModal();
//	CDialogEx::OnCancel();
//}


void HUNFEN::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}



void HUNFEN::ReSize()
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

void HUNFEN::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON1)->GetWindowText(zhendong[0]);
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
		GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("OFF"));
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
		GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON1)->GetWindowText(zhendong[0]);
}


void HUNFEN::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON2)->GetWindowText(zhendong[1]);
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
		GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("OFF"));
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
		GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON2)->GetWindowText(zhendong[1]);
}


void HUNFEN::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_BUTTON3)->GetWindowText(zhendong[2]);
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
		GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("OFF"));
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
		GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("ON"));
	}
	GetDlgItem(IDC_BUTTON3)->GetWindowText(zhendong[2]);
}
