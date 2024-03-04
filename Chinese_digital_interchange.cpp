#include"Chinese_digital_interchange.h"

/*����ת���ֲ���*/
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
	for (int i = 0; chinese[i] != "\0"; i++)
	{
		cout << chinese[i];
	}
	cout << endl;
}

void numConv::print_num(void)
{
	cout << "���ת��Ϊ���֣�" << fixed << setprecision(2) << t << endl ;
}


/*����ת���Ĳ���*/
Calc::Calc(long double n)
{
	num = n;
	count1 = 0;
}

//������ʼ��
void Calc::Calc_Init(void)
{
	int xsnum = int(((num - long long(num)) + 0.001) * 100);
	long long zsnum = (long long)num;
	while (zsnum / pow(10, zscount) >= 1)//һ��Ҫ���ڵ���1����Ȼ��λ�޷����
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
//����ת��Ϊ����
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
//���ԭ������
void Calc::print_Num(void)
{
	cout << fixed << dec << setprecision(2) << num + 0.001 << endl;
}
//�������
void Calc::print_Hanzi(void)
{
	if (num == 0)
	{
		cout << chineseNum[0];
	}
	else if (num < 0)
	{
		cout << "��������ȷ��ʽ��";
	}
	else
	{
		for (int i = 0; i < zscount; i++)
		{
			if ((zs[i] == 0 && zs[i + 1] == 0 && i < zscount - 1 && (zscount - i - 1) % 4 != 0) == 0)
			{
				//Ϊ�˷�ֹ�������������
				if (zs[i] == 0 && (zscount - i - 1) % 4 == 0)
				{
					if (zscount >= 8 && zs[i - 1] == 0 && zs[i - 2] == 0 && zs[i - 3] == 0)
					{
						//Ϊ�˷�ֹ�������������
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
	cout << "Ԫ";
	if (xscount != 0)
	{
		for (int i = 0; i < xscount; i++)
		{
			if (xsconv[i] != "��")
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
		case 0:cout << "��"; break;
		case 1:cout << "ʰ"; break;
		case 2:cout << "��"; break;
		case 3:cout << "Ǫ"; break;
		case 4:cout << "�f"; break;
		case 5:cout << "ʰ"; break;
		case 6:cout << "��"; break;
		case 7:cout << "Ǫ"; break;
		case 8:cout << "��"; break;
		case 9:cout << "ʰ"; break;
		case 10:cout << "��"; break;
		case 11:cout << "Ǫ"; break;
		case 12:cout << "�f"; break;
		default:break;
		}
	}
}
void Calc::decimal_digit(int t)
{
	switch (t)
	{
	case 0:cout << "��"; break;
	case 1:cout << "��"; break;
	default:break;
	}
}
