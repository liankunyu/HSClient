
// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��ĳЩ�����������ɷ��ĺ��Եľ�����Ϣ������
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ

#include <string>
#include <afxdisp.h>        // MFC �Զ�����

#include "SkinH.h"
#pragma comment(lib, "SkinH.lib")
//#pragma comment(lib,"modbus.lib")

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // �������Ϳؼ����� MFC ֧��


#include <afxsock.h>            // MFC �׽�����չ



//#import "c:\Program Files\Common Files\System\ado\msado15.dll" no_namespace rename("EOF", "adoEOF") rename("BOF", "adoBOF")



#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif
#include "modbus/stdint.h"
using namespace std;
extern double beijingban[1024];//���ڱ���������ȫ�����������beijingban�����ȡ���洢���·�XML�ļ����ݡ�
extern double beijingyuzhisheding[1024];//������ֵ����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double blingmin[1024];//B�����Ƚ���ȫ�ֱ����������飬��ȡ���洢���·�XML�ļ�����
extern double bzengyisheding[1024];//B�����趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double caitu[1024];//��ͼ����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double famen[1024];//���Ų��Խ���ȫ�������������ȡ���洢���·�XML�ļ�����
extern double fuzhugongneng[1024];
extern double glingmin[1024];//G�����Ƚ���ȫ�������������ȡ���洢���·�XML�ļ�����
extern double gzengyisheding[1024];//G�������ȫ�������������ȡ���洢���·�XML�ļ�����
extern double huidu1sheding[1024];//�Ҷ�1�趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double huidu2sheding[1024];//�Ҷ�2�趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double huiduhuluesheding[1024];//�ҶȺ����趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double hunselingmin[1024];//��ɫ�����趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double liuliang[1024];//�����趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double mian[1024];//����趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double mianjiweitiaosd[1024];//����趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double moshixuanzesd[1024];//ģʽѡ���趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double pingyisheding[1024];//ƽ���趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double qinghui[1024];//����趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double quyu[1024];//����2�趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double quyusansd[1024];//����3�趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double quyusisd[1024];//����4�趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double quyuwusd[1024];//����5�趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double rlingmin[1024];//R�������趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double rzengyi[1024];//R�����趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double shen[1024];//���1�趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double shendu2[1024];//���2�趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern uint16_t vga[1024];//VGA�趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double xiangji[1024];//����趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double xingxuanlingmindusd[1024];//��ѡ�������趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double xingxuansd[1024];//��ѡ�趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double yanchisheding[1024];//�ӳ��趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double yansehangmianjisd[1024];//��ɫ������趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double yanse[1024];//����1�趨����ȫ�������������ȡ���洢���·�XML�ļ�����
extern double yanseminganqiangdusd[1024];//��ɫ����ǿ�Ƚ���ȫ�������������ȡ���洢���·�XML�ļ�����
extern int photoNum;
extern int mod[1024];//MOD�趨����ȫ�������������ȡ���洢���·�XML�ļ�����


extern uint16_t datatestDPU[200]; //= { 32,3,0,10,0,0,0,145,0,0,0,0,0,0,0, };//10���Ƶ�ԭʼ����
extern int allData[30][1024];//allData[0][100]�����ڵ�ַΪ100�ĵط���ֵ��allData[1][100]�����һ������ڵ�ַΪ100����ֵ��һ������
extern uint16_t databuff[200];//��ȡ������
//extern char recBuffer[2 * 1024];
//extern char cacheBuffer[5 * 1024 * 1024];
extern int falg;
extern bool quanxian;  //�����ж��Ƿ�Ϊ����ר����ʾ�ı�־����Ϊtrue������ʾ����ר�õĲ���
extern bool sexuanfangan; //�����л�����ʱ���ö�ʱ��ˢ�½���
extern bool famencs;      //���ڷ��Ų����˳�����ʱ����famencs���ó�true���ٴν���ʱ�����ϴμ�¼��״̬
extern string lang;       //������ѡ���ȫ�ֱ���
extern CString modsd[1024];        //��������һ����������������...
extern CString liuliangsd[1024];   //��������һ����������������...
extern CString zhendong[1024];     //�����ڱ���������������Ŀ���״̬����ϵͳ��ʼ��ʱ�����·���ָ��
extern CString fuzhusd[1024];      //���ڱ��渨�����汳����״̬��������״̬�·������ذ�
extern CString vgasd[1024];        //���ڱ���ÿ�����VGA״̬�������·���ÿ�����
extern double blingminf[1024];     //  B�����ȷ���
extern double glingminf[1024];     //  G�����ȷ���
extern double rlingminf[1024];     //  R�����ȷ���
extern double hunlingminf[1024];   //  ��ɫ�����ȷ���
extern double quyuf[1024];         //  ����һ����
extern double quyuerf[1024];       //  ���������
extern double quyusanf[1024];      //  ����������
extern double quyusif[1024];       //  �����ķ���
extern double quyuwuf[1024];       //  ���������
extern double shenduf[1024];       //  ��ȷ���
extern double shenduerf[1024];     //  ��ȶ�����
extern double huif[1024];          //  �Ҷȷ���
extern double huierf[1024];        //  �Ҷȶ�����
extern double addSW;               //  �㷨��ַ�л�
extern int fanhuizhi;           //����ֵ�����ݷ���ֵ�ж�ͨ��״̬
extern int tongdaohao;           //ͨ����ţ����ݴ�ֵ��ͨ�������жϵ�ǰ��ȡ��ͨ��
extern int tongdaoflag;           //ͨ��flag�����ݴ�ֵ��ͨ�������жϵ�ǰ��ȡ��ͨ��
extern int tongxincuowu[30];          //���ڴ洢ͨ�Ŵ���
extern double shudu[1];                //���ݶ�ȡ�������ֵ��������Ҫ��ȫ�ֱ�������
extern bool kaishida;                  //���ڱ���������ڿ�ʼ����ֹͣ��״̬
extern CString m_moshi;                //���ڱ��浱ǰɫѡ����   
extern int Device_ID;             //�豸��ʶ
extern CString server_IP;             //������IP
extern CString server_Port;             //�������˿ں�
extern int SWlang;             //�����ж��Ƿ���������л�����Ϊ�����л����������棬Ϊ���������л����ܹ������н������ˢ�£�����������͸߼��趨���һ����ʱ�������л�����