#pragma once


// Mianji 对话框

class Mianji : public CDialogEx
{
	DECLARE_DYNAMIC(Mianji)

public:
	Mianji(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mianji();

// 对话框数据
	enum { IDD = IDD_MIAN_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_double1;
	double m_double2;
	double m_double3;
	double m_double4;
	double m_double5;
	double m_double6;
	double m_double7;
	double m_double8;
	double m_double9;
	double m_double10;
	double m_double11;
	double m_double12;
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton39();
	afx_msg void OnBnClickedButton49();
	afx_msg void OnBnClickedButton41();
	afx_msg void OnBnClickedButton43();
	afx_msg void OnBnClickedButton45();
	afx_msg void OnBnClickedButton47();
	afx_msg void OnBnClickedButton51();
	afx_msg void OnBnClickedButton53();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton50();
	afx_msg void OnBnClickedButton42();
	afx_msg void OnBnClickedButton44();
	afx_msg void OnBnClickedButton46();
	afx_msg void OnBnClickedButton48();
	afx_msg void OnBnClickedButton52();
	afx_msg void OnBnClickedButton54();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton6();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void ReSize();
	POINT old;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedCancel();
	double m_double13;
	double m_double14;
	double m_double15;
	double m_double16;
	double m_double17;
	double m_double18;
	afx_msg void OnBnClickedButton70();
	afx_msg void OnBnClickedButton71();
	afx_msg void OnBnClickedButton73();
	afx_msg void OnBnClickedButton74();
	afx_msg void OnBnClickedButton76();
	afx_msg void OnBnClickedButton77();
	afx_msg void OnBnClickedButton79();
	afx_msg void OnBnClickedButton80();
	afx_msg void OnBnClickedButton82();
	afx_msg void OnBnClickedButton85();
	afx_msg void OnBnClickedButton86();
	afx_msg void OnBnClickedButton87();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton19();
};
