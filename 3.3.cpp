#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double f, c;
	cout << "�����뻪���¶ȣ�";
	cin >> f;
	cout << "�����¶�Ϊ��";
	c = 5.0 / 9 * (f - 32);
	cout <<fixed<<setprecision(2) << c;
	return 0;
}