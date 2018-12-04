#pragma once
#include "InputDlg.h"
#include "stdafx.h"
#include <stdio.h>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib") 

class CMyPublicData
{
public:
	static void CMyPublicData::add(double& fd,double alld[1024],int i, int max, int min);
	static void CMyPublicData::reduce(double& fd, double alld[1024], int i, int max, int min);
	static void CMyPublicData::calculate(double& fd, double alld[1024], int i,CInputDlg& dlg,int max,int min);
	static void CMyPublicData::calculateint(int& fd, double alld[1024], int i, CInputDlg& dlg, int max, int min);
	static int CMyPublicData::MySocketUDP();
	static void CMyPublicData::ModbusInit(CString ComChoosed1);
	static void CMyPublicData::setfunc(uint16_t sl, uint16_t func, uint16_t ad, uint16_t nb);
	static int CMyPublicData::readholdreg();
	static int CMyPublicData::revholdreg();
	static int CMyPublicData::writeholdreg();
	static void CMyPublicData::inituint16_t(uint16_t data[200]);
	static void CMyPublicData::bit_set(int sl, int ad, int bit_ad, bool bit_flag);
	static bool	 CMyPublicData::bit_read(int sl, int ad, int bit_ad);
	static void CMyPublicData::initzhanhao(int zhanhao[1024]);
	static void CMyPublicData::readXML(string str);
	static void CMyPublicData::writerXML(string strXML);
};
