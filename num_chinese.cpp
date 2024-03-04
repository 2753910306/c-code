#include"num_chinese.h"
#include<iomanip>

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
	char str1[100][3];
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
	str1[i][j] = '\0';
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
		if (match(chinese[j]) == 1000||match(chinese[j]) == 100 || match(chinese[j]) == 10)
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
			if (match(chinese[j + 1]) != 1000 && match(chinese[j + 1]) != 100 && match(chinese[j + 1]) != 10 && match(chinese[j + 1]) != 0.1 && match(chinese[j + 1]) != 0.01)
			{
				t2 += t1;
			}
		}
		
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
	for (int i = 0; chinese[i]!="\0"; i++)
	{
		cout << chinese[i];
	}
	cout << endl;
}

void numConv::print_num(void)
{
	cout << "金额转换为数字：" << fixed << setprecision(2) << t << endl << endl;
}