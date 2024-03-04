#include<iostream>
#include"calc.h"
#include"test.h"
using namespace std;

int main()
{
	_Test();
	while (1)
	{
		cout << "\nÇëÊäÈëÊý×Ö£º";
		long double n;
		cin >> n;
		Calc c1(n);
		c1.Calc_Init();
		c1.convert();
		c1.print_Hanzi();
	}
	return 0;
}