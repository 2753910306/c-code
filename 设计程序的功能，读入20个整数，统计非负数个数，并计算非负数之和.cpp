#include<stdio.h>

int fun1(int a[])
{
	int i, Count = 0;
	for (i = 0; i < 20; i++)
	{
		if (a[i] < 0)
		{
			Count++;
		}
	}
	return Count;

}
int fun2(int a[])
{
	int Sum = 0, i = 0;
	for (i = 0; i < 20; i++)
	{
		if (a[i] < 0)
			Sum=Sum+a[i];
		else
			NULL;
	}
	return Sum;
}

int main()
{
	int a[20];
	int i, count = 0;
	int sum = 0;
	for (i = 0; i < 20; i++)
	{
		scanf("%d", &a[i]);
	}
	count=fun1(a);
	sum = fun2(a);
	printf("非负数的个数为：%d\n", count);
	printf("非负数数字之和为：%d\n", sum);
	return 0;
}