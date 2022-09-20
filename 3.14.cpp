#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[4]={0};
	cout << "请输入任意四个数：";
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	cout << "从小到大排序后为：";
	int i, j;
	int t;
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (i = 0; i < 4; i++)
		cout <<setiosflags(ios::left)<< a[i]<<"  ";
	return 0;
}