#include<iostream>
using namespace std;
#include<string>
//分别用普通写法和多态技术实现计算器
//普通写法
class Calculator
{
public:
	int getResult(string oper)
	{
		if(oper == "+")
		{
			return  m_Num1 +  m_Num2;
		}
		else if(oper == "-")
		{
			return  m_Num1 -  m_Num2;
		}
		else if(oper == "*")
		{
			return  m_Num1 *  m_Num2;
		}
	}
	int m_Num1;//操作数1
	int m_Num2;//操作数2
};

void test01()
{
	//创建计算器对象
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout<<"普通法计算："<<endl;
	cout<<c.m_Num1<<"+"<<c.m_Num2<<"="<<c.getResult("+")<<endl;
	cout<<c.m_Num1<<"-"<<c.m_Num2<<"="<<c.getResult("-")<<endl;
	cout<<c.m_Num1<<"*"<<c.m_Num2<<"="<<c.getResult("*")<<endl;
	cout<<endl;
}

//利用多态实现计算器
//实现计算器抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num3;
	int m_Num4;
};
//加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num3 + m_Num4;
	}
};
//减法计算器类
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num3 - m_Num4;
	}
};
//乘法计算器类
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num3 * m_Num4;
	}
};
void test02()
{
	cout<<"多态法计算："<<endl;
	//加法计算
	AbstractCalculator * abc = new AddCalculator;
	abc->m_Num3 = 10;
	abc->m_Num4 = 10;
	cout<<abc->m_Num3<<"+"<<abc->m_Num4<<"="<<abc->getResult()<<endl;
	delete abc;

	//减法计算
	abc = new SubCalculator;
	abc->m_Num3 = 10;
	abc->m_Num4 = 10;
	cout<<abc->m_Num3<<"-"<<abc->m_Num4<<"="<<abc->getResult()<<endl;
	delete abc;

	//乘法计算
	abc = new MulCalculator;
	abc->m_Num3 = 10;
	abc->m_Num4 = 10;
	cout<<abc->m_Num3<<"*"<<abc->m_Num4<<"="<<abc->getResult()<<endl;
	delete abc;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}