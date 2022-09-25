#include<iostream>
#include"myfun.h"
using namespace std;

int main()
{
	int a, b, c;
	cout << "请输入三个整数：";
	cin >> a >> b >> c;
	cout << a << "!+" << b << "!+" << c << "!=";
	cout << fac(a) + fac(b) + fac(c) << endl;
	return 0;
}