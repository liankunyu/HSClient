#pragma once


// Pingyi 对话框

class Pingyi : public CDialogEx
{
	DECLARE_DYNAMIC(Pingyi)

public:
	Pingyi(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Pingyi();

// 对话框数据
	enum { IDD = IDD_PINGYI_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton43();
	double m_double_1_edit;
	double m_double_2_edit;
	double m_double_3_edit;
	double m_double_4_edit;
	double m_double_5_edit;
	double m_double_6_edit;
	double m_double_7_edit;
	double m_double_8_edit;
	double m_double_9_edit;
	double m_double_10_edit;
	double m_double_11_edit;
	double m_double_12_edit;
	afx_msg void OnBnClickedButton45();
	afx_msg void OnBnClickedButton47();
	afx_msg void OnBnClickedButton51();
	afx_msg void OnBnClickedButton53();
	afx_msg void OnBnClickedButton70();
	afx_msg void OnBnClickedButton73();
	afx_msg void OnBnClickedButton76();
	afx_msg void OnBnClickedButton79();
	afx_msg void OnBnClickedButton82();
	afx_msg void OnBnClickedButton86();
	afx_msg void OnBnClickedButton44();
	afx_msg void OnBnClickedButton46();
	afx_msg void OnBnClickedButton48();
	afx_msg void OnBnClickedButton52();
	afx_msg void OnBnClickedButton54();
	afx_msg void OnBnClickedButton71();
	afx_msg void OnBnClickedButton74();
	afx_msg void OnBnClickedButton77();
	afx_msg void OnBnClickedButton80();
	afx_msg void OnBnClickedButton85();
	afx_msg void OnBnClickedButton87();
	afx_msg void OnBnClickedButton1();
	double m_double_13_edit;
	double m_double_14_edit;
	double m_double_15_edit;
	double m_double_16_edit;
	double m_double_17_edit;
	double m_double_18_edit;
	double m_double_19_edit;
	double m_double_20_edit;
	afx_msg void OnBnClickedButton88();
	afx_msg void OnBnClickedButton106();
	afx_msg void OnBnClickedButton108();
	afx_msg void OnBnClickedButton110();
	afx_msg void OnBnClickedButton112();
	afx_msg void OnBnClickedButton114();
	afx_msg void OnBnClickedButton116();
	afx_msg void OnBnClickedButton118();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnBnClickedButton89();
	afx_msg void OnBnClickedButton107();
	afx_msg void OnBnClickedButton109();
	afx_msg void OnBnClickedButton111();
	afx_msg void OnBnClickedButton113();
	afx_msg void OnBnClickedButton115();
	afx_msg void OnBnClickedButton117();
	afx_msg void OnBnClickedButton119();
	afx_msg void ReSize();
	POINT old;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedCancel();
};
