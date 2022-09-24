#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int fun(int n);
	cout << fun(10);
	return 0;
}
int fun(int n)
{
	int t = 1;
	while(--n)
	{
		t = (t + 1) * 2;
	}
	return t;
}