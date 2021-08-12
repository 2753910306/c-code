#include<stdio.h>

int main()
{
	int i=0;
	int a[100] = { NULL };
	int sum = 0;
	int m=0;
	int n = 100;
	for (i = 1; i < n; i++)
	{
		if (i % 3 == 0)
		{
			if (i  % 10 == 6)
				{
					sum = sum + i;
					a[m++] = i;
				}											
		}		
	}
	for (i = 0; i < m; i++)
	{
		printf("%d ", a[i]);
	}
    printf("\n他们的和为：%d\n",sum);
	return 0;
}