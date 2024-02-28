#include<iostream>
using namespace std;
int main()
{
	//字符串类型
	//1.c风格
	char str1[] = "hello world";
	cout << str1 << endl;
	//2.c++风格
	string str2 = "hello world";
	cout << str2 << endl;

	//bool类型
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	cout << "bool类型所占空间:" << sizeof(bool) << endl;

	//数据的输入
	int i = 0;
	cout << "请给整型变量i赋值：" << endl;
	cin >> i;
	cout << "整型变量i=" << i << endl;

	//数据的相加
	int a = 10;
	int b = 20;
	cout << (a == b) << endl;

	//逻辑非
	int c = 10;
	cout << !c << endl;
	cout << !!c << endl;

	//if语句
	int score;
	cout << "请输入分数：" << endl;
	cin >> score;
	 if (score > 60)
	 {
		 if (score > 90)
			 cout << "优秀" << endl;
		 if (score > 80)
			 cout << "良好" << endl;
		 else
			 cout << "及格" << endl;
	 }
	else
		cout << "不及格" << endl;
	return 0;
}
