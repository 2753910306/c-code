#include<iostream>
using namespace std;

int main()
{
	long long num;
	int t = 0;
	int i = 0;
	cout << "����������������";
	cin >> num;
	do
	{
		cout << num % 10;
		t++;
	} while (num /= 10);
	return 0;
}