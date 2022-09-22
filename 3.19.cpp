#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int m;
	int i;
	cout << "水仙花数为：";
	for (i = 100; i < 1000; i++)
	{
		if (i == pow(i % 10, 3) + pow(i / 10 % 10, 3) + pow(i / 100 % 10, 3))
		{
			cout  << i<<setw(4);
		}
	}
	return 0;
}