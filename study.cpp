#include<iostream>
#define month 12//define����ĺ곣��
using namespace std;
int main()
{
	const int a = 10;
	//���
	cout << "hello world" << endl;
	cout << "һ���У�" << month << "��" << endl;
	cout << "a=" << a << endl;
	cout << "int:" << sizeof(int) << endl;
	//�����ͣ�ʵ�ͣ�
	//Ĭ������ӡ��λ��Ч����
	float f1 = 13.1415926f;
	cout << "f1:" << f1 << endl;
	double f2 = 3.1415926;
	cout << "f2:" << f2 << endl;
	float f3 = 3e2f;
	cout << "f3:" << f3 << endl;
	float f4 = 3e-2f;
	cout << "f4:" << f4 << endl;
    //�ַ���
	char ch = 'h';
	cout << "ch:" << (int)ch << endl;
	//ת���ַ�
	cout << "asdf\n" << endl<<endl;//endl����
	cout << "qwer\tas" << endl;
	cout << "qw\tas" << endl;
	cout << "\\" << endl;

	system("pause");
	return 0;
}