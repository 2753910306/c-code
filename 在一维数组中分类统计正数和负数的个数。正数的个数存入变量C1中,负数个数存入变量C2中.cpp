#include<stdio.h>

int main()
{
	int a[10] = { NULL };
	int* p=a;
	int i, m = 0, n = 0;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", p + i);
	}
	int a1[10] = { 0 }, a2[10] = { 0 };

	for (i = 0; i < 10;i++)
	{
		if (a[i] >= 0)
		{
			a1[n++] = a[i];
		}
		else
		{
			a2[m++] = a[i];
		}
	}
	printf("正数的个数为：%d\n", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a1[i]);
	}
	printf("\n");
	printf("负数的个数为：%d\n", m);
	for (i = 0; i < m; i++) {
		printf("%d ", a2[i]);
	}

	return 0;
}