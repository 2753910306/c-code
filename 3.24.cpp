#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "请输入任意一个正整数：";
	cin >> n;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (i <  n / 2)
		{
			for (int j = 0; j < i; j++)
			{
				cout << "* ";
			}
		}
		else
			for (int j = n - i; j > 0; j--)
			{
				cout << "* ";
			}
		cout << '\n';
	}
	return 0;
}