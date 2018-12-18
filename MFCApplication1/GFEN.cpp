// GFEN.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "GFEN.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "MyPublicData.h"
#include "RFEN.h"
#include "BFEN.h"
#include "HUNFEN.h"
// GFEN 对话框

IMPLEMENT_DYNAMIC(GFEN, CDialogEx)

GFEN::GFEN(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_GFEN_DIALOG, pParent)
	, m_double1(glingminf[0])
	, m_double2(glingminf[1])
	, m_double3(glingminf[2])
	, m_double4(glingminf[3])
	, m_double5(glingminf[4])
	, m_double6(glingminf[5])
	, m_double7(glingminf[6])
	, m_double8(glingminf[7])
	, m_double9(glingminf[8])
	, m_double10(glingminf[9])
	, m_double11(glingminf[10])
	, m_double12(glingminf[11])
	, m_double13(glingminf[12])
	, m_double14(glingminf[13])
	, m_double15(glingminf[14])
	, m_double16(glingminf[15])
	, m_double17(glingminf[16])
	, m_double18(glingminf[17])
	, m_double19(glingminf[18])
	, m_double20(glingminf[19])
	, m_double21(glingminf[20])
	, m_double22(glingminf[21])
	, m_double23(glingminf[22])
	, m_double24(glingminf[23])
	, m_double25(glingminf[24])
	, m_double26(glingminf[25])
	, m_double27(glingminf[26])
	, m_double28(glingminf[27])
	, m_double29(glingminf[28])
	, m_double30(glingminf[29])
	, m_double31(glingminf[30])
	, m_double32(glingminf[31])
	, m_double33(glingminf[32])
	, m_double34(glingminf[33])
	, m_double35(glingminf[34])
	, m_double36(glingminf[35])
	, m_double37(glingminf[36])
	, m_double38(glingminf[37])
	, m_double39(glingminf[38])
	, m_double40(glingminf[39])
{

}

GFEN::~GFEN()
{
}

void GFEN::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(GFEN, CDialogEx)
	ON_BN_CLICKED(IDCANCEL, &GFEN::OnBnClickedCancel)
	//ON_BN_CLICKED(IDC_BUTTON4, &GFEN::OnBnClickedButton4)
	//ON_BN_CLICKED(IDC_BUTTON5, &GFEN::OnBnClickedButton5)
	//ON_BN_CLICKED(IDC_BUTTON6, &GFEN::OnBnClickedButton6)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON1, &GFEN::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &GFEN::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &GFEN::OnBnClickedButton3)
END_MESSAGE_MAP()


// GFEN 消息处理程序


BOOL GFEN::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	GetDlgItem(IDC_BUTTON1)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(zhendong[2]);


	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//初始化窗口位置
	CRect rect;
	GetClientRect(&rect);     //取客户区大小    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;

	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num4801", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num4802", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num4803", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num4804", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num4805", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num4806", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num4807", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();

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


BOOL GFEN::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		UpdateData(TRUE);
		CInputDlg dlg;
		CMyPublicData::calculate(m_double1, glingminf, 0, dlg, 10, 0);
		UpdateData(FALSE);
		if (addSW == 1)
		{
			if (modsd[0] == L"1")
			{
				datatestDPU[4] = glingmin[0] + glingminf[0];
				CMyPublicData::setfunc(32, 16, 66, 1);
			}
			if (modsd[0] == L"2")
			{
				datatestDPU[4] = glingmin[4] + glingminf[0];
				CMyPublicData::setfunc(32, 16, 66, 1);
			}
			if (modsd[0] == L"3")
			{
				datatestDPU[4] = glingmin[8] + glingminf[0];
				CMyPublicData::setfunc(32, 16, 66, 1);
			}
		}
		if (addSW == 2)
		{
			if (modsd[0] == L"1")
			{
				datatestDPU[4] = glingmin[0] + glingminf[0];
				CMyPublicData::setfunc(32, 16, 353, 1);
			}
			if (modsd[0] == L"2")
			{
				datatestDPU[4] = glingmin[4] + glingminf[0];
				CMyPublicData::setfunc(32, 16, 353, 1);
			}
			if (modsd[0] == L"3")
			{
				datatestDPU[4] = glingmin[8] + glingminf[0];
				CMyPublicData::setfunc(32, 16, 353, 1);
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
			CMyPublicData::calculate(m_double2, glingminf, 1, dlg, 10, 0);
			UpdateData(FALSE);
			if (addSW == 1)
			{
				if (modsd[2] == L"1")
				{
					datatestDPU[4] = glingmin[0] + glingminf[1];
					CMyPublicData::setfunc(34, 16, 66, 1);
				}
				if (modsd[2] == L"2")
				{
					datatestDPU[4] = glingmin[4] + glingminf[1];
					CMyPublicData::setfunc(34, 16, 66, 1);
				}
				if (modsd[2] == L"3")
				{
					datatestDPU[4] = glingmin[8] + glingminf[1];
					CMyPublicData::setfunc(34, 16, 66, 1);
				}
			}
			if (addSW == 2)
			{
				if (modsd[2] == L"1")
				{
					datatestDPU[4] = glingmin[0] + glingminf[1];
					CMyPublicData::setfunc(34, 16, 353, 1);
				}
				if (modsd[2] == L"2")
				{
					datatestDPU[4] = glingmin[4] + glingminf[1];
					CMyPublicData::setfunc(34, 16, 353, 1);
				}
				if (modsd[2] == L"3")
				{
					datatestDPU[4] = glingmin[8] + glingminf[1];
					CMyPublicData::setfunc(34, 16, 353, 1);
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
				CMyPublicData::calculate(m_double3, glingminf, 2, dlg, 10, 0);
				UpdateData(FALSE);
				if (addSW == 1)
				{
					if (modsd[4] == L"1")
					{
						datatestDPU[4] = glingmin[0] + glingminf[2];
						CMyPublicData::setfunc(36, 16, 66, 1);
					}
					if (modsd[4] == L"2")
					{
						datatestDPU[4] = glingmin[4] + glingminf[2];
						CMyPublicData::setfunc(36, 16, 66, 1);
					}
					if (modsd[4] == L"3")
					{
						datatestDPU[4] = glingmin[8] + glingminf[2];
						CMyPublicData::setfunc(36, 16, 66, 1);
					}
				}
				if (addSW == 2)
				{
					if (modsd[4] == L"1")
					{
						datatestDPU[4] = glingmin[0] + glingminf[2];
						CMyPublicData::setfunc(36, 16, 353, 1);
					}
					if (modsd[4] == L"2")
					{
						datatestDPU[4] = glingmin[4] + glingminf[2];
						CMyPublicData::setfunc(36, 16, 353, 1);
					}
					if (modsd[4] == L"3")
					{
						datatestDPU[4] = glingmin[8] + glingminf[2];
						CMyPublicData::setfunc(36, 16, 353, 1);
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
					CMyPublicData::calculate(m_double4, glingminf, 3, dlg, 10, 0);
					UpdateData(FALSE);
					if (addSW == 1)
					{
						if (modsd[6] == L"1")
						{
							datatestDPU[4] = glingmin[0] + glingminf[3];
							CMyPublicData::setfunc(38, 16, 66, 1);
						}
						if (modsd[6] == L"2")
						{
							datatestDPU[4] = glingmin[4] + glingminf[3];
							CMyPublicData::setfunc(38, 16, 66, 1);
						}
						if (modsd[6] == L"3")
						{
							datatestDPU[4] = glingmin[8] + glingminf[3];
							CMyPublicData::setfunc(38, 16, 66, 1);
						}
					}
					if (addSW == 2)
					{
						if (modsd[6] == L"1")
						{
							datatestDPU[4] = glingmin[0] + glingminf[3];
							CMyPublicData::setfunc(38, 16, 353, 1);
						}
						if (modsd[6] == L"2")
						{
							datatestDPU[4] = glingmin[4] + glingminf[3];
							CMyPublicData::setfunc(38, 16, 353, 1);
						}
						if (modsd[6] == L"3")
						{
							datatestDPU[4] = glingmin[8] + glingminf[3];
							CMyPublicData::setfunc(38, 16, 353, 1);
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
						CMyPublicData::calculate(m_double5, glingminf, 4, dlg, 10, 0);
						UpdateData(FALSE);
						if (addSW == 1)
						{
							if (modsd[8] == L"1")
							{
								datatestDPU[4] = glingmin[0] + glingminf[4];
								CMyPublicData::setfunc(40, 16, 66, 1);
							}
							if (modsd[8] == L"2")
							{
								datatestDPU[4] = glingmin[4] + glingminf[4];
								CMyPublicData::setfunc(40, 16, 66, 1);
							}
							if (modsd[8] == L"3")
							{
								datatestDPU[4] = glingmin[8] + glingminf[4];
								CMyPublicData::setfunc(40, 16, 66, 1);
							}
						}
						if (addSW == 2)
						{
							if (modsd[8] == L"1")
							{
								datatestDPU[4] = glingmin[0] + glingminf[4];
								CMyPublicData::setfunc(40, 16, 353, 1);
							}
							if (modsd[8] == L"2")
							{
								datatestDPU[4] = glingmin[4] + glingminf[4];
								CMyPublicData::setfunc(40, 16, 353, 1);
							}
							if (modsd[8] == L"3")
							{
								datatestDPU[4] = glingmin[8] + glingminf[4];
								CMyPublicData::setfunc(40, 16, 353, 1);
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
							CMyPublicData::calculate(m_double6, glingminf, 5, dlg, 10, 0);
							UpdateData(FALSE);
							if (addSW == 1)
							{
								if (modsd[10] == L"1")
								{
									datatestDPU[4] = glingmin[0] + glingminf[5];
									CMyPublicData::setfunc(42, 16, 66, 1);
								}
								if (modsd[10] == L"2")
								{
									datatestDPU[4] = glingmin[4] + glingminf[5];
									CMyPublicData::setfunc(42, 16, 66, 1);
								}
								if (modsd[10] == L"3")
								{
									datatestDPU[4] = glingmin[8] + glingminf[5];
									CMyPublicData::setfunc(42, 16, 66, 1);
								}
							}
							if (addSW == 2)
							{
								if (modsd[10] == L"1")
								{
									datatestDPU[4] = glingmin[0] + glingminf[5];
									CMyPublicData::setfunc(42, 16, 353, 1);
								}
								if (modsd[10] == L"2")
								{
									datatestDPU[4] = glingmin[4] + glingminf[5];
									CMyPublicData::setfunc(42, 16, 353, 1);
								}
								if (modsd[10] == L"3")
								{
									datatestDPU[4] = glingmin[8] + glingminf[5];
									CMyPublicData::setfunc(42, 16, 353, 1);
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
								CMyPublicData::calculate(m_double7, glingminf, 6, dlg, 10, 0);
								UpdateData(FALSE);
								if (addSW == 1)
								{
									if (modsd[12] == L"1")
									{
										datatestDPU[4] = glingmin[0] + glingminf[6];
										CMyPublicData::setfunc(44, 16, 66, 1);
									}
									if (modsd[12] == L"2")
									{
										datatestDPU[4] = glingmin[4] + glingminf[6];
										CMyPublicData::setfunc(44, 16, 66, 1);
									}
									if (modsd[12] == L"3")
									{
										datatestDPU[4] = glingmin[8] + glingminf[6];
										CMyPublicData::setfunc(44, 16, 66, 1);
									}
								}
								if (addSW == 2)
								{
									if (modsd[12] == L"1")
									{
										datatestDPU[4] = glingmin[0] + glingminf[6];
										CMyPublicData::setfunc(44, 16, 353, 1);
									}
									if (modsd[12] == L"2")
									{
										datatestDPU[4] = glingmin[4] + glingminf[6];
										CMyPublicData::setfunc(44, 16, 353, 1);
									}
									if (modsd[12] == L"3")
									{
										datatestDPU[4] = glingmin[8] + glingminf[6];
										CMyPublicData::setfunc(44, 16, 353, 1);
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
									CMyPublicData::calculate(m_double8, glingminf, 7, dlg, 10, 0);
									UpdateData(FALSE);
									if (addSW == 1)
									{
										if (modsd[14] == L"1")
										{
											datatestDPU[4] = glingmin[0] + glingminf[7];
											CMyPublicData::setfunc(46, 16, 66, 1);
										}
										if (modsd[14] == L"2")
										{
											datatestDPU[4] = glingmin[4] + glingminf[7];
											CMyPublicData::setfunc(46, 16, 66, 1);
										}
										if (modsd[14] == L"3")
										{
											datatestDPU[4] = glingmin[8] + glingminf[7];
											CMyPublicData::setfunc(46, 16, 66, 1);
										}
									}
									if (addSW == 2)
									{
										if (modsd[14] == L"1")
										{
											datatestDPU[4] = glingmin[0] + glingminf[7];
											CMyPublicData::setfunc(46, 16, 353, 1);
										}
										if (modsd[14] == L"2")
										{
											datatestDPU[4] = glingmin[4] + glingminf[7];
											CMyPublicData::setfunc(46, 16, 353, 1);
										}
										if (modsd[14] == L"3")
										{
											datatestDPU[4] = glingmin[8] + glingminf[7];
											CMyPublicData::setfunc(46, 16, 353, 1);
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
										CMyPublicData::calculate(m_double9, glingminf, 8, dlg, 10, 0);
										UpdateData(FALSE);
										if (addSW == 1)
										{
											if (modsd[16] == L"1")
											{
												datatestDPU[4] = glingmin[0] + glingminf[8];
												CMyPublicData::setfunc(48, 16, 66, 1);
											}
											if (modsd[16] == L"2")
											{
												datatestDPU[4] = glingmin[4] + glingminf[8];
												CMyPublicData::setfunc(48, 16, 66, 1);
											}
											if (modsd[16] == L"3")
											{
												datatestDPU[4] = glingmin[8] + glingminf[8];
												CMyPublicData::setfunc(48, 16, 66, 1);
											}
										}
										if (addSW == 2)
										{
											if (modsd[16] == L"1")
											{
												datatestDPU[4] = glingmin[0] + glingminf[8];
												CMyPublicData::setfunc(48, 16, 353, 1);
											}
											if (modsd[16] == L"2")
											{
												datatestDPU[4] = glingmin[4] + glingminf[8];
												CMyPublicData::setfunc(48, 16, 353, 1);
											}
											if (modsd[16] == L"3")
											{
												datatestDPU[4] = glingmin[8] + glingminf[8];
												CMyPublicData::setfunc(48, 16, 353, 1);
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
											CMyPublicData::calculate(m_double10, glingminf, 9, dlg, 10, 0);
											UpdateData(FALSE);
											if (addSW == 1)
											{
												if (modsd[18] == L"1")
												{
													datatestDPU[4] = glingmin[0] + glingminf[9];
													CMyPublicData::setfunc(50, 16, 66, 1);
												}
												if (modsd[18] == L"2")
												{
													datatestDPU[4] = glingmin[4] + glingminf[9];
													CMyPublicData::setfunc(50, 16, 66, 1);
												}
												if (modsd[18] == L"3")
												{
													datatestDPU[4] = glingmin[8] + glingminf[9];
													CMyPublicData::setfunc(50, 16, 66, 1);
												}
											}
											if (addSW == 2)
											{
												if (modsd[18] == L"1")
												{
													datatestDPU[4] = glingmin[0] + glingminf[9];
													CMyPublicData::setfunc(50, 16, 353, 1);
												}
												if (modsd[18] == L"2")
												{
													datatestDPU[4] = glingmin[4] + glingminf[9];
													CMyPublicData::setfunc(50, 16, 353, 1);
												}
												if (modsd[18] == L"3")
												{
													datatestDPU[4] = glingmin[8] + glingminf[9];
													CMyPublicData::setfunc(50, 16, 353, 1);
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
												CMyPublicData::calculate(m_double11, glingminf, 10, dlg, 10, 0);
												UpdateData(FALSE);
												if (addSW == 1)
												{
													if (modsd[0] == L"1")
													{
														datatestDPU[4] = glingmin[1] + glingminf[10];
														CMyPublicData::setfunc(32, 16, 67, 1);
													}
													if (modsd[0] == L"2")
													{
														datatestDPU[4] = glingmin[5] + glingminf[10];
														CMyPublicData::setfunc(32, 16, 67, 1);
													}
													if (modsd[0] == L"3")
													{
														datatestDPU[4] = glingmin[9] + glingminf[10];
														CMyPublicData::setfunc(32, 16, 67, 1);
													}
												}
												if (addSW == 2)
												{
													if (modsd[0] == L"1")
													{
														datatestDPU[4] = glingmin[1] + glingminf[10];
														CMyPublicData::setfunc(32, 16, 354, 1);
													}
													if (modsd[0] == L"2")
													{
														datatestDPU[4] = glingmin[5] + glingminf[10];
														CMyPublicData::setfunc(32, 16, 354, 1);
													}
													if (modsd[0] == L"3")
													{
														datatestDPU[4] = glingmin[9] + glingminf[10];
														CMyPublicData::setfunc(32, 16, 354, 1);
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
													CMyPublicData::calculate(m_double12, glingminf, 11, dlg, 10, 0);
													UpdateData(FALSE);
													if (addSW == 1)
													{
														if (modsd[2] == L"1")
														{
															datatestDPU[4] = glingmin[1] + glingminf[11];
															CMyPublicData::setfunc(34, 16, 67, 1);
														}
														if (modsd[2] == L"2")
														{
															datatestDPU[4] = glingmin[5] + glingminf[11];
															CMyPublicData::setfunc(34, 16, 67, 1);
														}
														if (modsd[2] == L"3")
														{
															datatestDPU[4] = glingmin[9] + glingminf[11];
															CMyPublicData::setfunc(34, 16, 67, 1);
														}
													}
													if (addSW == 2)
													{
														if (modsd[2] == L"1")
														{
															datatestDPU[4] = glingmin[1] + glingminf[11];
															CMyPublicData::setfunc(34, 16, 354, 1);
														}
														if (modsd[2] == L"2")
														{
															datatestDPU[4] = glingmin[5] + glingminf[11];
															CMyPublicData::setfunc(34, 16, 354, 1);
														}
														if (modsd[2] == L"3")
														{
															datatestDPU[4] = glingmin[9] + glingminf[11];
															CMyPublicData::setfunc(34, 16, 354, 1);
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
														CMyPublicData::calculate(m_double13, glingminf, 12, dlg, 10, 0);
														UpdateData(FALSE);
														if (addSW == 1)
														{
															if (modsd[4] == L"1")
															{
																datatestDPU[4] = glingmin[1] + glingminf[12];
																CMyPublicData::setfunc(36, 16, 67, 1);
															}
															if (modsd[4] == L"2")
															{
																datatestDPU[4] = glingmin[5] + glingminf[12];
																CMyPublicData::setfunc(36, 16, 67, 1);
															}
															if (modsd[4] == L"3")
															{
																datatestDPU[4] = glingmin[9] + glingminf[12];
																CMyPublicData::setfunc(36, 16, 67, 1);
															}
														}
														if (addSW == 2)
														{
															if (modsd[4] == L"1")
															{
																datatestDPU[4] = glingmin[1] + glingminf[12];
																CMyPublicData::setfunc(36, 16, 354, 1);
															}
															if (modsd[4] == L"2")
															{
																datatestDPU[4] = glingmin[5] + glingminf[12];
																CMyPublicData::setfunc(36, 16, 354, 1);
															}
															if (modsd[4] == L"3")
															{
																datatestDPU[4] = glingmin[9] + glingminf[12];
																CMyPublicData::setfunc(36, 16, 354, 1);
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
															CMyPublicData::calculate(m_double14, glingminf, 13, dlg, 10, 0);
															UpdateData(FALSE);
															if (addSW == 1)
															{
																if (modsd[6] == L"1")
																{
																	datatestDPU[4] = glingmin[1] + glingminf[13];
																	CMyPublicData::setfunc(38, 16, 67, 1);
																}
																if (modsd[6] == L"2")
																{
																	datatestDPU[4] = glingmin[5] + glingminf[13];
																	CMyPublicData::setfunc(38, 16, 67, 1);
																}
																if (modsd[6] == L"3")
																{
																	datatestDPU[4] = glingmin[9] + glingminf[13];
																	CMyPublicData::setfunc(38, 16, 67, 1);
																}
															}
															if (addSW == 2)
															{
																if (modsd[6] == L"1")
																{
																	datatestDPU[4] = glingmin[1] + glingminf[13];
																	CMyPublicData::setfunc(38, 16, 354, 1);
																}
																if (modsd[6] == L"2")
																{
																	datatestDPU[4] = glingmin[5] + glingminf[13];
																	CMyPublicData::setfunc(38, 16, 354, 1);
																}
																if (modsd[6] == L"3")
																{
																	datatestDPU[4] = glingmin[9] + glingminf[13];
																	CMyPublicData::setfunc(38, 16, 354, 1);
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
																CMyPublicData::calculate(m_double15, glingminf, 14, dlg, 10, 0);
																UpdateData(FALSE);
																if (addSW == 1)
																{
																	if (modsd[8] == L"1")
																	{
																		datatestDPU[4] = glingmin[1] + glingminf[14];
																		CMyPublicData::setfunc(40, 16, 67, 1);
																	}
																	if (modsd[8] == L"2")
																	{
																		datatestDPU[4] = glingmin[5] + glingminf[14];
																		CMyPublicData::setfunc(40, 16, 67, 1);
																	}
																	if (modsd[8] == L"3")
																	{
																		datatestDPU[4] = glingmin[9] + glingminf[14];
																		CMyPublicData::setfunc(40, 16, 67, 1);
																	}
																}
																if (addSW == 2)
																{
																	if (modsd[8] == L"1")
																	{
																		datatestDPU[4] = glingmin[1] + glingminf[14];
																		CMyPublicData::setfunc(40, 16, 354, 1);
																	}
																	if (modsd[8] == L"2")
																	{
																		datatestDPU[4] = glingmin[5] + glingminf[14];
																		CMyPublicData::setfunc(40, 16, 354, 1);
																	}
																	if (modsd[8] == L"3")
																	{
																		datatestDPU[4] = glingmin[9] + glingminf[14];
																		CMyPublicData::setfunc(40, 16, 354, 1);
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
																	CMyPublicData::calculate(m_double16, glingminf, 15, dlg, 10, 0);
																	UpdateData(FALSE);
																	if (addSW == 1)
																	{
																		if (modsd[10] == L"1")
																		{
																			datatestDPU[4] = glingmin[1] + glingminf[15];
																			CMyPublicData::setfunc(42, 16, 67, 1);
																		}
																		if (modsd[10] == L"2")
																		{
																			datatestDPU[4] = glingmin[5] + glingminf[15];
																			CMyPublicData::setfunc(42, 16, 67, 1);
																		}
																		if (modsd[10] == L"3")
																		{
																			datatestDPU[4] = glingmin[9] + glingminf[15];
																			CMyPublicData::setfunc(42, 16, 67, 1);
																		}
																	}
																	if (addSW == 2)
																	{
																		if (modsd[10] == L"1")
																		{
																			datatestDPU[4] = glingmin[1] + glingminf[15];
																			CMyPublicData::setfunc(42, 16, 354, 1);
																		}
																		if (modsd[10] == L"2")
																		{
																			datatestDPU[4] = glingmin[5] + glingminf[15];
																			CMyPublicData::setfunc(42, 16, 354, 1);
																		}
																		if (modsd[10] == L"3")
																		{
																			datatestDPU[4] = glingmin[9] + glingminf[15];
																			CMyPublicData::setfunc(42, 16, 354, 1);
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
																		CMyPublicData::calculate(m_double17, glingminf, 16, dlg, 10, 0);
																		UpdateData(FALSE);
																		if (addSW == 1)
																		{
																			if (modsd[12] == L"1")
																			{
																				datatestDPU[4] = glingmin[1] + glingminf[16];
																				CMyPublicData::setfunc(44, 16, 67, 1);
																			}
																			if (modsd[12] == L"2")
																			{
																				datatestDPU[4] = glingmin[5] + glingminf[16];
																				CMyPublicData::setfunc(44, 16, 67, 1);
																			}
																			if (modsd[12] == L"3")
																			{
																				datatestDPU[4] = glingmin[9] + glingminf[16];
																				CMyPublicData::setfunc(44, 16, 67, 1);
																			}
																		}
																		if (addSW == 2)
																		{
																			if (modsd[12] == L"1")
																			{
																				datatestDPU[4] = glingmin[1] + glingminf[16];
																				CMyPublicData::setfunc(44, 16, 354, 1);
																			}
																			if (modsd[12] == L"2")
																			{
																				datatestDPU[4] = glingmin[5] + glingminf[16];
																				CMyPublicData::setfunc(44, 16, 354, 1);
																			}
																			if (modsd[12] == L"3")
																			{
																				datatestDPU[4] = glingmin[9] + glingminf[16];
																				CMyPublicData::setfunc(44, 16, 354, 1);
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
																			CMyPublicData::calculate(m_double18, glingminf, 17, dlg, 10, 0);
																			UpdateData(FALSE);
																			if (addSW == 1)
																			{
																				if (modsd[14] == L"1")
																				{
																					datatestDPU[4] = glingmin[1] + glingminf[17];
																					CMyPublicData::setfunc(46, 16, 67, 1);
																				}
																				if (modsd[14] == L"2")
																				{
																					datatestDPU[4] = glingmin[5] + glingminf[17];
																					CMyPublicData::setfunc(46, 16, 67, 1);
																				}
																				if (modsd[14] == L"3")
																				{
																					datatestDPU[4] = glingmin[9] + glingminf[17];
																					CMyPublicData::setfunc(46, 16, 67, 1);
																				}
																			}
																			if (addSW == 2)
																			{
																				if (modsd[14] == L"1")
																				{
																					datatestDPU[4] = glingmin[1] + glingminf[17];
																					CMyPublicData::setfunc(46, 16, 354, 1);
																				}
																				if (modsd[14] == L"2")
																				{
																					datatestDPU[4] = glingmin[5] + glingminf[17];
																					CMyPublicData::setfunc(46, 16, 354, 1);
																				}
																				if (modsd[14] == L"3")
																				{
																					datatestDPU[4] = glingmin[9] + glingminf[17];
																					CMyPublicData::setfunc(46, 16, 354, 1);
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
																				CMyPublicData::calculate(m_double19, glingminf, 18, dlg, 10, 0);
																				UpdateData(FALSE);
																				if (addSW == 1)
																				{
																					if (modsd[16] == L"1")
																					{
																						datatestDPU[4] = glingmin[1] + glingminf[18];
																						CMyPublicData::setfunc(48, 16, 67, 1);
																					}
																					if (modsd[16] == L"2")
																					{
																						datatestDPU[4] = glingmin[5] + glingminf[18];
																						CMyPublicData::setfunc(48, 16, 67, 1);
																					}
																					if (modsd[16] == L"3")
																					{
																						datatestDPU[4] = glingmin[9] + glingminf[18];
																						CMyPublicData::setfunc(48, 16, 67, 1);
																					}
																				}
																				if (addSW == 2)
																				{
																					if (modsd[16] == L"1")
																					{
																						datatestDPU[4] = glingmin[1] + glingminf[18];
																						CMyPublicData::setfunc(48, 16, 354, 1);
																					}
																					if (modsd[16] == L"2")
																					{
																						datatestDPU[4] = glingmin[5] + glingminf[18];
																						CMyPublicData::setfunc(48, 16, 354, 1);
																					}
																					if (modsd[16] == L"3")
																					{
																						datatestDPU[4] = glingmin[9] + glingminf[18];
																						CMyPublicData::setfunc(48, 16, 354, 1);
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
																					CMyPublicData::calculate(m_double20, glingminf, 19, dlg, 10, 0);
																					UpdateData(FALSE);
																					if (addSW == 1)
																					{
																						if (modsd[18] == L"1")
																						{
																							datatestDPU[4] = glingmin[1] + glingminf[19];
																							CMyPublicData::setfunc(50, 16, 67, 1);
																						}
																						if (modsd[18] == L"2")
																						{
																							datatestDPU[4] = glingmin[5] + glingminf[19];
																							CMyPublicData::setfunc(50, 16, 67, 1);
																						}
																						if (modsd[18] == L"3")
																						{
																							datatestDPU[4] = glingmin[9] + glingminf[19];
																							CMyPublicData::setfunc(50, 16, 67, 1);
																						}
																					}
																					if (addSW == 2)
																					{
																						if (modsd[18] == L"1")
																						{
																							datatestDPU[4] = glingmin[1] + glingminf[19];
																							CMyPublicData::setfunc(50, 16, 354, 1);
																						}
																						if (modsd[18] == L"2")
																						{
																							datatestDPU[4] = glingmin[5] + glingminf[19];
																							CMyPublicData::setfunc(50, 16, 354, 1);
																						}
																						if (modsd[18] == L"3")
																						{
																							datatestDPU[4] = glingmin[9] + glingminf[19];
																							CMyPublicData::setfunc(50, 16, 354, 1);
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
																						CMyPublicData::calculate(m_double21, glingminf, 20, dlg, 10, 0);
																						UpdateData(FALSE);
																						if (addSW == 1)
																						{
																							if (modsd[1] == L"1")
																							{
																								datatestDPU[4] = glingmin[2] + glingminf[20];
																								CMyPublicData::setfunc(33, 16, 66, 1);
																							}
																							if (modsd[1] == L"2")
																							{
																								datatestDPU[4] = glingmin[6] + glingminf[20];
																								CMyPublicData::setfunc(33, 16, 66, 1);
																							}
																							if (modsd[1] == L"3")
																							{
																								datatestDPU[4] = glingmin[10] + glingminf[20];
																								CMyPublicData::setfunc(33, 16, 66, 1);
																							}
																						}
																						if (addSW == 2)
																						{
																							if (modsd[1] == L"1")
																							{
																								datatestDPU[4] = glingmin[2] + glingminf[20];
																								CMyPublicData::setfunc(33, 16, 353, 1);
																							}
																							if (modsd[1] == L"2")
																							{
																								datatestDPU[4] = glingmin[6] + glingminf[20];
																								CMyPublicData::setfunc(33, 16, 353, 1);
																							}
																							if (modsd[1] == L"3")
																							{
																								datatestDPU[4] = glingmin[10] + glingminf[20];
																								CMyPublicData::setfunc(33, 16, 353, 1);
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
																							CMyPublicData::calculate(m_double22, glingminf, 21, dlg, 10, 0);
																							UpdateData(FALSE);
																							if (addSW == 1)
																							{
																								if (modsd[3] == L"1")
																								{
																									datatestDPU[4] = glingmin[2] + glingminf[21];
																									CMyPublicData::setfunc(35, 16, 66, 1);
																								}
																								if (modsd[3] == L"2")
																								{
																									datatestDPU[4] = glingmin[6] + glingminf[21];
																									CMyPublicData::setfunc(35, 16, 66, 1);
																								}
																								if (modsd[3] == L"3")
																								{
																									datatestDPU[4] = glingmin[10] + glingminf[21];
																									CMyPublicData::setfunc(35, 16, 66, 1);
																								}
																							}
																							if (addSW == 2)
																							{
																								if (modsd[3] == L"1")
																								{
																									datatestDPU[4] = glingmin[2] + glingminf[21];
																									CMyPublicData::setfunc(35, 16, 353, 1);
																								}
																								if (modsd[3] == L"2")
																								{
																									datatestDPU[4] = glingmin[6] + glingminf[21];
																									CMyPublicData::setfunc(35, 16, 353, 1);
																								}
																								if (modsd[3] == L"3")
																								{
																									datatestDPU[4] = glingmin[10] + glingminf[21];
																									CMyPublicData::setfunc(35, 16, 353, 1);
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
																								CMyPublicData::calculate(m_double23, glingminf, 22, dlg, 10, 0);
																								UpdateData(FALSE);
																								if (addSW == 1)
																								{
																									if (modsd[5] == L"1")
																									{
																										datatestDPU[4] = glingmin[2] + glingminf[22];
																										CMyPublicData::setfunc(37, 16, 66, 1);
																									}
																									if (modsd[5] == L"2")
																									{
																										datatestDPU[4] = glingmin[6] + glingminf[22];
																										CMyPublicData::setfunc(37, 16, 66, 1);
																									}
																									if (modsd[5] == L"3")
																									{
																										datatestDPU[4] = glingmin[10] + glingminf[22];
																										CMyPublicData::setfunc(37, 16, 66, 1);
																									}
																								}
																								if (addSW == 2)
																								{
																									if (modsd[5] == L"1")
																									{
																										datatestDPU[4] = glingmin[2] + glingminf[22];
																										CMyPublicData::setfunc(37, 16, 353, 1);
																									}
																									if (modsd[5] == L"2")
																									{
																										datatestDPU[4] = glingmin[6] + glingminf[22];
																										CMyPublicData::setfunc(37, 16, 353, 1);
																									}
																									if (modsd[5] == L"3")
																									{
																										datatestDPU[4] = glingmin[10] + glingminf[22];
																										CMyPublicData::setfunc(37, 16, 353, 1);
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
																									CMyPublicData::calculate(m_double24, glingminf, 23, dlg, 10, 0);
																									UpdateData(FALSE);
																									if (addSW == 1)
																									{
																										if (modsd[7] == L"1")
																										{
																											datatestDPU[4] = glingmin[2] + glingminf[23];
																											CMyPublicData::setfunc(39, 16, 66, 1);
																										}
																										if (modsd[7] == L"2")
																										{
																											datatestDPU[4] = glingmin[6] + glingminf[23];
																											CMyPublicData::setfunc(39, 16, 66, 1);
																										}
																										if (modsd[7] == L"3")
																										{
																											datatestDPU[4] = glingmin[10] + glingminf[23];
																											CMyPublicData::setfunc(39, 16, 66, 1);
																										}
																									}
																									if (addSW == 2)
																									{
																										if (modsd[7] == L"1")
																										{
																											datatestDPU[4] = glingmin[2] + glingminf[23];
																											CMyPublicData::setfunc(39, 16, 353, 1);
																										}
																										if (modsd[7] == L"2")
																										{
																											datatestDPU[4] = glingmin[6] + glingminf[23];
																											CMyPublicData::setfunc(39, 16, 353, 1);
																										}
																										if (modsd[7] == L"3")
																										{
																											datatestDPU[4] = glingmin[10] + glingminf[23];
																											CMyPublicData::setfunc(39, 16, 353, 1);
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
																										CMyPublicData::calculate(m_double25, glingminf, 24, dlg, 10, 0);
																										UpdateData(FALSE);
																										if (addSW == 1)
																										{
																											if (modsd[9] == L"1")
																											{
																												datatestDPU[4] = glingmin[2] + glingminf[24];
																												CMyPublicData::setfunc(41, 16, 66, 1);
																											}
																											if (modsd[9] == L"2")
																											{
																												datatestDPU[4] = glingmin[6] + glingminf[24];
																												CMyPublicData::setfunc(41, 16, 66, 1);
																											}
																											if (modsd[9] == L"3")
																											{
																												datatestDPU[4] = glingmin[10] + glingminf[24];
																												CMyPublicData::setfunc(41, 16, 66, 1);
																											}
																										}
																										if (addSW == 2)
																										{
																											if (modsd[9] == L"1")
																											{
																												datatestDPU[4] = glingmin[2] + glingminf[24];
																												CMyPublicData::setfunc(41, 16, 353, 1);
																											}
																											if (modsd[9] == L"2")
																											{
																												datatestDPU[4] = glingmin[6] + glingminf[24];
																												CMyPublicData::setfunc(41, 16, 353, 1);
																											}
																											if (modsd[9] == L"3")
																											{
																												datatestDPU[4] = glingmin[10] + glingminf[24];
																												CMyPublicData::setfunc(41, 16, 353, 1);
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
																											CMyPublicData::calculate(m_double26, glingminf, 25, dlg, 10, 0);
																											UpdateData(FALSE);
																											if (addSW == 1)
																											{
																												if (modsd[11] == L"1")
																												{
																													datatestDPU[4] = glingmin[2] + glingminf[25];
																													CMyPublicData::setfunc(43, 16, 66, 1);
																												}
																												if (modsd[11] == L"2")
																												{
																													datatestDPU[4] = glingmin[6] + glingminf[25];
																													CMyPublicData::setfunc(43, 16, 66, 1);
																												}
																												if (modsd[11] == L"3")
																												{
																													datatestDPU[4] = glingmin[10] + glingminf[25];
																													CMyPublicData::setfunc(43, 16, 66, 1);
																												}
																											}
																											if (addSW == 2)
																											{
																												if (modsd[11] == L"1")
																												{
																													datatestDPU[4] = glingmin[2] + glingminf[25];
																													CMyPublicData::setfunc(43, 16, 353, 1);
																												}
																												if (modsd[11] == L"2")
																												{
																													datatestDPU[4] = glingmin[6] + glingminf[25];
																													CMyPublicData::setfunc(43, 16, 353, 1);
																												}
																												if (modsd[11] == L"3")
																												{
																													datatestDPU[4] = glingmin[10] + glingminf[25];
																													CMyPublicData::setfunc(43, 16, 353, 1);
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
																												CMyPublicData::calculate(m_double27, glingminf, 26, dlg, 10, 0);
																												UpdateData(FALSE);
																												if (addSW == 1)
																												{
																													if (modsd[13] == L"1")
																													{
																														datatestDPU[4] = glingmin[2] + glingminf[26];
																														CMyPublicData::setfunc(45, 16, 66, 1);
																													}
																													if (modsd[13] == L"2")
																													{
																														datatestDPU[4] = glingmin[6] + glingminf[26];
																														CMyPublicData::setfunc(45, 16, 66, 1);
																													}
																													if (modsd[13] == L"3")
																													{
																														datatestDPU[4] = glingmin[10] + glingminf[26];
																														CMyPublicData::setfunc(45, 16, 66, 1);
																													}
																												}
																												if (addSW == 2)
																												{
																													if (modsd[13] == L"1")
																													{
																														datatestDPU[4] = glingmin[2] + glingminf[26];
																														CMyPublicData::setfunc(45, 16, 353, 1);
																													}
																													if (modsd[13] == L"2")
																													{
																														datatestDPU[4] = glingmin[6] + glingminf[26];
																														CMyPublicData::setfunc(45, 16, 353, 1);
																													}
																													if (modsd[13] == L"3")
																													{
																														datatestDPU[4] = glingmin[10] + glingminf[26];
																														CMyPublicData::setfunc(45, 16, 353, 1);
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
																													CMyPublicData::calculate(m_double28, glingminf, 27, dlg, 10, 0);
																													UpdateData(FALSE);
																													if (addSW == 1)
																													{
																														if (modsd[15] == L"1")
																														{
																															datatestDPU[4] = glingmin[2] + glingminf[27];
																															CMyPublicData::setfunc(47, 16, 66, 1);
																														}
																														if (modsd[15] == L"2")
																														{
																															datatestDPU[4] = glingmin[6] + glingminf[27];
																															CMyPublicData::setfunc(47, 16, 66, 1);
																														}
																														if (modsd[15] == L"3")
																														{
																															datatestDPU[4] = glingmin[10] + glingminf[27];
																															CMyPublicData::setfunc(47, 16, 66, 1);
																														}
																													}
																													if (addSW == 2)
																													{
																														if (modsd[15] == L"1")
																														{
																															datatestDPU[4] = glingmin[2] + glingminf[27];
																															CMyPublicData::setfunc(47, 16, 353, 1);
																														}
																														if (modsd[15] == L"2")
																														{
																															datatestDPU[4] = glingmin[6] + glingminf[27];
																															CMyPublicData::setfunc(47, 16, 353, 1);
																														}
																														if (modsd[15] == L"3")
																														{
																															datatestDPU[4] = glingmin[10] + glingminf[27];
																															CMyPublicData::setfunc(47, 16, 353, 1);
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
																														CMyPublicData::calculate(m_double29, glingminf, 28, dlg, 10, 0);
																														UpdateData(FALSE);
																														if (addSW == 1)
																														{
																															if (modsd[17] == L"1")
																															{
																																datatestDPU[4] = glingmin[2] + glingminf[28];
																																CMyPublicData::setfunc(49, 16, 66, 1);
																															}
																															if (modsd[17] == L"2")
																															{
																																datatestDPU[4] = glingmin[6] + glingminf[28];
																																CMyPublicData::setfunc(49, 16, 66, 1);
																															}
																															if (modsd[17] == L"3")
																															{
																																datatestDPU[4] = glingmin[10] + glingminf[28];
																																CMyPublicData::setfunc(49, 16, 66, 1);
																															}
																														}
																														if (addSW == 2)
																														{
																															if (modsd[17] == L"1")
																															{
																																datatestDPU[4] = glingmin[2] + glingminf[28];
																																CMyPublicData::setfunc(49, 16, 353, 1);
																															}
																															if (modsd[17] == L"2")
																															{
																																datatestDPU[4] = glingmin[6] + glingminf[28];
																																CMyPublicData::setfunc(49, 16, 353, 1);
																															}
																															if (modsd[17] == L"3")
																															{
																																datatestDPU[4] = glingmin[10] + glingminf[28];
																																CMyPublicData::setfunc(49, 16, 353, 1);
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
																															CMyPublicData::calculate(m_double30, glingminf, 29, dlg, 10, 0);
																															UpdateData(FALSE);
																															if (addSW == 1)
																															{
																																if (modsd[19] == L"1")
																																{
																																	datatestDPU[4] = glingmin[2] + glingminf[29];
																																	CMyPublicData::setfunc(51, 16, 66, 1);
																																}
																																if (modsd[19] == L"2")
																																{
																																	datatestDPU[4] = glingmin[6] + glingminf[29];
																																	CMyPublicData::setfunc(51, 16, 66, 1);
																																}
																																if (modsd[19] == L"3")
																																{
																																	datatestDPU[4] = glingmin[10] + glingminf[29];
																																	CMyPublicData::setfunc(51, 16, 66, 1);
																																}
																															}
																															if (addSW == 2)
																															{
																																if (modsd[19] == L"1")
																																{
																																	datatestDPU[4] = glingmin[2] + glingminf[29];
																																	CMyPublicData::setfunc(51, 16, 353, 1);
																																}
																																if (modsd[19] == L"2")
																																{
																																	datatestDPU[4] = glingmin[6] + glingminf[29];
																																	CMyPublicData::setfunc(51, 16, 353, 1);
																																}
																																if (modsd[19] == L"3")
																																{
																																	datatestDPU[4] = glingmin[10] + glingminf[29];
																																	CMyPublicData::setfunc(51, 16, 353, 1);
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
																																CMyPublicData::calculate(m_double31, glingminf, 30, dlg, 10, 0);
																																UpdateData(FALSE);
																																if (addSW == 1)
																																{
																																	if (modsd[1] == L"1")
																																	{
																																		datatestDPU[4] = glingmin[3] + glingminf[30];
																																		CMyPublicData::setfunc(33, 16, 67, 1);
																																	}
																																	if (modsd[1] == L"2")
																																	{
																																		datatestDPU[4] = glingmin[7] + glingminf[30];
																																		CMyPublicData::setfunc(33, 16, 67, 1);
																																	}
																																	if (modsd[1] == L"3")
																																	{
																																		datatestDPU[4] = glingmin[11] + glingminf[30];
																																		CMyPublicData::setfunc(33, 16, 67, 1);
																																	}
																																}
																																if (addSW == 2)
																																{
																																	if (modsd[1] == L"1")
																																	{
																																		datatestDPU[4] = glingmin[3] + glingminf[30];
																																		CMyPublicData::setfunc(33, 16, 354, 1);
																																	}
																																	if (modsd[1] == L"2")
																																	{
																																		datatestDPU[4] = glingmin[7] + glingminf[30];
																																		CMyPublicData::setfunc(33, 16, 354, 1);
																																	}
																																	if (modsd[1] == L"3")
																																	{
																																		datatestDPU[4] = glingmin[11] + glingminf[30];
																																		CMyPublicData::setfunc(33, 16, 354, 1);
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
																																	CMyPublicData::calculate(m_double32, glingminf, 31, dlg, 10, 0);
																																	UpdateData(FALSE);
																																	if (addSW == 1)
																																	{
																																		if (modsd[3] == L"1")
																																		{
																																			datatestDPU[4] = glingmin[3] + glingminf[31];
																																			CMyPublicData::setfunc(35, 16, 67, 1);
																																		}
																																		if (modsd[3] == L"2")
																																		{
																																			datatestDPU[4] = glingmin[7] + glingminf[31];
																																			CMyPublicData::setfunc(35, 16, 67, 1);
																																		}
																																		if (modsd[3] == L"3")
																																		{
																																			datatestDPU[4] = glingmin[11] + glingminf[31];
																																			CMyPublicData::setfunc(35, 16, 67, 1);
																																		}
																																	}
																																	if (addSW == 2)
																																	{
																																		if (modsd[3] == L"1")
																																		{
																																			datatestDPU[4] = glingmin[3] + glingminf[31];
																																			CMyPublicData::setfunc(35, 16, 354, 1);
																																		}
																																		if (modsd[3] == L"2")
																																		{
																																			datatestDPU[4] = glingmin[7] + glingminf[31];
																																			CMyPublicData::setfunc(35, 16, 354, 1);
																																		}
																																		if (modsd[3] == L"3")
																																		{
																																			datatestDPU[4] = glingmin[11] + glingminf[31];
																																			CMyPublicData::setfunc(35, 16, 354, 1);
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
																																		CMyPublicData::calculate(m_double33, glingminf, 32, dlg, 10, 0);
																																		UpdateData(FALSE);
																																		if (addSW == 1)
																																		{
																																			if (modsd[5] == L"1")
																																			{
																																				datatestDPU[4] = glingmin[3] + glingminf[32];
																																				CMyPublicData::setfunc(37, 16, 67, 1);
																																			}
																																			if (modsd[5] == L"2")
																																			{
																																				datatestDPU[4] = glingmin[7] + glingminf[32];
																																				CMyPublicData::setfunc(37, 16, 67, 1);
																																			}
																																			if (modsd[5] == L"3")
																																			{
																																				datatestDPU[4] = glingmin[11] + glingminf[32];
																																				CMyPublicData::setfunc(37, 16, 67, 1);
																																			}
																																		}
																																		if (addSW == 2)
																																		{
																																			if (modsd[5] == L"1")
																																			{
																																				datatestDPU[4] = glingmin[3] + glingminf[32];
																																				CMyPublicData::setfunc(37, 16, 354, 1);
																																			}
																																			if (modsd[5] == L"2")
																																			{
																																				datatestDPU[4] = glingmin[7] + glingminf[32];
																																				CMyPublicData::setfunc(37, 16, 354, 1);
																																			}
																																			if (modsd[5] == L"3")
																																			{
																																				datatestDPU[4] = glingmin[11] + glingminf[32];
																																				CMyPublicData::setfunc(37, 16, 354, 1);
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
																																			CMyPublicData::calculate(m_double34, glingminf, 33, dlg, 10, 0);
																																			UpdateData(FALSE);
																																			if (addSW == 1)
																																			{
																																				if (modsd[7] == L"1")
																																				{
																																					datatestDPU[4] = glingmin[3] + glingminf[33];
																																					CMyPublicData::setfunc(39, 16, 67, 1);
																																				}
																																				if (modsd[7] == L"2")
																																				{
																																					datatestDPU[4] = glingmin[7] + glingminf[33];
																																					CMyPublicData::setfunc(39, 16, 67, 1);
																																				}
																																				if (modsd[7] == L"3")
																																				{
																																					datatestDPU[4] = glingmin[11] + glingminf[33];
																																					CMyPublicData::setfunc(39, 16, 67, 1);
																																				}
																																			}
																																			if (addSW == 2)
																																			{
																																				if (modsd[7] == L"1")
																																				{
																																					datatestDPU[4] = glingmin[3] + glingminf[33];
																																					CMyPublicData::setfunc(39, 16, 354, 1);
																																				}
																																				if (modsd[7] == L"2")
																																				{
																																					datatestDPU[4] = glingmin[7] + glingminf[33];
																																					CMyPublicData::setfunc(39, 16, 354, 1);
																																				}
																																				if (modsd[7] == L"3")
																																				{
																																					datatestDPU[4] = glingmin[11] + glingminf[33];
																																					CMyPublicData::setfunc(39, 16, 354, 1);
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
																																				CMyPublicData::calculate(m_double35, glingminf, 34, dlg, 10, 0);
																																				UpdateData(FALSE);
																																				if (addSW == 1)
																																				{
																																					if (modsd[9] == L"1")
																																					{
																																						datatestDPU[4] = glingmin[3] + glingminf[34];
																																						CMyPublicData::setfunc(41, 16, 67, 1);
																																					}
																																					if (modsd[9] == L"2")
																																					{
																																						datatestDPU[4] = glingmin[7] + glingminf[34];
																																						CMyPublicData::setfunc(41, 16, 67, 1);
																																					}
																																					if (modsd[9] == L"3")
																																					{
																																						datatestDPU[4] = glingmin[11] + glingminf[34];
																																						CMyPublicData::setfunc(41, 16, 67, 1);
																																					}
																																				}
																																				if (addSW == 2)
																																				{
																																					if (modsd[9] == L"1")
																																					{
																																						datatestDPU[4] = glingmin[3] + glingminf[34];
																																						CMyPublicData::setfunc(41, 16, 354, 1);
																																					}
																																					if (modsd[9] == L"2")
																																					{
																																						datatestDPU[4] = glingmin[7] + glingminf[34];
																																						CMyPublicData::setfunc(41, 16, 354, 1);
																																					}
																																					if (modsd[9] == L"3")
																																					{
																																						datatestDPU[4] = glingmin[11] + glingminf[34];
																																						CMyPublicData::setfunc(41, 16, 354, 1);
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
																																					CMyPublicData::calculate(m_double36, glingminf, 35, dlg, 10, 0);
																																					UpdateData(FALSE);
																																					if (addSW == 1)
																																					{
																																						if (modsd[11] == L"1")
																																						{
																																							datatestDPU[4] = glingmin[3] + glingminf[35];
																																							CMyPublicData::setfunc(43, 16, 67, 1);
																																						}
																																						if (modsd[11] == L"2")
																																						{
																																							datatestDPU[4] = glingmin[7] + glingminf[35];
																																							CMyPublicData::setfunc(43, 16, 67, 1);
																																						}
																																						if (modsd[11] == L"3")
																																						{
																																							datatestDPU[4] = glingmin[11] + glingminf[35];
																																							CMyPublicData::setfunc(43, 16, 67, 1);
																																						}
																																					}
																																					if (addSW == 2)
																																					{
																																						if (modsd[11] == L"1")
																																						{
																																							datatestDPU[4] = glingmin[3] + glingminf[35];
																																							CMyPublicData::setfunc(43, 16, 354, 1);
																																						}
																																						if (modsd[11] == L"2")
																																						{
																																							datatestDPU[4] = glingmin[7] + glingminf[35];
																																							CMyPublicData::setfunc(43, 16, 354, 1);
																																						}
																																						if (modsd[11] == L"3")
																																						{
																																							datatestDPU[4] = glingmin[11] + glingminf[35];
																																							CMyPublicData::setfunc(43, 16, 354, 1);
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
																																						CMyPublicData::calculate(m_double37, glingminf, 36, dlg, 10, 0);
																																						UpdateData(FALSE);
																																						if (addSW == 1)
																																						{
																																							if (modsd[13] == L"1")
																																							{
																																								datatestDPU[4] = glingmin[3] + glingminf[36];
																																								CMyPublicData::setfunc(45, 16, 67, 1);
																																							}
																																							if (modsd[13] == L"2")
																																							{
																																								datatestDPU[4] = glingmin[7] + glingminf[36];
																																								CMyPublicData::setfunc(45, 16, 67, 1);
																																							}
																																							if (modsd[13] == L"3")
																																							{
																																								datatestDPU[4] = glingmin[11] + glingminf[36];
																																								CMyPublicData::setfunc(45, 16, 67, 1);
																																							}
																																						}
																																						if (addSW == 2)
																																						{
																																							if (modsd[13] == L"1")
																																							{
																																								datatestDPU[4] = glingmin[3] + glingminf[36];
																																								CMyPublicData::setfunc(45, 16, 354, 1);
																																							}
																																							if (modsd[13] == L"2")
																																							{
																																								datatestDPU[4] = glingmin[7] + glingminf[36];
																																								CMyPublicData::setfunc(45, 16, 354, 1);
																																							}
																																							if (modsd[13] == L"3")
																																							{
																																								datatestDPU[4] = glingmin[11] + glingminf[36];
																																								CMyPublicData::setfunc(45, 16, 354, 1);
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
																																							CMyPublicData::calculate(m_double38, glingminf, 37, dlg, 10, 0);
																																							UpdateData(FALSE);
																																							if (addSW == 1)
																																							{
																																								if (modsd[15] == L"1")
																																								{
																																									datatestDPU[4] = glingmin[3] + glingminf[37];
																																									CMyPublicData::setfunc(47, 16, 67, 1);
																																								}
																																								if (modsd[15] == L"2")
																																								{
																																									datatestDPU[4] = glingmin[7] + glingminf[37];
																																									CMyPublicData::setfunc(47, 16, 67, 1);
																																								}
																																								if (modsd[15] == L"3")
																																								{
																																									datatestDPU[4] = glingmin[11] + glingminf[37];
																																									CMyPublicData::setfunc(47, 16, 67, 1);
																																								}
																																							}
																																							if (addSW == 2)
																																							{
																																								if (modsd[15] == L"1")
																																								{
																																									datatestDPU[4] = glingmin[3] + glingminf[37];
																																									CMyPublicData::setfunc(47, 16, 354, 1);
																																								}
																																								if (modsd[15] == L"2")
																																								{
																																									datatestDPU[4] = glingmin[7] + glingminf[37];
																																									CMyPublicData::setfunc(47, 16, 354, 1);
																																								}
																																								if (modsd[15] == L"3")
																																								{
																																									datatestDPU[4] = glingmin[11] + glingminf[37];
																																									CMyPublicData::setfunc(47, 16, 354, 1);
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
																																								CMyPublicData::calculate(m_double39, glingminf, 38, dlg, 10, 0);
																																								UpdateData(FALSE);
																																								if (addSW == 1)
																																								{
																																									if (modsd[17] == L"1")
																																									{
																																										datatestDPU[4] = glingmin[3] + glingminf[38];
																																										CMyPublicData::setfunc(49, 16, 67, 1);
																																									}
																																									if (modsd[17] == L"2")
																																									{
																																										datatestDPU[4] = glingmin[7] + glingminf[38];
																																										CMyPublicData::setfunc(49, 16, 67, 1);
																																									}
																																									if (modsd[17] == L"3")
																																									{
																																										datatestDPU[4] = glingmin[11] + glingminf[38];
																																										CMyPublicData::setfunc(49, 16, 67, 1);
																																									}
																																								}
																																								if (addSW == 2)
																																								{
																																									if (modsd[17] == L"1")
																																									{
																																										datatestDPU[4] = glingmin[3] + glingminf[38];
																																										CMyPublicData::setfunc(49, 16, 354, 1);
																																									}
																																									if (modsd[17] == L"2")
																																									{
																																										datatestDPU[4] = glingmin[7] + glingminf[38];
																																										CMyPublicData::setfunc(49, 16, 354, 1);
																																									}
																																									if (modsd[17] == L"3")
																																									{
																																										datatestDPU[4] = glingmin[11] + glingminf[38];
																																										CMyPublicData::setfunc(49, 16, 354, 1);
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
																																									CMyPublicData::calculate(m_double40, glingminf, 39, dlg, 10, 0);
																																									UpdateData(FALSE);
																																									if (addSW == 1)
																																									{
																																										if (modsd[19] == L"1")
																																										{
																																											datatestDPU[4] = glingmin[3] + glingminf[39];
																																											CMyPublicData::setfunc(51, 16, 67, 1);
																																										}
																																										if (modsd[19] == L"2")
																																										{
																																											datatestDPU[4] = glingmin[7] + glingminf[39];
																																											CMyPublicData::setfunc(51, 16, 67, 1);
																																										}
																																										if (modsd[19] == L"3")
																																										{
																																											datatestDPU[4] = glingmin[11] + glingminf[39];
																																											CMyPublicData::setfunc(51, 16, 67, 1);
																																										}
																																									}
																																									if (addSW == 2)
																																									{
																																										if (modsd[19] == L"1")
																																										{
																																											datatestDPU[4] = glingmin[3] + glingminf[39];
																																											CMyPublicData::setfunc(51, 16, 354, 1);
																																										}
																																										if (modsd[19] == L"2")
																																										{
																																											datatestDPU[4] = glingmin[7] + glingminf[39];
																																											CMyPublicData::setfunc(51, 16, 354, 1);
																																										}
																																										if (modsd[19] == L"3")
																																										{
																																											datatestDPU[4] = glingmin[11] + glingminf[39];
																																											CMyPublicData::setfunc(51, 16, 354, 1);
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


void GFEN::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(glingminf[0]);
	opx.ModifyNode("num3701", str);
	str = opx.numtoString(glingminf[1]);
	opx.ModifyNode("num3702", str);
	str = opx.numtoString(glingminf[2]);
	opx.ModifyNode("num3703", str);
	str = opx.numtoString(glingminf[3]);
	opx.ModifyNode("num3704", str);
	str = opx.numtoString(glingminf[4]);
	opx.ModifyNode("num3705", str);
	str = opx.numtoString(glingminf[5]);
	opx.ModifyNode("num3706", str);
	str = opx.numtoString(glingminf[6]);
	opx.ModifyNode("num3707", str);
	str = opx.numtoString(glingminf[7]);
	opx.ModifyNode("num3708", str);
	str = opx.numtoString(glingminf[8]);
	opx.ModifyNode("num3709", str);
	str = opx.numtoString(glingminf[9]);
	opx.ModifyNode("num3710", str);
	str = opx.numtoString(glingminf[10]);
	opx.ModifyNode("num3711", str);
	str = opx.numtoString(glingminf[11]);
	opx.ModifyNode("num3712", str);
	str = opx.numtoString(glingminf[12]);
	opx.ModifyNode("num3713", str);
	str = opx.numtoString(glingminf[13]);
	opx.ModifyNode("num3714", str);
	str = opx.numtoString(glingminf[14]);
	opx.ModifyNode("num3715", str);
	str = opx.numtoString(glingminf[15]);
	opx.ModifyNode("num3716", str);
	str = opx.numtoString(glingminf[16]);
	opx.ModifyNode("num3717", str);
	str = opx.numtoString(glingminf[17]);
	opx.ModifyNode("num3718", str);
	str = opx.numtoString(glingminf[18]);
	opx.ModifyNode("num3719", str);
	str = opx.numtoString(glingminf[19]);
	opx.ModifyNode("num3720", str);
	str = opx.numtoString(glingminf[20]);
	opx.ModifyNode("num3721", str);
	str = opx.numtoString(glingminf[21]);
	opx.ModifyNode("num3722", str);
	str = opx.numtoString(glingminf[22]);
	opx.ModifyNode("num3723", str);
	str = opx.numtoString(glingminf[23]);
	opx.ModifyNode("num3724", str);
	str = opx.numtoString(glingminf[24]);
	opx.ModifyNode("num3725", str);
	str = opx.numtoString(glingminf[25]);
	opx.ModifyNode("num3726", str);
	str = opx.numtoString(glingminf[26]);
	opx.ModifyNode("num3727", str);
	str = opx.numtoString(glingminf[27]);
	opx.ModifyNode("num3728", str);
	str = opx.numtoString(glingminf[28]);
	opx.ModifyNode("num3729", str);
	str = opx.numtoString(glingminf[29]);
	opx.ModifyNode("num3730", str);
	str = opx.numtoString(glingminf[30]);
	opx.ModifyNode("num3731", str);
	str = opx.numtoString(glingminf[31]);
	opx.ModifyNode("num3732", str);
	str = opx.numtoString(glingminf[32]);
	opx.ModifyNode("num3733", str);
	str = opx.numtoString(glingminf[33]);
	opx.ModifyNode("num3734", str);
	str = opx.numtoString(glingminf[34]);
	opx.ModifyNode("num3735", str);
	str = opx.numtoString(glingminf[35]);
	opx.ModifyNode("num3736", str);
	str = opx.numtoString(glingminf[36]);
	opx.ModifyNode("num3737", str);
	str = opx.numtoString(glingminf[37]);
	opx.ModifyNode("num3738", str);
	str = opx.numtoString(glingminf[38]);
	opx.ModifyNode("num3739", str);
	str = opx.numtoString(glingminf[39]);
	opx.ModifyNode("num3740", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


//void GFEN::OnBnClickedButton4()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	RFEN rf;
//	rf.DoModal();
//	CDialogEx::OnCancel();
//}
//
//
//void GFEN::OnBnClickedButton5()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	BFEN bf;
//	bf.DoModal();
//	CDialogEx::OnCancel();
//}
//
//
//void GFEN::OnBnClickedButton6()
//{
//	// TODO: 在此添加控件通知处理程序代码
//	HUNFEN hf;
//	hf.DoModal();
//	CDialogEx::OnCancel();
//}


void GFEN::ReSize()
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


void GFEN::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


void GFEN::OnBnClickedButton1()
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


void GFEN::OnBnClickedButton2()
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


void GFEN::OnBnClickedButton3()
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
