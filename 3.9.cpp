#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "��������������������";
	cin >> a >> b >> c;
	cout << "���ֵΪ��";
	if (a > b)
	{
		if (a > c)
		{
			cout << a;
		}
		else if (b > c)
		{
			cout << b;
		}
		else
			cout << c;

	}
	else if (b > c)
	{
		cout << b;
	}
	else
		cout << c;
	return 0;
}