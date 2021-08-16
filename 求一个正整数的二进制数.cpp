#include<stdio.h>
//7/2--111
//15/2--1 7/2--1 3/2--1 1/2--1
//8/2--0 4/2--0 2/2--0 1/2--1
int main()
{
	int i=0,j=0 ;
	int n=0,m=0,t=0;
	int a1[100] = { NULL };
	int a2[100] = { NULL };

	printf("请输入一个正整数：");
	scanf_s("%d", &n);
	printf("其对应的二进制序列为：");
	while(n >= 1)
	{
		m = n % 2;
		a1[t++] = m;
		n = n / 2;
		printf("%d ", m);
	}
	j = t-1;
	for (i = 0; i < t; i++)
	{
		if (j >= 0)
		{
			a2[i] = a1[j];
			j--;
			break;
		}
		
	}
	printf("\n");
	for (i = 0; i < t; i++)
	{
		printf("%d ", a2[i]);
	}
	return 0;
}