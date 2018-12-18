// xiangjihuafen.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "xiangjihuafen.h"
#include "afxdialogex.h"
#include "InputDlg.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include "Tip.h"
//#include "ADOConnect.h"
// xiangjihuafen 对话框

IMPLEMENT_DYNAMIC(xiangjihuafen, CDialogEx)

xiangjihuafen::xiangjihuafen(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_XIANGJIHUAFEN_DIALOG, pParent)
	, m_s(xiangji[0])
	, m_e(xiangji[1])
	, m_l(xiangji[2])
	,flag(1)
{
	//m_alldata[1024] = { 0 };//为什么会导致xiangji[2]为0
}

xiangjihuafen::~xiangjihuafen()
{
}

void xiangjihuafen::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_ctllist);
	//  DDX_Text(pDX, IDC_EDIT1, m_double1);
	//  DDX_Text(pDX, IDC_EDIT2, m_double2);
	//  DDX_Text(pDX, IDC_EDIT3, m_double3);
	//  DDX_Text(pDX, IDC_EDIT3, m_double3);
	//  DDX_Text(pDX, IDC_EDIT1, m_s);
	//  DDX_Text(pDX, IDC_EDIT2, m_e);
	DDX_Text(pDX, IDC_EDIT3, m_l);
	DDX_Text(pDX, IDC_EDIT1, m_s);
	DDX_Text(pDX, IDC_EDIT2, m_e);
	DDX_Control(pDX, IDC_COMBO1, m_combo1);
}


BEGIN_MESSAGE_MAP(xiangjihuafen, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &xiangjihuafen::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &xiangjihuafen::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &xiangjihuafen::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &xiangjihuafen::OnBnClickedButton4)
	ON_BN_CLICKED(IDCANCEL, &xiangjihuafen::OnBnClickedCancel)
	ON_WM_SIZE()
END_MESSAGE_MAP()


// xiangjihuafen 消息处理程序


BOOL xiangjihuafen::OnInitDialog()
{

	CDialogEx::OnInitDialog();
	UpdateData(TRUE);
	const char* yuyan;
	CString cstr;
	opXML opx(lang);
	opx.QueryNode_Text("num3601", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC1)->SetWindowText(cstr);
	opx.QueryNode_Text("num3602", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC2)->SetWindowText(cstr);
	opx.QueryNode_Text("num3603", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_STATIC3)->SetWindowText(cstr);
	opx.QueryNode_Text("num3604", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(cstr);
	opx.QueryNode_Text("num3605", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(cstr);
	opx.QueryNode_Text("num3606", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(cstr);
	opx.QueryNode_Text("num3607", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(cstr);
	opx.QueryNode_Text("num3608", yuyan);
	cstr = opx.UTF8ToUnicode(yuyan);
	GetDlgItem(IDCANCEL)->SetWindowText(cstr);
	opx.SaveFile();
	UpdateData(FALSE);

	DWORD dwStyle = m_ctllist.GetExtendedStyle();
	dwStyle |= LVS_EX_FULLROWSELECT;
	dwStyle |= LVS_EX_GRIDLINES;
	m_ctllist.SetExtendedStyle(dwStyle);
	m_ctllist.InsertColumn(0, _T("0"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(1, _T("1"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(2, _T("2"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(3, _T("3"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(4, _T("4"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(5, _T("5"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(6, _T("6"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(7, _T("7"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(8, _T("8"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(9, _T("9"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(10, _T("10"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(11, _T("11"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(12, _T("12"), LVCFMT_LEFT, 50);
	m_ctllist.InsertColumn(13, _T("13"), LVCFMT_LEFT, 50);
	/*InsertItem(n, CStr)  是将CStr加入第n行第0列。这里n也是从0开始计的。
	SetItemText(n, line, CStr)  是在第n行第line列加入CStr。但是如果用SetItemText加入第0列的元素是没效果的*/
	for (int i = 0; i < 200; i++)
	{
		
		CString str;
		str.Format(_T("%d"),i );
		m_ctllist.InsertItem(i,  str);
	}
	CString str;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			str.Format(_T("%0.0lf"), xiangji[3+i * 13 + j]);
			m_ctllist.SetItemText(i, j + 1, str);
		}

	}
	m_l = xiangji[2];
	m_combo1.SetCurSel(0);


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
	GetDlgItem(IDC_EDIT3)->SendMessage(EM_SETRECT, 0, (LPARAM)&rect);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void xiangjihuafen::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

	CString	ComChoosed;
	m_combo1.GetLBText(m_combo1.GetCurSel(), ComChoosed);
	if (ComChoosed == "f1")
	{
		flag = 1;
	}
	if (ComChoosed == "b1")
	{
		flag = 2;
	}
	if (ComChoosed == "f2")
	{
		flag = 3;
	}
	if (ComChoosed == "b2")
	{
		flag = 4;
	}
	if (ComChoosed == "f3")
	{
		flag = 5;
	}
	if (ComChoosed == "b3")
	{
		flag = 6;
	}
	if (ComChoosed == "f4")
	{
		flag = 7;
	}
	if (ComChoosed == "b4")
	{
		flag = 8;
	}
	if (ComChoosed == "f5")
	{
		flag = 9;
	}
	if (ComChoosed == "b5")
	{
		flag = 10;
	}
	if (ComChoosed == "f6")
	{
		flag = 11;
	}
	if (ComChoosed == "b6")
	{
		flag = 12;
	}
	if (ComChoosed == "f7")
	{
		flag = 13;
	}
	if (ComChoosed == "b7")
	{
		flag = 14;
	}
	if (ComChoosed == "f8")
	{
		flag = 15;
	}
	if (ComChoosed == "b8")
	{
		flag = 16;
	}
	if (ComChoosed == "f9")
	{
		flag = 17;
	}
	if (ComChoosed == "b9")
	{
		flag = 18;
	}
	if (ComChoosed == "f10")
	{
		flag = 19;
	}
	if (ComChoosed == "b10")
	{
		flag = 20;
	}
	CMyPublicData::setfunc(31 + flag, 16, 256, 91);
	m_Tip = "num6610";//传入节点名
	Tip tip;
	tip.DoModal();
	UpdateData(FALSE);
}

//保存修改
void xiangjihuafen::OnBnClickedButton2()
{
	CString	ComChoosed;
	m_combo1.GetLBText(m_combo1.GetCurSel(), ComChoosed);
	if (ComChoosed == "f1")
	{
		flag = 1;
	}
	if (ComChoosed == "b1")
	{
		flag = 2;
	}
	if (ComChoosed == "f2")
	{
		flag = 3;
	}
	if (ComChoosed == "b2")
	{
		flag = 4;
	}
	if (ComChoosed == "f3")
	{
		flag = 5;
	}
	if (ComChoosed == "b3")
	{
		flag = 6;
	}
	if (ComChoosed == "f4")
	{
		flag = 7;
	}
	if (ComChoosed == "b4")
	{
		flag = 8;
	}
	if (ComChoosed == "f5")
	{
		flag = 9;
	}
	if (ComChoosed == "b5")
	{
		flag = 10;
	}
	if (ComChoosed == "f6")
	{
		flag = 11;
	}
	if (ComChoosed == "b6")
	{
		flag = 12;
	}
	if (ComChoosed == "f7")
	{
		flag = 13;
	}
	if (ComChoosed == "b7")
	{
		flag = 14;
	}
	if (ComChoosed == "f8")
	{
		flag = 15;
	}
	if (ComChoosed == "b8")
	{
		flag = 16;
	}
	if (ComChoosed == "f9")
	{
		flag = 17;
	}
	if (ComChoosed == "b9")
	{
		flag = 18;
	}
	if (ComChoosed == "f10")
	{
		flag = 19;
	}
	if (ComChoosed == "b10")
	{
		flag = 20;
	}
	datatestDPU[4] = 1;
	CMyPublicData::setfunc(31 + flag, 16, 253,1);
	UpdateData(FALSE);
}


void xiangjihuafen::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
}


BOOL xiangjihuafen::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		//CInputDlg dlg;
		//dlg.ValueMax = 65535;
		//dlg.ValueMin = 0;
		//if (dlg.DoModal() == IDOK)
		//{
		//	UpdateData(TRUE);
		//	m_s = _wtof(dlg.ValueShow);
		//	UpdateData(FALSE);
		//	xiangji[0] = m_s;
		//}
		UpdateData(TRUE);
		CInputDlg dlg;
		CMyPublicData::calculate(m_s, xiangji, 0, dlg, 65535, 0);
		UpdateData(FALSE);
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
			CMyPublicData::calculate(m_e, xiangji, 1, dlg, 65535, 0);
			UpdateData(FALSE);
			return TRUE;
		}
		else
		{
			CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT3);
			ASSERT(pEdit && pEdit->GetSafeHwnd());
			if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
			{
				//CInputDlg dlg;
				//dlg.ValueMax = 65535;
				//dlg.ValueMin = 0;
				//if (dlg.DoModal() == IDOK)
				//{
				//	UpdateData(TRUE);
				//	m_l = _wtof(dlg.ValueShow);
				//	UpdateData(FALSE);
				//	xiangji[2] = m_l;
				//}
				UpdateData(TRUE);
				CInputDlg dlg;
				CMyPublicData::calculateint(m_l, xiangji, 2, dlg, 65535, 0);
				UpdateData(FALSE);
				return TRUE;
			}
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


void xiangjihuafen::OnBnClickedButton4()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	//calculateavarage(m_double1, m_double2, m_double3);
	int m_alldata[1024] = { 0 };
	//m_alldata[0] = m_s + floor((m_e - m_s) / m_l);
	//for (int i = m_l; 0 < i; i--)
	//{
	//	m_alldata[m_l - i + 1] = m_alldata[m_l - i] + floor((m_e - m_alldata[m_l - i]) / i);
	//}
	//m_alldata[0] = m_s;// + floor((m_e - m_s) / m_l);
	for (int i = 0; i < m_l + 1; i++)
	{
		//m_alldata[m_l - i + 1] = m_alldata[m_l - i] + round((m_e - m_alldata[m_l - i]) / i);
		m_alldata[i] = m_s + floor(i*(m_e - m_s) / m_l);
	}
	for (int i = m_l; i < 91; i++)
	{
		m_alldata[i] = m_e;
	}
	CString str;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			str.Format(_T("%d"), m_alldata[i * 13 + j]);
			m_ctllist.SetItemText(i, j + 1, str);
		}

	}
	for (int i = 0; i < 91; i++)
	{
		datatestDPU[i + 4] = m_alldata[i];
		xiangji[3 + i] = m_alldata[i];
	}
	UpdateData(FALSE);
}

double xiangjihuafen::round(double r)
{
	return (r > 0.0) ? floor(r + 0.5) : ceil(r - 0.5);
}

void xiangjihuafen::calculateavarage(double s, double e, int l)
{
	//double m_alldata[1024] = { 0 };
	//m_alldata[0] = s + floor((e - s) / l);
	//for (int i = l; 0 < i; i--)
	//{
	//	m_alldata[l - i + 1] = m_alldata[l - i] + floor((e - m_alldata[l - i]) / i);
	//}
	//for (int i = l; i < 91; i++)
	//{
	//	m_alldata[i] = m_double2;
	//}
	//m_alldata[0] = s + floor((e - s) / 63);
	//for (int i = 63; 0 < i; i--)
	//{
	//	m_alldata[63 - i + 1] = m_alldata[63 - i] + floor((e - m_alldata[63 - i]) / i);
	//}
	//for (int i = 63; i < 91; i++)
	//{
	//	m_alldata[i] = m_double2;
	//}
}

void xiangjihuafen::OnBnClickedCancel()
{
	//// TODO: 在此添加控件通知处理程序代码
	
	string str;
	opXML opx("lasttime.xml");
	str = opx.numtoString(xiangji[0]);
	opx.ModifyNode("num1901", str);
	str = opx.numtoString(xiangji[1]);
	opx.ModifyNode("num1902", str);
	str = opx.numtoString(xiangji[2]);
	opx.ModifyNode("num1903", str);
	str = opx.numtoString(xiangji[3]);
	opx.ModifyNode("num1904", str);
	str = opx.numtoString(xiangji[4]);
	opx.ModifyNode("num1905", str);
	str = opx.numtoString(xiangji[5]);
	opx.ModifyNode("num1906", str);
	str = opx.numtoString(xiangji[6]);
	opx.ModifyNode("num1907", str);
	str = opx.numtoString(xiangji[7]);
	opx.ModifyNode("num1908", str);
	str = opx.numtoString(xiangji[8]);
	opx.ModifyNode("num1909", str);
	str = opx.numtoString(xiangji[9]);
	opx.ModifyNode("num1910", str);
	str = opx.numtoString(xiangji[10]);
	opx.ModifyNode("num1911", str);
	str = opx.numtoString(xiangji[11]);
	opx.ModifyNode("num1912", str);
	str = opx.numtoString(xiangji[12]);
	opx.ModifyNode("num1913", str);
	str = opx.numtoString(xiangji[13]);
	opx.ModifyNode("num1914", str);
	str = opx.numtoString(xiangji[14]);
	opx.ModifyNode("num1915", str);
	str = opx.numtoString(xiangji[15]);
	opx.ModifyNode("num1916", str);
	str = opx.numtoString(xiangji[16]);
	opx.ModifyNode("num1917", str);
	str = opx.numtoString(xiangji[17]);
	opx.ModifyNode("num1918", str);
	str = opx.numtoString(xiangji[18]);
	opx.ModifyNode("num1919", str);
	str = opx.numtoString(xiangji[19]);
	opx.ModifyNode("num1920", str);
	str = opx.numtoString(xiangji[20]);
	opx.ModifyNode("num1921", str);
	str = opx.numtoString(xiangji[21]);
	opx.ModifyNode("num1922", str);
	str = opx.numtoString(xiangji[22]);
	opx.ModifyNode("num1923", str);
	str = opx.numtoString(xiangji[23]);
	opx.ModifyNode("num1924", str);
	str = opx.numtoString(xiangji[24]);
	opx.ModifyNode("num1925", str);
	str = opx.numtoString(xiangji[25]);
	opx.ModifyNode("num1926", str);
	str = opx.numtoString(xiangji[26]);
	opx.ModifyNode("num1927", str);
	str = opx.numtoString(xiangji[27]);
	opx.ModifyNode("num1928", str);
	str = opx.numtoString(xiangji[28]);
	opx.ModifyNode("num1929", str);
	str = opx.numtoString(xiangji[29]);
	opx.ModifyNode("num1930", str);
	str = opx.numtoString(xiangji[30]);
	opx.ModifyNode("num1931", str);
	str = opx.numtoString(xiangji[31]);
	opx.ModifyNode("num1932", str);
	str = opx.numtoString(xiangji[32]);
	opx.ModifyNode("num1933", str);
	str = opx.numtoString(xiangji[33]);
	opx.ModifyNode("num1934", str);
	str = opx.numtoString(xiangji[34]);
	opx.ModifyNode("num1935", str);
	str = opx.numtoString(xiangji[35]);
	opx.ModifyNode("num1936", str);
	str = opx.numtoString(xiangji[36]);
	opx.ModifyNode("num1937", str);
	str = opx.numtoString(xiangji[37]);
	opx.ModifyNode("num1938", str);
	str = opx.numtoString(xiangji[38]);
	opx.ModifyNode("num1939", str);
	str = opx.numtoString(xiangji[39]);
	opx.ModifyNode("num1940", str);
	str = opx.numtoString(xiangji[40]);
	opx.ModifyNode("num1941", str);
	str = opx.numtoString(xiangji[41]);
	opx.ModifyNode("num1942", str);
	str = opx.numtoString(xiangji[42]);
	opx.ModifyNode("num1943", str);
	str = opx.numtoString(xiangji[43]);
	opx.ModifyNode("num1944", str);
	str = opx.numtoString(xiangji[44]);
	opx.ModifyNode("num1945", str);
	str = opx.numtoString(xiangji[45]);
	opx.ModifyNode("num1946", str);
	str = opx.numtoString(xiangji[46]);
	opx.ModifyNode("num1947", str);
	str = opx.numtoString(xiangji[47]);
	opx.ModifyNode("num1948", str);
	str = opx.numtoString(xiangji[48]);
	opx.ModifyNode("num1949", str);
	str = opx.numtoString(xiangji[49]);
	opx.ModifyNode("num1950", str);
	str = opx.numtoString(xiangji[50]);
	opx.ModifyNode("num1951", str);
	str = opx.numtoString(xiangji[51]);
	opx.ModifyNode("num1952", str);	
	str = opx.numtoString(xiangji[52]);
	opx.ModifyNode("num1953", str);
	str = opx.numtoString(xiangji[53]);
	opx.ModifyNode("num1954", str);
	str = opx.numtoString(xiangji[54]);
	opx.ModifyNode("num1955", str);
	str = opx.numtoString(xiangji[55]);
	opx.ModifyNode("num1956", str);
	str = opx.numtoString(xiangji[56]);
	opx.ModifyNode("num1957", str);
	str = opx.numtoString(xiangji[57]);
	opx.ModifyNode("num1958", str);
	str = opx.numtoString(xiangji[58]);
	opx.ModifyNode("num1959", str);
	str = opx.numtoString(xiangji[59]);
	opx.ModifyNode("num1960", str);
	str = opx.numtoString(xiangji[60]);
	opx.ModifyNode("num1961", str);
	str = opx.numtoString(xiangji[61]);
	opx.ModifyNode("num1962", str);
	str = opx.numtoString(xiangji[62]);
	opx.ModifyNode("num1963", str);
	str = opx.numtoString(xiangji[63]);
	opx.ModifyNode("num1964", str);
	str = opx.numtoString(xiangji[64]);
	opx.ModifyNode("num1965", str);
	str = opx.numtoString(xiangji[65]);
	opx.ModifyNode("num1966", str);
	str = opx.numtoString(xiangji[66]);
	opx.ModifyNode("num1967", str);
	str = opx.numtoString(xiangji[67]);
	opx.ModifyNode("num1968", str);
	str = opx.numtoString(xiangji[68]);
	opx.ModifyNode("num1969", str);
	str = opx.numtoString(xiangji[69]);
	opx.ModifyNode("num1970", str);
	str = opx.numtoString(xiangji[70]);
	opx.ModifyNode("num1971", str);
	str = opx.numtoString(xiangji[71]);
	opx.ModifyNode("num1972", str);
	str = opx.numtoString(xiangji[72]);
	opx.ModifyNode("num1973", str);
	str = opx.numtoString(xiangji[73]);
	opx.ModifyNode("num1974", str);
	str = opx.numtoString(xiangji[74]);
	opx.ModifyNode("num1975", str);
	str = opx.numtoString(xiangji[75]);
	opx.ModifyNode("num1976", str);
	str = opx.numtoString(xiangji[76]);
	opx.ModifyNode("num1977", str);
	str = opx.numtoString(xiangji[77]);
	opx.ModifyNode("num1978", str);
	str = opx.numtoString(xiangji[78]);
	opx.ModifyNode("num1979", str);
	str = opx.numtoString(xiangji[79]);
	opx.ModifyNode("num1980", str);
	str = opx.numtoString(xiangji[80]);
	opx.ModifyNode("num1981", str);
	str = opx.numtoString(xiangji[81]);
	opx.ModifyNode("num1982", str);
	str = opx.numtoString(xiangji[82]);
	opx.ModifyNode("num1983", str);
	str = opx.numtoString(xiangji[83]);
	opx.ModifyNode("num1984", str);
	str = opx.numtoString(xiangji[84]);
	opx.ModifyNode("num1985", str);
	str = opx.numtoString(xiangji[85]);
	opx.ModifyNode("num1986", str);
	str = opx.numtoString(xiangji[86]);
	opx.ModifyNode("num1987", str);
	str = opx.numtoString(xiangji[87]);
	opx.ModifyNode("num1988", str);
	str = opx.numtoString(xiangji[88]);
	opx.ModifyNode("num1989", str);
	str = opx.numtoString(xiangji[89]);
	opx.ModifyNode("num1990", str);
	str = opx.numtoString(xiangji[90]);
	opx.ModifyNode("num1991", str);
	str = opx.numtoString(xiangji[91]);
	opx.ModifyNode("num1992", str);
	str = opx.numtoString(xiangji[92]);
	opx.ModifyNode("num1993", str);
	str = opx.numtoString(xiangji[93]);
	opx.ModifyNode("num1994", str);
	str = opx.numtoString(xiangji[94]);
	opx.ModifyNode("num1995", str);
	str = opx.numtoString(xiangji[95]);
	opx.ModifyNode("num1996", str);
	str = opx.numtoString(xiangji[96]);
	opx.ModifyNode("num1997", str);
	str = opx.numtoString(xiangji[97]);
	opx.ModifyNode("num1998", str);
	str = opx.numtoString(xiangji[98]);
	opx.ModifyNode("num1999", str);
	str = opx.numtoString(xiangji[99]);
	opx.ModifyNode("num19100", str);
	opx.SaveFile();
	CDialogEx::OnCancel();
}


void xiangjihuafen::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


void xiangjihuafen::ReSize()
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