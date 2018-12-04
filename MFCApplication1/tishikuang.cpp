// tishikuang.cpp : 实现文件
//

#include "stdafx.h"
#include "tishikuang.h"
#include "afxdialogex.h"


// tishikuang 对话框

IMPLEMENT_DYNAMIC(tishikuang, CDialogEx)

tishikuang::tishikuang(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_tishikuang, pParent)
{

}

tishikuang::~tishikuang()
{
}

void tishikuang::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(tishikuang, CDialogEx)
END_MESSAGE_MAP()


// tishikuang 消息处理程序
