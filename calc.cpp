#include"calc.h"

//数字初始化赋值
Calc::Calc(long double n)
{
	num = n;
	count1 = 0;
}

//变量初始化
void Calc::Calc_Init(void)
{
	int xsnum = int(((num - long long(num)) + 0.001) * 100);
	long long zsnum = (long long)num;
	while (zsnum / pow(10, zscount) >= 1)//一定要大于等于1，不然个位无法输出
	{
		zscount++;
	}
	int i = 0;
	for (i = 0; i < zscount; i++)
	{
		zs[i] = long long(zsnum / pow(10, zscount - i - 1));
		zs[i] = zs[i] % 10;
	}
	xs[0] = xsnum / 10 % 10;
	xs[1] = xsnum / 1 % 10;
	xscount = 2;
	if (xs[0] == 0 && xs[1] == 0)
	{
		xscount = 0;
	}
	else if (xs[1] == 0)
	{
		xscount = 1;
	}
}
//数字转换为汉字
void Calc::convert(void)
{
	int i = 0;
	for (i = 0; i < zscount; i++)
	{
		zsconv[i] = chineseNum[zs[i]];
	}
	for (i = 0; i < xscount; i++)
	{
		xsconv[i] = chineseNum[xs[i]];
	}
}
//输出原本数字
void Calc::print_Num(void)
{
	cout << fixed << dec << setprecision(2) << num + 0.001 << endl;
}
//输出汉字
void Calc::print_Hanzi(void)
{
	if (num == 0)
	{
		cout << chineseNum[0];
	}
	else if (num < 0)
	{
		cout << "请输入正确格式！";
	}
	else
	{
		for (int i = 0; i < zscount; i++)
		{
			if ((zs[i] == 0 && zs[i + 1] == 0 && i < zscount - 1 && (zscount - i - 1) % 4 != 0) == 0)
			{
				//为了防止出现零万的现象
				if (zs[i] == 0 && (zscount - i - 1) % 4 == 0)
				{
					if (zscount >= 8 && zs[i - 1] == 0 && zs[i - 2] == 0 && zs[i - 3] == 0)
					{
						//为了防止出现亿万的现象
					}
					else
						digit(zscount - i - 1);
				}
				else if (zs[i] == 0)
				{
					cout << zsconv[i];
				}
				else
				{
					cout << zsconv[i];
					digit(zscount - i - 1);
				}
			}
		}
	}
	cout << "元";
	if (xscount != 0)
	{
		for (int i = 0; i < xscount; i++)
		{
			if (xsconv[i] != "零")
			{
				cout << xsconv[i];
				decimal_digit(i);
			}
		}
	}
	cout << endl << endl;
}

void Calc::digit(int t)
{
	if (t > 0)
	{
		switch (t)
		{
		case 0:cout << "零"; break;
		case 1:cout << "拾"; break;
		case 2:cout << "佰"; break;
		case 3:cout << "仟"; break;
		case 4:cout << "萬"; break;
		case 5:cout << "拾"; break;
		case 6:cout << "佰"; break;
		case 7:cout << "仟"; break;
		case 8:cout << "亿"; break;
		case 9:cout << "拾"; break;
		case 10:cout << "佰"; break;
		case 11:cout << "仟"; break;
		case 12:cout << "萬"; break;
		default:break;
		}
	}
}
void Calc::decimal_digit(int t)
{
	switch (t)
	{
	case 0:cout << "角"; break;
	case 1:cout << "分"; break;
	default:break;
	}
}

