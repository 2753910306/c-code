#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n, m;
	cout << "请输入任意两个数：";
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
	cout << "最大公约数为：" << m << endl;
	cout << "最小公倍数为：" << i * j / m << endl;
	return 0;
}