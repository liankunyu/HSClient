// RFEN.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "RFEN.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "MyPublicData.h"
#include "GFEN.h"
#include "BFEN.h"
#include "HUNFEN.h"
// RFEN 对话框

IMPLEMENT_DYNAMIC(RFEN, CDialogEx)

RFEN::RFEN(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_RFEN_DIALOG, pParent)
	, m_double1(rlingminf[0])
	, m_double2(rlingminf[1])
	, m_double3(rlingminf[2])
	, m_double4(rlingminf[3])
	, m_double5(rlingminf[4])
	, m_double6(rlingminf[5])
	, m_double7(rlingminf[6])
	, m_double8(rlingminf[7])
	, m_double9(rlingminf[8])
	, m_double10(rlingminf[9])
	, m_double11(rlingminf[10])
	, m_double12(rlingminf[11])
	, m_double13(rlingminf[12])
	, m_double14(rlingminf[13])
	, m_double15(rlingminf[14])
	, m_double16(rlingminf[15])
	, m_double17(rlingminf[16])
	, m_double18(rlingminf[17])
	, m_double19(rlingminf[18])
	, m_double20(rlingminf[19])
	, m_double21(rlingminf[20])
	, m_double22(rlingminf[21])
	, m_double23(rlingminf[22])
	, m_double24(rlingminf[23])
	, m_double25(rlingminf[24])
	, m_double26(rlingminf[25])
	, m_double27(rlingminf[26])
	, m_double28(rlingminf[27])
	, m_double29(rlingminf[28])
	, m_double30(rlingminf[29])
	, m_double31(rlingminf[30])
	, m_double32(rlingminf[31])
	, m_double33(rlingminf[32])
	, m_double34(rlingminf[33])
	, m_double35(rlingminf[34])
	, m_double36(rlingminf[35])
	, m_double37(rlingminf[36])
	, m_double38(rlingminf[37])
	, m_double39(rlingminf[38])
	, m_double40(rlingminf[39])
{

}

RFEN::~RFEN()
{
}

void RFEN::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(RFEN, CDialogEx)
	ON_BN_CLICKED(IDCANCEL, &RFEN::OnBnClickedCancel)
//	ON_BN_CLICKED(IDC_BUTTON4, &RFEN::OnBnClickedButton4)
	ON_WM_SIZE()
//	ON_BN_CLICKED(IDC_BUTTON5, &RFEN::OnBnClickedButton5)
//	ON_BN_CLICKED(IDC_BUTTON6, &RFEN::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON1, &RFEN::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &RFEN::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &RFEN::OnBnClickedButton3)
END_MESSAGE_MAP()


// RFEN 消息处理程序


BOOL RFEN::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	GetDlgItem(IDC_BUTTON1)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(zhendong[2]);


	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num5801", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num5802", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num5803", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num5804", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num5805", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num5806", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num5807", yuyan);
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


BOOL RFEN::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		UpdateData(TRUE);
		CInputDlg dlg;
		CMyPublicData::calculate(m_double1, rlingminf, 0, dlg, 10, 0);
		UpdateData(FALSE);
		if (addSW == 1)
		{
			if (modsd[0] == L"1")
			{
				datatestDPU[4] = rlingmin[0] + rlingminf[0];
				CMyPublicData::setfunc(32, 16, 64, 1);
			}
			if (modsd[0] == L"2")
			{
				datatestDPU[4] = rlingmin[4] + rlingminf[0];
				CMyPublicData::setfunc(32, 16, 64, 1);
			}
			if (modsd[0] == L"3")
			{
				datatestDPU[4] = rlingmin[8] + rlingminf[0];
				CMyPublicData::setfunc(32, 16, 64, 1);
			}
		}
		if (addSW == 2)
		{
			if (modsd[0] == L"1")
			{
				datatestDPU[4] = rlingmin[0] + rlingminf[0];
				CMyPublicData::setfunc(32, 16, 351, 1);
			}
			if (modsd[0] == L"2")
			{
				datatestDPU[4] = rlingmin[4] + rlingminf[0];
				CMyPublicData::setfunc(32, 16, 351, 1);
			}
			if (modsd[0] == L"3")
			{
				datatestDPU[4] = rlingmin[8] + rlingminf[0];
				CMyPublicData::setfunc(32, 16, 351, 1);
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
			CMyPublicData::calculate(m_double2, rlingminf, 1, dlg, 10, 0);
			UpdateData(FALSE);
			if (addSW == 1)
			{
				if (modsd[2] == L"1")
				{
					datatestDPU[4] = rlingmin[0] + rlingminf[1];
					CMyPublicData::setfunc(34, 16, 64, 1);
				}
				if (modsd[2] == L"2")
				{
					datatestDPU[4] = rlingmin[4] + rlingminf[1];
					CMyPublicData::setfunc(34, 16, 64, 1);
				}
				if (modsd[2] == L"3")
				{
					datatestDPU[4] = rlingmin[8] + rlingminf[1];
					CMyPublicData::setfunc(34, 16, 64, 1);
				}
			}
			if (addSW == 2)
			{
				if (modsd[2] == L"1")
				{
					datatestDPU[4] = rlingmin[0] + rlingminf[1];
					CMyPublicData::setfunc(34, 16, 351, 1);
				}
				if (modsd[2] == L"2")
				{
					datatestDPU[4] = rlingmin[4] + rlingminf[1];
					CMyPublicData::setfunc(34, 16, 351, 1);
				}
				if (modsd[2] == L"3")
				{
					datatestDPU[4] = rlingmin[8] + rlingminf[1];
					CMyPublicData::setfunc(34, 16, 351, 1);
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
				CMyPublicData::calculate(m_double3, rlingminf, 2, dlg, 10, 0);
				UpdateData(FALSE);
				if (addSW == 1)
				{
					if (modsd[4] == L"1")
					{
						datatestDPU[4] = rlingmin[0] + rlingminf[2];
						CMyPublicData::setfunc(36, 16, 64, 1);
					}
					if (modsd[4] == L"2")
					{
						datatestDPU[4] = rlingmin[4] + rlingminf[2];
						CMyPublicData::setfunc(36, 16, 64, 1);
					}
					if (modsd[4] == L"3")
					{
						datatestDPU[4] = rlingmin[8] + rlingminf[2];
						CMyPublicData::setfunc(36, 16, 64, 1);
					}
				}
				if (addSW == 2)
				{
					if (modsd[4] == L"1")
					{
						datatestDPU[4] = rlingmin[0] + rlingminf[2];
						CMyPublicData::setfunc(36, 16, 351, 1);
					}
					if (modsd[4] == L"2")
					{
						datatestDPU[4] = rlingmin[4] + rlingminf[2];
						CMyPublicData::setfunc(36, 16, 351, 1);
					}
					if (modsd[4] == L"3")
					{
						datatestDPU[4] = rlingmin[8] + rlingminf[2];
						CMyPublicData::setfunc(36, 16, 351, 1);
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
					CMyPublicData::calculate(m_double4, rlingminf, 3, dlg, 10, 0);
					UpdateData(FALSE);
					if (addSW == 1)
					{
						if (modsd[6] == L"1")
						{
							datatestDPU[4] = rlingmin[0] + rlingminf[3];
							CMyPublicData::setfunc(38, 16, 64, 1);
						}
						if (modsd[6] == L"2")
						{
							datatestDPU[4] = rlingmin[4] + rlingminf[3];
							CMyPublicData::setfunc(38, 16, 64, 1);
						}
						if (modsd[6] == L"3")
						{
							datatestDPU[4] = rlingmin[8] + rlingminf[3];
							CMyPublicData::setfunc(38, 16, 64, 1);
						}
					}
					if (addSW == 2)
					{
						if (modsd[6] == L"1")
						{
							datatestDPU[4] = rlingmin[0] + rlingminf[3];
							CMyPublicData::setfunc(38, 16, 351, 1);
						}
						if (modsd[6] == L"2")
						{
							datatestDPU[4] = rlingmin[4] + rlingminf[3];
							CMyPublicData::setfunc(38, 16, 351, 1);
						}
						if (modsd[6] == L"3")
						{
							datatestDPU[4] = rlingmin[8] + rlingminf[3];
							CMyPublicData::setfunc(38, 16, 351, 1);
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
						CMyPublicData::calculate(m_double5, rlingminf, 4, dlg, 10, 0);
						UpdateData(FALSE);
						if (addSW == 1)
						{
							if (modsd[8] == L"1")
							{
								datatestDPU[4] = rlingmin[0] + rlingminf[4];
								CMyPublicData::setfunc(40, 16, 64, 1);
							}
							if (modsd[8] == L"2")
							{
								datatestDPU[4] = rlingmin[4] + rlingminf[4];
								CMyPublicData::setfunc(40, 16, 64, 1);
							}
							if (modsd[8] == L"3")
							{
								datatestDPU[4] = rlingmin[8] + rlingminf[4];
								CMyPublicData::setfunc(40, 16, 64, 1);
							}
						}
						if (addSW == 2)
						{
							if (modsd[8] == L"1")
							{
								datatestDPU[4] = rlingmin[0] + rlingminf[4];
								CMyPublicData::setfunc(40, 16, 351, 1);
							}
							if (modsd[8] == L"2")
							{
								datatestDPU[4] = rlingmin[4] + rlingminf[4];
								CMyPublicData::setfunc(40, 16, 351, 1);
							}
							if (modsd[8] == L"3")
							{
								datatestDPU[4] = rlingmin[8] + rlingminf[4];
								CMyPublicData::setfunc(40, 16, 351, 1);
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
							CMyPublicData::calculate(m_double6, rlingminf, 5, dlg, 10, 0);
							UpdateData(FALSE);
							if (addSW == 1)
							{
								if (modsd[10] == L"1")
								{
									datatestDPU[4] = rlingmin[0] + rlingminf[5];
									CMyPublicData::setfunc(42, 16, 64, 1);
								}
								if (modsd[10] == L"2")
								{
									datatestDPU[4] = rlingmin[4] + rlingminf[5];
									CMyPublicData::setfunc(42, 16, 64, 1);
								}
								if (modsd[10] == L"3")
								{
									datatestDPU[4] = rlingmin[8] + rlingminf[5];
									CMyPublicData::setfunc(42, 16, 64, 1);
								}
							}
							if (addSW == 2)
							{
								if (modsd[10] == L"1")
								{
									datatestDPU[4] = rlingmin[0] + rlingminf[5];
									CMyPublicData::setfunc(42, 16, 351, 1);
								}
								if (modsd[10] == L"2")
								{
									datatestDPU[4] = rlingmin[4] + rlingminf[5];
									CMyPublicData::setfunc(42, 16, 351, 1);
								}
								if (modsd[10] == L"3")
								{
									datatestDPU[4] = rlingmin[8] + rlingminf[5];
									CMyPublicData::setfunc(42, 16, 351, 1);
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
								CMyPublicData::calculate(m_double7, rlingminf, 6, dlg, 10, 0);
								UpdateData(FALSE);
								if (addSW == 1)
								{
									if (modsd[12] == L"1")
									{
										datatestDPU[4] = rlingmin[0] + rlingminf[6];
										CMyPublicData::setfunc(44, 16, 64, 1);
									}
									if (modsd[12] == L"2")
									{
										datatestDPU[4] = rlingmin[4] + rlingminf[6];
										CMyPublicData::setfunc(44, 16, 64, 1);
									}
									if (modsd[12] == L"3")
									{
										datatestDPU[4] = rlingmin[8] + rlingminf[6];
										CMyPublicData::setfunc(44, 16, 64, 1);
									}
								}
								if (addSW == 2)
								{
									if (modsd[12] == L"1")
									{
										datatestDPU[4] = rlingmin[0] + rlingminf[6];
										CMyPublicData::setfunc(44, 16, 351, 1);
									}
									if (modsd[12] == L"2")
									{
										datatestDPU[4] = rlingmin[4] + rlingminf[6];
										CMyPublicData::setfunc(44, 16, 351, 1);
									}
									if (modsd[12] == L"3")
									{
										datatestDPU[4] = rlingmin[8] + rlingminf[6];
										CMyPublicData::setfunc(44, 16, 351, 1);
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
									CMyPublicData::calculate(m_double8, rlingminf, 7, dlg, 10, 0);
									UpdateData(FALSE);
									if (addSW == 1)
									{
										if (modsd[14] == L"1")
										{
											datatestDPU[4] = rlingmin[0] + rlingminf[7];
											CMyPublicData::setfunc(46, 16, 64, 1);
										}
										if (modsd[14] == L"2")
										{
											datatestDPU[4] = rlingmin[4] + rlingminf[7];
											CMyPublicData::setfunc(46, 16, 64, 1);
										}
										if (modsd[14] == L"3")
										{
											datatestDPU[4] = rlingmin[8] + rlingminf[7];
											CMyPublicData::setfunc(46, 16, 64, 1);
										}
									}
									if (addSW == 2)
									{
										if (modsd[14] == L"1")
										{
											datatestDPU[4] = rlingmin[0] + rlingminf[7];
											CMyPublicData::setfunc(46, 16, 351, 1);
										}
										if (modsd[14] == L"2")
										{
											datatestDPU[4] = rlingmin[4] + rlingminf[7];
											CMyPublicData::setfunc(46, 16, 351, 1);
										}
										if (modsd[14] == L"3")
										{
											datatestDPU[4] = rlingmin[8] + rlingminf[7];
											CMyPublicData::setfunc(46, 16, 351, 1);
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
										CMyPublicData::calculate(m_double9, rlingminf, 8, dlg, 10, 0);
										UpdateData(FALSE);
										if (addSW == 1)
										{
											if (modsd[16] == L"1")
											{
												datatestDPU[4] = rlingmin[0] + rlingminf[8];
												CMyPublicData::setfunc(48, 16, 64, 1);
											}
											if (modsd[16] == L"2")
											{
												datatestDPU[4] = rlingmin[4] + rlingminf[8];
												CMyPublicData::setfunc(48, 16, 64, 1);
											}
											if (modsd[16] == L"3")
											{
												datatestDPU[4] = rlingmin[8] + rlingminf[8];
												CMyPublicData::setfunc(48, 16, 64, 1);
											}
										}
										if (addSW == 2)
										{
											if (modsd[16] == L"1")
											{
												datatestDPU[4] = rlingmin[0] + rlingminf[8];
												CMyPublicData::setfunc(48, 16, 351, 1);
											}
											if (modsd[16] == L"2")
											{
												datatestDPU[4] = rlingmin[4] + rlingminf[8];
												CMyPublicData::setfunc(48, 16, 351, 1);
											}
											if (modsd[16] == L"3")
											{
												datatestDPU[4] = rlingmin[8] + rlingminf[8];
												CMyPublicData::setfunc(48, 16, 351, 1);
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
											CMyPublicData::calculate(m_double10, rlingminf, 9, dlg, 10, 0);
											UpdateData(FALSE);
											if (addSW == 1)
											{
												if (modsd[18] == L"1")
												{
													datatestDPU[4] = rlingmin[0] + rlingminf[9];
													CMyPublicData::setfunc(50, 16, 64, 1);
												}
												if (modsd[18] == L"2")
												{
													datatestDPU[4] = rlingmin[4] + rlingminf[9];
													CMyPublicData::setfunc(50, 16, 64, 1);
												}
												if (modsd[18] == L"3")
												{
													datatestDPU[4] = rlingmin[8] + rlingminf[9];
													CMyPublicData::setfunc(50, 16, 64, 1);
												}
											}
											if (addSW == 2)
											{
												if (modsd[18] == L"1")
												{
													datatestDPU[4] = rlingmin[0] + rlingminf[9];
													CMyPublicData::setfunc(50, 16, 351, 1);
												}
												if (modsd[18] == L"2")
												{
													datatestDPU[4] = rlingmin[4] + rlingminf[9];
													CMyPublicData::setfunc(50, 16, 351, 1);
												}
												if (modsd[18] == L"3")
												{
													datatestDPU[4] = rlingmin[8] + rlingminf[9];
													CMyPublicData::setfunc(50, 16, 351, 1);
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
												CMyPublicData::calculate(m_double11, rlingminf, 10, dlg, 10, 0);
												UpdateData(FALSE);
												if (addSW == 1)
												{
													if (modsd[0] == L"1")
													{
														datatestDPU[4] = rlingmin[1] + rlingminf[10];
														CMyPublicData::setfunc(32, 16, 65, 1);
													}
													if (modsd[0] == L"2")
													{
														datatestDPU[4] = rlingmin[5] + rlingminf[10];
														CMyPublicData::setfunc(32, 16, 65, 1);
													}
													if (modsd[0] == L"3")
													{
														datatestDPU[4] = rlingmin[9] + rlingminf[10];
														CMyPublicData::setfunc(32, 16, 65, 1);
													}
												}
												if (addSW == 2)
												{
													if (modsd[0] == L"1")
													{
														datatestDPU[4] = rlingmin[1] + rlingminf[10];
														CMyPublicData::setfunc(32, 16, 352, 1);
													}
													if (modsd[0] == L"2")
													{
														datatestDPU[4] = rlingmin[5] + rlingminf[10];
														CMyPublicData::setfunc(32, 16, 352, 1);
													}
													if (modsd[0] == L"3")
													{
														datatestDPU[4] = rlingmin[9] + rlingminf[10];
														CMyPublicData::setfunc(32, 16, 352, 1);
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
													CMyPublicData::calculate(m_double12, rlingminf, 11, dlg, 10, 0);
													UpdateData(FALSE);
													if (addSW == 1)
													{
														if (modsd[2] == L"1")
														{
															datatestDPU[4] = rlingmin[1] + rlingminf[11];
															CMyPublicData::setfunc(34, 16, 65, 1);
														}
														if (modsd[2] == L"2")
														{
															datatestDPU[4] = rlingmin[5] + rlingminf[11];
															CMyPublicData::setfunc(34, 16, 65, 1);
														}
														if (modsd[2] == L"3")
														{
															datatestDPU[4] = rlingmin[9] + rlingminf[11];
															CMyPublicData::setfunc(34, 16, 65, 1);
														}
													}
													if (addSW == 2)
													{
														if (modsd[2] == L"1")
														{
															datatestDPU[4] = rlingmin[1] + rlingminf[11];
															CMyPublicData::setfunc(34, 16, 352, 1);
														}
														if (modsd[2] == L"2")
														{
															datatestDPU[4] = rlingmin[5] + rlingminf[11];
															CMyPublicData::setfunc(34, 16, 352, 1);
														}
														if (modsd[2] == L"3")
														{
															datatestDPU[4] = rlingmin[9] + rlingminf[11];
															CMyPublicData::setfunc(34, 16, 352, 1);
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
														CMyPublicData::calculate(m_double13, rlingminf, 12, dlg, 10, 0);
														UpdateData(FALSE);
														if (addSW == 1)
														{
															if (modsd[4] == L"1")
															{
																datatestDPU[4] = rlingmin[1] + rlingminf[12];
																CMyPublicData::setfunc(36, 16, 65, 1);
															}
															if (modsd[4] == L"2")
															{
																datatestDPU[4] = rlingmin[5] + rlingminf[12];
																CMyPublicData::setfunc(36, 16, 65, 1);
															}
															if (modsd[4] == L"3")
															{
																datatestDPU[4] = rlingmin[9] + rlingminf[12];
																CMyPublicData::setfunc(36, 16, 65, 1);
															}
														}
														if (addSW == 2)
														{
															if (modsd[4] == L"1")
															{
																datatestDPU[4] = rlingmin[1] + rlingminf[12];
																CMyPublicData::setfunc(36, 16, 352, 1);
															}
															if (modsd[4] == L"2")
															{
																datatestDPU[4] = rlingmin[5] + rlingminf[12];
																CMyPublicData::setfunc(36, 16, 352, 1);
															}
															if (modsd[4] == L"3")
															{
																datatestDPU[4] = rlingmin[9] + rlingminf[12];
																CMyPublicData::setfunc(36, 16, 352, 1);
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
															CMyPublicData::calculate(m_double14, rlingminf, 13, dlg, 10, 0);
															UpdateData(FALSE);
															if (addSW == 1)
															{
																if (modsd[6] == L"1")
																{
																	datatestDPU[4] = rlingmin[1] + rlingminf[13];
																	CMyPublicData::setfunc(38, 16, 65, 1);
																}
																if (modsd[6] == L"2")
																{
																	datatestDPU[4] = rlingmin[5] + rlingminf[13];
																	CMyPublicData::setfunc(38, 16, 65, 1);
																}
																if (modsd[6] == L"3")
																{
																	datatestDPU[4] = rlingmin[9] + rlingminf[13];
																	CMyPublicData::setfunc(38, 16, 65, 1);
																}
															}
															if (addSW == 2)
															{
																if (modsd[6] == L"1")
																{
																	datatestDPU[4] = rlingmin[1] + rlingminf[13];
																	CMyPublicData::setfunc(38, 16, 352, 1);
																}
																if (modsd[6] == L"2")
																{
																	datatestDPU[4] = rlingmin[5] + rlingminf[13];
																	CMyPublicData::setfunc(38, 16, 352, 1);
																}
																if (modsd[6] == L"3")
																{
																	datatestDPU[4] = rlingmin[9] + rlingminf[13];
																	CMyPublicData::setfunc(38, 16, 352, 1);
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
																CMyPublicData::calculate(m_double15, rlingminf, 14, dlg, 10, 0);
																UpdateData(FALSE);
																if (addSW == 1)
																{
																	if (modsd[8] == L"1")
																	{
																		datatestDPU[4] = rlingmin[1] + rlingminf[14];
																		CMyPublicData::setfunc(40, 16, 65, 1);
																	}
																	if (modsd[8] == L"2")
																	{
																		datatestDPU[4] = rlingmin[5] + rlingminf[14];
																		CMyPublicData::setfunc(40, 16, 65, 1);
																	}
																	if (modsd[8] == L"3")
																	{
																		datatestDPU[4] = rlingmin[9] + rlingminf[14];
																		CMyPublicData::setfunc(40, 16, 65, 1);
																	}
																}
																if (addSW == 2)
																{
																	if (modsd[8] == L"1")
																	{
																		datatestDPU[4] = rlingmin[1] + rlingminf[14];
																		CMyPublicData::setfunc(40, 16, 352, 1);
																	}
																	if (modsd[8] == L"2")
																	{
																		datatestDPU[4] = rlingmin[5] + rlingminf[14];
																		CMyPublicData::setfunc(40, 16, 352, 1);
																	}
																	if (modsd[8] == L"3")
																	{
																		datatestDPU[4] = rlingmin[9] + rlingminf[14];
																		CMyPublicData::setfunc(40, 16, 352, 1);
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
																	CMyPublicData::calculate(m_double16, rlingminf, 15, dlg, 10, 0);
																	UpdateData(FALSE);
																	if (addSW == 1)
																	{
																		if (modsd[10] == L"1")
																		{
																			datatestDPU[4] = rlingmin[1] + rlingminf[15];
																			CMyPublicData::setfunc(42, 16, 65, 1);
																		}
																		if (modsd[10] == L"2")
																		{
																			datatestDPU[4] = rlingmin[5] + rlingminf[15];
																			CMyPublicData::setfunc(42, 16, 65, 1);
																		}
																		if (modsd[10] == L"3")
																		{
																			datatestDPU[4] = rlingmin[9] + rlingminf[15];
																			CMyPublicData::setfunc(42, 16, 65, 1);
																		}
																	}
																	if (addSW == 2)
																	{
																		if (modsd[10] == L"1")
																		{
																			datatestDPU[4] = rlingmin[1] + rlingminf[15];
																			CMyPublicData::setfunc(42, 16, 352, 1);
																		}
																		if (modsd[10] == L"2")
																		{
																			datatestDPU[4] = rlingmin[5] + rlingminf[15];
																			CMyPublicData::setfunc(42, 16, 352, 1);
																		}
																		if (modsd[10] == L"3")
																		{
																			datatestDPU[4] = rlingmin[9] + rlingminf[15];
																			CMyPublicData::setfunc(42, 16, 352, 1);
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
																		CMyPublicData::calculate(m_double17, rlingminf, 16, dlg, 10, 0);
																		UpdateData(FALSE);
																		if (addSW == 1)
																		{
																			if (modsd[12] == L"1")
																			{
																				datatestDPU[4] = rlingmin[1] + rlingminf[16];
																				CMyPublicData::setfunc(44, 16, 65, 1);
																			}
																			if (modsd[12] == L"2")
																			{
																				datatestDPU[4] = rlingmin[5] + rlingminf[16];
																				CMyPublicData::setfunc(44, 16, 65, 1);
																			}
																			if (modsd[12] == L"3")
																			{
																				datatestDPU[4] = rlingmin[9] + rlingminf[16];
																				CMyPublicData::setfunc(44, 16, 65, 1);
																			}
																		}
																		if (addSW == 2)
																		{
																			if (modsd[12] == L"1")
																			{
																				datatestDPU[4] = rlingmin[1] + rlingminf[16];
																				CMyPublicData::setfunc(44, 16, 352, 1);
																			}
																			if (modsd[12] == L"2")
																			{
																				datatestDPU[4] = rlingmin[5] + rlingminf[16];
																				CMyPublicData::setfunc(44, 16, 352, 1);
																			}
																			if (modsd[12] == L"3")
																			{
																				datatestDPU[4] = rlingmin[9] + rlingminf[16];
																				CMyPublicData::setfunc(44, 16, 352, 1);
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
																			CMyPublicData::calculate(m_double18, rlingminf, 17, dlg, 10, 0);
																			UpdateData(FALSE);
																			if (addSW == 1)
																			{
																				if (modsd[14] == L"1")
																				{
																					datatestDPU[4] = rlingmin[1] + rlingminf[17];
																					CMyPublicData::setfunc(46, 16, 65, 1);
																				}
																				if (modsd[14] == L"2")
																				{
																					datatestDPU[4] = rlingmin[5] + rlingminf[17];
																					CMyPublicData::setfunc(46, 16, 65, 1);
																				}
																				if (modsd[14] == L"3")
																				{
																					datatestDPU[4] = rlingmin[9] + rlingminf[17];
																					CMyPublicData::setfunc(46, 16, 65, 1);
																				}
																			}
																			if (addSW == 2)
																			{
																				if (modsd[14] == L"1")
																				{
																					datatestDPU[4] = rlingmin[1] + rlingminf[17];
																					CMyPublicData::setfunc(46, 16, 352, 1);
																				}
																				if (modsd[14] == L"2")
																				{
																					datatestDPU[4] = rlingmin[5] + rlingminf[17];
																					CMyPublicData::setfunc(46, 16, 352, 1);
																				}
																				if (modsd[14] == L"3")
																				{
																					datatestDPU[4] = rlingmin[9] + rlingminf[17];
																					CMyPublicData::setfunc(46, 16, 352, 1);
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
																				CMyPublicData::calculate(m_double19, rlingminf, 18, dlg, 10, 0);
																				UpdateData(FALSE);
																				if (addSW == 1)
																				{
																					if (modsd[16] == L"1")
																					{
																						datatestDPU[4] = rlingmin[1] + rlingminf[18];
																						CMyPublicData::setfunc(48, 16, 65, 1);
																					}
																					if (modsd[16] == L"2")
																					{
																						datatestDPU[4] = rlingmin[5] + rlingminf[18];
																						CMyPublicData::setfunc(48, 16, 65, 1);
																					}
																					if (modsd[16] == L"3")
																					{
																						datatestDPU[4] = rlingmin[9] + rlingminf[18];
																						CMyPublicData::setfunc(48, 16, 65, 1);
																					}
																				}
																				if (addSW == 2)
																				{
																					if (modsd[16] == L"1")
																					{
																						datatestDPU[4] = rlingmin[1] + rlingminf[18];
																						CMyPublicData::setfunc(48, 16, 352, 1);
																					}
																					if (modsd[16] == L"2")
																					{
																						datatestDPU[4] = rlingmin[5] + rlingminf[18];
																						CMyPublicData::setfunc(48, 16, 352, 1);
																					}
																					if (modsd[16] == L"3")
																					{
																						datatestDPU[4] = rlingmin[9] + rlingminf[18];
																						CMyPublicData::setfunc(48, 16, 352, 1);
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
																					CMyPublicData::calculate(m_double20, rlingminf, 19, dlg, 10, 0);
																					UpdateData(FALSE);
																					if (addSW == 1)
																					{
																						if (modsd[18] == L"1")
																						{
																							datatestDPU[4] = rlingmin[1] + rlingminf[19];
																							CMyPublicData::setfunc(50, 16, 65, 1);
																						}
																						if (modsd[18] == L"2")
																						{
																							datatestDPU[4] = rlingmin[5] + rlingminf[19];
																							CMyPublicData::setfunc(50, 16, 65, 1);
																						}
																						if (modsd[18] == L"3")
																						{
																							datatestDPU[4] = rlingmin[9] + rlingminf[19];
																							CMyPublicData::setfunc(50, 16, 65, 1);
																						}
																					}
																					if (addSW == 2)
																					{
																						if (modsd[18] == L"1")
																						{
																							datatestDPU[4] = rlingmin[1] + rlingminf[19];
																							CMyPublicData::setfunc(50, 16, 352, 1);
																						}
																						if (modsd[18] == L"2")
																						{
																							datatestDPU[4] = rlingmin[5] + rlingminf[19];
																							CMyPublicData::setfunc(50, 16, 352, 1);
																						}
																						if (modsd[18] == L"3")
																						{
																							datatestDPU[4] = rlingmin[9] + rlingminf[19];
																							CMyPublicData::setfunc(50, 16, 352, 1);
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
																						CMyPublicData::calculate(m_double21, rlingminf, 20, dlg, 10, 0);
																						UpdateData(FALSE);
																						if (addSW == 1)
																						{
																							if (modsd[1] == L"1")
																							{
																								datatestDPU[4] = rlingmin[2] + rlingminf[20];
																								CMyPublicData::setfunc(33, 16, 64, 1);
																							}
																							if (modsd[1] == L"2")
																							{
																								datatestDPU[4] = rlingmin[6] + rlingminf[20];
																								CMyPublicData::setfunc(33, 16, 64, 1);
																							}
																							if (modsd[1] == L"3")
																							{
																								datatestDPU[4] = rlingmin[10] + rlingminf[20];
																								CMyPublicData::setfunc(33, 16, 64, 1);
																							}
																						}
																						if (addSW == 2)
																						{
																							if (modsd[1] == L"1")
																							{
																								datatestDPU[4] = rlingmin[2] + rlingminf[20];
																								CMyPublicData::setfunc(33, 16, 351, 1);
																							}
																							if (modsd[1] == L"2")
																							{
																								datatestDPU[4] = rlingmin[6] + rlingminf[20];
																								CMyPublicData::setfunc(33, 16, 351, 1);
																							}
																							if (modsd[1] == L"3")
																							{
																								datatestDPU[4] = rlingmin[10] + rlingminf[20];
																								CMyPublicData::setfunc(33, 16, 351, 1);
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
																							CMyPublicData::calculate(m_double22, rlingminf, 21, dlg, 10, 0);
																							UpdateData(FALSE);
																							if (addSW == 1)
																							{
																								if (modsd[3] == L"1")
																								{
																									datatestDPU[4] = rlingmin[2] + rlingminf[21];
																									CMyPublicData::setfunc(35, 16, 64, 1);
																								}
																								if (modsd[3] == L"2")
																								{
																									datatestDPU[4] = rlingmin[6] + rlingminf[21];
																									CMyPublicData::setfunc(35, 16, 64, 1);
																								}
																								if (modsd[3] == L"3")
																								{
																									datatestDPU[4] = rlingmin[10] + rlingminf[21];
																									CMyPublicData::setfunc(35, 16, 64, 1);
																								}
																							}
																							if (addSW == 2)
																							{
																								if (modsd[3] == L"1")
																								{
																									datatestDPU[4] = rlingmin[2] + rlingminf[21];
																									CMyPublicData::setfunc(35, 16, 351, 1);
																								}
																								if (modsd[3] == L"2")
																								{
																									datatestDPU[4] = rlingmin[6] + rlingminf[21];
																									CMyPublicData::setfunc(35, 16, 351, 1);
																								}
																								if (modsd[3] == L"3")
																								{
																									datatestDPU[4] = rlingmin[10] + rlingminf[21];
																									CMyPublicData::setfunc(35, 16, 351, 1);
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
																								CMyPublicData::calculate(m_double23, rlingminf, 22, dlg, 10, 0);
																								UpdateData(FALSE);
																								if (addSW == 1)
																								{
																									if (modsd[5] == L"1")
																									{
																										datatestDPU[4] = rlingmin[2] + rlingminf[22];
																										CMyPublicData::setfunc(37, 16, 64, 1);
																									}
																									if (modsd[5] == L"2")
																									{
																										datatestDPU[4] = rlingmin[6] + rlingminf[22];
																										CMyPublicData::setfunc(37, 16, 64, 1);
																									}
																									if (modsd[5] == L"3")
																									{
																										datatestDPU[4] = rlingmin[10] + rlingminf[22];
																										CMyPublicData::setfunc(37, 16, 64, 1);
																									}
																								}
																								if (addSW == 2)
																								{
																									if (modsd[5] == L"1")
																									{
																										datatestDPU[4] = rlingmin[2] + rlingminf[22];
																										CMyPublicData::setfunc(37, 16, 351, 1);
																									}
																									if (modsd[5] == L"2")
																									{
																										datatestDPU[4] = rlingmin[6] + rlingminf[22];
																										CMyPublicData::setfunc(37, 16, 351, 1);
																									}
																									if (modsd[5] == L"3")
																									{
																										datatestDPU[4] = rlingmin[10] + rlingminf[22];
																										CMyPublicData::setfunc(37, 16, 351, 1);
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
																									CMyPublicData::calculate(m_double24, rlingminf, 23, dlg, 10, 0);
																									UpdateData(FALSE);
																									if (addSW == 1)
																									{
																										if (modsd[7] == L"1")
																										{
																											datatestDPU[4] = rlingmin[2] + rlingminf[23];
																											CMyPublicData::setfunc(39, 16, 64, 1);
																										}
																										if (modsd[7] == L"2")
																										{
																											datatestDPU[4] = rlingmin[6] + rlingminf[23];
																											CMyPublicData::setfunc(39, 16, 64, 1);
																										}
																										if (modsd[7] == L"3")
																										{
																											datatestDPU[4] = rlingmin[10] + rlingminf[23];
																											CMyPublicData::setfunc(39, 16, 64, 1);
																										}
																									}
																									if (addSW == 2)
																									{
																										if (modsd[7] == L"1")
																										{
																											datatestDPU[4] = rlingmin[2] + rlingminf[23];
																											CMyPublicData::setfunc(39, 16, 351, 1);
																										}
																										if (modsd[7] == L"2")
																										{
																											datatestDPU[4] = rlingmin[6] + rlingminf[23];
																											CMyPublicData::setfunc(39, 16, 351, 1);
																										}
																										if (modsd[7] == L"3")
																										{
																											datatestDPU[4] = rlingmin[10] + rlingminf[23];
																											CMyPublicData::setfunc(39, 16, 351, 1);
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
																										CMyPublicData::calculate(m_double25, rlingminf, 24, dlg, 10, 0);
																										UpdateData(FALSE);
																										if (addSW == 1)
																										{
																											if (modsd[9] == L"1")
																											{
																												datatestDPU[4] = rlingmin[2] + rlingminf[24];
																												CMyPublicData::setfunc(41, 16, 64, 1);
																											}
																											if (modsd[9] == L"2")
																											{
																												datatestDPU[4] = rlingmin[6] + rlingminf[24];
																												CMyPublicData::setfunc(41, 16, 64, 1);
																											}
																											if (modsd[9] == L"3")
																											{
																												datatestDPU[4] = rlingmin[10] + rlingminf[24];
																												CMyPublicData::setfunc(41, 16, 64, 1);
																											}
																										}
																										if (addSW == 2)
																										{
																											if (modsd[9] == L"1")
																											{
																												datatestDPU[4] = rlingmin[2] + rlingminf[24];
																												CMyPublicData::setfunc(41, 16, 351, 1);
																											}
																											if (modsd[9] == L"2")
																											{
																												datatestDPU[4] = rlingmin[6] + rlingminf[24];
																												CMyPublicData::setfunc(41, 16, 351, 1);
																											}
																											if (modsd[9] == L"3")
																											{
																												datatestDPU[4] = rlingmin[10] + rlingminf[24];
																												CMyPublicData::setfunc(41, 16, 351, 1);
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
																											CMyPublicData::calculate(m_double26, rlingminf, 25, dlg, 10, 0);
																											UpdateData(FALSE);
																											if (addSW == 1)
																											{
																												if (modsd[11] == L"1")
																												{
																													datatestDPU[4] = rlingmin[2] + rlingminf[25];
																													CMyPublicData::setfunc(43, 16, 64, 1);
																												}
																												if (modsd[11] == L"2")
																												{
																													datatestDPU[4] = rlingmin[6] + rlingminf[25];
																													CMyPublicData::setfunc(43, 16, 64, 1);
																												}
																												if (modsd[11] == L"3")
																												{
																													datatestDPU[4] = rlingmin[10] + rlingminf[25];
																													CMyPublicData::setfunc(43, 16, 64, 1);
																												}
																											}
																											if (addSW == 2)
																											{
																												if (modsd[11] == L"1")
																												{
																													datatestDPU[4] = rlingmin[2] + rlingminf[25];
																													CMyPublicData::setfunc(43, 16, 351, 1);
																												}
																												if (modsd[11] == L"2")
																												{
																													datatestDPU[4] = rlingmin[6] + rlingminf[25];
																													CMyPublicData::setfunc(43, 16, 351, 1);
																												}
																												if (modsd[11] == L"3")
																												{
																													datatestDPU[4] = rlingmin[10] + rlingminf[25];
																													CMyPublicData::setfunc(43, 16, 351, 1);
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
																												CMyPublicData::calculate(m_double27, rlingminf, 26, dlg, 10, 0);
																												UpdateData(FALSE);
																												if (addSW == 1)
																												{
																													if (modsd[13] == L"1")
																													{
																														datatestDPU[4] = rlingmin[2] + rlingminf[26];
																														CMyPublicData::setfunc(45, 16, 64, 1);
																													}
																													if (modsd[13] == L"2")
																													{
																														datatestDPU[4] = rlingmin[6] + rlingminf[26];
																														CMyPublicData::setfunc(45, 16, 64, 1);
																													}
																													if (modsd[13] == L"3")
																													{
																														datatestDPU[4] = rlingmin[10] + rlingminf[26];
																														CMyPublicData::setfunc(45, 16, 64, 1);
																													}
																												}
																												if (addSW == 2)
																												{
																													if (modsd[13] == L"1")
																													{
																														datatestDPU[4] = rlingmin[2] + rlingminf[26];
																														CMyPublicData::setfunc(45, 16, 351, 1);
																													}
																													if (modsd[13] == L"2")
																													{
																														datatestDPU[4] = rlingmin[6] + rlingminf[26];
																														CMyPublicData::setfunc(45, 16, 351, 1);
																													}
																													if (modsd[13] == L"3")
																													{
																														datatestDPU[4] = rlingmin[10] + rlingminf[26];
																														CMyPublicData::setfunc(45, 16, 351, 1);
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
																													CMyPublicData::calculate(m_double28, rlingminf, 27, dlg, 10, 0);
																													UpdateData(FALSE);
																													if (addSW == 1)
																													{
																														if (modsd[15] == L"1")
																														{
																															datatestDPU[4] = rlingmin[2] + rlingminf[27];
																															CMyPublicData::setfunc(47, 16, 64, 1);
																														}
																														if (modsd[15] == L"2")
																														{
																															datatestDPU[4] = rlingmin[6] + rlingminf[27];
																															CMyPublicData::setfunc(47, 16, 64, 1);
																														}
																														if (modsd[15] == L"3")
																														{
																															datatestDPU[4] = rlingmin[10] + rlingminf[27];
																															CMyPublicData::setfunc(47, 16, 64, 1);
																														}
																													}
																													if (addSW == 2)
																													{
																														if (modsd[15] == L"1")
																														{
																															datatestDPU[4] = rlingmin[2] + rlingminf[27];
																															CMyPublicData::setfunc(47, 16, 351, 1);
																														}
																														if (modsd[15] == L"2")
																														{
																															datatestDPU[4] = rlingmin[6] + rlingminf[27];
																															CMyPublicData::setfunc(47, 16, 351, 1);
																														}
																														if (modsd[15] == L"3")
																														{
																															datatestDPU[4] = rlingmin[10] + rlingminf[27];
																															CMyPublicData::setfunc(47, 16, 351, 1);
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
																														CMyPublicData::calculate(m_double29, rlingminf, 28, dlg, 10, 0);
																														UpdateData(FALSE);
																														if (addSW == 1)
																														{
																															if (modsd[17] == L"1")
																															{
																																datatestDPU[4] = rlingmin[2] + rlingminf[28];
																																CMyPublicData::setfunc(49, 16, 64, 1);
																															}
																															if (modsd[17] == L"2")
																															{
																																datatestDPU[4] = rlingmin[6] + rlingminf[28];
																																CMyPublicData::setfunc(49, 16, 64, 1);
																															}
																															if (modsd[17] == L"3")
																															{
																																datatestDPU[4] = rlingmin[10] + rlingminf[28];
																																CMyPublicData::setfunc(49, 16, 64, 1);
																															}
																														}
																														if (addSW == 2)
																														{
																															if (modsd[17] == L"1")
																															{
																																datatestDPU[4] = rlingmin[2] + rlingminf[28];
																																CMyPublicData::setfunc(49, 16, 351, 1);
																															}
																															if (modsd[17] == L"2")
																															{
																																datatestDPU[4] = rlingmin[6] + rlingminf[28];
																																CMyPublicData::setfunc(49, 16, 351, 1);
																															}
																															if (modsd[17] == L"3")
																															{
																																datatestDPU[4] = rlingmin[10] + rlingminf[28];
																																CMyPublicData::setfunc(49, 16, 351, 1);
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
																															CMyPublicData::calculate(m_double30, rlingminf, 29, dlg, 10, 0);
																															UpdateData(FALSE);
																															if (addSW == 1)
																															{
																																if (modsd[19] == L"1")
																																{
																																	datatestDPU[4] = rlingmin[2] + rlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 64, 1);
																																}
																																if (modsd[19] == L"2")
																																{
																																	datatestDPU[4] = rlingmin[6] + rlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 64, 1);
																																}
																																if (modsd[19] == L"3")
																																{
																																	datatestDPU[4] = rlingmin[10] + rlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 64, 1);
																																}
																															}
																															if (addSW == 2)
																															{
																																if (modsd[19] == L"1")
																																{
																																	datatestDPU[4] = rlingmin[2] + rlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 351, 1);
																																}
																																if (modsd[19] == L"2")
																																{
																																	datatestDPU[4] = rlingmin[6] + rlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 351, 1);
																																}
																																if (modsd[19] == L"3")
																																{
																																	datatestDPU[4] = rlingmin[10] + rlingminf[29];
																																	CMyPublicData::setfunc(51, 16, 351, 1);
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
																																CMyPublicData::calculate(m_double31, rlingminf, 30, dlg, 10, 0);
																																UpdateData(FALSE);
																																if (addSW == 1)
																																{
																																	if (modsd[1] == L"1")
																																	{
																																		datatestDPU[4] = rlingmin[3] + rlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 65, 1);
																																	}
																																	if (modsd[1] == L"2")
																																	{
																																		datatestDPU[4] = rlingmin[7] + rlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 65, 1);
																																	}
																																	if (modsd[1] == L"3")
																																	{
																																		datatestDPU[4] = rlingmin[11] + rlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 65, 1);
																																	}
																																}
																																if (addSW == 2)
																																{
																																	if (modsd[1] == L"1")
																																	{
																																		datatestDPU[4] = rlingmin[3] + rlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 352, 1);
																																	}
																																	if (modsd[1] == L"2")
																																	{
																																		datatestDPU[4] = rlingmin[7] + rlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 352, 1);
																																	}
																																	if (modsd[1] == L"3")
																																	{
																																		datatestDPU[4] = rlingmin[11] + rlingminf[30];
																																		CMyPublicData::setfunc(33, 16, 352, 1);
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
																																	CMyPublicData::calculate(m_double32, rlingminf, 31, dlg, 10, 0);
																																	UpdateData(FALSE);
																																	if (addSW == 1)
																																	{
																																		if (modsd[3] == L"1")
																																		{
																																			datatestDPU[4] = rlingmin[3] + rlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 65, 1);
																																		}
																																		if (modsd[3] == L"2")
																																		{
																																			datatestDPU[4] = rlingmin[7] + rlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 65, 1);
																																		}
																																		if (modsd[3] == L"3")
																																		{
																																			datatestDPU[4] = rlingmin[11] + rlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 65, 1);
																																		}
																																	}
																																	if (addSW == 2)
																																	{
																																		if (modsd[3] == L"1")
																																		{
																																			datatestDPU[4] = rlingmin[3] + rlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 352, 1);
																																		}
																																		if (modsd[3] == L"2")
																																		{
																																			datatestDPU[4] = rlingmin[7] + rlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 352, 1);
																																		}
																																		if (modsd[3] == L"3")
																																		{
																																			datatestDPU[4] = rlingmin[11] + rlingminf[31];
																																			CMyPublicData::setfunc(35, 16, 352, 1);
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
																																		CMyPublicData::calculate(m_double33, rlingminf, 32, dlg, 10, 0);
																																		UpdateData(FALSE);
																																		if (addSW == 1)
																																		{
																																			if (modsd[5] == L"1")
																																			{
																																				datatestDPU[4] = rlingmin[3] + rlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 65, 1);
																																			}
																																			if (modsd[5] == L"2")
																																			{
																																				datatestDPU[4] = rlingmin[7] + rlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 65, 1);
																																			}
																																			if (modsd[5] == L"3")
																																			{
																																				datatestDPU[4] = rlingmin[11] + rlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 65, 1);
																																			}
																																		}
																																		if (addSW == 2)
																																		{
																																			if (modsd[5] == L"1")
																																			{
																																				datatestDPU[4] = rlingmin[3] + rlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 352, 1);
																																			}
																																			if (modsd[5] == L"2")
																																			{
																																				datatestDPU[4] = rlingmin[7] + rlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 352, 1);
																																			}
																																			if (modsd[5] == L"3")
																																			{
																																				datatestDPU[4] = rlingmin[11] + rlingminf[32];
																																				CMyPublicData::setfunc(37, 16, 352, 1);
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
																																			CMyPublicData::calculate(m_double34, rlingminf, 33, dlg, 10, 0);
																																			UpdateData(FALSE);
																																			if (addSW == 1)
																																			{
																																				if (modsd[7] == L"1")
																																				{
																																					datatestDPU[4] = rlingmin[3] + rlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 65, 1);
																																				}
																																				if (modsd[7] == L"2")
																																				{
																																					datatestDPU[4] = rlingmin[7] + rlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 65, 1);
																																				}
																																				if (modsd[7] == L"3")
																																				{
																																					datatestDPU[4] = rlingmin[11] + rlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 65, 1);
																																				}
																																			}
																																			if (addSW == 2)
																																			{
																																				if (modsd[7] == L"1")
																																				{
																																					datatestDPU[4] = rlingmin[3] + rlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 352, 1);
																																				}
																																				if (modsd[7] == L"2")
																																				{
																																					datatestDPU[4] = rlingmin[7] + rlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 352, 1);
																																				}
																																				if (modsd[7] == L"3")
																																				{
																																					datatestDPU[4] = rlingmin[11] + rlingminf[33];
																																					CMyPublicData::setfunc(39, 16, 352, 1);
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
																																				CMyPublicData::calculate(m_double35, rlingminf, 34, dlg, 10, 0);
																																				UpdateData(FALSE);
																																				if (addSW == 1)
																																				{
																																					if (modsd[9] == L"1")
																																					{
																																						datatestDPU[4] = rlingmin[3] + rlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 65, 1);
																																					}
																																					if (modsd[9] == L"2")
																																					{
																																						datatestDPU[4] = rlingmin[7] + rlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 65, 1);
																																					}
																																					if (modsd[9] == L"3")
																																					{
																																						datatestDPU[4] = rlingmin[11] + rlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 65, 1);
																																					}
																																				}
																																				if (addSW == 2)
																																				{
																																					if (modsd[9] == L"1")
																																					{
																																						datatestDPU[4] = rlingmin[3] + rlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 352, 1);
																																					}
																																					if (modsd[9] == L"2")
																																					{
																																						datatestDPU[4] = rlingmin[7] + rlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 352, 1);
																																					}
																																					if (modsd[9] == L"3")
																																					{
																																						datatestDPU[4] = rlingmin[11] + rlingminf[34];
																																						CMyPublicData::setfunc(41, 16, 352, 1);
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
																																					CMyPublicData::calculate(m_double36, rlingminf, 35, dlg, 10, 0);
																																					UpdateData(FALSE);
																																					if (addSW == 1)
																																					{
																																						if (modsd[11] == L"1")
																																						{
																																							datatestDPU[4] = rlingmin[3] + rlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 65, 1);
																																						}
																																						if (modsd[11] == L"2")
																																						{
																																							datatestDPU[4] = rlingmin[7] + rlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 65, 1);
																																						}
																																						if (modsd[11] == L"3")
																																						{
																																							datatestDPU[4] = rlingmin[11] + rlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 65, 1);
																																						}
																																					}
																																					if (addSW == 2)
																																					{
																																						if (modsd[11] == L"1")
																																						{
																																							datatestDPU[4] = rlingmin[3] + rlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 352, 1);
																																						}
																																						if (modsd[11] == L"2")
																																						{
																																							datatestDPU[4] = rlingmin[7] + rlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 352, 1);
																																						}
																																						if (modsd[11] == L"3")
																																						{
																																							datatestDPU[4] = rlingmin[11] + rlingminf[35];
																																							CMyPublicData::setfunc(43, 16, 352, 1);
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
																																						CMyPublicData::calculate(m_double37, rlingminf, 36, dlg, 10, 0);
																																						UpdateData(FALSE);
																																						if (addSW == 1)
																																						{
																																							if (modsd[13] == L"1")
																																							{
																																								datatestDPU[4] = rlingmin[3] + rlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 65, 1);
																																							}
																																							if (modsd[13] == L"2")
																																							{
																																								datatestDPU[4] = rlingmin[7] + rlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 65, 1);
																																							}
																																							if (modsd[13] == L"3")
																																							{
																																								datatestDPU[4] = rlingmin[11] + rlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 65, 1);
																																							}
																																						}
																																						if (addSW == 2)
																																						{
																																							if (modsd[13] == L"1")
																																							{
																																								datatestDPU[4] = rlingmin[3] + rlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 352, 1);
																																							}
																																							if (modsd[13] == L"2")
																																							{
																																								datatestDPU[4] = rlingmin[7] + rlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 352, 1);
																																							}
																																							if (modsd[13] == L"3")
																																							{
																																								datatestDPU[4] = rlingmin[11] + rlingminf[36];
																																								CMyPublicData::setfunc(45, 16, 352, 1);
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
																																							CMyPublicData::calculate(m_double38, rlingminf, 37, dlg, 10, 0);
																																							UpdateData(FALSE);
																																							if (addSW == 1)
																																							{
																																								if (modsd[15] == L"1")
																																								{
																																									datatestDPU[4] = rlingmin[3] + rlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 65, 1);
																																								}
																																								if (modsd[15] == L"2")
																																								{
																																									datatestDPU[4] = rlingmin[7] + rlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 65, 1);
																																								}
																																								if (modsd[15] == L"3")
																																								{
																																									datatestDPU[4] = rlingmin[11] + rlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 65, 1);
																																								}
																																							}
																																							if (addSW == 2)
																																							{
																																								if (modsd[15] == L"1")
																																								{
																																									datatestDPU[4] = rlingmin[3] + rlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 352, 1);
																																								}
																																								if (modsd[15] == L"2")
																																								{
																																									datatestDPU[4] = rlingmin[7] + rlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 352, 1);
																																								}
																																								if (modsd[15] == L"3")
																																								{
																																									datatestDPU[4] = rlingmin[11] + rlingminf[37];
																																									CMyPublicData::setfunc(47, 16, 352, 1);
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
																																								CMyPublicData::calculate(m_double39, rlingminf, 38, dlg, 10, 0);
																																								UpdateData(FALSE);
																																								if (addSW == 1)
																																								{
																																									if (modsd[17] == L"1")
																																									{
																																										datatestDPU[4] = rlingmin[3] + rlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 65, 1);
																																									}
																																									if (modsd[17] == L"2")
																																									{
																																										datatestDPU[4] = rlingmin[7] + rlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 65, 1);
																																									}
																																									if (modsd[17] == L"3")
																																									{
																																										datatestDPU[4] = rlingmin[11] + rlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 65, 1);
																																									}
																																								}
																																								if (addSW == 2)
																																								{
																																									if (modsd[17] == L"1")
																																									{
																																										datatestDPU[4] = rlingmin[3] + rlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 352, 1);
																																									}
																																									if (modsd[17] == L"2")
																																									{
																																										datatestDPU[4] = rlingmin[7] + rlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 352, 1);
																																									}
																																									if (modsd[17] == L"3")
																																									{
																																										datatestDPU[4] = rlingmin[11] + rlingminf[38];
																																										CMyPublicData::setfunc(49, 16, 352, 1);
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
																																									CMyPublicData::calculate(m_double40, rlingminf, 39, dlg, 10, 0);
																																									UpdateData(FALSE);
																																									if (addSW == 1)
																																									{
																																										if (modsd[19] == L"1")
																																										{
																																											datatestDPU[4] = rlingmin[3] + rlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 65, 1);
																																										}
																																										if (modsd[19] == L"2")
																																										{
																																											datatestDPU[4] = rlingmin[7] + rlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 65, 1);
																																										}
																																										if (modsd[19] == L"3")
																																										{
																																											datatestDPU[4] = rlingmin[11] + rlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 65, 1);
																																										}
																																									}
																																									if (addSW == 2)
																																									{
																																										if (modsd[19] == L"1")
																																										{
																																											datatestDPU[4] = rlingmin[3] + rlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 352, 1);
																																										}
																																										if (modsd[19] == L"2")
																																										{
																																											datatestDPU[4] = rlingmin[7] + rlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 352, 1);
																																										}
																																										if (modsd[19] == L"3")
																																										{
																																											datatestDPU[4] = rlingmin[11] + rlingminf[39];
																																											CMyPublicData::setfunc(51, 16, 352, 1);
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


void RFEN::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(rlingminf[0]);
	opx.ModifyNode("num3801", str);
	str = opx.numtoString(rlingminf[1]);
	opx.ModifyNode("num3802", str);
	str = opx.numtoString(rlingminf[2]);
	opx.ModifyNode("num3803", str);
	str = opx.numtoString(rlingminf[3]);
	opx.ModifyNode("num3804", str);
	str = opx.numtoString(rlingminf[4]);
	opx.ModifyNode("num3805", str);
	str = opx.numtoString(rlingminf[5]);
	opx.ModifyNode("num3806", str);
	str = opx.numtoString(rlingminf[6]);
	opx.ModifyNode("num3807", str);
	str = opx.numtoString(rlingminf[7]);
	opx.ModifyNode("num3808", str);
	str = opx.numtoString(rlingminf[8]);
	opx.ModifyNode("num3809", str);
	str = opx.numtoString(rlingminf[9]);
	opx.ModifyNode("num3810", str);
	str = opx.numtoString(rlingminf[10]);
	opx.ModifyNode("num3811", str);
	str = opx.numtoString(rlingminf[11]);
	opx.ModifyNode("num3812", str);
	str = opx.numtoString(rlingminf[12]);
	opx.ModifyNode("num3813", str);
	str = opx.numtoString(rlingminf[13]);
	opx.ModifyNode("num3814", str);
	str = opx.numtoString(rlingminf[14]);
	opx.ModifyNode("num3815", str);
	str = opx.numtoString(rlingminf[15]);
	opx.ModifyNode("num3816", str);
	str = opx.numtoString(rlingminf[16]);
	opx.ModifyNode("num3817", str);
	str = opx.numtoString(rlingminf[17]);
	opx.ModifyNode("num3818", str);
	str = opx.numtoString(rlingminf[18]);
	opx.ModifyNode("num3819", str);
	str = opx.numtoString(rlingminf[19]);
	opx.ModifyNode("num3820", str);
	str = opx.numtoString(rlingminf[20]);
	opx.ModifyNode("num3821", str);
	str = opx.numtoString(rlingminf[21]);
	opx.ModifyNode("num3822", str);
	str = opx.numtoString(rlingminf[22]);
	opx.ModifyNode("num3823", str);
	str = opx.numtoString(rlingminf[23]);
	opx.ModifyNode("num3824", str);
	str = opx.numtoString(rlingminf[24]);
	opx.ModifyNode("num3825", str);
	str = opx.numtoString(rlingminf[25]);
	opx.ModifyNode("num3826", str);
	str = opx.numtoString(rlingminf[26]);
	opx.ModifyNode("num3827", str);
	str = opx.numtoString(rlingminf[27]);
	opx.ModifyNode("num3828", str);
	str = opx.numtoString(rlingminf[28]);
	opx.ModifyNode("num3829", str);
	str = opx.numtoString(rlingminf[29]);
	opx.ModifyNode("num3830", str);
	str = opx.numtoString(rlingminf[30]);
	opx.ModifyNode("num3831", str);
	str = opx.numtoString(rlingminf[31]);
	opx.ModifyNode("num3832", str);
	str = opx.numtoString(rlingminf[32]);
	opx.ModifyNode("num3833", str);
	str = opx.numtoString(rlingminf[33]);
	opx.ModifyNode("num3834", str);
	str = opx.numtoString(rlingminf[34]);
	opx.ModifyNode("num3835", str);
	str = opx.numtoString(rlingminf[35]);
	opx.ModifyNode("num3836", str);
	str = opx.numtoString(rlingminf[36]);
	opx.ModifyNode("num3837", str);
	str = opx.numtoString(rlingminf[37]);
	opx.ModifyNode("num3838", str);
	str = opx.numtoString(rlingminf[38]);
	opx.ModifyNode("num3839", str);
	str = opx.numtoString(rlingminf[39]);
	opx.ModifyNode("num3840", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


//void RFEN::OnBnClickedButton4()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	GFEN gf;
//	gf.DoModal();
//	CDialogEx::OnCancel();
//}


//void RFEN::OnBnClickedButton5()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	BFEN bf;
//	bf.DoModal();
//	CDialogEx::OnCancel();
//}


//void RFEN::OnBnClickedButton6()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	HUNFEN hf;
//	hf.DoModal();
//	CDialogEx::OnCancel();
//}

void RFEN::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


void RFEN::ReSize()
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








void RFEN::OnBnClickedButton1()
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


void RFEN::OnBnClickedButton2()
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


void RFEN::OnBnClickedButton3()
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
