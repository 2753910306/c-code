#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	cout << "请输入任意一个数字：";
	cin >> n;
	int i, j;
	long long sum = 0, count = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			count *= j;
		}
		sum += count;
		count = 1;
		if (i < n)
		{
			cout << i << '!' << '+';
		}
		else
			cout << i << '!';
	}
	cout << "=" << sum;
	return 0;
}