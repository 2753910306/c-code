#include <cassert>
#include "calc.h"
using namespace std;

void Test_1();
void Test_2();
void Test_3();
void Test_4();
void Test_5();
void Test(void)
{
	cout << "��ʼ����:\n";
	//ִ�����в��Ժ���
	Test_1();
	Test_2();
	Test_3();
	Test_4();
	Test_5();
	cout << "���в���ͨ��"<<endl;
}
void Test_1()
{
	long double n = 10000000000000.15;
	calc(n);
}
void Test_2() 
{
	calc(10000000000.11);
}
void Test_3() 
{
	calc(10000000.21);
}
//TODO::����������
void Test_4() 
{
	calc(1000000.38);
}
void Test_5()
{
	calc(10000.09);
}

