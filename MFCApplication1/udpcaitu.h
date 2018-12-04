#pragma once
#include<iostream>
#include<list>
#include<string>
#include<algorithm>
#include <Windows.h>
#include "afxwin.h"
#define UM_RECV   WM_USER+1
#define UM_SEND   WM_USER+2
//#define UM_RECV1  WM_USER + 3;
// udpcaitu 对话框

using namespace std;
class udpcaitu : public CDialogEx
{
	DECLARE_DYNAMIC(udpcaitu)

public:
	udpcaitu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~udpcaitu();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_UDPCAITU_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	LRESULT OnExitThread(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
public:
	SOCKET m_socket;

	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

public:
	afx_msg void OnPaint();
	HANDLE m_hThread;
	int picNum;
	int FlagStart;//标志开关状态
	BOOL m_bExitThread;
	HICON m_hIcon;
	BOOL m_bSaveFile;
	BOOL m_bOneEachTime;
	BOOL m_bCaptureOne;
	DWORD m_dwHeight;
	DWORD m_dwWidth;
	CString m_rFilePath;//文件名
	CString m_strInfo;
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton3();
//	afx_msg void OnBnClickedButton6();
//	afx_msg void OnBnClickedButton7();
//	afx_msg void OnBnClickedButton8();
//	afx_msg void OnBnClickedButton9();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedButton10();
	//	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit1();
	BOOL SaveBmp(HBITMAP hBitmap, CString FileName);
	HBITMAP CopyDCToBitmap(HDC hScrDC, LPRECT lpRect);
	afx_msg void ReSize();
	POINT old;
	int R, G, B;
	int u, v, i;
	double m_u1;
	double m_u2;
	double m_v1;
	double m_v2;
	double m_i1;
	double m_i2;
	afx_msg void OnBnClickedButton5();
	CComboBox m_combox1;
	afx_msg void OnBnClickedCancel();
};
