#pragma once


// ENINPUT 对话框

class ENINPUT : public CDialogEx
{
	DECLARE_DYNAMIC(ENINPUT)

public:
	ENINPUT(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ENINPUT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ENGLISHINPUT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedMfcbut1();
	afx_msg void OnBnClickedMfcbut2();
	afx_msg void OnBnClickedMfcbut3();
	afx_msg void OnBnClickedMfcbut4();
	afx_msg void OnBnClickedMfcbut5();
	afx_msg void OnBnClickedMfcbut6();
	afx_msg void OnBnClickedMfcbut7();
	afx_msg void OnBnClickedMfcbut8();
	afx_msg void OnBnClickedMfcbut9();
	afx_msg void OnBnClickedMfcbut0();
	afx_msg void OnBnClickedMfcbut10();
	afx_msg void OnBnClickedMfcbut11();
	CString ValueShow;
	afx_msg void OnBnClickedMfcbutdelet();
	afx_msg void OnBnClickedMfcbut12();
	afx_msg void OnBnClickedMfcbut13();
	afx_msg void OnBnClickedMfcbut14();
	afx_msg void OnBnClickedMfcbut15();
	afx_msg void OnBnClickedMfcbut16();
	afx_msg void OnBnClickedMfcbut17();
	afx_msg void OnBnClickedMfcbut18();
	afx_msg void OnBnClickedMfcbut19();
	afx_msg void OnBnClickedMfcbut20();
	afx_msg void OnBnClickedMfcbut21();
	afx_msg void OnBnClickedMfcbut22();
	afx_msg void OnBnClickedMfcbut23();
	afx_msg void OnBnClickedMfcbutclear();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedMfcbut24();
	afx_msg void OnBnClickedMfcbut25();
	afx_msg void OnBnClickedMfcbut26();
	afx_msg void OnBnClickedMfcbut27();
	afx_msg void OnBnClickedMfcbut28();
	afx_msg void OnBnClickedMfcbut29();
	afx_msg void OnBnClickedMfcbut30();
	afx_msg void OnBnClickedMfcbut31();
	afx_msg void OnBnClickedMfcbut32();
	afx_msg void OnBnClickedMfcbut33();
	afx_msg void OnBnClickedMfcbut34();
	afx_msg void OnBnClickedMfcbut35();
	afx_msg void OnBnClickedMfcbut36();
	afx_msg void OnBnClickedMfcbut37();
	afx_msg void OnBnClickedMfcbut38();
	afx_msg void OnBnClickedMfcbut39();
	afx_msg void OnBnClickedMfcbut40();
	afx_msg void OnBnClickedMfcbut41();
	afx_msg void OnBnClickedMfcbut42();
	afx_msg void OnBnClickedMfcbut43();
	afx_msg void OnBnClickedMfcbutpoint();
	afx_msg void OnBnClickedMfcbut45();
	afx_msg void OnBnClickedMfcbut46();
	afx_msg void OnBnClickedMfcbutpoint6();
	afx_msg void OnBnClickedMfcbut47();
	afx_msg void OnBnClickedMfcbutpoint2();
	afx_msg void OnBnClickedMfcbutpoint3();
	afx_msg void OnBnClickedMfcbutpoint4();
	afx_msg void OnBnClickedMfcbut48();
	afx_msg void OnBnClickedMfcbutpoint5();
	afx_msg void OnBnClickedMfcbut49();
	afx_msg void OnBnClickedMfcbut50();
	virtual BOOL OnInitDialog();
};
