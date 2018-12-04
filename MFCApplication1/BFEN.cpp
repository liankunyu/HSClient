// BFEN.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "BFEN.h"
#include "afxdialogex.h"
#include "XMLHelper.h"
#include "MyPublicData.h"
#include "RFEN.h"
#include "GFEN.h"
#include "HUNFEN.h"

// BFEN 对话框

IMPLEMENT_DYNAMIC(BFEN, CDialogEx)

BFEN::BFEN(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_BFEN_DIALOG, pParent)
	, m_double1(blingminf[0])
	, m_double2(blingminf[1])
	, m_double3(blingminf[2])
	, m_double4(blingminf[3])
	, m_double5(blingminf[4])
	, m_double6(blingminf[5])
	, m_double7(blingminf[6])
	, m_double8(blingminf[7])
	, m_double9(blingminf[8])
	, m_double10(blingminf[9])
	, m_double11(blingminf[10])
	, m_double12(blingminf[11])
	, m_double13(blingminf[12])
	, m_double14(blingminf[13])
	, m_double15(blingminf[14])
	, m_double16(blingminf[15])
	, m_double17(blingminf[16])
	, m_double18(blingminf[17])
	, m_double19(blingminf[18])
	, m_double20(blingminf[19])
	, m_double21(blingminf[20])
	, m_double22(blingminf[21])
	, m_double23(blingminf[22])
	, m_double24(blingminf[23])
	, m_double25(blingminf[24])
	, m_double26(blingminf[25])
	, m_double27(blingminf[26])
	, m_double28(blingminf[27])
	, m_double29(blingminf[28])
	, m_double30(blingminf[29])
	, m_double31(blingminf[30])
	, m_double32(blingminf[31])
	, m_double33(blingminf[32])
	, m_double34(blingminf[33])
	, m_double35(blingminf[34])
	, m_double36(blingminf[35])
	, m_double37(blingminf[36])
	, m_double38(blingminf[37])
	, m_double39(blingminf[38])
	, m_double40(blingminf[39])
{

}

BFEN::~BFEN()
{
}

void BFEN::DoDataExchange(CDataExchange* pDX)
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


BEGIN_MESSAGE_MAP(BFEN, CDialogEx)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDCANCEL, &BFEN::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &BFEN::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &BFEN::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &BFEN::OnBnClickedButton3)
END_MESSAGE_MAP()


// BFEN 消息处理程序


BOOL BFEN::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	GetDlgItem(IDC_BUTTON1)->SetWindowText(zhendong[0]);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(zhendong[1]);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(zhendong[2]);


	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num4601", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num4602", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num4603", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num4604", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC4)->SetWindowText(cstr);
	opx.QueryNode_Text("num4605", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC5)->SetWindowText(cstr);
	opx.QueryNode_Text("num4606", yuyan);
	cstr = yuyan;
	GetDlgItem(IDC_STATIC6)->SetWindowText(cstr);
	opx.QueryNode_Text("num4607", yuyan);
	cstr = yuyan;
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


BOOL BFEN::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		UpdateData(TRUE);
		CInputDlg dlg;
		CMyPublicData::calculate(m_double1, blingminf, 0, dlg, 10, 0);
		UpdateData(FALSE);
		if (addSW == 1)
		{
			if (modsd[0] == L"1")
			{
				datatestDPU[4] = blingmin[0] + blingminf[0];
				CMyPublicData::setfunc(32, 16, 68, 1);
			}
			if (modsd[0] == L"2")
			{
				datatestDPU[4] = blingmin[4] + blingminf[0];
				CMyPublicData::setfunc(32, 16, 68, 1);
			}
			if (modsd[0] == L"3")
			{
				datatestDPU[4] = blingmin[8] + blingminf[0];
				CMyPublicData::setfunc(32, 16, 68, 1);
			}
		}
		if (addSW == 2)
		{
			if (modsd[0] == L"1")
			{
				datatestDPU[4] = blingmin[0] + blingminf[0];
				CMyPublicData::setfunc(32, 16, 355, 1);
			}
			if (modsd[0] == L"2")
			{
				datatestDPU[4] = blingmin[4] + blingminf[0];
				CMyPublicData::setfunc(32, 16, 355, 1);
			}
			if (modsd[0] == L"3")
			{
				datatestDPU[4] = blingmin[8] + blingminf[0];
				CMyPublicData::setfunc(32, 16, 355, 1);
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
			CMyPublicData::calculate(m_double2, blingminf, 1, dlg, 10, 0);
			UpdateData(FALSE);
			if (addSW == 1)
			{
				if (modsd[2] == L"1")
				{
					datatestDPU[4] = blingmin[0] + blingminf[1];
					CMyPublicData::setfunc(34, 16, 68, 1);
				}
				if (modsd[2] == L"2")
				{
					datatestDPU[4] = blingmin[4] + blingminf[1];
					CMyPublicData::setfunc(34, 16, 68, 1);
				}
				if (modsd[2] ==L"3")
				{
					datatestDPU[4] = blingmin[8] + blingminf[1];
					CMyPublicData::setfunc(34, 16, 68, 1);
				}
			}
			if (addSW == 2)
			{
				if (modsd[2] == L"1")
				{
					datatestDPU[4] = blingmin[0] + blingminf[1];
					CMyPublicData::setfunc(34, 16, 355, 1);
				}
				if (modsd[2] == L"2")
				{
					datatestDPU[4] = blingmin[4] + blingminf[1];
					CMyPublicData::setfunc(34, 16, 355, 1);
				}
				if (modsd[2] == L"3")
				{
					datatestDPU[4] = blingmin[8] + blingminf[1];
					CMyPublicData::setfunc(34, 16, 355, 1);
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
				CMyPublicData::calculate(m_double3, blingminf, 2, dlg, 10, 0);
				UpdateData(FALSE);
				if (addSW == 1)
				{
					if (modsd[4] == L"1")
					{
						datatestDPU[4] = blingmin[0] + blingminf[2];
						CMyPublicData::setfunc(36, 16, 68, 1);
					}
					if (modsd[4] == L"2")
					{
						datatestDPU[4] = blingmin[4] + blingminf[2];
						CMyPublicData::setfunc(36, 16, 68, 1);
					}
					if (modsd[4] == L"3")
					{
						datatestDPU[4] = blingmin[8] + blingminf[2];
						CMyPublicData::setfunc(36, 16, 68, 1);
					}
				}
				if (addSW == 2)
				{
					if (modsd[4] == L"1")
					{
						datatestDPU[4] = blingmin[0] + blingminf[2];
						CMyPublicData::setfunc(36, 16, 355, 1);
					}
					if (modsd[4] == L"2")
					{
						datatestDPU[4] = blingmin[4] + blingminf[2];
						CMyPublicData::setfunc(36, 16, 355, 1);
					}
					if (modsd[4] == L"3")
					{
						datatestDPU[4] = blingmin[8] + blingminf[2];
						CMyPublicData::setfunc(36, 16, 355, 1);
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
					CMyPublicData::calculate(m_double4, blingminf, 3, dlg, 10, 0);
					UpdateData(FALSE);
					if (addSW == 1)
					{
						if (modsd[6] == L"1")
						{
							datatestDPU[4] = blingmin[0] + blingminf[3];
							CMyPublicData::setfunc(38, 16, 68, 1);
						}
						if (modsd[6] == L"2")
						{
							datatestDPU[4] = blingmin[4] + blingminf[3];
							CMyPublicData::setfunc(38, 16, 68, 1);
						}
						if (modsd[6] == L"3")
						{
							datatestDPU[4] = blingmin[8] + blingminf[3];
							CMyPublicData::setfunc(38, 16, 68, 1);
						}
					}
					if (addSW == 2)
					{
						if (modsd[6] == L"1")
						{
							datatestDPU[4] = blingmin[0] + blingminf[3];
							CMyPublicData::setfunc(38, 16, 355, 1);
						}
						if (modsd[6] == L"2")
						{
							datatestDPU[4] = blingmin[4] + blingminf[3];
							CMyPublicData::setfunc(38, 16, 355, 1);
						}
						if (modsd[6] == L"3")
						{
							datatestDPU[4] = blingmin[8] + blingminf[3];
							CMyPublicData::setfunc(38, 16, 355, 1);
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
						CMyPublicData::calculate(m_double5, blingminf, 4, dlg, 10, 0);
						UpdateData(FALSE);
						if (addSW == 1)
						{
							if (modsd[8] == L"1")
							{
								datatestDPU[4] = blingmin[0] + blingminf[4];
								CMyPublicData::setfunc(40, 16, 68, 1);
							}
							if (modsd[8] == L"2")
							{
								datatestDPU[4] = blingmin[4] + blingminf[4];
								CMyPublicData::setfunc(40, 16, 68, 1);
							}
							if (modsd[8] == L"3")
							{
								datatestDPU[4] = blingmin[8] + blingminf[4];
								CMyPublicData::setfunc(40, 16, 68, 1);
							}
						}
						if (addSW == 2)
						{
							if (modsd[8] == L"1")
							{
								datatestDPU[4] = blingmin[0] + blingminf[4];
								CMyPublicData::setfunc(40, 16, 355, 1);
							}
							if (modsd[8] == L"2")
							{
								datatestDPU[4] = blingmin[4] + blingminf[4];
								CMyPublicData::setfunc(40, 16, 355, 1);
							}
							if (modsd[8] == L"3")
							{
								datatestDPU[4] = blingmin[8] + blingminf[4];
								CMyPublicData::setfunc(40, 16, 355, 1);
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
							CMyPublicData::calculate(m_double6, blingminf, 5, dlg, 10, 0);
							UpdateData(FALSE);
							if (addSW == 1)
							{
								if (modsd[10] == L"1")
								{
									datatestDPU[4] = blingmin[0] + blingminf[5];
									CMyPublicData::setfunc(42, 16, 68, 1);
								}
								if (modsd[10] == L"2")
								{
									datatestDPU[4] = blingmin[4] + blingminf[5];
									CMyPublicData::setfunc(42, 16, 68, 1);
								}
								if (modsd[10] == L"3")
								{
									datatestDPU[4] = blingmin[8] + blingminf[5];
									CMyPublicData::setfunc(42, 16, 68, 1);
								}
							}
							if (addSW == 2)
							{
								if (modsd[10] == L"1")
								{
									datatestDPU[4] = blingmin[0] + blingminf[5];
									CMyPublicData::setfunc(42, 16, 355, 1);
								}
								if (modsd[10] == L"2")
								{
									datatestDPU[4] = blingmin[4] + blingminf[5];
									CMyPublicData::setfunc(42, 16, 355, 1);
								}
								if (modsd[10] == L"3")
								{
									datatestDPU[4] = blingmin[8] + blingminf[5];
									CMyPublicData::setfunc(42, 16, 355, 1);
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
								CMyPublicData::calculate(m_double7, blingminf, 6, dlg, 10, 0);
								UpdateData(FALSE);
								if (addSW == 1)
								{
									if (modsd[12] == L"1")
									{
										datatestDPU[4] = blingmin[0] + blingminf[6];
										CMyPublicData::setfunc(44, 16, 68, 1);
									}
									if (modsd[12] == L"2")
									{
										datatestDPU[4] = blingmin[4] + blingminf[6];
										CMyPublicData::setfunc(44, 16, 68, 1);
									}
									if (modsd[12] == L"3")
									{
										datatestDPU[4] = blingmin[8] + blingminf[6];
										CMyPublicData::setfunc(44, 16, 68, 1);
									}
								}
								if (addSW == 2)
								{
									if (modsd[12] == L"1")
									{
										datatestDPU[4] = blingmin[0] + blingminf[6];
										CMyPublicData::setfunc(44, 16, 355, 1);
									}
									if (modsd[12] == L"2")
									{
										datatestDPU[4] = blingmin[4] + blingminf[6];
										CMyPublicData::setfunc(44, 16, 355, 1);
									}
									if (modsd[12] == L"3")
									{
										datatestDPU[4] = blingmin[8] + blingminf[6];
										CMyPublicData::setfunc(44, 16, 355, 1);
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
									CMyPublicData::calculate(m_double8, blingminf, 7, dlg, 10, 0);
									UpdateData(FALSE);
									if (addSW == 1)
									{
										if (modsd[14] == L"1")
										{
											datatestDPU[4] = blingmin[0] + blingminf[7];
											CMyPublicData::setfunc(46, 16, 68, 1);
										}
										if (modsd[14] == L"2")
										{
											datatestDPU[4] = blingmin[4] + blingminf[7];
											CMyPublicData::setfunc(46, 16, 68, 1);
										}
										if (modsd[14] == L"3")
										{
											datatestDPU[4] = blingmin[8] + blingminf[7];
											CMyPublicData::setfunc(46, 16, 68, 1);
										}
									}
									if (addSW == 2)
									{
										if (modsd[14] == L"1")
										{
											datatestDPU[4] = blingmin[0] + blingminf[7];
											CMyPublicData::setfunc(46, 16, 355, 1);
										}
										if (modsd[14] == L"2")
										{
											datatestDPU[4] = blingmin[4] + blingminf[7];
											CMyPublicData::setfunc(46, 16, 355, 1);
										}
										if (modsd[14] == L"3")
										{
											datatestDPU[4] = blingmin[8] + blingminf[7];
											CMyPublicData::setfunc(46, 16, 355, 1);
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
										CMyPublicData::calculate(m_double9, blingminf, 8, dlg, 10, 0);
										UpdateData(FALSE);
										if (addSW == 1)
										{
											if (modsd[16] == L"1")
											{
												datatestDPU[4] = blingmin[0] + blingminf[8];
												CMyPublicData::setfunc(48, 16, 68, 1);
											}
											if (modsd[16] == L"2")
											{
												datatestDPU[4] = blingmin[4] + blingminf[8];
												CMyPublicData::setfunc(48, 16, 68, 1);
											}
											if (modsd[16] == L"3")
											{
												datatestDPU[4] = blingmin[8] + blingminf[8];
												CMyPublicData::setfunc(48, 16, 68, 1);
											}
										}
										if (addSW == 2)
										{
											if (modsd[16] == L"1")
											{
												datatestDPU[4] = blingmin[0] + blingminf[8];
												CMyPublicData::setfunc(48, 16, 355, 1);
											}
											if (modsd[16] == L"2")
											{
												datatestDPU[4] = blingmin[4] + blingminf[8];
												CMyPublicData::setfunc(48, 16, 355, 1);
											}
											if (modsd[16] == L"3")
											{
												datatestDPU[4] = blingmin[8] + blingminf[8];
												CMyPublicData::setfunc(48, 16, 355, 1);
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
											CMyPublicData::calculate(m_double10, blingminf, 9, dlg, 10, 0);
											UpdateData(FALSE);
											if (addSW == 1)
											{
												if (modsd[18] == L"1")
												{
													datatestDPU[4] = blingmin[0] + blingminf[9];
													CMyPublicData::setfunc(50, 16, 68, 1);
												}
												if (modsd[18] == L"2")
												{
													datatestDPU[4] = blingmin[4] + blingminf[9];
													CMyPublicData::setfunc(50, 16, 68, 1);
												}
												if (modsd[18] == L"3")
												{
													datatestDPU[4] = blingmin[8] + blingminf[9];
													CMyPublicData::setfunc(50, 16, 68, 1);
												}
											}
											if (addSW == 2)
											{
												if (modsd[18] == L"1")
												{
													datatestDPU[4] = blingmin[0] + blingminf[9];
													CMyPublicData::setfunc(50, 16, 355, 1);
												}
												if (modsd[18] == L"2")
												{
													datatestDPU[4] = blingmin[4] + blingminf[9];
													CMyPublicData::setfunc(50, 16, 355, 1);
												}
												if (modsd[18] == L"3")
												{
													datatestDPU[4] = blingmin[8] + blingminf[9];
													CMyPublicData::setfunc(50, 16, 355, 1);
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
												CMyPublicData::calculate(m_double11, blingminf, 10, dlg, 10, 0);
												UpdateData(FALSE);
												if (addSW == 1)
												{
													if (modsd[0] == L"1")
													{
														datatestDPU[4] = blingmin[1] + blingminf[10];
														CMyPublicData::setfunc(32, 16, 69, 1);
													}
													if (modsd[0] == L"2")
													{
														datatestDPU[4] = blingmin[5] + blingminf[10];
														CMyPublicData::setfunc(32, 16, 69, 1);
													}
													if (modsd[0] == L"3")
													{
														datatestDPU[4] = blingmin[9] + blingminf[10];
														CMyPublicData::setfunc(32, 16, 69, 1);
													}
												}
												if (addSW == 2)
												{
													if (modsd[0] == L"1")
													{
														datatestDPU[4] = blingmin[1] + blingminf[10];
														CMyPublicData::setfunc(32, 16, 356, 1);
													}
													if (modsd[0] == L"2")
													{
														datatestDPU[4] = blingmin[5] + blingminf[10];
														CMyPublicData::setfunc(32, 16, 356, 1);
													}
													if (modsd[0] == L"3")
													{
														datatestDPU[4] = blingmin[9] + blingminf[10];
														CMyPublicData::setfunc(32, 16, 356, 1);
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
													CMyPublicData::calculate(m_double12, blingminf, 11, dlg, 10, 0);
													UpdateData(FALSE);
													if (addSW == 1)
													{
														if (modsd[2] == L"1")
														{
															datatestDPU[4] = blingmin[1] + blingminf[11];
															CMyPublicData::setfunc(34, 16, 69, 1);
														}
														if (modsd[2] == L"2")
														{
															datatestDPU[4] = blingmin[5] + blingminf[11];
															CMyPublicData::setfunc(34, 16, 69, 1);
														}
														if (modsd[2] == L"3")
														{
															datatestDPU[4] = blingmin[9] + blingminf[11];
															CMyPublicData::setfunc(34, 16, 69, 1);
														}
													}
													if (addSW == 2)
													{
														if (modsd[2] == L"1")
														{
															datatestDPU[4] = blingmin[1] + blingminf[11];
															CMyPublicData::setfunc(34, 16, 356, 1);
														}
														if (modsd[2] == L"2")
														{
															datatestDPU[4] = blingmin[5] + blingminf[11];
															CMyPublicData::setfunc(34, 16, 356, 1);
														}
														if (modsd[2] == L"3")
														{
															datatestDPU[4] = blingmin[9] + blingminf[11];
															CMyPublicData::setfunc(34, 16, 356, 1);
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
														CMyPublicData::calculate(m_double13, blingminf, 12, dlg, 10, 0);
														UpdateData(FALSE);
														if (addSW == 1)
														{
															if (modsd[4] == L"1")
															{
																datatestDPU[4] = blingmin[1] + blingminf[12];
																CMyPublicData::setfunc(36, 16, 69, 1);
															}
															if (modsd[4] == L"2")
															{
																datatestDPU[4] = blingmin[5] + blingminf[12];
																CMyPublicData::setfunc(36, 16, 69, 1);
															}
															if (modsd[4] == L"3")
															{
																datatestDPU[4] = blingmin[9] + blingminf[12];
																CMyPublicData::setfunc(36, 16, 69, 1);
															}
														}
														if (addSW == 2)
														{
															if (modsd[4] == L"1")
															{
																datatestDPU[4] = blingmin[1] + blingminf[12];
																CMyPublicData::setfunc(36, 16, 356, 1);
															}
															if (modsd[4] == L"2")
															{
																datatestDPU[4] = blingmin[5] + blingminf[12];
																CMyPublicData::setfunc(36, 16, 356, 1);
															}
															if (modsd[4] == L"3")
															{
																datatestDPU[4] = blingmin[9] + blingminf[12];
																CMyPublicData::setfunc(36, 16, 356, 1);
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
															CMyPublicData::calculate(m_double14, blingminf, 13, dlg, 10, 0);
															UpdateData(FALSE);
															if (addSW == 1)
															{
																if (modsd[6] == L"1")
																{
																	datatestDPU[4] = blingmin[1] + blingminf[13];
																	CMyPublicData::setfunc(38, 16, 69, 1);
																}
																if (modsd[6] == L"2")
																{
																	datatestDPU[4] = blingmin[5] + blingminf[13];
																	CMyPublicData::setfunc(38, 16, 69, 1);
																}
																if (modsd[6] == L"3")
																{
																	datatestDPU[4] = blingmin[9] + blingminf[13];
																	CMyPublicData::setfunc(38, 16, 69, 1);
																}
															}
															if (addSW == 2)
															{
																if (modsd[6] == L"1")
																{
																	datatestDPU[4] = blingmin[1] + blingminf[13];
																	CMyPublicData::setfunc(38, 16, 356, 1);
																}
																if (modsd[6] == L"2")
																{
																	datatestDPU[4] = blingmin[5] + blingminf[13];
																	CMyPublicData::setfunc(38, 16, 356, 1);
																}
																if (modsd[6] == L"3")
																{
																	datatestDPU[4] = blingmin[9] + blingminf[13];
																	CMyPublicData::setfunc(38, 16, 356, 1);
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
																CMyPublicData::calculate(m_double15, blingminf, 14, dlg, 10, 0);
																UpdateData(FALSE);
																if (addSW == 1)
																{
																	if (modsd[8] == L"1")
																	{
																		datatestDPU[4] = blingmin[1] + blingminf[14];
																		CMyPublicData::setfunc(40, 16, 69, 1);
																	}
																	if (modsd[8] == L"2")
																	{
																		datatestDPU[4] = blingmin[5] + blingminf[14];
																		CMyPublicData::setfunc(40, 16, 69, 1);
																	}
																	if (modsd[8] == L"3")
																	{
																		datatestDPU[4] = blingmin[9] + blingminf[14];
																		CMyPublicData::setfunc(40, 16, 69, 1);
																	}
																}
																if (addSW == 2)
																{
																	if (modsd[8] == L"1")
																	{
																		datatestDPU[4] = blingmin[1] + blingminf[14];
																		CMyPublicData::setfunc(40, 16, 356, 1);
																	}
																	if (modsd[8] == L"2")
																	{
																		datatestDPU[4] = blingmin[5] + blingminf[14];
																		CMyPublicData::setfunc(40, 16, 356, 1);
																	}
																	if (modsd[8] == L"3")
																	{
																		datatestDPU[4] = blingmin[9] + blingminf[14];
																		CMyPublicData::setfunc(40, 16, 356, 1);
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
																	CMyPublicData::calculate(m_double16, blingminf, 15, dlg, 10, 0);
																	UpdateData(FALSE);
																	if (addSW == 1)
																	{
																		if (modsd[10] == L"1")
																		{
																			datatestDPU[4] = blingmin[1] + blingminf[15];
																			CMyPublicData::setfunc(42, 16, 69, 1);
																		}
																		if (modsd[10] == L"2")
																		{
																			datatestDPU[4] = blingmin[5] + blingminf[15];
																			CMyPublicData::setfunc(42, 16, 69, 1);
																		}
																		if (modsd[10] == L"3")
																		{
																			datatestDPU[4] = blingmin[9] + blingminf[15];
																			CMyPublicData::setfunc(42, 16, 69, 1);
																		}
																	}
																	if (addSW == 2)
																	{
																		if (modsd[10] == L"1")
																		{
																			datatestDPU[4] = blingmin[1] + blingminf[15];
																			CMyPublicData::setfunc(42, 16, 356, 1);
																		}
																		if (modsd[10] == L"2")
																		{
																			datatestDPU[4] = blingmin[5] + blingminf[15];
																			CMyPublicData::setfunc(42, 16, 356, 1);
																		}
																		if (modsd[10] == L"3")
																		{
																			datatestDPU[4] = blingmin[9] + blingminf[15];
																			CMyPublicData::setfunc(42, 16, 356, 1);
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
																		CMyPublicData::calculate(m_double17, blingminf, 16, dlg, 10, 0);
																		UpdateData(FALSE);
																		if (addSW == 1)
																		{
																			if (modsd[12] == L"1")
																			{
																				datatestDPU[4] = blingmin[1] + blingminf[16];
																				CMyPublicData::setfunc(44, 16, 69, 1);
																			}
																			if (modsd[12] == L"2")
																			{
																				datatestDPU[4] = blingmin[5] + blingminf[16];
																				CMyPublicData::setfunc(44, 16, 69, 1);
																			}
																			if (modsd[12] == L"3")
																			{
																				datatestDPU[4] = blingmin[9] + blingminf[16];
																				CMyPublicData::setfunc(44, 16, 69, 1);
																			}
																		}
																		if (addSW == 2)
																		{
																			if (modsd[12] == L"1")
																			{
																				datatestDPU[4] = blingmin[1] + blingminf[16];
																				CMyPublicData::setfunc(44, 16, 356, 1);
																			}
																			if (modsd[12] == L"2")
																			{
																				datatestDPU[4] = blingmin[5] + blingminf[16];
																				CMyPublicData::setfunc(44, 16, 356, 1);
																			}
																			if (modsd[12] == L"3")
																			{
																				datatestDPU[4] = blingmin[9] + blingminf[16];
																				CMyPublicData::setfunc(44, 16, 356, 1);
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
																			CMyPublicData::calculate(m_double18, blingminf, 17, dlg, 10, 0);
																			UpdateData(FALSE);
																			if (addSW == 1)
																			{
																				if (modsd[14] == L"1")
																				{
																					datatestDPU[4] = blingmin[1] + blingminf[17];
																					CMyPublicData::setfunc(46, 16, 69, 1);
																				}
																				if (modsd[14] == L"2")
																				{
																					datatestDPU[4] = blingmin[5] + blingminf[17];
																					CMyPublicData::setfunc(46, 16, 69, 1);
																				}
																				if (modsd[14] == L"3")
																				{
																					datatestDPU[4] = blingmin[9] + blingminf[17];
																					CMyPublicData::setfunc(46, 16, 69, 1);
																				}
																			}
																			if (addSW == 2)
																			{
																				if (modsd[14] == L"1")
																				{
																					datatestDPU[4] = blingmin[1] + blingminf[17];
																					CMyPublicData::setfunc(46, 16, 356, 1);
																				}
																				if (modsd[14] == L"2")
																				{
																					datatestDPU[4] = blingmin[5] + blingminf[17];
																					CMyPublicData::setfunc(46, 16, 356, 1);
																				}
																				if (modsd[14] == L"3")
																				{
																					datatestDPU[4] = blingmin[9] + blingminf[17];
																					CMyPublicData::setfunc(46, 16, 356, 1);
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
																				CMyPublicData::calculate(m_double19, blingminf, 18, dlg, 10, 0);
																				UpdateData(FALSE);
																				if (addSW == 1)
																				{
																					if (modsd[16] == L"1")
																					{
																						datatestDPU[4] = blingmin[1] + blingminf[18];
																						CMyPublicData::setfunc(48, 16, 69, 1);
																					}
																					if (modsd[16] == L"2")
																					{
																						datatestDPU[4] = blingmin[5] + blingminf[18];
																						CMyPublicData::setfunc(48, 16, 69, 1);
																					}
																					if (modsd[16] == L"3")
																					{
																						datatestDPU[4] = blingmin[9] + blingminf[18];
																						CMyPublicData::setfunc(48, 16, 69, 1);
																					}
																				}
																				if (addSW == 2)
																				{
																					if (modsd[16] == L"1")
																					{
																						datatestDPU[4] = blingmin[1] + blingminf[18];
																						CMyPublicData::setfunc(48, 16, 356, 1);
																					}
																					if (modsd[16] == L"2")
																					{
																						datatestDPU[4] = blingmin[5] + blingminf[18];
																						CMyPublicData::setfunc(48, 16, 356, 1);
																					}
																					if (modsd[16] == L"3")
																					{
																						datatestDPU[4] = blingmin[9] + blingminf[18];
																						CMyPublicData::setfunc(48, 16, 356, 1);
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
																					CMyPublicData::calculate(m_double20, blingminf, 19, dlg, 10, 0);
																					UpdateData(FALSE);
																					if (addSW == 1)
																					{
																						if (modsd[18] == L"1")
																						{
																							datatestDPU[4] = blingmin[1] + blingminf[19];
																							CMyPublicData::setfunc(50, 16, 69, 1);
																						}
																						if (modsd[18] == L"2")
																						{
																							datatestDPU[4] = blingmin[5] + blingminf[19];
																							CMyPublicData::setfunc(50, 16, 69, 1);
																						}
																						if (modsd[18] == L"3")
																						{
																							datatestDPU[4] = blingmin[9] + blingminf[19];
																							CMyPublicData::setfunc(50, 16, 69, 1);
																						}
																					}
																					if (addSW == 2)
																					{
																						if (modsd[18] == L"1")
																						{
																							datatestDPU[4] = blingmin[1] + blingminf[19];
																							CMyPublicData::setfunc(50, 16, 356, 1);
																						}
																						if (modsd[18] == L"2")
																						{
																							datatestDPU[4] = blingmin[5] + blingminf[19];
																							CMyPublicData::setfunc(50, 16, 356, 1);
																						}
																						if (modsd[18] == L"3")
																						{
																							datatestDPU[4] = blingmin[9] + blingminf[19];
																							CMyPublicData::setfunc(50, 16, 356, 1);
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
																						CMyPublicData::calculate(m_double21, blingminf, 20, dlg, 10, 0);
																						UpdateData(FALSE);
																						if (addSW == 1)
																						{
																							if (modsd[1] == L"1")
																							{
																								datatestDPU[4] = blingmin[2] + blingminf[20];
																								CMyPublicData::setfunc(33, 16, 68, 1);
																							}
																							if (modsd[1] == L"2")
																							{
																								datatestDPU[4] = blingmin[6] + blingminf[20];
																								CMyPublicData::setfunc(33, 16, 68, 1);
																							}
																							if (modsd[1] == L"3")
																							{
																								datatestDPU[4] = blingmin[10] + blingminf[20];
																								CMyPublicData::setfunc(33, 16, 68, 1);
																							}
																						}
																						if (addSW == 2)
																						{
																							if (modsd[1] == L"1")
																							{
																								datatestDPU[4] = blingmin[2] + blingminf[20];
																								CMyPublicData::setfunc(33, 16, 355, 1);
																							}
																							if (modsd[1] == L"2")
																							{
																								datatestDPU[4] = blingmin[6] + blingminf[20];
																								CMyPublicData::setfunc(33, 16, 355, 1);
																							}
																							if (modsd[1] == L"3")
																							{
																								datatestDPU[4] = blingmin[10] + blingminf[20];
																								CMyPublicData::setfunc(33, 16, 355, 1);
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
																							CMyPublicData::calculate(m_double22, blingminf, 21, dlg, 10, 0);
																							UpdateData(FALSE);
																							if (addSW == 1)
																							{
																								if (modsd[3] == L"1")
																								{
																									datatestDPU[4] = blingmin[2] + blingminf[21];
																									CMyPublicData::setfunc(35, 16, 68, 1);
																								}
																								if (modsd[3] == L"2")
																								{
																									datatestDPU[4] = blingmin[6] + blingminf[21];
																									CMyPublicData::setfunc(35, 16, 68, 1);
																								}
																								if (modsd[3] == L"3")
																								{
																									datatestDPU[4] = blingmin[10] + blingminf[21];
																									CMyPublicData::setfunc(35, 16, 68, 1);
																								}
																							}
																							if (addSW == 2)
																							{
																								if (modsd[3] == L"1")
																								{
																									datatestDPU[4] = blingmin[2] + blingminf[21];
																									CMyPublicData::setfunc(35, 16, 355, 1);
																								}
																								if (modsd[3] == L"2")
																								{
																									datatestDPU[4] = blingmin[6] + blingminf[21];
																									CMyPublicData::setfunc(35, 16, 355, 1);
																								}
																								if (modsd[3] == L"3")
																								{
																									datatestDPU[4] = blingmin[10] + blingminf[21];
																									CMyPublicData::setfunc(35, 16, 355, 1);
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
																								CMyPublicData::calculate(m_double23, blingminf, 22, dlg, 10, 0);
																								UpdateData(FALSE);
																								if (addSW == 1)
																								{
																									if (modsd[5] == L"1")
																									{
																										datatestDPU[4] = blingmin[2] + blingminf[22];
																										CMyPublicData::setfunc(37, 16, 68, 1);
																									}
																									if (modsd[5] == L"2")
																									{
																										datatestDPU[4] = blingmin[6] + blingminf[22];
																										CMyPublicData::setfunc(37, 16, 68, 1);
																									}
																									if (modsd[5] == L"3")
																									{
																										datatestDPU[4] = blingmin[10] + blingminf[22];
																										CMyPublicData::setfunc(37, 16, 68, 1);
																									}
																								}
																								if (addSW == 2)
																								{
																									if (modsd[5] == L"1")
																									{
																										datatestDPU[4] = blingmin[2] + blingminf[22];
																										CMyPublicData::setfunc(37, 16, 355, 1);
																									}
																									if (modsd[5] == L"2")
																									{
																										datatestDPU[4] = blingmin[6] + blingminf[22];
																										CMyPublicData::setfunc(37, 16, 355, 1);
																									}
																									if (modsd[5] == L"3")
																									{
																										datatestDPU[4] = blingmin[10] + blingminf[22];
																										CMyPublicData::setfunc(37, 16, 355, 1);
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
																									CMyPublicData::calculate(m_double24, blingminf, 23, dlg, 10, 0);
																									UpdateData(FALSE);
																									if (addSW == 1)
																									{
																										if (modsd[7] == L"1")
																										{
																											datatestDPU[4] = blingmin[2] + blingminf[23];
																											CMyPublicData::setfunc(39, 16, 68, 1);
																										}
																										if (modsd[7] == L"2")
																										{
																											datatestDPU[4] = blingmin[6] + blingminf[23];
																											CMyPublicData::setfunc(39, 16, 68, 1);
																										}
																										if (modsd[7] == L"3")
																										{
																											datatestDPU[4] = blingmin[10] + blingminf[23];
																											CMyPublicData::setfunc(39, 16, 68, 1);
																										}
																									}
																									if (addSW == 2)
																									{
																										if (modsd[7] == L"1")
																										{
																											datatestDPU[4] = blingmin[2] + blingminf[23];
																											CMyPublicData::setfunc(39, 16, 355, 1);
																										}
																										if (modsd[7] == L"2")
																										{
																											datatestDPU[4] = blingmin[6] + blingminf[23];
																											CMyPublicData::setfunc(39, 16, 355, 1);
																										}
																										if (modsd[7] == L"3")
																										{
																											datatestDPU[4] = blingmin[10] + blingminf[23];
																											CMyPublicData::setfunc(39, 16, 355, 1);
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
																										CMyPublicData::calculate(m_double25, blingminf, 24, dlg, 10, 0);
																										UpdateData(FALSE);
																										if (addSW == 1)
																										{
																											if (modsd[9] == L"1")
																											{
																												datatestDPU[4] = blingmin[2] + blingminf[24];
																												CMyPublicData::setfunc(41, 16, 68, 1);
																											}
																											if (modsd[9] == L"2")
																											{
																												datatestDPU[4] = blingmin[6] + blingminf[24];
																												CMyPublicData::setfunc(41, 16, 68, 1);
																											}
																											if (modsd[9] == L"3")
																											{
																												datatestDPU[4] = blingmin[10] + blingminf[24];
																												CMyPublicData::setfunc(41, 16, 68, 1);
																											}
																										}
																										if (addSW == 2)
																										{
																											if (modsd[9] == L"1")
																											{
																												datatestDPU[4] = blingmin[2] + blingminf[24];
																												CMyPublicData::setfunc(41, 16, 355, 1);
																											}
																											if (modsd[9] == L"2")
																											{
																												datatestDPU[4] = blingmin[6] + blingminf[24];
																												CMyPublicData::setfunc(41, 16, 355, 1);
																											}
																											if (modsd[9] == L"3")
																											{
																												datatestDPU[4] = blingmin[10] + blingminf[24];
																												CMyPublicData::setfunc(41, 16, 355, 1);
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
																											CMyPublicData::calculate(m_double26, blingminf, 25, dlg, 10, 0);
																											UpdateData(FALSE);
																											if (addSW == 1)
																											{
																												if (modsd[11] == L"1")
																												{
																													datatestDPU[4] = blingmin[2] + blingminf[25];
																													CMyPublicData::setfunc(43, 16, 68, 1);
																												}
																												if (modsd[11] == L"2")
																												{
																													datatestDPU[4] = blingmin[6] + blingminf[25];
																													CMyPublicData::setfunc(43, 16, 68, 1);
																												}
																												if (modsd[11] == L"3")
																												{
																													datatestDPU[4] = blingmin[10] + blingminf[25];
																													CMyPublicData::setfunc(43, 16, 68, 1);
																												}
																											}
																											if (addSW == 2)
																											{
																												if (modsd[11] == L"1")
																												{
																													datatestDPU[4] = blingmin[2] + blingminf[25];
																													CMyPublicData::setfunc(43, 16, 355, 1);
																												}
																												if (modsd[11] == L"2")
																												{
																													datatestDPU[4] = blingmin[6] + blingminf[25];
																													CMyPublicData::setfunc(43, 16, 355, 1);
																												}
																												if (modsd[11] == L"3")
																												{
																													datatestDPU[4] = blingmin[10] + blingminf[25];
																													CMyPublicData::setfunc(43, 16, 355, 1);
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
																												CMyPublicData::calculate(m_double27, blingminf, 26, dlg, 10, 0);
																												UpdateData(FALSE);
																												if (addSW == 1)
																												{
																													if (modsd[13] == L"1")
																													{
																														datatestDPU[4] = blingmin[2] + blingminf[26];
																														CMyPublicData::setfunc(45, 16, 68, 1);
																													}
																													if (modsd[13] == L"2")
																													{
																														datatestDPU[4] = blingmin[6] + blingminf[26];
																														CMyPublicData::setfunc(45, 16, 68, 1);
																													}
																													if (modsd[13] == L"3")
																													{
																														datatestDPU[4] = blingmin[10] + blingminf[26];
																														CMyPublicData::setfunc(45, 16, 68, 1);
																													}
																												}
																												if (addSW == 2)
																												{
																													if (modsd[13] == L"1")
																													{
																														datatestDPU[4] = blingmin[2] + blingminf[26];
																														CMyPublicData::setfunc(45, 16, 355, 1);
																													}
																													if (modsd[13] == L"2")
																													{
																														datatestDPU[4] = blingmin[6] + blingminf[26];
																														CMyPublicData::setfunc(45, 16, 355, 1);
																													}
																													if (modsd[13] == L"3")
																													{
																														datatestDPU[4] = blingmin[10] + blingminf[26];
																														CMyPublicData::setfunc(45, 16, 355, 1);
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
																													CMyPublicData::calculate(m_double28, blingminf, 27, dlg, 10, 0);
																													UpdateData(FALSE);
																													if (addSW == 1)
																													{
																														if (modsd[15] == L"1")
																														{
																															datatestDPU[4] = blingmin[2] + blingminf[27];
																															CMyPublicData::setfunc(47, 16, 68, 1);
																														}
																														if (modsd[15] == L"2")
																														{
																															datatestDPU[4] = blingmin[6] + blingminf[27];
																															CMyPublicData::setfunc(47, 16, 68, 1);
																														}
																														if (modsd[15] == L"3")
																														{
																															datatestDPU[4] = blingmin[10] + blingminf[27];
																															CMyPublicData::setfunc(47, 16, 68, 1);
																														}
																													}
																													if (addSW == 2)
																													{
																														if (modsd[15] == L"1")
																														{
																															datatestDPU[4] = blingmin[2] + blingminf[27];
																															CMyPublicData::setfunc(47, 16, 355, 1);
																														}
																														if (modsd[15] == L"2")
																														{
																															datatestDPU[4] = blingmin[6] + blingminf[27];
																															CMyPublicData::setfunc(47, 16, 355, 1);
																														}
																														if (modsd[15] == L"3")
																														{
																															datatestDPU[4] = blingmin[10] + blingminf[27];
																															CMyPublicData::setfunc(47, 16, 355, 1);
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
																														CMyPublicData::calculate(m_double29, blingminf, 28, dlg, 10, 0);
																														UpdateData(FALSE);
																														if (addSW == 1)
																														{
																															if (modsd[17] == L"1")
																															{
																																datatestDPU[4] = blingmin[2] + blingminf[28];
																																CMyPublicData::setfunc(49, 16, 68, 1);
																															}
																															if (modsd[17] == L"2")
																															{
																																datatestDPU[4] = blingmin[6] + blingminf[28];
																																CMyPublicData::setfunc(49, 16, 68, 1);
																															}
																															if (modsd[17] == L"3")
																															{
																																datatestDPU[4] = blingmin[10] + blingminf[28];
																																CMyPublicData::setfunc(49, 16, 68, 1);
																															}
																														}
																														if (addSW == 2)
																														{
																															if (modsd[17] == L"1")
																															{
																																datatestDPU[4] = blingmin[2] + blingminf[28];
																																CMyPublicData::setfunc(49, 16, 355, 1);
																															}
																															if (modsd[17] == L"2")
																															{
																																datatestDPU[4] = blingmin[6] + blingminf[28];
																																CMyPublicData::setfunc(49, 16, 355, 1);
																															}
																															if (modsd[17] == L"3")
																															{
																																datatestDPU[4] = blingmin[10] + blingminf[28];
																																CMyPublicData::setfunc(49, 16, 355, 1);
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
																															CMyPublicData::calculate(m_double30, blingminf, 29, dlg, 10, 0);
																															UpdateData(FALSE);
																															if (addSW == 1)
																															{
																																if (modsd[19] == L"1")
																																{
																																	datatestDPU[4] = blingmin[2] + blingminf[29];
																																	CMyPublicData::setfunc(51, 16, 68, 1);
																																}
																																if (modsd[19] == L"2")
																																{
																																	datatestDPU[4] = blingmin[6] + blingminf[29];
																																	CMyPublicData::setfunc(51, 16, 68, 1);
																																}
																																if (modsd[19] == L"3")
																																{
																																	datatestDPU[4] = blingmin[10] + blingminf[29];
																																	CMyPublicData::setfunc(51, 16, 68, 1);
																																}
																															}
																															if (addSW == 2)
																															{
																																if (modsd[19] == L"1")
																																{
																																	datatestDPU[4] = blingmin[2] + blingminf[29];
																																	CMyPublicData::setfunc(51, 16, 355, 1);
																																}
																																if (modsd[19] == L"2")
																																{
																																	datatestDPU[4] = blingmin[6] + blingminf[29];
																																	CMyPublicData::setfunc(51, 16, 355, 1);
																																}
																																if (modsd[19] == L"3")
																																{
																																	datatestDPU[4] = blingmin[10] + blingminf[29];
																																	CMyPublicData::setfunc(51, 16, 355, 1);
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
																																CMyPublicData::calculate(m_double31, blingminf, 30, dlg, 10, 0);
																																UpdateData(FALSE);
																																if (addSW == 1)
																																{
																																	if (modsd[1] == L"1")
																																	{
																																		datatestDPU[4] = blingmin[3] + blingminf[30];
																																		CMyPublicData::setfunc(33, 16, 69, 1);
																																	}
																																	if (modsd[1] == L"2")
																																	{
																																		datatestDPU[4] = blingmin[7] + blingminf[30];
																																		CMyPublicData::setfunc(33, 16, 69, 1);
																																	}
																																	if (modsd[1] == L"3")
																																	{
																																		datatestDPU[4] = blingmin[11] + blingminf[30];
																																		CMyPublicData::setfunc(33, 16, 69, 1);
																																	}
																																}
																																if (addSW == 2)
																																{
																																	if (modsd[1] == L"1")
																																	{
																																		datatestDPU[4] = blingmin[3] + blingminf[30];
																																		CMyPublicData::setfunc(33, 16, 356, 1);
																																	}
																																	if (modsd[1] == L"2")
																																	{
																																		datatestDPU[4] = blingmin[7] + blingminf[30];
																																		CMyPublicData::setfunc(33, 16, 356, 1);
																																	}
																																	if (modsd[1] == L"3")
																																	{
																																		datatestDPU[4] = blingmin[11] + blingminf[30];
																																		CMyPublicData::setfunc(33, 16, 356, 1);
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
																																	CMyPublicData::calculate(m_double32, blingminf, 31, dlg, 10, 0);
																																	UpdateData(FALSE);
																																	if (addSW == 1)
																																	{
																																		if (modsd[3] == L"1")
																																		{
																																			datatestDPU[4] = blingmin[3] + blingminf[31];
																																			CMyPublicData::setfunc(35, 16, 69, 1);
																																		}
																																		if (modsd[3] == L"2")
																																		{
																																			datatestDPU[4] = blingmin[7] + blingminf[31];
																																			CMyPublicData::setfunc(35, 16, 69, 1);
																																		}
																																		if (modsd[3] == L"3")
																																		{
																																			datatestDPU[4] = blingmin[11] + blingminf[31];
																																			CMyPublicData::setfunc(35, 16, 69, 1);
																																		}
																																	}
																																	if (addSW == 2)
																																	{
																																		if (modsd[3] == L"1")
																																		{
																																			datatestDPU[4] = blingmin[3] + blingminf[31];
																																			CMyPublicData::setfunc(35, 16, 356, 1);
																																		}
																																		if (modsd[3] == L"2")
																																		{
																																			datatestDPU[4] = blingmin[7] + blingminf[31];
																																			CMyPublicData::setfunc(35, 16, 356, 1);
																																		}
																																		if (modsd[3] == L"3")
																																		{
																																			datatestDPU[4] = blingmin[11] + blingminf[31];
																																			CMyPublicData::setfunc(35, 16, 356, 1);
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
																																		CMyPublicData::calculate(m_double33, blingminf, 32, dlg, 10, 0);
																																		UpdateData(FALSE);
																																		if (addSW == 1)
																																		{
																																			if (modsd[5] == L"1")
																																			{
																																				datatestDPU[4] = blingmin[3] + blingminf[32];
																																				CMyPublicData::setfunc(37, 16, 69, 1);
																																			}
																																			if (modsd[5] == L"2")
																																			{
																																				datatestDPU[4] = blingmin[7] + blingminf[32];
																																				CMyPublicData::setfunc(37, 16, 69, 1);
																																			}
																																			if (modsd[5] == L"3")
																																			{
																																				datatestDPU[4] = blingmin[11] + blingminf[32];
																																				CMyPublicData::setfunc(37, 16, 69, 1);
																																			}
																																		}
																																		if (addSW == 2)
																																		{
																																			if (modsd[5] == L"1")
																																			{
																																				datatestDPU[4] = blingmin[3] + blingminf[32];
																																				CMyPublicData::setfunc(37, 16, 356, 1);
																																			}
																																			if (modsd[5] == L"2")
																																			{
																																				datatestDPU[4] = blingmin[7] + blingminf[32];
																																				CMyPublicData::setfunc(37, 16, 356, 1);
																																			}
																																			if (modsd[5] == L"3")
																																			{
																																				datatestDPU[4] = blingmin[11] + blingminf[32];
																																				CMyPublicData::setfunc(37, 16, 356, 1);
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
																																			CMyPublicData::calculate(m_double34, blingminf, 33, dlg, 10, 0);
																																			UpdateData(FALSE);
																																			if (addSW == 1)
																																			{
																																				if (modsd[7] == L"1")
																																				{
																																					datatestDPU[4] = blingmin[3] + blingminf[33];
																																					CMyPublicData::setfunc(39, 16, 69, 1);
																																				}
																																				if (modsd[7] == L"2")
																																				{
																																					datatestDPU[4] = blingmin[7] + blingminf[33];
																																					CMyPublicData::setfunc(39, 16, 69, 1);
																																				}
																																				if (modsd[7] == L"3")
																																				{
																																					datatestDPU[4] = blingmin[11] + blingminf[33];
																																					CMyPublicData::setfunc(39, 16, 69, 1);
																																				}
																																			}
																																			if (addSW == 2)
																																			{
																																				if (modsd[7] == L"1")
																																				{
																																					datatestDPU[4] = blingmin[3] + blingminf[33];
																																					CMyPublicData::setfunc(39, 16, 356, 1);
																																				}
																																				if (modsd[7] == L"2")
																																				{
																																					datatestDPU[4] = blingmin[7] + blingminf[33];
																																					CMyPublicData::setfunc(39, 16, 356, 1);
																																				}
																																				if (modsd[7] == L"3")
																																				{
																																					datatestDPU[4] = blingmin[11] + blingminf[33];
																																					CMyPublicData::setfunc(39, 16, 356, 1);
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
																																				CMyPublicData::calculate(m_double35, blingminf, 34, dlg, 10, 0);
																																				UpdateData(FALSE);
																																				if (addSW == 1)
																																				{
																																					if (modsd[9] == L"1")
																																					{
																																						datatestDPU[4] = blingmin[3] + blingminf[34];
																																						CMyPublicData::setfunc(41, 16, 69, 1);
																																					}
																																					if (modsd[9] == L"2")
																																					{
																																						datatestDPU[4] = blingmin[7] + blingminf[34];
																																						CMyPublicData::setfunc(41, 16, 69, 1);
																																					}
																																					if (modsd[9] == L"3")
																																					{
																																						datatestDPU[4] = blingmin[11] + blingminf[34];
																																						CMyPublicData::setfunc(41, 16, 69, 1);
																																					}
																																				}
																																				if (addSW == 2)
																																				{
																																					if (modsd[9] == L"1")
																																					{
																																						datatestDPU[4] = blingmin[3] + blingminf[34];
																																						CMyPublicData::setfunc(41, 16, 356, 1);
																																					}
																																					if (modsd[9] == L"2")
																																					{
																																						datatestDPU[4] = blingmin[7] + blingminf[34];
																																						CMyPublicData::setfunc(41, 16, 356, 1);
																																					}
																																					if (modsd[9] == L"3")
																																					{
																																						datatestDPU[4] = blingmin[11] + blingminf[34];
																																						CMyPublicData::setfunc(41, 16, 356, 1);
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
																																					CMyPublicData::calculate(m_double36, blingminf, 35, dlg, 10, 0);
																																					UpdateData(FALSE);
																																					if (addSW == 1)
																																					{
																																						if (modsd[11] == L"1")
																																						{
																																							datatestDPU[4] = blingmin[3] + blingminf[35];
																																							CMyPublicData::setfunc(43, 16, 69, 1);
																																						}
																																						if (modsd[11] == L"2")
																																						{
																																							datatestDPU[4] = blingmin[7] + blingminf[35];
																																							CMyPublicData::setfunc(43, 16, 69, 1);
																																						}
																																						if (modsd[11] == L"3")
																																						{
																																							datatestDPU[4] = blingmin[11] + blingminf[35];
																																							CMyPublicData::setfunc(43, 16, 69, 1);
																																						}
																																					}
																																					if (addSW == 2)
																																					{
																																						if (modsd[11] == L"1")
																																						{
																																							datatestDPU[4] = blingmin[3] + blingminf[35];
																																							CMyPublicData::setfunc(43, 16, 356, 1);
																																						}
																																						if (modsd[11] == L"2")
																																						{
																																							datatestDPU[4] = blingmin[7] + blingminf[35];
																																							CMyPublicData::setfunc(43, 16,356, 1);
																																						}
																																						if (modsd[11] == L"3")
																																						{
																																							datatestDPU[4] = blingmin[11] + blingminf[35];
																																							CMyPublicData::setfunc(43, 16, 356, 1);
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
																																						CMyPublicData::calculate(m_double37, blingminf, 36, dlg, 10, 0);
																																						UpdateData(FALSE);
																																						if (addSW == 1)
																																						{
																																							if (modsd[13] == L"1")
																																							{
																																								datatestDPU[4] = blingmin[3] + blingminf[36];
																																								CMyPublicData::setfunc(45, 16, 69, 1);
																																							}
																																							if (modsd[13] == L"2")
																																							{
																																								datatestDPU[4] = blingmin[7] + blingminf[36];
																																								CMyPublicData::setfunc(45, 16, 69, 1);
																																							}
																																							if (modsd[13] == L"3")
																																							{
																																								datatestDPU[4] = blingmin[11] + blingminf[36];
																																								CMyPublicData::setfunc(45, 16, 69, 1);
																																							}
																																						}
																																						if (addSW == 2)
																																						{
																																							if (modsd[13] == L"1")
																																							{
																																								datatestDPU[4] = blingmin[3] + blingminf[36];
																																								CMyPublicData::setfunc(45, 16, 356, 1);
																																							}
																																							if (modsd[13] == L"2")
																																							{
																																								datatestDPU[4] = blingmin[7] + blingminf[36];
																																								CMyPublicData::setfunc(45, 16, 356, 1);
																																							}
																																							if (modsd[13] == L"3")
																																							{
																																								datatestDPU[4] = blingmin[11] + blingminf[36];
																																								CMyPublicData::setfunc(45, 16, 356, 1);
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
																																							CMyPublicData::calculate(m_double38, blingminf, 37, dlg, 10, 0);
																																							UpdateData(FALSE);
																																							if (addSW == 1)
																																							{
																																								if (modsd[15] == L"1")
																																								{
																																									datatestDPU[4] = blingmin[3] + blingminf[37];
																																									CMyPublicData::setfunc(47, 16, 69, 1);
																																								}
																																								if (modsd[15] == L"2")
																																								{
																																									datatestDPU[4] = blingmin[7] + blingminf[37];
																																									CMyPublicData::setfunc(47, 16, 69, 1);
																																								}
																																								if (modsd[15] == L"3")
																																								{
																																									datatestDPU[4] = blingmin[11] + blingminf[37];
																																									CMyPublicData::setfunc(47, 16, 69, 1);
																																								}
																																							}
																																							if (addSW == 2)
																																							{
																																								if (modsd[15] == L"1")
																																								{
																																									datatestDPU[4] = blingmin[3] + blingminf[37];
																																									CMyPublicData::setfunc(47, 16, 356, 1);
																																								}
																																								if (modsd[15] == L"2")
																																								{
																																									datatestDPU[4] = blingmin[7] + blingminf[37];
																																									CMyPublicData::setfunc(47, 16, 356, 1);
																																								}
																																								if (modsd[15] == L"3")
																																								{
																																									datatestDPU[4] = blingmin[11] + blingminf[37];
																																									CMyPublicData::setfunc(47, 16, 356, 1);
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
																																								CMyPublicData::calculate(m_double39, blingminf, 38, dlg, 10, 0);
																																								UpdateData(FALSE);
																																								if (addSW == 1)
																																								{
																																									if (modsd[17] == L"1")
																																									{
																																										datatestDPU[4] = blingmin[3] + blingminf[38];
																																										CMyPublicData::setfunc(49, 16, 69, 1);
																																									}
																																									if (modsd[17] == L"2")
																																									{
																																										datatestDPU[4] = blingmin[7] + blingminf[38];
																																										CMyPublicData::setfunc(49, 16, 69, 1);
																																									}
																																									if (modsd[17] == L"3")
																																									{
																																										datatestDPU[4] = blingmin[11] + blingminf[38];
																																										CMyPublicData::setfunc(49, 16, 69, 1);
																																									}
																																								}
																																								if (addSW == 2)
																																								{
																																									if (modsd[17] == L"1")
																																									{
																																										datatestDPU[4] = blingmin[3] + blingminf[38];
																																										CMyPublicData::setfunc(49, 16, 356, 1);
																																									}
																																									if (modsd[17] == L"2")
																																									{
																																										datatestDPU[4] = blingmin[7] + blingminf[38];
																																										CMyPublicData::setfunc(49, 16, 356, 1);
																																									}
																																									if (modsd[17] == L"3")
																																									{
																																										datatestDPU[4] = blingmin[11] + blingminf[38];
																																										CMyPublicData::setfunc(49, 16, 356, 1);
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
																																									CMyPublicData::calculate(m_double40, blingminf, 39, dlg, 10, 0);
																																									UpdateData(FALSE);
																																									if (addSW == 1)
																																									{
																																										if (modsd[19] == L"1")
																																										{
																																											datatestDPU[4] = blingmin[3] + blingminf[39];
																																											CMyPublicData::setfunc(51, 16, 69, 1);
																																										}
																																										if (modsd[19] == L"2")
																																										{
																																											datatestDPU[4] = blingmin[7] + blingminf[39];
																																											CMyPublicData::setfunc(51, 16, 69, 1);
																																										}
																																										if (modsd[19] == L"3")
																																										{
																																											datatestDPU[4] = blingmin[11] + blingminf[39];
																																											CMyPublicData::setfunc(51, 16, 69, 1);
																																										}
																																									}
																																									if (addSW == 2)
																																									{
																																										if (modsd[19] == L"1")
																																										{
																																											datatestDPU[4] = blingmin[3] + blingminf[39];
																																											CMyPublicData::setfunc(51, 16, 356, 1);
																																										}
																																										if (modsd[19] == L"2")
																																										{
																																											datatestDPU[4] = blingmin[7] + blingminf[39];
																																											CMyPublicData::setfunc(51, 16, 356, 1);
																																										}
																																										if (modsd[19] == L"3")
																																										{
																																											datatestDPU[4] = blingmin[11] + blingminf[39];
																																											CMyPublicData::setfunc(51, 16, 356, 1);
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


void BFEN::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}



void BFEN::ReSize()
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


void BFEN::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(blingminf[0]);
	opx.ModifyNode("num3601", str);
	str = opx.numtoString(blingminf[1]);
	opx.ModifyNode("num3602", str);
	str = opx.numtoString(blingminf[2]);
	opx.ModifyNode("num3603", str);
	str = opx.numtoString(blingminf[3]);
	opx.ModifyNode("num3604", str);
	str = opx.numtoString(blingminf[4]);
	opx.ModifyNode("num3605", str);
	str = opx.numtoString(blingminf[5]);
	opx.ModifyNode("num3606", str);
	str = opx.numtoString(blingminf[6]);
	opx.ModifyNode("num3607", str);
	str = opx.numtoString(blingminf[7]);
	opx.ModifyNode("num3608", str);
	str = opx.numtoString(blingminf[8]);
	opx.ModifyNode("num3609", str);
	str = opx.numtoString(blingminf[9]);
	opx.ModifyNode("num3610", str);
	str = opx.numtoString(blingminf[10]);
	opx.ModifyNode("num3611", str);
	str = opx.numtoString(blingminf[11]);
	opx.ModifyNode("num3612", str);
	str = opx.numtoString(blingminf[12]);
	opx.ModifyNode("num3613", str);
	str = opx.numtoString(blingminf[13]);
	opx.ModifyNode("num3614", str);
	str = opx.numtoString(blingminf[14]);
	opx.ModifyNode("num3615", str);
	str = opx.numtoString(blingminf[15]);
	opx.ModifyNode("num3616", str);
	str = opx.numtoString(blingminf[16]);
	opx.ModifyNode("num3617", str);
	str = opx.numtoString(blingminf[17]);
	opx.ModifyNode("num3618", str);
	str = opx.numtoString(blingminf[18]);
	opx.ModifyNode("num3619", str);
	str = opx.numtoString(blingminf[19]);
	opx.ModifyNode("num3620", str);
	str = opx.numtoString(blingminf[20]);
	opx.ModifyNode("num3621", str);
	str = opx.numtoString(blingminf[21]);
	opx.ModifyNode("num3622", str);
	str = opx.numtoString(blingminf[22]);
	opx.ModifyNode("num3623", str);
	str = opx.numtoString(blingminf[23]);
	opx.ModifyNode("num3624", str);
	str = opx.numtoString(blingminf[24]);
	opx.ModifyNode("num3625", str);
	str = opx.numtoString(blingminf[25]);
	opx.ModifyNode("num3626", str);
	str = opx.numtoString(blingminf[26]);
	opx.ModifyNode("num3627", str);
	str = opx.numtoString(blingminf[27]);
	opx.ModifyNode("num3628", str);
	str = opx.numtoString(blingminf[28]);
	opx.ModifyNode("num3629", str);
	str = opx.numtoString(blingminf[29]);
	opx.ModifyNode("num3630", str);
	str = opx.numtoString(blingminf[30]);
	opx.ModifyNode("num3631", str);
	str = opx.numtoString(blingminf[31]);
	opx.ModifyNode("num3632", str);
	str = opx.numtoString(blingminf[32]);
	opx.ModifyNode("num3633", str);
	str = opx.numtoString(blingminf[33]);
	opx.ModifyNode("num3634", str);
	str = opx.numtoString(blingminf[34]);
	opx.ModifyNode("num3635", str);
	str = opx.numtoString(blingminf[35]);
	opx.ModifyNode("num3636", str);
	str = opx.numtoString(blingminf[36]);
	opx.ModifyNode("num3637", str);
	str = opx.numtoString(blingminf[37]);
	opx.ModifyNode("num3638", str);
	str = opx.numtoString(blingminf[38]);
	opx.ModifyNode("num3639", str);
	str = opx.numtoString(blingminf[39]);
	opx.ModifyNode("num3640", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}



void BFEN::OnBnClickedButton1()
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


void BFEN::OnBnClickedButton2()
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


void BFEN::OnBnClickedButton3()
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
