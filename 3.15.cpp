#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n, m;
	cout << "������������������";
	cin >> n >> m;
	int i = n, j = m;
	int t = 0;
	if (n > m)
	{
		t = n;
		n = m;
		m = t;
	}
	while (n != 0)
	{
		t = n;
		n = m % n;
		m = t;
	}
	cout << "���Լ��Ϊ��" << m << endl;
	cout << "��С������Ϊ��" << i * j / m << endl;
	return 0;
}