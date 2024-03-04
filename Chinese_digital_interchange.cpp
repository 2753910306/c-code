#include"Chinese_digital_interchange.h"

/*中文转数字部分*/
numConv::numConv(string* str)
{
	chinese_len = 0;
	t = 0;
	for (int i = 0; str[i] != "\0"; i++)
	{
		chinese[i] = str[i];
	}
}
void numConv::input(void)
{
	int i = 0;
	int j = 0;
	int i1 = 0;
	int i2 = 0;
	char str1[100][100]={NULL};
	char str2[100] = { NULL };
	cout << "请输入中文数字：\n";
	gets_s(str2);
	int len = strlen(str2);
	for (i1 = 0; i1 < len; i1++)
	{
		str1[i][j++] = str2[i1];
		if (i1 % 2 == 1)
		{
			str1[i++][j] = '\0';
			j = 0;
		}
	}
	for (int m = 0; m <= i; m++)
	{
		chinese[m] = str1[m];
	}
}
void numConv::chineseConv(void)
{
	t = 0;
	int j = 0;
	long double t1 = 0;
	long double t2 = 0;
	for (j = 0; chinese[j] != "\0"; j++)
	{
		if (match(chinese[j]) == 1000 || match(chinese[j]) == 100 || match(chinese[j]) == 10)
		{
			t1 *= match(chinese[j]);
			t2 += t1;
			t1 = 0;
		}
		else if (match(chinese[j]) == 10000)
		{
			t2 *= match(chinese[j]);
			t += t2;
			t2 = 0;
			t1 = 0;
		}
		else if (match(chinese[j]) == 100000000)
		{
			t2 *= match(chinese[j]);
			t += t2;
			t2 = 0;
			t1 = 0;
		}
		else if (match(chinese[j]) == 0.1)
		{
			t1 = t1 * 0.1;
			t2 += t1;
			t1 = 0;
		}
		else if (match(chinese[j]) == 0.01)
		{
			t1 = t1 * 0.01;
			t2 += t1;
			t1 = 0;
		}
		else
		{
			t1 = match(chinese[j]);
			if (match(chinese[j + 1]) != 1000 && match(chinese[j + 1]) != 100 && 
				match(chinese[j + 1])!= 10 && match(chinese[j + 1]) != 0.1 && match(chinese[j + 1]) != 0.01)
			{
				t2 += t1;
			}
		}

		/*	cout << "t = " << t << endl;
			cout << "t1 = " << t1 << endl<<endl;*/
	}
	t += t2;
}
long double numConv::match(string str)
{
	if (str == "零")return 0;
	else if (str == "一") return 1;
	else if (str == "二") return 2;
	else if (str == "三") return 3;
	else if (str == "四") return 4;
	else if (str == "五") return 5;
	else if (str == "六") return 6;
	else if (str == "七") return 7;
	else if (str == "八") return 8;
	else if (str == "九") return 9;
	else if (str == "十") return 10;
	else if (str == "百") return 100;
	else if (str == "千") return 1000;
	else if (str == "万") return 10000;
	else if (str == "亿") return 100000000;
	else if (str == "角") return 0.1;
	else if (str == "分") return 0.01;
	return 0;

}

void numConv::print_chinese(void)
{
	cout << "中文数字：";
	for (int i = 0; chinese[i] != "\0"; i++)
	{
		cout << chinese[i];
	}
	cout << endl;
}

void numConv::print_num(void)
{
	cout << "金额转换为数字：" << fixed << setprecision(2) << t << endl ;
}


/*数字转中文部分*/
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
	cout << endl;
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
