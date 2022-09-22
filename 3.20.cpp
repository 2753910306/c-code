#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n = 1000;
	int count = 1;
	int arr[1000] = { 0 };
	arr[0] = 1;
	int m = 1;
	int i = 0;
	int j = 0;
	int t = 0;
	for (i = 1; i < n; i++)
	{
		for (j = sqrt(i); j < i; j++)
		{
			if (i % j == 0)
			{
				if (j != 1)
				{
					count += j;
					arr[m++] = j;
				}

			}
		}
		if (count == i)
		{
			cout << i << ",its factors are ";
			for (t = 0; t < m; t++)
			{
				if (t != m -1 )
				{
					cout << arr[t] << ',';
				}
				else
				{
					cout << arr[t] << endl;
				}
				if (t != 0)
				{
					arr[t] = 0;
				}
			}
		}
		m = 1;
		count = 1;
	}
	return 0;
}