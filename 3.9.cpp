#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "请输入任意三个整数：";
	cin >> a >> b >> c;
	cout << "最大值为：";
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