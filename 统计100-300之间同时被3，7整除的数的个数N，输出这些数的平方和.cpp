#include<stdio.h>
#include<math.h>

int main()
{
	int i, j, n = 0, sum = 0;
	int a[100];
	for (i = 100; i < 300; i++)
	{
		if (i % 3 == 0 && i % 7 == 0)
		{
			sum = sum + i * i;
			a[n++] = i;
		}
	}
	printf("同时被3和7整除的数字有：");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n他们的平方和为：");
	printf("%d ", sum);
	return 0;
}