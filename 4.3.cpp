#include<iostream>
#include"myfun.h"
using namespace std;

int main()
{
	int n;
	cout << "����������һ��������";
	cin >> n;
	if (prime(n))
		cout << "��������" << endl;
	else
		cout << "����������" << endl;
}