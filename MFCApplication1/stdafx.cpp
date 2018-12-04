
// stdafx.cpp : 只包括标准包含文件的源文件
// MFCApplication1.pch 将作为预编译头
// stdafx.obj 将包含预编译类型信息

#include "stdafx.h"
double beijingban[1024] = { 0 };
double beijingyuzhisheding[1024] = { 0 };
double blingmin[1024] = { 0 };
double bzengyisheding[1024] = { 0 };
double caitu[1024] = { 0 };
double famen[1024] = { 0 };
double fuzhugongneng[1024] = { 0 };
double glingmin[1024] = { 0 };
double gzengyisheding[1024] = { 0 };
double huidu1sheding[1024] = { 0 };
double huidu2sheding[1024] = { 0 };
double huiduhuluesheding[1024] = { 0 };
double hunselingmin[1024] = { 0 };
double liuliang[1024] = { 0 };
double mian[1024] = { 0 };
double mianjiweitiaosd[1024] = { 0 };
double moshixuanzesd[1024] = { 0 };
double pingyisheding[1024] = { 0 };
double qinghui[1024] = { 0 };
double quyu[1024] = { 0 };
double quyusansd[1024] = { 0 };
double quyusisd[1024] = { 0 };
double quyuwusd[1024] = { 0 };
double rlingmin[1024] = { 0 };
double rzengyi[1024] = { 0 };
double shen[1024] = { 0 };
double shendu2[1024] = { 0 };
uint16_t vga[1024] = { 0 };
double xiangji[1024] = { 0 };
double xingxuanlingmindusd[1024] = { 0 };
double xingxuansd[1024] = { 0 };
double yanchisheding[1024] = { 0 };
double yansehangmianjisd[1024] = { 0 };
double yanse[1024] = { 0 };
double yanseminganqiangdusd[1024] = { 0 };
int photoNum = 32;
int mod[1024] = { 0 };

uint16_t datatestDPU[200] = { 32,3,0,10,0,0,0,0,0,0,0,0,0,0,0, };//10进制的原始命令
//uint16_t datatestDPU[200]= { 32,3,0,10,0,0,0,0,0,0,0,0,0,0,0, };//10进制的原始命令
//                           3是读holding 4读input   16写多个holding

int allData[30][1024] = { 0 };//第一位偏移31 ，若allData[2][100],为站号为1+32的相机，其地址100处的值。

uint16_t databuff[200] = { 0 };
//
//char recBuffer[2*1024] = { 0 };
//char cacheBuffer[5 * 1024 * 1024] = { 0 };
int falg = 0;
bool quanxian=false;
bool sexuanfangan = false;
bool famencs = false;
string lang = "chinese.xml";
CString modsd[1024] = { 0 };
CString liuliangsd[1024] = {0};
CString zhendong[1024] = {L"OFF",L"OFF",L"OFF"};
CString fuzhusd[1024] = {0};
CString vgasd[1024] = {0};
double blingminf[1024] = {0};
double glingminf[1024] = { 0 };
double rlingminf[1024] = { 0 };
double hunlingminf[1024] = { 0 };
double quyuf[1024] = {0};    //  区域一分量
double quyuerf[1024] = {0};    //  区域二分量
double quyusanf[1024] = {0};    //  区域三分量
double quyusif[1024] = {0};    //  区域四分量
double quyuwuf[1024] = {0};    //  区域五分量
double shenduf[1024] = {0};    //  深度分量
double shenduerf[1024] = {0};    //  深度二分量
double huif[1024] = {0};    // 灰度分量
double huierf[1024] = {0};    //  灰度二分量
double addSW=0;         //  算法地址切换
int  fanhuizhi = 0;     //返回值，通过返回值判断通信状态
int tongdaohao = 1;     
int tongdaoflag = 1;
int tongxincuowu[30] = {0}; //初始化时存储通信状态，记录通信错误
double shudu[1] = { 0 };    
bool kaishida = false;
CString m_moshi = L"moshi1";
int Device_ID=18032803;             //设备标识
extern CString server_IP=L"127.0.0.1";             //服务器IP
extern CString server_Port=L"9999";             //服务器端口号
extern int SWlang=0;                    //用于判断是否进行语言切换