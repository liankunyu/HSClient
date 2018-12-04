#pragma once
#include "resource.h"
#include "afxwin.h"

// VGAsheding 对话框

class VGAsheding : public CDialogEx
{
	DECLARE_DYNAMIC(VGAsheding)

public:
	VGAsheding(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~VGAsheding();

// 对话框数据
	enum { IDD = IDD_VGA_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_double1_edit1;
	double m_double2_edit2;
	double m_double3_edit18;
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton51();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton64();
	afx_msg void OnBnClickedButton52();
	afx_msg void ReSize();
	POINT old;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton54();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	double m_double_4;
	afx_msg void OnBnClickedButton69();
	afx_msg void OnBnClickedButton39();
	int qian;
	int hou;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton55();
	afx_msg void OnBnClickedButton58();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton49();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton50();
	afx_msg void OnBnClickedButton56();
	afx_msg void OnBnClickedButton59();
	afx_msg void OnBnClickedButton83();
	afx_msg void OnBnClickedButton122();
	afx_msg void OnBnClickedButton42();
	afx_msg void OnBnClickedButton61();
	afx_msg void OnBnClickedButton60();
	afx_msg void OnBnClickedButton66();
	afx_msg void OnBnClickedButton120();
	afx_msg void OnBnClickedButton123();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton11();
	CComboBox m_combo1;
	int flag_num;
};
