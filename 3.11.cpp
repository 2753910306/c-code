#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "��������ĳɼ���";
	cin >> num;
	if (num > 100 || num < 0)
	{
		cout << "��������������������ȷ�ĳɼ�����Χ��0��100����";
	}
	else
	{
		cout << "���ĳɼ��ȼ�Ϊ��";
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