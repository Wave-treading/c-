#include<iostream>
using namespace std;
int main()
{
	//�ַ�������
	//1.c���
	char str1[] = "hello world";
	cout << str1 << endl;
	//2.c++���
	string str2 = "hello world";
	cout << str2 << endl;

	//bool����
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	cout << "bool������ռ�ռ�:" << sizeof(bool) << endl;

	//���ݵ�����
	int i = 0;
	cout << "������ͱ���i��ֵ��" << endl;
	cin >> i;
	cout << "���ͱ���i=" << i << endl;

	//���ݵ����
	int a = 10;
	int b = 20;
	cout << (a == b) << endl;

	//�߼���
	int c = 10;
	cout << !c << endl;
	cout << !!c << endl;

	//if���
	int score;
	cout << "�����������" << endl;
	cin >> score;
	 if (score > 60)
	 {
		 if (score > 90)
			 cout << "����" << endl;
		 if (score > 80)
			 cout << "����" << endl;
		 else
			 cout << "����" << endl;
	 }
	else
		cout << "������" << endl;
	return 0;
}
