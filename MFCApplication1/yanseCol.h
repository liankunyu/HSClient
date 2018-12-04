#pragma once


// yanseCol 对话框

class yanseCol : public CDialogEx
{
	DECLARE_DYNAMIC(yanseCol)

public:
	yanseCol(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~yanseCol();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_YANSE1_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	POINT old;
	afx_msg void ReSize();
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton57();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton34();
};
