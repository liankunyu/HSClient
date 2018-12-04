
// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 从 Windows 头中排除极少使用的资料
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 某些 CString 构造函数将是显式的

// 关闭 MFC 对某些常见但经常可放心忽略的警告消息的隐藏
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC 核心组件和标准组件
#include <afxext.h>         // MFC 扩展

#include <string>
#include <afxdisp.h>        // MFC 自动化类

#include "SkinH.h"
#pragma comment(lib, "SkinH.lib")
//#pragma comment(lib,"modbus.lib")

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC 对 Internet Explorer 4 公共控件的支持
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC 对 Windows 公共控件的支持
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // 功能区和控件条的 MFC 支持


#include <afxsock.h>            // MFC 套接字扩展



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
extern double beijingban[1024];//用于背景板界面的全局数组变量，beijingban数组读取、存储、下发XML文件数据。
extern double beijingyuzhisheding[1024];//背景阈值界面全局数组变量，读取、存储、下发XML文件数据
extern double blingmin[1024];//B灵敏度界面全局变量数组数组，读取、存储、下发XML文件数据
extern double bzengyisheding[1024];//B增益设定界面全局数组变量，读取、存储、下发XML文件数据
extern double caitu[1024];//采图界面全局数组变量，读取、存储、下发XML文件数据
extern double famen[1024];//阀门测试界面全局数组变量，读取、存储、下发XML文件数据
extern double fuzhugongneng[1024];
extern double glingmin[1024];//G灵敏度界面全局数组变量，读取、存储、下发XML文件数据
extern double gzengyisheding[1024];//G增益界面全局数组变量，读取、存储、下发XML文件数据
extern double huidu1sheding[1024];//灰度1设定界面全局数组变量，读取、存储、下发XML文件数据
extern double huidu2sheding[1024];//灰度2设定界面全局数组变量，读取、存储、下发XML文件数据
extern double huiduhuluesheding[1024];//灰度忽略设定界面全局数组变量，读取、存储、下发XML文件数据
extern double hunselingmin[1024];//混色灵敏设定界面全局数组变量，读取、存储、下发XML文件数据
extern double liuliang[1024];//流量设定界面全局数组变量，读取、存储、下发XML文件数据
extern double mian[1024];//面积设定界面全局数组变量，读取、存储、下发XML文件数据
extern double mianjiweitiaosd[1024];//面积设定界面全局数组变量，读取、存储、下发XML文件数据
extern double moshixuanzesd[1024];//模式选择设定界面全局数组变量，读取、存储、下发XML文件数据
extern double pingyisheding[1024];//平移设定界面全局数组变量，读取、存储、下发XML文件数据
extern double qinghui[1024];//清灰设定界面全局数组变量，读取、存储、下发XML文件数据
extern double quyu[1024];//区域2设定界面全局数组变量，读取、存储、下发XML文件数据
extern double quyusansd[1024];//区域3设定界面全局数组变量，读取、存储、下发XML文件数据
extern double quyusisd[1024];//区域4设定界面全局数组变量，读取、存储、下发XML文件数据
extern double quyuwusd[1024];//区域5设定界面全局数组变量，读取、存储、下发XML文件数据
extern double rlingmin[1024];//R灵敏度设定界面全局数组变量，读取、存储、下发XML文件数据
extern double rzengyi[1024];//R增益设定界面全局数组变量，读取、存储、下发XML文件数据
extern double shen[1024];//深度1设定界面全局数组变量，读取、存储、下发XML文件数据
extern double shendu2[1024];//深度2设定界面全局数组变量，读取、存储、下发XML文件数据
extern uint16_t vga[1024];//VGA设定界面全局数组变量，读取、存储、下发XML文件数据
extern double xiangji[1024];//相机设定界面全局数组变量，读取、存储、下发XML文件数据
extern double xingxuanlingmindusd[1024];//型选灵敏度设定界面全局数组变量，读取、存储、下发XML文件数据
extern double xingxuansd[1024];//型选设定界面全局数组变量，读取、存储、下发XML文件数据
extern double yanchisheding[1024];//延迟设定界面全局数组变量，读取、存储、下发XML文件数据
extern double yansehangmianjisd[1024];//颜色行面积设定界面全局数组变量，读取、存储、下发XML文件数据
extern double yanse[1024];//区域1设定界面全局数组变量，读取、存储、下发XML文件数据
extern double yanseminganqiangdusd[1024];//颜色敏感强度界面全局数组变量，读取、存储、下发XML文件数据
extern int photoNum;
extern int mod[1024];//MOD设定界面全局数组变量，读取、存储、下发XML文件数据


extern uint16_t datatestDPU[200]; //= { 32,3,0,10,0,0,0,145,0,0,0,0,0,0,0, };//10进制的原始命令
extern int allData[30][1024];//allData[0][100]主板在地址为100的地方的值，allData[1][100]代表第一个相机在地址为100处的值，一次类推
extern uint16_t databuff[200];//收取的数据
//extern char recBuffer[2 * 1024];
//extern char cacheBuffer[5 * 1024 * 1024];
extern int falg;
extern bool quanxian;  //用于判断是否为调试专用显示的标志，若为true，则显示调试专用的部分
extern bool sexuanfangan; //用于切换界面时，用定时器刷新界面
extern bool famencs;      //用于阀门测试退出界面时，将famencs设置成true，再次进入时开启上次记录的状态
extern string lang;       //多语言选择的全局变量
extern CString modsd[1024];        //用于区分一次流量，二次流量...
extern CString liuliangsd[1024];   //用于区分一次流量，二次流量...
extern CString zhendong[1024];     //仅用于保存各个界面振动器的开关状态，在系统初始化时不向下发送指令
extern CString fuzhusd[1024];      //用于保存辅助界面背景灯状态，开机将状态下发至主控板
extern CString vgasd[1024];        //用于保存每个相机VGA状态，开机下发至每个相机
extern double blingminf[1024];     //  B灵敏度分量
extern double glingminf[1024];     //  G灵敏度分量
extern double rlingminf[1024];     //  R灵敏度分量
extern double hunlingminf[1024];   //  混色灵敏度分量
extern double quyuf[1024];         //  区域一分量
extern double quyuerf[1024];       //  区域二分量
extern double quyusanf[1024];      //  区域三分量
extern double quyusif[1024];       //  区域四分量
extern double quyuwuf[1024];       //  区域五分量
extern double shenduf[1024];       //  深度分量
extern double shenduerf[1024];     //  深度二分量
extern double huif[1024];          //  灰度分量
extern double huierf[1024];        //  灰度二分量
extern double addSW;               //  算法地址切换
extern int fanhuizhi;           //返回值，依据返回值判断通信状态
extern int tongdaohao;           //通道编号，依据此值在通道界面判断当前读取的通道
extern int tongdaoflag;           //通道flag，依据此值在通道界面判断当前读取的通道
extern int tongxincuowu[30];          //用于存储通信错误
extern double shudu[1];                //数据读取界面的数值修正必须要有全局变量传参
extern bool kaishida;                  //用于保存相机处于开始打还是停止打状态
extern CString m_moshi;                //用于保存当前色选方案   
extern int Device_ID;             //设备标识
extern CString server_IP;             //服务器IP
extern CString server_Port;             //服务器端口号
extern int SWlang;             //用于判断是否进行语言切换，因为语言切换不在主界面，为了在语言切换后能够将所有界面进行刷新，故在主界面和高级设定添加一个定时器用于切换语言