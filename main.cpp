#include<iostream>
#include<string>
#include"Chinese_digital_interchange.h"
#include"Test.h"

using namespace std;

int main()
{
	while (1)
	{
		label:
		cout << "����1��������ת����ģʽ\n����2��������ת����ģʽ\n����3�˳�" << endl;
		int flag = 0;
		cout << "flag = ";
		cin >> flag;
		if (flag == 1)
		{
			cout << "����ת����ģʽ\n";
			//Test1();
			char c = getchar();//���س��ַ���ȡ����������
			numConv c1;
			c1.input();
			c1.chineseConv();
			c1.print_num();
			cout << endl;
		}
		else if (flag == 2)
		{
			cout << "����ת����ģʽ\n";
			//Test2();
			long double n = 0.0;
			cout << "\n���������֣�\n";
			cin >> n;
			Calc c1(n);
			c1.Calc_Init();
			c1.convert();
			cout << "�����������Ϊ��";
			c1.print_Hanzi();
			cout << endl;
		}
		else if (flag == 3)
		{
			return 0;
		}
		else
		{
			cout << "�������룬���������룡\n\n";
			goto label;
		}
	}
	return 0;
}