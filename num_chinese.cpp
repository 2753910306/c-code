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
	cout << "�������������֣�\n";
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
	if (str == "��")return 0;
	else if (str == "һ") return 1;
	else if (str == "��") return 2;
	else if (str == "��") return 3;
	else if (str == "��") return 4;
	else if (str == "��") return 5;
	else if (str == "��") return 6;
	else if (str == "��") return 7;
	else if (str == "��") return 8;
	else if (str == "��") return 9;
	else if (str == "ʮ") return 10;
	else if (str == "��") return 100;
	else if (str == "ǧ") return 1000;
	else if (str == "��") return 10000;
	else if (str == "��") return 100000000;
	else if (str == "��") return 0.1;
	else if (str == "��") return 0.01;
	return 0;

}

void numConv::print_chinese(void)
{
	cout << "�������֣�";
	for (int i = 0; chinese[i]!="\0"; i++)
	{
		cout << chinese[i];
	}
	cout << endl;
}

void numConv::print_num(void)
{
	cout << "���ת��Ϊ���֣�" << fixed << setprecision(2) << t << endl << endl;
}