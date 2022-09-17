#include<iostream>
using namespace std;

int main()
{
	int a = 12;
	
	cout << a+a << '\n';
	cout << a-3 << '\n';
	cout << a*(2 + 3 )<< '\n';
	cout << a / (a + a) << '\n';
	cout << a % (5 % 2) << '\n';
	a += a -= a *= a;
	cout << a << '\n'<<endl;
	return 0;
}