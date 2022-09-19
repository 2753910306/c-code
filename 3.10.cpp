#include<iostream>
using namespace std;

int main()
{
	float y, x;
	cout << "x=";
	cin >> x;
	cout << "y=";
	if (x < 1)
	{
		cout << x;
	}
	else if (x >= 1 && x < 10)
	{
		cout << 2 * x - 1;
	}
	else if (x >= 10)
	{
		cout << 3 * x - 11;
	}
	cout << endl;
	return 0;
}