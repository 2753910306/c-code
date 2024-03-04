#include"calc.h"

//���ֳ�ʼ����ֵ
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
	cout << endl << endl;
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

