
// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// MFCApplication1.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

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

uint16_t datatestDPU[200] = { 32,3,0,10,0,0,0,0,0,0,0,0,0,0,0, };//10���Ƶ�ԭʼ����
//uint16_t datatestDPU[200]= { 32,3,0,10,0,0,0,0,0,0,0,0,0,0,0, };//10���Ƶ�ԭʼ����
//                           3�Ƕ�holding 4��input   16д���holding

int allData[30][1024] = { 0 };//��һλƫ��31 ����allData[2][100],Ϊվ��Ϊ1+32����������ַ100����ֵ��

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
double quyuf[1024] = {0};    //  ����һ����
double quyuerf[1024] = {0};    //  ���������
double quyusanf[1024] = {0};    //  ����������
double quyusif[1024] = {0};    //  �����ķ���
double quyuwuf[1024] = {0};    //  ���������
double shenduf[1024] = {0};    //  ��ȷ���
double shenduerf[1024] = {0};    //  ��ȶ�����
double huif[1024] = {0};    // �Ҷȷ���
double huierf[1024] = {0};    //  �Ҷȶ�����
double addSW=0;         //  �㷨��ַ�л�
int  fanhuizhi = 0;     //����ֵ��ͨ������ֵ�ж�ͨ��״̬
int tongdaohao = 1;     
int tongdaoflag = 1;
int tongxincuowu[30] = {0}; //��ʼ��ʱ�洢ͨ��״̬����¼ͨ�Ŵ���
double shudu[1] = { 0 };    
bool kaishida = false;
CString m_moshi = L"moshi1";
int Device_ID=18032803;             //�豸��ʶ
extern CString server_IP=L"127.0.0.1";             //������IP
extern CString server_Port=L"9999";             //�������˿ں�
extern int SWlang=0;                    //�����ж��Ƿ���������л�