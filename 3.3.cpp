#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double f, c;
	cout << "请输入华氏温度：";
	cin >> f;
	cout << "摄氏温度为：";
	c = 5.0 / 9 * (f - 32);
	cout <<fixed<<setprecision(2) << c;
	return 0;
}