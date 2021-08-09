#include<stdio.h>
#include<math.h>

int fun(int n)
{
	int sum = 0;
	int i = 0,j=0;
	
	for (i = 1; i <n ; i++)
	{   int flag = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
			}
		}
		if (flag)
		{
			sum = sum + i;
			printf("%d ", i);
		}
	}
	printf("\n");
	return sum;
}
int main()
{
	int i = 0, n = 200;
	int Sum = fun(n);
	printf("1至%d内的质数和为%d\n",n, Sum);
	return 0;
}