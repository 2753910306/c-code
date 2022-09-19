#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "请输入你的成绩：";
	cin >> num;
	if (num > 100 || num < 0)
	{
		cout << "您的输入有误，请输入正确的成绩，范围【0，100】！";
	}
	else
	{
		cout << "您的成绩等级为：";
		switch (num / 10)
		{
		case 9: cout << 'A'; break;
		case 8: cout << 'B'; break;
		case 7: cout << 'C'; break;
		case 6: cout << 'D'; break;
		default: cout << 'E'; break;
		}
	}
	cout << endl;
	return 0;
}