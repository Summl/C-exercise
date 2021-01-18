#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//我的字符串类
class MyString
{
	friend ostream& operator<<(ostream& cout,MyString & str);
	friend istream& operator >>(istream& cin,MyString & str);
public:
	//构造函数
	MyString(const char * str);//MyString str = "abcd";
	//拷贝函数
	MyString(const MyString & str);//MyString str2 = str;

	//重载=
	MyString& operator=(const char * str);
	MyString& operator=(const MyString & str);

	//重载 []
	char& operator[](int pos);

	//重载 +
	MyString operator+(const char * str);
	MyString operator+(const MyString& str);

	//重载==
	bool operator==(const char * str);
	bool operator==(const MyString& str);

	~MyString();
private:
	char * pString;//维护底层堆区开辟的字符数组
	int m_Size;//字符串长度 不计算\0
};