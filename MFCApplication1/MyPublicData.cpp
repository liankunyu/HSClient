#include "stdafx.h"
#include "MyPublicData.h"
#include "XMLHelper.h"
#include <sstream>
void CMyPublicData::add(double& fd, double alld[1024], int i, int max, int min)
{
	//CString strtemp1;
	fd++;
	if (min <= fd && fd <= max)
	{
		alld[i] = fd;
		//strtemp1.Format(_T("%lf"), liuliang[i]);
		//AfxMessageBox(strtemp1);
	}
	else
	{
		fd--;
		alld[i] = fd;
	}
}

void CMyPublicData::reduce(double& fd, double alld[1024], int i, int max, int min)
{
	//CString strtemp1;
	fd--;
	if (min <= fd && fd <= max)
	{
		alld[i] = fd;
		//strtemp1.Format(_T("%lf"), liuliang[i]);
		//AfxMessageBox(strtemp1);
	}
	else
	{
		fd++;
		alld[i] = fd;
	}
}

void CMyPublicData::calculate(double& fd, double alld[1024], int i, CInputDlg& dlg, int max, int min)
{
	dlg.ValueMax = max;
	dlg.ValueMin = min;
	if (dlg.DoModal() == IDOK)
	{
		fd = _wtof(dlg.ValueShow);
		alld[i] = fd;
	}

}
void CMyPublicData::calculateint(int& fd, double alld[1024], int i, CInputDlg& dlg, int max, int min)
{
	dlg.ValueMax = max;
	dlg.ValueMin = min;
	if (dlg.DoModal() == IDOK)
	{
		fd = _wtof(dlg.ValueShow);
		alld[i] = fd;
	}

}

int CMyPublicData::MySocketUDP()
{
	WSADATA wsaData;
	WORD sockVersion = MAKEWORD(2, 2);
	if (WSAStartup(sockVersion, &wsaData) != 0)
	{
		return 0;
	}

	SOCKET serSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if (serSocket == INVALID_SOCKET)
	{
		//printf("socket error !");
		return 0;
	}

	sockaddr_in serAddr;
	serAddr.sin_family = AF_INET;
	serAddr.sin_port = htons(8888);
	serAddr.sin_addr.S_un.S_addr = INADDR_ANY;
	if (bind(serSocket, (sockaddr *)&serAddr, sizeof(serAddr)) == SOCKET_ERROR)
	{
		//printf("bind error !");
		closesocket(serSocket);
		return 0;
	}

	sockaddr_in remoteAddr;
	int nAddrLen = sizeof(remoteAddr);
	while (true)
	{
		char recvData[255];
		int ret = recvfrom(serSocket, recvData, 255, 0, (sockaddr *)&remoteAddr, &nAddrLen);
		if (ret > 0)
		{
			recvData[ret] = 0x00;
			//printf("接受到一个连接：%s \r\n", inet_ntoa(remoteAddr.sin_addr));
			//printf(recvData);
		}

		char * sendData = "一个来自服务端的UDP数据包\n";
		sendto(serSocket, sendData, strlen(sendData), 0, (sockaddr *)&remoteAddr, nAddrLen);

	}
	closesocket(serSocket);
	WSACleanup();
	return 0;
}

void CMyPublicData::inituint16_t(uint16_t data[200]) {
	for (int a = 0; a < 200; a++)
	{
		data[a] = 0;
	}
}

void CMyPublicData::initzhanhao(int zhanhao[1024]) {
	for (size_t i = 0; i < 512; i++)
	{
		zhanhao[i] = i;
	}
}
#include <iostream>
#include <assert.h>
#include "modbus/modbus-private.h"
#include <string>
#include "stdlib.h"
#include "string.h"
#define UCHAR unsigned char
#define USHORT unsigned short
#define CHAR char

using namespace std;

#pragma comment(lib,"modbus.lib")
#define UCHAR unsigned char
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
static UCHAR datatestrtuDPU[200] = { 0x20,0x03,0x00,0x00,0x00,0x64, };//看起来16进制的原始命令

																	  //=======================          :   address     func   |----num of data----|--------data-------|---LRC---|---END---|
																	  //======== data =========                 32        03             00                 100
																	  //=======================          0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16
UCHAR revdata[] = { 0x3A,0x32,0x30,0x30,0x33,0x30,0x30,0x30,0x30,0x30,0x30,0x36,0x34,0x37,0x39,0x0D,0x0A };
static UCHAR datatestascii[500];
static UCHAR asciiLRC = 0;
static int regs;
int sleeptime = 100;
modbus_t  *ctx;
uint8_t rsp[MODBUS_MAX_ADU_LENGTH];
int temp;
int revLENGTH;

//===================================================================
void CMyPublicData::ModbusInit(CString ComChoosed1)           //初始化COM口
{
	const size_t strsize = (ComChoosed1.GetLength() + 1) * 2; // 宽字符的长度;
	char * pstr = new char[strsize]; //分配空间;
	size_t sz = 0;
	wcstombs_s(&sz, pstr, strsize, ComChoosed1, _TRUNCATE);
	ctx = modbus_new_rtu(pstr, 19200, 'E', 8, 1);
	modbus_connect(ctx);
	ctx->debug = 1;

	struct timeval t;
	t.tv_sec = 0;
	t.tv_usec = 500000;//设置modbus超时时间为500ms，rtu模式 
	modbus_set_response_timeout(ctx, t.tv_sec, t.tv_usec);
	//modbus_set_slave(ctx, 0x20);//温湿度传感器的modbus站地址为0x01；
}

static UCHAR prvucMBCHAR2BIN(UCHAR ucCharacter)
{
	if ((ucCharacter >= '0') && (ucCharacter <= '9'))
	{
		return (UCHAR)(ucCharacter - '0');
	}
	else if ((ucCharacter >= 'A') && (ucCharacter <= 'F'))
	{
		return (UCHAR)(ucCharacter - 'A' + 0x0A);
	}
	else
	{
		return 0xFF;
	}
}

static UCHAR prvucMBBIN2CHAR(UCHAR ucByte)
{
	if (ucByte <= 0x09)
	{
		return (UCHAR)('0' + ucByte);
	}
	else if ((ucByte >= 0x0A) && (ucByte <= 0x0F))
	{
		return (UCHAR)(ucByte - 0x0A + 'A');
	}
	else
	{
		/* Programming error. */
		assert(0);
	}
	return '0';
}

static UCHAR prvucMBLRC(UCHAR * pucFrame, USHORT usLen)
{
	UCHAR           ucLRC = 0;  /* LRC char initialized */

	while (usLen--)
	{
		ucLRC += *pucFrame++;   /* Add buffer byte without carry */
	}

	/* Return twos complement */
	ucLRC = (UCHAR)(-((CHAR)ucLRC));
	return ucLRC;
}

void CMyPublicData::setfunc(uint16_t sl, uint16_t func, uint16_t ad, uint16_t nb)       //下发功能函数
{
	if (!ctx)
	{
		return;
	}
	datatestDPU[0] = { sl };
	datatestDPU[1] = { func };
	datatestDPU[2] = { (uint16_t)(ad - 1) };
	datatestDPU[3] = { nb };
	/*for (int i = 0; i <= 3; i++)
	{
	cout << (int)datatestDPU[i] << "\t";
	}*/
	switch (datatestDPU[1])
	{
	case 3:
		readholdreg();
		fanhuizhi=revholdreg();
		break;
	case 4:
		readholdreg(); //readinputreg();
		revholdreg();
		break;
	case 16:
		writeholdreg();
		fanhuizhi = revholdreg();
		break;
	default:
		//cout << "功能码" << datatestDPU[1] << "未定义！" << endl;
		break;
	}

}

int CMyPublicData::readholdreg()
{
	/*datatestDPU[0] = { 32 };
	datatestDPU[1] = { 3 };
	datatestDPU[2] = { 0 };
	datatestDPU[3] = { 10 };*/
	//if ((datatestDPU[1] != 3) && (datatestDPU[1] != 4))
	//{
	//	//system("cls");
	//	////cout << "功能码非3、4" << endl;
	//	//system("pause");
	//}
	//':' 开头
	datatestascii[0] = ':';

	//LRC

	//prvucMBBIN2CHAR（处理好的二进制）
	datatestascii[1] = (datatestDPU[0] >> 4);
	datatestascii[2] = (datatestDPU[0] & 0x0F);

	datatestascii[3] = (datatestDPU[1] >> 4);
	datatestascii[4] = (datatestDPU[1] & 0x0F);

	datatestascii[5] = ((datatestDPU[2] & 0xF000) >> 12);
	datatestascii[6] = ((datatestDPU[2] & 0x0F00) >> 8);
	datatestascii[7] = ((datatestDPU[2] & 0x00F0) >> 4);
	datatestascii[8] = (datatestDPU[2] & 0x000F);

	datatestascii[9] = ((datatestDPU[3] & 0xF000) >> 12);
	datatestascii[10] = ((datatestDPU[3] & 0x0F00) >> 8);
	datatestascii[11] = ((datatestDPU[3] & 0x00F0) >> 4);
	datatestascii[12] = (datatestDPU[3] & 0x000F);
	//for (int i = 1; i <= 12; i++)
	//{
	//	//cout << (int)datatestascii[i] << "  ";
	//}
	//cout << endl;
	//LRC
	asciiLRC = 0;   //LRC校验
	for (int i = 1; i <= 12; i = i + 2)
	{
		asciiLRC += (UCHAR)((int)(datatestascii[i] * 16) + (int)(datatestascii[i + 1]));
		//cout << i << "\t" << (int)asciiLRC << endl;
	}
	asciiLRC = (UCHAR)(256 - asciiLRC % 256);
	//cout << " asciiLRC Final -> " << (int)(asciiLRC) << endl;
	datatestascii[13] = prvucMBBIN2CHAR((UCHAR)(asciiLRC) >> 4);
	datatestascii[14] = prvucMBBIN2CHAR((UCHAR)(asciiLRC) & 0x0F);

	//编码
	for (int i = 1; i <= 12; i++)
	{
		datatestascii[i] = prvucMBBIN2CHAR(datatestascii[i]);
	}
	//============================================================================================
	datatestascii[15] = '\r';
	datatestascii[16] = '\n';

	return send_msg(ctx, datatestascii, 17);//进去10进制，出来16进制的ascii数值。
}

int CMyPublicData::revholdreg()
{
	modbus_flush(ctx);
	memset(rsp, -1, sizeof(rsp));   //每次将rsp数组全部置-1，清除上一次的返回值

	revLENGTH = modbus_receive_confirmation(ctx, rsp);
	//cout << "revLENGTH: " << revLENGTH << endl;
	//====================
	//cout << "rsp[i] : \n";
	//for (int i = 0; i < revLENGTH - 2; i++)
	//{
	//	//cout << rsp[i] << "  ";
	//}
	//cout << endl;
	//检查是否错误：功能码最高位为1则错误
	if ((rsp[3] == '0') && (datatestDPU[1] != 16))
	{
		for (int i = 7; i < revLENGTH - 2; i += 4)
		{
			databuff[(i - 7) / 4] = ((prvucMBCHAR2BIN(rsp[i]) & 0x0F) << 12) |
				((prvucMBCHAR2BIN(rsp[i + 1]) & 0x0F) << 8) |
				((prvucMBCHAR2BIN(rsp[i + 2]) & 0x0F) << 4) |
				((prvucMBCHAR2BIN(rsp[i + 3])) & 0x0F);
		}
		int datanb = (revLENGTH - 2 - 7) / 4;
		//cout << "datanb:" << datanb << endl;
		//cout << "0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t" << endl;
		//cout << "regs : \t" << regs << endl;
		//for (int i = 0; i < datanb; i++)
		//{
		//	databuff[i] = databuff[i] + 0;
		//}
		//cout << endl;
		return datanb;
	}
	else if ((rsp[3] == '1') && (datatestDPU[1] == 16))
	{
		int temp = (int)(prvucMBCHAR2BIN(datatestascii[3]) * 10) + (int)(prvucMBCHAR2BIN(datatestascii[4]));
		if (temp == datatestDPU[3])
		{
			//cout << "写入" << datatestDPU[3] << "个值成功。" << endl;
			return 1;
		}
		return 0;
	}
	else
	{
		string errstr;
		int errnum = (((prvucMBCHAR2BIN(rsp[5]) & 0x0F) << 4) |
			((prvucMBCHAR2BIN(rsp[6])) & 0x0F));
		//cout << "\n错误码：" << errnum << endl;
		switch (errnum)
		{
		case 1:errstr = "非法功能 \n对于服务器(或从站)来说，询问中接收到的功能码是不可允许的操作。\n"; break;
		case 2:errstr = "非法数据地址 \n对于服务器(或从站)来说，询问中接收到的数据地址是不可允许的地址。\n"; break;
		case 3:errstr = "非法数据值  \n对于服务器(或从站)来说，询问中包括的值是不可允许的值。\n"; break;
		case 4:errstr = "从站设备故障  \n当服务器(或从站)正在设法执行请求的操作时，产生不可重新获得的差错。\n"; break;
		case 5:errstr = "确认  \n与编程命令一起使用。\n"; break;
		case 6:errstr = "从属设备忙  \n与编程命令一起使用。\n"; break;
		case 7:errstr = "存储奇偶性差错  \n与功能码20和21以及参考类型6一起使用，指示扩展文件区不能通过一致性校验。\n"; break;
		case 10:errstr = "不可用网关路径  \n与网关一起使用，指示网关不能为处理请求分配输入端口至输出端口的内部通信路径。\n"; break;
		case 11:errstr = "网关目标设备响应失败  \n与网关一起使用，指示没有从目标设备中获得响应。\n"; break;
		default:
			errstr = "\n未定义错误码。";
			break;
		}
		//cout << "错误码：" << errnum << "\n" << errstr << endl;
		//system("pause");
		return -1;
	}
}

int CMyPublicData::writeholdreg()
{
	datatestDPU[1] = 16;
	//':' 开头
	datatestascii[0] = ':';
	//长度 4*DATA+17  不计2LRC 2结束
	//: 站号 功能  地址 数量 字节数 数据
	int LENGTH = 1 + 2 + 2 + 4 + 4 + 2 + datatestDPU[3] * 4;

	//prvucMBBIN2CHAR（处理好的二进制）
	datatestascii[1] = (datatestDPU[0] >> 4);
	datatestascii[2] = (datatestDPU[0] & 0x0F);

	datatestascii[3] = (16 >> 4);
	datatestascii[4] = (16 & 0x0F);
	//4 ad
	datatestascii[5] = ((datatestDPU[2] & 0x0000F000) >> 12);
	datatestascii[6] = ((datatestDPU[2] & 0x00000F00) >> 8);
	datatestascii[7] = ((datatestDPU[2] & 0x000000F0) >> 4);
	datatestascii[8] = (datatestDPU[2] & 0x0000000F);
	//4 nb
	datatestascii[9] = ((datatestDPU[3] & 0x0000F000) >> 12);
	datatestascii[10] = ((datatestDPU[3] & 0x00000F00) >> 8);
	datatestascii[11] = ((datatestDPU[3] & 0x000000F0) >> 4);
	datatestascii[12] = (datatestDPU[3] & 0x0000000F);
	//2*nb -> byte
	datatestascii[13] = ((datatestDPU[3] * 2 & 0x000000F0) >> 4);
	datatestascii[14] = (datatestDPU[3] * 2 & 0x0000000F);
	for (int i = 0; i < datatestDPU[3]; i++)
	{
		datatestascii[15 + 4 * i] = ((datatestDPU[4 + i] & 0x0000F000) >> 12);
		datatestascii[15 + 4 * i + 1] = ((datatestDPU[4 + i] & 0x00000F00) >> 8);
		datatestascii[15 + 4 * i + 2] = ((datatestDPU[4 + i] & 0x000000F0) >> 4);
		datatestascii[15 + 4 * i + 3] = (datatestDPU[4 + i] & 0x0000000F);
	}
	//for (int i = 1; i < LENGTH; i++)
	//{
	//	//cout << (int)datatestascii[i] << "  ";
	//}
	//cout << endl;
	//LRC
	asciiLRC = 0;
	for (int i = 1; i < LENGTH; i = i + 2)
	{
		asciiLRC += (UCHAR)((int)(datatestascii[i] * 16) + (int)(datatestascii[i + 1]));
		//cout << i << "\t" << (int)asciiLRC << endl;
	}
	asciiLRC = (UCHAR)(256 - asciiLRC % 256);
	//cout << "asciiLRC: " << (int)asciiLRC << endl;
	datatestascii[15 + 4 * datatestDPU[3]] = prvucMBBIN2CHAR((UCHAR)(asciiLRC >> 4));
	datatestascii[15 + 4 * datatestDPU[3] + 1] = prvucMBBIN2CHAR((UCHAR)(asciiLRC & 0x0f));
	//编码
	for (int i = 1; i < LENGTH; i++)
	{
		datatestascii[i] = prvucMBBIN2CHAR(datatestascii[i]);
	}
	//============================================================================================
	datatestascii[LENGTH + 2] = '\r';
	datatestascii[LENGTH + 3] = '\n';

	return send_msg(ctx, datatestascii, LENGTH + 4);//进去10进制，出来16进制的ascii数值。
}

void CMyPublicData::bit_set(int sl, int ad, int bit_ad, bool bit_flag)
{
	//CMyPublicData::setfunc(sl, 3, ad, 1);
	//获得databuff[0]
	if (bit_flag)
	{
		//打开
		datatestDPU[4] = (databuff[0] | ((uint16_t)1 << bit_ad));
	}
	else
	{
		datatestDPU[4] = (databuff[0] & (~((uint16_t)1 << bit_ad)));
	}
	CMyPublicData::setfunc(sl, 16, ad, 1);

}

bool CMyPublicData::bit_read(int sl, int ad, int bit_ad)
{
	CMyPublicData::setfunc(sl, 3, ad, 1);
	//databuff[0] += 1;
	uint16_t temp_read = (databuff[0]) | (uint16_t)(1 << bit_ad);
	if ((databuff[0]) == temp_read)
	{
		//打开
		return	true;
	}
	else
	{
		return false;
	}
}



//主界面读取XML文件中存储的数据信息并下发
void CMyPublicData::readXML(string str)
{
	const char* number1;
	opXML  opx2(str);
	opx2.QueryNode_Text("num0001", number1);
	beijingban[0] = atoi(number1);
	opx2.QueryNode_Text("num0002", number1);
	beijingban[1] = atoi(number1);
	opx2.QueryNode_Text("num0003", number1);
	beijingban[2] = atoi(number1);
	opx2.QueryNode_Text("num0004", number1);
	beijingban[3] = atoi(number1);



	opx2.QueryNode_Text("num0101", number1);
	beijingyuzhisheding[0] = atoi(number1);
	opx2.QueryNode_Text("num0102", number1);
	beijingyuzhisheding[1] = atoi(number1);
	opx2.QueryNode_Text("num0103", number1);
	beijingyuzhisheding[2] = atoi(number1);
	opx2.QueryNode_Text("num0104", number1);
	beijingyuzhisheding[3] = atoi(number1);
	opx2.QueryNode_Text("num0105", number1);
	beijingyuzhisheding[4] = atoi(number1);
	opx2.QueryNode_Text("num0106", number1);
	beijingyuzhisheding[5] = atoi(number1);
	opx2.QueryNode_Text("num0107", number1);
	beijingyuzhisheding[6] = atoi(number1);
	opx2.QueryNode_Text("num0108", number1);
	beijingyuzhisheding[7] = atoi(number1);
	opx2.QueryNode_Text("num0109", number1);
	beijingyuzhisheding[8] = atoi(number1);
	opx2.QueryNode_Text("num0110", number1);
	beijingyuzhisheding[9] = atoi(number1);
	opx2.QueryNode_Text("num0111", number1);
	beijingyuzhisheding[10] = atoi(number1);
	opx2.QueryNode_Text("num0112", number1);
	beijingyuzhisheding[11] = atoi(number1);
	opx2.QueryNode_Text("num0113", number1);
	beijingyuzhisheding[12] = atoi(number1);
	opx2.QueryNode_Text("num0114", number1);
	beijingyuzhisheding[13] = atoi(number1);
	opx2.QueryNode_Text("num0115", number1);
	beijingyuzhisheding[14] = atoi(number1);
	opx2.QueryNode_Text("num0116", number1);
	beijingyuzhisheding[15] = atoi(number1);
	opx2.QueryNode_Text("num0117", number1);
	beijingyuzhisheding[16] = atoi(number1);
	opx2.QueryNode_Text("num0118", number1);
	beijingyuzhisheding[17] = atoi(number1);
	opx2.QueryNode_Text("num0119", number1);
	beijingyuzhisheding[18] = atoi(number1);
	opx2.QueryNode_Text("num0120", number1);
	beijingyuzhisheding[19] = atoi(number1);

	opx2.QueryNode_Text("num0201", number1);
	blingmin[0] = atoi(number1);
	opx2.QueryNode_Text("num0202", number1);
	blingmin[1] = atoi(number1);
	opx2.QueryNode_Text("num0203", number1);
	blingmin[2] = atoi(number1);
	opx2.QueryNode_Text("num0204", number1);
	blingmin[3] = atoi(number1);
	opx2.QueryNode_Text("num0205", number1);
	blingmin[4] = atoi(number1);
	opx2.QueryNode_Text("num0206", number1);
	blingmin[5] = atoi(number1);
	opx2.QueryNode_Text("num0207", number1);
	blingmin[6] = atoi(number1);
	opx2.QueryNode_Text("num0208", number1);
	blingmin[7] = atoi(number1);
	opx2.QueryNode_Text("num0209", number1);
	blingmin[8] = atoi(number1);
	opx2.QueryNode_Text("num0210", number1);
	blingmin[9] = atoi(number1);
	opx2.QueryNode_Text("num0211", number1);
	blingmin[10] = atoi(number1);
	opx2.QueryNode_Text("num0212", number1);
	blingmin[11] = atoi(number1);



	opx2.QueryNode_Text("num0301", number1);
	bzengyisheding[0] = atoi(number1);
	opx2.QueryNode_Text("num0302", number1);
	bzengyisheding[1] = atoi(number1);
	opx2.QueryNode_Text("num0303", number1);
	bzengyisheding[2] = atoi(number1);
	opx2.QueryNode_Text("num0304", number1);
	bzengyisheding[3] = atoi(number1);
	opx2.QueryNode_Text("num0305", number1);
	bzengyisheding[4] = atoi(number1);
	opx2.QueryNode_Text("num0306", number1);
	bzengyisheding[5] = atoi(number1);
	opx2.QueryNode_Text("num0307", number1);
	bzengyisheding[6] = atoi(number1);
	opx2.QueryNode_Text("num0308", number1);
	bzengyisheding[7] = atoi(number1);
	opx2.QueryNode_Text("num0309", number1);
	bzengyisheding[8] = atoi(number1);
	opx2.QueryNode_Text("num0310", number1);
	bzengyisheding[9] = atoi(number1);
	opx2.QueryNode_Text("num0311", number1);
	bzengyisheding[10] = atoi(number1);
	opx2.QueryNode_Text("num0312", number1);
	bzengyisheding[11] = atoi(number1);
	opx2.QueryNode_Text("num0313", number1);
	bzengyisheding[12] = atoi(number1);
	opx2.QueryNode_Text("num0314", number1);
	bzengyisheding[13] = atoi(number1);
	opx2.QueryNode_Text("num0315", number1);
	bzengyisheding[14] = atoi(number1);
	opx2.QueryNode_Text("num0316", number1);
	bzengyisheding[15] = atoi(number1);
	opx2.QueryNode_Text("num0317", number1);
	bzengyisheding[16] = atoi(number1);
	opx2.QueryNode_Text("num0318", number1);
	bzengyisheding[17] = atoi(number1);
	opx2.QueryNode_Text("num0319", number1);
	bzengyisheding[18] = atoi(number1);
	opx2.QueryNode_Text("num0320", number1);
	bzengyisheding[19] = atoi(number1);


	opx2.QueryNode_Text("num0401", number1);
	caitu[0] = atoi(number1);
	opx2.QueryNode_Text("num0402", number1);
	caitu[1] = atoi(number1);
	opx2.QueryNode_Text("num0403", number1);
	caitu[2] = atoi(number1);
	opx2.QueryNode_Text("num0404", number1);
	caitu[3] = atoi(number1);
	opx2.QueryNode_Text("num0405", number1);
	caitu[4] = atoi(number1);
	opx2.QueryNode_Text("num0406", number1);
	caitu[5] = atoi(number1);
	opx2.QueryNode_Text("num0407", number1);
	caitu[6] = atoi(number1);
	opx2.QueryNode_Text("num0408", number1);
	caitu[7] = atoi(number1);
	opx2.QueryNode_Text("num0409", number1);
	caitu[8] = atoi(number1);
	opx2.QueryNode_Text("num0410", number1);
	caitu[9] = atoi(number1);
	opx2.QueryNode_Text("num0411", number1);
	caitu[10] = atoi(number1);
	opx2.QueryNode_Text("num0412", number1);
	caitu[11] = atoi(number1);
	opx2.QueryNode_Text("num0413", number1);
	caitu[12] = atoi(number1);
	opx2.QueryNode_Text("num0414", number1);
	caitu[13] = atoi(number1);
	opx2.QueryNode_Text("num0415", number1);
	caitu[14] = atoi(number1);
	opx2.QueryNode_Text("num0416", number1);
	caitu[15] = atoi(number1);
	opx2.QueryNode_Text("num0417", number1);
	caitu[16] = atoi(number1);
	opx2.QueryNode_Text("num0418", number1);
	caitu[17] = atoi(number1);
	opx2.QueryNode_Text("num0419", number1);
	caitu[18] = atoi(number1);
	opx2.QueryNode_Text("num0420", number1);
	caitu[19] = atoi(number1);
	opx2.QueryNode_Text("num0421", number1);
	caitu[20] = atoi(number1);
	opx2.QueryNode_Text("num0422", number1);
	caitu[21] = atoi(number1);
	opx2.QueryNode_Text("num0423", number1);
	caitu[22] = atoi(number1);
	opx2.QueryNode_Text("num0424", number1);
	caitu[23] = atoi(number1);
	opx2.QueryNode_Text("num0425", number1);
	caitu[24] = atoi(number1);

	////获得服务器IP和Port
	//opx2.QueryNode_Text("serverIP", number1);
	//server_IP = number1;
	//opx2.QueryNode_Text("serverPort", number1);
	//server_Port = number1;
	////获得最后一次选择的语言
	//opx2.QueryNode_Text("lastlang", number1);
	//lang = number1; 

	opx2.QueryNode_Text("num0501", number1);
	famen[0] = atoi(number1);
	opx2.QueryNode_Text("num0502", number1);
	famen[1] = atoi(number1);
	opx2.QueryNode_Text("num0503", number1);
	famen[2] = atoi(number1);
	opx2.QueryNode_Text("num0504", number1);
	famen[3] = atoi(number1);
	opx2.QueryNode_Text("num0505", number1);
	famen[4] = atoi(number1);
	opx2.QueryNode_Text("num0506", number1);
	famen[5] = atoi(number1);
	opx2.QueryNode_Text("num0507", number1);
	famen[6] = atoi(number1);


	opx2.QueryNode_Text("num0601", number1);
	fuzhugongneng[0] = atoi(number1);
	opx2.QueryNode_Text("num0602", number1);
	fuzhugongneng[1] = atoi(number1);
	opx2.QueryNode_Text("num0603", number1);
	fuzhugongneng[2] = atoi(number1);
	opx2.QueryNode_Text("num0604", number1);
	fuzhugongneng[3] = atoi(number1);

	opx2.QueryNode_Text("num0621", number1);
	fuzhusd[0] = number1;
	opx2.QueryNode_Text("num0622", number1);
	fuzhusd[1] = number1;
	opx2.QueryNode_Text("num0623", number1);
	fuzhusd[2] = number1;
	opx2.QueryNode_Text("num0624", number1);
	fuzhusd[3] = number1;
	opx2.QueryNode_Text("num0625", number1);
	fuzhusd[4] = number1;
	opx2.QueryNode_Text("num0626", number1);
	fuzhusd[5] = number1;



	opx2.QueryNode_Text("num0701", number1);
	glingmin[0] = atoi(number1);
	opx2.QueryNode_Text("num0702", number1);
	glingmin[1] = atoi(number1);
	opx2.QueryNode_Text("num0703", number1);
	glingmin[2] = atoi(number1);
	opx2.QueryNode_Text("num0704", number1);
	glingmin[3] = atoi(number1);
	opx2.QueryNode_Text("num0705", number1);
	glingmin[4] = atoi(number1);
	opx2.QueryNode_Text("num0706", number1);
	glingmin[5] = atoi(number1);
	opx2.QueryNode_Text("num0707", number1);
	glingmin[6] = atoi(number1);
	opx2.QueryNode_Text("num0708", number1);
	glingmin[7] = atoi(number1);
	opx2.QueryNode_Text("num0709", number1);
	glingmin[8] = atoi(number1);
	opx2.QueryNode_Text("num0710", number1);
	glingmin[9] = atoi(number1);
	opx2.QueryNode_Text("num0711", number1);
	glingmin[10] = atoi(number1);
	opx2.QueryNode_Text("num0712", number1);
	glingmin[11] = atoi(number1);


	opx2.QueryNode_Text("num0801", number1);
	gzengyisheding[0] = atoi(number1);
	opx2.QueryNode_Text("num0802", number1);
	gzengyisheding[1] = atoi(number1);
	opx2.QueryNode_Text("num0803", number1);
	gzengyisheding[2] = atoi(number1);
	opx2.QueryNode_Text("num0804", number1);
	gzengyisheding[3] = atoi(number1);
	opx2.QueryNode_Text("num0805", number1);
	gzengyisheding[4] = atoi(number1);
	opx2.QueryNode_Text("num0806", number1);
	gzengyisheding[5] = atoi(number1);
	opx2.QueryNode_Text("num0807", number1);
	gzengyisheding[6] = atoi(number1);
	opx2.QueryNode_Text("num0808", number1);
	gzengyisheding[7] = atoi(number1);
	opx2.QueryNode_Text("num0809", number1);
	gzengyisheding[8] = atoi(number1);
	opx2.QueryNode_Text("num0810", number1);
	gzengyisheding[9] = atoi(number1);
	opx2.QueryNode_Text("num0811", number1);
	gzengyisheding[10] = atoi(number1);
	opx2.QueryNode_Text("num0812", number1);
	gzengyisheding[11] = atoi(number1);
	opx2.QueryNode_Text("num0813", number1);
	gzengyisheding[12] = atoi(number1);
	opx2.QueryNode_Text("num0814", number1);
	gzengyisheding[13] = atoi(number1);
	opx2.QueryNode_Text("num0815", number1);
	gzengyisheding[14] = atoi(number1);
	opx2.QueryNode_Text("num0816", number1);
	gzengyisheding[15] = atoi(number1);
	opx2.QueryNode_Text("num0817", number1);
	gzengyisheding[16] = atoi(number1);
	opx2.QueryNode_Text("num0818", number1);
	gzengyisheding[17] = atoi(number1);
	opx2.QueryNode_Text("num0819", number1);
	gzengyisheding[18] = atoi(number1);
	opx2.QueryNode_Text("num0820", number1);
	gzengyisheding[19] = atoi(number1);



	opx2.QueryNode_Text("num0901", number1);
	hunselingmin[0] = atoi(number1);
	opx2.QueryNode_Text("num0902", number1);
	hunselingmin[1] = atoi(number1);
	opx2.QueryNode_Text("num0903", number1);
	hunselingmin[2] = atoi(number1);
	opx2.QueryNode_Text("num0904", number1);
	hunselingmin[3] = atoi(number1);
	opx2.QueryNode_Text("num0905", number1);
	hunselingmin[4] = atoi(number1);
	opx2.QueryNode_Text("num0906", number1);
	hunselingmin[5] = atoi(number1);
	opx2.QueryNode_Text("num0907", number1);
	hunselingmin[6] = atoi(number1);
	opx2.QueryNode_Text("num0908", number1);
	hunselingmin[7] = atoi(number1);
	opx2.QueryNode_Text("num0909", number1);
	hunselingmin[8] = atoi(number1);
	opx2.QueryNode_Text("num0910", number1);
	hunselingmin[9] = atoi(number1);
	opx2.QueryNode_Text("num0911", number1);
	hunselingmin[10] = atoi(number1);
	opx2.QueryNode_Text("num0912", number1);
	hunselingmin[11] = atoi(number1);
	opx2.QueryNode_Text("num0921", number1);
	hunselingmin[20] = atoi(number1);
	opx2.QueryNode_Text("num0922", number1);
	hunselingmin[21] = atoi(number1);



	opx2.QueryNode_Text("num1001", number1);
	liuliang[0] = atoi(number1);
	opx2.QueryNode_Text("num1002", number1);
	liuliang[1] = atoi(number1);
	opx2.QueryNode_Text("num1003", number1);
	liuliang[2] = atoi(number1);
	opx2.QueryNode_Text("num1004", number1);
	liuliang[3] = atoi(number1);
	opx2.QueryNode_Text("num1005", number1);
	liuliang[4] = atoi(number1);
	opx2.QueryNode_Text("num1006", number1);
	liuliang[5] = atoi(number1);
	opx2.QueryNode_Text("num1007", number1);
	liuliang[6] = atoi(number1);
	opx2.QueryNode_Text("num1008", number1);
	liuliang[7] = atoi(number1);
	opx2.QueryNode_Text("num1009", number1);
	liuliang[8] = atoi(number1);
	opx2.QueryNode_Text("num1010", number1);
	liuliang[9] = atoi(number1);
	opx2.QueryNode_Text("num1011", number1);
	liuliang[10] = atoi(number1);
	opx2.QueryNode_Text("num1012", number1);
	liuliang[11] = atoi(number1);
	opx2.QueryNode_Text("num1013", number1);
	liuliang[12] = atoi(number1);



	opx2.QueryNode_Text("num1101", number1);
	mian[0] = atoi(number1);
	opx2.QueryNode_Text("num1102", number1);
	mian[1] = atoi(number1);
	opx2.QueryNode_Text("num1103", number1);
	mian[2] = atoi(number1);
	opx2.QueryNode_Text("num1104", number1);
	mian[3] = atoi(number1);
	opx2.QueryNode_Text("num1105", number1);
	mian[4] = atoi(number1);
	opx2.QueryNode_Text("num1106", number1);
	mian[5] = atoi(number1);
	opx2.QueryNode_Text("num1107", number1);
	mian[6] = atoi(number1);
	opx2.QueryNode_Text("num1108", number1);
	mian[7] = atoi(number1);
	opx2.QueryNode_Text("num1109", number1);
	mian[8] = atoi(number1);
	opx2.QueryNode_Text("num1110", number1);
	mian[9] = atoi(number1);
	opx2.QueryNode_Text("num1111", number1);
	mian[10] = atoi(number1);
	opx2.QueryNode_Text("num1112", number1);
	mian[11] = atoi(number1);
	opx2.QueryNode_Text("num1113", number1);
	mian[12] = atoi(number1);
	opx2.QueryNode_Text("num1114", number1);
	mian[13] = atoi(number1);
	opx2.QueryNode_Text("num1115", number1);
	mian[14] = atoi(number1);
	opx2.QueryNode_Text("num1116", number1);
	mian[15] = atoi(number1);
	opx2.QueryNode_Text("num1117", number1);
	mian[16] = atoi(number1);
	opx2.QueryNode_Text("num1118", number1);
	mian[17] = atoi(number1);



	opx2.QueryNode_Text("num1201", number1);
	pingyisheding[0] = atoi(number1);
	opx2.QueryNode_Text("num1202", number1);
	pingyisheding[1] = atoi(number1);
	opx2.QueryNode_Text("num1203", number1);
	pingyisheding[2] = atoi(number1);
	opx2.QueryNode_Text("num1204", number1);
	pingyisheding[3] = atoi(number1);
	opx2.QueryNode_Text("num1205", number1);
	pingyisheding[4] = atoi(number1);
	opx2.QueryNode_Text("num1206", number1);
	pingyisheding[5] = atoi(number1);
	opx2.QueryNode_Text("num1207", number1);
	pingyisheding[6] = atoi(number1);
	opx2.QueryNode_Text("num1208", number1);
	pingyisheding[7] = atoi(number1);
	opx2.QueryNode_Text("num1209", number1);
	pingyisheding[8] = atoi(number1);
	opx2.QueryNode_Text("num1210", number1);
	pingyisheding[9] = atoi(number1);
	opx2.QueryNode_Text("num1211", number1);
	pingyisheding[10] = atoi(number1);
	opx2.QueryNode_Text("num1212", number1);
	pingyisheding[11] = atoi(number1);
	opx2.QueryNode_Text("num1213", number1);
	pingyisheding[12] = atoi(number1);
	opx2.QueryNode_Text("num1214", number1);
	pingyisheding[13] = atoi(number1);
	opx2.QueryNode_Text("num1215", number1);
	pingyisheding[14] = atoi(number1);
	opx2.QueryNode_Text("num1216", number1);
	pingyisheding[15] = atoi(number1);
	opx2.QueryNode_Text("num1217", number1);
	pingyisheding[16] = atoi(number1);
	opx2.QueryNode_Text("num1218", number1);
	pingyisheding[17] = atoi(number1);
	opx2.QueryNode_Text("num1219", number1);
	pingyisheding[18] = atoi(number1);
	opx2.QueryNode_Text("num1220", number1);
	pingyisheding[19] = atoi(number1);




	opx2.QueryNode_Text("num1301", number1);
	qinghui[0] = atoi(number1);
	opx2.QueryNode_Text("num1302", number1);
	qinghui[1] = atoi(number1);
	opx2.QueryNode_Text("num1303", number1);
	qinghui[2] = atoi(number1);


	opx2.QueryNode_Text("num1401", number1);
	quyu[0] = atoi(number1);
	opx2.QueryNode_Text("num1402", number1);
	quyu[1] = atoi(number1);
	opx2.QueryNode_Text("num1403", number1);
	quyu[2] = atoi(number1);
	opx2.QueryNode_Text("num1404", number1);
	quyu[3] = atoi(number1);
	opx2.QueryNode_Text("num1405", number1);
	quyu[4] = atoi(number1);
	opx2.QueryNode_Text("num1406", number1);
	quyu[5] = atoi(number1);
	opx2.QueryNode_Text("num1407", number1);
	quyu[6] = atoi(number1);
	opx2.QueryNode_Text("num1408", number1);
	quyu[7] = atoi(number1);
	opx2.QueryNode_Text("num1409", number1);
	quyu[8] = atoi(number1);
	opx2.QueryNode_Text("num1410", number1);
	quyu[9] = atoi(number1);
	opx2.QueryNode_Text("num1411", number1);
	quyu[10] = atoi(number1);
	opx2.QueryNode_Text("num1412", number1);
	quyu[11] = atoi(number1);



	opx2.QueryNode_Text("num1501", number1);
	rlingmin[0] = atoi(number1);
	opx2.QueryNode_Text("num1502", number1);
	rlingmin[1] = atoi(number1);
	opx2.QueryNode_Text("num1503", number1);
	rlingmin[2] = atoi(number1);
	opx2.QueryNode_Text("num1504", number1);
	rlingmin[3] = atoi(number1);
	opx2.QueryNode_Text("num1505", number1);
	rlingmin[4] = atoi(number1);
	opx2.QueryNode_Text("num1506", number1);
	rlingmin[5] = atoi(number1);
	opx2.QueryNode_Text("num1507", number1);
	rlingmin[6] = atoi(number1);
	opx2.QueryNode_Text("num1508", number1);
	rlingmin[7] = atoi(number1);
	opx2.QueryNode_Text("num1509", number1);
	rlingmin[8] = atoi(number1);
	opx2.QueryNode_Text("num1510", number1);
	rlingmin[9] = atoi(number1);
	opx2.QueryNode_Text("num1511", number1);
	rlingmin[10] = atoi(number1);
	opx2.QueryNode_Text("num1512", number1);
	rlingmin[11] = atoi(number1);


	opx2.QueryNode_Text("num1601", number1);
	rzengyi[0] = atoi(number1);
	opx2.QueryNode_Text("num1602", number1);
	rzengyi[1] = atoi(number1);
	opx2.QueryNode_Text("num1603", number1);
	rzengyi[2] = atoi(number1);
	opx2.QueryNode_Text("num1604", number1);
	rzengyi[3] = atoi(number1);
	opx2.QueryNode_Text("num1605", number1);
	rzengyi[4] = atoi(number1);
	opx2.QueryNode_Text("num1606", number1);
	rzengyi[5] = atoi(number1);
	opx2.QueryNode_Text("num1607", number1);
	rzengyi[6] = atoi(number1);
	opx2.QueryNode_Text("num1608", number1);
	rzengyi[7] = atoi(number1);
	opx2.QueryNode_Text("num1609", number1);
	rzengyi[8] = atoi(number1);
	opx2.QueryNode_Text("num1610", number1);
	rzengyi[9] = atoi(number1);
	opx2.QueryNode_Text("num1611", number1);
	rzengyi[10] = atoi(number1);
	opx2.QueryNode_Text("num1612", number1);
	rzengyi[11] = atoi(number1);
	opx2.QueryNode_Text("num1613", number1);
	rzengyi[12] = atoi(number1);
	opx2.QueryNode_Text("num1614", number1);
	rzengyi[13] = atoi(number1);
	opx2.QueryNode_Text("num1615", number1);
	rzengyi[14] = atoi(number1);
	opx2.QueryNode_Text("num1616", number1);
	rzengyi[15] = atoi(number1);
	opx2.QueryNode_Text("num1617", number1);
	rzengyi[16] = atoi(number1);
	opx2.QueryNode_Text("num1618", number1);
	rzengyi[17] = atoi(number1);
	opx2.QueryNode_Text("num1619", number1);
	rzengyi[18] = atoi(number1);
	opx2.QueryNode_Text("num1620", number1);
	rzengyi[19] = atoi(number1);




	opx2.QueryNode_Text("num1701", number1);
	shen[0] = atoi(number1);
	opx2.QueryNode_Text("num1702", number1);
	shen[1] = atoi(number1);
	opx2.QueryNode_Text("num1703", number1);
	shen[2] = atoi(number1);
	opx2.QueryNode_Text("num1704", number1);
	shen[3] = atoi(number1);
	opx2.QueryNode_Text("num1705", number1);
	shen[4] = atoi(number1);
	opx2.QueryNode_Text("num1706", number1);
	shen[5] = atoi(number1);
	opx2.QueryNode_Text("num1707", number1);
	shen[6] = atoi(number1);
	opx2.QueryNode_Text("num1708", number1);
	shen[7] = atoi(number1);
	opx2.QueryNode_Text("num1709", number1);
	shen[8] = atoi(number1);
	opx2.QueryNode_Text("num1710", number1);
	shen[9] = atoi(number1);
	opx2.QueryNode_Text("num1711", number1);
	shen[10] = atoi(number1);
	opx2.QueryNode_Text("num1712", number1);
	shen[11] = atoi(number1);


	opx2.QueryNode_Text("num1801", number1);
	vga[0] = atoi(number1);
	opx2.QueryNode_Text("num1802", number1);
	vga[1] = atoi(number1);
	opx2.QueryNode_Text("num1803", number1);
	vga[2] = atoi(number1);
	opx2.QueryNode_Text("num1804", number1);
	vga[3] = atoi(number1);

	opx2.QueryNode_Text("num1821", number1);
	vgasd[0] = number1;
	opx2.QueryNode_Text("num1822", number1);
	vgasd[1] = number1;
	opx2.QueryNode_Text("num1823", number1);
	vgasd[2] = number1;
	opx2.QueryNode_Text("num1824", number1);
	vgasd[3] = number1;
	opx2.QueryNode_Text("num1825", number1);
	vgasd[4] = number1;
	opx2.QueryNode_Text("num1826", number1);
	vgasd[5] = number1;
	opx2.QueryNode_Text("num1827", number1);
	vgasd[6] = number1;
	opx2.QueryNode_Text("num1828", number1);
	vgasd[7] = number1;
	opx2.QueryNode_Text("num1829", number1);
	vgasd[8] = number1;
	opx2.QueryNode_Text("num1830", number1);
	vgasd[9] = number1;
	opx2.QueryNode_Text("num1831", number1);
	vgasd[10] = number1;
	opx2.QueryNode_Text("num1832", number1);
	vgasd[11] = number1;
	opx2.QueryNode_Text("num1833", number1);
	vgasd[12] = number1;
	opx2.QueryNode_Text("num1834", number1);
	vgasd[13] = number1;
	opx2.QueryNode_Text("num1835", number1);
	vgasd[14] = number1;
	opx2.QueryNode_Text("num1836", number1);
	vgasd[15] = number1;
	opx2.QueryNode_Text("num1837", number1);
	vgasd[16] = number1;
	opx2.QueryNode_Text("num1838", number1);
	vgasd[17] = number1;
	opx2.QueryNode_Text("num1839", number1);
	vgasd[18] = number1;
	opx2.QueryNode_Text("num1840", number1);
	vgasd[19] = number1;


	opx2.QueryNode_Text("num1901", number1);
	xiangji[0] = atoi(number1);
	opx2.QueryNode_Text("num1902", number1);
	xiangji[1] = atoi(number1);
	opx2.QueryNode_Text("num1903", number1);
	xiangji[2] = atoi(number1);
	opx2.QueryNode_Text("num1904", number1);
	xiangji[3] = atoi(number1);
	opx2.QueryNode_Text("num1905", number1);
	xiangji[4] = atoi(number1);
	opx2.QueryNode_Text("num1906", number1);
	xiangji[5] = atoi(number1);
	opx2.QueryNode_Text("num1907", number1);
	xiangji[6] = atoi(number1);
	opx2.QueryNode_Text("num1908", number1);
	xiangji[7] = atoi(number1);
	opx2.QueryNode_Text("num1909", number1);
	xiangji[8] = atoi(number1);
	opx2.QueryNode_Text("num1910", number1);
	xiangji[9] = atoi(number1);
	opx2.QueryNode_Text("num1911", number1);
	xiangji[10] = atoi(number1);
	opx2.QueryNode_Text("num1912", number1);
	xiangji[11] = atoi(number1);
	opx2.QueryNode_Text("num1913", number1);
	xiangji[12] = atoi(number1);
	opx2.QueryNode_Text("num1914", number1);
	xiangji[13] = atoi(number1);
	opx2.QueryNode_Text("num1915", number1);
	xiangji[14] = atoi(number1);
	opx2.QueryNode_Text("num1916", number1);
	xiangji[15] = atoi(number1);
	opx2.QueryNode_Text("num1917", number1);
	xiangji[16] = atoi(number1);
	opx2.QueryNode_Text("num1918", number1);
	xiangji[17] = atoi(number1);
	opx2.QueryNode_Text("num1919", number1);
	xiangji[18] = atoi(number1);
	opx2.QueryNode_Text("num1920", number1);
	xiangji[19] = atoi(number1);
	opx2.QueryNode_Text("num1921", number1);
	xiangji[20] = atoi(number1);
	opx2.QueryNode_Text("num1922", number1);
	xiangji[21] = atoi(number1);
	opx2.QueryNode_Text("num1923", number1);
	xiangji[22] = atoi(number1);
	opx2.QueryNode_Text("num1924", number1);
	xiangji[23] = atoi(number1);
	opx2.QueryNode_Text("num1925", number1);
	xiangji[24] = atoi(number1);
	opx2.QueryNode_Text("num1926", number1);
	xiangji[25] = atoi(number1);
	opx2.QueryNode_Text("num1927", number1);
	xiangji[26] = atoi(number1);
	opx2.QueryNode_Text("num1928", number1);
	xiangji[27] = atoi(number1);
	opx2.QueryNode_Text("num1929", number1);
	xiangji[28] = atoi(number1);
	opx2.QueryNode_Text("num1930", number1);
	xiangji[29] = atoi(number1);
	opx2.QueryNode_Text("num1931", number1);
	xiangji[30] = atoi(number1);
	opx2.QueryNode_Text("num1932", number1);
	xiangji[31] = atoi(number1);
	opx2.QueryNode_Text("num1933", number1);
	xiangji[32] = atoi(number1);
	opx2.QueryNode_Text("num1934", number1);
	xiangji[33] = atoi(number1);
	opx2.QueryNode_Text("num1935", number1);
	xiangji[34] = atoi(number1);
	opx2.QueryNode_Text("num1936", number1);
	xiangji[35] = atoi(number1);
	opx2.QueryNode_Text("num1937", number1);
	xiangji[36] = atoi(number1);
	opx2.QueryNode_Text("num1938", number1);
	xiangji[37] = atoi(number1);
	opx2.QueryNode_Text("num1939", number1);
	xiangji[38] = atoi(number1);
	opx2.QueryNode_Text("num1940", number1);
	xiangji[39] = atoi(number1);
	opx2.QueryNode_Text("num1941", number1);
	xiangji[40] = atoi(number1);
	opx2.QueryNode_Text("num1942", number1);
	xiangji[41] = atoi(number1);
	opx2.QueryNode_Text("num1943", number1);
	xiangji[42] = atoi(number1);
	opx2.QueryNode_Text("num1944", number1);
	xiangji[43] = atoi(number1);
	opx2.QueryNode_Text("num1945", number1);
	xiangji[44] = atoi(number1);
	opx2.QueryNode_Text("num1946", number1);
	xiangji[45] = atoi(number1);
	opx2.QueryNode_Text("num1947", number1);
	xiangji[46] = atoi(number1);
	opx2.QueryNode_Text("num1948", number1);
	xiangji[47] = atoi(number1);
	opx2.QueryNode_Text("num1949", number1);
	xiangji[48] = atoi(number1);
	opx2.QueryNode_Text("num1950", number1);
	xiangji[49] = atoi(number1);
	opx2.QueryNode_Text("num1951", number1);
	xiangji[50] = atoi(number1);
	opx2.QueryNode_Text("num1952", number1);
	xiangji[51] = atoi(number1);
	opx2.QueryNode_Text("num1953", number1);
	xiangji[52] = atoi(number1);
	opx2.QueryNode_Text("num1954", number1);
	xiangji[53] = atoi(number1);
	opx2.QueryNode_Text("num1955", number1);
	xiangji[54] = atoi(number1);
	opx2.QueryNode_Text("num1956", number1);
	xiangji[55] = atoi(number1);
	opx2.QueryNode_Text("num1957", number1);
	xiangji[56] = atoi(number1);
	opx2.QueryNode_Text("num1958", number1);
	xiangji[57] = atoi(number1);
	opx2.QueryNode_Text("num1959", number1);
	xiangji[58] = atoi(number1);
	opx2.QueryNode_Text("num1960", number1);
	xiangji[59] = atoi(number1);
	opx2.QueryNode_Text("num1961", number1);
	xiangji[60] = atoi(number1);
	opx2.QueryNode_Text("num1962", number1);
	xiangji[61] = atoi(number1);
	opx2.QueryNode_Text("num1963", number1);
	xiangji[62] = atoi(number1);
	opx2.QueryNode_Text("num1964", number1);
	xiangji[63] = atoi(number1);
	opx2.QueryNode_Text("num1965", number1);
	xiangji[64] = atoi(number1);
	opx2.QueryNode_Text("num1966", number1);
	xiangji[65] = atoi(number1);
	opx2.QueryNode_Text("num1967", number1);
	xiangji[66] = atoi(number1);
	opx2.QueryNode_Text("num1968", number1);
	xiangji[67] = atoi(number1);
	opx2.QueryNode_Text("num1969", number1);
	xiangji[68] = atoi(number1);
	opx2.QueryNode_Text("num1970", number1);
	xiangji[69] = atoi(number1);
	opx2.QueryNode_Text("num1971", number1);
	xiangji[70] = atoi(number1);
	opx2.QueryNode_Text("num1972", number1);
	xiangji[71] = atoi(number1);
	opx2.QueryNode_Text("num1973", number1);
	xiangji[72] = atoi(number1);
	opx2.QueryNode_Text("num1974", number1);
	xiangji[73] = atoi(number1);
	opx2.QueryNode_Text("num1975", number1);
	xiangji[74] = atoi(number1);
	opx2.QueryNode_Text("num1976", number1);
	xiangji[75] = atoi(number1);
	opx2.QueryNode_Text("num1977", number1);
	xiangji[76] = atoi(number1);
	opx2.QueryNode_Text("num1978", number1);
	xiangji[77] = atoi(number1);
	opx2.QueryNode_Text("num1979", number1);
	xiangji[78] = atoi(number1);
	opx2.QueryNode_Text("num1980", number1);
	xiangji[79] = atoi(number1);
	opx2.QueryNode_Text("num1981", number1);
	xiangji[80] = atoi(number1);
	opx2.QueryNode_Text("num1982", number1);
	xiangji[81] = atoi(number1);
	opx2.QueryNode_Text("num1983", number1);
	xiangji[82] = atoi(number1);
	opx2.QueryNode_Text("num1984", number1);
	xiangji[83] = atoi(number1);
	opx2.QueryNode_Text("num1985", number1);
	xiangji[84] = atoi(number1);
	opx2.QueryNode_Text("num1986", number1);
	xiangji[85] = atoi(number1);
	opx2.QueryNode_Text("num1987", number1);
	xiangji[86] = atoi(number1);
	opx2.QueryNode_Text("num1988", number1);
	xiangji[87] = atoi(number1);
	opx2.QueryNode_Text("num1989", number1);
	xiangji[88] = atoi(number1);
	opx2.QueryNode_Text("num1990", number1);
	xiangji[89] = atoi(number1);
	opx2.QueryNode_Text("num1991", number1);
	xiangji[90] = atoi(number1);
	opx2.QueryNode_Text("num1992", number1);
	xiangji[91] = atoi(number1);
	opx2.QueryNode_Text("num1993", number1);
	xiangji[92] = atoi(number1);
	opx2.QueryNode_Text("num1994", number1);
	xiangji[93] = atoi(number1);
	opx2.QueryNode_Text("num1995", number1);
	xiangji[94] = atoi(number1);
	opx2.QueryNode_Text("num1996", number1);
	xiangji[95] = atoi(number1);
	opx2.QueryNode_Text("num1997", number1);
	xiangji[96] = atoi(number1);
	opx2.QueryNode_Text("num1998", number1);
	xiangji[97] = atoi(number1);
	opx2.QueryNode_Text("num1999", number1);
	xiangji[98] = atoi(number1);
	opx2.QueryNode_Text("num19100", number1);
	xiangji[99] = atoi(number1);



	opx2.QueryNode_Text("num2001", number1);
	yanchisheding[0] = atoi(number1);
	opx2.QueryNode_Text("num2002", number1);
	yanchisheding[1] = atoi(number1);
	opx2.QueryNode_Text("num2003", number1);
	yanchisheding[2] = atoi(number1);
	opx2.QueryNode_Text("num2004", number1);
	yanchisheding[3] = atoi(number1);
	opx2.QueryNode_Text("num2005", number1);
	yanchisheding[4] = atoi(number1);
	opx2.QueryNode_Text("num2006", number1);
	yanchisheding[5] = atoi(number1);
	opx2.QueryNode_Text("num2007", number1);
	yanchisheding[6] = atoi(number1);
	opx2.QueryNode_Text("num2008", number1);
	yanchisheding[7] = atoi(number1);
	opx2.QueryNode_Text("num2009", number1);
	yanchisheding[8] = atoi(number1);
	opx2.QueryNode_Text("num2010", number1);
	yanchisheding[9] = atoi(number1);
	opx2.QueryNode_Text("num2011", number1);
	yanchisheding[10] = atoi(number1);
	opx2.QueryNode_Text("num2012", number1);
	yanchisheding[11] = atoi(number1);




	opx2.QueryNode_Text("num2101", number1);
	yanse[0] = atoi(number1);
	opx2.QueryNode_Text("num2102", number1);
	yanse[1] = atoi(number1);
	opx2.QueryNode_Text("num2103", number1);
	yanse[2] = atoi(number1);
	opx2.QueryNode_Text("num2104", number1);
	yanse[3] = atoi(number1);
	opx2.QueryNode_Text("num2105", number1);
	yanse[4] = atoi(number1);
	opx2.QueryNode_Text("num2106", number1);
	yanse[5] = atoi(number1);
	opx2.QueryNode_Text("num2107", number1);
	yanse[6] = atoi(number1);
	opx2.QueryNode_Text("num2108", number1);
	yanse[7] = atoi(number1);
	opx2.QueryNode_Text("num2109", number1);
	yanse[8] = atoi(number1);
	opx2.QueryNode_Text("num2110", number1);
	yanse[9] = atoi(number1);
	opx2.QueryNode_Text("num2111", number1);
	yanse[10] = atoi(number1);
	opx2.QueryNode_Text("num2112", number1);
	yanse[11] = atoi(number1);


	opx2.QueryNode_Text("num2201", number1);
	huiduhuluesheding[0] = atoi(number1);
	opx2.QueryNode_Text("num2202", number1);
	huiduhuluesheding[1] = atoi(number1);
	opx2.QueryNode_Text("num2203", number1);
	huiduhuluesheding[2] = atoi(number1);
	opx2.QueryNode_Text("num2204", number1);
	huiduhuluesheding[3] = atoi(number1);
	opx2.QueryNode_Text("num2205", number1);
	huiduhuluesheding[4] = atoi(number1);
	opx2.QueryNode_Text("num2206", number1);
	huiduhuluesheding[5] = atoi(number1);
	opx2.QueryNode_Text("num2207", number1);
	huiduhuluesheding[6] = atoi(number1);
	opx2.QueryNode_Text("num2208", number1);
	huiduhuluesheding[7] = atoi(number1);
	opx2.QueryNode_Text("num2209", number1);
	huiduhuluesheding[8] = atoi(number1);
	opx2.QueryNode_Text("num2210", number1);
	huiduhuluesheding[9] = atoi(number1);
	opx2.QueryNode_Text("num2211", number1);
	huiduhuluesheding[10] = atoi(number1);
	opx2.QueryNode_Text("num2212", number1);
	huiduhuluesheding[11] = atoi(number1);
	opx2.QueryNode_Text("num2213", number1);
	huiduhuluesheding[12] = atoi(number1);
	opx2.QueryNode_Text("num2214", number1);
	huiduhuluesheding[13] = atoi(number1);
	opx2.QueryNode_Text("num2215", number1);
	huiduhuluesheding[14] = atoi(number1);
	opx2.QueryNode_Text("num2216", number1);
	huiduhuluesheding[15] = atoi(number1);
	opx2.QueryNode_Text("num2217", number1);
	huiduhuluesheding[16] = atoi(number1);
	opx2.QueryNode_Text("num2218", number1);
	huiduhuluesheding[17] = atoi(number1);
	opx2.QueryNode_Text("num2219", number1);
	huiduhuluesheding[18] = atoi(number1);
	opx2.QueryNode_Text("num2220", number1);
	huiduhuluesheding[19] = atoi(number1);

	opx2.QueryNode_Text("num2301", number1);
	huidu1sheding[0] = atoi(number1);
	opx2.QueryNode_Text("num2302", number1);
	huidu1sheding[1] = atoi(number1);
	opx2.QueryNode_Text("num2303", number1);
	huidu1sheding[2] = atoi(number1);
	opx2.QueryNode_Text("num2304", number1);
	huidu1sheding[3] = atoi(number1);
	opx2.QueryNode_Text("num2305", number1);
	huidu1sheding[4] = atoi(number1);
	opx2.QueryNode_Text("num2306", number1);
	huidu1sheding[5] = atoi(number1);
	opx2.QueryNode_Text("num2307", number1);
	huidu1sheding[6] = atoi(number1);
	opx2.QueryNode_Text("num2308", number1);
	huidu1sheding[7] = atoi(number1);
	opx2.QueryNode_Text("num2309", number1);
	huidu1sheding[8] = atoi(number1);
	opx2.QueryNode_Text("num2310", number1);
	huidu1sheding[9] = atoi(number1);
	opx2.QueryNode_Text("num2311", number1);
	huidu1sheding[10] = atoi(number1);
	opx2.QueryNode_Text("num2312", number1);
	huidu1sheding[11] = atoi(number1);



	opx2.QueryNode_Text("num2401", number1);
	huidu2sheding[0] = atoi(number1);
	opx2.QueryNode_Text("num2402", number1);
	huidu2sheding[1] = atoi(number1);
	opx2.QueryNode_Text("num2403", number1);
	huidu2sheding[2] = atoi(number1);
	opx2.QueryNode_Text("num2404", number1);
	huidu2sheding[3] = atoi(number1);
	opx2.QueryNode_Text("num2405", number1);
	huidu2sheding[4] = atoi(number1);
	opx2.QueryNode_Text("num2406", number1);
	huidu2sheding[5] = atoi(number1);
	opx2.QueryNode_Text("num2407", number1);
	huidu2sheding[6] = atoi(number1);
	opx2.QueryNode_Text("num2408", number1);
	huidu2sheding[7] = atoi(number1);
	opx2.QueryNode_Text("num2409", number1);
	huidu2sheding[8] = atoi(number1);
	opx2.QueryNode_Text("num2410", number1);
	huidu2sheding[9] = atoi(number1);
	opx2.QueryNode_Text("num2411", number1);
	huidu2sheding[10] = atoi(number1);
	opx2.QueryNode_Text("num2412", number1);
	huidu2sheding[11] = atoi(number1);


	opx2.QueryNode_Text("num2501", number1);
	mianjiweitiaosd[0] = atoi(number1);
	opx2.QueryNode_Text("num2502", number1);
	mianjiweitiaosd[1] = atoi(number1);
	opx2.QueryNode_Text("num2503", number1);
	mianjiweitiaosd[2] = atoi(number1);
	opx2.QueryNode_Text("num2504", number1);
	mianjiweitiaosd[3] = atoi(number1);
	opx2.QueryNode_Text("num2505", number1);
	mianjiweitiaosd[4] = atoi(number1);
	opx2.QueryNode_Text("num2506", number1);
	mianjiweitiaosd[5] = atoi(number1);
	opx2.QueryNode_Text("num2507", number1);
	mianjiweitiaosd[6] = atoi(number1);
	opx2.QueryNode_Text("num2508", number1);
	mianjiweitiaosd[7] = atoi(number1);
	opx2.QueryNode_Text("num2509", number1);
	mianjiweitiaosd[8] = atoi(number1);
	opx2.QueryNode_Text("num2510", number1);
	mianjiweitiaosd[9] = atoi(number1);
	opx2.QueryNode_Text("num2511", number1);
	mianjiweitiaosd[10] = atoi(number1);
	opx2.QueryNode_Text("num2512", number1);
	mianjiweitiaosd[11] = atoi(number1);
	opx2.QueryNode_Text("num2513", number1);
	mianjiweitiaosd[12] = atoi(number1);
	opx2.QueryNode_Text("num2514", number1);
	mianjiweitiaosd[13] = atoi(number1);
	opx2.QueryNode_Text("num2515", number1);
	mianjiweitiaosd[14] = atoi(number1);
	opx2.QueryNode_Text("num2516", number1);
	mianjiweitiaosd[15] = atoi(number1);
	opx2.QueryNode_Text("num2517", number1);
	mianjiweitiaosd[16] = atoi(number1);
	opx2.QueryNode_Text("num2518", number1);
	mianjiweitiaosd[17] = atoi(number1);
	opx2.QueryNode_Text("num2519", number1);
	mianjiweitiaosd[18] = atoi(number1);
	opx2.QueryNode_Text("num2520", number1);
	mianjiweitiaosd[19] = atoi(number1);



	opx2.QueryNode_Text("num2601", number1);
	quyusansd[0] = atoi(number1);
	opx2.QueryNode_Text("num2602", number1);
	quyusansd[1] = atoi(number1);
	opx2.QueryNode_Text("num2603", number1);
	quyusansd[2] = atoi(number1);
	opx2.QueryNode_Text("num2604", number1);
	quyusansd[3] = atoi(number1);
	opx2.QueryNode_Text("num2605", number1);
	quyusansd[4] = atoi(number1);
	opx2.QueryNode_Text("num2606", number1);
	quyusansd[5] = atoi(number1);
	opx2.QueryNode_Text("num2607", number1);
	quyusansd[6] = atoi(number1);
	opx2.QueryNode_Text("num2608", number1);
	quyusansd[7] = atoi(number1);
	opx2.QueryNode_Text("num2609", number1);
	quyusansd[8] = atoi(number1);
	opx2.QueryNode_Text("num2610", number1);
	quyusansd[9] = atoi(number1);
	opx2.QueryNode_Text("num2611", number1);
	quyusansd[10] = atoi(number1);
	opx2.QueryNode_Text("num2612", number1);
	quyusansd[11] = atoi(number1);


	opx2.QueryNode_Text("num2701", number1);
	quyusisd[0] = atoi(number1);
	opx2.QueryNode_Text("num2702", number1);
	quyusisd[1] = atoi(number1);
	opx2.QueryNode_Text("num2703", number1);
	quyusisd[2] = atoi(number1);
	opx2.QueryNode_Text("num2704", number1);
	quyusisd[3] = atoi(number1);
	opx2.QueryNode_Text("num2705", number1);
	quyusisd[4] = atoi(number1);
	opx2.QueryNode_Text("num2706", number1);
	quyusisd[5] = atoi(number1);
	opx2.QueryNode_Text("num2707", number1);
	quyusisd[6] = atoi(number1);
	opx2.QueryNode_Text("num2708", number1);
	quyusisd[7] = atoi(number1);
	opx2.QueryNode_Text("num2709", number1);
	quyusisd[8] = atoi(number1);
	opx2.QueryNode_Text("num2710", number1);
	quyusisd[9] = atoi(number1);
	opx2.QueryNode_Text("num2711", number1);
	quyusisd[10] = atoi(number1);
	opx2.QueryNode_Text("num2712", number1);
	quyusisd[11] = atoi(number1);



	opx2.QueryNode_Text("num2801", number1);
	quyuwusd[0] = atoi(number1);
	opx2.QueryNode_Text("num2802", number1);
	quyuwusd[1] = atoi(number1);
	opx2.QueryNode_Text("num2803", number1);
	quyuwusd[2] = atoi(number1);
	opx2.QueryNode_Text("num2804", number1);
	quyuwusd[3] = atoi(number1);
	opx2.QueryNode_Text("num2805", number1);
	quyuwusd[4] = atoi(number1);
	opx2.QueryNode_Text("num2806", number1);
	quyuwusd[5] = atoi(number1);
	opx2.QueryNode_Text("num2807", number1);
	quyuwusd[6] = atoi(number1);
	opx2.QueryNode_Text("num2808", number1);
	quyuwusd[7] = atoi(number1);
	opx2.QueryNode_Text("num2809", number1);
	quyuwusd[8] = atoi(number1);
	opx2.QueryNode_Text("num2810", number1);
	quyuwusd[9] = atoi(number1);
	opx2.QueryNode_Text("num2811", number1);
	quyuwusd[10] = atoi(number1);
	opx2.QueryNode_Text("num2812", number1);
	quyuwusd[11] = atoi(number1);


	opx2.QueryNode_Text("num2901", number1);
	shendu2[0] = atoi(number1);
	opx2.QueryNode_Text("num2902", number1);
	shendu2[1] = atoi(number1);
	opx2.QueryNode_Text("num2903", number1);
	shendu2[2] = atoi(number1);
	opx2.QueryNode_Text("num2904", number1);
	shendu2[3] = atoi(number1);
	opx2.QueryNode_Text("num2905", number1);
	shendu2[4] = atoi(number1);
	opx2.QueryNode_Text("num2906", number1);
	shendu2[5] = atoi(number1);
	opx2.QueryNode_Text("num2907", number1);
	shendu2[6] = atoi(number1);
	opx2.QueryNode_Text("num2908", number1);
	shendu2[7] = atoi(number1);
	opx2.QueryNode_Text("num2909", number1);
	shendu2[8] = atoi(number1);
	opx2.QueryNode_Text("num2910", number1);
	shendu2[9] = atoi(number1);
	opx2.QueryNode_Text("num2911", number1);
	shendu2[10] = atoi(number1);
	opx2.QueryNode_Text("num2912", number1);
	shendu2[11] = atoi(number1);



	opx2.QueryNode_Text("num3001", number1);
	xingxuanlingmindusd[0] = atoi(number1);
	opx2.QueryNode_Text("num3002", number1);
	xingxuanlingmindusd[1] = atoi(number1);
	opx2.QueryNode_Text("num3003", number1);
	xingxuanlingmindusd[2] = atoi(number1);
	opx2.QueryNode_Text("num3004", number1);
	xingxuanlingmindusd[3] = atoi(number1);
	opx2.QueryNode_Text("num3005", number1);
	xingxuanlingmindusd[4] = atoi(number1);
	opx2.QueryNode_Text("num3006", number1);
	xingxuanlingmindusd[5] = atoi(number1);
	opx2.QueryNode_Text("num3007", number1);
	xingxuanlingmindusd[6] = atoi(number1);
	opx2.QueryNode_Text("num3008", number1);
	xingxuanlingmindusd[7] = atoi(number1);
	opx2.QueryNode_Text("num3009", number1);
	xingxuanlingmindusd[8] = atoi(number1);
	opx2.QueryNode_Text("num3010", number1);
	xingxuanlingmindusd[9] = atoi(number1);
	opx2.QueryNode_Text("num3011", number1);
	xingxuanlingmindusd[10] = atoi(number1);
	opx2.QueryNode_Text("num3012", number1);
	xingxuanlingmindusd[11] = atoi(number1);
	opx2.QueryNode_Text("num3013", number1);
	xingxuanlingmindusd[12] = atoi(number1);
	opx2.QueryNode_Text("num3014", number1);
	xingxuanlingmindusd[13] = atoi(number1);
	opx2.QueryNode_Text("num3015", number1);
	xingxuanlingmindusd[14] = atoi(number1);
	opx2.QueryNode_Text("num3016", number1);
	xingxuanlingmindusd[15] = atoi(number1);
	opx2.QueryNode_Text("num3017", number1);
	xingxuanlingmindusd[16] = atoi(number1);
	opx2.QueryNode_Text("num3018", number1);
	xingxuanlingmindusd[17] = atoi(number1);
	opx2.QueryNode_Text("num3019", number1);
	xingxuanlingmindusd[18] = atoi(number1);
	opx2.QueryNode_Text("num3020", number1);
	xingxuanlingmindusd[19] = atoi(number1);



	opx2.QueryNode_Text("num3101", number1);
	xingxuansd[0] = atoi(number1);
	opx2.QueryNode_Text("num3102", number1);
	xingxuansd[1] = atoi(number1);
	opx2.QueryNode_Text("num3103", number1);
	xingxuansd[2] = atoi(number1);
	opx2.QueryNode_Text("num3104", number1);
	xingxuansd[3] = atoi(number1);
	opx2.QueryNode_Text("num3105", number1);
	xingxuansd[4] = atoi(number1);

	opx2.QueryNode_Text("num3201", number1);
	yansehangmianjisd[0] = atoi(number1);
	opx2.QueryNode_Text("num3202", number1);
	yansehangmianjisd[1] = atoi(number1);
	opx2.QueryNode_Text("num3203", number1);
	yansehangmianjisd[2] = atoi(number1);
	opx2.QueryNode_Text("num3204", number1);
	yansehangmianjisd[3] = atoi(number1);
	opx2.QueryNode_Text("num3205", number1);
	yansehangmianjisd[4] = atoi(number1);
	opx2.QueryNode_Text("num3206", number1);
	yansehangmianjisd[5] = atoi(number1);
	opx2.QueryNode_Text("num3207", number1);
	yansehangmianjisd[6] = atoi(number1);
	opx2.QueryNode_Text("num3208", number1);
	yansehangmianjisd[7] = atoi(number1);
	opx2.QueryNode_Text("num3209", number1);
	yansehangmianjisd[8] = atoi(number1);
	opx2.QueryNode_Text("num3210", number1);
	yansehangmianjisd[9] = atoi(number1);
	opx2.QueryNode_Text("num3211", number1);
	yansehangmianjisd[10] = atoi(number1);
	opx2.QueryNode_Text("num3212", number1);
	yansehangmianjisd[11] = atoi(number1);
	opx2.QueryNode_Text("num3213", number1);
	yansehangmianjisd[12] = atoi(number1);
	opx2.QueryNode_Text("num3214", number1);
	yansehangmianjisd[13] = atoi(number1);
	opx2.QueryNode_Text("num3215", number1);
	yansehangmianjisd[14] = atoi(number1);
	opx2.QueryNode_Text("num3216", number1);
	yansehangmianjisd[15] = atoi(number1);
	opx2.QueryNode_Text("num3217", number1);
	yansehangmianjisd[16] = atoi(number1);
	opx2.QueryNode_Text("num3218", number1);
	yansehangmianjisd[17] = atoi(number1);
	opx2.QueryNode_Text("num3219", number1);
	yansehangmianjisd[18] = atoi(number1);
	opx2.QueryNode_Text("num3220", number1);
	yansehangmianjisd[19] = atoi(number1);




	opx2.QueryNode_Text("num3301", number1);
	yanseminganqiangdusd[0] = atoi(number1);
	opx2.QueryNode_Text("num3302", number1);
	yanseminganqiangdusd[1] = atoi(number1);
	opx2.QueryNode_Text("num3303", number1);
	yanseminganqiangdusd[2] = atoi(number1);
	opx2.QueryNode_Text("num3304", number1);
	yanseminganqiangdusd[3] = atoi(number1);
	opx2.QueryNode_Text("num3305", number1);
	yanseminganqiangdusd[4] = atoi(number1);
	opx2.QueryNode_Text("num3306", number1);
	yanseminganqiangdusd[5] = atoi(number1);



	opx2.QueryNode_Text("num3401", number1);
	modsd[0] = number1;
	opx2.QueryNode_Text("num3402", number1);
	modsd[1] = number1;
	opx2.QueryNode_Text("num3403", number1);
	modsd[2] = number1;
	opx2.QueryNode_Text("num3404", number1);
	modsd[3] = number1;
	opx2.QueryNode_Text("num3405", number1);
	modsd[4] = number1;
	opx2.QueryNode_Text("num3406", number1);
	modsd[5] = number1;
	opx2.QueryNode_Text("num3407", number1);
	modsd[6] = number1;
	opx2.QueryNode_Text("num3408", number1);
	modsd[7] = number1;
	opx2.QueryNode_Text("num3409", number1);
	modsd[8] = number1;
	opx2.QueryNode_Text("num3410", number1);
	modsd[9] = number1;
	opx2.QueryNode_Text("num3411", number1);
	modsd[10] = number1;
	opx2.QueryNode_Text("num3412", number1);
	modsd[11] = number1;
	opx2.QueryNode_Text("num3413", number1);
	modsd[12] = number1;
	opx2.QueryNode_Text("num3414", number1);
	modsd[13] = number1;
	opx2.QueryNode_Text("num3415", number1);
	modsd[14] = number1;
	opx2.QueryNode_Text("num3416", number1);
	modsd[15] = number1;
	opx2.QueryNode_Text("num3417", number1);
	modsd[16] = number1;
	opx2.QueryNode_Text("num3418", number1);
	modsd[17] = number1;
	opx2.QueryNode_Text("num3419", number1);
	modsd[18] = number1;
	opx2.QueryNode_Text("num3420", number1);
	modsd[19] = number1;
	opx2.QueryNode_Text("num3421", number1);
	modsd[20] = number1;

	opx2.QueryNode_Text("num3422", number1);
	addSW = atoi(number1);


	opx2.QueryNode_Text("num3501", number1);
	liuliangsd[0] = number1;
	opx2.QueryNode_Text("num3502", number1);
	liuliangsd[1] = number1;
	opx2.QueryNode_Text("num3503", number1);
	liuliangsd[2] = number1;
	opx2.QueryNode_Text("num3504", number1);
	liuliangsd[3] = number1;
	opx2.QueryNode_Text("num3505", number1);
	liuliangsd[4] = number1;
	opx2.QueryNode_Text("num3506", number1);
	liuliangsd[5] = number1;
	opx2.QueryNode_Text("num3507", number1);
	liuliangsd[6] = number1;
	opx2.QueryNode_Text("num3508", number1);
	liuliangsd[7] = number1;
	opx2.QueryNode_Text("num3509", number1);
	liuliangsd[8] = number1;
	opx2.QueryNode_Text("num3510", number1);
	liuliangsd[9] = number1;


	opx2.QueryNode_Text("num3601", number1);
	blingminf[0] = atoi(number1);
	opx2.QueryNode_Text("num3602", number1);
	blingminf[1] = atoi(number1);
	opx2.QueryNode_Text("num3603", number1);
	blingminf[2] = atoi(number1);
	opx2.QueryNode_Text("num3604", number1);
	blingminf[3] = atoi(number1);
	opx2.QueryNode_Text("num3605", number1);
	blingminf[4] = atoi(number1);
	opx2.QueryNode_Text("num3606", number1);
	blingminf[5] = atoi(number1);
	opx2.QueryNode_Text("num3607", number1);
	blingminf[6] = atoi(number1);
	opx2.QueryNode_Text("num3608", number1);
	blingminf[7] = atoi(number1);
	opx2.QueryNode_Text("num3609", number1);
	blingminf[8] = atoi(number1);
	opx2.QueryNode_Text("num3610", number1);
	blingminf[9] = atoi(number1);
	opx2.QueryNode_Text("num3611", number1);
	blingminf[10] = atoi(number1);
	opx2.QueryNode_Text("num3612", number1);
	blingminf[11] = atoi(number1);
	opx2.QueryNode_Text("num3613", number1);
	blingminf[12] = atoi(number1);
	opx2.QueryNode_Text("num3614", number1);
	blingminf[13] = atoi(number1);
	opx2.QueryNode_Text("num3615", number1);
	blingminf[14] = atoi(number1);
	opx2.QueryNode_Text("num3616", number1);
	blingminf[15] = atoi(number1);
	opx2.QueryNode_Text("num3617", number1);
	blingminf[16] = atoi(number1);
	opx2.QueryNode_Text("num3618", number1);
	blingminf[17] = atoi(number1);
	opx2.QueryNode_Text("num3619", number1);
	blingminf[18] = atoi(number1);
	opx2.QueryNode_Text("num3620", number1);
	blingminf[19] = atoi(number1);
	opx2.QueryNode_Text("num3621", number1);
	blingminf[20] = atoi(number1);
	opx2.QueryNode_Text("num3622", number1);
	blingminf[21] = atoi(number1);
	opx2.QueryNode_Text("num3623", number1);
	blingminf[22] = atoi(number1);
	opx2.QueryNode_Text("num3624", number1);
	blingminf[23] = atoi(number1);
	opx2.QueryNode_Text("num3625", number1);
	blingminf[24] = atoi(number1);
	opx2.QueryNode_Text("num3626", number1);
	blingminf[25] = atoi(number1);
	opx2.QueryNode_Text("num3627", number1);
	blingminf[26] = atoi(number1);
	opx2.QueryNode_Text("num3628", number1);
	blingminf[27] = atoi(number1);
	opx2.QueryNode_Text("num3629", number1);
	blingminf[28] = atoi(number1);
	opx2.QueryNode_Text("num3630", number1);
	blingminf[29] = atoi(number1);
	opx2.QueryNode_Text("num3631", number1);
	blingminf[30] = atoi(number1);
	opx2.QueryNode_Text("num3632", number1);
	blingminf[31] = atoi(number1);
	opx2.QueryNode_Text("num3633", number1);
	blingminf[32] = atoi(number1);
	opx2.QueryNode_Text("num3634", number1);
	blingminf[33] = atoi(number1);
	opx2.QueryNode_Text("num3635", number1);
	blingminf[34] = atoi(number1);
	opx2.QueryNode_Text("num3636", number1);
	blingminf[35] = atoi(number1);
	opx2.QueryNode_Text("num3637", number1);
	blingminf[36] = atoi(number1);
	opx2.QueryNode_Text("num3638", number1);
	blingminf[37] = atoi(number1);
	opx2.QueryNode_Text("num3639", number1);
	blingminf[38] = atoi(number1);
	opx2.QueryNode_Text("num3640", number1);
	blingminf[39] = atoi(number1);


	opx2.QueryNode_Text("num3701", number1);
	glingminf[0] = atoi(number1);
	opx2.QueryNode_Text("num3702", number1);
	glingminf[1] = atoi(number1);
	opx2.QueryNode_Text("num3703", number1);
	glingminf[2] = atoi(number1);
	opx2.QueryNode_Text("num3704", number1);
	glingminf[3] = atoi(number1);
	opx2.QueryNode_Text("num3705", number1);
	glingminf[4] = atoi(number1);
	opx2.QueryNode_Text("num3706", number1);
	glingminf[5] = atoi(number1);
	opx2.QueryNode_Text("num3707", number1);
	glingminf[6] = atoi(number1);
	opx2.QueryNode_Text("num3708", number1);
	glingminf[7] = atoi(number1);
	opx2.QueryNode_Text("num3709", number1);
	glingminf[8] = atoi(number1);
	opx2.QueryNode_Text("num3710", number1);
	glingminf[9] = atoi(number1);
	opx2.QueryNode_Text("num3711", number1);
	glingminf[10] = atoi(number1);
	opx2.QueryNode_Text("num3712", number1);
	glingminf[11] = atoi(number1);
	opx2.QueryNode_Text("num3713", number1);
	glingminf[12] = atoi(number1);
	opx2.QueryNode_Text("num3714", number1);
	glingminf[13] = atoi(number1);
	opx2.QueryNode_Text("num3715", number1);
	glingminf[14] = atoi(number1);
	opx2.QueryNode_Text("num3716", number1);
	glingminf[15] = atoi(number1);
	opx2.QueryNode_Text("num3717", number1);
	glingminf[16] = atoi(number1);
	opx2.QueryNode_Text("num3718", number1);
	glingminf[17] = atoi(number1);
	opx2.QueryNode_Text("num3719", number1);
	glingminf[18] = atoi(number1);
	opx2.QueryNode_Text("num3720", number1);
	glingminf[19] = atoi(number1);
	opx2.QueryNode_Text("num3721", number1);
	glingminf[20] = atoi(number1);
	opx2.QueryNode_Text("num3722", number1);
	glingminf[21] = atoi(number1);
	opx2.QueryNode_Text("num3723", number1);
	glingminf[22] = atoi(number1);
	opx2.QueryNode_Text("num3724", number1);
	glingminf[23] = atoi(number1);
	opx2.QueryNode_Text("num3725", number1);
	glingminf[24] = atoi(number1);
	opx2.QueryNode_Text("num3726", number1);
	glingminf[25] = atoi(number1);
	opx2.QueryNode_Text("num3727", number1);
	glingminf[26] = atoi(number1);
	opx2.QueryNode_Text("num3728", number1);
	glingminf[27] = atoi(number1);
	opx2.QueryNode_Text("num3729", number1);
	glingminf[28] = atoi(number1);
	opx2.QueryNode_Text("num3730", number1);
	glingminf[29] = atoi(number1);
	opx2.QueryNode_Text("num3731", number1);
	glingminf[30] = atoi(number1);
	opx2.QueryNode_Text("num3732", number1);
	glingminf[31] = atoi(number1);
	opx2.QueryNode_Text("num3733", number1);
	glingminf[32] = atoi(number1);
	opx2.QueryNode_Text("num3734", number1);
	glingminf[33] = atoi(number1);
	opx2.QueryNode_Text("num3735", number1);
	glingminf[34] = atoi(number1);
	opx2.QueryNode_Text("num3736", number1);
	glingminf[35] = atoi(number1);
	opx2.QueryNode_Text("num3737", number1);
	glingminf[36] = atoi(number1);
	opx2.QueryNode_Text("num3738", number1);
	glingminf[37] = atoi(number1);
	opx2.QueryNode_Text("num3739", number1);
	glingminf[38] = atoi(number1);
	opx2.QueryNode_Text("num3740", number1);
	glingminf[39] = atoi(number1);




	opx2.QueryNode_Text("num3801", number1);
	rlingminf[0] = atoi(number1);
	opx2.QueryNode_Text("num3802", number1);
	rlingminf[1] = atoi(number1);
	opx2.QueryNode_Text("num3803", number1);
	rlingminf[2] = atoi(number1);
	opx2.QueryNode_Text("num3804", number1);
	rlingminf[3] = atoi(number1);
	opx2.QueryNode_Text("num3805", number1);
	rlingminf[4] = atoi(number1);
	opx2.QueryNode_Text("num3806", number1);
	rlingminf[5] = atoi(number1);
	opx2.QueryNode_Text("num3807", number1);
	rlingminf[6] = atoi(number1);
	opx2.QueryNode_Text("num3808", number1);
	rlingminf[7] = atoi(number1);
	opx2.QueryNode_Text("num3809", number1);
	rlingminf[8] = atoi(number1);
	opx2.QueryNode_Text("num3810", number1);
	rlingminf[9] = atoi(number1);
	opx2.QueryNode_Text("num3811", number1);
	rlingminf[10] = atoi(number1);
	opx2.QueryNode_Text("num3812", number1);
	rlingminf[11] = atoi(number1);
	opx2.QueryNode_Text("num3813", number1);
	rlingminf[12] = atoi(number1);
	opx2.QueryNode_Text("num3814", number1);
	rlingminf[13] = atoi(number1);
	opx2.QueryNode_Text("num3815", number1);
	rlingminf[14] = atoi(number1);
	opx2.QueryNode_Text("num3816", number1);
	rlingminf[15] = atoi(number1);
	opx2.QueryNode_Text("num3817", number1);
	rlingminf[16] = atoi(number1);
	opx2.QueryNode_Text("num3818", number1);
	rlingminf[17] = atoi(number1);
	opx2.QueryNode_Text("num3819", number1);
	rlingminf[18] = atoi(number1);
	opx2.QueryNode_Text("num3820", number1);
	rlingminf[19] = atoi(number1);
	opx2.QueryNode_Text("num3821", number1);
	rlingminf[20] = atoi(number1);
	opx2.QueryNode_Text("num3822", number1);
	rlingminf[21] = atoi(number1);
	opx2.QueryNode_Text("num3823", number1);
	rlingminf[22] = atoi(number1);
	opx2.QueryNode_Text("num3824", number1);
	rlingminf[23] = atoi(number1);
	opx2.QueryNode_Text("num3825", number1);
	rlingminf[24] = atoi(number1);
	opx2.QueryNode_Text("num3826", number1);
	rlingminf[25] = atoi(number1);
	opx2.QueryNode_Text("num3827", number1);
	rlingminf[26] = atoi(number1);
	opx2.QueryNode_Text("num3828", number1);
	rlingminf[27] = atoi(number1);
	opx2.QueryNode_Text("num3829", number1);
	rlingminf[28] = atoi(number1);
	opx2.QueryNode_Text("num3830", number1);
	rlingminf[29] = atoi(number1);
	opx2.QueryNode_Text("num3831", number1);
	rlingminf[30] = atoi(number1);
	opx2.QueryNode_Text("num3832", number1);
	rlingminf[31] = atoi(number1);
	opx2.QueryNode_Text("num3833", number1);
	rlingminf[32] = atoi(number1);
	opx2.QueryNode_Text("num3834", number1);
	rlingminf[33] = atoi(number1);
	opx2.QueryNode_Text("num3835", number1);
	rlingminf[34] = atoi(number1);
	opx2.QueryNode_Text("num3836", number1);
	rlingminf[35] = atoi(number1);
	opx2.QueryNode_Text("num3837", number1);
	rlingminf[36] = atoi(number1);
	opx2.QueryNode_Text("num3838", number1);
	rlingminf[37] = atoi(number1);
	opx2.QueryNode_Text("num3839", number1);
	rlingminf[38] = atoi(number1);
	opx2.QueryNode_Text("num3840", number1);
	rlingminf[39] = atoi(number1);


	opx2.QueryNode_Text("num3901", number1);
	hunlingminf[0] = atoi(number1);
	opx2.QueryNode_Text("num3902", number1);
	hunlingminf[1] = atoi(number1);
	opx2.QueryNode_Text("num3903", number1);
	hunlingminf[2] = atoi(number1);
	opx2.QueryNode_Text("num3904", number1);
	hunlingminf[3] = atoi(number1);
	opx2.QueryNode_Text("num3905", number1);
	hunlingminf[4] = atoi(number1);
	opx2.QueryNode_Text("num3906", number1);
	hunlingminf[5] = atoi(number1);
	opx2.QueryNode_Text("num3907", number1);
	hunlingminf[6] = atoi(number1);
	opx2.QueryNode_Text("num3908", number1);
	hunlingminf[7] = atoi(number1);
	opx2.QueryNode_Text("num3909", number1);
	hunlingminf[8] = atoi(number1);
	opx2.QueryNode_Text("num3910", number1);
	hunlingminf[9] = atoi(number1);
	opx2.QueryNode_Text("num3911", number1);
	hunlingminf[10] = atoi(number1);
	opx2.QueryNode_Text("num3912", number1);
	hunlingminf[11] = atoi(number1);
	opx2.QueryNode_Text("num3913", number1);
	hunlingminf[12] = atoi(number1);
	opx2.QueryNode_Text("num3914", number1);
	hunlingminf[13] = atoi(number1);
	opx2.QueryNode_Text("num3915", number1);
	hunlingminf[14] = atoi(number1);
	opx2.QueryNode_Text("num3916", number1);
	hunlingminf[15] = atoi(number1);
	opx2.QueryNode_Text("num3917", number1);
	hunlingminf[16] = atoi(number1);
	opx2.QueryNode_Text("num3918", number1);
	hunlingminf[17] = atoi(number1);
	opx2.QueryNode_Text("num3919", number1);
	hunlingminf[18] = atoi(number1);
	opx2.QueryNode_Text("num3920", number1);
	hunlingminf[19] = atoi(number1);
	opx2.QueryNode_Text("num3921", number1);
	hunlingminf[20] = atoi(number1);
	opx2.QueryNode_Text("num3922", number1);
	hunlingminf[21] = atoi(number1);
	opx2.QueryNode_Text("num3923", number1);
	hunlingminf[22] = atoi(number1);
	opx2.QueryNode_Text("num3924", number1);
	hunlingminf[23] = atoi(number1);
	opx2.QueryNode_Text("num3925", number1);
	hunlingminf[24] = atoi(number1);
	opx2.QueryNode_Text("num3926", number1);
	hunlingminf[25] = atoi(number1);
	opx2.QueryNode_Text("num3927", number1);
	hunlingminf[26] = atoi(number1);
	opx2.QueryNode_Text("num3928", number1);
	hunlingminf[27] = atoi(number1);
	opx2.QueryNode_Text("num3929", number1);
	hunlingminf[28] = atoi(number1);
	opx2.QueryNode_Text("num3930", number1);
	hunlingminf[29] = atoi(number1);
	opx2.QueryNode_Text("num3931", number1);
	hunlingminf[30] = atoi(number1);
	opx2.QueryNode_Text("num3932", number1);
	hunlingminf[31] = atoi(number1);
	opx2.QueryNode_Text("num3933", number1);
	hunlingminf[32] = atoi(number1);
	opx2.QueryNode_Text("num3934", number1);
	hunlingminf[33] = atoi(number1);
	opx2.QueryNode_Text("num3935", number1);
	hunlingminf[34] = atoi(number1);
	opx2.QueryNode_Text("num3936", number1);
	hunlingminf[35] = atoi(number1);
	opx2.QueryNode_Text("num3937", number1);
	hunlingminf[36] = atoi(number1);
	opx2.QueryNode_Text("num3938", number1);
	hunlingminf[37] = atoi(number1);
	opx2.QueryNode_Text("num3939", number1);
	hunlingminf[38] = atoi(number1);
	opx2.QueryNode_Text("num3940", number1);
	hunlingminf[39] = atoi(number1);



	opx2.QueryNode_Text("num4001", number1);
	quyuf[0] = atoi(number1);
	opx2.QueryNode_Text("num4002", number1);
	quyuf[1] = atoi(number1);
	opx2.QueryNode_Text("num4003", number1);
	quyuf[2] = atoi(number1);
	opx2.QueryNode_Text("num4004", number1);
	quyuf[3] = atoi(number1);
	opx2.QueryNode_Text("num4005", number1);
	quyuf[4] = atoi(number1);
	opx2.QueryNode_Text("num4006", number1);
	quyuf[5] = atoi(number1);
	opx2.QueryNode_Text("num4007", number1);
	quyuf[6] = atoi(number1);
	opx2.QueryNode_Text("num4008", number1);
	quyuf[7] = atoi(number1);
	opx2.QueryNode_Text("num4009", number1);
	quyuf[8] = atoi(number1);
	opx2.QueryNode_Text("num4010", number1);
	quyuf[9] = atoi(number1);
	opx2.QueryNode_Text("num4011", number1);
	quyuf[10] = atoi(number1);
	opx2.QueryNode_Text("num4012", number1);
	quyuf[11] = atoi(number1);
	opx2.QueryNode_Text("num4013", number1);
	quyuf[12] = atoi(number1);
	opx2.QueryNode_Text("num4014", number1);
	quyuf[13] = atoi(number1);
	opx2.QueryNode_Text("num4015", number1);
	quyuf[14] = atoi(number1);
	opx2.QueryNode_Text("num4016", number1);
	quyuf[15] = atoi(number1);
	opx2.QueryNode_Text("num4017", number1);
	quyuf[16] = atoi(number1);
	opx2.QueryNode_Text("num4018", number1);
	quyuf[17] = atoi(number1);
	opx2.QueryNode_Text("num4019", number1);
	quyuf[18] = atoi(number1);
	opx2.QueryNode_Text("num4020", number1);
	quyuf[19] = atoi(number1);
	opx2.QueryNode_Text("num4021", number1);
	quyuf[20] = atoi(number1);
	opx2.QueryNode_Text("num4022", number1);
	quyuf[21] = atoi(number1);
	opx2.QueryNode_Text("num4023", number1);
	quyuf[22] = atoi(number1);
	opx2.QueryNode_Text("num4024", number1);
	quyuf[23] = atoi(number1);
	opx2.QueryNode_Text("num4025", number1);
	quyuf[24] = atoi(number1);
	opx2.QueryNode_Text("num4026", number1);
	quyuf[25] = atoi(number1);
	opx2.QueryNode_Text("num4027", number1);
	quyuf[26] = atoi(number1);
	opx2.QueryNode_Text("num4028", number1);
	quyuf[27] = atoi(number1);
	opx2.QueryNode_Text("num4029", number1);
	quyuf[28] = atoi(number1);
	opx2.QueryNode_Text("num4030", number1);
	quyuf[29] = atoi(number1);
	opx2.QueryNode_Text("num4031", number1);
	quyuf[30] = atoi(number1);
	opx2.QueryNode_Text("num4032", number1);
	quyuf[31] = atoi(number1);
	opx2.QueryNode_Text("num4033", number1);
	quyuf[32] = atoi(number1);
	opx2.QueryNode_Text("num4034", number1);
	quyuf[33] = atoi(number1);
	opx2.QueryNode_Text("num4035", number1);
	quyuf[34] = atoi(number1);
	opx2.QueryNode_Text("num4036", number1);
	quyuf[35] = atoi(number1);
	opx2.QueryNode_Text("num4037", number1);
	quyuf[36] = atoi(number1);
	opx2.QueryNode_Text("num4038", number1);
	quyuf[37] = atoi(number1);
	opx2.QueryNode_Text("num4039", number1);
	quyuf[38] = atoi(number1);
	opx2.QueryNode_Text("num4040", number1);
	quyuf[39] = atoi(number1);


	opx2.QueryNode_Text("num4101", number1);
	quyuerf[0] = atoi(number1);
	opx2.QueryNode_Text("num4102", number1);
	quyuerf[1] = atoi(number1);
	opx2.QueryNode_Text("num4103", number1);
	quyuerf[2] = atoi(number1);
	opx2.QueryNode_Text("num4104", number1);
	quyuerf[3] = atoi(number1);
	opx2.QueryNode_Text("num4105", number1);
	quyuerf[4] = atoi(number1);
	opx2.QueryNode_Text("num4106", number1);
	quyuerf[5] = atoi(number1);
	opx2.QueryNode_Text("num4107", number1);
	quyuerf[6] = atoi(number1);
	opx2.QueryNode_Text("num4108", number1);
	quyuerf[7] = atoi(number1);
	opx2.QueryNode_Text("num4109", number1);
	quyuerf[8] = atoi(number1);
	opx2.QueryNode_Text("num4110", number1);
	quyuerf[9] = atoi(number1);
	opx2.QueryNode_Text("num4111", number1);
	quyuerf[10] = atoi(number1);
	opx2.QueryNode_Text("num4112", number1);
	quyuerf[11] = atoi(number1);
	opx2.QueryNode_Text("num4113", number1);
	quyuerf[12] = atoi(number1);
	opx2.QueryNode_Text("num4114", number1);
	quyuerf[13] = atoi(number1);
	opx2.QueryNode_Text("num4115", number1);
	quyuerf[14] = atoi(number1);
	opx2.QueryNode_Text("num4116", number1);
	quyuerf[15] = atoi(number1);
	opx2.QueryNode_Text("num4117", number1);
	quyuerf[16] = atoi(number1);
	opx2.QueryNode_Text("num4118", number1);
	quyuerf[17] = atoi(number1);
	opx2.QueryNode_Text("num4119", number1);
	quyuerf[18] = atoi(number1);
	opx2.QueryNode_Text("num4120", number1);
	quyuerf[19] = atoi(number1);
	opx2.QueryNode_Text("num4121", number1);
	quyuerf[20] = atoi(number1);
	opx2.QueryNode_Text("num4122", number1);
	quyuerf[21] = atoi(number1);
	opx2.QueryNode_Text("num4123", number1);
	quyuerf[22] = atoi(number1);
	opx2.QueryNode_Text("num4124", number1);
	quyuerf[23] = atoi(number1);
	opx2.QueryNode_Text("num4125", number1);
	quyuerf[24] = atoi(number1);
	opx2.QueryNode_Text("num4126", number1);
	quyuerf[25] = atoi(number1);
	opx2.QueryNode_Text("num4127", number1);
	quyuerf[26] = atoi(number1);
	opx2.QueryNode_Text("num4128", number1);
	quyuerf[27] = atoi(number1);
	opx2.QueryNode_Text("num4129", number1);
	quyuerf[28] = atoi(number1);
	opx2.QueryNode_Text("num4130", number1);
	quyuerf[29] = atoi(number1);
	opx2.QueryNode_Text("num4131", number1);
	quyuerf[30] = atoi(number1);
	opx2.QueryNode_Text("num4132", number1);
	quyuerf[31] = atoi(number1);
	opx2.QueryNode_Text("num4133", number1);
	quyuerf[32] = atoi(number1);
	opx2.QueryNode_Text("num4134", number1);
	quyuerf[33] = atoi(number1);
	opx2.QueryNode_Text("num4135", number1);
	quyuerf[34] = atoi(number1);
	opx2.QueryNode_Text("num4136", number1);
	quyuerf[35] = atoi(number1);
	opx2.QueryNode_Text("num4137", number1);
	quyuerf[36] = atoi(number1);
	opx2.QueryNode_Text("num4138", number1);
	quyuerf[37] = atoi(number1);
	opx2.QueryNode_Text("num4139", number1);
	quyuerf[38] = atoi(number1);
	opx2.QueryNode_Text("num4140", number1);
	quyuerf[39] = atoi(number1);


	opx2.QueryNode_Text("num4201", number1);
	quyusanf[0] = atoi(number1);
	opx2.QueryNode_Text("num4202", number1);
	quyusanf[1] = atoi(number1);
	opx2.QueryNode_Text("num4203", number1);
	quyusanf[2] = atoi(number1);
	opx2.QueryNode_Text("num4204", number1);
	quyusanf[3] = atoi(number1);
	opx2.QueryNode_Text("num4205", number1);
	quyusanf[4] = atoi(number1);
	opx2.QueryNode_Text("num4206", number1);
	quyusanf[5] = atoi(number1);
	opx2.QueryNode_Text("num4207", number1);
	quyusanf[6] = atoi(number1);
	opx2.QueryNode_Text("num4208", number1);
	quyusanf[7] = atoi(number1);
	opx2.QueryNode_Text("num4209", number1);
	quyusanf[8] = atoi(number1);
	opx2.QueryNode_Text("num4210", number1);
	quyusanf[9] = atoi(number1);
	opx2.QueryNode_Text("num4211", number1);
	quyusanf[10] = atoi(number1);
	opx2.QueryNode_Text("num4212", number1);
	quyusanf[11] = atoi(number1);
	opx2.QueryNode_Text("num4213", number1);
	quyusanf[12] = atoi(number1);
	opx2.QueryNode_Text("num4214", number1);
	quyusanf[13] = atoi(number1);
	opx2.QueryNode_Text("num4215", number1);
	quyusanf[14] = atoi(number1);
	opx2.QueryNode_Text("num4216", number1);
	quyusanf[15] = atoi(number1);
	opx2.QueryNode_Text("num4217", number1);
	quyusanf[16] = atoi(number1);
	opx2.QueryNode_Text("num4218", number1);
	quyusanf[17] = atoi(number1);
	opx2.QueryNode_Text("num4219", number1);
	quyusanf[18] = atoi(number1);
	opx2.QueryNode_Text("num4220", number1);
	quyusanf[19] = atoi(number1);
	opx2.QueryNode_Text("num4221", number1);
	quyusanf[20] = atoi(number1);
	opx2.QueryNode_Text("num4222", number1);
	quyusanf[21] = atoi(number1);
	opx2.QueryNode_Text("num4223", number1);
	quyusanf[22] = atoi(number1);
	opx2.QueryNode_Text("num4224", number1);
	quyusanf[23] = atoi(number1);
	opx2.QueryNode_Text("num4225", number1);
	quyusanf[24] = atoi(number1);
	opx2.QueryNode_Text("num4226", number1);
	quyusanf[25] = atoi(number1);
	opx2.QueryNode_Text("num4227", number1);
	quyusanf[26] = atoi(number1);
	opx2.QueryNode_Text("num4228", number1);
	quyusanf[27] = atoi(number1);
	opx2.QueryNode_Text("num4229", number1);
	quyusanf[28] = atoi(number1);
	opx2.QueryNode_Text("num4230", number1);
	quyusanf[29] = atoi(number1);
	opx2.QueryNode_Text("num4231", number1);
	quyusanf[30] = atoi(number1);
	opx2.QueryNode_Text("num4232", number1);
	quyusanf[31] = atoi(number1);
	opx2.QueryNode_Text("num4233", number1);
	quyusanf[32] = atoi(number1);
	opx2.QueryNode_Text("num4234", number1);
	quyusanf[33] = atoi(number1);
	opx2.QueryNode_Text("num4235", number1);
	quyusanf[34] = atoi(number1);
	opx2.QueryNode_Text("num4236", number1);
	quyusanf[35] = atoi(number1);
	opx2.QueryNode_Text("num4237", number1);
	quyusanf[36] = atoi(number1);
	opx2.QueryNode_Text("num4238", number1);
	quyusanf[37] = atoi(number1);
	opx2.QueryNode_Text("num4239", number1);
	quyusanf[38] = atoi(number1);
	opx2.QueryNode_Text("num4240", number1);
	quyusanf[39] = atoi(number1);

	opx2.QueryNode_Text("num4301", number1);
	quyusif[0] = atoi(number1);
	opx2.QueryNode_Text("num4302", number1);
	quyusif[1] = atoi(number1);
	opx2.QueryNode_Text("num4303", number1);
	quyusif[2] = atoi(number1);
	opx2.QueryNode_Text("num4304", number1);
	quyusif[3] = atoi(number1);
	opx2.QueryNode_Text("num4305", number1);
	quyusif[4] = atoi(number1);
	opx2.QueryNode_Text("num4306", number1);
	quyusif[5] = atoi(number1);
	opx2.QueryNode_Text("num4307", number1);
	quyusif[6] = atoi(number1);
	opx2.QueryNode_Text("num4308", number1);
	quyusif[7] = atoi(number1);
	opx2.QueryNode_Text("num4309", number1);
	quyusif[8] = atoi(number1);
	opx2.QueryNode_Text("num4310", number1);
	quyusif[9] = atoi(number1);
	opx2.QueryNode_Text("num4311", number1);
	quyusif[10] = atoi(number1);
	opx2.QueryNode_Text("num4312", number1);
	quyusif[11] = atoi(number1);
	opx2.QueryNode_Text("num4313", number1);
	quyusif[12] = atoi(number1);
	opx2.QueryNode_Text("num4314", number1);
	quyusif[13] = atoi(number1);
	opx2.QueryNode_Text("num4315", number1);
	quyusif[14] = atoi(number1);
	opx2.QueryNode_Text("num4316", number1);
	quyusif[15] = atoi(number1);
	opx2.QueryNode_Text("num4317", number1);
	quyusif[16] = atoi(number1);
	opx2.QueryNode_Text("num4318", number1);
	quyusif[17] = atoi(number1);
	opx2.QueryNode_Text("num4319", number1);
	quyusif[18] = atoi(number1);
	opx2.QueryNode_Text("num4320", number1);
	quyusif[19] = atoi(number1);
	opx2.QueryNode_Text("num4321", number1);
	quyusif[20] = atoi(number1);
	opx2.QueryNode_Text("num4322", number1);
	quyusif[21] = atoi(number1);
	opx2.QueryNode_Text("num4323", number1);
	quyusif[22] = atoi(number1);
	opx2.QueryNode_Text("num4324", number1);
	quyusif[23] = atoi(number1);
	opx2.QueryNode_Text("num4325", number1);
	quyusif[24] = atoi(number1);
	opx2.QueryNode_Text("num4326", number1);
	quyusif[25] = atoi(number1);
	opx2.QueryNode_Text("num4327", number1);
	quyusif[26] = atoi(number1);
	opx2.QueryNode_Text("num4328", number1);
	quyusif[27] = atoi(number1);
	opx2.QueryNode_Text("num4329", number1);
	quyusif[28] = atoi(number1);
	opx2.QueryNode_Text("num4330", number1);
	quyusif[29] = atoi(number1);
	opx2.QueryNode_Text("num4331", number1);
	quyusif[30] = atoi(number1);
	opx2.QueryNode_Text("num4332", number1);
	quyusif[31] = atoi(number1);
	opx2.QueryNode_Text("num4333", number1);
	quyusif[32] = atoi(number1);
	opx2.QueryNode_Text("num4334", number1);
	quyusif[33] = atoi(number1);
	opx2.QueryNode_Text("num4335", number1);
	quyusif[34] = atoi(number1);
	opx2.QueryNode_Text("num4336", number1);
	quyusif[35] = atoi(number1);
	opx2.QueryNode_Text("num4337", number1);
	quyusif[36] = atoi(number1);
	opx2.QueryNode_Text("num4338", number1);
	quyusif[37] = atoi(number1);
	opx2.QueryNode_Text("num4339", number1);
	quyusif[38] = atoi(number1);
	opx2.QueryNode_Text("num4340", number1);
	quyusif[39] = atoi(number1);

	opx2.QueryNode_Text("num4401", number1);
	quyuwuf[0] = atoi(number1);
	opx2.QueryNode_Text("num4402", number1);
	quyuwuf[1] = atoi(number1);
	opx2.QueryNode_Text("num4403", number1);
	quyuwuf[2] = atoi(number1);
	opx2.QueryNode_Text("num4404", number1);
	quyuwuf[3] = atoi(number1);
	opx2.QueryNode_Text("num4405", number1);
	quyuwuf[4] = atoi(number1);
	opx2.QueryNode_Text("num4406", number1);
	quyuwuf[5] = atoi(number1);
	opx2.QueryNode_Text("num4407", number1);
	quyuwuf[6] = atoi(number1);
	opx2.QueryNode_Text("num4408", number1);
	quyuwuf[7] = atoi(number1);
	opx2.QueryNode_Text("num4409", number1);
	quyuwuf[8] = atoi(number1);
	opx2.QueryNode_Text("num4410", number1);
	quyuwuf[9] = atoi(number1);
	opx2.QueryNode_Text("num4411", number1);
	quyuwuf[10] = atoi(number1);
	opx2.QueryNode_Text("num4412", number1);
	quyuwuf[11] = atoi(number1);
	opx2.QueryNode_Text("num4413", number1);
	quyuwuf[12] = atoi(number1);
	opx2.QueryNode_Text("num4414", number1);
	quyuwuf[13] = atoi(number1);
	opx2.QueryNode_Text("num4415", number1);
	quyuwuf[14] = atoi(number1);
	opx2.QueryNode_Text("num4416", number1);
	quyuwuf[15] = atoi(number1);
	opx2.QueryNode_Text("num4417", number1);
	quyuwuf[16] = atoi(number1);
	opx2.QueryNode_Text("num4418", number1);
	quyuwuf[17] = atoi(number1);
	opx2.QueryNode_Text("num4419", number1);
	quyuwuf[18] = atoi(number1);
	opx2.QueryNode_Text("num4420", number1);
	quyuwuf[19] = atoi(number1);
	opx2.QueryNode_Text("num4421", number1);
	quyuwuf[20] = atoi(number1);
	opx2.QueryNode_Text("num4422", number1);
	quyuwuf[21] = atoi(number1);
	opx2.QueryNode_Text("num4423", number1);
	quyuwuf[22] = atoi(number1);
	opx2.QueryNode_Text("num4424", number1);
	quyuwuf[23] = atoi(number1);
	opx2.QueryNode_Text("num4425", number1);
	quyuwuf[24] = atoi(number1);
	opx2.QueryNode_Text("num4426", number1);
	quyuwuf[25] = atoi(number1);
	opx2.QueryNode_Text("num4427", number1);
	quyuwuf[26] = atoi(number1);
	opx2.QueryNode_Text("num4428", number1);
	quyuwuf[27] = atoi(number1);
	opx2.QueryNode_Text("num4429", number1);
	quyuwuf[28] = atoi(number1);
	opx2.QueryNode_Text("num4430", number1);
	quyuwuf[29] = atoi(number1);
	opx2.QueryNode_Text("num4431", number1);
	quyuwuf[30] = atoi(number1);
	opx2.QueryNode_Text("num4432", number1);
	quyuwuf[31] = atoi(number1);
	opx2.QueryNode_Text("num4433", number1);
	quyuwuf[32] = atoi(number1);
	opx2.QueryNode_Text("num4434", number1);
	quyuwuf[33] = atoi(number1);
	opx2.QueryNode_Text("num4435", number1);
	quyuwuf[34] = atoi(number1);
	opx2.QueryNode_Text("num4436", number1);
	quyuwuf[35] = atoi(number1);
	opx2.QueryNode_Text("num4437", number1);
	quyuwuf[36] = atoi(number1);
	opx2.QueryNode_Text("num4438", number1);
	quyuwuf[37] = atoi(number1);
	opx2.QueryNode_Text("num4439", number1);
	quyuwuf[38] = atoi(number1);
	opx2.QueryNode_Text("num4440", number1);
	quyuwuf[39] = atoi(number1);


	opx2.QueryNode_Text("num4501", number1);
	shenduf[0] = atoi(number1);
	opx2.QueryNode_Text("num4502", number1);
	shenduf[1] = atoi(number1);
	opx2.QueryNode_Text("num4503", number1);
	shenduf[2] = atoi(number1);
	opx2.QueryNode_Text("num4504", number1);
	shenduf[3] = atoi(number1);
	opx2.QueryNode_Text("num4505", number1);
	shenduf[4] = atoi(number1);
	opx2.QueryNode_Text("num4506", number1);
	shenduf[5] = atoi(number1);
	opx2.QueryNode_Text("num4507", number1);
	shenduf[6] = atoi(number1);
	opx2.QueryNode_Text("num4508", number1);
	shenduf[7] = atoi(number1);
	opx2.QueryNode_Text("num4509", number1);
	shenduf[8] = atoi(number1);
	opx2.QueryNode_Text("num4510", number1);
	shenduf[9] = atoi(number1);
	opx2.QueryNode_Text("num4511", number1);
	shenduf[10] = atoi(number1);
	opx2.QueryNode_Text("num4512", number1);
	shenduf[11] = atoi(number1);
	opx2.QueryNode_Text("num4513", number1);
	shenduf[12] = atoi(number1);
	opx2.QueryNode_Text("num4514", number1);
	shenduf[13] = atoi(number1);
	opx2.QueryNode_Text("num4515", number1);
	shenduf[14] = atoi(number1);
	opx2.QueryNode_Text("num4516", number1);
	shenduf[15] = atoi(number1);
	opx2.QueryNode_Text("num4517", number1);
	shenduf[16] = atoi(number1);
	opx2.QueryNode_Text("num4518", number1);
	shenduf[17] = atoi(number1);
	opx2.QueryNode_Text("num4519", number1);
	shenduf[18] = atoi(number1);
	opx2.QueryNode_Text("num4520", number1);
	shenduf[19] = atoi(number1);
	opx2.QueryNode_Text("num4521", number1);
	shenduf[20] = atoi(number1);
	opx2.QueryNode_Text("num4522", number1);
	shenduf[21] = atoi(number1);
	opx2.QueryNode_Text("num4523", number1);
	shenduf[22] = atoi(number1);
	opx2.QueryNode_Text("num4524", number1);
	shenduf[23] = atoi(number1);
	opx2.QueryNode_Text("num4525", number1);
	shenduf[24] = atoi(number1);
	opx2.QueryNode_Text("num4526", number1);
	shenduf[25] = atoi(number1);
	opx2.QueryNode_Text("num4527", number1);
	shenduf[26] = atoi(number1);
	opx2.QueryNode_Text("num4528", number1);
	shenduf[27] = atoi(number1);
	opx2.QueryNode_Text("num4529", number1);
	shenduf[28] = atoi(number1);
	opx2.QueryNode_Text("num4530", number1);
	shenduf[29] = atoi(number1);
	opx2.QueryNode_Text("num4531", number1);
	shenduf[30] = atoi(number1);
	opx2.QueryNode_Text("num4532", number1);
	shenduf[31] = atoi(number1);
	opx2.QueryNode_Text("num4533", number1);
	shenduf[32] = atoi(number1);
	opx2.QueryNode_Text("num4534", number1);
	shenduf[33] = atoi(number1);
	opx2.QueryNode_Text("num4535", number1);
	shenduf[34] = atoi(number1);
	opx2.QueryNode_Text("num4536", number1);
	shenduf[35] = atoi(number1);
	opx2.QueryNode_Text("num4537", number1);
	shenduf[36] = atoi(number1);
	opx2.QueryNode_Text("num4538", number1);
	shenduf[37] = atoi(number1);
	opx2.QueryNode_Text("num4539", number1);
	shenduf[38] = atoi(number1);
	opx2.QueryNode_Text("num4540", number1);
	shenduf[39] = atoi(number1);



	opx2.QueryNode_Text("num4601", number1);
	shenduerf[0] = atoi(number1);
	opx2.QueryNode_Text("num4602", number1);
	shenduerf[1] = atoi(number1);
	opx2.QueryNode_Text("num4603", number1);
	shenduerf[2] = atoi(number1);
	opx2.QueryNode_Text("num4604", number1);
	shenduerf[3] = atoi(number1);
	opx2.QueryNode_Text("num4605", number1);
	shenduerf[4] = atoi(number1);
	opx2.QueryNode_Text("num4606", number1);
	shenduerf[5] = atoi(number1);
	opx2.QueryNode_Text("num4607", number1);
	shenduerf[6] = atoi(number1);
	opx2.QueryNode_Text("num4608", number1);
	shenduerf[7] = atoi(number1);
	opx2.QueryNode_Text("num4609", number1);
	shenduerf[8] = atoi(number1);
	opx2.QueryNode_Text("num4610", number1);
	shenduerf[9] = atoi(number1);
	opx2.QueryNode_Text("num4611", number1);
	shenduerf[10] = atoi(number1);
	opx2.QueryNode_Text("num4612", number1);
	shenduerf[11] = atoi(number1);
	opx2.QueryNode_Text("num4613", number1);
	shenduerf[12] = atoi(number1);
	opx2.QueryNode_Text("num4614", number1);
	shenduerf[13] = atoi(number1);
	opx2.QueryNode_Text("num4615", number1);
	shenduerf[14] = atoi(number1);
	opx2.QueryNode_Text("num4616", number1);
	shenduerf[15] = atoi(number1);
	opx2.QueryNode_Text("num4617", number1);
	shenduerf[16] = atoi(number1);
	opx2.QueryNode_Text("num4618", number1);
	shenduerf[17] = atoi(number1);
	opx2.QueryNode_Text("num4619", number1);
	shenduerf[18] = atoi(number1);
	opx2.QueryNode_Text("num4620", number1);
	shenduerf[19] = atoi(number1);
	opx2.QueryNode_Text("num4621", number1);
	shenduerf[20] = atoi(number1);
	opx2.QueryNode_Text("num4622", number1);
	shenduerf[21] = atoi(number1);
	opx2.QueryNode_Text("num4623", number1);
	shenduerf[22] = atoi(number1);
	opx2.QueryNode_Text("num4624", number1);
	shenduerf[23] = atoi(number1);
	opx2.QueryNode_Text("num4625", number1);
	shenduerf[24] = atoi(number1);
	opx2.QueryNode_Text("num4626", number1);
	shenduerf[25] = atoi(number1);
	opx2.QueryNode_Text("num4627", number1);
	shenduerf[26] = atoi(number1);
	opx2.QueryNode_Text("num4628", number1);
	shenduerf[27] = atoi(number1);
	opx2.QueryNode_Text("num4629", number1);
	shenduerf[28] = atoi(number1);
	opx2.QueryNode_Text("num4630", number1);
	shenduerf[29] = atoi(number1);
	opx2.QueryNode_Text("num4631", number1);
	shenduerf[30] = atoi(number1);
	opx2.QueryNode_Text("num4632", number1);
	shenduerf[31] = atoi(number1);
	opx2.QueryNode_Text("num4633", number1);
	shenduerf[32] = atoi(number1);
	opx2.QueryNode_Text("num4634", number1);
	shenduerf[33] = atoi(number1);
	opx2.QueryNode_Text("num4635", number1);
	shenduerf[34] = atoi(number1);
	opx2.QueryNode_Text("num4636", number1);
	shenduerf[35] = atoi(number1);
	opx2.QueryNode_Text("num4637", number1);
	shenduerf[36] = atoi(number1);
	opx2.QueryNode_Text("num4638", number1);
	shenduerf[37] = atoi(number1);
	opx2.QueryNode_Text("num4639", number1);
	shenduerf[38] = atoi(number1);
	opx2.QueryNode_Text("num4640", number1);
	shenduerf[39] = atoi(number1);



	opx2.QueryNode_Text("num4701", number1);
	huif[0] = atoi(number1);
	opx2.QueryNode_Text("num4702", number1);
	huif[1] = atoi(number1);
	opx2.QueryNode_Text("num4703", number1);
	huif[2] = atoi(number1);
	opx2.QueryNode_Text("num4704", number1);
	huif[3] = atoi(number1);
	opx2.QueryNode_Text("num4705", number1);
	huif[4] = atoi(number1);
	opx2.QueryNode_Text("num4706", number1);
	huif[5] = atoi(number1);
	opx2.QueryNode_Text("num4707", number1);
	huif[6] = atoi(number1);
	opx2.QueryNode_Text("num4708", number1);
	huif[7] = atoi(number1);
	opx2.QueryNode_Text("num4709", number1);
	huif[8] = atoi(number1);
	opx2.QueryNode_Text("num4710", number1);
	huif[9] = atoi(number1);
	opx2.QueryNode_Text("num4711", number1);
	huif[10] = atoi(number1);
	opx2.QueryNode_Text("num4712", number1);
	huif[11] = atoi(number1);
	opx2.QueryNode_Text("num4713", number1);
	huif[12] = atoi(number1);
	opx2.QueryNode_Text("num4714", number1);
	huif[13] = atoi(number1);
	opx2.QueryNode_Text("num4715", number1);
	huif[14] = atoi(number1);
	opx2.QueryNode_Text("num4716", number1);
	huif[15] = atoi(number1);
	opx2.QueryNode_Text("num4717", number1);
	huif[16] = atoi(number1);
	opx2.QueryNode_Text("num4718", number1);
	huif[17] = atoi(number1);
	opx2.QueryNode_Text("num4719", number1);
	huif[18] = atoi(number1);
	opx2.QueryNode_Text("num4720", number1);
	huif[19] = atoi(number1);
	opx2.QueryNode_Text("num4721", number1);
	huif[20] = atoi(number1);
	opx2.QueryNode_Text("num4722", number1);
	huif[21] = atoi(number1);
	opx2.QueryNode_Text("num4723", number1);
	huif[22] = atoi(number1);
	opx2.QueryNode_Text("num4724", number1);
	huif[23] = atoi(number1);
	opx2.QueryNode_Text("num4725", number1);
	huif[24] = atoi(number1);
	opx2.QueryNode_Text("num4726", number1);
	huif[25] = atoi(number1);
	opx2.QueryNode_Text("num4727", number1);
	huif[26] = atoi(number1);
	opx2.QueryNode_Text("num4728", number1);
	huif[27] = atoi(number1);
	opx2.QueryNode_Text("num4729", number1);
	huif[28] = atoi(number1);
	opx2.QueryNode_Text("num4730", number1);
	huif[29] = atoi(number1);
	opx2.QueryNode_Text("num4731", number1);
	huif[30] = atoi(number1);
	opx2.QueryNode_Text("num4732", number1);
	huif[31] = atoi(number1);
	opx2.QueryNode_Text("num4733", number1);
	huif[32] = atoi(number1);
	opx2.QueryNode_Text("num4734", number1);
	huif[33] = atoi(number1);
	opx2.QueryNode_Text("num4735", number1);
	huif[34] = atoi(number1);
	opx2.QueryNode_Text("num4736", number1);
	huif[35] = atoi(number1);
	opx2.QueryNode_Text("num4737", number1);
	huif[36] = atoi(number1);
	opx2.QueryNode_Text("num4738", number1);
	huif[37] = atoi(number1);
	opx2.QueryNode_Text("num4739", number1);
	huif[38] = atoi(number1);
	opx2.QueryNode_Text("num4740", number1);
	huif[39] = atoi(number1);



	opx2.QueryNode_Text("num4801", number1);
	huierf[0] = atoi(number1);
	opx2.QueryNode_Text("num4802", number1);
	huierf[1] = atoi(number1);
	opx2.QueryNode_Text("num4803", number1);
	huierf[2] = atoi(number1);
	opx2.QueryNode_Text("num4804", number1);
	huierf[3] = atoi(number1);
	opx2.QueryNode_Text("num4805", number1);
	huierf[4] = atoi(number1);
	opx2.QueryNode_Text("num4806", number1);
	huierf[5] = atoi(number1);
	opx2.QueryNode_Text("num4807", number1);
	huierf[6] = atoi(number1);
	opx2.QueryNode_Text("num4808", number1);
	huierf[7] = atoi(number1);
	opx2.QueryNode_Text("num4809", number1);
	huierf[8] = atoi(number1);
	opx2.QueryNode_Text("num4810", number1);
	huierf[9] = atoi(number1);
	opx2.QueryNode_Text("num4811", number1);
	huierf[10] = atoi(number1);
	opx2.QueryNode_Text("num4812", number1);
	huierf[11] = atoi(number1);
	opx2.QueryNode_Text("num4813", number1);
	huierf[12] = atoi(number1);
	opx2.QueryNode_Text("num4814", number1);
	huierf[13] = atoi(number1);
	opx2.QueryNode_Text("num4815", number1);
	huierf[14] = atoi(number1);
	opx2.QueryNode_Text("num4816", number1);
	huierf[15] = atoi(number1);
	opx2.QueryNode_Text("num4817", number1);
	huierf[16] = atoi(number1);
	opx2.QueryNode_Text("num4818", number1);
	huierf[17] = atoi(number1);
	opx2.QueryNode_Text("num4819", number1);
	huierf[18] = atoi(number1);
	opx2.QueryNode_Text("num4820", number1);
	huierf[19] = atoi(number1);
	opx2.QueryNode_Text("num4821", number1);
	huierf[20] = atoi(number1);
	opx2.QueryNode_Text("num4822", number1);
	huierf[21] = atoi(number1);
	opx2.QueryNode_Text("num4823", number1);
	huierf[22] = atoi(number1);
	opx2.QueryNode_Text("num4824", number1);
	huierf[23] = atoi(number1);
	opx2.QueryNode_Text("num4825", number1);
	huierf[24] = atoi(number1);
	opx2.QueryNode_Text("num4826", number1);
	huierf[25] = atoi(number1);
	opx2.QueryNode_Text("num4827", number1);
	huierf[26] = atoi(number1);
	opx2.QueryNode_Text("num4828", number1);
	huierf[27] = atoi(number1);
	opx2.QueryNode_Text("num4829", number1);
	huierf[28] = atoi(number1);
	opx2.QueryNode_Text("num4830", number1);
	huierf[29] = atoi(number1);
	opx2.QueryNode_Text("num4831", number1);
	huierf[30] = atoi(number1);
	opx2.QueryNode_Text("num4832", number1);
	huierf[31] = atoi(number1);
	opx2.QueryNode_Text("num4833", number1);
	huierf[32] = atoi(number1);
	opx2.QueryNode_Text("num4834", number1);
	huierf[33] = atoi(number1);
	opx2.QueryNode_Text("num4835", number1);
	huierf[34] = atoi(number1);
	opx2.QueryNode_Text("num4836", number1);
	huierf[35] = atoi(number1);
	opx2.QueryNode_Text("num4837", number1);
	huierf[36] = atoi(number1);
	opx2.QueryNode_Text("num4838", number1);
	huierf[37] = atoi(number1);
	opx2.QueryNode_Text("num4839", number1);
	huierf[38] = atoi(number1);
	opx2.QueryNode_Text("num4840", number1);
	huierf[39] = atoi(number1);
	opx2.SaveFile();

	//CString ComChoosed = _T("COM5");
	//CMyPublicData::ModbusInit(ComChoosed);
	//for (int i = 0; i < 200; i++)
	//{
	//	datatestDPU[i + 4] = allData[1][1 + i];
	//}

	//for (int i = 0; i < 4; i++)
	//{
	//	CMyPublicData::setfunc(32, 16, i * 50 + 1, 50);
	//	CMyPublicData::setfunc(33, 16, i * 50 + 1, 50);
	//}
	////for (int i = 0; i < 200; i += 100)
	////{
	////	CMyPublicData::setfunc(32, 16, i + 1, 100);
	////	CMyPublicData::setfunc(33, 16, i + 1, 100);
	////}

	//for (int i = 0; i < 33; i++)
	//{
	//	datatestDPU[i + 4] = 32;
	//}
	//CMyPublicData::setfunc(32, 16, 32, 33);
	//CMyPublicData::setfunc(33, 16, 32, 33);
	//datatestDPU[4] = 0;
	//datatestDPU[5] = 255;
	//datatestDPU[6] = 0;
	//datatestDPU[7] = 255;
	//datatestDPU[8] = 0;
	//datatestDPU[9] = 255;
	//datatestDPU[10] = 0;
	//datatestDPU[11] = 255;
	//CMyPublicData::setfunc(32, 16, 351, 8);
	//CMyPublicData::setfunc(33, 16, 351, 8);
	////for (int i = 0; i < 400; i++)
	////{
	////	datatestDPU[i + 4] = allData[1][1 + i];
	////}
	////for (int i = 0; i < 8; i++)
	////{
	////	CMyPublicData::setfunc(32, 16, i * 50 + 1, 50);
	////}
	CMyPublicData::setfunc(10, 3, 9, 1);
	if (fanhuizhi == (-1))
	{
		tongxincuowu[0] = -1;
	}
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != L"OFF")
		{
			CMyPublicData::setfunc(32 + i, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				tongxincuowu[i + 1] = -1;
			}
		}
	}

	//向lasttime.xml文件写入通信状态
	//------------------------------------------------//
	string Tstr;
	opXML Topx("lasttime.xml");
	Tstr = Topx.numtoString(tongxincuowu[0]);
	Topx.ModifyNode("num4901", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[1]);
	Topx.ModifyNode("num4902", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[2]);
	Topx.ModifyNode("num4903", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[3]);
	Topx.ModifyNode("num4904", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[4]);
	Topx.ModifyNode("num4905", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[5]);
	Topx.ModifyNode("num4906", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[6]);
	Topx.ModifyNode("num4907", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[7]);
	Topx.ModifyNode("num4908", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[8]);
	Topx.ModifyNode("num4909", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[9]);
	Topx.ModifyNode("num4910", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[10]);
	Topx.ModifyNode("num4911", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[11]);
	Topx.ModifyNode("num4912", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[12]);
	Topx.ModifyNode("num4913", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[13]);
	Topx.ModifyNode("num4914", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[14]);
	Topx.ModifyNode("num4915", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[15]);
	Topx.ModifyNode("num4916", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[16]);
	Topx.ModifyNode("num4917", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[17]);
	Topx.ModifyNode("num4918", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[18]);
	Topx.ModifyNode("num4919", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[19]);
	Topx.ModifyNode("num4920", Tstr);
	Tstr = Topx.numtoString(tongxincuowu[20]);
	Topx.ModifyNode("num4921", Tstr);
	Topx.SaveFile();
	//------------------------------------------------//

	if (tongxincuowu[0] != (-1))
	{
		CMyPublicData::setfunc(10, 3, 9, 1);
		CMyPublicData::bit_set(10, 9, 6, false);                     //阀电源初始化前先关闭
		if (fuzhusd[0] == L"ON")
		{
			CMyPublicData::bit_read(10, 9, 1);
			CMyPublicData::bit_set(10, 9, 1, true);
		}
		if (fuzhusd[0] == L"OFF")
		{
			CMyPublicData::bit_read(10, 9, 1);
			CMyPublicData::bit_set(10, 9, 1, false);
		}
		if (fuzhusd[1] == L"ON")
		{
			CMyPublicData::bit_read(10, 9, 2);
			CMyPublicData::bit_set(10, 9, 2, true);
		}
		if (fuzhusd[1] == L"OFF")
		{
			CMyPublicData::bit_read(10, 9, 2);
			CMyPublicData::bit_set(10, 9, 2, false);
		}
		if (fuzhusd[2] == L"ON")
		{
			CMyPublicData::bit_read(10, 9, 3);
			CMyPublicData::bit_set(10, 9, 3, true);
		}
		if (fuzhusd[2] == L"OFF")
		{
			CMyPublicData::bit_read(10, 9, 3);
			CMyPublicData::bit_set(10, 9, 3, false);
		}
		if (fuzhusd[3] == L"ON")
		{
			CMyPublicData::bit_read(10, 9, 4);
			CMyPublicData::bit_set(10, 9, 4, true);
		}
		if (fuzhusd[3] == L"OFF")
		{
			CMyPublicData::bit_read(10, 9, 4);
			CMyPublicData::bit_set(10, 9, 4, false);
		}
		if (fuzhusd[4] == L"ON")
		{
			CMyPublicData::bit_read(10, 7, 2);
			CMyPublicData::bit_set(10, 7, 2, true);
		}
		if (fuzhusd[4] == L"OFF")
		{
			CMyPublicData::bit_read(10, 7, 2);
			CMyPublicData::bit_set(10, 7, 2, false);
		}
		if (fuzhusd[5] == L"ON")
		{
			CMyPublicData::bit_read(10, 7, 3);
			CMyPublicData::bit_set(10, 7, 3, true);
		}
		if (fuzhusd[5] == L"OFF")
		{
			CMyPublicData::bit_read(10, 7, 3);
			CMyPublicData::bit_set(10, 7, 3, false);
		}
		for (int i = 0; i < 10; i++)                                 //通道流量调整
		{
			if (liuliangsd[i] == L"1")
			{
				allData[0][10 + i] = liuliang[i] + liuliang[10];
			}
			if (liuliangsd[i] == L"2")
			{
				allData[0][10 + i] = liuliang[i] + liuliang[11];
			}
			if (liuliangsd[i] == L"3")
			{
				allData[0][10 + i] = liuliang[i] + liuliang[12];
			}
		}
		allData[0][30] = 1;              //流量置一
		allData[0][34] = qinghui[0];     //清灰周期
		allData[0][35] = qinghui[1];     //清灰时间
		allData[0][36] = qinghui[2];     //返回时间
		allData[0][37] = 1;
		allData[0][38] = beijingban[0];  //前背景板位置
		allData[0][39] = beijingban[1];  //后背景板位置
		datatestDPU[4] = allData[0][30];
		for (int i = 0; i < 30; i++)
		{
			datatestDPU[i + 4] = allData[0][i + 10];
		}
		CMyPublicData::setfunc(10, 16, 10, 30);
		CMyPublicData::setfunc(10, 3, 9, 1);
		CMyPublicData::bit_set(10, 9, 8, true);
	}




	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{                                                                  //前相机
			allData[2 * i + 1][4] = famen[3];                                  //前相机开阀时间
			allData[2 * i + 1][27] = mian[2];                                  //前暗面积
			allData[2 * i + 1][28] = mian[4];                                  //前亮面积

			allData[2 * i + 1][64] = rlingmin[0] + rlingminf[i];               //R前暗敏感
			allData[2 * i + 1][65] = rlingmin[1] + rlingminf[10 + i];          //R前亮敏感
			allData[2 * i + 1][66] = glingmin[0] + glingminf[i];               //G前暗敏感
			allData[2 * i + 1][67] = glingmin[1] + glingminf[10 + i];          //G前亮敏感
			allData[2 * i + 1][68] = blingmin[0] + blingminf[i];               //B前暗敏感
			allData[2 * i + 1][69] = blingmin[1] + blingminf[10 + i];          //B前亮敏感
			allData[2 * i + 1][78] = hunselingmin[0] + hunlingminf[i];         //混色前暗敏感
			allData[2 * i + 1][79] = hunselingmin[1] + hunlingminf[10 + i];    //混色前亮敏感

			allData[2 * i + 1][82] = mian[0];                                  //前相机颜色面积

			allData[2 * i + 1][83] = yanse[0] + quyuf[i];                      //区域1前上限
			allData[2 * i + 1][84] = yanse[1] + quyuf[10 + i];                 //区域1前下限
			allData[2 * i + 1][85] = shen[0] + shenduf[i];                     //深度1前上限
			allData[2 * i + 1][86] = shen[1] + shenduf[10 + i];                //深度1前下限
			allData[2 * i + 1][87] = huidu1sheding[0] + huif[i];               //灰度1前上限
			allData[2 * i + 1][88] = huidu1sheding[1] + huif[10 + i];          //灰度1前下限
			allData[2 * i + 1][89] = quyu[0] + quyuerf[i];                     //区域2前上限
			allData[2 * i + 1][90] = quyu[1] + quyuerf[10 + i];                //区域2前下限
			allData[2 * i + 1][91] = quyusansd[0] + quyusanf[i];               //区域3前上限
			allData[2 * i + 1][92] = quyusansd[1] + quyusanf[10 + i];          //区域3前下限
			allData[2 * i + 1][93] = quyusisd[0] + quyusif[i];                 //区域4前上限
			allData[2 * i + 1][94] = quyusisd[1] + quyusif[10 + i];            //区域4前下限
			allData[2 * i + 1][95] = quyuwusd[0] + quyuwuf[i];                 //区域5前上限
			allData[2 * i + 1][96] = quyuwusd[1] + quyuwuf[10 + i];            //区域5前下限
			allData[2 * i + 1][97] = shendu2[0] + shenduerf[i];                //深度2前上限
			allData[2 * i + 1][98] = shendu2[1] + shenduerf[10 + i];           //深度2前下限
			allData[2 * i + 1][99] = huidu2sheding[0] + huierf[i];             //灰度2前上限
			allData[2 * i + 1][100] = huidu2sheding[1] + huierf[10 + i];       //灰度2前下限

			allData[2 * i + 1][350] = yanseminganqiangdusd[0];                 //前相机颜色敏感强度
		}
		if (modsd[2 * i] == L"2")
		{
			allData[2 * i + 1][4] = famen[4];
			allData[2 * i + 1][27] = mian[8];
			allData[2 * i + 1][28] = mian[10];

			allData[2 * i + 1][64] = rlingmin[4] + rlingminf[i];
			allData[2 * i + 1][65] = rlingmin[5] + rlingminf[10 + i];
			allData[2 * i + 1][66] = glingmin[4] + glingminf[i];
			allData[2 * i + 1][67] = glingmin[5] + glingminf[10 + i];
			allData[2 * i + 1][68] = blingmin[4] + blingminf[i];
			allData[2 * i + 1][69] = blingmin[5] + blingminf[10 + i];
			allData[2 * i + 1][78] = hunselingmin[4] + hunlingminf[i];
			allData[2 * i + 1][79] = hunselingmin[5] + hunlingminf[10 + i];

			allData[2 * i + 1][82] = mian[6];

			allData[2 * i + 1][83] = yanse[4] + quyuf[i];
			allData[2 * i + 1][84] = yanse[5] + quyuf[10 + i];
			allData[2 * i + 1][85] = shen[4] + shenduf[i];
			allData[2 * i + 1][86] = shen[5] + shenduf[10 + i];
			allData[2 * i + 1][87] = huidu1sheding[4] + huif[i];
			allData[2 * i + 1][88] = huidu1sheding[5] + huif[10 + i];
			allData[2 * i + 1][89] = quyu[4] + quyuerf[i];
			allData[2 * i + 1][90] = quyu[5] + quyuerf[10 + i];
			allData[2 * i + 1][91] = quyusansd[4] + quyusanf[i];
			allData[2 * i + 1][92] = quyusansd[5] + quyusanf[10 + i];
			allData[2 * i + 1][93] = quyusisd[4] + quyusif[i];
			allData[2 * i + 1][94] = quyusisd[5] + quyusif[10 + i];
			allData[2 * i + 1][95] = quyuwusd[4] + quyuwuf[i];
			allData[2 * i + 1][96] = quyuwusd[5] + quyuwuf[10 + i];
			allData[2 * i + 1][97] = shendu2[4] + shenduerf[i];
			allData[2 * i + 1][98] = shendu2[5] + shenduerf[10 + i];
			allData[2 * i + 1][99] = huidu2sheding[4] + huierf[i];
			allData[2 * i + 1][100] = huidu2sheding[5] + huierf[10 + i];

			allData[2 * i + 1][350] = yanseminganqiangdusd[2];
		}
		if (modsd[2 * i] == L"3")
		{
			allData[2 * i + 1][4] = famen[6];
			allData[2 * i + 1][27] = mian[14];
			allData[2 * i + 1][28] = mian[16];

			allData[2 * i + 1][64] = rlingmin[8] + rlingminf[i];
			allData[2 * i + 1][65] = rlingmin[9] + rlingminf[10 + i];
			allData[2 * i + 1][66] = glingmin[8] + glingminf[i];
			allData[2 * i + 1][67] = glingmin[9] + glingminf[10 + i];
			allData[2 * i + 1][68] = blingmin[8] + blingminf[i];
			allData[2 * i + 1][69] = blingmin[9] + blingminf[10 + i];
			allData[2 * i + 1][78] = hunselingmin[8] + hunlingminf[i];
			allData[2 * i + 1][79] = hunselingmin[9] + hunlingminf[10 + i];

			allData[2 * i + 1][82] = mian[12];

			allData[2 * i + 1][83] = yanse[8] + quyuf[i];
			allData[2 * i + 1][84] = yanse[9] + quyuf[10 + i];
			allData[2 * i + 1][85] = shen[8] + shenduf[i];
			allData[2 * i + 1][86] = shen[9] + shenduf[10 + i];
			allData[2 * i + 1][87] = huidu1sheding[8] + huif[i];
			allData[2 * i + 1][88] = huidu1sheding[9] + huif[10 + i];
			allData[2 * i + 1][89] = quyu[8] + quyuerf[i];
			allData[2 * i + 1][90] = quyu[9] + quyuerf[10 + i];
			allData[2 * i + 1][91] = quyusansd[8] + quyusanf[i];
			allData[2 * i + 1][92] = quyusansd[9] + quyusanf[10 + i];
			allData[2 * i + 1][93] = quyusisd[8] + quyusif[i];
			allData[2 * i + 1][94] = quyusisd[9] + quyusif[10 + i];
			allData[2 * i + 1][95] = quyuwusd[8] + quyuwuf[i];
			allData[2 * i + 1][96] = quyuwusd[9] + quyuwuf[10 + i];
			allData[2 * i + 1][97] = shendu2[8] + shenduerf[i];
			allData[2 * i + 1][98] = shendu2[9] + shenduerf[10 + i];
			allData[2 * i + 1][99] = huidu2sheding[8] + huierf[i];
			allData[2 * i + 1][100] = huidu2sheding[9] + huierf[10 + i];

			allData[2 * i + 1][350] = yanseminganqiangdusd[4];
		}


		if (modsd[2 * i + 1] == L"1")
		{                                                                    //后相机
			allData[2 * i + 2][4] = famen[3];                                    //后相机开阀时间
			allData[2 * i + 2][27] = mian[3];                                    //后暗面积
			allData[2 * i + 2][28] = mian[5];                                    //后亮面积

			allData[2 * i + 2][64] = rlingmin[2] + rlingminf[20 + i];            //R前暗敏感
			allData[2 * i + 2][65] = rlingmin[3] + rlingminf[30 + i];            //R前亮敏感
			allData[2 * i + 2][66] = glingmin[2] + glingminf[20 + i];            //G前暗敏感
			allData[2 * i + 2][67] = glingmin[3] + glingminf[30 + i];            //G前亮敏感
			allData[2 * i + 2][68] = blingmin[2] + blingminf[20 + i];            //B前暗敏感
			allData[2 * i + 2][69] = blingmin[3] + blingminf[30 + i];            //B前亮敏感
			allData[2 * i + 2][78] = hunselingmin[2] + hunlingminf[20 + i];      //混色前暗敏感
			allData[2 * i + 2][79] = hunselingmin[3] + hunlingminf[30 + i];      //混色前亮敏感

			allData[2 * i + 2][82] = mian[1];                                  //后相机颜色面积

			allData[2 * i + 2][83] = yanse[2] + quyuf[20 + i];                   //区域1前上限
			allData[2 * i + 2][84] = yanse[3] + quyuf[30 + i];                   //区域1前下限
			allData[2 * i + 2][85] = shen[2] + shenduf[20 + i];                  //深度1前上限
			allData[2 * i + 2][86] = shen[3] + shenduf[30 + i];                  //深度1前下限
			allData[2 * i + 2][87] = huidu1sheding[2] + huif[20 + i];            //灰度1前上限
			allData[2 * i + 2][88] = huidu1sheding[3] + huif[30 + i];            //灰度1前下限
			allData[2 * i + 2][89] = quyu[2] + quyuerf[20 + i];                  //区域2前上限
			allData[2 * i + 2][90] = quyu[3] + quyuerf[30 + i];                  //区域2前下限
			allData[2 * i + 2][91] = quyusansd[2] + quyusanf[20 + i];            //区域3前上限
			allData[2 * i + 2][92] = quyusansd[3] + quyusanf[30 + i];            //区域3前下限
			allData[2 * i + 2][93] = quyusisd[2] + quyusif[20 + i];              //区域4前上限
			allData[2 * i + 2][94] = quyusisd[3] + quyusif[30 + i];              //区域4前下限
			allData[2 * i + 2][95] = quyuwusd[2] + quyuwuf[20 + i];              //区域5前上限
			allData[2 * i + 2][96] = quyuwusd[3] + quyuwuf[30 + i];              //区域5前下限
			allData[2 * i + 2][97] = shendu2[2] + shenduerf[20 + i];             //深度2前上限
			allData[2 * i + 2][98] = shendu2[3] + shenduerf[30 + i];             //深度2前下限
			allData[2 * i + 2][99] = huidu2sheding[2] + huierf[20 + i];          //灰度2前上限
			allData[2 * i + 2][100] = huidu2sheding[3] + huierf[30 + i];         //灰度2前下限

			allData[2 * i + 2][350] = yanseminganqiangdusd[1];                   //后相机颜色敏感强度
		}
		if (modsd[2 * i + 1] == L"2")
		{
			allData[2 * i + 2][4] = famen[4];
			allData[2 * i + 2][27] = mian[9];
			allData[2 * i + 2][28] = mian[11];

			allData[2 * i + 2][64] = rlingmin[6] + rlingminf[20 + i];
			allData[2 * i + 2][65] = rlingmin[7] + rlingminf[30 + i];
			allData[2 * i + 2][66] = glingmin[6] + glingminf[20 + i];
			allData[2 * i + 2][67] = glingmin[7] + glingminf[30 + i];
			allData[2 * i + 2][68] = blingmin[6] + blingminf[20 + i];
			allData[2 * i + 2][69] = blingmin[7] + blingminf[30 + i];
			allData[2 * i + 2][78] = hunselingmin[6] + hunlingminf[20 + i];
			allData[2 * i + 2][79] = hunselingmin[7] + hunlingminf[30 + i];

			allData[2 * i + 2][82] = mian[7];

			allData[2 * i + 2][83] = yanse[6] + quyuf[20 + i];
			allData[2 * i + 2][84] = yanse[7] + quyuf[30 + i];
			allData[2 * i + 2][85] = shen[6] + shenduf[20 + i];
			allData[2 * i + 2][86] = shen[7] + shenduf[30 + i];
			allData[2 * i + 2][87] = huidu1sheding[6] + huif[20 + i];
			allData[2 * i + 2][88] = huidu1sheding[7] + huif[30 + i];
			allData[2 * i + 2][89] = quyu[6] + quyuerf[20 + i];
			allData[2 * i + 2][90] = quyu[7] + quyuerf[30 + i];
			allData[2 * i + 2][91] = quyusansd[6] + quyusanf[20 + i];
			allData[2 * i + 2][92] = quyusansd[7] + quyusanf[30 + i];
			allData[2 * i + 2][93] = quyusisd[6] + quyusif[20 + i];
			allData[2 * i + 2][94] = quyusisd[7] + quyusif[30 + i];
			allData[2 * i + 2][95] = quyuwusd[6] + quyuwuf[20 + i];
			allData[2 * i + 2][96] = quyuwusd[7] + quyuwuf[30 + i];
			allData[2 * i + 2][97] = shendu2[6] + shenduerf[20 + i];
			allData[2 * i + 2][98] = shendu2[7] + shenduerf[30 + i];
			allData[2 * i + 2][99] = huidu2sheding[6] + huierf[20 + i];
			allData[2 * i + 2][100] = huidu2sheding[7] + huierf[30 + i];

			allData[2 * i + 2][350] = yanseminganqiangdusd[3];
		}
		if (modsd[2 * i + 1] == L"3")
		{
			allData[2 * i + 2][4] = famen[6];
			allData[2 * i + 2][27] = mian[15];
			allData[2 * i + 2][28] = mian[17];

			allData[2 * i + 2][64] = rlingmin[10] + rlingminf[20 + i];
			allData[2 * i + 2][65] = rlingmin[11] + rlingminf[30 + i];
			allData[2 * i + 2][66] = glingmin[10] + glingminf[20 + i];
			allData[2 * i + 2][67] = glingmin[11] + glingminf[30 + i];
			allData[2 * i + 2][68] = blingmin[10] + blingminf[20 + i];
			allData[2 * i + 2][69] = blingmin[11] + blingminf[30 + i];
			allData[2 * i + 2][78] = hunselingmin[10] + hunlingminf[20 + i];
			allData[2 * i + 2][79] = hunselingmin[11] + hunlingminf[30 + i];

			allData[2 * i + 2][82] = mian[13];

			allData[2 * i + 2][83] = yanse[10] + quyuf[20 + i];
			allData[2 * i + 2][84] = yanse[11] + quyuf[30 + i];
			allData[2 * i + 2][85] = shen[10] + shenduf[20 + i];
			allData[2 * i + 2][86] = shen[11] + shenduf[30 + i];
			allData[2 * i + 2][87] = huidu1sheding[10] + huif[20 + i];
			allData[2 * i + 2][88] = huidu1sheding[11] + huif[30 + i];
			allData[2 * i + 2][89] = quyu[10] + quyuerf[20 + i];
			allData[2 * i + 2][90] = quyu[11] + quyuerf[30 + i];
			allData[2 * i + 2][91] = quyusansd[10] + quyusanf[20 + i];
			allData[2 * i + 2][92] = quyusansd[11] + quyusanf[30 + i];
			allData[2 * i + 2][93] = quyusisd[10] + quyusif[20 + i];
			allData[2 * i + 2][94] = quyusisd[11] + quyusif[30 + i];
			allData[2 * i + 2][95] = quyuwusd[10] + quyuwuf[20 + i];
			allData[2 * i + 2][96] = quyuwusd[11] + quyuwuf[30 + i];
			allData[2 * i + 2][97] = shendu2[10] + shenduerf[20 + i];
			allData[2 * i + 2][98] = shendu2[11] + shenduerf[30 + i];
			allData[2 * i + 2][99] = huidu2sheding[10] + huierf[20 + i];
			allData[2 * i + 2][100] = huidu2sheding[11] + huierf[30 + i];

			allData[2 * i + 2][350] = yanseminganqiangdusd[5];
		}
		allData[2 * i + 1][1] = 0;                                       //前相机状态置0
		allData[2 * i + 2][1] = 0;                                       //后相机状态置0
		allData[2 * i + 1][5] = yanchisheding[i] + yanchisheding[10];    //前相机延迟设定
		allData[2 * i + 2][5] = yanchisheding[i] + yanchisheding[10];    //后相机延迟设定
		allData[2 * i + 1][8] = pingyisheding[i];                        //前相机平移设定
		allData[2 * i + 2][8] = pingyisheding[10 + i];                   //后相机平移设定
		allData[2 * i + 1][9] = famen[5];                                //前相机开阀周期
		allData[2 * i + 2][9] = famen[5];                                //后相机开阀周期
		allData[2 * i + 1][10] = fuzhugongneng[3];                       //前相机SpeedS
		allData[2 * i + 2][10] = fuzhugongneng[3];                       //后相机SpeedS
		allData[2 * i + 1][11] = 20;                                     //前相机平均速度
		allData[2 * i + 2][11] = 20;                                     //后相机平均速度
		allData[2 * i + 1][12] = famen[2];                               //前相机吹嘴测试速度
		allData[2 * i + 2][12] = famen[2];                               //后相机吹嘴测试速度
		allData[2 * i + 1][13] = 1;                                      //前相机孔位
		allData[2 * i + 2][13] = 1;                                      //后相机孔位
		allData[2 * i + 1][20] = yansehangmianjisd[i];                   //前相机颜色行面积
		allData[2 * i + 2][20] = yansehangmianjisd[10 + i];              //后相机颜色行面积
		if (vgasd[2 * i] == L"OFF")                                      //判断VGA设定为什么状态
		{
			allData[2 * i + 1][26] = 0;
		}
		else
		{
			allData[2 * i + 1][26] = 1;
		}
		if (vgasd[2 * i + 1] == L"OFF")
		{
			allData[2 * i + 2][26] = 0;
		}
		else
		{
			allData[2 * i + 2][26] = 1;
		}
		allData[2 * i + 1][31] = vga[3];                          //前相机单孔增益致能
		allData[2 * i + 2][31] = vga[3];                          //后相机单孔增益致能
		for (int k = 0; k < 32; k++)
		{
			allData[2 * i + 1][32 + k] = 32;                      //前相机单孔增益
			allData[2 * i + 2][32 + k] = 32;                      //后相机单孔增益
		}
		allData[2 * i + 1][70] = rzengyi[i];                      //前相机R增益设定
		allData[2 * i + 2][70] = rzengyi[10 + i];                 //后相机R增益设定
		allData[2 * i + 1][72] = gzengyisheding[i];               //前相机G增益设定
		allData[2 * i + 2][72] = gzengyisheding[10 + i];          //后相机G增益设定
		allData[2 * i + 1][74] = bzengyisheding[i];               //前相机B增益设定
		allData[2 * i + 2][74] = bzengyisheding[10 + i];          //后相机B增益设定
		allData[2 * i + 1][77] = hunselingmin[20];                //前相机模式
		allData[2 * i + 2][77] = hunselingmin[21];                //后相机模式
		allData[2 * i + 1][81] = beijingyuzhisheding[i];          //前相机背景阈值
		allData[2 * i + 2][81] = beijingyuzhisheding[10 + i];     //后相机背景阈值
		allData[2 * i + 1][71] = fuzhugongneng[0];                //前相机ClamR
		allData[2 * i + 2][71] = fuzhugongneng[0];                //后相机ClamR
		allData[2 * i + 1][73] = fuzhugongneng[1];                //前相机ClamG
		allData[2 * i + 2][73] = fuzhugongneng[1];                //后相机ClamG
		allData[2 * i + 1][75] = fuzhugongneng[2];                //前相机ClamB
		allData[2 * i + 2][75] = fuzhugongneng[2];                //后相机ClamB
		allData[2 * i + 1][102] = xingxuansd[3];                  //前相机型选阈值
		allData[2 * i + 2][102] = xingxuansd[3];                  //后相机型选阈值
		allData[2 * i + 1][103] = xingxuanlingmindusd[i];         //前相机型选灵敏度
		allData[2 * i + 2][103] = xingxuanlingmindusd[10 + i];    //后相机型选灵敏度
		allData[2 * i + 1][104] = huiduhuluesheding[i];           //前相机灰度忽略
		allData[2 * i + 2][104] = huiduhuluesheding[10 + i];      //后相机灰度忽略
		allData[2 * i + 1][105] = mianjiweitiaosd[i];             //前相机面积微调
		allData[2 * i + 2][105] = mianjiweitiaosd[10 + i];        //后相机面积微调
		allData[2 * i + 1][106] = xingxuansd[4];                  //前相机型选模式
		allData[2 * i + 2][106] = xingxuansd[4];                  //后相机型选模式
		allData[2 * i + 1][113] = xingxuansd[1];                  //前相机开阀时间
		allData[2 * i + 2][113] = xingxuansd[1];                  //后相机开阀时间
		allData[2 * i + 1][114] = xingxuansd[0];                  //前相机延时
		allData[2 * i + 2][114] = xingxuansd[0];                  //后相机延时
		allData[2 * i + 1][115] = xingxuansd[2];                  //前相机开阀周期
		allData[2 * i + 2][115] = xingxuansd[2];                  //后相机开阀周期
		allData[2 * i + 1][351] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 2][351] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][352] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 2][352] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 1][353] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 2][353] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][354] = 255;                            //设置第二种RGB算法初始化设定 
		allData[2 * i + 2][354] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 1][355] = 0;                              //设置第二种RGB算法初始化设定 
		allData[2 * i + 2][355] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][356] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 2][356] = 255;                            //设置第二种RGB算法初始化设定  
		allData[2 * i + 1][357] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 2][357] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][358] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 2][358] = 255;                            //设置第二种RGB算法初始化设定
		if (addSW == 2)                                             //算法切换
		{
			allData[2 * i + 1][351] = allData[2 * i + 1][64];
			allData[2 * i + 2][351] = allData[2 * i + 2][64];
			allData[2 * i + 1][352] = allData[2 * i + 1][65];
			allData[2 * i + 2][352] = allData[2 * i + 2][65];
			allData[2 * i + 1][353] = allData[2 * i + 1][66];
			allData[2 * i + 2][353] = allData[2 * i + 2][66];
			allData[2 * i + 1][354] = allData[2 * i + 1][67];
			allData[2 * i + 2][354] = allData[2 * i + 2][67];
			allData[2 * i + 1][355] = allData[2 * i + 1][68];
			allData[2 * i + 2][355] = allData[2 * i + 2][68];
			allData[2 * i + 1][356] = allData[2 * i + 1][69];
			allData[2 * i + 2][356] = allData[2 * i + 2][69];
			allData[2 * i + 1][357] = allData[2 * i + 1][78];
			allData[2 * i + 2][357] = allData[2 * i + 2][78];
			allData[2 * i + 1][358] = allData[2 * i + 1][79];
			allData[2 * i + 2][358] = allData[2 * i + 2][79];

			allData[2 * i + 1][64] = 7;
			allData[2 * i + 2][64] = 7;
			allData[2 * i + 1][65] = 7;
			allData[2 * i + 2][65] = 7;
			allData[2 * i + 1][66] = 7;
			allData[2 * i + 2][66] = 7;
			allData[2 * i + 1][67] = 7;
			allData[2 * i + 2][67] = 7;
			allData[2 * i + 1][68] = 7;
			allData[2 * i + 2][68] = 7;
			allData[2 * i + 1][69] = 7;
			allData[2 * i + 2][69] = 7;
			allData[2 * i + 1][78] = 7;
			allData[2 * i + 2][78] = 7;
			allData[2 * i + 1][79] = 7;
			allData[2 * i + 2][79] = 7;
		}
	}




	//for (int i = 0; i < 200; i++)
	//{
	//	datatestDPU[i + 4] = allData[1][1 + i];
	//}

	//for (int i = 0; i < 4; i++)
	//{
	//	CMyPublicData::setfunc(32, 16, i * 50 + 1, 50);
	//	CMyPublicData::setfunc(33, 16, i * 50 + 1, 50);
	//}

	////一次写入100个
	//for (int i = 0; i < 20; i++)
	//{
	//	if (modsd[i] != "OFF")
	//	{
	//		if (tongxincuowu[i + 1] != (-1))
	//		{
	//			for (int j = 0; j < 100; j++)
	//			{
	//				datatestDPU[j + 4] = allData[i + 1][1 + j];
	//			}
	//			setfunc(32 + i, 16, 1, 100);
	//			//for (int j = 0; j < 50; j++)
	//			//{
	//			//	datatestDPU[j + 4] = allData[i + 1][51+ j];
	//			//}
	//			//CMyPublicData::setfunc(32 + i, 16, 51, 50);
	//			for (int j = 0; j < 100; j++)
	//			{
	//				datatestDPU[j + 4] = allData[i + 1][101 + j];
	//			}
	//			setfunc(32 + i, 16, 101, 100);
	//			//for (int j = 0; j < 50; j++)
	//			//{
	//			//	datatestDPU[j + 4] = allData[i + 1][151 + j];
	//			//}
	//			//CMyPublicData::setfunc(32 + i, 16,151, 50);
	//		}
	//	}
	//}

	//一次写入50个
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			if (tongxincuowu[i + 1] != (-1))
			{
				for (int j = 0; j < 50; j++)
				{
					datatestDPU[j + 4] = allData[i + 1][1 + j];
				}
				CMyPublicData::setfunc(32 + i, 16, 1, 50);
				for (int j = 0; j < 50; j++)
				{
					datatestDPU[j + 4] = allData[i + 1][51 + j];
				}
				CMyPublicData::setfunc(32 + i, 16, 51, 50);
				for (int j = 0; j < 50; j++)
				{
					datatestDPU[j + 4] = allData[i + 1][101 + j];
				}
				CMyPublicData::setfunc(32 + i, 16, 101, 50);
				for (int j = 0; j < 50; j++)
				{
					datatestDPU[j + 4] = allData[i + 1][151 + j];
				}
				CMyPublicData::setfunc(32 + i, 16, 151, 50);
			}
		}
	}


	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != L"OFF")
		{
			if (tongxincuowu[i + 1] != (-1))
			{
				for (int j = 0; j < 8; j++)
				{
					datatestDPU[j + 4] = allData[i + 1][351 + j];
				}
				setfunc(32 + i, 16, 351, 8);
			}
		}
	}
	if (tongxincuowu[0] != (-1))
	{
		setfunc(10, 3, 9, 1);
		bit_set(10, 9, 6, true);               //阀电源最后开启
	}
	fanhuizhi = 0; //用完后重置为0
}

//模式选择界面读取XML文件中存储的数据信息并下发
void CMyPublicData::MreadXML(string str)
{
	const char* number1;
	opXML  opx2(str);
	opx2.QueryNode_Text("num0001", number1);
	beijingban[0] = atoi(number1);
	opx2.QueryNode_Text("num0002", number1);
	beijingban[1] = atoi(number1);
	opx2.QueryNode_Text("num0003", number1);
	beijingban[2] = atoi(number1);
	opx2.QueryNode_Text("num0004", number1);
	beijingban[3] = atoi(number1);



	opx2.QueryNode_Text("num0101", number1);
	beijingyuzhisheding[0] = atoi(number1);
	opx2.QueryNode_Text("num0102", number1);
	beijingyuzhisheding[1] = atoi(number1);
	opx2.QueryNode_Text("num0103", number1);
	beijingyuzhisheding[2] = atoi(number1);
	opx2.QueryNode_Text("num0104", number1);
	beijingyuzhisheding[3] = atoi(number1);
	opx2.QueryNode_Text("num0105", number1);
	beijingyuzhisheding[4] = atoi(number1);
	opx2.QueryNode_Text("num0106", number1);
	beijingyuzhisheding[5] = atoi(number1);
	opx2.QueryNode_Text("num0107", number1);
	beijingyuzhisheding[6] = atoi(number1);
	opx2.QueryNode_Text("num0108", number1);
	beijingyuzhisheding[7] = atoi(number1);
	opx2.QueryNode_Text("num0109", number1);
	beijingyuzhisheding[8] = atoi(number1);
	opx2.QueryNode_Text("num0110", number1);
	beijingyuzhisheding[9] = atoi(number1);
	opx2.QueryNode_Text("num0111", number1);
	beijingyuzhisheding[10] = atoi(number1);
	opx2.QueryNode_Text("num0112", number1);
	beijingyuzhisheding[11] = atoi(number1);
	opx2.QueryNode_Text("num0113", number1);
	beijingyuzhisheding[12] = atoi(number1);
	opx2.QueryNode_Text("num0114", number1);
	beijingyuzhisheding[13] = atoi(number1);
	opx2.QueryNode_Text("num0115", number1);
	beijingyuzhisheding[14] = atoi(number1);
	opx2.QueryNode_Text("num0116", number1);
	beijingyuzhisheding[15] = atoi(number1);
	opx2.QueryNode_Text("num0117", number1);
	beijingyuzhisheding[16] = atoi(number1);
	opx2.QueryNode_Text("num0118", number1);
	beijingyuzhisheding[17] = atoi(number1);
	opx2.QueryNode_Text("num0119", number1);
	beijingyuzhisheding[18] = atoi(number1);
	opx2.QueryNode_Text("num0120", number1);
	beijingyuzhisheding[19] = atoi(number1);

	opx2.QueryNode_Text("num0201", number1);
	blingmin[0] = atoi(number1);
	opx2.QueryNode_Text("num0202", number1);
	blingmin[1] = atoi(number1);
	opx2.QueryNode_Text("num0203", number1);
	blingmin[2] = atoi(number1);
	opx2.QueryNode_Text("num0204", number1);
	blingmin[3] = atoi(number1);
	opx2.QueryNode_Text("num0205", number1);
	blingmin[4] = atoi(number1);
	opx2.QueryNode_Text("num0206", number1);
	blingmin[5] = atoi(number1);
	opx2.QueryNode_Text("num0207", number1);
	blingmin[6] = atoi(number1);
	opx2.QueryNode_Text("num0208", number1);
	blingmin[7] = atoi(number1);
	opx2.QueryNode_Text("num0209", number1);
	blingmin[8] = atoi(number1);
	opx2.QueryNode_Text("num0210", number1);
	blingmin[9] = atoi(number1);
	opx2.QueryNode_Text("num0211", number1);
	blingmin[10] = atoi(number1);
	opx2.QueryNode_Text("num0212", number1);
	blingmin[11] = atoi(number1);



	opx2.QueryNode_Text("num0301", number1);
	bzengyisheding[0] = atoi(number1);
	opx2.QueryNode_Text("num0302", number1);
	bzengyisheding[1] = atoi(number1);
	opx2.QueryNode_Text("num0303", number1);
	bzengyisheding[2] = atoi(number1);
	opx2.QueryNode_Text("num0304", number1);
	bzengyisheding[3] = atoi(number1);
	opx2.QueryNode_Text("num0305", number1);
	bzengyisheding[4] = atoi(number1);
	opx2.QueryNode_Text("num0306", number1);
	bzengyisheding[5] = atoi(number1);
	opx2.QueryNode_Text("num0307", number1);
	bzengyisheding[6] = atoi(number1);
	opx2.QueryNode_Text("num0308", number1);
	bzengyisheding[7] = atoi(number1);
	opx2.QueryNode_Text("num0309", number1);
	bzengyisheding[8] = atoi(number1);
	opx2.QueryNode_Text("num0310", number1);
	bzengyisheding[9] = atoi(number1);
	opx2.QueryNode_Text("num0311", number1);
	bzengyisheding[10] = atoi(number1);
	opx2.QueryNode_Text("num0312", number1);
	bzengyisheding[11] = atoi(number1);
	opx2.QueryNode_Text("num0313", number1);
	bzengyisheding[12] = atoi(number1);
	opx2.QueryNode_Text("num0314", number1);
	bzengyisheding[13] = atoi(number1);
	opx2.QueryNode_Text("num0315", number1);
	bzengyisheding[14] = atoi(number1);
	opx2.QueryNode_Text("num0316", number1);
	bzengyisheding[15] = atoi(number1);
	opx2.QueryNode_Text("num0317", number1);
	bzengyisheding[16] = atoi(number1);
	opx2.QueryNode_Text("num0318", number1);
	bzengyisheding[17] = atoi(number1);
	opx2.QueryNode_Text("num0319", number1);
	bzengyisheding[18] = atoi(number1);
	opx2.QueryNode_Text("num0320", number1);
	bzengyisheding[19] = atoi(number1);


	opx2.QueryNode_Text("num0401", number1);
	caitu[0] = atoi(number1);
	opx2.QueryNode_Text("num0402", number1);
	caitu[1] = atoi(number1);
	opx2.QueryNode_Text("num0403", number1);
	caitu[2] = atoi(number1);
	opx2.QueryNode_Text("num0404", number1);
	caitu[3] = atoi(number1);
	opx2.QueryNode_Text("num0405", number1);
	caitu[4] = atoi(number1);
	opx2.QueryNode_Text("num0406", number1);
	caitu[5] = atoi(number1);
	opx2.QueryNode_Text("num0407", number1);
	caitu[6] = atoi(number1);
	opx2.QueryNode_Text("num0408", number1);
	caitu[7] = atoi(number1);
	opx2.QueryNode_Text("num0409", number1);
	caitu[8] = atoi(number1);
	opx2.QueryNode_Text("num0410", number1);
	caitu[9] = atoi(number1);
	opx2.QueryNode_Text("num0411", number1);
	caitu[10] = atoi(number1);
	opx2.QueryNode_Text("num0412", number1);
	caitu[11] = atoi(number1);
	opx2.QueryNode_Text("num0413", number1);
	caitu[12] = atoi(number1);
	opx2.QueryNode_Text("num0414", number1);
	caitu[13] = atoi(number1);
	opx2.QueryNode_Text("num0415", number1);
	caitu[14] = atoi(number1);
	opx2.QueryNode_Text("num0416", number1);
	caitu[15] = atoi(number1);
	opx2.QueryNode_Text("num0417", number1);
	caitu[16] = atoi(number1);
	opx2.QueryNode_Text("num0418", number1);
	caitu[17] = atoi(number1);
	opx2.QueryNode_Text("num0419", number1);
	caitu[18] = atoi(number1);
	opx2.QueryNode_Text("num0420", number1);
	caitu[19] = atoi(number1);
	opx2.QueryNode_Text("num0421", number1);
	caitu[20] = atoi(number1);
	opx2.QueryNode_Text("num0422", number1);
	caitu[21] = atoi(number1);
	opx2.QueryNode_Text("num0423", number1);
	caitu[22] = atoi(number1);
	opx2.QueryNode_Text("num0424", number1);
	caitu[23] = atoi(number1);
	opx2.QueryNode_Text("num0425", number1);
	caitu[24] = atoi(number1);

	////获得服务器IP和Port
	//opx2.QueryNode_Text("serverIP", number1);
	//server_IP = number1;
	//opx2.QueryNode_Text("serverPort", number1);
	//server_Port = number1;
	////获得最后一次选择的语言
	//opx2.QueryNode_Text("lastlang", number1);
	//lang = number1; 

	opx2.QueryNode_Text("num0501", number1);
	famen[0] = atoi(number1);
	opx2.QueryNode_Text("num0502", number1);
	famen[1] = atoi(number1);
	opx2.QueryNode_Text("num0503", number1);
	famen[2] = atoi(number1);
	opx2.QueryNode_Text("num0504", number1);
	famen[3] = atoi(number1);
	opx2.QueryNode_Text("num0505", number1);
	famen[4] = atoi(number1);
	opx2.QueryNode_Text("num0506", number1);
	famen[5] = atoi(number1);
	opx2.QueryNode_Text("num0507", number1);
	famen[6] = atoi(number1);


	opx2.QueryNode_Text("num0601", number1);
	fuzhugongneng[0] = atoi(number1);
	opx2.QueryNode_Text("num0602", number1);
	fuzhugongneng[1] = atoi(number1);
	opx2.QueryNode_Text("num0603", number1);
	fuzhugongneng[2] = atoi(number1);
	opx2.QueryNode_Text("num0604", number1);
	fuzhugongneng[3] = atoi(number1);

	opx2.QueryNode_Text("num0621", number1);
	fuzhusd[0] = number1;
	opx2.QueryNode_Text("num0622", number1);
	fuzhusd[1] = number1;
	opx2.QueryNode_Text("num0623", number1);
	fuzhusd[2] = number1;
	opx2.QueryNode_Text("num0624", number1);
	fuzhusd[3] = number1;
	opx2.QueryNode_Text("num0625", number1);
	fuzhusd[4] = number1;
	opx2.QueryNode_Text("num0626", number1);
	fuzhusd[5] = number1;



	opx2.QueryNode_Text("num0701", number1);
	glingmin[0] = atoi(number1);
	opx2.QueryNode_Text("num0702", number1);
	glingmin[1] = atoi(number1);
	opx2.QueryNode_Text("num0703", number1);
	glingmin[2] = atoi(number1);
	opx2.QueryNode_Text("num0704", number1);
	glingmin[3] = atoi(number1);
	opx2.QueryNode_Text("num0705", number1);
	glingmin[4] = atoi(number1);
	opx2.QueryNode_Text("num0706", number1);
	glingmin[5] = atoi(number1);
	opx2.QueryNode_Text("num0707", number1);
	glingmin[6] = atoi(number1);
	opx2.QueryNode_Text("num0708", number1);
	glingmin[7] = atoi(number1);
	opx2.QueryNode_Text("num0709", number1);
	glingmin[8] = atoi(number1);
	opx2.QueryNode_Text("num0710", number1);
	glingmin[9] = atoi(number1);
	opx2.QueryNode_Text("num0711", number1);
	glingmin[10] = atoi(number1);
	opx2.QueryNode_Text("num0712", number1);
	glingmin[11] = atoi(number1);


	opx2.QueryNode_Text("num0801", number1);
	gzengyisheding[0] = atoi(number1);
	opx2.QueryNode_Text("num0802", number1);
	gzengyisheding[1] = atoi(number1);
	opx2.QueryNode_Text("num0803", number1);
	gzengyisheding[2] = atoi(number1);
	opx2.QueryNode_Text("num0804", number1);
	gzengyisheding[3] = atoi(number1);
	opx2.QueryNode_Text("num0805", number1);
	gzengyisheding[4] = atoi(number1);
	opx2.QueryNode_Text("num0806", number1);
	gzengyisheding[5] = atoi(number1);
	opx2.QueryNode_Text("num0807", number1);
	gzengyisheding[6] = atoi(number1);
	opx2.QueryNode_Text("num0808", number1);
	gzengyisheding[7] = atoi(number1);
	opx2.QueryNode_Text("num0809", number1);
	gzengyisheding[8] = atoi(number1);
	opx2.QueryNode_Text("num0810", number1);
	gzengyisheding[9] = atoi(number1);
	opx2.QueryNode_Text("num0811", number1);
	gzengyisheding[10] = atoi(number1);
	opx2.QueryNode_Text("num0812", number1);
	gzengyisheding[11] = atoi(number1);
	opx2.QueryNode_Text("num0813", number1);
	gzengyisheding[12] = atoi(number1);
	opx2.QueryNode_Text("num0814", number1);
	gzengyisheding[13] = atoi(number1);
	opx2.QueryNode_Text("num0815", number1);
	gzengyisheding[14] = atoi(number1);
	opx2.QueryNode_Text("num0816", number1);
	gzengyisheding[15] = atoi(number1);
	opx2.QueryNode_Text("num0817", number1);
	gzengyisheding[16] = atoi(number1);
	opx2.QueryNode_Text("num0818", number1);
	gzengyisheding[17] = atoi(number1);
	opx2.QueryNode_Text("num0819", number1);
	gzengyisheding[18] = atoi(number1);
	opx2.QueryNode_Text("num0820", number1);
	gzengyisheding[19] = atoi(number1);



	opx2.QueryNode_Text("num0901", number1);
	hunselingmin[0] = atoi(number1);
	opx2.QueryNode_Text("num0902", number1);
	hunselingmin[1] = atoi(number1);
	opx2.QueryNode_Text("num0903", number1);
	hunselingmin[2] = atoi(number1);
	opx2.QueryNode_Text("num0904", number1);
	hunselingmin[3] = atoi(number1);
	opx2.QueryNode_Text("num0905", number1);
	hunselingmin[4] = atoi(number1);
	opx2.QueryNode_Text("num0906", number1);
	hunselingmin[5] = atoi(number1);
	opx2.QueryNode_Text("num0907", number1);
	hunselingmin[6] = atoi(number1);
	opx2.QueryNode_Text("num0908", number1);
	hunselingmin[7] = atoi(number1);
	opx2.QueryNode_Text("num0909", number1);
	hunselingmin[8] = atoi(number1);
	opx2.QueryNode_Text("num0910", number1);
	hunselingmin[9] = atoi(number1);
	opx2.QueryNode_Text("num0911", number1);
	hunselingmin[10] = atoi(number1);
	opx2.QueryNode_Text("num0912", number1);
	hunselingmin[11] = atoi(number1);
	opx2.QueryNode_Text("num0921", number1);
	hunselingmin[20] = atoi(number1);
	opx2.QueryNode_Text("num0922", number1);
	hunselingmin[21] = atoi(number1);



	opx2.QueryNode_Text("num1001", number1);
	liuliang[0] = atoi(number1);
	opx2.QueryNode_Text("num1002", number1);
	liuliang[1] = atoi(number1);
	opx2.QueryNode_Text("num1003", number1);
	liuliang[2] = atoi(number1);
	opx2.QueryNode_Text("num1004", number1);
	liuliang[3] = atoi(number1);
	opx2.QueryNode_Text("num1005", number1);
	liuliang[4] = atoi(number1);
	opx2.QueryNode_Text("num1006", number1);
	liuliang[5] = atoi(number1);
	opx2.QueryNode_Text("num1007", number1);
	liuliang[6] = atoi(number1);
	opx2.QueryNode_Text("num1008", number1);
	liuliang[7] = atoi(number1);
	opx2.QueryNode_Text("num1009", number1);
	liuliang[8] = atoi(number1);
	opx2.QueryNode_Text("num1010", number1);
	liuliang[9] = atoi(number1);
	opx2.QueryNode_Text("num1011", number1);
	liuliang[10] = atoi(number1);
	opx2.QueryNode_Text("num1012", number1);
	liuliang[11] = atoi(number1);
	opx2.QueryNode_Text("num1013", number1);
	liuliang[12] = atoi(number1);



	opx2.QueryNode_Text("num1101", number1);
	mian[0] = atoi(number1);
	opx2.QueryNode_Text("num1102", number1);
	mian[1] = atoi(number1);
	opx2.QueryNode_Text("num1103", number1);
	mian[2] = atoi(number1);
	opx2.QueryNode_Text("num1104", number1);
	mian[3] = atoi(number1);
	opx2.QueryNode_Text("num1105", number1);
	mian[4] = atoi(number1);
	opx2.QueryNode_Text("num1106", number1);
	mian[5] = atoi(number1);
	opx2.QueryNode_Text("num1107", number1);
	mian[6] = atoi(number1);
	opx2.QueryNode_Text("num1108", number1);
	mian[7] = atoi(number1);
	opx2.QueryNode_Text("num1109", number1);
	mian[8] = atoi(number1);
	opx2.QueryNode_Text("num1110", number1);
	mian[9] = atoi(number1);
	opx2.QueryNode_Text("num1111", number1);
	mian[10] = atoi(number1);
	opx2.QueryNode_Text("num1112", number1);
	mian[11] = atoi(number1);
	opx2.QueryNode_Text("num1113", number1);
	mian[12] = atoi(number1);
	opx2.QueryNode_Text("num1114", number1);
	mian[13] = atoi(number1);
	opx2.QueryNode_Text("num1115", number1);
	mian[14] = atoi(number1);
	opx2.QueryNode_Text("num1116", number1);
	mian[15] = atoi(number1);
	opx2.QueryNode_Text("num1117", number1);
	mian[16] = atoi(number1);
	opx2.QueryNode_Text("num1118", number1);
	mian[17] = atoi(number1);



	opx2.QueryNode_Text("num1201", number1);
	pingyisheding[0] = atoi(number1);
	opx2.QueryNode_Text("num1202", number1);
	pingyisheding[1] = atoi(number1);
	opx2.QueryNode_Text("num1203", number1);
	pingyisheding[2] = atoi(number1);
	opx2.QueryNode_Text("num1204", number1);
	pingyisheding[3] = atoi(number1);
	opx2.QueryNode_Text("num1205", number1);
	pingyisheding[4] = atoi(number1);
	opx2.QueryNode_Text("num1206", number1);
	pingyisheding[5] = atoi(number1);
	opx2.QueryNode_Text("num1207", number1);
	pingyisheding[6] = atoi(number1);
	opx2.QueryNode_Text("num1208", number1);
	pingyisheding[7] = atoi(number1);
	opx2.QueryNode_Text("num1209", number1);
	pingyisheding[8] = atoi(number1);
	opx2.QueryNode_Text("num1210", number1);
	pingyisheding[9] = atoi(number1);
	opx2.QueryNode_Text("num1211", number1);
	pingyisheding[10] = atoi(number1);
	opx2.QueryNode_Text("num1212", number1);
	pingyisheding[11] = atoi(number1);
	opx2.QueryNode_Text("num1213", number1);
	pingyisheding[12] = atoi(number1);
	opx2.QueryNode_Text("num1214", number1);
	pingyisheding[13] = atoi(number1);
	opx2.QueryNode_Text("num1215", number1);
	pingyisheding[14] = atoi(number1);
	opx2.QueryNode_Text("num1216", number1);
	pingyisheding[15] = atoi(number1);
	opx2.QueryNode_Text("num1217", number1);
	pingyisheding[16] = atoi(number1);
	opx2.QueryNode_Text("num1218", number1);
	pingyisheding[17] = atoi(number1);
	opx2.QueryNode_Text("num1219", number1);
	pingyisheding[18] = atoi(number1);
	opx2.QueryNode_Text("num1220", number1);
	pingyisheding[19] = atoi(number1);




	opx2.QueryNode_Text("num1301", number1);
	qinghui[0] = atoi(number1);
	opx2.QueryNode_Text("num1302", number1);
	qinghui[1] = atoi(number1);
	opx2.QueryNode_Text("num1303", number1);
	qinghui[2] = atoi(number1);


	opx2.QueryNode_Text("num1401", number1);
	quyu[0] = atoi(number1);
	opx2.QueryNode_Text("num1402", number1);
	quyu[1] = atoi(number1);
	opx2.QueryNode_Text("num1403", number1);
	quyu[2] = atoi(number1);
	opx2.QueryNode_Text("num1404", number1);
	quyu[3] = atoi(number1);
	opx2.QueryNode_Text("num1405", number1);
	quyu[4] = atoi(number1);
	opx2.QueryNode_Text("num1406", number1);
	quyu[5] = atoi(number1);
	opx2.QueryNode_Text("num1407", number1);
	quyu[6] = atoi(number1);
	opx2.QueryNode_Text("num1408", number1);
	quyu[7] = atoi(number1);
	opx2.QueryNode_Text("num1409", number1);
	quyu[8] = atoi(number1);
	opx2.QueryNode_Text("num1410", number1);
	quyu[9] = atoi(number1);
	opx2.QueryNode_Text("num1411", number1);
	quyu[10] = atoi(number1);
	opx2.QueryNode_Text("num1412", number1);
	quyu[11] = atoi(number1);



	opx2.QueryNode_Text("num1501", number1);
	rlingmin[0] = atoi(number1);
	opx2.QueryNode_Text("num1502", number1);
	rlingmin[1] = atoi(number1);
	opx2.QueryNode_Text("num1503", number1);
	rlingmin[2] = atoi(number1);
	opx2.QueryNode_Text("num1504", number1);
	rlingmin[3] = atoi(number1);
	opx2.QueryNode_Text("num1505", number1);
	rlingmin[4] = atoi(number1);
	opx2.QueryNode_Text("num1506", number1);
	rlingmin[5] = atoi(number1);
	opx2.QueryNode_Text("num1507", number1);
	rlingmin[6] = atoi(number1);
	opx2.QueryNode_Text("num1508", number1);
	rlingmin[7] = atoi(number1);
	opx2.QueryNode_Text("num1509", number1);
	rlingmin[8] = atoi(number1);
	opx2.QueryNode_Text("num1510", number1);
	rlingmin[9] = atoi(number1);
	opx2.QueryNode_Text("num1511", number1);
	rlingmin[10] = atoi(number1);
	opx2.QueryNode_Text("num1512", number1);
	rlingmin[11] = atoi(number1);


	opx2.QueryNode_Text("num1601", number1);
	rzengyi[0] = atoi(number1);
	opx2.QueryNode_Text("num1602", number1);
	rzengyi[1] = atoi(number1);
	opx2.QueryNode_Text("num1603", number1);
	rzengyi[2] = atoi(number1);
	opx2.QueryNode_Text("num1604", number1);
	rzengyi[3] = atoi(number1);
	opx2.QueryNode_Text("num1605", number1);
	rzengyi[4] = atoi(number1);
	opx2.QueryNode_Text("num1606", number1);
	rzengyi[5] = atoi(number1);
	opx2.QueryNode_Text("num1607", number1);
	rzengyi[6] = atoi(number1);
	opx2.QueryNode_Text("num1608", number1);
	rzengyi[7] = atoi(number1);
	opx2.QueryNode_Text("num1609", number1);
	rzengyi[8] = atoi(number1);
	opx2.QueryNode_Text("num1610", number1);
	rzengyi[9] = atoi(number1);
	opx2.QueryNode_Text("num1611", number1);
	rzengyi[10] = atoi(number1);
	opx2.QueryNode_Text("num1612", number1);
	rzengyi[11] = atoi(number1);
	opx2.QueryNode_Text("num1613", number1);
	rzengyi[12] = atoi(number1);
	opx2.QueryNode_Text("num1614", number1);
	rzengyi[13] = atoi(number1);
	opx2.QueryNode_Text("num1615", number1);
	rzengyi[14] = atoi(number1);
	opx2.QueryNode_Text("num1616", number1);
	rzengyi[15] = atoi(number1);
	opx2.QueryNode_Text("num1617", number1);
	rzengyi[16] = atoi(number1);
	opx2.QueryNode_Text("num1618", number1);
	rzengyi[17] = atoi(number1);
	opx2.QueryNode_Text("num1619", number1);
	rzengyi[18] = atoi(number1);
	opx2.QueryNode_Text("num1620", number1);
	rzengyi[19] = atoi(number1);




	opx2.QueryNode_Text("num1701", number1);
	shen[0] = atoi(number1);
	opx2.QueryNode_Text("num1702", number1);
	shen[1] = atoi(number1);
	opx2.QueryNode_Text("num1703", number1);
	shen[2] = atoi(number1);
	opx2.QueryNode_Text("num1704", number1);
	shen[3] = atoi(number1);
	opx2.QueryNode_Text("num1705", number1);
	shen[4] = atoi(number1);
	opx2.QueryNode_Text("num1706", number1);
	shen[5] = atoi(number1);
	opx2.QueryNode_Text("num1707", number1);
	shen[6] = atoi(number1);
	opx2.QueryNode_Text("num1708", number1);
	shen[7] = atoi(number1);
	opx2.QueryNode_Text("num1709", number1);
	shen[8] = atoi(number1);
	opx2.QueryNode_Text("num1710", number1);
	shen[9] = atoi(number1);
	opx2.QueryNode_Text("num1711", number1);
	shen[10] = atoi(number1);
	opx2.QueryNode_Text("num1712", number1);
	shen[11] = atoi(number1);


	opx2.QueryNode_Text("num1801", number1);
	vga[0] = atoi(number1);
	opx2.QueryNode_Text("num1802", number1);
	vga[1] = atoi(number1);
	opx2.QueryNode_Text("num1803", number1);
	vga[2] = atoi(number1);
	opx2.QueryNode_Text("num1804", number1);
	vga[3] = atoi(number1);

	opx2.QueryNode_Text("num1821", number1);
	vgasd[0] = number1;
	opx2.QueryNode_Text("num1822", number1);
	vgasd[1] = number1;
	opx2.QueryNode_Text("num1823", number1);
	vgasd[2] = number1;
	opx2.QueryNode_Text("num1824", number1);
	vgasd[3] = number1;
	opx2.QueryNode_Text("num1825", number1);
	vgasd[4] = number1;
	opx2.QueryNode_Text("num1826", number1);
	vgasd[5] = number1;
	opx2.QueryNode_Text("num1827", number1);
	vgasd[6] = number1;
	opx2.QueryNode_Text("num1828", number1);
	vgasd[7] = number1;
	opx2.QueryNode_Text("num1829", number1);
	vgasd[8] = number1;
	opx2.QueryNode_Text("num1830", number1);
	vgasd[9] = number1;
	opx2.QueryNode_Text("num1831", number1);
	vgasd[10] = number1;
	opx2.QueryNode_Text("num1832", number1);
	vgasd[11] = number1;
	opx2.QueryNode_Text("num1833", number1);
	vgasd[12] = number1;
	opx2.QueryNode_Text("num1834", number1);
	vgasd[13] = number1;
	opx2.QueryNode_Text("num1835", number1);
	vgasd[14] = number1;
	opx2.QueryNode_Text("num1836", number1);
	vgasd[15] = number1;
	opx2.QueryNode_Text("num1837", number1);
	vgasd[16] = number1;
	opx2.QueryNode_Text("num1838", number1);
	vgasd[17] = number1;
	opx2.QueryNode_Text("num1839", number1);
	vgasd[18] = number1;
	opx2.QueryNode_Text("num1840", number1);
	vgasd[19] = number1;


	opx2.QueryNode_Text("num1901", number1);
	xiangji[0] = atoi(number1);
	opx2.QueryNode_Text("num1902", number1);
	xiangji[1] = atoi(number1);
	opx2.QueryNode_Text("num1903", number1);
	xiangji[2] = atoi(number1);
	opx2.QueryNode_Text("num1904", number1);
	xiangji[3] = atoi(number1);
	opx2.QueryNode_Text("num1905", number1);
	xiangji[4] = atoi(number1);
	opx2.QueryNode_Text("num1906", number1);
	xiangji[5] = atoi(number1);
	opx2.QueryNode_Text("num1907", number1);
	xiangji[6] = atoi(number1);
	opx2.QueryNode_Text("num1908", number1);
	xiangji[7] = atoi(number1);
	opx2.QueryNode_Text("num1909", number1);
	xiangji[8] = atoi(number1);
	opx2.QueryNode_Text("num1910", number1);
	xiangji[9] = atoi(number1);
	opx2.QueryNode_Text("num1911", number1);
	xiangji[10] = atoi(number1);
	opx2.QueryNode_Text("num1912", number1);
	xiangji[11] = atoi(number1);
	opx2.QueryNode_Text("num1913", number1);
	xiangji[12] = atoi(number1);
	opx2.QueryNode_Text("num1914", number1);
	xiangji[13] = atoi(number1);
	opx2.QueryNode_Text("num1915", number1);
	xiangji[14] = atoi(number1);
	opx2.QueryNode_Text("num1916", number1);
	xiangji[15] = atoi(number1);
	opx2.QueryNode_Text("num1917", number1);
	xiangji[16] = atoi(number1);
	opx2.QueryNode_Text("num1918", number1);
	xiangji[17] = atoi(number1);
	opx2.QueryNode_Text("num1919", number1);
	xiangji[18] = atoi(number1);
	opx2.QueryNode_Text("num1920", number1);
	xiangji[19] = atoi(number1);
	opx2.QueryNode_Text("num1921", number1);
	xiangji[20] = atoi(number1);
	opx2.QueryNode_Text("num1922", number1);
	xiangji[21] = atoi(number1);
	opx2.QueryNode_Text("num1923", number1);
	xiangji[22] = atoi(number1);
	opx2.QueryNode_Text("num1924", number1);
	xiangji[23] = atoi(number1);
	opx2.QueryNode_Text("num1925", number1);
	xiangji[24] = atoi(number1);
	opx2.QueryNode_Text("num1926", number1);
	xiangji[25] = atoi(number1);
	opx2.QueryNode_Text("num1927", number1);
	xiangji[26] = atoi(number1);
	opx2.QueryNode_Text("num1928", number1);
	xiangji[27] = atoi(number1);
	opx2.QueryNode_Text("num1929", number1);
	xiangji[28] = atoi(number1);
	opx2.QueryNode_Text("num1930", number1);
	xiangji[29] = atoi(number1);
	opx2.QueryNode_Text("num1931", number1);
	xiangji[30] = atoi(number1);
	opx2.QueryNode_Text("num1932", number1);
	xiangji[31] = atoi(number1);
	opx2.QueryNode_Text("num1933", number1);
	xiangji[32] = atoi(number1);
	opx2.QueryNode_Text("num1934", number1);
	xiangji[33] = atoi(number1);
	opx2.QueryNode_Text("num1935", number1);
	xiangji[34] = atoi(number1);
	opx2.QueryNode_Text("num1936", number1);
	xiangji[35] = atoi(number1);
	opx2.QueryNode_Text("num1937", number1);
	xiangji[36] = atoi(number1);
	opx2.QueryNode_Text("num1938", number1);
	xiangji[37] = atoi(number1);
	opx2.QueryNode_Text("num1939", number1);
	xiangji[38] = atoi(number1);
	opx2.QueryNode_Text("num1940", number1);
	xiangji[39] = atoi(number1);
	opx2.QueryNode_Text("num1941", number1);
	xiangji[40] = atoi(number1);
	opx2.QueryNode_Text("num1942", number1);
	xiangji[41] = atoi(number1);
	opx2.QueryNode_Text("num1943", number1);
	xiangji[42] = atoi(number1);
	opx2.QueryNode_Text("num1944", number1);
	xiangji[43] = atoi(number1);
	opx2.QueryNode_Text("num1945", number1);
	xiangji[44] = atoi(number1);
	opx2.QueryNode_Text("num1946", number1);
	xiangji[45] = atoi(number1);
	opx2.QueryNode_Text("num1947", number1);
	xiangji[46] = atoi(number1);
	opx2.QueryNode_Text("num1948", number1);
	xiangji[47] = atoi(number1);
	opx2.QueryNode_Text("num1949", number1);
	xiangji[48] = atoi(number1);
	opx2.QueryNode_Text("num1950", number1);
	xiangji[49] = atoi(number1);
	opx2.QueryNode_Text("num1951", number1);
	xiangji[50] = atoi(number1);
	opx2.QueryNode_Text("num1952", number1);
	xiangji[51] = atoi(number1);
	opx2.QueryNode_Text("num1953", number1);
	xiangji[52] = atoi(number1);
	opx2.QueryNode_Text("num1954", number1);
	xiangji[53] = atoi(number1);
	opx2.QueryNode_Text("num1955", number1);
	xiangji[54] = atoi(number1);
	opx2.QueryNode_Text("num1956", number1);
	xiangji[55] = atoi(number1);
	opx2.QueryNode_Text("num1957", number1);
	xiangji[56] = atoi(number1);
	opx2.QueryNode_Text("num1958", number1);
	xiangji[57] = atoi(number1);
	opx2.QueryNode_Text("num1959", number1);
	xiangji[58] = atoi(number1);
	opx2.QueryNode_Text("num1960", number1);
	xiangji[59] = atoi(number1);
	opx2.QueryNode_Text("num1961", number1);
	xiangji[60] = atoi(number1);
	opx2.QueryNode_Text("num1962", number1);
	xiangji[61] = atoi(number1);
	opx2.QueryNode_Text("num1963", number1);
	xiangji[62] = atoi(number1);
	opx2.QueryNode_Text("num1964", number1);
	xiangji[63] = atoi(number1);
	opx2.QueryNode_Text("num1965", number1);
	xiangji[64] = atoi(number1);
	opx2.QueryNode_Text("num1966", number1);
	xiangji[65] = atoi(number1);
	opx2.QueryNode_Text("num1967", number1);
	xiangji[66] = atoi(number1);
	opx2.QueryNode_Text("num1968", number1);
	xiangji[67] = atoi(number1);
	opx2.QueryNode_Text("num1969", number1);
	xiangji[68] = atoi(number1);
	opx2.QueryNode_Text("num1970", number1);
	xiangji[69] = atoi(number1);
	opx2.QueryNode_Text("num1971", number1);
	xiangji[70] = atoi(number1);
	opx2.QueryNode_Text("num1972", number1);
	xiangji[71] = atoi(number1);
	opx2.QueryNode_Text("num1973", number1);
	xiangji[72] = atoi(number1);
	opx2.QueryNode_Text("num1974", number1);
	xiangji[73] = atoi(number1);
	opx2.QueryNode_Text("num1975", number1);
	xiangji[74] = atoi(number1);
	opx2.QueryNode_Text("num1976", number1);
	xiangji[75] = atoi(number1);
	opx2.QueryNode_Text("num1977", number1);
	xiangji[76] = atoi(number1);
	opx2.QueryNode_Text("num1978", number1);
	xiangji[77] = atoi(number1);
	opx2.QueryNode_Text("num1979", number1);
	xiangji[78] = atoi(number1);
	opx2.QueryNode_Text("num1980", number1);
	xiangji[79] = atoi(number1);
	opx2.QueryNode_Text("num1981", number1);
	xiangji[80] = atoi(number1);
	opx2.QueryNode_Text("num1982", number1);
	xiangji[81] = atoi(number1);
	opx2.QueryNode_Text("num1983", number1);
	xiangji[82] = atoi(number1);
	opx2.QueryNode_Text("num1984", number1);
	xiangji[83] = atoi(number1);
	opx2.QueryNode_Text("num1985", number1);
	xiangji[84] = atoi(number1);
	opx2.QueryNode_Text("num1986", number1);
	xiangji[85] = atoi(number1);
	opx2.QueryNode_Text("num1987", number1);
	xiangji[86] = atoi(number1);
	opx2.QueryNode_Text("num1988", number1);
	xiangji[87] = atoi(number1);
	opx2.QueryNode_Text("num1989", number1);
	xiangji[88] = atoi(number1);
	opx2.QueryNode_Text("num1990", number1);
	xiangji[89] = atoi(number1);
	opx2.QueryNode_Text("num1991", number1);
	xiangji[90] = atoi(number1);
	opx2.QueryNode_Text("num1992", number1);
	xiangji[91] = atoi(number1);
	opx2.QueryNode_Text("num1993", number1);
	xiangji[92] = atoi(number1);
	opx2.QueryNode_Text("num1994", number1);
	xiangji[93] = atoi(number1);
	opx2.QueryNode_Text("num1995", number1);
	xiangji[94] = atoi(number1);
	opx2.QueryNode_Text("num1996", number1);
	xiangji[95] = atoi(number1);
	opx2.QueryNode_Text("num1997", number1);
	xiangji[96] = atoi(number1);
	opx2.QueryNode_Text("num1998", number1);
	xiangji[97] = atoi(number1);
	opx2.QueryNode_Text("num1999", number1);
	xiangji[98] = atoi(number1);
	opx2.QueryNode_Text("num19100", number1);
	xiangji[99] = atoi(number1);



	opx2.QueryNode_Text("num2001", number1);
	yanchisheding[0] = atoi(number1);
	opx2.QueryNode_Text("num2002", number1);
	yanchisheding[1] = atoi(number1);
	opx2.QueryNode_Text("num2003", number1);
	yanchisheding[2] = atoi(number1);
	opx2.QueryNode_Text("num2004", number1);
	yanchisheding[3] = atoi(number1);
	opx2.QueryNode_Text("num2005", number1);
	yanchisheding[4] = atoi(number1);
	opx2.QueryNode_Text("num2006", number1);
	yanchisheding[5] = atoi(number1);
	opx2.QueryNode_Text("num2007", number1);
	yanchisheding[6] = atoi(number1);
	opx2.QueryNode_Text("num2008", number1);
	yanchisheding[7] = atoi(number1);
	opx2.QueryNode_Text("num2009", number1);
	yanchisheding[8] = atoi(number1);
	opx2.QueryNode_Text("num2010", number1);
	yanchisheding[9] = atoi(number1);
	opx2.QueryNode_Text("num2011", number1);
	yanchisheding[10] = atoi(number1);
	opx2.QueryNode_Text("num2012", number1);
	yanchisheding[11] = atoi(number1);




	opx2.QueryNode_Text("num2101", number1);
	yanse[0] = atoi(number1);
	opx2.QueryNode_Text("num2102", number1);
	yanse[1] = atoi(number1);
	opx2.QueryNode_Text("num2103", number1);
	yanse[2] = atoi(number1);
	opx2.QueryNode_Text("num2104", number1);
	yanse[3] = atoi(number1);
	opx2.QueryNode_Text("num2105", number1);
	yanse[4] = atoi(number1);
	opx2.QueryNode_Text("num2106", number1);
	yanse[5] = atoi(number1);
	opx2.QueryNode_Text("num2107", number1);
	yanse[6] = atoi(number1);
	opx2.QueryNode_Text("num2108", number1);
	yanse[7] = atoi(number1);
	opx2.QueryNode_Text("num2109", number1);
	yanse[8] = atoi(number1);
	opx2.QueryNode_Text("num2110", number1);
	yanse[9] = atoi(number1);
	opx2.QueryNode_Text("num2111", number1);
	yanse[10] = atoi(number1);
	opx2.QueryNode_Text("num2112", number1);
	yanse[11] = atoi(number1);


	opx2.QueryNode_Text("num2201", number1);
	huiduhuluesheding[0] = atoi(number1);
	opx2.QueryNode_Text("num2202", number1);
	huiduhuluesheding[1] = atoi(number1);
	opx2.QueryNode_Text("num2203", number1);
	huiduhuluesheding[2] = atoi(number1);
	opx2.QueryNode_Text("num2204", number1);
	huiduhuluesheding[3] = atoi(number1);
	opx2.QueryNode_Text("num2205", number1);
	huiduhuluesheding[4] = atoi(number1);
	opx2.QueryNode_Text("num2206", number1);
	huiduhuluesheding[5] = atoi(number1);
	opx2.QueryNode_Text("num2207", number1);
	huiduhuluesheding[6] = atoi(number1);
	opx2.QueryNode_Text("num2208", number1);
	huiduhuluesheding[7] = atoi(number1);
	opx2.QueryNode_Text("num2209", number1);
	huiduhuluesheding[8] = atoi(number1);
	opx2.QueryNode_Text("num2210", number1);
	huiduhuluesheding[9] = atoi(number1);
	opx2.QueryNode_Text("num2211", number1);
	huiduhuluesheding[10] = atoi(number1);
	opx2.QueryNode_Text("num2212", number1);
	huiduhuluesheding[11] = atoi(number1);
	opx2.QueryNode_Text("num2213", number1);
	huiduhuluesheding[12] = atoi(number1);
	opx2.QueryNode_Text("num2214", number1);
	huiduhuluesheding[13] = atoi(number1);
	opx2.QueryNode_Text("num2215", number1);
	huiduhuluesheding[14] = atoi(number1);
	opx2.QueryNode_Text("num2216", number1);
	huiduhuluesheding[15] = atoi(number1);
	opx2.QueryNode_Text("num2217", number1);
	huiduhuluesheding[16] = atoi(number1);
	opx2.QueryNode_Text("num2218", number1);
	huiduhuluesheding[17] = atoi(number1);
	opx2.QueryNode_Text("num2219", number1);
	huiduhuluesheding[18] = atoi(number1);
	opx2.QueryNode_Text("num2220", number1);
	huiduhuluesheding[19] = atoi(number1);

	opx2.QueryNode_Text("num2301", number1);
	huidu1sheding[0] = atoi(number1);
	opx2.QueryNode_Text("num2302", number1);
	huidu1sheding[1] = atoi(number1);
	opx2.QueryNode_Text("num2303", number1);
	huidu1sheding[2] = atoi(number1);
	opx2.QueryNode_Text("num2304", number1);
	huidu1sheding[3] = atoi(number1);
	opx2.QueryNode_Text("num2305", number1);
	huidu1sheding[4] = atoi(number1);
	opx2.QueryNode_Text("num2306", number1);
	huidu1sheding[5] = atoi(number1);
	opx2.QueryNode_Text("num2307", number1);
	huidu1sheding[6] = atoi(number1);
	opx2.QueryNode_Text("num2308", number1);
	huidu1sheding[7] = atoi(number1);
	opx2.QueryNode_Text("num2309", number1);
	huidu1sheding[8] = atoi(number1);
	opx2.QueryNode_Text("num2310", number1);
	huidu1sheding[9] = atoi(number1);
	opx2.QueryNode_Text("num2311", number1);
	huidu1sheding[10] = atoi(number1);
	opx2.QueryNode_Text("num2312", number1);
	huidu1sheding[11] = atoi(number1);



	opx2.QueryNode_Text("num2401", number1);
	huidu2sheding[0] = atoi(number1);
	opx2.QueryNode_Text("num2402", number1);
	huidu2sheding[1] = atoi(number1);
	opx2.QueryNode_Text("num2403", number1);
	huidu2sheding[2] = atoi(number1);
	opx2.QueryNode_Text("num2404", number1);
	huidu2sheding[3] = atoi(number1);
	opx2.QueryNode_Text("num2405", number1);
	huidu2sheding[4] = atoi(number1);
	opx2.QueryNode_Text("num2406", number1);
	huidu2sheding[5] = atoi(number1);
	opx2.QueryNode_Text("num2407", number1);
	huidu2sheding[6] = atoi(number1);
	opx2.QueryNode_Text("num2408", number1);
	huidu2sheding[7] = atoi(number1);
	opx2.QueryNode_Text("num2409", number1);
	huidu2sheding[8] = atoi(number1);
	opx2.QueryNode_Text("num2410", number1);
	huidu2sheding[9] = atoi(number1);
	opx2.QueryNode_Text("num2411", number1);
	huidu2sheding[10] = atoi(number1);
	opx2.QueryNode_Text("num2412", number1);
	huidu2sheding[11] = atoi(number1);


	opx2.QueryNode_Text("num2501", number1);
	mianjiweitiaosd[0] = atoi(number1);
	opx2.QueryNode_Text("num2502", number1);
	mianjiweitiaosd[1] = atoi(number1);
	opx2.QueryNode_Text("num2503", number1);
	mianjiweitiaosd[2] = atoi(number1);
	opx2.QueryNode_Text("num2504", number1);
	mianjiweitiaosd[3] = atoi(number1);
	opx2.QueryNode_Text("num2505", number1);
	mianjiweitiaosd[4] = atoi(number1);
	opx2.QueryNode_Text("num2506", number1);
	mianjiweitiaosd[5] = atoi(number1);
	opx2.QueryNode_Text("num2507", number1);
	mianjiweitiaosd[6] = atoi(number1);
	opx2.QueryNode_Text("num2508", number1);
	mianjiweitiaosd[7] = atoi(number1);
	opx2.QueryNode_Text("num2509", number1);
	mianjiweitiaosd[8] = atoi(number1);
	opx2.QueryNode_Text("num2510", number1);
	mianjiweitiaosd[9] = atoi(number1);
	opx2.QueryNode_Text("num2511", number1);
	mianjiweitiaosd[10] = atoi(number1);
	opx2.QueryNode_Text("num2512", number1);
	mianjiweitiaosd[11] = atoi(number1);
	opx2.QueryNode_Text("num2513", number1);
	mianjiweitiaosd[12] = atoi(number1);
	opx2.QueryNode_Text("num2514", number1);
	mianjiweitiaosd[13] = atoi(number1);
	opx2.QueryNode_Text("num2515", number1);
	mianjiweitiaosd[14] = atoi(number1);
	opx2.QueryNode_Text("num2516", number1);
	mianjiweitiaosd[15] = atoi(number1);
	opx2.QueryNode_Text("num2517", number1);
	mianjiweitiaosd[16] = atoi(number1);
	opx2.QueryNode_Text("num2518", number1);
	mianjiweitiaosd[17] = atoi(number1);
	opx2.QueryNode_Text("num2519", number1);
	mianjiweitiaosd[18] = atoi(number1);
	opx2.QueryNode_Text("num2520", number1);
	mianjiweitiaosd[19] = atoi(number1);



	opx2.QueryNode_Text("num2601", number1);
	quyusansd[0] = atoi(number1);
	opx2.QueryNode_Text("num2602", number1);
	quyusansd[1] = atoi(number1);
	opx2.QueryNode_Text("num2603", number1);
	quyusansd[2] = atoi(number1);
	opx2.QueryNode_Text("num2604", number1);
	quyusansd[3] = atoi(number1);
	opx2.QueryNode_Text("num2605", number1);
	quyusansd[4] = atoi(number1);
	opx2.QueryNode_Text("num2606", number1);
	quyusansd[5] = atoi(number1);
	opx2.QueryNode_Text("num2607", number1);
	quyusansd[6] = atoi(number1);
	opx2.QueryNode_Text("num2608", number1);
	quyusansd[7] = atoi(number1);
	opx2.QueryNode_Text("num2609", number1);
	quyusansd[8] = atoi(number1);
	opx2.QueryNode_Text("num2610", number1);
	quyusansd[9] = atoi(number1);
	opx2.QueryNode_Text("num2611", number1);
	quyusansd[10] = atoi(number1);
	opx2.QueryNode_Text("num2612", number1);
	quyusansd[11] = atoi(number1);


	opx2.QueryNode_Text("num2701", number1);
	quyusisd[0] = atoi(number1);
	opx2.QueryNode_Text("num2702", number1);
	quyusisd[1] = atoi(number1);
	opx2.QueryNode_Text("num2703", number1);
	quyusisd[2] = atoi(number1);
	opx2.QueryNode_Text("num2704", number1);
	quyusisd[3] = atoi(number1);
	opx2.QueryNode_Text("num2705", number1);
	quyusisd[4] = atoi(number1);
	opx2.QueryNode_Text("num2706", number1);
	quyusisd[5] = atoi(number1);
	opx2.QueryNode_Text("num2707", number1);
	quyusisd[6] = atoi(number1);
	opx2.QueryNode_Text("num2708", number1);
	quyusisd[7] = atoi(number1);
	opx2.QueryNode_Text("num2709", number1);
	quyusisd[8] = atoi(number1);
	opx2.QueryNode_Text("num2710", number1);
	quyusisd[9] = atoi(number1);
	opx2.QueryNode_Text("num2711", number1);
	quyusisd[10] = atoi(number1);
	opx2.QueryNode_Text("num2712", number1);
	quyusisd[11] = atoi(number1);



	opx2.QueryNode_Text("num2801", number1);
	quyuwusd[0] = atoi(number1);
	opx2.QueryNode_Text("num2802", number1);
	quyuwusd[1] = atoi(number1);
	opx2.QueryNode_Text("num2803", number1);
	quyuwusd[2] = atoi(number1);
	opx2.QueryNode_Text("num2804", number1);
	quyuwusd[3] = atoi(number1);
	opx2.QueryNode_Text("num2805", number1);
	quyuwusd[4] = atoi(number1);
	opx2.QueryNode_Text("num2806", number1);
	quyuwusd[5] = atoi(number1);
	opx2.QueryNode_Text("num2807", number1);
	quyuwusd[6] = atoi(number1);
	opx2.QueryNode_Text("num2808", number1);
	quyuwusd[7] = atoi(number1);
	opx2.QueryNode_Text("num2809", number1);
	quyuwusd[8] = atoi(number1);
	opx2.QueryNode_Text("num2810", number1);
	quyuwusd[9] = atoi(number1);
	opx2.QueryNode_Text("num2811", number1);
	quyuwusd[10] = atoi(number1);
	opx2.QueryNode_Text("num2812", number1);
	quyuwusd[11] = atoi(number1);


	opx2.QueryNode_Text("num2901", number1);
	shendu2[0] = atoi(number1);
	opx2.QueryNode_Text("num2902", number1);
	shendu2[1] = atoi(number1);
	opx2.QueryNode_Text("num2903", number1);
	shendu2[2] = atoi(number1);
	opx2.QueryNode_Text("num2904", number1);
	shendu2[3] = atoi(number1);
	opx2.QueryNode_Text("num2905", number1);
	shendu2[4] = atoi(number1);
	opx2.QueryNode_Text("num2906", number1);
	shendu2[5] = atoi(number1);
	opx2.QueryNode_Text("num2907", number1);
	shendu2[6] = atoi(number1);
	opx2.QueryNode_Text("num2908", number1);
	shendu2[7] = atoi(number1);
	opx2.QueryNode_Text("num2909", number1);
	shendu2[8] = atoi(number1);
	opx2.QueryNode_Text("num2910", number1);
	shendu2[9] = atoi(number1);
	opx2.QueryNode_Text("num2911", number1);
	shendu2[10] = atoi(number1);
	opx2.QueryNode_Text("num2912", number1);
	shendu2[11] = atoi(number1);



	opx2.QueryNode_Text("num3001", number1);
	xingxuanlingmindusd[0] = atoi(number1);
	opx2.QueryNode_Text("num3002", number1);
	xingxuanlingmindusd[1] = atoi(number1);
	opx2.QueryNode_Text("num3003", number1);
	xingxuanlingmindusd[2] = atoi(number1);
	opx2.QueryNode_Text("num3004", number1);
	xingxuanlingmindusd[3] = atoi(number1);
	opx2.QueryNode_Text("num3005", number1);
	xingxuanlingmindusd[4] = atoi(number1);
	opx2.QueryNode_Text("num3006", number1);
	xingxuanlingmindusd[5] = atoi(number1);
	opx2.QueryNode_Text("num3007", number1);
	xingxuanlingmindusd[6] = atoi(number1);
	opx2.QueryNode_Text("num3008", number1);
	xingxuanlingmindusd[7] = atoi(number1);
	opx2.QueryNode_Text("num3009", number1);
	xingxuanlingmindusd[8] = atoi(number1);
	opx2.QueryNode_Text("num3010", number1);
	xingxuanlingmindusd[9] = atoi(number1);
	opx2.QueryNode_Text("num3011", number1);
	xingxuanlingmindusd[10] = atoi(number1);
	opx2.QueryNode_Text("num3012", number1);
	xingxuanlingmindusd[11] = atoi(number1);
	opx2.QueryNode_Text("num3013", number1);
	xingxuanlingmindusd[12] = atoi(number1);
	opx2.QueryNode_Text("num3014", number1);
	xingxuanlingmindusd[13] = atoi(number1);
	opx2.QueryNode_Text("num3015", number1);
	xingxuanlingmindusd[14] = atoi(number1);
	opx2.QueryNode_Text("num3016", number1);
	xingxuanlingmindusd[15] = atoi(number1);
	opx2.QueryNode_Text("num3017", number1);
	xingxuanlingmindusd[16] = atoi(number1);
	opx2.QueryNode_Text("num3018", number1);
	xingxuanlingmindusd[17] = atoi(number1);
	opx2.QueryNode_Text("num3019", number1);
	xingxuanlingmindusd[18] = atoi(number1);
	opx2.QueryNode_Text("num3020", number1);
	xingxuanlingmindusd[19] = atoi(number1);



	opx2.QueryNode_Text("num3101", number1);
	xingxuansd[0] = atoi(number1);
	opx2.QueryNode_Text("num3102", number1);
	xingxuansd[1] = atoi(number1);
	opx2.QueryNode_Text("num3103", number1);
	xingxuansd[2] = atoi(number1);
	opx2.QueryNode_Text("num3104", number1);
	xingxuansd[3] = atoi(number1);
	opx2.QueryNode_Text("num3105", number1);
	xingxuansd[4] = atoi(number1);

	opx2.QueryNode_Text("num3201", number1);
	yansehangmianjisd[0] = atoi(number1);
	opx2.QueryNode_Text("num3202", number1);
	yansehangmianjisd[1] = atoi(number1);
	opx2.QueryNode_Text("num3203", number1);
	yansehangmianjisd[2] = atoi(number1);
	opx2.QueryNode_Text("num3204", number1);
	yansehangmianjisd[3] = atoi(number1);
	opx2.QueryNode_Text("num3205", number1);
	yansehangmianjisd[4] = atoi(number1);
	opx2.QueryNode_Text("num3206", number1);
	yansehangmianjisd[5] = atoi(number1);
	opx2.QueryNode_Text("num3207", number1);
	yansehangmianjisd[6] = atoi(number1);
	opx2.QueryNode_Text("num3208", number1);
	yansehangmianjisd[7] = atoi(number1);
	opx2.QueryNode_Text("num3209", number1);
	yansehangmianjisd[8] = atoi(number1);
	opx2.QueryNode_Text("num3210", number1);
	yansehangmianjisd[9] = atoi(number1);
	opx2.QueryNode_Text("num3211", number1);
	yansehangmianjisd[10] = atoi(number1);
	opx2.QueryNode_Text("num3212", number1);
	yansehangmianjisd[11] = atoi(number1);
	opx2.QueryNode_Text("num3213", number1);
	yansehangmianjisd[12] = atoi(number1);
	opx2.QueryNode_Text("num3214", number1);
	yansehangmianjisd[13] = atoi(number1);
	opx2.QueryNode_Text("num3215", number1);
	yansehangmianjisd[14] = atoi(number1);
	opx2.QueryNode_Text("num3216", number1);
	yansehangmianjisd[15] = atoi(number1);
	opx2.QueryNode_Text("num3217", number1);
	yansehangmianjisd[16] = atoi(number1);
	opx2.QueryNode_Text("num3218", number1);
	yansehangmianjisd[17] = atoi(number1);
	opx2.QueryNode_Text("num3219", number1);
	yansehangmianjisd[18] = atoi(number1);
	opx2.QueryNode_Text("num3220", number1);
	yansehangmianjisd[19] = atoi(number1);




	opx2.QueryNode_Text("num3301", number1);
	yanseminganqiangdusd[0] = atoi(number1);
	opx2.QueryNode_Text("num3302", number1);
	yanseminganqiangdusd[1] = atoi(number1);
	opx2.QueryNode_Text("num3303", number1);
	yanseminganqiangdusd[2] = atoi(number1);
	opx2.QueryNode_Text("num3304", number1);
	yanseminganqiangdusd[3] = atoi(number1);
	opx2.QueryNode_Text("num3305", number1);
	yanseminganqiangdusd[4] = atoi(number1);
	opx2.QueryNode_Text("num3306", number1);
	yanseminganqiangdusd[5] = atoi(number1);



	/*opx2.QueryNode_Text("num3401", number1);
	modsd[0] = number1;
	opx2.QueryNode_Text("num3402", number1);
	modsd[1] = number1;
	opx2.QueryNode_Text("num3403", number1);
	modsd[2] = number1;
	opx2.QueryNode_Text("num3404", number1);
	modsd[3] = number1;
	opx2.QueryNode_Text("num3405", number1);
	modsd[4] = number1;
	opx2.QueryNode_Text("num3406", number1);
	modsd[5] = number1;
	opx2.QueryNode_Text("num3407", number1);
	modsd[6] = number1;
	opx2.QueryNode_Text("num3408", number1);
	modsd[7] = number1;
	opx2.QueryNode_Text("num3409", number1);
	modsd[8] = number1;
	opx2.QueryNode_Text("num3410", number1);
	modsd[9] = number1;
	opx2.QueryNode_Text("num3411", number1);
	modsd[10] = number1;
	opx2.QueryNode_Text("num3412", number1);
	modsd[11] = number1;
	opx2.QueryNode_Text("num3413", number1);
	modsd[12] = number1;
	opx2.QueryNode_Text("num3414", number1);
	modsd[13] = number1;
	opx2.QueryNode_Text("num3415", number1);
	modsd[14] = number1;
	opx2.QueryNode_Text("num3416", number1);
	modsd[15] = number1;
	opx2.QueryNode_Text("num3417", number1);
	modsd[16] = number1;
	opx2.QueryNode_Text("num3418", number1);
	modsd[17] = number1;
	opx2.QueryNode_Text("num3419", number1);
	modsd[18] = number1;
	opx2.QueryNode_Text("num3420", number1);
	modsd[19] = number1;
	opx2.QueryNode_Text("num3421", number1);
	modsd[20] = number1;*/

	/*opx2.QueryNode_Text("num3422", number1);
	addSW = atoi(number1);*/


	opx2.QueryNode_Text("num3501", number1);
	liuliangsd[0] = number1;
	opx2.QueryNode_Text("num3502", number1);
	liuliangsd[1] = number1;
	opx2.QueryNode_Text("num3503", number1);
	liuliangsd[2] = number1;
	opx2.QueryNode_Text("num3504", number1);
	liuliangsd[3] = number1;
	opx2.QueryNode_Text("num3505", number1);
	liuliangsd[4] = number1;
	opx2.QueryNode_Text("num3506", number1);
	liuliangsd[5] = number1;
	opx2.QueryNode_Text("num3507", number1);
	liuliangsd[6] = number1;
	opx2.QueryNode_Text("num3508", number1);
	liuliangsd[7] = number1;
	opx2.QueryNode_Text("num3509", number1);
	liuliangsd[8] = number1;
	opx2.QueryNode_Text("num3510", number1);
	liuliangsd[9] = number1;


	opx2.QueryNode_Text("num3601", number1);
	blingminf[0] = atoi(number1);
	opx2.QueryNode_Text("num3602", number1);
	blingminf[1] = atoi(number1);
	opx2.QueryNode_Text("num3603", number1);
	blingminf[2] = atoi(number1);
	opx2.QueryNode_Text("num3604", number1);
	blingminf[3] = atoi(number1);
	opx2.QueryNode_Text("num3605", number1);
	blingminf[4] = atoi(number1);
	opx2.QueryNode_Text("num3606", number1);
	blingminf[5] = atoi(number1);
	opx2.QueryNode_Text("num3607", number1);
	blingminf[6] = atoi(number1);
	opx2.QueryNode_Text("num3608", number1);
	blingminf[7] = atoi(number1);
	opx2.QueryNode_Text("num3609", number1);
	blingminf[8] = atoi(number1);
	opx2.QueryNode_Text("num3610", number1);
	blingminf[9] = atoi(number1);
	opx2.QueryNode_Text("num3611", number1);
	blingminf[10] = atoi(number1);
	opx2.QueryNode_Text("num3612", number1);
	blingminf[11] = atoi(number1);
	opx2.QueryNode_Text("num3613", number1);
	blingminf[12] = atoi(number1);
	opx2.QueryNode_Text("num3614", number1);
	blingminf[13] = atoi(number1);
	opx2.QueryNode_Text("num3615", number1);
	blingminf[14] = atoi(number1);
	opx2.QueryNode_Text("num3616", number1);
	blingminf[15] = atoi(number1);
	opx2.QueryNode_Text("num3617", number1);
	blingminf[16] = atoi(number1);
	opx2.QueryNode_Text("num3618", number1);
	blingminf[17] = atoi(number1);
	opx2.QueryNode_Text("num3619", number1);
	blingminf[18] = atoi(number1);
	opx2.QueryNode_Text("num3620", number1);
	blingminf[19] = atoi(number1);
	opx2.QueryNode_Text("num3621", number1);
	blingminf[20] = atoi(number1);
	opx2.QueryNode_Text("num3622", number1);
	blingminf[21] = atoi(number1);
	opx2.QueryNode_Text("num3623", number1);
	blingminf[22] = atoi(number1);
	opx2.QueryNode_Text("num3624", number1);
	blingminf[23] = atoi(number1);
	opx2.QueryNode_Text("num3625", number1);
	blingminf[24] = atoi(number1);
	opx2.QueryNode_Text("num3626", number1);
	blingminf[25] = atoi(number1);
	opx2.QueryNode_Text("num3627", number1);
	blingminf[26] = atoi(number1);
	opx2.QueryNode_Text("num3628", number1);
	blingminf[27] = atoi(number1);
	opx2.QueryNode_Text("num3629", number1);
	blingminf[28] = atoi(number1);
	opx2.QueryNode_Text("num3630", number1);
	blingminf[29] = atoi(number1);
	opx2.QueryNode_Text("num3631", number1);
	blingminf[30] = atoi(number1);
	opx2.QueryNode_Text("num3632", number1);
	blingminf[31] = atoi(number1);
	opx2.QueryNode_Text("num3633", number1);
	blingminf[32] = atoi(number1);
	opx2.QueryNode_Text("num3634", number1);
	blingminf[33] = atoi(number1);
	opx2.QueryNode_Text("num3635", number1);
	blingminf[34] = atoi(number1);
	opx2.QueryNode_Text("num3636", number1);
	blingminf[35] = atoi(number1);
	opx2.QueryNode_Text("num3637", number1);
	blingminf[36] = atoi(number1);
	opx2.QueryNode_Text("num3638", number1);
	blingminf[37] = atoi(number1);
	opx2.QueryNode_Text("num3639", number1);
	blingminf[38] = atoi(number1);
	opx2.QueryNode_Text("num3640", number1);
	blingminf[39] = atoi(number1);


	opx2.QueryNode_Text("num3701", number1);
	glingminf[0] = atoi(number1);
	opx2.QueryNode_Text("num3702", number1);
	glingminf[1] = atoi(number1);
	opx2.QueryNode_Text("num3703", number1);
	glingminf[2] = atoi(number1);
	opx2.QueryNode_Text("num3704", number1);
	glingminf[3] = atoi(number1);
	opx2.QueryNode_Text("num3705", number1);
	glingminf[4] = atoi(number1);
	opx2.QueryNode_Text("num3706", number1);
	glingminf[5] = atoi(number1);
	opx2.QueryNode_Text("num3707", number1);
	glingminf[6] = atoi(number1);
	opx2.QueryNode_Text("num3708", number1);
	glingminf[7] = atoi(number1);
	opx2.QueryNode_Text("num3709", number1);
	glingminf[8] = atoi(number1);
	opx2.QueryNode_Text("num3710", number1);
	glingminf[9] = atoi(number1);
	opx2.QueryNode_Text("num3711", number1);
	glingminf[10] = atoi(number1);
	opx2.QueryNode_Text("num3712", number1);
	glingminf[11] = atoi(number1);
	opx2.QueryNode_Text("num3713", number1);
	glingminf[12] = atoi(number1);
	opx2.QueryNode_Text("num3714", number1);
	glingminf[13] = atoi(number1);
	opx2.QueryNode_Text("num3715", number1);
	glingminf[14] = atoi(number1);
	opx2.QueryNode_Text("num3716", number1);
	glingminf[15] = atoi(number1);
	opx2.QueryNode_Text("num3717", number1);
	glingminf[16] = atoi(number1);
	opx2.QueryNode_Text("num3718", number1);
	glingminf[17] = atoi(number1);
	opx2.QueryNode_Text("num3719", number1);
	glingminf[18] = atoi(number1);
	opx2.QueryNode_Text("num3720", number1);
	glingminf[19] = atoi(number1);
	opx2.QueryNode_Text("num3721", number1);
	glingminf[20] = atoi(number1);
	opx2.QueryNode_Text("num3722", number1);
	glingminf[21] = atoi(number1);
	opx2.QueryNode_Text("num3723", number1);
	glingminf[22] = atoi(number1);
	opx2.QueryNode_Text("num3724", number1);
	glingminf[23] = atoi(number1);
	opx2.QueryNode_Text("num3725", number1);
	glingminf[24] = atoi(number1);
	opx2.QueryNode_Text("num3726", number1);
	glingminf[25] = atoi(number1);
	opx2.QueryNode_Text("num3727", number1);
	glingminf[26] = atoi(number1);
	opx2.QueryNode_Text("num3728", number1);
	glingminf[27] = atoi(number1);
	opx2.QueryNode_Text("num3729", number1);
	glingminf[28] = atoi(number1);
	opx2.QueryNode_Text("num3730", number1);
	glingminf[29] = atoi(number1);
	opx2.QueryNode_Text("num3731", number1);
	glingminf[30] = atoi(number1);
	opx2.QueryNode_Text("num3732", number1);
	glingminf[31] = atoi(number1);
	opx2.QueryNode_Text("num3733", number1);
	glingminf[32] = atoi(number1);
	opx2.QueryNode_Text("num3734", number1);
	glingminf[33] = atoi(number1);
	opx2.QueryNode_Text("num3735", number1);
	glingminf[34] = atoi(number1);
	opx2.QueryNode_Text("num3736", number1);
	glingminf[35] = atoi(number1);
	opx2.QueryNode_Text("num3737", number1);
	glingminf[36] = atoi(number1);
	opx2.QueryNode_Text("num3738", number1);
	glingminf[37] = atoi(number1);
	opx2.QueryNode_Text("num3739", number1);
	glingminf[38] = atoi(number1);
	opx2.QueryNode_Text("num3740", number1);
	glingminf[39] = atoi(number1);




	opx2.QueryNode_Text("num3801", number1);
	rlingminf[0] = atoi(number1);
	opx2.QueryNode_Text("num3802", number1);
	rlingminf[1] = atoi(number1);
	opx2.QueryNode_Text("num3803", number1);
	rlingminf[2] = atoi(number1);
	opx2.QueryNode_Text("num3804", number1);
	rlingminf[3] = atoi(number1);
	opx2.QueryNode_Text("num3805", number1);
	rlingminf[4] = atoi(number1);
	opx2.QueryNode_Text("num3806", number1);
	rlingminf[5] = atoi(number1);
	opx2.QueryNode_Text("num3807", number1);
	rlingminf[6] = atoi(number1);
	opx2.QueryNode_Text("num3808", number1);
	rlingminf[7] = atoi(number1);
	opx2.QueryNode_Text("num3809", number1);
	rlingminf[8] = atoi(number1);
	opx2.QueryNode_Text("num3810", number1);
	rlingminf[9] = atoi(number1);
	opx2.QueryNode_Text("num3811", number1);
	rlingminf[10] = atoi(number1);
	opx2.QueryNode_Text("num3812", number1);
	rlingminf[11] = atoi(number1);
	opx2.QueryNode_Text("num3813", number1);
	rlingminf[12] = atoi(number1);
	opx2.QueryNode_Text("num3814", number1);
	rlingminf[13] = atoi(number1);
	opx2.QueryNode_Text("num3815", number1);
	rlingminf[14] = atoi(number1);
	opx2.QueryNode_Text("num3816", number1);
	rlingminf[15] = atoi(number1);
	opx2.QueryNode_Text("num3817", number1);
	rlingminf[16] = atoi(number1);
	opx2.QueryNode_Text("num3818", number1);
	rlingminf[17] = atoi(number1);
	opx2.QueryNode_Text("num3819", number1);
	rlingminf[18] = atoi(number1);
	opx2.QueryNode_Text("num3820", number1);
	rlingminf[19] = atoi(number1);
	opx2.QueryNode_Text("num3821", number1);
	rlingminf[20] = atoi(number1);
	opx2.QueryNode_Text("num3822", number1);
	rlingminf[21] = atoi(number1);
	opx2.QueryNode_Text("num3823", number1);
	rlingminf[22] = atoi(number1);
	opx2.QueryNode_Text("num3824", number1);
	rlingminf[23] = atoi(number1);
	opx2.QueryNode_Text("num3825", number1);
	rlingminf[24] = atoi(number1);
	opx2.QueryNode_Text("num3826", number1);
	rlingminf[25] = atoi(number1);
	opx2.QueryNode_Text("num3827", number1);
	rlingminf[26] = atoi(number1);
	opx2.QueryNode_Text("num3828", number1);
	rlingminf[27] = atoi(number1);
	opx2.QueryNode_Text("num3829", number1);
	rlingminf[28] = atoi(number1);
	opx2.QueryNode_Text("num3830", number1);
	rlingminf[29] = atoi(number1);
	opx2.QueryNode_Text("num3831", number1);
	rlingminf[30] = atoi(number1);
	opx2.QueryNode_Text("num3832", number1);
	rlingminf[31] = atoi(number1);
	opx2.QueryNode_Text("num3833", number1);
	rlingminf[32] = atoi(number1);
	opx2.QueryNode_Text("num3834", number1);
	rlingminf[33] = atoi(number1);
	opx2.QueryNode_Text("num3835", number1);
	rlingminf[34] = atoi(number1);
	opx2.QueryNode_Text("num3836", number1);
	rlingminf[35] = atoi(number1);
	opx2.QueryNode_Text("num3837", number1);
	rlingminf[36] = atoi(number1);
	opx2.QueryNode_Text("num3838", number1);
	rlingminf[37] = atoi(number1);
	opx2.QueryNode_Text("num3839", number1);
	rlingminf[38] = atoi(number1);
	opx2.QueryNode_Text("num3840", number1);
	rlingminf[39] = atoi(number1);


	opx2.QueryNode_Text("num3901", number1);
	hunlingminf[0] = atoi(number1);
	opx2.QueryNode_Text("num3902", number1);
	hunlingminf[1] = atoi(number1);
	opx2.QueryNode_Text("num3903", number1);
	hunlingminf[2] = atoi(number1);
	opx2.QueryNode_Text("num3904", number1);
	hunlingminf[3] = atoi(number1);
	opx2.QueryNode_Text("num3905", number1);
	hunlingminf[4] = atoi(number1);
	opx2.QueryNode_Text("num3906", number1);
	hunlingminf[5] = atoi(number1);
	opx2.QueryNode_Text("num3907", number1);
	hunlingminf[6] = atoi(number1);
	opx2.QueryNode_Text("num3908", number1);
	hunlingminf[7] = atoi(number1);
	opx2.QueryNode_Text("num3909", number1);
	hunlingminf[8] = atoi(number1);
	opx2.QueryNode_Text("num3910", number1);
	hunlingminf[9] = atoi(number1);
	opx2.QueryNode_Text("num3911", number1);
	hunlingminf[10] = atoi(number1);
	opx2.QueryNode_Text("num3912", number1);
	hunlingminf[11] = atoi(number1);
	opx2.QueryNode_Text("num3913", number1);
	hunlingminf[12] = atoi(number1);
	opx2.QueryNode_Text("num3914", number1);
	hunlingminf[13] = atoi(number1);
	opx2.QueryNode_Text("num3915", number1);
	hunlingminf[14] = atoi(number1);
	opx2.QueryNode_Text("num3916", number1);
	hunlingminf[15] = atoi(number1);
	opx2.QueryNode_Text("num3917", number1);
	hunlingminf[16] = atoi(number1);
	opx2.QueryNode_Text("num3918", number1);
	hunlingminf[17] = atoi(number1);
	opx2.QueryNode_Text("num3919", number1);
	hunlingminf[18] = atoi(number1);
	opx2.QueryNode_Text("num3920", number1);
	hunlingminf[19] = atoi(number1);
	opx2.QueryNode_Text("num3921", number1);
	hunlingminf[20] = atoi(number1);
	opx2.QueryNode_Text("num3922", number1);
	hunlingminf[21] = atoi(number1);
	opx2.QueryNode_Text("num3923", number1);
	hunlingminf[22] = atoi(number1);
	opx2.QueryNode_Text("num3924", number1);
	hunlingminf[23] = atoi(number1);
	opx2.QueryNode_Text("num3925", number1);
	hunlingminf[24] = atoi(number1);
	opx2.QueryNode_Text("num3926", number1);
	hunlingminf[25] = atoi(number1);
	opx2.QueryNode_Text("num3927", number1);
	hunlingminf[26] = atoi(number1);
	opx2.QueryNode_Text("num3928", number1);
	hunlingminf[27] = atoi(number1);
	opx2.QueryNode_Text("num3929", number1);
	hunlingminf[28] = atoi(number1);
	opx2.QueryNode_Text("num3930", number1);
	hunlingminf[29] = atoi(number1);
	opx2.QueryNode_Text("num3931", number1);
	hunlingminf[30] = atoi(number1);
	opx2.QueryNode_Text("num3932", number1);
	hunlingminf[31] = atoi(number1);
	opx2.QueryNode_Text("num3933", number1);
	hunlingminf[32] = atoi(number1);
	opx2.QueryNode_Text("num3934", number1);
	hunlingminf[33] = atoi(number1);
	opx2.QueryNode_Text("num3935", number1);
	hunlingminf[34] = atoi(number1);
	opx2.QueryNode_Text("num3936", number1);
	hunlingminf[35] = atoi(number1);
	opx2.QueryNode_Text("num3937", number1);
	hunlingminf[36] = atoi(number1);
	opx2.QueryNode_Text("num3938", number1);
	hunlingminf[37] = atoi(number1);
	opx2.QueryNode_Text("num3939", number1);
	hunlingminf[38] = atoi(number1);
	opx2.QueryNode_Text("num3940", number1);
	hunlingminf[39] = atoi(number1);



	opx2.QueryNode_Text("num4001", number1);
	quyuf[0] = atoi(number1);
	opx2.QueryNode_Text("num4002", number1);
	quyuf[1] = atoi(number1);
	opx2.QueryNode_Text("num4003", number1);
	quyuf[2] = atoi(number1);
	opx2.QueryNode_Text("num4004", number1);
	quyuf[3] = atoi(number1);
	opx2.QueryNode_Text("num4005", number1);
	quyuf[4] = atoi(number1);
	opx2.QueryNode_Text("num4006", number1);
	quyuf[5] = atoi(number1);
	opx2.QueryNode_Text("num4007", number1);
	quyuf[6] = atoi(number1);
	opx2.QueryNode_Text("num4008", number1);
	quyuf[7] = atoi(number1);
	opx2.QueryNode_Text("num4009", number1);
	quyuf[8] = atoi(number1);
	opx2.QueryNode_Text("num4010", number1);
	quyuf[9] = atoi(number1);
	opx2.QueryNode_Text("num4011", number1);
	quyuf[10] = atoi(number1);
	opx2.QueryNode_Text("num4012", number1);
	quyuf[11] = atoi(number1);
	opx2.QueryNode_Text("num4013", number1);
	quyuf[12] = atoi(number1);
	opx2.QueryNode_Text("num4014", number1);
	quyuf[13] = atoi(number1);
	opx2.QueryNode_Text("num4015", number1);
	quyuf[14] = atoi(number1);
	opx2.QueryNode_Text("num4016", number1);
	quyuf[15] = atoi(number1);
	opx2.QueryNode_Text("num4017", number1);
	quyuf[16] = atoi(number1);
	opx2.QueryNode_Text("num4018", number1);
	quyuf[17] = atoi(number1);
	opx2.QueryNode_Text("num4019", number1);
	quyuf[18] = atoi(number1);
	opx2.QueryNode_Text("num4020", number1);
	quyuf[19] = atoi(number1);
	opx2.QueryNode_Text("num4021", number1);
	quyuf[20] = atoi(number1);
	opx2.QueryNode_Text("num4022", number1);
	quyuf[21] = atoi(number1);
	opx2.QueryNode_Text("num4023", number1);
	quyuf[22] = atoi(number1);
	opx2.QueryNode_Text("num4024", number1);
	quyuf[23] = atoi(number1);
	opx2.QueryNode_Text("num4025", number1);
	quyuf[24] = atoi(number1);
	opx2.QueryNode_Text("num4026", number1);
	quyuf[25] = atoi(number1);
	opx2.QueryNode_Text("num4027", number1);
	quyuf[26] = atoi(number1);
	opx2.QueryNode_Text("num4028", number1);
	quyuf[27] = atoi(number1);
	opx2.QueryNode_Text("num4029", number1);
	quyuf[28] = atoi(number1);
	opx2.QueryNode_Text("num4030", number1);
	quyuf[29] = atoi(number1);
	opx2.QueryNode_Text("num4031", number1);
	quyuf[30] = atoi(number1);
	opx2.QueryNode_Text("num4032", number1);
	quyuf[31] = atoi(number1);
	opx2.QueryNode_Text("num4033", number1);
	quyuf[32] = atoi(number1);
	opx2.QueryNode_Text("num4034", number1);
	quyuf[33] = atoi(number1);
	opx2.QueryNode_Text("num4035", number1);
	quyuf[34] = atoi(number1);
	opx2.QueryNode_Text("num4036", number1);
	quyuf[35] = atoi(number1);
	opx2.QueryNode_Text("num4037", number1);
	quyuf[36] = atoi(number1);
	opx2.QueryNode_Text("num4038", number1);
	quyuf[37] = atoi(number1);
	opx2.QueryNode_Text("num4039", number1);
	quyuf[38] = atoi(number1);
	opx2.QueryNode_Text("num4040", number1);
	quyuf[39] = atoi(number1);


	opx2.QueryNode_Text("num4101", number1);
	quyuerf[0] = atoi(number1);
	opx2.QueryNode_Text("num4102", number1);
	quyuerf[1] = atoi(number1);
	opx2.QueryNode_Text("num4103", number1);
	quyuerf[2] = atoi(number1);
	opx2.QueryNode_Text("num4104", number1);
	quyuerf[3] = atoi(number1);
	opx2.QueryNode_Text("num4105", number1);
	quyuerf[4] = atoi(number1);
	opx2.QueryNode_Text("num4106", number1);
	quyuerf[5] = atoi(number1);
	opx2.QueryNode_Text("num4107", number1);
	quyuerf[6] = atoi(number1);
	opx2.QueryNode_Text("num4108", number1);
	quyuerf[7] = atoi(number1);
	opx2.QueryNode_Text("num4109", number1);
	quyuerf[8] = atoi(number1);
	opx2.QueryNode_Text("num4110", number1);
	quyuerf[9] = atoi(number1);
	opx2.QueryNode_Text("num4111", number1);
	quyuerf[10] = atoi(number1);
	opx2.QueryNode_Text("num4112", number1);
	quyuerf[11] = atoi(number1);
	opx2.QueryNode_Text("num4113", number1);
	quyuerf[12] = atoi(number1);
	opx2.QueryNode_Text("num4114", number1);
	quyuerf[13] = atoi(number1);
	opx2.QueryNode_Text("num4115", number1);
	quyuerf[14] = atoi(number1);
	opx2.QueryNode_Text("num4116", number1);
	quyuerf[15] = atoi(number1);
	opx2.QueryNode_Text("num4117", number1);
	quyuerf[16] = atoi(number1);
	opx2.QueryNode_Text("num4118", number1);
	quyuerf[17] = atoi(number1);
	opx2.QueryNode_Text("num4119", number1);
	quyuerf[18] = atoi(number1);
	opx2.QueryNode_Text("num4120", number1);
	quyuerf[19] = atoi(number1);
	opx2.QueryNode_Text("num4121", number1);
	quyuerf[20] = atoi(number1);
	opx2.QueryNode_Text("num4122", number1);
	quyuerf[21] = atoi(number1);
	opx2.QueryNode_Text("num4123", number1);
	quyuerf[22] = atoi(number1);
	opx2.QueryNode_Text("num4124", number1);
	quyuerf[23] = atoi(number1);
	opx2.QueryNode_Text("num4125", number1);
	quyuerf[24] = atoi(number1);
	opx2.QueryNode_Text("num4126", number1);
	quyuerf[25] = atoi(number1);
	opx2.QueryNode_Text("num4127", number1);
	quyuerf[26] = atoi(number1);
	opx2.QueryNode_Text("num4128", number1);
	quyuerf[27] = atoi(number1);
	opx2.QueryNode_Text("num4129", number1);
	quyuerf[28] = atoi(number1);
	opx2.QueryNode_Text("num4130", number1);
	quyuerf[29] = atoi(number1);
	opx2.QueryNode_Text("num4131", number1);
	quyuerf[30] = atoi(number1);
	opx2.QueryNode_Text("num4132", number1);
	quyuerf[31] = atoi(number1);
	opx2.QueryNode_Text("num4133", number1);
	quyuerf[32] = atoi(number1);
	opx2.QueryNode_Text("num4134", number1);
	quyuerf[33] = atoi(number1);
	opx2.QueryNode_Text("num4135", number1);
	quyuerf[34] = atoi(number1);
	opx2.QueryNode_Text("num4136", number1);
	quyuerf[35] = atoi(number1);
	opx2.QueryNode_Text("num4137", number1);
	quyuerf[36] = atoi(number1);
	opx2.QueryNode_Text("num4138", number1);
	quyuerf[37] = atoi(number1);
	opx2.QueryNode_Text("num4139", number1);
	quyuerf[38] = atoi(number1);
	opx2.QueryNode_Text("num4140", number1);
	quyuerf[39] = atoi(number1);


	opx2.QueryNode_Text("num4201", number1);
	quyusanf[0] = atoi(number1);
	opx2.QueryNode_Text("num4202", number1);
	quyusanf[1] = atoi(number1);
	opx2.QueryNode_Text("num4203", number1);
	quyusanf[2] = atoi(number1);
	opx2.QueryNode_Text("num4204", number1);
	quyusanf[3] = atoi(number1);
	opx2.QueryNode_Text("num4205", number1);
	quyusanf[4] = atoi(number1);
	opx2.QueryNode_Text("num4206", number1);
	quyusanf[5] = atoi(number1);
	opx2.QueryNode_Text("num4207", number1);
	quyusanf[6] = atoi(number1);
	opx2.QueryNode_Text("num4208", number1);
	quyusanf[7] = atoi(number1);
	opx2.QueryNode_Text("num4209", number1);
	quyusanf[8] = atoi(number1);
	opx2.QueryNode_Text("num4210", number1);
	quyusanf[9] = atoi(number1);
	opx2.QueryNode_Text("num4211", number1);
	quyusanf[10] = atoi(number1);
	opx2.QueryNode_Text("num4212", number1);
	quyusanf[11] = atoi(number1);
	opx2.QueryNode_Text("num4213", number1);
	quyusanf[12] = atoi(number1);
	opx2.QueryNode_Text("num4214", number1);
	quyusanf[13] = atoi(number1);
	opx2.QueryNode_Text("num4215", number1);
	quyusanf[14] = atoi(number1);
	opx2.QueryNode_Text("num4216", number1);
	quyusanf[15] = atoi(number1);
	opx2.QueryNode_Text("num4217", number1);
	quyusanf[16] = atoi(number1);
	opx2.QueryNode_Text("num4218", number1);
	quyusanf[17] = atoi(number1);
	opx2.QueryNode_Text("num4219", number1);
	quyusanf[18] = atoi(number1);
	opx2.QueryNode_Text("num4220", number1);
	quyusanf[19] = atoi(number1);
	opx2.QueryNode_Text("num4221", number1);
	quyusanf[20] = atoi(number1);
	opx2.QueryNode_Text("num4222", number1);
	quyusanf[21] = atoi(number1);
	opx2.QueryNode_Text("num4223", number1);
	quyusanf[22] = atoi(number1);
	opx2.QueryNode_Text("num4224", number1);
	quyusanf[23] = atoi(number1);
	opx2.QueryNode_Text("num4225", number1);
	quyusanf[24] = atoi(number1);
	opx2.QueryNode_Text("num4226", number1);
	quyusanf[25] = atoi(number1);
	opx2.QueryNode_Text("num4227", number1);
	quyusanf[26] = atoi(number1);
	opx2.QueryNode_Text("num4228", number1);
	quyusanf[27] = atoi(number1);
	opx2.QueryNode_Text("num4229", number1);
	quyusanf[28] = atoi(number1);
	opx2.QueryNode_Text("num4230", number1);
	quyusanf[29] = atoi(number1);
	opx2.QueryNode_Text("num4231", number1);
	quyusanf[30] = atoi(number1);
	opx2.QueryNode_Text("num4232", number1);
	quyusanf[31] = atoi(number1);
	opx2.QueryNode_Text("num4233", number1);
	quyusanf[32] = atoi(number1);
	opx2.QueryNode_Text("num4234", number1);
	quyusanf[33] = atoi(number1);
	opx2.QueryNode_Text("num4235", number1);
	quyusanf[34] = atoi(number1);
	opx2.QueryNode_Text("num4236", number1);
	quyusanf[35] = atoi(number1);
	opx2.QueryNode_Text("num4237", number1);
	quyusanf[36] = atoi(number1);
	opx2.QueryNode_Text("num4238", number1);
	quyusanf[37] = atoi(number1);
	opx2.QueryNode_Text("num4239", number1);
	quyusanf[38] = atoi(number1);
	opx2.QueryNode_Text("num4240", number1);
	quyusanf[39] = atoi(number1);

	opx2.QueryNode_Text("num4301", number1);
	quyusif[0] = atoi(number1);
	opx2.QueryNode_Text("num4302", number1);
	quyusif[1] = atoi(number1);
	opx2.QueryNode_Text("num4303", number1);
	quyusif[2] = atoi(number1);
	opx2.QueryNode_Text("num4304", number1);
	quyusif[3] = atoi(number1);
	opx2.QueryNode_Text("num4305", number1);
	quyusif[4] = atoi(number1);
	opx2.QueryNode_Text("num4306", number1);
	quyusif[5] = atoi(number1);
	opx2.QueryNode_Text("num4307", number1);
	quyusif[6] = atoi(number1);
	opx2.QueryNode_Text("num4308", number1);
	quyusif[7] = atoi(number1);
	opx2.QueryNode_Text("num4309", number1);
	quyusif[8] = atoi(number1);
	opx2.QueryNode_Text("num4310", number1);
	quyusif[9] = atoi(number1);
	opx2.QueryNode_Text("num4311", number1);
	quyusif[10] = atoi(number1);
	opx2.QueryNode_Text("num4312", number1);
	quyusif[11] = atoi(number1);
	opx2.QueryNode_Text("num4313", number1);
	quyusif[12] = atoi(number1);
	opx2.QueryNode_Text("num4314", number1);
	quyusif[13] = atoi(number1);
	opx2.QueryNode_Text("num4315", number1);
	quyusif[14] = atoi(number1);
	opx2.QueryNode_Text("num4316", number1);
	quyusif[15] = atoi(number1);
	opx2.QueryNode_Text("num4317", number1);
	quyusif[16] = atoi(number1);
	opx2.QueryNode_Text("num4318", number1);
	quyusif[17] = atoi(number1);
	opx2.QueryNode_Text("num4319", number1);
	quyusif[18] = atoi(number1);
	opx2.QueryNode_Text("num4320", number1);
	quyusif[19] = atoi(number1);
	opx2.QueryNode_Text("num4321", number1);
	quyusif[20] = atoi(number1);
	opx2.QueryNode_Text("num4322", number1);
	quyusif[21] = atoi(number1);
	opx2.QueryNode_Text("num4323", number1);
	quyusif[22] = atoi(number1);
	opx2.QueryNode_Text("num4324", number1);
	quyusif[23] = atoi(number1);
	opx2.QueryNode_Text("num4325", number1);
	quyusif[24] = atoi(number1);
	opx2.QueryNode_Text("num4326", number1);
	quyusif[25] = atoi(number1);
	opx2.QueryNode_Text("num4327", number1);
	quyusif[26] = atoi(number1);
	opx2.QueryNode_Text("num4328", number1);
	quyusif[27] = atoi(number1);
	opx2.QueryNode_Text("num4329", number1);
	quyusif[28] = atoi(number1);
	opx2.QueryNode_Text("num4330", number1);
	quyusif[29] = atoi(number1);
	opx2.QueryNode_Text("num4331", number1);
	quyusif[30] = atoi(number1);
	opx2.QueryNode_Text("num4332", number1);
	quyusif[31] = atoi(number1);
	opx2.QueryNode_Text("num4333", number1);
	quyusif[32] = atoi(number1);
	opx2.QueryNode_Text("num4334", number1);
	quyusif[33] = atoi(number1);
	opx2.QueryNode_Text("num4335", number1);
	quyusif[34] = atoi(number1);
	opx2.QueryNode_Text("num4336", number1);
	quyusif[35] = atoi(number1);
	opx2.QueryNode_Text("num4337", number1);
	quyusif[36] = atoi(number1);
	opx2.QueryNode_Text("num4338", number1);
	quyusif[37] = atoi(number1);
	opx2.QueryNode_Text("num4339", number1);
	quyusif[38] = atoi(number1);
	opx2.QueryNode_Text("num4340", number1);
	quyusif[39] = atoi(number1);

	opx2.QueryNode_Text("num4401", number1);
	quyuwuf[0] = atoi(number1);
	opx2.QueryNode_Text("num4402", number1);
	quyuwuf[1] = atoi(number1);
	opx2.QueryNode_Text("num4403", number1);
	quyuwuf[2] = atoi(number1);
	opx2.QueryNode_Text("num4404", number1);
	quyuwuf[3] = atoi(number1);
	opx2.QueryNode_Text("num4405", number1);
	quyuwuf[4] = atoi(number1);
	opx2.QueryNode_Text("num4406", number1);
	quyuwuf[5] = atoi(number1);
	opx2.QueryNode_Text("num4407", number1);
	quyuwuf[6] = atoi(number1);
	opx2.QueryNode_Text("num4408", number1);
	quyuwuf[7] = atoi(number1);
	opx2.QueryNode_Text("num4409", number1);
	quyuwuf[8] = atoi(number1);
	opx2.QueryNode_Text("num4410", number1);
	quyuwuf[9] = atoi(number1);
	opx2.QueryNode_Text("num4411", number1);
	quyuwuf[10] = atoi(number1);
	opx2.QueryNode_Text("num4412", number1);
	quyuwuf[11] = atoi(number1);
	opx2.QueryNode_Text("num4413", number1);
	quyuwuf[12] = atoi(number1);
	opx2.QueryNode_Text("num4414", number1);
	quyuwuf[13] = atoi(number1);
	opx2.QueryNode_Text("num4415", number1);
	quyuwuf[14] = atoi(number1);
	opx2.QueryNode_Text("num4416", number1);
	quyuwuf[15] = atoi(number1);
	opx2.QueryNode_Text("num4417", number1);
	quyuwuf[16] = atoi(number1);
	opx2.QueryNode_Text("num4418", number1);
	quyuwuf[17] = atoi(number1);
	opx2.QueryNode_Text("num4419", number1);
	quyuwuf[18] = atoi(number1);
	opx2.QueryNode_Text("num4420", number1);
	quyuwuf[19] = atoi(number1);
	opx2.QueryNode_Text("num4421", number1);
	quyuwuf[20] = atoi(number1);
	opx2.QueryNode_Text("num4422", number1);
	quyuwuf[21] = atoi(number1);
	opx2.QueryNode_Text("num4423", number1);
	quyuwuf[22] = atoi(number1);
	opx2.QueryNode_Text("num4424", number1);
	quyuwuf[23] = atoi(number1);
	opx2.QueryNode_Text("num4425", number1);
	quyuwuf[24] = atoi(number1);
	opx2.QueryNode_Text("num4426", number1);
	quyuwuf[25] = atoi(number1);
	opx2.QueryNode_Text("num4427", number1);
	quyuwuf[26] = atoi(number1);
	opx2.QueryNode_Text("num4428", number1);
	quyuwuf[27] = atoi(number1);
	opx2.QueryNode_Text("num4429", number1);
	quyuwuf[28] = atoi(number1);
	opx2.QueryNode_Text("num4430", number1);
	quyuwuf[29] = atoi(number1);
	opx2.QueryNode_Text("num4431", number1);
	quyuwuf[30] = atoi(number1);
	opx2.QueryNode_Text("num4432", number1);
	quyuwuf[31] = atoi(number1);
	opx2.QueryNode_Text("num4433", number1);
	quyuwuf[32] = atoi(number1);
	opx2.QueryNode_Text("num4434", number1);
	quyuwuf[33] = atoi(number1);
	opx2.QueryNode_Text("num4435", number1);
	quyuwuf[34] = atoi(number1);
	opx2.QueryNode_Text("num4436", number1);
	quyuwuf[35] = atoi(number1);
	opx2.QueryNode_Text("num4437", number1);
	quyuwuf[36] = atoi(number1);
	opx2.QueryNode_Text("num4438", number1);
	quyuwuf[37] = atoi(number1);
	opx2.QueryNode_Text("num4439", number1);
	quyuwuf[38] = atoi(number1);
	opx2.QueryNode_Text("num4440", number1);
	quyuwuf[39] = atoi(number1);


	opx2.QueryNode_Text("num4501", number1);
	shenduf[0] = atoi(number1);
	opx2.QueryNode_Text("num4502", number1);
	shenduf[1] = atoi(number1);
	opx2.QueryNode_Text("num4503", number1);
	shenduf[2] = atoi(number1);
	opx2.QueryNode_Text("num4504", number1);
	shenduf[3] = atoi(number1);
	opx2.QueryNode_Text("num4505", number1);
	shenduf[4] = atoi(number1);
	opx2.QueryNode_Text("num4506", number1);
	shenduf[5] = atoi(number1);
	opx2.QueryNode_Text("num4507", number1);
	shenduf[6] = atoi(number1);
	opx2.QueryNode_Text("num4508", number1);
	shenduf[7] = atoi(number1);
	opx2.QueryNode_Text("num4509", number1);
	shenduf[8] = atoi(number1);
	opx2.QueryNode_Text("num4510", number1);
	shenduf[9] = atoi(number1);
	opx2.QueryNode_Text("num4511", number1);
	shenduf[10] = atoi(number1);
	opx2.QueryNode_Text("num4512", number1);
	shenduf[11] = atoi(number1);
	opx2.QueryNode_Text("num4513", number1);
	shenduf[12] = atoi(number1);
	opx2.QueryNode_Text("num4514", number1);
	shenduf[13] = atoi(number1);
	opx2.QueryNode_Text("num4515", number1);
	shenduf[14] = atoi(number1);
	opx2.QueryNode_Text("num4516", number1);
	shenduf[15] = atoi(number1);
	opx2.QueryNode_Text("num4517", number1);
	shenduf[16] = atoi(number1);
	opx2.QueryNode_Text("num4518", number1);
	shenduf[17] = atoi(number1);
	opx2.QueryNode_Text("num4519", number1);
	shenduf[18] = atoi(number1);
	opx2.QueryNode_Text("num4520", number1);
	shenduf[19] = atoi(number1);
	opx2.QueryNode_Text("num4521", number1);
	shenduf[20] = atoi(number1);
	opx2.QueryNode_Text("num4522", number1);
	shenduf[21] = atoi(number1);
	opx2.QueryNode_Text("num4523", number1);
	shenduf[22] = atoi(number1);
	opx2.QueryNode_Text("num4524", number1);
	shenduf[23] = atoi(number1);
	opx2.QueryNode_Text("num4525", number1);
	shenduf[24] = atoi(number1);
	opx2.QueryNode_Text("num4526", number1);
	shenduf[25] = atoi(number1);
	opx2.QueryNode_Text("num4527", number1);
	shenduf[26] = atoi(number1);
	opx2.QueryNode_Text("num4528", number1);
	shenduf[27] = atoi(number1);
	opx2.QueryNode_Text("num4529", number1);
	shenduf[28] = atoi(number1);
	opx2.QueryNode_Text("num4530", number1);
	shenduf[29] = atoi(number1);
	opx2.QueryNode_Text("num4531", number1);
	shenduf[30] = atoi(number1);
	opx2.QueryNode_Text("num4532", number1);
	shenduf[31] = atoi(number1);
	opx2.QueryNode_Text("num4533", number1);
	shenduf[32] = atoi(number1);
	opx2.QueryNode_Text("num4534", number1);
	shenduf[33] = atoi(number1);
	opx2.QueryNode_Text("num4535", number1);
	shenduf[34] = atoi(number1);
	opx2.QueryNode_Text("num4536", number1);
	shenduf[35] = atoi(number1);
	opx2.QueryNode_Text("num4537", number1);
	shenduf[36] = atoi(number1);
	opx2.QueryNode_Text("num4538", number1);
	shenduf[37] = atoi(number1);
	opx2.QueryNode_Text("num4539", number1);
	shenduf[38] = atoi(number1);
	opx2.QueryNode_Text("num4540", number1);
	shenduf[39] = atoi(number1);



	opx2.QueryNode_Text("num4601", number1);
	shenduerf[0] = atoi(number1);
	opx2.QueryNode_Text("num4602", number1);
	shenduerf[1] = atoi(number1);
	opx2.QueryNode_Text("num4603", number1);
	shenduerf[2] = atoi(number1);
	opx2.QueryNode_Text("num4604", number1);
	shenduerf[3] = atoi(number1);
	opx2.QueryNode_Text("num4605", number1);
	shenduerf[4] = atoi(number1);
	opx2.QueryNode_Text("num4606", number1);
	shenduerf[5] = atoi(number1);
	opx2.QueryNode_Text("num4607", number1);
	shenduerf[6] = atoi(number1);
	opx2.QueryNode_Text("num4608", number1);
	shenduerf[7] = atoi(number1);
	opx2.QueryNode_Text("num4609", number1);
	shenduerf[8] = atoi(number1);
	opx2.QueryNode_Text("num4610", number1);
	shenduerf[9] = atoi(number1);
	opx2.QueryNode_Text("num4611", number1);
	shenduerf[10] = atoi(number1);
	opx2.QueryNode_Text("num4612", number1);
	shenduerf[11] = atoi(number1);
	opx2.QueryNode_Text("num4613", number1);
	shenduerf[12] = atoi(number1);
	opx2.QueryNode_Text("num4614", number1);
	shenduerf[13] = atoi(number1);
	opx2.QueryNode_Text("num4615", number1);
	shenduerf[14] = atoi(number1);
	opx2.QueryNode_Text("num4616", number1);
	shenduerf[15] = atoi(number1);
	opx2.QueryNode_Text("num4617", number1);
	shenduerf[16] = atoi(number1);
	opx2.QueryNode_Text("num4618", number1);
	shenduerf[17] = atoi(number1);
	opx2.QueryNode_Text("num4619", number1);
	shenduerf[18] = atoi(number1);
	opx2.QueryNode_Text("num4620", number1);
	shenduerf[19] = atoi(number1);
	opx2.QueryNode_Text("num4621", number1);
	shenduerf[20] = atoi(number1);
	opx2.QueryNode_Text("num4622", number1);
	shenduerf[21] = atoi(number1);
	opx2.QueryNode_Text("num4623", number1);
	shenduerf[22] = atoi(number1);
	opx2.QueryNode_Text("num4624", number1);
	shenduerf[23] = atoi(number1);
	opx2.QueryNode_Text("num4625", number1);
	shenduerf[24] = atoi(number1);
	opx2.QueryNode_Text("num4626", number1);
	shenduerf[25] = atoi(number1);
	opx2.QueryNode_Text("num4627", number1);
	shenduerf[26] = atoi(number1);
	opx2.QueryNode_Text("num4628", number1);
	shenduerf[27] = atoi(number1);
	opx2.QueryNode_Text("num4629", number1);
	shenduerf[28] = atoi(number1);
	opx2.QueryNode_Text("num4630", number1);
	shenduerf[29] = atoi(number1);
	opx2.QueryNode_Text("num4631", number1);
	shenduerf[30] = atoi(number1);
	opx2.QueryNode_Text("num4632", number1);
	shenduerf[31] = atoi(number1);
	opx2.QueryNode_Text("num4633", number1);
	shenduerf[32] = atoi(number1);
	opx2.QueryNode_Text("num4634", number1);
	shenduerf[33] = atoi(number1);
	opx2.QueryNode_Text("num4635", number1);
	shenduerf[34] = atoi(number1);
	opx2.QueryNode_Text("num4636", number1);
	shenduerf[35] = atoi(number1);
	opx2.QueryNode_Text("num4637", number1);
	shenduerf[36] = atoi(number1);
	opx2.QueryNode_Text("num4638", number1);
	shenduerf[37] = atoi(number1);
	opx2.QueryNode_Text("num4639", number1);
	shenduerf[38] = atoi(number1);
	opx2.QueryNode_Text("num4640", number1);
	shenduerf[39] = atoi(number1);



	opx2.QueryNode_Text("num4701", number1);
	huif[0] = atoi(number1);
	opx2.QueryNode_Text("num4702", number1);
	huif[1] = atoi(number1);
	opx2.QueryNode_Text("num4703", number1);
	huif[2] = atoi(number1);
	opx2.QueryNode_Text("num4704", number1);
	huif[3] = atoi(number1);
	opx2.QueryNode_Text("num4705", number1);
	huif[4] = atoi(number1);
	opx2.QueryNode_Text("num4706", number1);
	huif[5] = atoi(number1);
	opx2.QueryNode_Text("num4707", number1);
	huif[6] = atoi(number1);
	opx2.QueryNode_Text("num4708", number1);
	huif[7] = atoi(number1);
	opx2.QueryNode_Text("num4709", number1);
	huif[8] = atoi(number1);
	opx2.QueryNode_Text("num4710", number1);
	huif[9] = atoi(number1);
	opx2.QueryNode_Text("num4711", number1);
	huif[10] = atoi(number1);
	opx2.QueryNode_Text("num4712", number1);
	huif[11] = atoi(number1);
	opx2.QueryNode_Text("num4713", number1);
	huif[12] = atoi(number1);
	opx2.QueryNode_Text("num4714", number1);
	huif[13] = atoi(number1);
	opx2.QueryNode_Text("num4715", number1);
	huif[14] = atoi(number1);
	opx2.QueryNode_Text("num4716", number1);
	huif[15] = atoi(number1);
	opx2.QueryNode_Text("num4717", number1);
	huif[16] = atoi(number1);
	opx2.QueryNode_Text("num4718", number1);
	huif[17] = atoi(number1);
	opx2.QueryNode_Text("num4719", number1);
	huif[18] = atoi(number1);
	opx2.QueryNode_Text("num4720", number1);
	huif[19] = atoi(number1);
	opx2.QueryNode_Text("num4721", number1);
	huif[20] = atoi(number1);
	opx2.QueryNode_Text("num4722", number1);
	huif[21] = atoi(number1);
	opx2.QueryNode_Text("num4723", number1);
	huif[22] = atoi(number1);
	opx2.QueryNode_Text("num4724", number1);
	huif[23] = atoi(number1);
	opx2.QueryNode_Text("num4725", number1);
	huif[24] = atoi(number1);
	opx2.QueryNode_Text("num4726", number1);
	huif[25] = atoi(number1);
	opx2.QueryNode_Text("num4727", number1);
	huif[26] = atoi(number1);
	opx2.QueryNode_Text("num4728", number1);
	huif[27] = atoi(number1);
	opx2.QueryNode_Text("num4729", number1);
	huif[28] = atoi(number1);
	opx2.QueryNode_Text("num4730", number1);
	huif[29] = atoi(number1);
	opx2.QueryNode_Text("num4731", number1);
	huif[30] = atoi(number1);
	opx2.QueryNode_Text("num4732", number1);
	huif[31] = atoi(number1);
	opx2.QueryNode_Text("num4733", number1);
	huif[32] = atoi(number1);
	opx2.QueryNode_Text("num4734", number1);
	huif[33] = atoi(number1);
	opx2.QueryNode_Text("num4735", number1);
	huif[34] = atoi(number1);
	opx2.QueryNode_Text("num4736", number1);
	huif[35] = atoi(number1);
	opx2.QueryNode_Text("num4737", number1);
	huif[36] = atoi(number1);
	opx2.QueryNode_Text("num4738", number1);
	huif[37] = atoi(number1);
	opx2.QueryNode_Text("num4739", number1);
	huif[38] = atoi(number1);
	opx2.QueryNode_Text("num4740", number1);
	huif[39] = atoi(number1);



	opx2.QueryNode_Text("num4801", number1);
	huierf[0] = atoi(number1);
	opx2.QueryNode_Text("num4802", number1);
	huierf[1] = atoi(number1);
	opx2.QueryNode_Text("num4803", number1);
	huierf[2] = atoi(number1);
	opx2.QueryNode_Text("num4804", number1);
	huierf[3] = atoi(number1);
	opx2.QueryNode_Text("num4805", number1);
	huierf[4] = atoi(number1);
	opx2.QueryNode_Text("num4806", number1);
	huierf[5] = atoi(number1);
	opx2.QueryNode_Text("num4807", number1);
	huierf[6] = atoi(number1);
	opx2.QueryNode_Text("num4808", number1);
	huierf[7] = atoi(number1);
	opx2.QueryNode_Text("num4809", number1);
	huierf[8] = atoi(number1);
	opx2.QueryNode_Text("num4810", number1);
	huierf[9] = atoi(number1);
	opx2.QueryNode_Text("num4811", number1);
	huierf[10] = atoi(number1);
	opx2.QueryNode_Text("num4812", number1);
	huierf[11] = atoi(number1);
	opx2.QueryNode_Text("num4813", number1);
	huierf[12] = atoi(number1);
	opx2.QueryNode_Text("num4814", number1);
	huierf[13] = atoi(number1);
	opx2.QueryNode_Text("num4815", number1);
	huierf[14] = atoi(number1);
	opx2.QueryNode_Text("num4816", number1);
	huierf[15] = atoi(number1);
	opx2.QueryNode_Text("num4817", number1);
	huierf[16] = atoi(number1);
	opx2.QueryNode_Text("num4818", number1);
	huierf[17] = atoi(number1);
	opx2.QueryNode_Text("num4819", number1);
	huierf[18] = atoi(number1);
	opx2.QueryNode_Text("num4820", number1);
	huierf[19] = atoi(number1);
	opx2.QueryNode_Text("num4821", number1);
	huierf[20] = atoi(number1);
	opx2.QueryNode_Text("num4822", number1);
	huierf[21] = atoi(number1);
	opx2.QueryNode_Text("num4823", number1);
	huierf[22] = atoi(number1);
	opx2.QueryNode_Text("num4824", number1);
	huierf[23] = atoi(number1);
	opx2.QueryNode_Text("num4825", number1);
	huierf[24] = atoi(number1);
	opx2.QueryNode_Text("num4826", number1);
	huierf[25] = atoi(number1);
	opx2.QueryNode_Text("num4827", number1);
	huierf[26] = atoi(number1);
	opx2.QueryNode_Text("num4828", number1);
	huierf[27] = atoi(number1);
	opx2.QueryNode_Text("num4829", number1);
	huierf[28] = atoi(number1);
	opx2.QueryNode_Text("num4830", number1);
	huierf[29] = atoi(number1);
	opx2.QueryNode_Text("num4831", number1);
	huierf[30] = atoi(number1);
	opx2.QueryNode_Text("num4832", number1);
	huierf[31] = atoi(number1);
	opx2.QueryNode_Text("num4833", number1);
	huierf[32] = atoi(number1);
	opx2.QueryNode_Text("num4834", number1);
	huierf[33] = atoi(number1);
	opx2.QueryNode_Text("num4835", number1);
	huierf[34] = atoi(number1);
	opx2.QueryNode_Text("num4836", number1);
	huierf[35] = atoi(number1);
	opx2.QueryNode_Text("num4837", number1);
	huierf[36] = atoi(number1);
	opx2.QueryNode_Text("num4838", number1);
	huierf[37] = atoi(number1);
	opx2.QueryNode_Text("num4839", number1);
	huierf[38] = atoi(number1);
	opx2.QueryNode_Text("num4840", number1);
	huierf[39] = atoi(number1);
	opx2.SaveFile();

	//CString ComChoosed = _T("COM5");
	//CMyPublicData::ModbusInit(ComChoosed);
	//for (int i = 0; i < 200; i++)
	//{
	//	datatestDPU[i + 4] = allData[1][1 + i];
	//}

	//for (int i = 0; i < 4; i++)
	//{
	//	CMyPublicData::setfunc(32, 16, i * 50 + 1, 50);
	//	CMyPublicData::setfunc(33, 16, i * 50 + 1, 50);
	//}
	////for (int i = 0; i < 200; i += 100)
	////{
	////	CMyPublicData::setfunc(32, 16, i + 1, 100);
	////	CMyPublicData::setfunc(33, 16, i + 1, 100);
	////}

	//for (int i = 0; i < 33; i++)
	//{
	//	datatestDPU[i + 4] = 32;
	//}
	//CMyPublicData::setfunc(32, 16, 32, 33);
	//CMyPublicData::setfunc(33, 16, 32, 33);
	//datatestDPU[4] = 0;
	//datatestDPU[5] = 255;
	//datatestDPU[6] = 0;
	//datatestDPU[7] = 255;
	//datatestDPU[8] = 0;
	//datatestDPU[9] = 255;
	//datatestDPU[10] = 0;
	//datatestDPU[11] = 255;
	//CMyPublicData::setfunc(32, 16, 351, 8);
	//CMyPublicData::setfunc(33, 16, 351, 8);
	////for (int i = 0; i < 400; i++)
	////{
	////	datatestDPU[i + 4] = allData[1][1 + i];
	////}
	////for (int i = 0; i < 8; i++)
	////{
	////	CMyPublicData::setfunc(32, 16, i * 50 + 1, 50);
	////}
	CMyPublicData::setfunc(10, 3, 9, 1);
	if (fanhuizhi == (-1))
	{
		tongxincuowu[0] = -1;
	}
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != L"OFF")
		{
			CMyPublicData::setfunc(32 + i, 3, 1, 1);
			if (fanhuizhi == (-1))
			{
				tongxincuowu[i + 1] = -1;
			}
		}
	}


	if (tongxincuowu[0] != (-1))
	{
		CMyPublicData::setfunc(10, 3, 9, 1);
		CMyPublicData::bit_set(10, 9, 6, false);                     //阀电源初始化前先关闭
		if (fuzhusd[0] == L"ON")
		{
			CMyPublicData::bit_read(10, 9, 1);
			CMyPublicData::bit_set(10, 9, 1, true);
		}
		if (fuzhusd[0] == L"OFF")
		{
			CMyPublicData::bit_read(10, 9, 1);
			CMyPublicData::bit_set(10, 9, 1, false);
		}
		if (fuzhusd[1] == L"ON")
		{
			CMyPublicData::bit_read(10, 9, 2);
			CMyPublicData::bit_set(10, 9, 2, true);
		}
		if (fuzhusd[1] == L"OFF")
		{
			CMyPublicData::bit_read(10, 9, 2);
			CMyPublicData::bit_set(10, 9, 2, false);
		}
		if (fuzhusd[2] == L"ON")
		{
			CMyPublicData::bit_read(10, 9, 3);
			CMyPublicData::bit_set(10, 9, 3, true);
		}
		if (fuzhusd[2] == L"OFF")
		{
			CMyPublicData::bit_read(10, 9, 3);
			CMyPublicData::bit_set(10, 9, 3, false);
		}
		if (fuzhusd[3] == L"ON")
		{
			CMyPublicData::bit_read(10, 9, 4);
			CMyPublicData::bit_set(10, 9, 4, true);
		}
		if (fuzhusd[3] == L"OFF")
		{
			CMyPublicData::bit_read(10, 9, 4);
			CMyPublicData::bit_set(10, 9, 4, false);
		}
		if (fuzhusd[4] == L"ON")
		{
			CMyPublicData::bit_read(10, 7, 2);
			CMyPublicData::bit_set(10, 7, 2, true);
		}
		if (fuzhusd[4] == L"OFF")
		{
			CMyPublicData::bit_read(10, 7, 2);
			CMyPublicData::bit_set(10, 7, 2, false);
		}
		if (fuzhusd[5] == L"ON")
		{
			CMyPublicData::bit_read(10, 7, 3);
			CMyPublicData::bit_set(10, 7, 3, true);
		}
		if (fuzhusd[5] == L"OFF")
		{
			CMyPublicData::bit_read(10, 7, 3);
			CMyPublicData::bit_set(10, 7, 3, false);
		}
		for (int i = 0; i < 10; i++)                                 //通道流量调整
		{
			if (liuliangsd[i] == L"1")
			{
				allData[0][10 + i] = liuliang[i] + liuliang[10];
			}
			if (liuliangsd[i] == L"2")
			{
				allData[0][10 + i] = liuliang[i] + liuliang[11];
			}
			if (liuliangsd[i] == L"3")
			{
				allData[0][10 + i] = liuliang[i] + liuliang[12];
			}
		}
		allData[0][30] = 1;              //流量置一
		allData[0][34] = qinghui[0];     //清灰周期
		allData[0][35] = qinghui[1];     //清灰时间
		allData[0][36] = qinghui[2];     //返回时间
		allData[0][37] = 1;
		allData[0][38] = beijingban[0];  //前背景板位置
		allData[0][39] = beijingban[1];  //后背景板位置
		datatestDPU[4] = allData[0][30];
		for (int i = 0; i < 30; i++)
		{
			datatestDPU[i + 4] = allData[0][i + 10];
		}
		CMyPublicData::setfunc(10, 16, 10, 30);
		CMyPublicData::setfunc(10, 3, 9, 1);
		CMyPublicData::bit_set(10, 9, 8, true);
	}




	for (int i = 0; i < 10; i++)
	{
		if (modsd[2 * i] == L"1")
		{                                                                  //前相机
			allData[2 * i + 1][4] = famen[3];                                  //前相机开阀时间
			allData[2 * i + 1][27] = mian[2];                                  //前暗面积
			allData[2 * i + 1][28] = mian[4];                                  //前亮面积

			allData[2 * i + 1][64] = rlingmin[0] + rlingminf[i];               //R前暗敏感
			allData[2 * i + 1][65] = rlingmin[1] + rlingminf[10 + i];          //R前亮敏感
			allData[2 * i + 1][66] = glingmin[0] + glingminf[i];               //G前暗敏感
			allData[2 * i + 1][67] = glingmin[1] + glingminf[10 + i];          //G前亮敏感
			allData[2 * i + 1][68] = blingmin[0] + blingminf[i];               //B前暗敏感
			allData[2 * i + 1][69] = blingmin[1] + blingminf[10 + i];          //B前亮敏感
			allData[2 * i + 1][78] = hunselingmin[0] + hunlingminf[i];         //混色前暗敏感
			allData[2 * i + 1][79] = hunselingmin[1] + hunlingminf[10 + i];    //混色前亮敏感

			allData[2 * i + 1][82] = mian[0];                                  //前相机颜色面积

			allData[2 * i + 1][83] = yanse[0] + quyuf[i];                      //区域1前上限
			allData[2 * i + 1][84] = yanse[1] + quyuf[10 + i];                 //区域1前下限
			allData[2 * i + 1][85] = shen[0] + shenduf[i];                     //深度1前上限
			allData[2 * i + 1][86] = shen[1] + shenduf[10 + i];                //深度1前下限
			allData[2 * i + 1][87] = huidu1sheding[0] + huif[i];               //灰度1前上限
			allData[2 * i + 1][88] = huidu1sheding[1] + huif[10 + i];          //灰度1前下限
			allData[2 * i + 1][89] = quyu[0] + quyuerf[i];                     //区域2前上限
			allData[2 * i + 1][90] = quyu[1] + quyuerf[10 + i];                //区域2前下限
			allData[2 * i + 1][91] = quyusansd[0] + quyusanf[i];               //区域3前上限
			allData[2 * i + 1][92] = quyusansd[1] + quyusanf[10 + i];          //区域3前下限
			allData[2 * i + 1][93] = quyusisd[0] + quyusif[i];                 //区域4前上限
			allData[2 * i + 1][94] = quyusisd[1] + quyusif[10 + i];            //区域4前下限
			allData[2 * i + 1][95] = quyuwusd[0] + quyuwuf[i];                 //区域5前上限
			allData[2 * i + 1][96] = quyuwusd[1] + quyuwuf[10 + i];            //区域5前下限
			allData[2 * i + 1][97] = shendu2[0] + shenduerf[i];                //深度2前上限
			allData[2 * i + 1][98] = shendu2[1] + shenduerf[10 + i];           //深度2前下限
			allData[2 * i + 1][99] = huidu2sheding[0] + huierf[i];             //灰度2前上限
			allData[2 * i + 1][100] = huidu2sheding[1] + huierf[10 + i];       //灰度2前下限

			allData[2 * i + 1][350] = yanseminganqiangdusd[0];                 //前相机颜色敏感强度
		}
		if (modsd[2 * i] == L"2")
		{
			allData[2 * i + 1][4] = famen[4];
			allData[2 * i + 1][27] = mian[8];
			allData[2 * i + 1][28] = mian[10];

			allData[2 * i + 1][64] = rlingmin[4] + rlingminf[i];
			allData[2 * i + 1][65] = rlingmin[5] + rlingminf[10 + i];
			allData[2 * i + 1][66] = glingmin[4] + glingminf[i];
			allData[2 * i + 1][67] = glingmin[5] + glingminf[10 + i];
			allData[2 * i + 1][68] = blingmin[4] + blingminf[i];
			allData[2 * i + 1][69] = blingmin[5] + blingminf[10 + i];
			allData[2 * i + 1][78] = hunselingmin[4] + hunlingminf[i];
			allData[2 * i + 1][79] = hunselingmin[5] + hunlingminf[10 + i];

			allData[2 * i + 1][82] = mian[6];

			allData[2 * i + 1][83] = yanse[4] + quyuf[i];
			allData[2 * i + 1][84] = yanse[5] + quyuf[10 + i];
			allData[2 * i + 1][85] = shen[4] + shenduf[i];
			allData[2 * i + 1][86] = shen[5] + shenduf[10 + i];
			allData[2 * i + 1][87] = huidu1sheding[4] + huif[i];
			allData[2 * i + 1][88] = huidu1sheding[5] + huif[10 + i];
			allData[2 * i + 1][89] = quyu[4] + quyuerf[i];
			allData[2 * i + 1][90] = quyu[5] + quyuerf[10 + i];
			allData[2 * i + 1][91] = quyusansd[4] + quyusanf[i];
			allData[2 * i + 1][92] = quyusansd[5] + quyusanf[10 + i];
			allData[2 * i + 1][93] = quyusisd[4] + quyusif[i];
			allData[2 * i + 1][94] = quyusisd[5] + quyusif[10 + i];
			allData[2 * i + 1][95] = quyuwusd[4] + quyuwuf[i];
			allData[2 * i + 1][96] = quyuwusd[5] + quyuwuf[10 + i];
			allData[2 * i + 1][97] = shendu2[4] + shenduerf[i];
			allData[2 * i + 1][98] = shendu2[5] + shenduerf[10 + i];
			allData[2 * i + 1][99] = huidu2sheding[4] + huierf[i];
			allData[2 * i + 1][100] = huidu2sheding[5] + huierf[10 + i];

			allData[2 * i + 1][350] = yanseminganqiangdusd[2];
		}
		if (modsd[2 * i] == L"3")
		{
			allData[2 * i + 1][4] = famen[6];
			allData[2 * i + 1][27] = mian[14];
			allData[2 * i + 1][28] = mian[16];

			allData[2 * i + 1][64] = rlingmin[8] + rlingminf[i];
			allData[2 * i + 1][65] = rlingmin[9] + rlingminf[10 + i];
			allData[2 * i + 1][66] = glingmin[8] + glingminf[i];
			allData[2 * i + 1][67] = glingmin[9] + glingminf[10 + i];
			allData[2 * i + 1][68] = blingmin[8] + blingminf[i];
			allData[2 * i + 1][69] = blingmin[9] + blingminf[10 + i];
			allData[2 * i + 1][78] = hunselingmin[8] + hunlingminf[i];
			allData[2 * i + 1][79] = hunselingmin[9] + hunlingminf[10 + i];

			allData[2 * i + 1][82] = mian[12];

			allData[2 * i + 1][83] = yanse[8] + quyuf[i];
			allData[2 * i + 1][84] = yanse[9] + quyuf[10 + i];
			allData[2 * i + 1][85] = shen[8] + shenduf[i];
			allData[2 * i + 1][86] = shen[9] + shenduf[10 + i];
			allData[2 * i + 1][87] = huidu1sheding[8] + huif[i];
			allData[2 * i + 1][88] = huidu1sheding[9] + huif[10 + i];
			allData[2 * i + 1][89] = quyu[8] + quyuerf[i];
			allData[2 * i + 1][90] = quyu[9] + quyuerf[10 + i];
			allData[2 * i + 1][91] = quyusansd[8] + quyusanf[i];
			allData[2 * i + 1][92] = quyusansd[9] + quyusanf[10 + i];
			allData[2 * i + 1][93] = quyusisd[8] + quyusif[i];
			allData[2 * i + 1][94] = quyusisd[9] + quyusif[10 + i];
			allData[2 * i + 1][95] = quyuwusd[8] + quyuwuf[i];
			allData[2 * i + 1][96] = quyuwusd[9] + quyuwuf[10 + i];
			allData[2 * i + 1][97] = shendu2[8] + shenduerf[i];
			allData[2 * i + 1][98] = shendu2[9] + shenduerf[10 + i];
			allData[2 * i + 1][99] = huidu2sheding[8] + huierf[i];
			allData[2 * i + 1][100] = huidu2sheding[9] + huierf[10 + i];

			allData[2 * i + 1][350] = yanseminganqiangdusd[4];
		}


		if (modsd[2 * i + 1] == L"1")
		{                                                                    //后相机
			allData[2 * i + 2][4] = famen[3];                                    //后相机开阀时间
			allData[2 * i + 2][27] = mian[3];                                    //后暗面积
			allData[2 * i + 2][28] = mian[5];                                    //后亮面积

			allData[2 * i + 2][64] = rlingmin[2] + rlingminf[20 + i];            //R前暗敏感
			allData[2 * i + 2][65] = rlingmin[3] + rlingminf[30 + i];            //R前亮敏感
			allData[2 * i + 2][66] = glingmin[2] + glingminf[20 + i];            //G前暗敏感
			allData[2 * i + 2][67] = glingmin[3] + glingminf[30 + i];            //G前亮敏感
			allData[2 * i + 2][68] = blingmin[2] + blingminf[20 + i];            //B前暗敏感
			allData[2 * i + 2][69] = blingmin[3] + blingminf[30 + i];            //B前亮敏感
			allData[2 * i + 2][78] = hunselingmin[2] + hunlingminf[20 + i];      //混色前暗敏感
			allData[2 * i + 2][79] = hunselingmin[3] + hunlingminf[30 + i];      //混色前亮敏感

			allData[2 * i + 2][82] = mian[1];                                  //后相机颜色面积

			allData[2 * i + 2][83] = yanse[2] + quyuf[20 + i];                   //区域1前上限
			allData[2 * i + 2][84] = yanse[3] + quyuf[30 + i];                   //区域1前下限
			allData[2 * i + 2][85] = shen[2] + shenduf[20 + i];                  //深度1前上限
			allData[2 * i + 2][86] = shen[3] + shenduf[30 + i];                  //深度1前下限
			allData[2 * i + 2][87] = huidu1sheding[2] + huif[20 + i];            //灰度1前上限
			allData[2 * i + 2][88] = huidu1sheding[3] + huif[30 + i];            //灰度1前下限
			allData[2 * i + 2][89] = quyu[2] + quyuerf[20 + i];                  //区域2前上限
			allData[2 * i + 2][90] = quyu[3] + quyuerf[30 + i];                  //区域2前下限
			allData[2 * i + 2][91] = quyusansd[2] + quyusanf[20 + i];            //区域3前上限
			allData[2 * i + 2][92] = quyusansd[3] + quyusanf[30 + i];            //区域3前下限
			allData[2 * i + 2][93] = quyusisd[2] + quyusif[20 + i];              //区域4前上限
			allData[2 * i + 2][94] = quyusisd[3] + quyusif[30 + i];              //区域4前下限
			allData[2 * i + 2][95] = quyuwusd[2] + quyuwuf[20 + i];              //区域5前上限
			allData[2 * i + 2][96] = quyuwusd[3] + quyuwuf[30 + i];              //区域5前下限
			allData[2 * i + 2][97] = shendu2[2] + shenduerf[20 + i];             //深度2前上限
			allData[2 * i + 2][98] = shendu2[3] + shenduerf[30 + i];             //深度2前下限
			allData[2 * i + 2][99] = huidu2sheding[2] + huierf[20 + i];          //灰度2前上限
			allData[2 * i + 2][100] = huidu2sheding[3] + huierf[30 + i];         //灰度2前下限

			allData[2 * i + 2][350] = yanseminganqiangdusd[1];                   //后相机颜色敏感强度
		}
		if (modsd[2 * i + 1] == L"2")
		{
			allData[2 * i + 2][4] = famen[4];
			allData[2 * i + 2][27] = mian[9];
			allData[2 * i + 2][28] = mian[11];

			allData[2 * i + 2][64] = rlingmin[6] + rlingminf[20 + i];
			allData[2 * i + 2][65] = rlingmin[7] + rlingminf[30 + i];
			allData[2 * i + 2][66] = glingmin[6] + glingminf[20 + i];
			allData[2 * i + 2][67] = glingmin[7] + glingminf[30 + i];
			allData[2 * i + 2][68] = blingmin[6] + blingminf[20 + i];
			allData[2 * i + 2][69] = blingmin[7] + blingminf[30 + i];
			allData[2 * i + 2][78] = hunselingmin[6] + hunlingminf[20 + i];
			allData[2 * i + 2][79] = hunselingmin[7] + hunlingminf[30 + i];

			allData[2 * i + 2][82] = mian[7];

			allData[2 * i + 2][83] = yanse[6] + quyuf[20 + i];
			allData[2 * i + 2][84] = yanse[7] + quyuf[30 + i];
			allData[2 * i + 2][85] = shen[6] + shenduf[20 + i];
			allData[2 * i + 2][86] = shen[7] + shenduf[30 + i];
			allData[2 * i + 2][87] = huidu1sheding[6] + huif[20 + i];
			allData[2 * i + 2][88] = huidu1sheding[7] + huif[30 + i];
			allData[2 * i + 2][89] = quyu[6] + quyuerf[20 + i];
			allData[2 * i + 2][90] = quyu[7] + quyuerf[30 + i];
			allData[2 * i + 2][91] = quyusansd[6] + quyusanf[20 + i];
			allData[2 * i + 2][92] = quyusansd[7] + quyusanf[30 + i];
			allData[2 * i + 2][93] = quyusisd[6] + quyusif[20 + i];
			allData[2 * i + 2][94] = quyusisd[7] + quyusif[30 + i];
			allData[2 * i + 2][95] = quyuwusd[6] + quyuwuf[20 + i];
			allData[2 * i + 2][96] = quyuwusd[7] + quyuwuf[30 + i];
			allData[2 * i + 2][97] = shendu2[6] + shenduerf[20 + i];
			allData[2 * i + 2][98] = shendu2[7] + shenduerf[30 + i];
			allData[2 * i + 2][99] = huidu2sheding[6] + huierf[20 + i];
			allData[2 * i + 2][100] = huidu2sheding[7] + huierf[30 + i];

			allData[2 * i + 2][350] = yanseminganqiangdusd[3];
		}
		if (modsd[2 * i + 1] == L"3")
		{
			allData[2 * i + 2][4] = famen[6];
			allData[2 * i + 2][27] = mian[15];
			allData[2 * i + 2][28] = mian[17];

			allData[2 * i + 2][64] = rlingmin[10] + rlingminf[20 + i];
			allData[2 * i + 2][65] = rlingmin[11] + rlingminf[30 + i];
			allData[2 * i + 2][66] = glingmin[10] + glingminf[20 + i];
			allData[2 * i + 2][67] = glingmin[11] + glingminf[30 + i];
			allData[2 * i + 2][68] = blingmin[10] + blingminf[20 + i];
			allData[2 * i + 2][69] = blingmin[11] + blingminf[30 + i];
			allData[2 * i + 2][78] = hunselingmin[10] + hunlingminf[20 + i];
			allData[2 * i + 2][79] = hunselingmin[11] + hunlingminf[30 + i];

			allData[2 * i + 2][82] = mian[13];

			allData[2 * i + 2][83] = yanse[10] + quyuf[20 + i];
			allData[2 * i + 2][84] = yanse[11] + quyuf[30 + i];
			allData[2 * i + 2][85] = shen[10] + shenduf[20 + i];
			allData[2 * i + 2][86] = shen[11] + shenduf[30 + i];
			allData[2 * i + 2][87] = huidu1sheding[10] + huif[20 + i];
			allData[2 * i + 2][88] = huidu1sheding[11] + huif[30 + i];
			allData[2 * i + 2][89] = quyu[10] + quyuerf[20 + i];
			allData[2 * i + 2][90] = quyu[11] + quyuerf[30 + i];
			allData[2 * i + 2][91] = quyusansd[10] + quyusanf[20 + i];
			allData[2 * i + 2][92] = quyusansd[11] + quyusanf[30 + i];
			allData[2 * i + 2][93] = quyusisd[10] + quyusif[20 + i];
			allData[2 * i + 2][94] = quyusisd[11] + quyusif[30 + i];
			allData[2 * i + 2][95] = quyuwusd[10] + quyuwuf[20 + i];
			allData[2 * i + 2][96] = quyuwusd[11] + quyuwuf[30 + i];
			allData[2 * i + 2][97] = shendu2[10] + shenduerf[20 + i];
			allData[2 * i + 2][98] = shendu2[11] + shenduerf[30 + i];
			allData[2 * i + 2][99] = huidu2sheding[10] + huierf[20 + i];
			allData[2 * i + 2][100] = huidu2sheding[11] + huierf[30 + i];

			allData[2 * i + 2][350] = yanseminganqiangdusd[5];
		}
		allData[2 * i + 1][1] = 0;                                       //前相机状态置0
		allData[2 * i + 2][1] = 0;                                       //后相机状态置0
		allData[2 * i + 1][5] = yanchisheding[i] + yanchisheding[10];    //前相机延迟设定
		allData[2 * i + 2][5] = yanchisheding[i] + yanchisheding[10];    //后相机延迟设定
		allData[2 * i + 1][8] = pingyisheding[i];                        //前相机平移设定
		allData[2 * i + 2][8] = pingyisheding[10 + i];                   //后相机平移设定
		allData[2 * i + 1][9] = famen[5];                                //前相机开阀周期
		allData[2 * i + 2][9] = famen[5];                                //后相机开阀周期
		allData[2 * i + 1][10] = fuzhugongneng[3];                       //前相机SpeedS
		allData[2 * i + 2][10] = fuzhugongneng[3];                       //后相机SpeedS
		allData[2 * i + 1][11] = 20;                                     //前相机平均速度
		allData[2 * i + 2][11] = 20;                                     //后相机平均速度
		allData[2 * i + 1][12] = famen[2];                               //前相机吹嘴测试速度
		allData[2 * i + 2][12] = famen[2];                               //后相机吹嘴测试速度
		allData[2 * i + 1][13] = 1;                                      //前相机孔位
		allData[2 * i + 2][13] = 1;                                      //后相机孔位
		allData[2 * i + 1][20] = yansehangmianjisd[i];                   //前相机颜色行面积
		allData[2 * i + 2][20] = yansehangmianjisd[10 + i];              //后相机颜色行面积
		if (vgasd[2 * i] == L"OFF")                                      //判断VGA设定为什么状态
		{
			allData[2 * i + 1][26] = 0;
		}
		else
		{
			allData[2 * i + 1][26] = 1;
		}
		if (vgasd[2 * i + 1] == L"OFF")
		{
			allData[2 * i + 2][26] = 0;
		}
		else
		{
			allData[2 * i + 2][26] = 1;
		}
		allData[2 * i + 1][31] = vga[3];                          //前相机单孔增益致能
		allData[2 * i + 2][31] = vga[3];                          //后相机单孔增益致能
		for (int k = 0; k < 32; k++)
		{
			allData[2 * i + 1][32 + k] = 32;                      //前相机单孔增益
			allData[2 * i + 2][32 + k] = 32;                      //后相机单孔增益
		}
		allData[2 * i + 1][70] = rzengyi[i];                      //前相机R增益设定
		allData[2 * i + 2][70] = rzengyi[10 + i];                 //后相机R增益设定
		allData[2 * i + 1][72] = gzengyisheding[i];               //前相机G增益设定
		allData[2 * i + 2][72] = gzengyisheding[10 + i];          //后相机G增益设定
		allData[2 * i + 1][74] = bzengyisheding[i];               //前相机B增益设定
		allData[2 * i + 2][74] = bzengyisheding[10 + i];          //后相机B增益设定
		allData[2 * i + 1][77] = hunselingmin[20];                //前相机模式
		allData[2 * i + 2][77] = hunselingmin[21];                //后相机模式
		allData[2 * i + 1][81] = beijingyuzhisheding[i];          //前相机背景阈值
		allData[2 * i + 2][81] = beijingyuzhisheding[10 + i];     //后相机背景阈值
		allData[2 * i + 1][71] = fuzhugongneng[0];                //前相机ClamR
		allData[2 * i + 2][71] = fuzhugongneng[0];                //后相机ClamR
		allData[2 * i + 1][73] = fuzhugongneng[1];                //前相机ClamG
		allData[2 * i + 2][73] = fuzhugongneng[1];                //后相机ClamG
		allData[2 * i + 1][75] = fuzhugongneng[2];                //前相机ClamB
		allData[2 * i + 2][75] = fuzhugongneng[2];                //后相机ClamB
		allData[2 * i + 1][102] = xingxuansd[3];                  //前相机型选阈值
		allData[2 * i + 2][102] = xingxuansd[3];                  //后相机型选阈值
		allData[2 * i + 1][103] = xingxuanlingmindusd[i];         //前相机型选灵敏度
		allData[2 * i + 2][103] = xingxuanlingmindusd[10 + i];    //后相机型选灵敏度
		allData[2 * i + 1][104] = huiduhuluesheding[i];           //前相机灰度忽略
		allData[2 * i + 2][104] = huiduhuluesheding[10 + i];      //后相机灰度忽略
		allData[2 * i + 1][105] = mianjiweitiaosd[i];             //前相机面积微调
		allData[2 * i + 2][105] = mianjiweitiaosd[10 + i];        //后相机面积微调
		allData[2 * i + 1][106] = xingxuansd[4];                  //前相机型选模式
		allData[2 * i + 2][106] = xingxuansd[4];                  //后相机型选模式
		allData[2 * i + 1][113] = xingxuansd[1];                  //前相机开阀时间
		allData[2 * i + 2][113] = xingxuansd[1];                  //后相机开阀时间
		allData[2 * i + 1][114] = xingxuansd[0];                  //前相机延时
		allData[2 * i + 2][114] = xingxuansd[0];                  //后相机延时
		allData[2 * i + 1][115] = xingxuansd[2];                  //前相机开阀周期
		allData[2 * i + 2][115] = xingxuansd[2];                  //后相机开阀周期
		allData[2 * i + 1][351] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 2][351] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][352] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 2][352] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 1][353] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 2][353] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][354] = 255;                            //设置第二种RGB算法初始化设定 
		allData[2 * i + 2][354] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 1][355] = 0;                              //设置第二种RGB算法初始化设定 
		allData[2 * i + 2][355] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][356] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 2][356] = 255;                            //设置第二种RGB算法初始化设定  
		allData[2 * i + 1][357] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 2][357] = 0;                              //设置第二种RGB算法初始化设定
		allData[2 * i + 1][358] = 255;                            //设置第二种RGB算法初始化设定
		allData[2 * i + 2][358] = 255;                            //设置第二种RGB算法初始化设定
		if (addSW == 2)                                             //算法切换
		{
			allData[2 * i + 1][351] = allData[2 * i + 1][64];
			allData[2 * i + 2][351] = allData[2 * i + 2][64];
			allData[2 * i + 1][352] = allData[2 * i + 1][65];
			allData[2 * i + 2][352] = allData[2 * i + 2][65];
			allData[2 * i + 1][353] = allData[2 * i + 1][66];
			allData[2 * i + 2][353] = allData[2 * i + 2][66];
			allData[2 * i + 1][354] = allData[2 * i + 1][67];
			allData[2 * i + 2][354] = allData[2 * i + 2][67];
			allData[2 * i + 1][355] = allData[2 * i + 1][68];
			allData[2 * i + 2][355] = allData[2 * i + 2][68];
			allData[2 * i + 1][356] = allData[2 * i + 1][69];
			allData[2 * i + 2][356] = allData[2 * i + 2][69];
			allData[2 * i + 1][357] = allData[2 * i + 1][78];
			allData[2 * i + 2][357] = allData[2 * i + 2][78];
			allData[2 * i + 1][358] = allData[2 * i + 1][79];
			allData[2 * i + 2][358] = allData[2 * i + 2][79];

			allData[2 * i + 1][64] = 7;
			allData[2 * i + 2][64] = 7;
			allData[2 * i + 1][65] = 7;
			allData[2 * i + 2][65] = 7;
			allData[2 * i + 1][66] = 7;
			allData[2 * i + 2][66] = 7;
			allData[2 * i + 1][67] = 7;
			allData[2 * i + 2][67] = 7;
			allData[2 * i + 1][68] = 7;
			allData[2 * i + 2][68] = 7;
			allData[2 * i + 1][69] = 7;
			allData[2 * i + 2][69] = 7;
			allData[2 * i + 1][78] = 7;
			allData[2 * i + 2][78] = 7;
			allData[2 * i + 1][79] = 7;
			allData[2 * i + 2][79] = 7;
		}
	}




	//for (int i = 0; i < 200; i++)
	//{
	//	datatestDPU[i + 4] = allData[1][1 + i];
	//}

	//for (int i = 0; i < 4; i++)
	//{
	//	CMyPublicData::setfunc(32, 16, i * 50 + 1, 50);
	//	CMyPublicData::setfunc(33, 16, i * 50 + 1, 50);
	//}

	////一次写入100个
	//for (int i = 0; i < 20; i++)
	//{
	//	if (modsd[i] != "OFF")
	//	{
	//		if (tongxincuowu[i + 1] != (-1))
	//		{
	//			for (int j = 0; j < 100; j++)
	//			{
	//				datatestDPU[j + 4] = allData[i + 1][1 + j];
	//			}
	//			setfunc(32 + i, 16, 1, 100);
	//			//for (int j = 0; j < 50; j++)
	//			//{
	//			//	datatestDPU[j + 4] = allData[i + 1][51+ j];
	//			//}
	//			//CMyPublicData::setfunc(32 + i, 16, 51, 50);
	//			for (int j = 0; j < 100; j++)
	//			{
	//				datatestDPU[j + 4] = allData[i + 1][101 + j];
	//			}
	//			setfunc(32 + i, 16, 101, 100);
	//			//for (int j = 0; j < 50; j++)
	//			//{
	//			//	datatestDPU[j + 4] = allData[i + 1][151 + j];
	//			//}
	//			//CMyPublicData::setfunc(32 + i, 16,151, 50);
	//		}
	//	}
	//}

	//一次写入50个
	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != "OFF")
		{
			if (tongxincuowu[i + 1] != (-1))
			{
				for (int j = 0; j < 50; j++)
				{
					datatestDPU[j + 4] = allData[i + 1][1 + j];
				}
				CMyPublicData::setfunc(32 + i, 16, 1, 50);
				for (int j = 0; j < 50; j++)
				{
					datatestDPU[j + 4] = allData[i + 1][51 + j];
				}
				CMyPublicData::setfunc(32 + i, 16, 51, 50);
				for (int j = 0; j < 50; j++)
				{
					datatestDPU[j + 4] = allData[i + 1][101 + j];
				}
				CMyPublicData::setfunc(32 + i, 16, 101, 50);
				for (int j = 0; j < 50; j++)
				{
					datatestDPU[j + 4] = allData[i + 1][151 + j];
				}
				CMyPublicData::setfunc(32 + i, 16, 151, 50);
			}
		}
	}


	for (int i = 0; i < 20; i++)
	{
		if (modsd[i] != L"OFF")
		{
			if (tongxincuowu[i + 1] != (-1))
			{
				for (int j = 0; j < 8; j++)
				{
					datatestDPU[j + 4] = allData[i + 1][351 + j];
				}
				setfunc(32 + i, 16, 351, 8);
			}
		}
	}
	if (tongxincuowu[0] != (-1))
	{
		setfunc(10, 3, 9, 1);
		bit_set(10, 9, 6, true);               //阀电源最后开启
	}
	fanhuizhi = 0; //用完后重置为0
}

//向存储XML文件存储所有数据信息
void CMyPublicData::writerXML(string strXML)
{
	string str;
	opXML opx3(strXML);

	str = opx3.numtoString(beijingban[0]);
	opx3.ModifyNode("num0001", str);
	str = opx3.numtoString(beijingban[1]);
	opx3.ModifyNode("num0002", str);
	str = opx3.numtoString(beijingban[2]);
	opx3.ModifyNode("num0003", str);
	str = opx3.numtoString(beijingban[3]);
	opx3.ModifyNode("num0004", str);


	str = opx3.numtoString(beijingyuzhisheding[0]);
	opx3.ModifyNode("num0101", str);
	str = opx3.numtoString(beijingyuzhisheding[1]);
	opx3.ModifyNode("num0102", str);
	str = opx3.numtoString(beijingyuzhisheding[2]);
	opx3.ModifyNode("num0103", str);
	str = opx3.numtoString(beijingyuzhisheding[3]);
	opx3.ModifyNode("num0104", str);
	str = opx3.numtoString(beijingyuzhisheding[4]);
	opx3.ModifyNode("num0105", str);
	str = opx3.numtoString(beijingyuzhisheding[5]);
	opx3.ModifyNode("num0106", str);
	str = opx3.numtoString(beijingyuzhisheding[6]);
	opx3.ModifyNode("num0107", str);
	str = opx3.numtoString(beijingyuzhisheding[7]);
	opx3.ModifyNode("num0108", str);
	str = opx3.numtoString(beijingyuzhisheding[8]);
	opx3.ModifyNode("num0109", str);
	str = opx3.numtoString(beijingyuzhisheding[9]);
	opx3.ModifyNode("num0110", str);
	str = opx3.numtoString(beijingyuzhisheding[10]);
	opx3.ModifyNode("num0111", str);
	str = opx3.numtoString(beijingyuzhisheding[11]);
	opx3.ModifyNode("num0112", str);
	str = opx3.numtoString(beijingyuzhisheding[12]);
	opx3.ModifyNode("num0113", str);
	str = opx3.numtoString(beijingyuzhisheding[13]);
	opx3.ModifyNode("num0114", str);
	str = opx3.numtoString(beijingyuzhisheding[14]);
	opx3.ModifyNode("num0115", str);
	str = opx3.numtoString(beijingyuzhisheding[15]);
	opx3.ModifyNode("num0116", str);
	str = opx3.numtoString(beijingyuzhisheding[16]);
	opx3.ModifyNode("num0117", str);
	str = opx3.numtoString(beijingyuzhisheding[17]);
	opx3.ModifyNode("num0118", str);
	str = opx3.numtoString(beijingyuzhisheding[18]);
	opx3.ModifyNode("num0119", str);
	str = opx3.numtoString(beijingyuzhisheding[19]);
	opx3.ModifyNode("num0120", str);


	str = opx3.numtoString(blingmin[0]);
	opx3.ModifyNode("num0201", str);
	str = opx3.numtoString(blingmin[1]);
	opx3.ModifyNode("num0202", str);
	str = opx3.numtoString(blingmin[2]);
	opx3.ModifyNode("num0203", str);
	str = opx3.numtoString(blingmin[3]);
	opx3.ModifyNode("num0204", str);
	str = opx3.numtoString(blingmin[4]);
	opx3.ModifyNode("num0205", str);
	str = opx3.numtoString(blingmin[5]);
	opx3.ModifyNode("num0206", str);
	str = opx3.numtoString(blingmin[6]);
	opx3.ModifyNode("num0207", str);
	str = opx3.numtoString(blingmin[7]);
	opx3.ModifyNode("num0208", str);
	str = opx3.numtoString(blingmin[8]);
	opx3.ModifyNode("num0209", str);
	str = opx3.numtoString(blingmin[9]);
	opx3.ModifyNode("num0210", str);
	str = opx3.numtoString(blingmin[10]);
	opx3.ModifyNode("num0211", str);
	str = opx3.numtoString(blingmin[11]);
	opx3.ModifyNode("num0212", str);



	str = opx3.numtoString(bzengyisheding[0]);
	opx3.ModifyNode("num0301", str);
	str = opx3.numtoString(bzengyisheding[1]);
	opx3.ModifyNode("num0302", str);
	str = opx3.numtoString(bzengyisheding[2]);
	opx3.ModifyNode("num0303", str);
	str = opx3.numtoString(bzengyisheding[3]);
	opx3.ModifyNode("num0304", str);
	str = opx3.numtoString(bzengyisheding[4]);
	opx3.ModifyNode("num0305", str);
	str = opx3.numtoString(bzengyisheding[5]);
	opx3.ModifyNode("num0306", str);
	str = opx3.numtoString(bzengyisheding[6]);
	opx3.ModifyNode("num0307", str);
	str = opx3.numtoString(bzengyisheding[7]);
	opx3.ModifyNode("num0308", str);
	str = opx3.numtoString(bzengyisheding[8]);
	opx3.ModifyNode("num0309", str);
	str = opx3.numtoString(bzengyisheding[9]);
	opx3.ModifyNode("num0310", str);
	str = opx3.numtoString(bzengyisheding[10]);
	opx3.ModifyNode("num0311", str);
	str = opx3.numtoString(bzengyisheding[11]);
	opx3.ModifyNode("num0312", str);
	str = opx3.numtoString(bzengyisheding[12]);
	opx3.ModifyNode("num0313", str);
	str = opx3.numtoString(bzengyisheding[13]);
	opx3.ModifyNode("num0314", str);
	str = opx3.numtoString(bzengyisheding[14]);
	opx3.ModifyNode("num0315", str);
	str = opx3.numtoString(bzengyisheding[15]);
	opx3.ModifyNode("num0316", str);
	str = opx3.numtoString(bzengyisheding[16]);
	opx3.ModifyNode("num0317", str);
	str = opx3.numtoString(bzengyisheding[17]);
	opx3.ModifyNode("num0318", str);
	str = opx3.numtoString(bzengyisheding[18]);
	opx3.ModifyNode("num0319", str);
	str = opx3.numtoString(bzengyisheding[19]);
	opx3.ModifyNode("num0320", str);


	str = opx3.numtoString(caitu[0]);
	opx3.ModifyNode("num0401", str);
	str = opx3.numtoString(caitu[1]);
	opx3.ModifyNode("num0402", str);
	str = opx3.numtoString(caitu[2]);
	opx3.ModifyNode("num0403", str);
	str = opx3.numtoString(caitu[3]);
	opx3.ModifyNode("num0404", str);
	str = opx3.numtoString(caitu[4]);
	opx3.ModifyNode("num0405", str);
	str = opx3.numtoString(caitu[5]);
	opx3.ModifyNode("num0406", str);
	str = opx3.numtoString(caitu[6]);
	opx3.ModifyNode("num0407", str);
	str = opx3.numtoString(caitu[7]);
	opx3.ModifyNode("num0408", str);
	str = opx3.numtoString(caitu[8]);
	opx3.ModifyNode("num0409", str);
	str = opx3.numtoString(caitu[9]);
	opx3.ModifyNode("num0410", str);
	str = opx3.numtoString(caitu[10]);
	opx3.ModifyNode("num0411", str);
	str = opx3.numtoString(caitu[11]);
	opx3.ModifyNode("num0412", str);
	str = opx3.numtoString(caitu[12]);
	opx3.ModifyNode("num0413", str);
	str = opx3.numtoString(caitu[13]);
	opx3.ModifyNode("num0414", str);
	str = opx3.numtoString(caitu[14]);
	opx3.ModifyNode("num0415", str);
	str = opx3.numtoString(caitu[15]);
	opx3.ModifyNode("num0416", str);
	str = opx3.numtoString(caitu[16]);
	opx3.ModifyNode("num0417", str);
	str = opx3.numtoString(caitu[17]);
	opx3.ModifyNode("num0418", str);
	str = opx3.numtoString(caitu[18]);
	opx3.ModifyNode("num0419", str);
	str = opx3.numtoString(caitu[19]);
	opx3.ModifyNode("num0420", str);
	str = opx3.numtoString(caitu[20]);
	opx3.ModifyNode("num0421", str);
	str = opx3.numtoString(caitu[21]);
	opx3.ModifyNode("num0422", str);
	str = opx3.numtoString(caitu[22]);
	opx3.ModifyNode("num0423", str);
	str = opx3.numtoString(caitu[23]);
	opx3.ModifyNode("num0424", str);
	str = opx3.numtoString(caitu[24]);
	opx3.ModifyNode("num0425", str);

	//保存服务器IP和Port
	str = opx3.UnicodeToUTF8(server_IP);
	opx3.ModifyNode("serverIP", str);
	str = opx3.UnicodeToUTF8(server_Port);
	opx3.ModifyNode("serverPort", str);

	str = opx3.numtoString(famen[0]);
	opx3.ModifyNode("num0501", str);
	str = opx3.numtoString(famen[1]);
	opx3.ModifyNode("num0502", str);
	str = opx3.numtoString(famen[2]);
	opx3.ModifyNode("num0503", str);
	str = opx3.numtoString(famen[3]);
	opx3.ModifyNode("num0504", str);
	str = opx3.numtoString(famen[4]);
	opx3.ModifyNode("num0505", str);
	str = opx3.numtoString(famen[5]);
	opx3.ModifyNode("num0506", str);
	str = opx3.numtoString(famen[6]);
	opx3.ModifyNode("num0507", str);

	str = opx3.numtoString(fuzhugongneng[0]);
	opx3.ModifyNode("num0601", str);
	str = opx3.numtoString(fuzhugongneng[1]);
	opx3.ModifyNode("num0602", str);
	str = opx3.numtoString(fuzhugongneng[2]);
	opx3.ModifyNode("num0603", str);
	str = opx3.numtoString(fuzhugongneng[3]);
	opx3.ModifyNode("num0604", str);

	str = opx3.UnicodeToUTF8(fuzhusd[0]);
	opx3.ModifyNode("num0621", str);
	str = opx3.UnicodeToUTF8(fuzhusd[1]);
	opx3.ModifyNode("num0622", str);
	str = opx3.UnicodeToUTF8(fuzhusd[2]);
	opx3.ModifyNode("num0623", str);
	str = opx3.UnicodeToUTF8(fuzhusd[3]);
	opx3.ModifyNode("num0624", str);
	str = opx3.UnicodeToUTF8(fuzhusd[4]);
	opx3.ModifyNode("num0625", str);
	str = opx3.UnicodeToUTF8(fuzhusd[5]);
	opx3.ModifyNode("num0626", str);


	str = opx3.numtoString(glingmin[0]);
	opx3.ModifyNode("num0701", str);
	str = opx3.numtoString(glingmin[1]);
	opx3.ModifyNode("num0702", str);
	str = opx3.numtoString(glingmin[2]);
	opx3.ModifyNode("num0703", str);
	str = opx3.numtoString(glingmin[3]);
	opx3.ModifyNode("num0704", str);
	str = opx3.numtoString(glingmin[4]);
	opx3.ModifyNode("num0705", str);
	str = opx3.numtoString(glingmin[5]);
	opx3.ModifyNode("num0706", str);
	str = opx3.numtoString(glingmin[6]);
	opx3.ModifyNode("num0707", str);
	str = opx3.numtoString(glingmin[7]);
	opx3.ModifyNode("num0708", str);
	str = opx3.numtoString(glingmin[8]);
	opx3.ModifyNode("num0709", str);
	str = opx3.numtoString(glingmin[9]);
	opx3.ModifyNode("num0710", str);
	str = opx3.numtoString(glingmin[10]);
	opx3.ModifyNode("num0711", str);
	str = opx3.numtoString(glingmin[11]);
	opx3.ModifyNode("num0712", str);



	str = opx3.numtoString(gzengyisheding[0]);
	opx3.ModifyNode("num0801", str);
	str = opx3.numtoString(gzengyisheding[1]);
	opx3.ModifyNode("num0802", str);
	str = opx3.numtoString(gzengyisheding[2]);
	opx3.ModifyNode("num0803", str);
	str = opx3.numtoString(gzengyisheding[3]);
	opx3.ModifyNode("num0804", str);
	str = opx3.numtoString(gzengyisheding[4]);
	opx3.ModifyNode("num0805", str);
	str = opx3.numtoString(gzengyisheding[5]);
	opx3.ModifyNode("num0806", str);
	str = opx3.numtoString(gzengyisheding[6]);
	opx3.ModifyNode("num0807", str);
	str = opx3.numtoString(gzengyisheding[7]);
	opx3.ModifyNode("num0808", str);
	str = opx3.numtoString(gzengyisheding[8]);
	opx3.ModifyNode("num0809", str);
	str = opx3.numtoString(gzengyisheding[9]);
	opx3.ModifyNode("num0810", str);
	str = opx3.numtoString(gzengyisheding[10]);
	opx3.ModifyNode("num0811", str);
	str = opx3.numtoString(gzengyisheding[11]);
	opx3.ModifyNode("num0812", str);
	str = opx3.numtoString(gzengyisheding[12]);
	opx3.ModifyNode("num0813", str);
	str = opx3.numtoString(gzengyisheding[13]);
	opx3.ModifyNode("num0814", str);
	str = opx3.numtoString(gzengyisheding[14]);
	opx3.ModifyNode("num0815", str);
	str = opx3.numtoString(gzengyisheding[15]);
	opx3.ModifyNode("num0816", str);
	str = opx3.numtoString(gzengyisheding[16]);
	opx3.ModifyNode("num0817", str);
	str = opx3.numtoString(gzengyisheding[17]);
	opx3.ModifyNode("num0818", str);
	str = opx3.numtoString(gzengyisheding[18]);
	opx3.ModifyNode("num0819", str);
	str = opx3.numtoString(gzengyisheding[19]);
	opx3.ModifyNode("num0820", str);



	str = opx3.numtoString(hunselingmin[0]);
	opx3.ModifyNode("num0901", str);
	str = opx3.numtoString(hunselingmin[1]);
	opx3.ModifyNode("num0902", str);
	str = opx3.numtoString(hunselingmin[2]);
	opx3.ModifyNode("num0903", str);
	str = opx3.numtoString(hunselingmin[3]);
	opx3.ModifyNode("num0904", str);
	str = opx3.numtoString(hunselingmin[4]);
	opx3.ModifyNode("num0905", str);
	str = opx3.numtoString(hunselingmin[5]);
	opx3.ModifyNode("num0906", str);
	str = opx3.numtoString(hunselingmin[6]);
	opx3.ModifyNode("num0907", str);
	str = opx3.numtoString(hunselingmin[7]);
	opx3.ModifyNode("num0908", str);
	str = opx3.numtoString(hunselingmin[8]);
	opx3.ModifyNode("num0909", str);
	str = opx3.numtoString(hunselingmin[9]);
	opx3.ModifyNode("num0910", str);
	str = opx3.numtoString(hunselingmin[10]);
	opx3.ModifyNode("num0911", str);
	str = opx3.numtoString(hunselingmin[11]);
	opx3.ModifyNode("num0912", str);
	str = opx3.numtoString(hunselingmin[20]);
	opx3.ModifyNode("num0921", str);
	str = opx3.numtoString(hunselingmin[21]);
	opx3.ModifyNode("num0922", str);



	str = opx3.numtoString(liuliang[0]);
	opx3.ModifyNode("num1001", str);
	str = opx3.numtoString(liuliang[1]);
	opx3.ModifyNode("num1002", str);
	str = opx3.numtoString(liuliang[2]);
	opx3.ModifyNode("num1003", str);
	str = opx3.numtoString(liuliang[3]);
	opx3.ModifyNode("num1004", str);
	str = opx3.numtoString(liuliang[4]);
	opx3.ModifyNode("num1005", str);
	str = opx3.numtoString(liuliang[5]);
	opx3.ModifyNode("num1006", str);
	str = opx3.numtoString(liuliang[6]);
	opx3.ModifyNode("num1007", str);
	str = opx3.numtoString(liuliang[7]);
	opx3.ModifyNode("num1008", str);
	str = opx3.numtoString(liuliang[8]);
	opx3.ModifyNode("num1009", str);
	str = opx3.numtoString(liuliang[9]);
	opx3.ModifyNode("num1010", str);
	str = opx3.numtoString(liuliang[10]);
	opx3.ModifyNode("num1011", str);
	str = opx3.numtoString(liuliang[11]);
	opx3.ModifyNode("num1012", str);
	str = opx3.numtoString(liuliang[12]);
	opx3.ModifyNode("num1013", str);


	str = opx3.numtoString(mian[0]);
	opx3.ModifyNode("num1101", str);
	str = opx3.numtoString(mian[1]);
	opx3.ModifyNode("num1102", str);
	str = opx3.numtoString(mian[2]);
	opx3.ModifyNode("num1103", str);
	str = opx3.numtoString(mian[3]);
	opx3.ModifyNode("num1104", str);
	str = opx3.numtoString(mian[4]);
	opx3.ModifyNode("num1105", str);
	str = opx3.numtoString(mian[5]);
	opx3.ModifyNode("num1106", str);
	str = opx3.numtoString(mian[6]);
	opx3.ModifyNode("num1107", str);
	str = opx3.numtoString(mian[7]);
	opx3.ModifyNode("num1108", str);
	str = opx3.numtoString(mian[8]);
	opx3.ModifyNode("num1109", str);
	str = opx3.numtoString(mian[9]);
	opx3.ModifyNode("num1110", str);
	str = opx3.numtoString(mian[10]);
	opx3.ModifyNode("num1111", str);
	str = opx3.numtoString(mian[11]);
	opx3.ModifyNode("num1112", str);
	str = opx3.numtoString(mian[12]);
	opx3.ModifyNode("num1113", str);
	str = opx3.numtoString(mian[13]);
	opx3.ModifyNode("num1114", str);
	str = opx3.numtoString(mian[14]);
	opx3.ModifyNode("num1115", str);
	str = opx3.numtoString(mian[15]);
	opx3.ModifyNode("num1116", str);
	str = opx3.numtoString(mian[16]);
	opx3.ModifyNode("num1117", str);
	str = opx3.numtoString(mian[17]);
	opx3.ModifyNode("num1118", str);



	str = opx3.numtoString(pingyisheding[0]);
	opx3.ModifyNode("num1201", str);
	str = opx3.numtoString(pingyisheding[1]);
	opx3.ModifyNode("num1202", str);
	str = opx3.numtoString(pingyisheding[2]);
	opx3.ModifyNode("num1203", str);
	str = opx3.numtoString(pingyisheding[3]);
	opx3.ModifyNode("num1204", str);
	str = opx3.numtoString(pingyisheding[4]);
	opx3.ModifyNode("num1205", str);
	str = opx3.numtoString(pingyisheding[5]);
	opx3.ModifyNode("num1206", str);
	str = opx3.numtoString(pingyisheding[6]);
	opx3.ModifyNode("num1207", str);
	str = opx3.numtoString(pingyisheding[7]);
	opx3.ModifyNode("num1208", str);
	str = opx3.numtoString(pingyisheding[8]);
	opx3.ModifyNode("num1209", str);
	str = opx3.numtoString(pingyisheding[9]);
	opx3.ModifyNode("num1210", str);
	str = opx3.numtoString(pingyisheding[10]);
	opx3.ModifyNode("num1211", str);
	str = opx3.numtoString(pingyisheding[11]);
	opx3.ModifyNode("num1212", str);
	str = opx3.numtoString(pingyisheding[12]);
	opx3.ModifyNode("num1213", str);
	str = opx3.numtoString(pingyisheding[13]);
	opx3.ModifyNode("num1214", str);
	str = opx3.numtoString(pingyisheding[14]);
	opx3.ModifyNode("num1215", str);
	str = opx3.numtoString(pingyisheding[15]);
	opx3.ModifyNode("num1216", str);
	str = opx3.numtoString(pingyisheding[16]);
	opx3.ModifyNode("num1217", str);
	str = opx3.numtoString(pingyisheding[17]);
	opx3.ModifyNode("num1218", str);
	str = opx3.numtoString(pingyisheding[18]);
	opx3.ModifyNode("num1219", str);
	str = opx3.numtoString(pingyisheding[19]);
	opx3.ModifyNode("num1220", str);


	str = opx3.numtoString(qinghui[0]);
	opx3.ModifyNode("num1301", str);
	str = opx3.numtoString(qinghui[1]);
	opx3.ModifyNode("num1302", str);
	str = opx3.numtoString(qinghui[2]);
	opx3.ModifyNode("num1303", str);


	str = opx3.numtoString(quyu[0]);
	opx3.ModifyNode("num1401", str);
	str = opx3.numtoString(quyu[1]);
	opx3.ModifyNode("num1402", str);
	str = opx3.numtoString(quyu[2]);
	opx3.ModifyNode("num1403", str);
	str = opx3.numtoString(quyu[3]);
	opx3.ModifyNode("num1404", str);
	str = opx3.numtoString(quyu[4]);
	opx3.ModifyNode("num1405", str);
	str = opx3.numtoString(quyu[5]);
	opx3.ModifyNode("num1406", str);
	str = opx3.numtoString(quyu[6]);
	opx3.ModifyNode("num1407", str);
	str = opx3.numtoString(quyu[7]);
	opx3.ModifyNode("num1408", str);
	str = opx3.numtoString(quyu[8]);
	opx3.ModifyNode("num1409", str);
	str = opx3.numtoString(quyu[9]);
	opx3.ModifyNode("num1410", str);
	str = opx3.numtoString(quyu[10]);
	opx3.ModifyNode("num1411", str);
	str = opx3.numtoString(quyu[11]);
	opx3.ModifyNode("num1412", str);


	str = opx3.numtoString(rlingmin[0]);
	opx3.ModifyNode("num1501", str);
	str = opx3.numtoString(rlingmin[1]);
	opx3.ModifyNode("num1502", str);
	str = opx3.numtoString(rlingmin[2]);
	opx3.ModifyNode("num1503", str);
	str = opx3.numtoString(rlingmin[3]);
	opx3.ModifyNode("num1504", str);
	str = opx3.numtoString(rlingmin[4]);
	opx3.ModifyNode("num1505", str);
	str = opx3.numtoString(rlingmin[5]);
	opx3.ModifyNode("num1506", str);
	str = opx3.numtoString(rlingmin[6]);
	opx3.ModifyNode("num1507", str);
	str = opx3.numtoString(rlingmin[7]);
	opx3.ModifyNode("num1508", str);
	str = opx3.numtoString(rlingmin[8]);
	opx3.ModifyNode("num1509", str);
	str = opx3.numtoString(rlingmin[9]);
	opx3.ModifyNode("num1510", str);
	str = opx3.numtoString(rlingmin[10]);
	opx3.ModifyNode("num1511", str);
	str = opx3.numtoString(rlingmin[11]);
	opx3.ModifyNode("num1512", str);



	str = opx3.numtoString(rzengyi[0]);
	opx3.ModifyNode("num1601", str);
	str = opx3.numtoString(rzengyi[1]);
	opx3.ModifyNode("num1602", str);
	str = opx3.numtoString(rzengyi[2]);
	opx3.ModifyNode("num1603", str);
	str = opx3.numtoString(rzengyi[3]);
	opx3.ModifyNode("num1604", str);
	str = opx3.numtoString(rzengyi[4]);
	opx3.ModifyNode("num1605", str);
	str = opx3.numtoString(rzengyi[5]);
	opx3.ModifyNode("num1606", str);
	str = opx3.numtoString(rzengyi[6]);
	opx3.ModifyNode("num1607", str);
	str = opx3.numtoString(rzengyi[7]);
	opx3.ModifyNode("num1608", str);
	str = opx3.numtoString(rzengyi[8]);
	opx3.ModifyNode("num1609", str);
	str = opx3.numtoString(rzengyi[9]);
	opx3.ModifyNode("num1610", str);
	str = opx3.numtoString(rzengyi[10]);
	opx3.ModifyNode("num1611", str);
	str = opx3.numtoString(rzengyi[11]);
	opx3.ModifyNode("num1612", str);
	str = opx3.numtoString(rzengyi[12]);
	opx3.ModifyNode("num1613", str);
	str = opx3.numtoString(rzengyi[13]);
	opx3.ModifyNode("num1614", str);
	str = opx3.numtoString(rzengyi[14]);
	opx3.ModifyNode("num1615", str);
	str = opx3.numtoString(rzengyi[15]);
	opx3.ModifyNode("num1616", str);
	str = opx3.numtoString(rzengyi[16]);
	opx3.ModifyNode("num1617", str);
	str = opx3.numtoString(rzengyi[17]);
	opx3.ModifyNode("num1618", str);
	str = opx3.numtoString(rzengyi[18]);
	opx3.ModifyNode("num1619", str);
	str = opx3.numtoString(rzengyi[19]);
	opx3.ModifyNode("num1620", str);

	str = opx3.numtoString(shen[0]);
	opx3.ModifyNode("num1701", str);
	str = opx3.numtoString(shen[1]);
	opx3.ModifyNode("num1702", str);
	str = opx3.numtoString(shen[2]);
	opx3.ModifyNode("num1703", str);
	str = opx3.numtoString(shen[3]);
	opx3.ModifyNode("num1704", str);
	str = opx3.numtoString(shen[4]);
	opx3.ModifyNode("num1705", str);
	str = opx3.numtoString(shen[5]);
	opx3.ModifyNode("num1706", str);
	str = opx3.numtoString(shen[6]);
	opx3.ModifyNode("num1707", str);
	str = opx3.numtoString(shen[7]);
	opx3.ModifyNode("num1708", str);
	str = opx3.numtoString(shen[8]);
	opx3.ModifyNode("num1709", str);
	str = opx3.numtoString(shen[9]);
	opx3.ModifyNode("num1710", str);
	str = opx3.numtoString(shen[10]);
	opx3.ModifyNode("num1711", str);
	str = opx3.numtoString(shen[11]);
	opx3.ModifyNode("num1712", str);


	str = opx3.numtoString(vga[0]);
	opx3.ModifyNode("num1801", str);
	str = opx3.numtoString(vga[1]);
	opx3.ModifyNode("num1802", str);
	str = opx3.numtoString(vga[2]);
	opx3.ModifyNode("num1803", str);
	str = opx3.numtoString(vga[3]);
	opx3.ModifyNode("num1804", str);

	str = opx3.UnicodeToUTF8(vgasd[0]);
	opx3.ModifyNode("num1821", str);
	str = opx3.UnicodeToUTF8(vgasd[1]);
	opx3.ModifyNode("num1822", str);
	str = opx3.UnicodeToUTF8(vgasd[2]);
	opx3.ModifyNode("num1823", str);
	str = opx3.UnicodeToUTF8(vgasd[3]);
	opx3.ModifyNode("num1824", str);
	str = opx3.UnicodeToUTF8(vgasd[4]);
	opx3.ModifyNode("num1825", str);
	str = opx3.UnicodeToUTF8(vgasd[5]);
	opx3.ModifyNode("num1826", str);
	str = opx3.UnicodeToUTF8(vgasd[6]);
	opx3.ModifyNode("num1827", str);
	str = opx3.UnicodeToUTF8(vgasd[7]);
	opx3.ModifyNode("num1828", str);
	str = opx3.UnicodeToUTF8(vgasd[8]);
	opx3.ModifyNode("num1829", str);
	str = opx3.UnicodeToUTF8(vgasd[9]);
	opx3.ModifyNode("num1830", str);
	str = opx3.UnicodeToUTF8(vgasd[10]);
	opx3.ModifyNode("num1831", str);
	str = opx3.UnicodeToUTF8(vgasd[11]);
	opx3.ModifyNode("num1832", str);
	str = opx3.UnicodeToUTF8(vgasd[12]);
	opx3.ModifyNode("num1833", str);
	str = opx3.UnicodeToUTF8(vgasd[13]);
	opx3.ModifyNode("num1834", str);
	str = opx3.UnicodeToUTF8(vgasd[14]);
	opx3.ModifyNode("num1835", str);
	str = opx3.UnicodeToUTF8(vgasd[15]);
	opx3.ModifyNode("num1836", str);
	str = opx3.UnicodeToUTF8(vgasd[16]);
	opx3.ModifyNode("num1837", str);
	str = opx3.UnicodeToUTF8(vgasd[17]);
	opx3.ModifyNode("num1838", str);
	str = opx3.UnicodeToUTF8(vgasd[18]);
	opx3.ModifyNode("num1839", str);
	str = opx3.UnicodeToUTF8(vgasd[19]);
	opx3.ModifyNode("num1840", str);




	str = opx3.numtoString(xiangji[0]);
	opx3.ModifyNode("num1901", str);
	str = opx3.numtoString(xiangji[1]);
	opx3.ModifyNode("num1902", str);
	str = opx3.numtoString(xiangji[2]);
	opx3.ModifyNode("num1903", str);
	str = opx3.numtoString(xiangji[3]);
	opx3.ModifyNode("num1904", str);
	str = opx3.numtoString(xiangji[4]);
	opx3.ModifyNode("num1905", str);
	str = opx3.numtoString(xiangji[5]);
	opx3.ModifyNode("num1906", str);
	str = opx3.numtoString(xiangji[6]);
	opx3.ModifyNode("num1907", str);
	str = opx3.numtoString(xiangji[7]);
	opx3.ModifyNode("num1908", str);
	str = opx3.numtoString(xiangji[8]);
	opx3.ModifyNode("num1909", str);
	str = opx3.numtoString(xiangji[9]);
	opx3.ModifyNode("num1910", str);
	str = opx3.numtoString(xiangji[10]);
	opx3.ModifyNode("num1911", str);
	str = opx3.numtoString(xiangji[11]);
	opx3.ModifyNode("num1912", str);
	str = opx3.numtoString(xiangji[12]);
	opx3.ModifyNode("num1913", str);
	str = opx3.numtoString(xiangji[13]);
	opx3.ModifyNode("num1914", str);
	str = opx3.numtoString(xiangji[14]);
	opx3.ModifyNode("num1915", str);
	str = opx3.numtoString(xiangji[15]);
	opx3.ModifyNode("num1916", str);
	str = opx3.numtoString(xiangji[16]);
	opx3.ModifyNode("num1917", str);
	str = opx3.numtoString(xiangji[17]);
	opx3.ModifyNode("num1918", str);
	str = opx3.numtoString(xiangji[18]);
	opx3.ModifyNode("num1919", str);
	str = opx3.numtoString(xiangji[19]);
	opx3.ModifyNode("num1920", str);
	str = opx3.numtoString(xiangji[20]);
	opx3.ModifyNode("num1921", str);
	str = opx3.numtoString(xiangji[21]);
	opx3.ModifyNode("num1922", str);
	str = opx3.numtoString(xiangji[22]);
	opx3.ModifyNode("num1923", str);
	str = opx3.numtoString(xiangji[23]);
	opx3.ModifyNode("num1924", str);
	str = opx3.numtoString(xiangji[24]);
	opx3.ModifyNode("num1925", str);
	str = opx3.numtoString(xiangji[25]);
	opx3.ModifyNode("num1926", str);
	str = opx3.numtoString(xiangji[26]);
	opx3.ModifyNode("num1927", str);
	str = opx3.numtoString(xiangji[27]);
	opx3.ModifyNode("num1928", str);
	str = opx3.numtoString(xiangji[28]);
	opx3.ModifyNode("num1929", str);
	str = opx3.numtoString(xiangji[29]);
	opx3.ModifyNode("num1930", str);
	str = opx3.numtoString(xiangji[30]);
	opx3.ModifyNode("num1931", str);
	str = opx3.numtoString(xiangji[31]);
	opx3.ModifyNode("num1932", str);
	str = opx3.numtoString(xiangji[32]);
	opx3.ModifyNode("num1933", str);
	str = opx3.numtoString(xiangji[33]);
	opx3.ModifyNode("num1934", str);
	str = opx3.numtoString(xiangji[34]);
	opx3.ModifyNode("num1935", str);
	str = opx3.numtoString(xiangji[35]);
	opx3.ModifyNode("num1936", str);
	str = opx3.numtoString(xiangji[36]);
	opx3.ModifyNode("num1937", str);
	str = opx3.numtoString(xiangji[37]);
	opx3.ModifyNode("num1938", str);
	str = opx3.numtoString(xiangji[38]);
	opx3.ModifyNode("num1939", str);
	str = opx3.numtoString(xiangji[39]);
	opx3.ModifyNode("num1940", str);
	str = opx3.numtoString(xiangji[40]);
	opx3.ModifyNode("num1941", str);
	str = opx3.numtoString(xiangji[41]);
	opx3.ModifyNode("num1942", str);
	str = opx3.numtoString(xiangji[42]);
	opx3.ModifyNode("num1943", str);
	str = opx3.numtoString(xiangji[43]);
	opx3.ModifyNode("num1944", str);
	str = opx3.numtoString(xiangji[44]);
	opx3.ModifyNode("num1945", str);
	str = opx3.numtoString(xiangji[45]);
	opx3.ModifyNode("num1946", str);
	str = opx3.numtoString(xiangji[46]);
	opx3.ModifyNode("num1947", str);
	str = opx3.numtoString(xiangji[47]);
	opx3.ModifyNode("num1948", str);
	str = opx3.numtoString(xiangji[48]);
	opx3.ModifyNode("num1949", str);
	str = opx3.numtoString(xiangji[49]);
	opx3.ModifyNode("num1950", str);
	str = opx3.numtoString(xiangji[50]);
	opx3.ModifyNode("num1951", str);
	str = opx3.numtoString(xiangji[51]);
	opx3.ModifyNode("num1952", str);
	str = opx3.numtoString(xiangji[52]);
	opx3.ModifyNode("num1953", str);
	str = opx3.numtoString(xiangji[53]);
	opx3.ModifyNode("num1954", str);
	str = opx3.numtoString(xiangji[54]);
	opx3.ModifyNode("num1955", str);
	str = opx3.numtoString(xiangji[55]);
	opx3.ModifyNode("num1956", str);
	str = opx3.numtoString(xiangji[56]);
	opx3.ModifyNode("num1957", str);
	str = opx3.numtoString(xiangji[57]);
	opx3.ModifyNode("num1958", str);
	str = opx3.numtoString(xiangji[58]);
	opx3.ModifyNode("num1959", str);
	str = opx3.numtoString(xiangji[59]);
	opx3.ModifyNode("num1960", str);
	str = opx3.numtoString(xiangji[60]);
	opx3.ModifyNode("num1961", str);
	str = opx3.numtoString(xiangji[61]);
	opx3.ModifyNode("num1962", str);
	str = opx3.numtoString(xiangji[62]);
	opx3.ModifyNode("num1963", str);
	str = opx3.numtoString(xiangji[63]);
	opx3.ModifyNode("num1964", str);
	str = opx3.numtoString(xiangji[64]);
	opx3.ModifyNode("num1965", str);
	str = opx3.numtoString(xiangji[65]);
	opx3.ModifyNode("num1966", str);
	str = opx3.numtoString(xiangji[66]);
	opx3.ModifyNode("num1967", str);
	str = opx3.numtoString(xiangji[67]);
	opx3.ModifyNode("num1968", str);
	str = opx3.numtoString(xiangji[68]);
	opx3.ModifyNode("num1969", str);
	str = opx3.numtoString(xiangji[69]);
	opx3.ModifyNode("num1970", str);
	str = opx3.numtoString(xiangji[70]);
	opx3.ModifyNode("num1971", str);
	str = opx3.numtoString(xiangji[71]);
	opx3.ModifyNode("num1972", str);
	str = opx3.numtoString(xiangji[72]);
	opx3.ModifyNode("num1973", str);
	str = opx3.numtoString(xiangji[73]);
	opx3.ModifyNode("num1974", str);
	str = opx3.numtoString(xiangji[74]);
	opx3.ModifyNode("num1975", str);
	str = opx3.numtoString(xiangji[75]);
	opx3.ModifyNode("num1976", str);
	str = opx3.numtoString(xiangji[76]);
	opx3.ModifyNode("num1977", str);
	str = opx3.numtoString(xiangji[77]);
	opx3.ModifyNode("num1978", str);
	str = opx3.numtoString(xiangji[78]);
	opx3.ModifyNode("num1979", str);
	str = opx3.numtoString(xiangji[79]);
	opx3.ModifyNode("num1980", str);
	str = opx3.numtoString(xiangji[80]);
	opx3.ModifyNode("num1981", str);
	str = opx3.numtoString(xiangji[81]);
	opx3.ModifyNode("num1982", str);
	str = opx3.numtoString(xiangji[82]);
	opx3.ModifyNode("num1983", str);
	str = opx3.numtoString(xiangji[83]);
	opx3.ModifyNode("num1984", str);
	str = opx3.numtoString(xiangji[84]);
	opx3.ModifyNode("num1985", str);
	str = opx3.numtoString(xiangji[85]);
	opx3.ModifyNode("num1986", str);
	str = opx3.numtoString(xiangji[86]);
	opx3.ModifyNode("num1987", str);
	str = opx3.numtoString(xiangji[87]);
	opx3.ModifyNode("num1988", str);
	str = opx3.numtoString(xiangji[88]);
	opx3.ModifyNode("num1989", str);
	str = opx3.numtoString(xiangji[89]);
	opx3.ModifyNode("num1990", str);
	str = opx3.numtoString(xiangji[90]);
	opx3.ModifyNode("num1991", str);
	str = opx3.numtoString(xiangji[91]);
	opx3.ModifyNode("num1992", str);
	str = opx3.numtoString(xiangji[92]);
	opx3.ModifyNode("num1993", str);
	str = opx3.numtoString(xiangji[93]);
	opx3.ModifyNode("num1994", str);
	str = opx3.numtoString(xiangji[94]);
	opx3.ModifyNode("num1995", str);
	str = opx3.numtoString(xiangji[95]);
	opx3.ModifyNode("num1996", str);
	str = opx3.numtoString(xiangji[96]);
	opx3.ModifyNode("num1997", str);
	str = opx3.numtoString(xiangji[97]);
	opx3.ModifyNode("num1998", str);
	str = opx3.numtoString(xiangji[98]);
	opx3.ModifyNode("num1999", str);
	str = opx3.numtoString(xiangji[99]);
	opx3.ModifyNode("num19100", str);



	str = opx3.numtoString(yanchisheding[0]);
	opx3.ModifyNode("num2001", str);
	str = opx3.numtoString(yanchisheding[1]);
	opx3.ModifyNode("num2002", str);
	str = opx3.numtoString(yanchisheding[2]);
	opx3.ModifyNode("num2003", str);
	str = opx3.numtoString(yanchisheding[3]);
	opx3.ModifyNode("num2004", str);
	str = opx3.numtoString(yanchisheding[4]);
	opx3.ModifyNode("num2005", str);
	str = opx3.numtoString(yanchisheding[5]);
	opx3.ModifyNode("num2006", str);
	str = opx3.numtoString(yanchisheding[6]);
	opx3.ModifyNode("num2007", str);
	str = opx3.numtoString(yanchisheding[7]);
	opx3.ModifyNode("num2008", str);
	str = opx3.numtoString(yanchisheding[8]);
	opx3.ModifyNode("num2009", str);
	str = opx3.numtoString(yanchisheding[9]);
	opx3.ModifyNode("num2010", str);
	str = opx3.numtoString(yanchisheding[10]);
	opx3.ModifyNode("num2011", str);
	str = opx3.numtoString(yanchisheding[11]);
	opx3.ModifyNode("num2012", str);



	str = opx3.numtoString(yanse[0]);
	opx3.ModifyNode("num2101", str);
	str = opx3.numtoString(yanse[1]);
	opx3.ModifyNode("num2102", str);
	str = opx3.numtoString(yanse[2]);
	opx3.ModifyNode("num2103", str);
	str = opx3.numtoString(yanse[3]);
	opx3.ModifyNode("num2104", str);
	str = opx3.numtoString(yanse[4]);
	opx3.ModifyNode("num2105", str);
	str = opx3.numtoString(yanse[5]);
	opx3.ModifyNode("num2106", str);
	str = opx3.numtoString(yanse[6]);
	opx3.ModifyNode("num2107", str);
	str = opx3.numtoString(yanse[7]);
	opx3.ModifyNode("num2108", str);
	str = opx3.numtoString(yanse[8]);
	opx3.ModifyNode("num2109", str);
	str = opx3.numtoString(yanse[9]);
	opx3.ModifyNode("num2110", str);
	str = opx3.numtoString(yanse[10]);
	opx3.ModifyNode("num2111", str);
	str = opx3.numtoString(yanse[11]);
	opx3.ModifyNode("num2112", str);



	str = opx3.numtoString(huiduhuluesheding[0]);
	opx3.ModifyNode("num2201", str);
	str = opx3.numtoString(huiduhuluesheding[1]);
	opx3.ModifyNode("num2202", str);
	str = opx3.numtoString(huiduhuluesheding[2]);
	opx3.ModifyNode("num2203", str);
	str = opx3.numtoString(huiduhuluesheding[3]);
	opx3.ModifyNode("num2204", str);
	str = opx3.numtoString(huiduhuluesheding[4]);
	opx3.ModifyNode("num2205", str);
	str = opx3.numtoString(huiduhuluesheding[5]);
	opx3.ModifyNode("num2206", str);
	str = opx3.numtoString(huiduhuluesheding[6]);
	opx3.ModifyNode("num2207", str);
	str = opx3.numtoString(huiduhuluesheding[7]);
	opx3.ModifyNode("num2208", str);
	str = opx3.numtoString(huiduhuluesheding[8]);
	opx3.ModifyNode("num2209", str);
	str = opx3.numtoString(huiduhuluesheding[9]);
	opx3.ModifyNode("num2210", str);
	str = opx3.numtoString(huiduhuluesheding[10]);
	opx3.ModifyNode("num2211", str);
	str = opx3.numtoString(huiduhuluesheding[11]);
	opx3.ModifyNode("num2212", str);
	str = opx3.numtoString(huiduhuluesheding[12]);
	opx3.ModifyNode("num2213", str);
	str = opx3.numtoString(huiduhuluesheding[13]);
	opx3.ModifyNode("num2214", str);
	str = opx3.numtoString(huiduhuluesheding[14]);
	opx3.ModifyNode("num2215", str);
	str = opx3.numtoString(huiduhuluesheding[15]);
	opx3.ModifyNode("num2216", str);
	str = opx3.numtoString(huiduhuluesheding[16]);
	opx3.ModifyNode("num2217", str);
	str = opx3.numtoString(huiduhuluesheding[17]);
	opx3.ModifyNode("num2218", str);
	str = opx3.numtoString(huiduhuluesheding[18]);
	opx3.ModifyNode("num2219", str);
	str = opx3.numtoString(huiduhuluesheding[19]);
	opx3.ModifyNode("num2220", str);



	str = opx3.numtoString(huidu1sheding[0]);
	opx3.ModifyNode("num2301", str);
	str = opx3.numtoString(huidu1sheding[1]);
	opx3.ModifyNode("num2302", str);
	str = opx3.numtoString(huidu1sheding[2]);
	opx3.ModifyNode("num2303", str);
	str = opx3.numtoString(huidu1sheding[3]);
	opx3.ModifyNode("num2304", str);
	str = opx3.numtoString(huidu1sheding[4]);
	opx3.ModifyNode("num2305", str);
	str = opx3.numtoString(huidu1sheding[5]);
	opx3.ModifyNode("num2306", str);
	str = opx3.numtoString(huidu1sheding[6]);
	opx3.ModifyNode("num2307", str);
	str = opx3.numtoString(huidu1sheding[7]);
	opx3.ModifyNode("num2308", str);
	str = opx3.numtoString(huidu1sheding[8]);
	opx3.ModifyNode("num2309", str);
	str = opx3.numtoString(huidu1sheding[9]);
	opx3.ModifyNode("num2310", str);
	str = opx3.numtoString(huidu1sheding[10]);
	opx3.ModifyNode("num2311", str);
	str = opx3.numtoString(huidu1sheding[11]);
	opx3.ModifyNode("num2312", str);


	str = opx3.numtoString(huidu2sheding[0]);
	opx3.ModifyNode("num2401", str);
	str = opx3.numtoString(huidu2sheding[1]);
	opx3.ModifyNode("num2402", str);
	str = opx3.numtoString(huidu2sheding[2]);
	opx3.ModifyNode("num2403", str);
	str = opx3.numtoString(huidu2sheding[3]);
	opx3.ModifyNode("num2404", str);
	str = opx3.numtoString(huidu2sheding[4]);
	opx3.ModifyNode("num2405", str);
	str = opx3.numtoString(huidu2sheding[5]);
	opx3.ModifyNode("num2406", str);
	str = opx3.numtoString(huidu2sheding[6]);
	opx3.ModifyNode("num2407", str);
	str = opx3.numtoString(huidu2sheding[7]);
	opx3.ModifyNode("num2408", str);
	str = opx3.numtoString(huidu2sheding[8]);
	opx3.ModifyNode("num2409", str);
	str = opx3.numtoString(huidu2sheding[9]);
	opx3.ModifyNode("num2410", str);
	str = opx3.numtoString(huidu2sheding[10]);
	opx3.ModifyNode("num2411", str);
	str = opx3.numtoString(huidu2sheding[11]);
	opx3.ModifyNode("num2412", str);


	str = opx3.numtoString(mianjiweitiaosd[0]);
	opx3.ModifyNode("num2501", str);
	str = opx3.numtoString(mianjiweitiaosd[1]);
	opx3.ModifyNode("num2502", str);
	str = opx3.numtoString(mianjiweitiaosd[2]);
	opx3.ModifyNode("num2503", str);
	str = opx3.numtoString(mianjiweitiaosd[3]);
	opx3.ModifyNode("num2504", str);
	str = opx3.numtoString(mianjiweitiaosd[4]);
	opx3.ModifyNode("num2505", str);
	str = opx3.numtoString(mianjiweitiaosd[5]);
	opx3.ModifyNode("num2506", str);
	str = opx3.numtoString(mianjiweitiaosd[6]);
	opx3.ModifyNode("num2507", str);
	str = opx3.numtoString(mianjiweitiaosd[7]);
	opx3.ModifyNode("num2508", str);
	str = opx3.numtoString(mianjiweitiaosd[8]);
	opx3.ModifyNode("num2509", str);
	str = opx3.numtoString(mianjiweitiaosd[9]);
	opx3.ModifyNode("num2510", str);
	str = opx3.numtoString(mianjiweitiaosd[10]);
	opx3.ModifyNode("num2511", str);
	str = opx3.numtoString(mianjiweitiaosd[11]);
	opx3.ModifyNode("num2512", str);
	str = opx3.numtoString(mianjiweitiaosd[12]);
	opx3.ModifyNode("num2513", str);
	str = opx3.numtoString(mianjiweitiaosd[13]);
	opx3.ModifyNode("num2514", str);
	str = opx3.numtoString(mianjiweitiaosd[14]);
	opx3.ModifyNode("num2515", str);
	str = opx3.numtoString(mianjiweitiaosd[15]);
	opx3.ModifyNode("num2516", str);
	str = opx3.numtoString(mianjiweitiaosd[16]);
	opx3.ModifyNode("num2517", str);
	str = opx3.numtoString(mianjiweitiaosd[17]);
	opx3.ModifyNode("num2518", str);
	str = opx3.numtoString(mianjiweitiaosd[18]);
	opx3.ModifyNode("num2519", str);
	str = opx3.numtoString(mianjiweitiaosd[19]);
	opx3.ModifyNode("num2520", str);


	str = opx3.numtoString(quyusansd[0]);
	opx3.ModifyNode("num2601", str);
	str = opx3.numtoString(quyusansd[1]);
	opx3.ModifyNode("num2602", str);
	str = opx3.numtoString(quyusansd[2]);
	opx3.ModifyNode("num2603", str);
	str = opx3.numtoString(quyusansd[3]);
	opx3.ModifyNode("num2604", str);
	str = opx3.numtoString(quyusansd[4]);
	opx3.ModifyNode("num2605", str);
	str = opx3.numtoString(quyusansd[5]);
	opx3.ModifyNode("num2606", str);
	str = opx3.numtoString(quyusansd[6]);
	opx3.ModifyNode("num2607", str);
	str = opx3.numtoString(quyusansd[7]);
	opx3.ModifyNode("num2608", str);
	str = opx3.numtoString(quyusansd[8]);
	opx3.ModifyNode("num2609", str);
	str = opx3.numtoString(quyusansd[9]);
	opx3.ModifyNode("num2610", str);
	str = opx3.numtoString(quyusansd[10]);
	opx3.ModifyNode("num2611", str);
	str = opx3.numtoString(quyusansd[11]);
	opx3.ModifyNode("num2612", str);


	str = opx3.numtoString(quyusisd[0]);
	opx3.ModifyNode("num2701", str);
	str = opx3.numtoString(quyusisd[1]);
	opx3.ModifyNode("num2702", str);
	str = opx3.numtoString(quyusisd[2]);
	opx3.ModifyNode("num2703", str);
	str = opx3.numtoString(quyusisd[3]);
	opx3.ModifyNode("num2704", str);
	str = opx3.numtoString(quyusisd[4]);
	opx3.ModifyNode("num2705", str);
	str = opx3.numtoString(quyusisd[5]);
	opx3.ModifyNode("num2706", str);
	str = opx3.numtoString(quyusisd[6]);
	opx3.ModifyNode("num2707", str);
	str = opx3.numtoString(quyusisd[7]);
	opx3.ModifyNode("num2708", str);
	str = opx3.numtoString(quyusisd[8]);
	opx3.ModifyNode("num2709", str);
	str = opx3.numtoString(quyusisd[9]);
	opx3.ModifyNode("num2710", str);
	str = opx3.numtoString(quyusisd[10]);
	opx3.ModifyNode("num2711", str);
	str = opx3.numtoString(quyusisd[11]);
	opx3.ModifyNode("num2712", str);



	str = opx3.numtoString(quyuwusd[0]);
	opx3.ModifyNode("num2801", str);
	str = opx3.numtoString(quyuwusd[1]);
	opx3.ModifyNode("num2802", str);
	str = opx3.numtoString(quyuwusd[2]);
	opx3.ModifyNode("num2803", str);
	str = opx3.numtoString(quyuwusd[3]);
	opx3.ModifyNode("num2804", str);
	str = opx3.numtoString(quyuwusd[4]);
	opx3.ModifyNode("num2805", str);
	str = opx3.numtoString(quyuwusd[5]);
	opx3.ModifyNode("num2806", str);
	str = opx3.numtoString(quyuwusd[6]);
	opx3.ModifyNode("num2807", str);
	str = opx3.numtoString(quyuwusd[7]);
	opx3.ModifyNode("num2808", str);
	str = opx3.numtoString(quyuwusd[8]);
	opx3.ModifyNode("num2809", str);
	str = opx3.numtoString(quyuwusd[9]);
	opx3.ModifyNode("num2810", str);
	str = opx3.numtoString(quyuwusd[10]);
	opx3.ModifyNode("num2811", str);
	str = opx3.numtoString(quyuwusd[11]);
	opx3.ModifyNode("num2812", str);



	str = opx3.numtoString(shendu2[0]);
	opx3.ModifyNode("num2901", str);
	str = opx3.numtoString(shendu2[1]);
	opx3.ModifyNode("num2902", str);
	str = opx3.numtoString(shendu2[2]);
	opx3.ModifyNode("num2903", str);
	str = opx3.numtoString(shendu2[3]);
	opx3.ModifyNode("num2904", str);
	str = opx3.numtoString(shendu2[4]);
	opx3.ModifyNode("num2905", str);
	str = opx3.numtoString(shendu2[5]);
	opx3.ModifyNode("num2906", str);
	str = opx3.numtoString(shendu2[6]);
	opx3.ModifyNode("num2907", str);
	str = opx3.numtoString(shendu2[7]);
	opx3.ModifyNode("num2908", str);
	str = opx3.numtoString(shendu2[8]);
	opx3.ModifyNode("num2909", str);
	str = opx3.numtoString(shendu2[9]);
	opx3.ModifyNode("num2910", str);
	str = opx3.numtoString(shendu2[10]);
	opx3.ModifyNode("num2911", str);
	str = opx3.numtoString(shendu2[11]);
	opx3.ModifyNode("num2912", str);



	str = opx3.numtoString(xingxuanlingmindusd[0]);
	opx3.ModifyNode("num3001", str);
	str = opx3.numtoString(xingxuanlingmindusd[1]);
	opx3.ModifyNode("num3002", str);
	str = opx3.numtoString(xingxuanlingmindusd[2]);
	opx3.ModifyNode("num3003", str);
	str = opx3.numtoString(xingxuanlingmindusd[3]);
	opx3.ModifyNode("num3004", str);
	str = opx3.numtoString(xingxuanlingmindusd[4]);
	opx3.ModifyNode("num3005", str);
	str = opx3.numtoString(xingxuanlingmindusd[5]);
	opx3.ModifyNode("num3006", str);
	str = opx3.numtoString(xingxuanlingmindusd[6]);
	opx3.ModifyNode("num3007", str);
	str = opx3.numtoString(xingxuanlingmindusd[7]);
	opx3.ModifyNode("num3008", str);
	str = opx3.numtoString(xingxuanlingmindusd[8]);
	opx3.ModifyNode("num3009", str);
	str = opx3.numtoString(xingxuanlingmindusd[9]);
	opx3.ModifyNode("num3010", str);
	str = opx3.numtoString(xingxuanlingmindusd[10]);
	opx3.ModifyNode("num3011", str);
	str = opx3.numtoString(xingxuanlingmindusd[11]);
	opx3.ModifyNode("num3012", str);
	str = opx3.numtoString(xingxuanlingmindusd[12]);
	opx3.ModifyNode("num3013", str);
	str = opx3.numtoString(xingxuanlingmindusd[13]);
	opx3.ModifyNode("num3014", str);
	str = opx3.numtoString(xingxuanlingmindusd[14]);
	opx3.ModifyNode("num3015", str);
	str = opx3.numtoString(xingxuanlingmindusd[15]);
	opx3.ModifyNode("num3016", str);
	str = opx3.numtoString(xingxuanlingmindusd[16]);
	opx3.ModifyNode("num3017", str);
	str = opx3.numtoString(xingxuanlingmindusd[17]);
	opx3.ModifyNode("num3018", str);
	str = opx3.numtoString(xingxuanlingmindusd[18]);
	opx3.ModifyNode("num3019", str);
	str = opx3.numtoString(xingxuanlingmindusd[19]);
	opx3.ModifyNode("num3020", str);


	str = opx3.numtoString(xingxuansd[0]);
	opx3.ModifyNode("num3101", str);
	str = opx3.numtoString(xingxuansd[1]);
	opx3.ModifyNode("num3102", str);
	str = opx3.numtoString(xingxuansd[2]);
	opx3.ModifyNode("num3103", str);
	str = opx3.numtoString(xingxuansd[3]);
	opx3.ModifyNode("num3104", str);
	str = opx3.numtoString(xingxuansd[4]);
	opx3.ModifyNode("num3105", str);


	str = opx3.numtoString(yansehangmianjisd[0]);
	opx3.ModifyNode("num3201", str);
	str = opx3.numtoString(yansehangmianjisd[1]);
	opx3.ModifyNode("num3202", str);
	str = opx3.numtoString(yansehangmianjisd[2]);
	opx3.ModifyNode("num3203", str);
	str = opx3.numtoString(yansehangmianjisd[3]);
	opx3.ModifyNode("num3204", str);
	str = opx3.numtoString(yansehangmianjisd[4]);
	opx3.ModifyNode("num3205", str);
	str = opx3.numtoString(yansehangmianjisd[5]);
	opx3.ModifyNode("num3206", str);
	str = opx3.numtoString(yansehangmianjisd[6]);
	opx3.ModifyNode("num3207", str);
	str = opx3.numtoString(yansehangmianjisd[7]);
	opx3.ModifyNode("num3208", str);
	str = opx3.numtoString(yansehangmianjisd[8]);
	opx3.ModifyNode("num3209", str);
	str = opx3.numtoString(yansehangmianjisd[9]);
	opx3.ModifyNode("num3210", str);
	str = opx3.numtoString(yansehangmianjisd[10]);
	opx3.ModifyNode("num3211", str);
	str = opx3.numtoString(yansehangmianjisd[11]);
	opx3.ModifyNode("num3212", str);
	str = opx3.numtoString(yansehangmianjisd[12]);
	opx3.ModifyNode("num3213", str);
	str = opx3.numtoString(yansehangmianjisd[13]);
	opx3.ModifyNode("num3214", str);
	str = opx3.numtoString(yansehangmianjisd[14]);
	opx3.ModifyNode("num3215", str);
	str = opx3.numtoString(yansehangmianjisd[15]);
	opx3.ModifyNode("num3216", str);
	str = opx3.numtoString(yansehangmianjisd[16]);
	opx3.ModifyNode("num3217", str);
	str = opx3.numtoString(yansehangmianjisd[17]);
	opx3.ModifyNode("num3218", str);
	str = opx3.numtoString(yansehangmianjisd[18]);
	opx3.ModifyNode("num3219", str);
	str = opx3.numtoString(yansehangmianjisd[19]);
	opx3.ModifyNode("num3220", str);



	str = opx3.numtoString(yanseminganqiangdusd[0]);
	opx3.ModifyNode("num3301", str);
	str = opx3.numtoString(yanseminganqiangdusd[1]);
	opx3.ModifyNode("num3302", str);
	str = opx3.numtoString(yanseminganqiangdusd[2]);
	opx3.ModifyNode("num3303", str);
	str = opx3.numtoString(yanseminganqiangdusd[3]);
	opx3.ModifyNode("num3304", str);
	str = opx3.numtoString(yanseminganqiangdusd[4]);
	opx3.ModifyNode("num3305", str);
	str = opx3.numtoString(yanseminganqiangdusd[5]);
	opx3.ModifyNode("num3306", str);




	str = opx3.UnicodeToUTF8(modsd[0]);
	opx3.ModifyNode("num3401", str);
	str = opx3.UnicodeToUTF8(modsd[1]);
	opx3.ModifyNode("num3402", str);
	str = opx3.UnicodeToUTF8(modsd[2]);
	opx3.ModifyNode("num3403", str);
	str = opx3.UnicodeToUTF8(modsd[3]);
	opx3.ModifyNode("num3404", str);
	str = opx3.UnicodeToUTF8(modsd[4]);
	opx3.ModifyNode("num3405", str);
	str = opx3.UnicodeToUTF8(modsd[5]);
	opx3.ModifyNode("num3406", str);
	str = opx3.UnicodeToUTF8(modsd[6]);
	opx3.ModifyNode("num3407", str);
	str = opx3.UnicodeToUTF8(modsd[7]);
	opx3.ModifyNode("num3408", str);
	str = opx3.UnicodeToUTF8(modsd[8]);
	opx3.ModifyNode("num3409", str);
	str = opx3.UnicodeToUTF8(modsd[9]);
	opx3.ModifyNode("num3410", str);
	str = opx3.UnicodeToUTF8(modsd[10]);
	opx3.ModifyNode("num3411", str);
	str = opx3.UnicodeToUTF8(modsd[11]);
	opx3.ModifyNode("num3412", str);
	str = opx3.UnicodeToUTF8(modsd[12]);
	opx3.ModifyNode("num3413", str);
	str = opx3.UnicodeToUTF8(modsd[13]);
	opx3.ModifyNode("num3414", str);
	str = opx3.UnicodeToUTF8(modsd[14]);
	opx3.ModifyNode("num3415", str);
	str = opx3.UnicodeToUTF8(modsd[15]);
	opx3.ModifyNode("num3416", str);
	str = opx3.UnicodeToUTF8(modsd[16]);
	opx3.ModifyNode("num3417", str);
	str = opx3.UnicodeToUTF8(modsd[17]);
	opx3.ModifyNode("num3418", str);
	str = opx3.UnicodeToUTF8(modsd[18]);
	opx3.ModifyNode("num3419", str);
	str = opx3.UnicodeToUTF8(modsd[19]);
	opx3.ModifyNode("num3420", str);
	str = opx3.UnicodeToUTF8(modsd[20]);
	opx3.ModifyNode("num3421", str);

	str = opx3.numtoString(addSW);
	opx3.ModifyNode("num3422", str);


	str = opx3.UnicodeToUTF8(liuliangsd[0]);
	opx3.ModifyNode("num3501", str);
	str = opx3.UnicodeToUTF8(liuliangsd[1]);
	opx3.ModifyNode("num3502", str);
	str = opx3.UnicodeToUTF8(liuliangsd[2]);
	opx3.ModifyNode("num3503", str);
	str = opx3.UnicodeToUTF8(liuliangsd[3]);
	opx3.ModifyNode("num3504", str);
	str = opx3.UnicodeToUTF8(liuliangsd[4]);
	opx3.ModifyNode("num3505", str);
	str = opx3.UnicodeToUTF8(liuliangsd[5]);
	opx3.ModifyNode("num3506", str);
	str = opx3.UnicodeToUTF8(liuliangsd[6]);
	opx3.ModifyNode("num3507", str);
	str = opx3.UnicodeToUTF8(liuliangsd[7]);
	opx3.ModifyNode("num3508", str);
	str = opx3.UnicodeToUTF8(liuliangsd[8]);
	opx3.ModifyNode("num3509", str);
	str = opx3.UnicodeToUTF8(liuliangsd[9]);
	opx3.ModifyNode("num3510", str);


	str = opx3.numtoString(blingminf[0]);
	opx3.ModifyNode("num3601", str);
	str = opx3.numtoString(blingminf[1]);
	opx3.ModifyNode("num3602", str);
	str = opx3.numtoString(blingminf[2]);
	opx3.ModifyNode("num3603", str);
	str = opx3.numtoString(blingminf[3]);
	opx3.ModifyNode("num3604", str);
	str = opx3.numtoString(blingminf[4]);
	opx3.ModifyNode("num3605", str);
	str = opx3.numtoString(blingminf[5]);
	opx3.ModifyNode("num3606", str);
	str = opx3.numtoString(blingminf[6]);
	opx3.ModifyNode("num3607", str);
	str = opx3.numtoString(blingminf[7]);
	opx3.ModifyNode("num3608", str);
	str = opx3.numtoString(blingminf[8]);
	opx3.ModifyNode("num3609", str);
	str = opx3.numtoString(blingminf[9]);
	opx3.ModifyNode("num3610", str);
	str = opx3.numtoString(blingminf[10]);
	opx3.ModifyNode("num3611", str);
	str = opx3.numtoString(blingminf[11]);
	opx3.ModifyNode("num3612", str);
	str = opx3.numtoString(blingminf[12]);
	opx3.ModifyNode("num3613", str);
	str = opx3.numtoString(blingminf[13]);
	opx3.ModifyNode("num3614", str);
	str = opx3.numtoString(blingminf[14]);
	opx3.ModifyNode("num3615", str);
	str = opx3.numtoString(blingminf[15]);
	opx3.ModifyNode("num3616", str);
	str = opx3.numtoString(blingminf[16]);
	opx3.ModifyNode("num3617", str);
	str = opx3.numtoString(blingminf[17]);
	opx3.ModifyNode("num3618", str);
	str = opx3.numtoString(blingminf[18]);
	opx3.ModifyNode("num3619", str);
	str = opx3.numtoString(blingminf[19]);
	opx3.ModifyNode("num3620", str);
	str = opx3.numtoString(blingminf[20]);
	opx3.ModifyNode("num3621", str);
	str = opx3.numtoString(blingminf[21]);
	opx3.ModifyNode("num3622", str);
	str = opx3.numtoString(blingminf[22]);
	opx3.ModifyNode("num3623", str);
	str = opx3.numtoString(blingminf[23]);
	opx3.ModifyNode("num3624", str);
	str = opx3.numtoString(blingminf[24]);
	opx3.ModifyNode("num3625", str);
	str = opx3.numtoString(blingminf[25]);
	opx3.ModifyNode("num3626", str);
	str = opx3.numtoString(blingminf[26]);
	opx3.ModifyNode("num3627", str);
	str = opx3.numtoString(blingminf[27]);
	opx3.ModifyNode("num3628", str);
	str = opx3.numtoString(blingminf[28]);
	opx3.ModifyNode("num3629", str);
	str = opx3.numtoString(blingminf[29]);
	opx3.ModifyNode("num3630", str);
	str = opx3.numtoString(blingminf[30]);
	opx3.ModifyNode("num3631", str);
	str = opx3.numtoString(blingminf[31]);
	opx3.ModifyNode("num3632", str);
	str = opx3.numtoString(blingminf[32]);
	opx3.ModifyNode("num3633", str);
	str = opx3.numtoString(blingminf[33]);
	opx3.ModifyNode("num3634", str);
	str = opx3.numtoString(blingminf[34]);
	opx3.ModifyNode("num3635", str);
	str = opx3.numtoString(blingminf[35]);
	opx3.ModifyNode("num3636", str);
	str = opx3.numtoString(blingminf[36]);
	opx3.ModifyNode("num3637", str);
	str = opx3.numtoString(blingminf[37]);
	opx3.ModifyNode("num3638", str);
	str = opx3.numtoString(blingminf[38]);
	opx3.ModifyNode("num3639", str);
	str = opx3.numtoString(blingminf[39]);
	opx3.ModifyNode("num3640", str);


	str = opx3.numtoString(glingminf[0]);
	opx3.ModifyNode("num3701", str);
	str = opx3.numtoString(glingminf[1]);
	opx3.ModifyNode("num3702", str);
	str = opx3.numtoString(glingminf[2]);
	opx3.ModifyNode("num3703", str);
	str = opx3.numtoString(glingminf[3]);
	opx3.ModifyNode("num3704", str);
	str = opx3.numtoString(glingminf[4]);
	opx3.ModifyNode("num3705", str);
	str = opx3.numtoString(glingminf[5]);
	opx3.ModifyNode("num3706", str);
	str = opx3.numtoString(glingminf[6]);
	opx3.ModifyNode("num3707", str);
	str = opx3.numtoString(glingminf[7]);
	opx3.ModifyNode("num3708", str);
	str = opx3.numtoString(glingminf[8]);
	opx3.ModifyNode("num3709", str);
	str = opx3.numtoString(glingminf[9]);
	opx3.ModifyNode("num3710", str);
	str = opx3.numtoString(glingminf[10]);
	opx3.ModifyNode("num3711", str);
	str = opx3.numtoString(glingminf[11]);
	opx3.ModifyNode("num3712", str);
	str = opx3.numtoString(glingminf[12]);
	opx3.ModifyNode("num3713", str);
	str = opx3.numtoString(glingminf[13]);
	opx3.ModifyNode("num3714", str);
	str = opx3.numtoString(glingminf[14]);
	opx3.ModifyNode("num3715", str);
	str = opx3.numtoString(glingminf[15]);
	opx3.ModifyNode("num3716", str);
	str = opx3.numtoString(glingminf[16]);
	opx3.ModifyNode("num3717", str);
	str = opx3.numtoString(glingminf[17]);
	opx3.ModifyNode("num3718", str);
	str = opx3.numtoString(glingminf[18]);
	opx3.ModifyNode("num3719", str);
	str = opx3.numtoString(glingminf[19]);
	opx3.ModifyNode("num3720", str);
	str = opx3.numtoString(glingminf[20]);
	opx3.ModifyNode("num3721", str);
	str = opx3.numtoString(glingminf[21]);
	opx3.ModifyNode("num3722", str);
	str = opx3.numtoString(glingminf[22]);
	opx3.ModifyNode("num3723", str);
	str = opx3.numtoString(glingminf[23]);
	opx3.ModifyNode("num3724", str);
	str = opx3.numtoString(glingminf[24]);
	opx3.ModifyNode("num3725", str);
	str = opx3.numtoString(glingminf[25]);
	opx3.ModifyNode("num3726", str);
	str = opx3.numtoString(glingminf[26]);
	opx3.ModifyNode("num3727", str);
	str = opx3.numtoString(glingminf[27]);
	opx3.ModifyNode("num3728", str);
	str = opx3.numtoString(glingminf[28]);
	opx3.ModifyNode("num3729", str);
	str = opx3.numtoString(glingminf[29]);
	opx3.ModifyNode("num3730", str);
	str = opx3.numtoString(glingminf[30]);
	opx3.ModifyNode("num3731", str);
	str = opx3.numtoString(glingminf[31]);
	opx3.ModifyNode("num3732", str);
	str = opx3.numtoString(glingminf[32]);
	opx3.ModifyNode("num3733", str);
	str = opx3.numtoString(glingminf[33]);
	opx3.ModifyNode("num3734", str);
	str = opx3.numtoString(glingminf[34]);
	opx3.ModifyNode("num3735", str);
	str = opx3.numtoString(glingminf[35]);
	opx3.ModifyNode("num3736", str);
	str = opx3.numtoString(glingminf[36]);
	opx3.ModifyNode("num3737", str);
	str = opx3.numtoString(glingminf[37]);
	opx3.ModifyNode("num3738", str);
	str = opx3.numtoString(glingminf[38]);
	opx3.ModifyNode("num3739", str);
	str = opx3.numtoString(glingminf[39]);
	opx3.ModifyNode("num3740", str);


	str = opx3.numtoString(rlingminf[0]);
	opx3.ModifyNode("num3801", str);
	str = opx3.numtoString(rlingminf[1]);
	opx3.ModifyNode("num3802", str);
	str = opx3.numtoString(rlingminf[2]);
	opx3.ModifyNode("num3803", str);
	str = opx3.numtoString(rlingminf[3]);
	opx3.ModifyNode("num3804", str);
	str = opx3.numtoString(rlingminf[4]);
	opx3.ModifyNode("num3805", str);
	str = opx3.numtoString(rlingminf[5]);
	opx3.ModifyNode("num3806", str);
	str = opx3.numtoString(rlingminf[6]);
	opx3.ModifyNode("num3807", str);
	str = opx3.numtoString(rlingminf[7]);
	opx3.ModifyNode("num3808", str);
	str = opx3.numtoString(rlingminf[8]);
	opx3.ModifyNode("num3809", str);
	str = opx3.numtoString(rlingminf[9]);
	opx3.ModifyNode("num3810", str);
	str = opx3.numtoString(rlingminf[10]);
	opx3.ModifyNode("num3811", str);
	str = opx3.numtoString(rlingminf[11]);
	opx3.ModifyNode("num3812", str);
	str = opx3.numtoString(rlingminf[12]);
	opx3.ModifyNode("num3813", str);
	str = opx3.numtoString(rlingminf[13]);
	opx3.ModifyNode("num3814", str);
	str = opx3.numtoString(rlingminf[14]);
	opx3.ModifyNode("num3815", str);
	str = opx3.numtoString(rlingminf[15]);
	opx3.ModifyNode("num3816", str);
	str = opx3.numtoString(rlingminf[16]);
	opx3.ModifyNode("num3817", str);
	str = opx3.numtoString(rlingminf[17]);
	opx3.ModifyNode("num3818", str);
	str = opx3.numtoString(rlingminf[18]);
	opx3.ModifyNode("num3819", str);
	str = opx3.numtoString(rlingminf[19]);
	opx3.ModifyNode("num3820", str);
	str = opx3.numtoString(rlingminf[20]);
	opx3.ModifyNode("num3821", str);
	str = opx3.numtoString(rlingminf[21]);
	opx3.ModifyNode("num3822", str);
	str = opx3.numtoString(rlingminf[22]);
	opx3.ModifyNode("num3823", str);
	str = opx3.numtoString(rlingminf[23]);
	opx3.ModifyNode("num3824", str);
	str = opx3.numtoString(rlingminf[24]);
	opx3.ModifyNode("num3825", str);
	str = opx3.numtoString(rlingminf[25]);
	opx3.ModifyNode("num3826", str);
	str = opx3.numtoString(rlingminf[26]);
	opx3.ModifyNode("num3827", str);
	str = opx3.numtoString(rlingminf[27]);
	opx3.ModifyNode("num3828", str);
	str = opx3.numtoString(rlingminf[28]);
	opx3.ModifyNode("num3829", str);
	str = opx3.numtoString(rlingminf[29]);
	opx3.ModifyNode("num3830", str);
	str = opx3.numtoString(rlingminf[30]);
	opx3.ModifyNode("num3831", str);
	str = opx3.numtoString(rlingminf[31]);
	opx3.ModifyNode("num3832", str);
	str = opx3.numtoString(rlingminf[32]);
	opx3.ModifyNode("num3833", str);
	str = opx3.numtoString(rlingminf[33]);
	opx3.ModifyNode("num3834", str);
	str = opx3.numtoString(rlingminf[34]);
	opx3.ModifyNode("num3835", str);
	str = opx3.numtoString(rlingminf[35]);
	opx3.ModifyNode("num3836", str);
	str = opx3.numtoString(rlingminf[36]);
	opx3.ModifyNode("num3837", str);
	str = opx3.numtoString(rlingminf[37]);
	opx3.ModifyNode("num3838", str);
	str = opx3.numtoString(rlingminf[38]);
	opx3.ModifyNode("num3839", str);
	str = opx3.numtoString(rlingminf[39]);
	opx3.ModifyNode("num3840", str);


	str = opx3.numtoString(hunlingminf[0]);
	opx3.ModifyNode("num3901", str);
	str = opx3.numtoString(hunlingminf[1]);
	opx3.ModifyNode("num3902", str);
	str = opx3.numtoString(hunlingminf[2]);
	opx3.ModifyNode("num3903", str);
	str = opx3.numtoString(hunlingminf[3]);
	opx3.ModifyNode("num3904", str);
	str = opx3.numtoString(hunlingminf[4]);
	opx3.ModifyNode("num3905", str);
	str = opx3.numtoString(hunlingminf[5]);
	opx3.ModifyNode("num3906", str);
	str = opx3.numtoString(hunlingminf[6]);
	opx3.ModifyNode("num3907", str);
	str = opx3.numtoString(hunlingminf[7]);
	opx3.ModifyNode("num3908", str);
	str = opx3.numtoString(hunlingminf[8]);
	opx3.ModifyNode("num3909", str);
	str = opx3.numtoString(hunlingminf[9]);
	opx3.ModifyNode("num3910", str);
	str = opx3.numtoString(hunlingminf[10]);
	opx3.ModifyNode("num3911", str);
	str = opx3.numtoString(hunlingminf[11]);
	opx3.ModifyNode("num3912", str);
	str = opx3.numtoString(hunlingminf[12]);
	opx3.ModifyNode("num3913", str);
	str = opx3.numtoString(hunlingminf[13]);
	opx3.ModifyNode("num3914", str);
	str = opx3.numtoString(hunlingminf[14]);
	opx3.ModifyNode("num3915", str);
	str = opx3.numtoString(hunlingminf[15]);
	opx3.ModifyNode("num3916", str);
	str = opx3.numtoString(hunlingminf[16]);
	opx3.ModifyNode("num3917", str);
	str = opx3.numtoString(hunlingminf[17]);
	opx3.ModifyNode("num3918", str);
	str = opx3.numtoString(hunlingminf[18]);
	opx3.ModifyNode("num3919", str);
	str = opx3.numtoString(hunlingminf[19]);
	opx3.ModifyNode("num3920", str);
	str = opx3.numtoString(hunlingminf[20]);
	opx3.ModifyNode("num3921", str);
	str = opx3.numtoString(hunlingminf[21]);
	opx3.ModifyNode("num3922", str);
	str = opx3.numtoString(hunlingminf[22]);
	opx3.ModifyNode("num3923", str);
	str = opx3.numtoString(hunlingminf[23]);
	opx3.ModifyNode("num3924", str);
	str = opx3.numtoString(hunlingminf[24]);
	opx3.ModifyNode("num3925", str);
	str = opx3.numtoString(hunlingminf[25]);
	opx3.ModifyNode("num3926", str);
	str = opx3.numtoString(hunlingminf[26]);
	opx3.ModifyNode("num3927", str);
	str = opx3.numtoString(hunlingminf[27]);
	opx3.ModifyNode("num3928", str);
	str = opx3.numtoString(hunlingminf[28]);
	opx3.ModifyNode("num3929", str);
	str = opx3.numtoString(hunlingminf[29]);
	opx3.ModifyNode("num3930", str);
	str = opx3.numtoString(hunlingminf[30]);
	opx3.ModifyNode("num3931", str);
	str = opx3.numtoString(hunlingminf[31]);
	opx3.ModifyNode("num3932", str);
	str = opx3.numtoString(hunlingminf[32]);
	opx3.ModifyNode("num3933", str);
	str = opx3.numtoString(hunlingminf[33]);
	opx3.ModifyNode("num3934", str);
	str = opx3.numtoString(hunlingminf[34]);
	opx3.ModifyNode("num3935", str);
	str = opx3.numtoString(hunlingminf[35]);
	opx3.ModifyNode("num3936", str);
	str = opx3.numtoString(hunlingminf[36]);
	opx3.ModifyNode("num3937", str);
	str = opx3.numtoString(hunlingminf[37]);
	opx3.ModifyNode("num3938", str);
	str = opx3.numtoString(hunlingminf[38]);
	opx3.ModifyNode("num3939", str);
	str = opx3.numtoString(hunlingminf[39]);
	opx3.ModifyNode("num3940", str);



	str = opx3.numtoString(quyuf[0]);
	opx3.ModifyNode("num4001", str);
	str = opx3.numtoString(quyuf[1]);
	opx3.ModifyNode("num4002", str);
	str = opx3.numtoString(quyuf[2]);
	opx3.ModifyNode("num4003", str);
	str = opx3.numtoString(quyuf[3]);
	opx3.ModifyNode("num4004", str);
	str = opx3.numtoString(quyuf[4]);
	opx3.ModifyNode("num4005", str);
	str = opx3.numtoString(quyuf[5]);
	opx3.ModifyNode("num4006", str);
	str = opx3.numtoString(quyuf[6]);
	opx3.ModifyNode("num4007", str);
	str = opx3.numtoString(quyuf[7]);
	opx3.ModifyNode("num4008", str);
	str = opx3.numtoString(quyuf[8]);
	opx3.ModifyNode("num4009", str);
	str = opx3.numtoString(quyuf[9]);
	opx3.ModifyNode("num4010", str);
	str = opx3.numtoString(quyuf[10]);
	opx3.ModifyNode("num4011", str);
	str = opx3.numtoString(quyuf[11]);
	opx3.ModifyNode("num4012", str);
	str = opx3.numtoString(quyuf[12]);
	opx3.ModifyNode("num4013", str);
	str = opx3.numtoString(quyuf[13]);
	opx3.ModifyNode("num4014", str);
	str = opx3.numtoString(quyuf[14]);
	opx3.ModifyNode("num4015", str);
	str = opx3.numtoString(quyuf[15]);
	opx3.ModifyNode("num4016", str);
	str = opx3.numtoString(quyuf[16]);
	opx3.ModifyNode("num4017", str);
	str = opx3.numtoString(quyuf[17]);
	opx3.ModifyNode("num4018", str);
	str = opx3.numtoString(quyuf[18]);
	opx3.ModifyNode("num4019", str);
	str = opx3.numtoString(quyuf[19]);
	opx3.ModifyNode("num4020", str);
	str = opx3.numtoString(quyuf[20]);
	opx3.ModifyNode("num4021", str);
	str = opx3.numtoString(quyuf[21]);
	opx3.ModifyNode("num4022", str);
	str = opx3.numtoString(quyuf[22]);
	opx3.ModifyNode("num4023", str);
	str = opx3.numtoString(quyuf[23]);
	opx3.ModifyNode("num4024", str);
	str = opx3.numtoString(quyuf[24]);
	opx3.ModifyNode("num4025", str);
	str = opx3.numtoString(quyuf[25]);
	opx3.ModifyNode("num4026", str);
	str = opx3.numtoString(quyuf[26]);
	opx3.ModifyNode("num4027", str);
	str = opx3.numtoString(quyuf[27]);
	opx3.ModifyNode("num4028", str);
	str = opx3.numtoString(quyuf[28]);
	opx3.ModifyNode("num4029", str);
	str = opx3.numtoString(quyuf[29]);
	opx3.ModifyNode("num4030", str);
	str = opx3.numtoString(quyuf[30]);
	opx3.ModifyNode("num4031", str);
	str = opx3.numtoString(quyuf[31]);
	opx3.ModifyNode("num4032", str);
	str = opx3.numtoString(quyuf[32]);
	opx3.ModifyNode("num4033", str);
	str = opx3.numtoString(quyuf[33]);
	opx3.ModifyNode("num4034", str);
	str = opx3.numtoString(quyuf[34]);
	opx3.ModifyNode("num4035", str);
	str = opx3.numtoString(quyuf[35]);
	opx3.ModifyNode("num4036", str);
	str = opx3.numtoString(quyuf[36]);
	opx3.ModifyNode("num4037", str);
	str = opx3.numtoString(quyuf[37]);
	opx3.ModifyNode("num4038", str);
	str = opx3.numtoString(quyuf[38]);
	opx3.ModifyNode("num4039", str);
	str = opx3.numtoString(quyuf[39]);
	opx3.ModifyNode("num4040", str);



	str = opx3.numtoString(quyuerf[0]);
	opx3.ModifyNode("num4101", str);
	str = opx3.numtoString(quyuerf[1]);
	opx3.ModifyNode("num4102", str);
	str = opx3.numtoString(quyuerf[2]);
	opx3.ModifyNode("num4103", str);
	str = opx3.numtoString(quyuerf[3]);
	opx3.ModifyNode("num4104", str);
	str = opx3.numtoString(quyuerf[4]);
	opx3.ModifyNode("num4105", str);
	str = opx3.numtoString(quyuerf[5]);
	opx3.ModifyNode("num4106", str);
	str = opx3.numtoString(quyuerf[6]);
	opx3.ModifyNode("num4107", str);
	str = opx3.numtoString(quyuerf[7]);
	opx3.ModifyNode("num4108", str);
	str = opx3.numtoString(quyuerf[8]);
	opx3.ModifyNode("num4109", str);
	str = opx3.numtoString(quyuerf[9]);
	opx3.ModifyNode("num4110", str);
	str = opx3.numtoString(quyuerf[10]);
	opx3.ModifyNode("num4111", str);
	str = opx3.numtoString(quyuerf[11]);
	opx3.ModifyNode("num4112", str);
	str = opx3.numtoString(quyuerf[12]);
	opx3.ModifyNode("num4113", str);
	str = opx3.numtoString(quyuerf[13]);
	opx3.ModifyNode("num4114", str);
	str = opx3.numtoString(quyuerf[14]);
	opx3.ModifyNode("num4115", str);
	str = opx3.numtoString(quyuerf[15]);
	opx3.ModifyNode("num4116", str);
	str = opx3.numtoString(quyuerf[16]);
	opx3.ModifyNode("num4117", str);
	str = opx3.numtoString(quyuerf[17]);
	opx3.ModifyNode("num4118", str);
	str = opx3.numtoString(quyuerf[18]);
	opx3.ModifyNode("num4119", str);
	str = opx3.numtoString(quyuerf[19]);
	opx3.ModifyNode("num4120", str);
	str = opx3.numtoString(quyuerf[20]);
	opx3.ModifyNode("num4121", str);
	str = opx3.numtoString(quyuerf[21]);
	opx3.ModifyNode("num4122", str);
	str = opx3.numtoString(quyuerf[22]);
	opx3.ModifyNode("num4123", str);
	str = opx3.numtoString(quyuerf[23]);
	opx3.ModifyNode("num4124", str);
	str = opx3.numtoString(quyuerf[24]);
	opx3.ModifyNode("num4125", str);
	str = opx3.numtoString(quyuerf[25]);
	opx3.ModifyNode("num4126", str);
	str = opx3.numtoString(quyuerf[26]);
	opx3.ModifyNode("num4127", str);
	str = opx3.numtoString(quyuerf[27]);
	opx3.ModifyNode("num4128", str);
	str = opx3.numtoString(quyuerf[28]);
	opx3.ModifyNode("num4129", str);
	str = opx3.numtoString(quyuerf[29]);
	opx3.ModifyNode("num4130", str);
	str = opx3.numtoString(quyuerf[30]);
	opx3.ModifyNode("num4131", str);
	str = opx3.numtoString(quyuerf[31]);
	opx3.ModifyNode("num4132", str);
	str = opx3.numtoString(quyuerf[32]);
	opx3.ModifyNode("num4133", str);
	str = opx3.numtoString(quyuerf[33]);
	opx3.ModifyNode("num4134", str);
	str = opx3.numtoString(quyuerf[34]);
	opx3.ModifyNode("num4135", str);
	str = opx3.numtoString(quyuerf[35]);
	opx3.ModifyNode("num4136", str);
	str = opx3.numtoString(quyuerf[36]);
	opx3.ModifyNode("num4137", str);
	str = opx3.numtoString(quyuerf[37]);
	opx3.ModifyNode("num4138", str);
	str = opx3.numtoString(quyuerf[38]);
	opx3.ModifyNode("num4139", str);
	str = opx3.numtoString(quyuerf[39]);
	opx3.ModifyNode("num4140", str);



	str = opx3.numtoString(quyusanf[0]);
	opx3.ModifyNode("num4201", str);
	str = opx3.numtoString(quyusanf[1]);
	opx3.ModifyNode("num4202", str);
	str = opx3.numtoString(quyusanf[2]);
	opx3.ModifyNode("num4203", str);
	str = opx3.numtoString(quyusanf[3]);
	opx3.ModifyNode("num4204", str);
	str = opx3.numtoString(quyusanf[4]);
	opx3.ModifyNode("num4205", str);
	str = opx3.numtoString(quyusanf[5]);
	opx3.ModifyNode("num4206", str);
	str = opx3.numtoString(quyusanf[6]);
	opx3.ModifyNode("num4207", str);
	str = opx3.numtoString(quyusanf[7]);
	opx3.ModifyNode("num4208", str);
	str = opx3.numtoString(quyusanf[8]);
	opx3.ModifyNode("num4209", str);
	str = opx3.numtoString(quyusanf[9]);
	opx3.ModifyNode("num4210", str);
	str = opx3.numtoString(quyusanf[10]);
	opx3.ModifyNode("num4211", str);
	str = opx3.numtoString(quyusanf[11]);
	opx3.ModifyNode("num4212", str);
	str = opx3.numtoString(quyusanf[12]);
	opx3.ModifyNode("num4213", str);
	str = opx3.numtoString(quyusanf[13]);
	opx3.ModifyNode("num4214", str);
	str = opx3.numtoString(quyusanf[14]);
	opx3.ModifyNode("num4215", str);
	str = opx3.numtoString(quyusanf[15]);
	opx3.ModifyNode("num4216", str);
	str = opx3.numtoString(quyusanf[16]);
	opx3.ModifyNode("num4217", str);
	str = opx3.numtoString(quyusanf[17]);
	opx3.ModifyNode("num4218", str);
	str = opx3.numtoString(quyusanf[18]);
	opx3.ModifyNode("num4219", str);
	str = opx3.numtoString(quyusanf[19]);
	opx3.ModifyNode("num4220", str);
	str = opx3.numtoString(quyusanf[20]);
	opx3.ModifyNode("num4221", str);
	str = opx3.numtoString(quyusanf[21]);
	opx3.ModifyNode("num4222", str);
	str = opx3.numtoString(quyusanf[22]);
	opx3.ModifyNode("num4223", str);
	str = opx3.numtoString(quyusanf[23]);
	opx3.ModifyNode("num4224", str);
	str = opx3.numtoString(quyusanf[24]);
	opx3.ModifyNode("num4225", str);
	str = opx3.numtoString(quyusanf[25]);
	opx3.ModifyNode("num4226", str);
	str = opx3.numtoString(quyusanf[26]);
	opx3.ModifyNode("num4227", str);
	str = opx3.numtoString(quyusanf[27]);
	opx3.ModifyNode("num4228", str);
	str = opx3.numtoString(quyusanf[28]);
	opx3.ModifyNode("num4229", str);
	str = opx3.numtoString(quyusanf[29]);
	opx3.ModifyNode("num4230", str);
	str = opx3.numtoString(quyusanf[30]);
	opx3.ModifyNode("num4231", str);
	str = opx3.numtoString(quyusanf[31]);
	opx3.ModifyNode("num4232", str);
	str = opx3.numtoString(quyusanf[32]);
	opx3.ModifyNode("num4233", str);
	str = opx3.numtoString(quyusanf[33]);
	opx3.ModifyNode("num4234", str);
	str = opx3.numtoString(quyusanf[34]);
	opx3.ModifyNode("num4235", str);
	str = opx3.numtoString(quyusanf[35]);
	opx3.ModifyNode("num4236", str);
	str = opx3.numtoString(quyusanf[36]);
	opx3.ModifyNode("num4237", str);
	str = opx3.numtoString(quyusanf[37]);
	opx3.ModifyNode("num4238", str);
	str = opx3.numtoString(quyusanf[38]);
	opx3.ModifyNode("num4239", str);
	str = opx3.numtoString(quyusanf[39]);
	opx3.ModifyNode("num4240", str);


	str = opx3.numtoString(quyusif[0]);
	opx3.ModifyNode("num4301", str);
	str = opx3.numtoString(quyusif[1]);
	opx3.ModifyNode("num4302", str);
	str = opx3.numtoString(quyusif[2]);
	opx3.ModifyNode("num4303", str);
	str = opx3.numtoString(quyusif[3]);
	opx3.ModifyNode("num4304", str);
	str = opx3.numtoString(quyusif[4]);
	opx3.ModifyNode("num4305", str);
	str = opx3.numtoString(quyusif[5]);
	opx3.ModifyNode("num4306", str);
	str = opx3.numtoString(quyusif[6]);
	opx3.ModifyNode("num4307", str);
	str = opx3.numtoString(quyusif[7]);
	opx3.ModifyNode("num4308", str);
	str = opx3.numtoString(quyusif[8]);
	opx3.ModifyNode("num4309", str);
	str = opx3.numtoString(quyusif[9]);
	opx3.ModifyNode("num4310", str);
	str = opx3.numtoString(quyusif[10]);
	opx3.ModifyNode("num4311", str);
	str = opx3.numtoString(quyusif[11]);
	opx3.ModifyNode("num4312", str);
	str = opx3.numtoString(quyusif[12]);
	opx3.ModifyNode("num4313", str);
	str = opx3.numtoString(quyusif[13]);
	opx3.ModifyNode("num4314", str);
	str = opx3.numtoString(quyusif[14]);
	opx3.ModifyNode("num4315", str);
	str = opx3.numtoString(quyusif[15]);
	opx3.ModifyNode("num4316", str);
	str = opx3.numtoString(quyusif[16]);
	opx3.ModifyNode("num4317", str);
	str = opx3.numtoString(quyusif[17]);
	opx3.ModifyNode("num4318", str);
	str = opx3.numtoString(quyusif[18]);
	opx3.ModifyNode("num4319", str);
	str = opx3.numtoString(quyusif[19]);
	opx3.ModifyNode("num4320", str);
	str = opx3.numtoString(quyusif[20]);
	opx3.ModifyNode("num4321", str);
	str = opx3.numtoString(quyusif[21]);
	opx3.ModifyNode("num4322", str);
	str = opx3.numtoString(quyusif[22]);
	opx3.ModifyNode("num4323", str);
	str = opx3.numtoString(quyusif[23]);
	opx3.ModifyNode("num4324", str);
	str = opx3.numtoString(quyusif[24]);
	opx3.ModifyNode("num4325", str);
	str = opx3.numtoString(quyusif[25]);
	opx3.ModifyNode("num4326", str);
	str = opx3.numtoString(quyusif[26]);
	opx3.ModifyNode("num4327", str);
	str = opx3.numtoString(quyusif[27]);
	opx3.ModifyNode("num4328", str);
	str = opx3.numtoString(quyusif[28]);
	opx3.ModifyNode("num4329", str);
	str = opx3.numtoString(quyusif[29]);
	opx3.ModifyNode("num4330", str);
	str = opx3.numtoString(quyusif[30]);
	opx3.ModifyNode("num4331", str);
	str = opx3.numtoString(quyusif[31]);
	opx3.ModifyNode("num4332", str);
	str = opx3.numtoString(quyusif[32]);
	opx3.ModifyNode("num4333", str);
	str = opx3.numtoString(quyusif[33]);
	opx3.ModifyNode("num4334", str);
	str = opx3.numtoString(quyusif[34]);
	opx3.ModifyNode("num4335", str);
	str = opx3.numtoString(quyusif[35]);
	opx3.ModifyNode("num4336", str);
	str = opx3.numtoString(quyusif[36]);
	opx3.ModifyNode("num4337", str);
	str = opx3.numtoString(quyusif[37]);
	opx3.ModifyNode("num4338", str);
	str = opx3.numtoString(quyusif[38]);
	opx3.ModifyNode("num4339", str);
	str = opx3.numtoString(quyusif[39]);
	opx3.ModifyNode("num4340", str);


	str = opx3.numtoString(quyuwuf[0]);
	opx3.ModifyNode("num4401", str);
	str = opx3.numtoString(quyuwuf[1]);
	opx3.ModifyNode("num4402", str);
	str = opx3.numtoString(quyuwuf[2]);
	opx3.ModifyNode("num4403", str);
	str = opx3.numtoString(quyuwuf[3]);
	opx3.ModifyNode("num4404", str);
	str = opx3.numtoString(quyuwuf[4]);
	opx3.ModifyNode("num4405", str);
	str = opx3.numtoString(quyuwuf[5]);
	opx3.ModifyNode("num4406", str);
	str = opx3.numtoString(quyuwuf[6]);
	opx3.ModifyNode("num4407", str);
	str = opx3.numtoString(quyuwuf[7]);
	opx3.ModifyNode("num4408", str);
	str = opx3.numtoString(quyuwuf[8]);
	opx3.ModifyNode("num4409", str);
	str = opx3.numtoString(quyuwuf[9]);
	opx3.ModifyNode("num4410", str);
	str = opx3.numtoString(quyuwuf[10]);
	opx3.ModifyNode("num4411", str);
	str = opx3.numtoString(quyuwuf[11]);
	opx3.ModifyNode("num4412", str);
	str = opx3.numtoString(quyuwuf[12]);
	opx3.ModifyNode("num4413", str);
	str = opx3.numtoString(quyuwuf[13]);
	opx3.ModifyNode("num4414", str);
	str = opx3.numtoString(quyuwuf[14]);
	opx3.ModifyNode("num4415", str);
	str = opx3.numtoString(quyuwuf[15]);
	opx3.ModifyNode("num4416", str);
	str = opx3.numtoString(quyuwuf[16]);
	opx3.ModifyNode("num4417", str);
	str = opx3.numtoString(quyuwuf[17]);
	opx3.ModifyNode("num4418", str);
	str = opx3.numtoString(quyuwuf[18]);
	opx3.ModifyNode("num4419", str);
	str = opx3.numtoString(quyuwuf[19]);
	opx3.ModifyNode("num4420", str);
	str = opx3.numtoString(quyuwuf[20]);
	opx3.ModifyNode("num4421", str);
	str = opx3.numtoString(quyuwuf[21]);
	opx3.ModifyNode("num4422", str);
	str = opx3.numtoString(quyuwuf[22]);
	opx3.ModifyNode("num4423", str);
	str = opx3.numtoString(quyuwuf[23]);
	opx3.ModifyNode("num4424", str);
	str = opx3.numtoString(quyuwuf[24]);
	opx3.ModifyNode("num4425", str);
	str = opx3.numtoString(quyuwuf[25]);
	opx3.ModifyNode("num4426", str);
	str = opx3.numtoString(quyuwuf[26]);
	opx3.ModifyNode("num4427", str);
	str = opx3.numtoString(quyuwuf[27]);
	opx3.ModifyNode("num4428", str);
	str = opx3.numtoString(quyuwuf[28]);
	opx3.ModifyNode("num4429", str);
	str = opx3.numtoString(quyuwuf[29]);
	opx3.ModifyNode("num4430", str);
	str = opx3.numtoString(quyuwuf[30]);
	opx3.ModifyNode("num4431", str);
	str = opx3.numtoString(quyuwuf[31]);
	opx3.ModifyNode("num4432", str);
	str = opx3.numtoString(quyuwuf[32]);
	opx3.ModifyNode("num4433", str);
	str = opx3.numtoString(quyuwuf[33]);
	opx3.ModifyNode("num4434", str);
	str = opx3.numtoString(quyuwuf[34]);
	opx3.ModifyNode("num4435", str);
	str = opx3.numtoString(quyuwuf[35]);
	opx3.ModifyNode("num4436", str);
	str = opx3.numtoString(quyuwuf[36]);
	opx3.ModifyNode("num4437", str);
	str = opx3.numtoString(quyuwuf[37]);
	opx3.ModifyNode("num4438", str);
	str = opx3.numtoString(quyuwuf[38]);
	opx3.ModifyNode("num4439", str);
	str = opx3.numtoString(quyuwuf[39]);
	opx3.ModifyNode("num4440", str);


	str = opx3.numtoString(shenduf[0]);
	opx3.ModifyNode("num4501", str);
	str = opx3.numtoString(shenduf[1]);
	opx3.ModifyNode("num4502", str);
	str = opx3.numtoString(shenduf[2]);
	opx3.ModifyNode("num4503", str);
	str = opx3.numtoString(shenduf[3]);
	opx3.ModifyNode("num4504", str);
	str = opx3.numtoString(shenduf[4]);
	opx3.ModifyNode("num4505", str);
	str = opx3.numtoString(shenduf[5]);
	opx3.ModifyNode("num4506", str);
	str = opx3.numtoString(shenduf[6]);
	opx3.ModifyNode("num4507", str);
	str = opx3.numtoString(shenduf[7]);
	opx3.ModifyNode("num4508", str);
	str = opx3.numtoString(shenduf[8]);
	opx3.ModifyNode("num4509", str);
	str = opx3.numtoString(shenduf[9]);
	opx3.ModifyNode("num4510", str);
	str = opx3.numtoString(shenduf[10]);
	opx3.ModifyNode("num4511", str);
	str = opx3.numtoString(shenduf[11]);
	opx3.ModifyNode("num4512", str);
	str = opx3.numtoString(shenduf[12]);
	opx3.ModifyNode("num4513", str);
	str = opx3.numtoString(shenduf[13]);
	opx3.ModifyNode("num4514", str);
	str = opx3.numtoString(shenduf[14]);
	opx3.ModifyNode("num4515", str);
	str = opx3.numtoString(shenduf[15]);
	opx3.ModifyNode("num4516", str);
	str = opx3.numtoString(shenduf[16]);
	opx3.ModifyNode("num4517", str);
	str = opx3.numtoString(shenduf[17]);
	opx3.ModifyNode("num4518", str);
	str = opx3.numtoString(shenduf[18]);
	opx3.ModifyNode("num4519", str);
	str = opx3.numtoString(shenduf[19]);
	opx3.ModifyNode("num4520", str);
	str = opx3.numtoString(shenduf[20]);
	opx3.ModifyNode("num4521", str);
	str = opx3.numtoString(shenduf[21]);
	opx3.ModifyNode("num4522", str);
	str = opx3.numtoString(shenduf[22]);
	opx3.ModifyNode("num4523", str);
	str = opx3.numtoString(shenduf[23]);
	opx3.ModifyNode("num4524", str);
	str = opx3.numtoString(shenduf[24]);
	opx3.ModifyNode("num4525", str);
	str = opx3.numtoString(shenduf[25]);
	opx3.ModifyNode("num4526", str);
	str = opx3.numtoString(shenduf[26]);
	opx3.ModifyNode("num4527", str);
	str = opx3.numtoString(shenduf[27]);
	opx3.ModifyNode("num4528", str);
	str = opx3.numtoString(shenduf[28]);
	opx3.ModifyNode("num4529", str);
	str = opx3.numtoString(shenduf[29]);
	opx3.ModifyNode("num4530", str);
	str = opx3.numtoString(shenduf[30]);
	opx3.ModifyNode("num4531", str);
	str = opx3.numtoString(shenduf[31]);
	opx3.ModifyNode("num4532", str);
	str = opx3.numtoString(shenduf[32]);
	opx3.ModifyNode("num4533", str);
	str = opx3.numtoString(shenduf[33]);
	opx3.ModifyNode("num4534", str);
	str = opx3.numtoString(shenduf[34]);
	opx3.ModifyNode("num4535", str);
	str = opx3.numtoString(shenduf[35]);
	opx3.ModifyNode("num4536", str);
	str = opx3.numtoString(shenduf[36]);
	opx3.ModifyNode("num4537", str);
	str = opx3.numtoString(shenduf[37]);
	opx3.ModifyNode("num4538", str);
	str = opx3.numtoString(shenduf[38]);
	opx3.ModifyNode("num4539", str);
	str = opx3.numtoString(shenduf[39]);
	opx3.ModifyNode("num4540", str);



	str = opx3.numtoString(shenduerf[0]);
	opx3.ModifyNode("num4601", str);
	str = opx3.numtoString(shenduerf[1]);
	opx3.ModifyNode("num4602", str);
	str = opx3.numtoString(shenduerf[2]);
	opx3.ModifyNode("num4603", str);
	str = opx3.numtoString(shenduerf[3]);
	opx3.ModifyNode("num4604", str);
	str = opx3.numtoString(shenduerf[4]);
	opx3.ModifyNode("num4605", str);
	str = opx3.numtoString(shenduerf[5]);
	opx3.ModifyNode("num4606", str);
	str = opx3.numtoString(shenduerf[6]);
	opx3.ModifyNode("num4607", str);
	str = opx3.numtoString(shenduerf[7]);
	opx3.ModifyNode("num4608", str);
	str = opx3.numtoString(shenduerf[8]);
	opx3.ModifyNode("num4609", str);
	str = opx3.numtoString(shenduerf[9]);
	opx3.ModifyNode("num4610", str);
	str = opx3.numtoString(shenduerf[10]);
	opx3.ModifyNode("num4611", str);
	str = opx3.numtoString(shenduerf[11]);
	opx3.ModifyNode("num4612", str);
	str = opx3.numtoString(shenduerf[12]);
	opx3.ModifyNode("num4613", str);
	str = opx3.numtoString(shenduerf[13]);
	opx3.ModifyNode("num4614", str);
	str = opx3.numtoString(shenduerf[14]);
	opx3.ModifyNode("num4615", str);
	str = opx3.numtoString(shenduerf[15]);
	opx3.ModifyNode("num4616", str);
	str = opx3.numtoString(shenduerf[16]);
	opx3.ModifyNode("num4617", str);
	str = opx3.numtoString(shenduerf[17]);
	opx3.ModifyNode("num4618", str);
	str = opx3.numtoString(shenduerf[18]);
	opx3.ModifyNode("num4619", str);
	str = opx3.numtoString(shenduerf[19]);
	opx3.ModifyNode("num4620", str);
	str = opx3.numtoString(shenduerf[20]);
	opx3.ModifyNode("num4621", str);
	str = opx3.numtoString(shenduerf[21]);
	opx3.ModifyNode("num4622", str);
	str = opx3.numtoString(shenduerf[22]);
	opx3.ModifyNode("num4623", str);
	str = opx3.numtoString(shenduerf[23]);
	opx3.ModifyNode("num4624", str);
	str = opx3.numtoString(shenduerf[24]);
	opx3.ModifyNode("num4625", str);
	str = opx3.numtoString(shenduerf[25]);
	opx3.ModifyNode("num4626", str);
	str = opx3.numtoString(shenduerf[26]);
	opx3.ModifyNode("num4627", str);
	str = opx3.numtoString(shenduerf[27]);
	opx3.ModifyNode("num4628", str);
	str = opx3.numtoString(shenduerf[28]);
	opx3.ModifyNode("num4629", str);
	str = opx3.numtoString(shenduerf[29]);
	opx3.ModifyNode("num4630", str);
	str = opx3.numtoString(shenduerf[30]);
	opx3.ModifyNode("num4631", str);
	str = opx3.numtoString(shenduerf[31]);
	opx3.ModifyNode("num4632", str);
	str = opx3.numtoString(shenduerf[32]);
	opx3.ModifyNode("num4633", str);
	str = opx3.numtoString(shenduerf[33]);
	opx3.ModifyNode("num4634", str);
	str = opx3.numtoString(shenduerf[34]);
	opx3.ModifyNode("num4635", str);
	str = opx3.numtoString(shenduerf[35]);
	opx3.ModifyNode("num4636", str);
	str = opx3.numtoString(shenduerf[36]);
	opx3.ModifyNode("num4637", str);
	str = opx3.numtoString(shenduerf[37]);
	opx3.ModifyNode("num4638", str);
	str = opx3.numtoString(shenduerf[38]);
	opx3.ModifyNode("num4639", str);
	str = opx3.numtoString(shenduerf[39]);
	opx3.ModifyNode("num4640", str);


	str = opx3.numtoString(huif[0]);
	opx3.ModifyNode("num4701", str);
	str = opx3.numtoString(huif[1]);
	opx3.ModifyNode("num4702", str);
	str = opx3.numtoString(huif[2]);
	opx3.ModifyNode("num4703", str);
	str = opx3.numtoString(huif[3]);
	opx3.ModifyNode("num4704", str);
	str = opx3.numtoString(huif[4]);
	opx3.ModifyNode("num4705", str);
	str = opx3.numtoString(huif[5]);
	opx3.ModifyNode("num4706", str);
	str = opx3.numtoString(huif[6]);
	opx3.ModifyNode("num4707", str);
	str = opx3.numtoString(huif[7]);
	opx3.ModifyNode("num4708", str);
	str = opx3.numtoString(huif[8]);
	opx3.ModifyNode("num4709", str);
	str = opx3.numtoString(huif[9]);
	opx3.ModifyNode("num4710", str);
	str = opx3.numtoString(huif[10]);
	opx3.ModifyNode("num4711", str);
	str = opx3.numtoString(huif[11]);
	opx3.ModifyNode("num4712", str);
	str = opx3.numtoString(huif[12]);
	opx3.ModifyNode("num4713", str);
	str = opx3.numtoString(huif[13]);
	opx3.ModifyNode("num4714", str);
	str = opx3.numtoString(huif[14]);
	opx3.ModifyNode("num4715", str);
	str = opx3.numtoString(huif[15]);
	opx3.ModifyNode("num4716", str);
	str = opx3.numtoString(huif[16]);
	opx3.ModifyNode("num4717", str);
	str = opx3.numtoString(huif[17]);
	opx3.ModifyNode("num4718", str);
	str = opx3.numtoString(huif[18]);
	opx3.ModifyNode("num4719", str);
	str = opx3.numtoString(huif[19]);
	opx3.ModifyNode("num4720", str);
	str = opx3.numtoString(huif[20]);
	opx3.ModifyNode("num4721", str);
	str = opx3.numtoString(huif[21]);
	opx3.ModifyNode("num4722", str);
	str = opx3.numtoString(huif[22]);
	opx3.ModifyNode("num4723", str);
	str = opx3.numtoString(huif[23]);
	opx3.ModifyNode("num4724", str);
	str = opx3.numtoString(huif[24]);
	opx3.ModifyNode("num4725", str);
	str = opx3.numtoString(huif[25]);
	opx3.ModifyNode("num4726", str);
	str = opx3.numtoString(huif[26]);
	opx3.ModifyNode("num4727", str);
	str = opx3.numtoString(huif[27]);
	opx3.ModifyNode("num4728", str);
	str = opx3.numtoString(huif[28]);
	opx3.ModifyNode("num4729", str);
	str = opx3.numtoString(huif[29]);
	opx3.ModifyNode("num4730", str);
	str = opx3.numtoString(huif[30]);
	opx3.ModifyNode("num4731", str);
	str = opx3.numtoString(huif[31]);
	opx3.ModifyNode("num4732", str);
	str = opx3.numtoString(huif[32]);
	opx3.ModifyNode("num4733", str);
	str = opx3.numtoString(huif[33]);
	opx3.ModifyNode("num4734", str);
	str = opx3.numtoString(huif[34]);
	opx3.ModifyNode("num4735", str);
	str = opx3.numtoString(huif[35]);
	opx3.ModifyNode("num4736", str);
	str = opx3.numtoString(huif[36]);
	opx3.ModifyNode("num4737", str);
	str = opx3.numtoString(huif[37]);
	opx3.ModifyNode("num4738", str);
	str = opx3.numtoString(huif[38]);
	opx3.ModifyNode("num4739", str);
	str = opx3.numtoString(huif[39]);
	opx3.ModifyNode("num4740", str);



	str = opx3.numtoString(huierf[0]);
	opx3.ModifyNode("num4801", str);
	str = opx3.numtoString(huierf[1]);
	opx3.ModifyNode("num4802", str);
	str = opx3.numtoString(huierf[2]);
	opx3.ModifyNode("num4803", str);
	str = opx3.numtoString(huierf[3]);
	opx3.ModifyNode("num4804", str);
	str = opx3.numtoString(huierf[4]);
	opx3.ModifyNode("num4805", str);
	str = opx3.numtoString(huierf[5]);
	opx3.ModifyNode("num4806", str);
	str = opx3.numtoString(huierf[6]);
	opx3.ModifyNode("num4807", str);
	str = opx3.numtoString(huierf[7]);
	opx3.ModifyNode("num4808", str);
	str = opx3.numtoString(huierf[8]);
	opx3.ModifyNode("num4809", str);
	str = opx3.numtoString(huierf[9]);
	opx3.ModifyNode("num4810", str);
	str = opx3.numtoString(huierf[10]);
	opx3.ModifyNode("num4811", str);
	str = opx3.numtoString(huierf[11]);
	opx3.ModifyNode("num4812", str);
	str = opx3.numtoString(huierf[12]);
	opx3.ModifyNode("num4813", str);
	str = opx3.numtoString(huierf[13]);
	opx3.ModifyNode("num4814", str);
	str = opx3.numtoString(huierf[14]);
	opx3.ModifyNode("num4815", str);
	str = opx3.numtoString(huierf[15]);
	opx3.ModifyNode("num4816", str);
	str = opx3.numtoString(huierf[16]);
	opx3.ModifyNode("num4817", str);
	str = opx3.numtoString(huierf[17]);
	opx3.ModifyNode("num4818", str);
	str = opx3.numtoString(huierf[18]);
	opx3.ModifyNode("num4819", str);
	str = opx3.numtoString(huierf[19]);
	opx3.ModifyNode("num4820", str);
	str = opx3.numtoString(huierf[20]);
	opx3.ModifyNode("num4821", str);
	str = opx3.numtoString(huierf[21]);
	opx3.ModifyNode("num4822", str);
	str = opx3.numtoString(huierf[22]);
	opx3.ModifyNode("num4823", str);
	str = opx3.numtoString(huierf[23]);
	opx3.ModifyNode("num4824", str);
	str = opx3.numtoString(huierf[24]);
	opx3.ModifyNode("num4825", str);
	str = opx3.numtoString(huierf[25]);
	opx3.ModifyNode("num4826", str);
	str = opx3.numtoString(huierf[26]);
	opx3.ModifyNode("num4827", str);
	str = opx3.numtoString(huierf[27]);
	opx3.ModifyNode("num4828", str);
	str = opx3.numtoString(huierf[28]);
	opx3.ModifyNode("num4829", str);
	str = opx3.numtoString(huierf[29]);
	opx3.ModifyNode("num4830", str);
	str = opx3.numtoString(huierf[30]);
	opx3.ModifyNode("num4831", str);
	str = opx3.numtoString(huierf[31]);
	opx3.ModifyNode("num4832", str);
	str = opx3.numtoString(huierf[32]);
	opx3.ModifyNode("num4833", str);
	str = opx3.numtoString(huierf[33]);
	opx3.ModifyNode("num4834", str);
	str = opx3.numtoString(huierf[34]);
	opx3.ModifyNode("num4835", str);
	str = opx3.numtoString(huierf[35]);
	opx3.ModifyNode("num4836", str);
	str = opx3.numtoString(huierf[36]);
	opx3.ModifyNode("num4837", str);
	str = opx3.numtoString(huierf[37]);
	opx3.ModifyNode("num4838", str);
	str = opx3.numtoString(huierf[38]);
	opx3.ModifyNode("num4839", str);
	str = opx3.numtoString(huierf[39]);
	opx3.ModifyNode("num4840", str);



	string s;
	CTime tm = CTime::GetCurrentTime();
	CString str1 = tm.Format("%Y-%m-%d %H:%M:%S");//获得当前时间
	s = opx3.UnicodeToUTF8(str1);
	opx3.ModifyNode("gjsj", s);
	/*s = opx3.UnicodeToUTF8(m_moshi);*/
	s = opx3.UnicodeToUTF8(m_moshi);
	opx3.ModifyNode("fangan", s);
	opx3.SaveFile();
}


