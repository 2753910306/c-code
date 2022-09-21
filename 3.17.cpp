#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a;
	int n;
	int t;
	int flag;
	cout << "请分别输入a和n的值：";
	int sum = 0;
	cin >> a >> n;
	flag = a;
	int i = 0;
	while (i != n)
	{	
		i++;
		if (i < n )
		{
			cout << a << '+';
		}
		else
			cout << a;
		sum += a;
		t = a;
		flag = flag * 10;
		a = flag + t;

	}
	cout << '=' << sum;
	return 0;
}