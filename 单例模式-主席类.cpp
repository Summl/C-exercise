#include<iostream>
using namespace std;
//单例模式：通过一个类只能使用唯一的一个对象
//主席类
class Chairman
{
public:
	//3.将唯一的指针私有化后，提供公共的接口变为只读状态
	static Chairman * getInstance()
	{
		return singleMan;
	}

	//1.将默认构造函数私有化
private:
	Chairman()
	{
		cout<<"Chairman构造函数调用"<<endl;
	}

	//4.将拷贝构造函数私有化
	Chairman(const Chairman&){}
private:
	//2.只要拿到一个对象的指针即可，这个指针可以指向唯一的一个对象
	static Chairman * singleMan;
};

Chairman * Chairman::singleMan = new Chairman;

void test01()
{
	Chairman * c1 = Chairman::getInstance();
	Chairman * c2 = Chairman::getInstance();
	if(c1==c2)
	{
		cout<<"c1==c2"<<endl;
	}
	else
	{
		cout<<"c1!=c2"<<endl;
	}
}

int main()
{
	cout<<"main函数调用"<<endl;
	test01();
	system("pause");
	return 0;
}