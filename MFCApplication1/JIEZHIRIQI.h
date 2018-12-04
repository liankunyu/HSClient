#pragma once


// JIEZHIRIQI 对话框

class JIEZHIRIQI : public CDialogEx
{
	DECLARE_DYNAMIC(JIEZHIRIQI)

public:
	JIEZHIRIQI(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~JIEZHIRIQI();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_JIEZHIRIQI_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	string numtoString(double x);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	CString m_cstring1;
	CString m_cstring2;
	CString m_cstring3;
	afx_msg void OnBnClickedButton4();
	virtual BOOL OnInitDialog();
//	CString m_cstr;
	int     tmp[10] = {0,0,0,0,0,0,0,0,0,0};
	CString temp[10] = { L"2",L"0",L"1",L"8",L"0",L"1",L"0",L"1",L"1",L"1" };
	CString CSnum[20] = { L"0",L"1",L"2",L"3",L"4",L"5", L"6", L"7", L"8", L"9" };
	CString CSstr[20] = { L"L",L"K",L"Y",L"B",L"I",L"E", L"V", L"O", L"T", L"Q" };
	CString Sstr[20] = { L"C",L"N",L"M",L"H",L"U",L"X", L"L", L"S", L"R", L"J" };  //客户编号对应的字母
	CString m_cstr;
	afx_msg void OnBnClickedButton5();
	CString m_cs;
	CString m_cstr2;
	CString m_cstr3;
};
