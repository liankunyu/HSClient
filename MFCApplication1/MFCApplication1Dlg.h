
// MFCApplication1Dlg.h : ͷ�ļ�
//
#pragma once
#include "MyPublicData.h"
#include "afxwin.h"
#include "afxbutton.h"
//#define UM_RECV   WM_USER+1
// CMFCApplication1Dlg �Ի���
class CMFCApplication1Dlg : public CDialogEx
{
// ����
public:
	CMFCApplication1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	POINT old;
	HICON m_hIcon;
	HICON m_IconRed;
	HICON m_IconGreen;
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//afx_msg LRESULT CMFCApplication1Dlg::OnRecv(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
	afx_msg void ReSize();
public:
	//SOCKET m_socket;
	//BOOL InitSocket(void);//��ʼ���׽���
	afx_msg void OnBnClickedMoshixuanzeButton();
	afx_msg void OnBnClickedLiuliangshedingButton();
	afx_msg void OnBnClickedLingminduButton();
	afx_msg void OnBnClickedFamenceshiButton();
	afx_msg void OnBnClickedMianjishedingButton();
	afx_msg void OnBnClickedYanseminganButton();
	afx_msg void OnBnClickedQinghuishedingButton();
	afx_msg void OnBnClickedTiaoshizhuanyongButton();
	afx_msg void OnSize(UINT nType, int cx, int cy);//ʹ��������Ӧ��С
	afx_msg void OnBnClickedTongxunzhuangtaiButton();
	afx_msg void OnBnClickedChangjianwentiButton();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedKaishida();
	afx_msg void OnBnClickedTingzhida2();
	CMFCButton m_kaishi;
	CMFCButton m_tingzhi;
	int m_Int;
	CString ModelSize;
	CString m_CString;
	int shijiancha(const char* str); //�����ֹ����
	const char* m_guanji;         //�ػ�ʱ��
	double shijiancha1(const char* str);
	//double atoi(const char* str);

	afx_msg void OnBnClickedCancel();
	//	CString m_Edit1;
	//	CStatic m_static1;
	//	CString m_string1;
	//	int m_int1;
	CString Time;
//	afx_msg void OnEnChangeModelsizeEdit();
};