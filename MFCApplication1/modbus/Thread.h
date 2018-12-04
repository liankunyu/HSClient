//#include "./stdafx.h"
/* ----------------------- Static variables ---------------------------------*/

static HANDLE   hPollThread;
static CRITICAL_SECTION hPollLock;
static enum ThreadState
{
	STOPPED,
	RUNNING,
	SHUTDOWN
} ePollThreadState;

/* ----------------------- Static functions ---------------------------------*/

//#ifdef __cplusplus
//	extern "C" {
//#endif

static BOOL     bCreatePollingThread(void);
static enum ThreadState eGetPollingThreadState(void);
static void     eSetPollingThreadState(enum ThreadState eNewState);
static DWORD WINAPI dwPollingThread(LPVOID lpParameter);
static UCHAR prvucMBLRC(UCHAR * pucFrame, USHORT usLen);
static UCHAR prvucMBBIN2CHAR(UCHAR ucByte);
static UCHAR prvucMBCHAR2BIN(UCHAR ucCharacter);
//
//#ifdef __cplusplus
//	};
//#endif