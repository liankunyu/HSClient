#include <stdio.h>
#include "tinyxml.h"
#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include <windows.h>
#include <atlstr.h>
using namespace std;

class opXML
{
public:
	TiXmlDocument *pDoc;
	string xmlfile;
	opXML(string XmlFile);
	virtual ~opXML();
	CString GetAppPath();
	bool CreateXmlFile(string& filePath);//����xml�ļ�,szFilePathΪ�ļ������·��,�������ɹ�����true,����false
	bool ReadXmlFile(string& szFileName);//��ȡXml�ļ���������
	bool GetNodePointerByName(TiXmlElement* pRootEle, string &strNodeName, TiXmlElement* &Node);//��ȡ�����ڵ�ֵ
	bool OpenFile();//��XML�ĵ�
	bool SaveFile();//����XML�ĵ�
	bool ModifyNode(string strNodeName, string strText);//�޸ĵ����ڵ�ֵ
	bool QueryNode_Text(string strNodeName,const char* &strText);//��ȡ�ڵ��ı�
	bool QueryNodeAttribute(string strNodeName, string &strAttName, string &strAttValue);//��ȡ�ڵ㵥������ֵ
	bool QueryNode_Attribute(string strNodeName,map<string, string> &AttMap);//��ȡ�ڵ���������ֵ
	bool DelNode(string strNodeName); //ɾ���ڵ����
	bool AddNode_Text(string strParNodeName, string strNodeName, string strText);//���ӽڵ�
	bool ModifyNode_Attribute(string strNodeName,map<string,string> &AttMap);//�޸Ľڵ�����ֵ
    void Encode(string &str);//����
	static string numtoString(double x);//doubleתstring
};

