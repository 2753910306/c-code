#include"calc.h"
#include<iostream>
void calc(long double a)
{
	int count1 = 0;
	int count2 = 0;
	int count3 = 2;
	const char* chineseNum[10] = { "��","Ҽ","��","��","��","��" ,"½","��","��","��" };
	const char* chinesewei[] = { "", "ʰ", "��", "Ǫ" };
	const char* chineseWei[] = { "", "�f", "��", "�f��" };
	long long t = a;
	double num = (a - t) + 0.000001;
	int num100 = num * 100;
	int xs[2];
	xs[1] = int(num * 100) % 10;
	xs[0] = int(num * 100) / 10 % 10;
	int i = 0;
	while (t > 0)
	{
		t = t / 10;
		count1++;
	}
	int* arr = new int[count1];
	t = a;
	count2 = count1 - 1;
	while (t > 0)
	{
		arr[count2--] = t % 10;
		t = t / 10;

	}
	for (i = 0; i < count1; i++)
	{
		/*��λ*/

		if (count1 - i < 5)
		{
			if (arr[i] == 0)
			{
				if (arr[i + 1] != 0 && i != count1 - 1)
				{
					cout << chineseNum[arr[i]];
				}
			}
			else
			{
				cout << chineseNum[arr[i]];
				digit(count1 - i - 1);
			}
		}
		/*��λ*/
		else if (count1 - i >= 5 && count1 - i < 9)
		{
			if (arr[i] == 0)
			{
				if (arr[i + 1] != 0 && i != count1 - 1 - 4)
				{
					cout << chineseNum[arr[i]];
				}
			}
			else
			{
				cout << chineseNum[arr[i]];
				digit(count1 - i - 1 - 4);
			}
			if (count1 - i == 5)cout << "�f";
		}
		/*��λ*/
		else if (count1 - i >= 9 && count1 - i < 13)
		{
			if (arr[i] == 0)
			{
				if (arr[i + 1] != 0 && i != count1 - 1 - 8)
				{
					cout << chineseNum[arr[i]];
				}
			}
			else
			{
				cout << chineseNum[arr[i]];
				digit(count1 - i - 1 - 8);
			}
			if (count1 - i == 9)cout << "��";
		}
		/*����*/
		else if (count1 - i >= 13 && count1 - i < 17)
		{
			if (arr[i] == 0)
			{
				if (arr[i + 1] != 0 && i != count1 - 1 - 12)
				{
					cout << chineseNum[arr[i]];
				}
			}
			else
			{
				cout << chineseNum[arr[i]];
				digit(count1 - i - 1 - 12);
			}
			if (count1 - i == 13)cout << "�f��";
		}
	}
	cout << "Ԫ";
	/*С��λ*/
	for (i = 0; i < count3; i++)
	{
		if (xs[i] == 0)
		{
			if (xs[i + 1] != 0)
			{
				cout << chineseNum[xs[i]];
				decimal_digit(i);
			}
		}
		else
		{
			cout << chineseNum[xs[i]];
			decimal_digit(i);
		}
	}
	cout << endl;
	cout << fixed << setprecision(2) << endl << a << endl;
	cout << endl;
	delete(arr);
}

void digit(int t)
{
	if (t > 0)
	{
		switch (t)
		{
		case 0:cout << "��"; break;
		case 1:cout << "ʰ"; break;
		case 2:cout << "��"; break;
		case 3:cout << "Ǫ"; break;
		default:break;
		}
	}
}

void decimal_digit(int t)
{
	switch (t)
	{
	case 0:cout << "��"; break;
	case 1:cout << "��"; break;
	default:break;
	}
}

/*�������������0�ĸ���,���ڲ�����*/
int behind_zero_num(int* a, int n)
{
	int count = 0;
	int i = 0;
	for (i = 1; i < n; i++)
	{
		if (a[i - 1] == 0 && a[i] == 0)
			count++;
		else
			count = 0;
	}
	return count;
}

