#include <iostream>
#include <stdint.h>
#include <assert.h>
#include "modbus-private.h"
//#include "../modbus__CCD/modbus.h"

//#include <tchar.h>
#include "Thread.h"
#include "stdlib.h"
#include "string.h"
#define UCHAR unsigned char
#define USHORT unsigned short
#define CHAR char

using namespace std;

#pragma comment(lib,"modbus.lib")
static uint16_t databuff[200];//收取的数据
static UCHAR datatestrtuDPU[200] = { 0x20,0x03,0x00,0x00,0x00,0x64, };//看起来16进制的原始命令

//=======================          :   address     func   |----num of data----|--------data-------|---LRC---|---END---|
//======== data =========                 32        03             00                 100
//=======================          0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16
UCHAR revdata[] = { 0x3A,0x32,0x30,0x30,0x33,0x30,0x30,0x30,0x30,0x30,0x30,0x36,0x34,0x37,0x39,0x0D,0x0A };
static UCHAR datatestascii[200];
static uint16_t datatestDPU[200] = { 32,3,0,10,0,0,0,245,0,0,0,0,0,0,0, };//10进制的原始命令
static UCHAR asciiLRC = 0;
static int regs;
int sleeptime = 100;
modbus_t  *ctx;
uint8_t rsp[MODBUS_MAX_ADU_LENGTH];
int temp;
int revLENGTH;

//===================================================================
int readholdreg();
int revholdreg();
int writeholdreg();
void setfunc();
void main()
{
	//*modbus_t *modbus_new_rtu(const char *'device', int 'baud', char 'parity', int 'data_bit', int 'stop_bit'); *
	//这里打开的串口是Tiny6410的串口3，波特率9600，无校验，数据位是8，停止位是1。

	/*
	int modbus_read_registers(modbus_t *ctx, int addr, int nb, uint16_t *dest)
	该函数用来读保持寄存器的值，使用的功能码是0x03，其中寄存器的起始地址放入addr参数，
	读寄存器的个数放入nb参数，读出的值放入dest。若读取正确，返回值为读取的寄存器数，若
	读取错误，返回值为-1。
	*/

	//UCHAR data[130];
	//rtu 必须 8不能7 ,RTU已经成功
	ctx = modbus_new_rtu("COM1", 19200, 'E', 8, 1);
	modbus_connect(ctx);
	ctx->debug = 1;

	struct timeval t;
	t.tv_sec = 0;
	t.tv_usec = 1000000;//1000ms
	modbus_set_response_timeout(ctx, t.tv_sec, t.tv_usec);
	modbus_set_slave(ctx, 0x20);//温湿度传感器的modbus站地址为0x01；

	InitializeCriticalSection(&hPollLock);
	eSetPollingThreadState(STOPPED);
	//============================================================================================

	 //============================================================================================
	 // - Tx:3A 32 30 30 33 30 36 30 30 30 30 30 30 37 42 30 30 31 36 34 36 0D 0A
	 //         ----------- 06数据长度
	 // - Rx:3A 32 30 30 33 30 30 30 30 30 30 30 33 44 41 0D 0A
	writeholdreg();
	readholdreg();
	revholdreg();
	Sleep(500);
	exit('0');
	//=========================================================
	//单独线程
	//if (bCreatePollingThread() != TRUE)
	//{
	//	cout << "bCreatePollingThread  FALSE\r\n" << endl;
	//}
	////=========================================================
	////释放并关闭modbus
	//do
	//{
	//	char ch = getchar();
	//	if (ch == 'd')
	//	{
	//		eSetPollingThreadState(SHUTDOWN);
	//		modbus_close(ctx);
	//		modbus_free(ctx);
	//	}
	//} while (true);
}

void dosth()
{
	//格式输出
	system("cls");
	//readholdreg();
	//
	setfunc(); revholdreg();
	modbus_flush(ctx);
	Sleep(sleeptime);
	//======
}

DWORD WINAPI dwPollingThread(LPVOID lpParameter)
{
	eSetPollingThreadState(RUNNING);
	int temp = 0;
	do
	{
		dosth();
	} while (eGetPollingThreadState() != SHUTDOWN);

	eSetPollingThreadState(STOPPED);

	return 0;
}

BOOL bCreatePollingThread(void)
{
	BOOL            bResult;

	if (eGetPollingThreadState() == STOPPED)
	{
		if ((hPollThread = CreateThread(NULL, 0, dwPollingThread, NULL, 0, NULL)) == NULL)
		{
			/* Can't create the polling thread. */
			bResult = FALSE;
		}
		else
		{
			bResult = TRUE;
		}
	}
	else
	{
		bResult = FALSE;
	}

	return bResult;
}

enum ThreadState eGetPollingThreadState()
{
	enum ThreadState eCurState;

	EnterCriticalSection(&hPollLock);
	eCurState = ePollThreadState;
	LeaveCriticalSection(&hPollLock);

	return eCurState;
}

void eSetPollingThreadState(enum ThreadState eNewState)
{
	EnterCriticalSection(&hPollLock);
	ePollThreadState = eNewState;
	LeaveCriticalSection(&hPollLock);
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

void setfunc()
{
	uint8_t sl, func, ad, nb;
	cout << "input sl,func,ad,nb:\n";
	cin >> sl >> func >> ad >> nb;
	datatestDPU[0] = { sl };
	datatestDPU[1] = { func };
	datatestDPU[2] = { ad };
	datatestDPU[3] = { nb };
	for (int i = 0; i <= 3; i++)
	{
		cout << (int)datatestDPU[i] << "\t";
	}
	switch (datatestDPU[1])
	{
	case 3:
		readholdreg();
		break;
	case 4:
		readholdreg(); //readinputreg();
		break;
	case 16:
		writeholdreg();
		break;
	default:
		cout << "功能码错误！" << endl;
		setfunc();
		break;
	}
}

int readholdreg()
{
	datatestDPU[0] = { 32 };
	datatestDPU[1] = { 3 };
	datatestDPU[2] = { 211 };
	datatestDPU[3] = { 10 };

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
	for (int i = 1; i <= 12; i++)
	{
		cout << (int)datatestascii[i] << "  ";
	}
	cout << endl;
	//LRC
	asciiLRC = 0;
	for (int i = 0; i < 12; i++)
	{
		asciiLRC += (UCHAR)((int)(datatestascii[i] * 16) + (int)(datatestascii[i + 1]));
		cout << i << "\t" << (int)asciiLRC << endl;
	}
	asciiLRC = (UCHAR)(256 - asciiLRC % 256);
	cout << " asciiLRC Final -> " << (int)(asciiLRC) << endl;
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

int revholdreg()
{
	revLENGTH = modbus_receive_confirmation(ctx, rsp);
	cout << "revLENGTH: " << revLENGTH << endl;
	//====================
	cout << "rsp[i] : \n";
	for (int i = 0; i < revLENGTH - 2; i++)
	{
		cout << rsp[i] << "  ";
	}
	cout << endl;

	//检查错误码
	if (rsp[3] != '8')
	{
		for (int i = 7; i < revLENGTH - 2; i += 4)
		{
			databuff[(i - 7) / 4] = ((prvucMBCHAR2BIN(rsp[i]) & 0x0F) << 12) |
				((prvucMBCHAR2BIN(rsp[i + 1]) & 0x0F) << 8) |
				((prvucMBCHAR2BIN(rsp[i + 2]) & 0x0F) << 4) |
				((prvucMBCHAR2BIN(rsp[i + 3])) & 0x0F);
		}
		int datanb = (revLENGTH - 2 - 7) / 4;
		cout << "datanb:" << datanb << endl;
		cout << "0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t" << endl;
		//cout << "regs : \t" << regs << endl;
		for (int i = 0; i < datanb; i++)
		{
			cout << databuff[i] << "\t";
		}
		cout << endl;
		return datanb;
	}
	else
	{
		int errnum = (((prvucMBCHAR2BIN(rsp[5]) & 0x0F) << 4) |
			((prvucMBCHAR2BIN(rsp[6])) & 0x0F));
		cout << "\n错误码：" << errnum << endl;
		switch (errnum)
		{
			/*case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:*/
		default:
			cout << "\n未定义错误码。" << errnum << endl;
			system("pause");
			break;
		}
		return -1;
	}
}

int writeholdreg()
{
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
	for (int i = 1; i < LENGTH; i++)
	{
		cout << (int)datatestascii[i] << "  ";
	}
	cout << endl;
	//LRC
	asciiLRC = 0;
	for (int i = 1; i < LENGTH; i = i + 2)
	{
		asciiLRC += (UCHAR)((int)(datatestascii[i] * 16) + (int)(datatestascii[i + 1]));
		cout << i << "\t" << (int)asciiLRC << endl;
	}
	asciiLRC = (UCHAR)(256 - asciiLRC % 256);
	cout << "asciiLRC: " << (int)asciiLRC << endl;
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