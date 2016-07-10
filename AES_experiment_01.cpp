/// AES_experiment_01.cpp : 定义控制台应用程序的入口点。
/// author:syl
/// email :jxjgssylsg@126.com    
///
#include "stdafx.h"

#include "Rijndael.h"
#include <iostream>

using namespace std;
void main()
{
	//string encryt(string content);
	//string decryt(string content);
	try
	{ 
		string Data="上!@，；’。、】海SADF牛津SFDS（深圳）!@#$%^&*(),.,.，，，，；‘【、124-=ASFS小学英语二年级上册SDFASDF";
		//加密模块
        string encrpt_re =encryt(Data);//加密
		cout<<"加密结果  :"<<encrpt_re<<endl;
		//解密模块
        string decrpt_de=decryt(encrpt_re);//解密
		cout<<"解密结果  :"<<decrpt_de<<endl;
		system("pause");
	}catch(exception& roException)
	{
		cout << roException.what() << "出错啦！_"<<endl;
	}
}
	

