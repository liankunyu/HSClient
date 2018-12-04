#pragma once


// TONGDAO 对话框

class TONGDAO : public CDialogEx
{
	DECLARE_DYNAMIC(TONGDAO)

public:
	TONGDAO(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~TONGDAO();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TONGDAO_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void ReSize();
	POINT old;
	int xiangjihao; //可以根据tongdaohao来计算前后相机编号
	afx_msg void OnBnClickedCancel();
	double m_double1;
	double m_double2;
	double m_double3;
	double m_double4;
	double m_double5;
	double m_double6;
	double m_double7;
	double m_double8;
	double m_double9;
	double m_double10;
	double m_double11;
	double m_double12;
	double m_double13;
	double m_double14;
	double m_double15;
	double m_double16;
	double m_double17;
	double m_double18;
	double m_double19;
	double m_double20;
	double m_double21;
	double m_double22;
	double m_double23;
	double m_double24;
	double m_double25;
	double m_double26;
	double m_double27;
	double m_double28;
	double m_double29;
	double m_double30;
	double m_double31;
	double m_double32;
	double m_double33;
	double m_double34;
	double m_double35;
	double m_double36;
	double m_double37;
	double m_double38;
	double m_double39;
	double m_double40;
	double m_double41;
	double m_double42;
	double m_double43;
	double m_double44;
	double m_double45;
	double m_double46;
	double m_double47;
	double m_double48;
	double m_double49;
	double m_double50;
	double m_double51;
	double m_double52;
	double m_double53;
	double m_double54;
	double m_double55;
	double m_double56;
	double m_double57;
	double m_double58;
	double m_double59;
	double m_double60;
	double m_double61;
	double m_double62;
	double m_double63;
	double m_double64;
	double m_double65;
	double m_double66;
	double m_double67;
	double m_double68;
	double m_double69;
	double m_double70;
	double m_double71;
	double m_double72;
	double m_double73;
	double m_double74;
	double m_double75;
	double m_double76;
	double m_double77;
	double m_double78;
	double m_double79;
	double m_double80;
	double m_double81;
	double m_double82;
	double m_double83;
	double m_double84;
	double m_double85;
	double m_double86;
	double m_double87;
	double m_double88;
	double m_double89;
	double m_double90;
	double m_double91;
	double m_double92;
	double m_double93;
	double m_double94;
	double m_double95;
	double m_double96;
	double flag;
	afx_msg void OnBnClickedButton1();
};
