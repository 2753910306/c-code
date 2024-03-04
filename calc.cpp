#include"calc.h"
#include<iostream>
void calc(long double a)
{
	int count1 = 0;
	int count2 = 0;
	int count3 = 2;
	const char* chineseNum[10] = { "零","壹","贰","叁","肆","伍" ,"陆","柒","捌","玖" };
	const char* chinesewei[] = { "", "拾", "佰", "仟" };
	const char* chineseWei[] = { "", "萬", "亿", "萬亿" };
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
		/*个位*/

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
		/*万位*/
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
			if (count1 - i == 5)cout << "萬";
		}
		/*亿位*/
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
			if (count1 - i == 9)cout << "亿";
		}
		/*万亿*/
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
			if (count1 - i == 13)cout << "萬亿";
		}
	}
	cout << "元";
	/*小数位*/
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
		case 0:cout << "零"; break;
		case 1:cout << "拾"; break;
		case 2:cout << "佰"; break;
		case 3:cout << "仟"; break;
		default:break;
		}
	}
}

void decimal_digit(int t)
{
	switch (t)
	{
	case 0:cout << "角"; break;
	case 1:cout << "分"; break;
	default:break;
	}
}

/*计算后面连续的0的个数,现在不用了*/
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

