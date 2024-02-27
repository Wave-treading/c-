#include<iostream>
#define month 12//define定义的宏常量
using namespace std;
int main()
{
	const int a = 10;
	//输出
	cout << "hello world" << endl;
	cout << "一年有：" << month << "月" << endl;
	cout << "a=" << a << endl;
	cout << "int:" << sizeof(int) << endl;
	//浮点型（实型）
	//默认最多打印六位有效数字
	float f1 = 13.1415926f;
	cout << "f1:" << f1 << endl;
	double f2 = 3.1415926;
	cout << "f2:" << f2 << endl;
	float f3 = 3e2f;
	cout << "f3:" << f3 << endl;
	float f4 = 3e-2f;
	cout << "f4:" << f4 << endl;
    //字符型
	char ch = 'h';
	cout << "ch:" << (int)ch << endl;
	//转义字符
	cout << "asdf\n" << endl<<endl;//endl换行
	cout << "qwer\tas" << endl;
	cout << "qw\tas" << endl;
	cout << "\\" << endl;

	system("pause");
	return 0;
}