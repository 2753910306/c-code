#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d =0;
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A' && ch <= 'z')
			a++;
		else if (ch == ' ')
			b++;
		else if (ch >= '0' && ch <= '9')
			c++;
		else
			d++;
	}
	cout << "Ӣ����ĸ������" << a << endl;
	cout << "�ո�����" << b << endl;
	cout << "��������" << c << endl;
	cout << "�����ַ�����" << d << endl;
	return 0;
}