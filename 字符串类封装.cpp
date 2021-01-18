#include<iostream>
using namespace std;
#include"myString.h"

void test01()
{
	MyString str1 = "abcd";
	MyString str2 = str1;
	cout<<"str1 = "<<str1<<endl;
	cout<<"str2 = "<<str2<<endl;
	cout<<"请重新给str赋值"<<endl;
	cin>>str1;
	cout<<"str1="<<str1<<endl;
	cout<<endl;
}

void test02()
{
	MyString str1 = "abc";
	MyString str2 = "def";
	str1 = str2;
	cout<<"str1="<<str1<<endl;
	str1="ghi";
	cout<<"str1="<<str1<<endl;
	cout<<endl;
}

void test03()
{
	MyString str1 = "bcd";
	cout<<"str1="<<str1<<endl;
	cout<<"str1[0]="<<str1[0]<<endl;
	str1[0]='z';
	cout<<"第一个字符改为z之后str1的结果为："<<endl;
	cout<<"str1="<<str1<<endl;
	cout<<endl;
}
void test04()
{
	MyString str1 = "abc";
	MyString str2 = "def";
	MyString str3 = str1 + str2;
	MyString str4 = str1 + "ghi";
	cout<<"str3="<<str3<<endl;
	cout<<"str4="<<str4<<endl;
	cout<<endl;
}
void test05()
{
	MyString str1 = "abc";
	MyString str2 = "abc";
	if(str1 == str2)
	{
		cout<<"str1 == str2"<<endl;
	}
	else
	{
		cout<<"str1 != str2"<<endl;
	}
	if(str1 == "abc")
	{
		cout<<"str1 == abc"<<endl;
	}
	else
	{
		cout<<"str1 != abc"<<endl;
	}
}
int main()
{
	test01();
	test02();
	test03();
	test04();
	test05();
	system("pause");
	return 0;
}