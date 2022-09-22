#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int m = 20;
	float i = 2;
	float j = 1;
	int n;
	double sum = 0;
	for (int t = 0; t < m; t++)
	{
		sum = sum + i / j;
		if (t != m - 1)
		{
			cout << i << '/' << j << '+';
		}
		else
			cout << i << '/' << j << '=';
		n = i;
		i = i + j;
		j = n;
	}
	cout << sum;
	return 0;
}