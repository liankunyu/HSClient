#pragma once


// CMainDlg 对话框

class CMainDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CMainDlg)

public:
	CMainDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMainDlg();

// 对话框数据
	enum { IDD = IDD_MAIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_modelSize;
	CString m_time;
//	afx_msg void OnBnClickedLiuliangshedingButton();
	afx_msg void OnBnClickedLingminduButton();
	afx_msg void OnBnClickedYanseminganButton();
	afx_msg void OnBnClickedMoshixuanzeButton();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedKaishiButton();
	afx_msg void OnBnClickedLiuliangshedingButton();
	afx_msg void OnBnClickedLiuli2222angshedingButton();
	afx_msg void OnBnClickedTongxunzhuangtaiButton();
};
