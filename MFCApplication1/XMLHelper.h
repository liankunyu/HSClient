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
	bool CreateXmlFile(string& filePath);//创建xml文件,szFilePath为文件保存的路径,若创建成功返回true,否则false
	bool ReadXmlFile(string& szFileName);//读取Xml文件，并遍历
	bool GetNodePointerByName(TiXmlElement* pRootEle, string &strNodeName, TiXmlElement* &Node);//获取单个节点值
	bool OpenFile();//打开XML文档
	bool SaveFile();//保存XML文档
	bool ModifyNode(string strNodeName, string strText);//修改单个节点值
	bool QueryNode_Text(string strNodeName,const char* &strText);//获取节点文本
	bool QueryNodeAttribute(string strNodeName, string &strAttName, string &strAttValue);//获取节点单个属性值
	bool QueryNode_Attribute(string strNodeName,map<string, string> &AttMap);//获取节点所有属性值
	bool DelNode(string strNodeName); //删除节点操作
	bool AddNode_Text(string strParNodeName, string strNodeName, string strText);//增加节点
	bool ModifyNode_Attribute(string strNodeName,map<string,string> &AttMap);//修改节点属性值
    void Encode(string &str);//加密
	static string numtoString(double x);//double转string
};

