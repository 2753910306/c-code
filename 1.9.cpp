#include<iostream>
using namespace std;

int add(int x, int  y);
int main()
{
	int a, b;
	int c;
	cin >> a >> b;
	c = add(a, b);
	cout << "a+b=" << c << endl;
	return 0;
}

int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}