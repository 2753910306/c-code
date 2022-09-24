#include<iostream>
#include"myfun.h"
using namespace std;

int main()
{
	int n;
	cout << "请输入任意一个整数：";
	cin >> n;
	if (prime(n))
		cout << "是素数！" << endl;
	else
		cout << "不是素数！" << endl;
}