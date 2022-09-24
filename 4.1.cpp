#include<iostream>
#include"myfun.h"
using namespace std;

int main()
{
	cout << "请输入任意两个正整数：";
	int n;
	int m;
	cin >> n >> m;
	cout << "最大公约数为：" << gcd(n, m) << endl;
	cout << "最小公倍数为：" << least(n, m) << endl;
	return 0;
}