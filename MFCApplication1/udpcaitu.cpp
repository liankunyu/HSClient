// udpcaitu.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "udpcaitu.h"
#include "afxdialogex.h"
#include "Resource.h"
#include <Windows.h>
#include <vector>  
#include <string>  
#include <fstream>  
#include <iostream>
#include <list>
#include <algorithm>
#include <stdlib.h>
#include "InputDlg.h"
#include "MyPublicData.h"
#include "rgbtrans.h"
#pragma once
// udpcaitu �Ի���

#pragma comment(lib, "rgbtrans.lib")
using namespace std;
IMPLEMENT_DYNAMIC(udpcaitu, CDialogEx)
#define WM_EXITTHREAD (WM_USER + 1)
DWORD WINAPI ThreadProc(LPVOID pParam);
udpcaitu::udpcaitu(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_UDPCAITU_DIALOG, pParent)
	, FlagStart(1)
	, m_dwHeight(640)
	, m_dwWidth(640)
	, m_rFilePath(_T("D:\\IMAGEDATA\\"))
	, m_strInfo(_T(""))
	, m_bSaveFile(FALSE)
	, m_bOneEachTime(FALSE)
	, m_bCaptureOne(FALSE)
	, picNum(0)
	, m_u1(255)
	, m_u2(0)
	, m_v1(255)
	, m_v2(0)
	, m_i1(255)
	, m_i2(0)
{
	m_hThread = INVALID_HANDLE_VALUE;
	m_bExitThread = FALSE;
}

udpcaitu::~udpcaitu()
{
}
void udpcaitu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_dwWidth);
	DDX_Text(pDX, IDC_EDIT4, m_rFilePath);
	DDX_Text(pDX, IDC_EDIT3, m_strInfo);
	DDX_Check(pDX, IDC_CHECK1, m_bSaveFile);
	DDX_Check(pDX, IDC_CHECK2, m_bOneEachTime);
	DDX_Text(pDX, IDC_EDIT2, m_u1);
	DDX_Text(pDX, IDC_EDIT7, m_u2);
	DDX_Text(pDX, IDC_EDIT5, m_v1);
	DDX_Text(pDX, IDC_EDIT8, m_v2);
	DDX_Text(pDX, IDC_EDIT6, m_i1);
	DDX_Text(pDX, IDC_EDIT9, m_i2);
	DDX_Control(pDX, IDC_COMBO1, m_combox1);
}


BEGIN_MESSAGE_MAP(udpcaitu, CDialogEx)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON1, &udpcaitu::OnBnClickedButton1)
	ON_MESSAGE(UM_RECV, &udpcaitu::OnExitThread)
	//ON_MESSAGE(UM_SEND, &udpcaitu::OnSend)
	ON_BN_CLICKED(IDC_BUTTON2, &udpcaitu::OnBnClickedButton2)
	ON_WM_CREATE()
	ON_WM_DESTROY()
	ON_WM_PAINT()
	ON_WM_DESTROY()
	ON_BN_CLICKED(IDC_BUTTON4, &udpcaitu::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON3, &udpcaitu::OnBnClickedButton3)
//	ON_BN_CLICKED(IDC_BUTTON6, &udpcaitu::OnBnClickedButton6)
//	ON_BN_CLICKED(IDC_BUTTON7, &udpcaitu::OnBnClickedButton7)
//	ON_BN_CLICKED(IDC_BUTTON8, &udpcaitu::OnBnClickedButton8)
//	ON_BN_CLICKED(IDC_BUTTON9, &udpcaitu::OnBnClickedButton9)
	ON_WM_LBUTTONDOWN()
	ON_BN_CLICKED(IDC_BUTTON10, &udpcaitu::OnBnClickedButton10)
	//	ON_EN_CHANGE(IDC_EDIT1, &udpcaitu::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT1, &udpcaitu::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON5, &udpcaitu::OnBnClickedButton5)
	ON_BN_CLICKED(IDCANCEL, &udpcaitu::OnBnClickedCancel)
END_MESSAGE_MAP()




BOOL udpcaitu::PreTranslateMessage(MSG* pMsg)
{
	// TODO: �ڴ����ר�ô����/����û���
	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1);
	ASSERT(pEdit && pEdit->GetSafeHwnd());
	if (WM_LBUTTONDOWN == pMsg->message && pEdit->GetSafeHwnd() == pMsg->hwnd)
	{
		CInputDlg dlg;
		dlg.ValueMax = 1000;
		dlg.ValueMin = 0;
		UpdateData(TRUE);
		if (dlg.DoModal() == IDOK)
		{
			UpdateData(TRUE);
			m_dwWidth = _wtof(dlg.ValueShow);
			UpdateData(FALSE);
		}
		UpdateData(FALSE);
		return TRUE;
	}
	/*	CRect rect;
		CStatic *p = (CStatic*)GetDC();
		p->GetWindowRect(rect);
		this->ScreenToClient(rect);
		p->MoveWindow(rect.left, rect.top, m_dwWidth, rect.bottom - rect.top);*///���Ŀؼ���С���ƶ��䵽ָ��λ��
	return CDialogEx::PreTranslateMessage(pMsg);
}


BOOL udpcaitu::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

									// TODO: �ڴ���Ӷ���ĳ�ʼ������
	if (!::PathFileExists(_T("D:\\IMAGEDATA\\")))
	{
		::CreateDirectory(_T("D:\\IMAGEDATA\\"), NULL);
	}

	//WSADATA wsaData;
	//WORD sockVersion = MAKEWORD(2, 0);
	//::WSAStartup(sockVersion, &wsaData);
	/***********************************************************
	�����׽��ֿ�
	*************************************************************/
	WORD wVersionRequested;
	WSADATA wsaData;
	int err;

	wVersionRequested = MAKEWORD(2, 2);

	err = WSAStartup(wVersionRequested, &wsaData);
	if (err != 0)
	{
		return FALSE;
	}

	if (LOBYTE(wsaData.wVersion) != 2 ||
		HIBYTE(wsaData.wVersion) != 2)
	{

		WSACleanup();
		return FALSE;
	}
	//CRect rect(330, 7, 970, 647);
	/*m_View.Create(NULL, NULL, WS_VISIBLE | WS_CHILD, rect, this, 401);*/

	UpdateData(FALSE);
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	ModifyStyle(WS_CAPTION, 0, 0);
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);
	//��ʼ������λ��
	CRect rect;
	GetClientRect(&rect);     //ȡ�ͻ�����С    
	old.x = rect.right - rect.left;
	old.y = rect.bottom - rect.top;
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}


void udpcaitu::ReSize()
{
	float fsp[2];
	POINT Newp; //��ȡ���ڶԻ���Ĵ�С  
	CRect recta;
	GetClientRect(&recta);     //ȡ�ͻ�����С    
	Newp.x = recta.right - recta.left;
	Newp.y = recta.bottom - recta.top;
	fsp[0] = (float)Newp.x / old.x;
	fsp[1] = (float)Newp.y / old.y;
	CRect Rect;
	int woc;
	CPoint OldTLPoint, TLPoint; //���Ͻ�  
	CPoint OldBRPoint, BRPoint; //���½�  
	HWND  hwndChild = ::GetWindow(m_hWnd, GW_CHILD);  //�г����пؼ�    
	while (hwndChild)
	{
		woc = ::GetDlgCtrlID(hwndChild);//ȡ��ID  
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
void udpcaitu::OnSize(UINT nType, int cx, int cy)
{
	// TODO: �ڴ˴������Ϣ����������
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: �ڴ˴������Ϣ����������
	if (nType == SIZE_RESTORED || nType == SIZE_MAXIMIZED)
	{
		ReSize();
	}
}


void udpcaitu::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//InitSocket();
	//pWin = GetDlgItem(IDC_DRAW);//��ȡ�ÿؼ���ָ�룬�Ϳ��ԶԸÿؼ�ֱ�Ӳ�����
	UpdateData();
	if (FlagStart == 1)
	{
		m_bExitThread = FALSE;
		m_hThread = ::CreateThread(NULL, 0, ThreadProc, this, 0, NULL);
		GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("Stop"));

		FlagStart = 0;
	}
	else
	{
		//GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("Start"));
		m_bExitThread = TRUE;
		FlagStart = 1;
	}
}

DWORD WINAPI ThreadProc(LPVOID pParam)//�̵߳���������������ѭ���������Բ����߷���������Ϣ
{


	//�洢�ļ�����
	CString tmp;
	CString name;


	udpcaitu* pDlg = (udpcaitu*)pParam;
	CClientDC dc(pDlg);
	CDC memDC;
	memDC.CreateCompatibleDC(&dc);
	CBitmap bmp;
	bmp.CreateCompatibleBitmap(&dc, pDlg->m_dwWidth, 640);
	memDC.SelectObject(&bmp);
	//��ȡ�ؼ���С��λ��
	CRect rectCtrl;
	CStatic *p1 = (CStatic*)pDlg->GetDlgItem(IDC_EDIT4);
	//p->MoveWindow(100, 100, 100, 100);//���Ŀؼ���С���ƶ��䵽ָ��λ��
	p1->GetWindowRect(rectCtrl);
	pDlg->ScreenToClient(rectCtrl);

	BITMAPINFO bmpInfo;
	bmpInfo.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	bmpInfo.bmiHeader.biWidth = pDlg->m_dwWidth;
	bmpInfo.bmiHeader.biHeight = -640;
	bmpInfo.bmiHeader.biPlanes = 1;
	bmpInfo.bmiHeader.biBitCount = 24;
	bmpInfo.bmiHeader.biCompression = BI_RGB;
	bmpInfo.bmiHeader.biSizeImage = pDlg->m_dwWidth * 640;
	bmpInfo.bmiHeader.biXPelsPerMeter = 3000;
	bmpInfo.bmiHeader.biYPelsPerMeter = 3000;
	bmpInfo.bmiHeader.biClrUsed = 0;
	bmpInfo.bmiHeader.biClrImportant = 0;

	long nLnBytes = (bmpInfo.bmiHeader.biWidth * 3 + 3) / 4 * 4;
	BYTE *pData = new BYTE[nLnBytes*abs(bmpInfo.bmiHeader.biHeight)];
	memset(pData, 246, nLnBytes*abs(bmpInfo.bmiHeader.biHeight));
	SetDIBits(dc.m_hDC, bmp, 0, abs(bmpInfo.bmiHeader.biHeight), pData, &bmpInfo, DIB_RGB_COLORS);


	//dc->BitBlt(rectCanvas.left, rectCanvas.top, rectCanvas.Width(), rectCanvas.Height(), &MemDC, 0, 0, SRCCOPY);
	//dc.BitBlt(600, 80, bmpInfo.bmiHeader.biWidth, abs(bmpInfo.bmiHeader.biHeight), &memDC, 0, 0, SRCCOPY);
	dc.BitBlt(rectCtrl.left + rectCtrl.Width() + 10, rectCtrl.top, bmpInfo.bmiHeader.biWidth, abs(bmpInfo.bmiHeader.biHeight), &memDC, 0, 0, SRCCOPY);
	/**********/
	HBITMAP hBmp;//��������ͼƬ
	CRect rect(rectCtrl.left + rectCtrl.Width() + 10, rectCtrl.top, rectCtrl.left + rectCtrl.Width() + 10 + pDlg->m_dwWidth, rectCtrl.top + pDlg->m_dwHeight);
	LPRECT lprt = &rect;

	SOCKET RecveSocket = ::socket(AF_INET, SOCK_DGRAM, 0);//����UDP�׽���  

	SOCKADDR_IN sin;
	sin.sin_family = AF_INET;
	sin.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	sin.sin_port = ::htons(60002);//�˿ں�����  
	if (::bind(RecveSocket, (sockaddr*)&sin, sizeof(sin)) == SOCKET_ERROR)//��ַ���׽��ְ�  
	{
		cout << "�׽��ְ󶨴���" << endl;
		return 0;
	}
	/*������ѭ�������������ݲ��֣���ͨ�������ʱ��
	**�������ݲ��ܼ�ʱ�������̣߳��������Ϣ�ĸ���
	**���Դ˴�������һ����λ����RecveBuffer���൱��
	**20������Ϊ4096�Ļ�������������Ӧͨ�����ϴ�������
	*/
	SOCKADDR_IN addrRemote;
	int nLen = sizeof(addrRemote);
	int recvcount = 0;
	unsigned char *buf = new unsigned char[1024 * 1024 * 4];
	unsigned char *mem = new unsigned char[pDlg->m_dwHeight * pDlg->m_dwWidth * 4 * 2];
	int len;
	int newline;
	int endline;
	int total;
	int num = 0;
	int recv = 0;
	int last = 0;
	int memlen = pDlg->m_dwHeight * pDlg->m_dwWidth * 4 * 2;
	//int memlen1 = rect.Width() * rect.Height() * 4 * 2;
	while (!pDlg->m_bExitThread)
	{
		len = ::recvfrom(RecveSocket, (char*)buf, 1024 * 1024 * 4, 0, (sockaddr*)&addrRemote, &nLen);
		//sendto(RecveSocket, RecveBuffer[recvcount], 4096, 0, (sockaddr*)&addrRemote, nLen);
		if (len < 0)
		{
			continue;
		}
		if (recv + len < memlen)
		{
			memcpy(mem + recv, buf, len);
			recv += len;
			continue;
		}
		memcpy(mem + recv, buf, memlen - recv);
		recv = 0;

		endline = 0;
		total = 0;
		while (total + 4 < memlen)
		{
			if (mem[total] == 0xff && mem[total + 1] == 0xff && mem[total + 2] == 0xff && mem[total + 3] == 0xff)
			{
				break;
			}
			++total;
		}
		total += 4;
		if (total >= memlen)
		{
			continue;
		}

		if (last == 0)
		{
			//cvZero(img);
		}

		for (int j = last; j < pDlg->m_dwHeight; j++)
		{
			newline = 0;
			for (int i = 0; i < pDlg->m_dwWidth; i++)
			{
				if (total + 4 > memlen)
				{
					endline = 1;
					break;
				}
				if (mem[total] == 0xff && mem[total + 1] == 0xff && mem[total + 2] == 0xff && mem[total + 3] == 0xff)
				{
					newline = 1;
					break;
				}
				else
				{
					/*b*/	pData[j * nLnBytes + i * 3 + 3] = mem[total + 2];//CV_IMAGE_ELEM(img, uchar, j, 3 * i)
					/*g*/	pData[j * nLnBytes + i * 3 + 1] = mem[total + 1];
					/*r*/	pData[j * nLnBytes + i * 3 + 2] = mem[total];
					total += 4;
				}
			}
			++last;
			if (endline)
			{
				break;
			}
			if (newline)
			{
				total += 4;
				if (total >= memlen)
				{
					break;
				}
			}
			else
			{
				while (total + 4 < memlen)
				{
					if (mem[total] == 0xff && mem[total + 1] == 0xff && mem[total + 2] == 0xff && mem[total + 3] == 0xff)
					{
						break;
					}
					++total;
				}
				total += 4;
				if (total >= memlen)
				{
					break;
				}
			}
		}

		if (last == pDlg->m_dwHeight)
		{
			SetDIBits(dc.m_hDC, bmp, 0, abs(bmpInfo.bmiHeader.biHeight), pData, &bmpInfo, DIB_RGB_COLORS);
			dc.BitBlt(rectCtrl.left + rectCtrl.Width() + 10, rectCtrl.top, bmpInfo.bmiHeader.biWidth, abs(bmpInfo.bmiHeader.biHeight), &memDC, 0, 0, SRCCOPY);
			if (pDlg->m_bSaveFile && !pDlg->m_rFilePath.IsEmpty())
			{
				tmp.Format(_T("%d"), num++);
				name = pDlg->m_rFilePath + tmp + _T(".tif");
				hBmp = pDlg->CopyDCToBitmap(dc, lprt);
				pDlg->SaveBmp(hBmp, name);
			}
			if (pDlg->m_bCaptureOne)
			{
				name = pDlg->m_rFilePath + _T("capture.tif");
				hBmp = pDlg->CopyDCToBitmap(dc, lprt);
				pDlg->SaveBmp(hBmp, name);
				//cvSaveImage(pDlg->m_rFilePath + "capture.tif", img);
				pDlg->m_bCaptureOne = FALSE;
			}

			last = 0;

			if (pDlg->m_bOneEachTime && !pDlg->m_rFilePath.IsEmpty())
			{
				tmp.Format(_T("%d"), num++);
				name = pDlg->m_rFilePath + tmp + _T(".tif");
				hBmp = pDlg->CopyDCToBitmap(dc, lprt);
				pDlg->SaveBmp(hBmp, name);
			}
		}
	}

	if (buf != NULL)
	{
		delete[] buf;
	}
	if (mem != NULL)
	{
		delete[] mem;
	}
	if (pData != NULL)
	{
		delete[] pData;
	}
	closesocket(RecveSocket);

	//delete dc;
	//delete memDC;
	//delete bmp;
	//delete pDlg;
	//delete rectCtrl;
	//delete p1;
	////delete bmpInfo;
	////delete nLnBytes;
	//delete hBmp;
	::PostMessage(pDlg->m_hWnd, UM_RECV, 0, 0);

	return 0;
}


void udpcaitu::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if (CMyPublicData::bit_read(10, 9, 8))
	{
		CMyPublicData::bit_set(10, 9, 8, false);
		GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("off"));
	}
	else
	{
		CMyPublicData::bit_set(10, 9, 8, true);
		GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("on"));
	}

}


BOOL udpcaitu::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ����ר�ô����/����û���
	//cs.style |= (WS_CLIPCHILDREN | WS_CLIPSIBLINGS);
	return CDialogEx::PreCreateWindow(cs);
}


void udpcaitu::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// CHookDllTestDlg ��Ϣ�������
LRESULT udpcaitu::OnExitThread(WPARAM wParam, LPARAM lParam)
{
	::WaitForSingleObject(m_hThread, INFINITE);
	::CloseHandle(m_hThread);
	m_hThread = INVALID_HANDLE_VALUE;
	m_bExitThread = FALSE;
	GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("Recv"));
	return 0;
}



void udpcaitu::OnDestroy()
{
	CDialogEx::OnDestroy();

	// TODO: �ڴ˴������Ϣ����������
}


void udpcaitu::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CRect rectCtrl;
	CStatic *p = (CStatic*)GetDlgItem(IDC_EDIT4);
	//p->MoveWindow(100, 100, 100, 100);//���Ŀؼ���С���ƶ��䵽ָ��λ��
	p->GetWindowRect(rectCtrl);
	this->ScreenToClient(rectCtrl);
	HBITMAP hBmp;
	udpcaitu* pDlg = this;
	CClientDC dc(pDlg);
	CRect rect(rectCtrl.left + rectCtrl.Width() + 10, rectCtrl.top, rectCtrl.left + rectCtrl.Width() + 10 + m_dwWidth, rectCtrl.top + m_dwHeight);
	LPRECT lprt = &rect;
	hBmp = CopyDCToBitmap(dc, lprt);
	CString tmp;
	CString name;
	tmp.Format(_T("%d"), picNum++);
	name = _T("E://%d.bmp") + tmp + _T(".tif");
	SaveBmp(hBmp, name);
}


void udpcaitu::OnBnClickedButton3()
{


	CRect rectCtrl;
	CStatic *p = (CStatic*)GetDlgItem(IDC_EDIT4);
	//p->MoveWindow(100, 100, 100, 100);//���Ŀؼ���С���ƶ��䵽ָ��λ��
	p->GetWindowRect(rectCtrl);
	this->ScreenToClient(rectCtrl);
	//������ǰ��ʾ��ͼƬ
	CDC* pDC = this->GetDC();
	CBrush brush(RGB(255, 255, 255));
	CBrush* pOldBrush = pDC->SelectObject(&brush);
	pDC->PatBlt(rectCtrl.left + rectCtrl.Width() + 10, rectCtrl.top, 640, 640, PATCOPY);
	pDC->SelectObject(pOldBrush);

	CFileDialog dlg(TRUE, NULL, NULL, 0, _T("�����ļ� (*.*)|*.*||"), this);
	if (dlg.DoModal() == IDOK)
	{
		m_rFilePath = dlg.GetPathName();
		CImage image;
		image.Load(m_rFilePath);
		image.Draw(GetDC()->m_hDC, CRect(rectCtrl.left + rectCtrl.Width() + 10, rectCtrl.top, rectCtrl.left + rectCtrl.Width() + 10 + image.GetWidth(), rectCtrl.top + image.GetHeight()));
	}
}


//void udpcaitu::OnBnClickedButton6()
//{
//	// TODO: �ڴ���ӿؼ�֪ͨ����������
//	//m_View.SetImage(m_View.m_img);
//}


//void udpcaitu::OnBnClickedButton7()
//{
//	// TODO: �ڴ���ӿؼ�֪ͨ����������
//	//m_View.SetImage(m_View.m_img, 2);
//}


//void udpcaitu::OnBnClickedButton8()
//{
//	// TODO: �ڴ���ӿؼ�֪ͨ����������
//	//m_View.SetImage(m_View.m_img, 4);
//}


//void udpcaitu::OnBnClickedButton9()
//{
//	// TODO: �ڴ���ӿؼ�֪ͨ����������
//	//m_View.SetImage(m_View.m_img, 8);
//}


void udpcaitu::OnLButtonDown(UINT nFlags, CPoint point)
{
	CRect rectCtrl;
	CStatic *p1 = (CStatic*)GetDlgItem(IDC_EDIT4);
	//p->MoveWindow(100, 100, 100, 100);//���Ŀؼ���С���ƶ��䵽ָ��λ��
	p1->GetWindowRect(rectCtrl);
	this->ScreenToClient(rectCtrl);

	if (rectCtrl.right + 10 < point.x &&point.x < m_dwWidth + rectCtrl.right + 10 && rectCtrl.top < point.y&&point.y < m_dwHeight + rectCtrl.top)//(rect.PtInRect(point))
	{
		m_strInfo.Format(_T("X:%d Y:%d\r\n"), point.x - rectCtrl.right - 10, point.y - rectCtrl.top);
		HDC hDC = ::GetDC(NULL);
		COLORREF color = ::GetPixel(hDC, point.x, point.y);

		R = GetRValue(color);
		G = GetGValue(color);
		B = GetBValue(color);
		u = U_func(R, G, B);
		v = V_func(R, G, B);
		i = W_func(R, G, B);
		m_strInfo.AppendFormat(_T("R:%d G:%d B:%d\r\n"), R, G, B);
		m_strInfo.AppendFormat(_T("U:%d V:%d I:%d\r\n"), u, v, i);
		if (m_u2 < u)
		{
			m_u2 = u;
		}
		if (u < m_u1)
		{
			m_u1 = u;
		}
		if (m_v2 < v)
		{
			m_v2 = v;
		}
		if (v < m_v1)
		{
			m_v1 = v;
		}
		if (m_i2 < i)
		{
			m_i2 = i;
		}
		if (i < m_i1)
		{
			m_i1 = i;
		}
		UpdateData(FALSE);
	}
	CDialogEx::OnLButtonDown(nFlags, point);
}


void udpcaitu::OnBnClickedButton10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString	ComChoosed;
	m_combox1.GetLBText(m_combox1.GetCurSel(), ComChoosed);
		if (ComChoosed == "U1")
		{
			datatestDPU[4] = m_u2;
			datatestDPU[5] = m_u1;
			CMyPublicData::setfunc(photoNum, 16, 83, 2);
		}
		if (ComChoosed == "U2")
		{
			datatestDPU[4] = m_u2;
			datatestDPU[5] = m_u1;
			CMyPublicData::setfunc(photoNum, 16, 89, 2);
		}
		if (ComChoosed == "U3")
		{
			datatestDPU[4] = m_u2;
			datatestDPU[5] = m_u1;
			CMyPublicData::setfunc(photoNum, 16, 91, 2);
		}
		if (ComChoosed == "U4")
		{
			datatestDPU[4] = m_u2;
			datatestDPU[5] = m_u1;
			CMyPublicData::setfunc(photoNum, 16, 93, 2);
		}
		if (ComChoosed == "U5")
		{
			datatestDPU[4] = m_u2;
			datatestDPU[5] = m_u1;
			CMyPublicData::setfunc(photoNum, 16, 95, 2);
		}
		if (ComChoosed == "V1")
		{
			datatestDPU[4] = m_v2;
			datatestDPU[5] = m_v1;
			CMyPublicData::setfunc(photoNum, 16, 85, 2);
		}
		if (ComChoosed == "V2")
		{
			datatestDPU[4] = m_v2;
			datatestDPU[5] = m_v1;
			CMyPublicData::setfunc(photoNum, 16, 97, 2);
		}
		if (ComChoosed == "I1")
		{
			datatestDPU[4] = m_i2;
			datatestDPU[5] = m_i1;
			CMyPublicData::setfunc(photoNum, 16, 87, 2);
		}
		if (ComChoosed == "I2")
		{
			datatestDPU[4] = m_i2;
			datatestDPU[5] = m_i1;
			CMyPublicData::setfunc(photoNum, 16, 99, 2);
		}
		if (ComChoosed == "U5V2I2")
		{
			datatestDPU[4] = m_u2;
			datatestDPU[5] = m_u1;
			CMyPublicData::setfunc(photoNum, 16, 95, 2);
			datatestDPU[4] = m_v2;
			datatestDPU[5] = m_v1;
			CMyPublicData::setfunc(photoNum, 16, 97, 2);
			datatestDPU[4] = m_i2;
			datatestDPU[5] = m_i1;
			CMyPublicData::setfunc(photoNum, 16, 99, 2);
		}

	
}

void udpcaitu::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������


}

BOOL udpcaitu::SaveBmp(HBITMAP hBitmap, CString FileName)
{
	HDC   hDC;
	//��ǰ�ֱ�����ÿ������ռ�ֽ���     
	int   iBits;
	//λͼ��ÿ������ռ�ֽ���     
	WORD  wBitCount;
	//�����ɫ���С��λͼ�������ֽڴ�С��λͼ�ļ���С��д���ļ��ֽ���  
	DWORD dwPaletteSize = 0, dwBmBitsSize = 0, dwDIBSize = 0, dwWritten = 0;
	//λͼ���Խṹ       
	BITMAP   Bitmap;
	//λͼ�ļ�ͷ�ṹ     
	BITMAPFILEHEADER   bmfHdr;
	//λͼ��Ϣͷ�ṹ       
	BITMAPINFOHEADER   bi;
	//ָ��λͼ��Ϣͷ�ṹ         
	LPBITMAPINFOHEADER lpbi;
	//�����ļ��������ڴ�������ɫ����       
	HANDLE  fh, hDib, hPal, hOldPal = NULL;

	//����λͼ�ļ�ÿ��������ռ�ֽ���       
	hDC = CreateDC(_T("DISPLAY"), NULL, NULL, NULL);
	iBits = GetDeviceCaps(hDC, BITSPIXEL) * GetDeviceCaps(hDC, PLANES);
	DeleteDC(hDC);
	if (iBits <= 1)wBitCount = 1;
	else if (iBits <= 4) wBitCount = 4;
	else if (iBits <= 8) wBitCount = 8;
	else wBitCount = 24;

	GetObject(hBitmap, sizeof(Bitmap), (LPSTR)&Bitmap);
	bi.biSize = sizeof(BITMAPINFOHEADER);
	bi.biWidth = Bitmap.bmWidth;
	bi.biHeight = Bitmap.bmHeight;
	bi.biPlanes = 1;
	bi.biBitCount = wBitCount;
	bi.biCompression = BI_RGB;
	bi.biSizeImage = 0;
	bi.biXPelsPerMeter = 0;
	bi.biYPelsPerMeter = 0;
	bi.biClrImportant = 0;
	bi.biClrUsed = 0;

	dwBmBitsSize = ((Bitmap.bmWidth * wBitCount + 31) / 32) * 4 * Bitmap.bmHeight;

	//   Ϊλͼ���ݷ����ڴ�       
	hDib = GlobalAlloc(GHND, dwBmBitsSize + dwPaletteSize + sizeof(BITMAPINFOHEADER));
	lpbi = (LPBITMAPINFOHEADER)GlobalLock(hDib);
	*lpbi = bi;

	//   �����ɫ��         
	hPal = GetStockObject(DEFAULT_PALETTE);
	if (hPal)
	{
		hDC = ::GetDC(NULL);
		//hDC   =   m_pDc->GetSafeHdc();     
		hOldPal = ::SelectPalette(hDC, (HPALETTE)hPal, FALSE);
		RealizePalette(hDC);
	}
	//   ��ȡ�õ�ɫ�����µ�����ֵ       
	GetDIBits(hDC, hBitmap, 0, (UINT)Bitmap.bmHeight, (LPSTR)lpbi + sizeof(BITMAPINFOHEADER)
		+ dwPaletteSize, (BITMAPINFO *)lpbi, DIB_RGB_COLORS);

	//   �ָ���ɫ��         
	if (hOldPal)
	{
		::SelectPalette(hDC, (HPALETTE)hOldPal, TRUE);
		RealizePalette(hDC);
		::ReleaseDC(NULL, hDC);
	}

	//   ����λͼ�ļ�         
	fh = CreateFile(FileName, GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_ALWAYS,
		FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN, NULL);

	if (fh == INVALID_HANDLE_VALUE)
		return FALSE;

	//   ����λͼ�ļ�ͷ       
	bmfHdr.bfType = 0x4D42;   //   ;BM;  
	dwDIBSize = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER) + dwPaletteSize + dwBmBitsSize;
	bmfHdr.bfSize = dwDIBSize;
	bmfHdr.bfReserved1 = 0;
	bmfHdr.bfReserved2 = 0;
	bmfHdr.bfOffBits = (DWORD)sizeof(BITMAPFILEHEADER) + (DWORD)sizeof(BITMAPINFOHEADER) + dwPaletteSize;
	//   д��λͼ�ļ�ͷ  
	WriteFile(fh, (LPSTR)&bmfHdr, sizeof(BITMAPFILEHEADER), &dwWritten, NULL);
	//   д��λͼ�ļ���������  
	WriteFile(fh, (LPSTR)lpbi, dwDIBSize, &dwWritten, NULL);
	//   ���  
	GlobalUnlock(hDib);
	GlobalFree(hDib);
	CloseHandle(fh);

	return TRUE;
}

HBITMAP udpcaitu::CopyDCToBitmap(HDC hScrDC, LPRECT lpRect)
{
	HDC  hMemDC;
	//   ��Ļ���ڴ��豸������     
	HBITMAP hBitmap, hOldBitmap;
	//   λͼ���     
	int  nX, nY, nX2, nY2;
	//   ѡ����������     
	int  nWidth, nHeight;
	//   λͼ��Ⱥ͸߶�     

	//   ȷ��ѡ������Ϊ�վ���     
	if (IsRectEmpty(lpRect))
		return   NULL;

	//   ���ѡ����������     
	nX = lpRect->left;
	nY = lpRect->top;
	nX2 = lpRect->right;
	nY2 = lpRect->bottom;
	nWidth = nX2 - nX;
	nHeight = nY2 - nY;
	//   Ϊ��Ļ�豸�����������ݵ��ڴ��豸������     
	hMemDC = CreateCompatibleDC(hScrDC);
	//   ����һ������Ļ�豸��������ݵ�λͼ,������Ҫ��CreateCompatibleDC���ʹ��     
	hBitmap = CreateCompatibleBitmap(hScrDC, nWidth, nHeight);
	//   ����λͼѡ���ڴ��豸��������     
	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hBitmap);
	//   ����Ļ�豸�����������ڴ��豸��������  
	//   StretchBlt������Դ�����и���һ��λͼ��Ŀ����Σ���Ҫʱ��ĿǰĿ���豸���õ�ģʽ����ͼ��������ѹ����  
	StretchBlt(hMemDC, 0, 0, nWidth, nHeight, hScrDC, nX, nY, nWidth, nHeight, SRCCOPY);  // SRCCOPY  
																						  //BitBlt(hMemDC,   0,   0,   nWidth,   nHeight,hScrDC,   nX,   nY,   SRCCOPY);     
																						  //   �õ���Ļλͼ�ľ��       

	hBitmap = (HBITMAP)SelectObject(hMemDC, hOldBitmap);
	//   ���       

	//DeleteDC(hScrDC);     
	DeleteDC(hMemDC);
	DeleteObject(hOldBitmap);
	//   ����λͼ���     
	return   hBitmap;
}

void udpcaitu::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_u1 = 255;
	m_u2 = 0;
	m_v1 = 255;
	m_v2 = 0;
	m_i1 = 255;
	m_i2 = 0;
	UpdateData(FALSE);
}


void udpcaitu::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
