#include<iostream>
#include"myfun.h"
using namespace std;

int main()
{
	cout << "����������������������";
	int n;
	int m;
	cin >> n >> m;
	cout << "���Լ��Ϊ��" << gcd(n, m) << endl;
	cout << "��С������Ϊ��" << least(n, m) << endl;
	return 0;
}