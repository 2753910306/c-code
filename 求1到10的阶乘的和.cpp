#include<stdio.h>

int fun(int n)
{
	int t=n;
	if (n > 1)
	{
		t = t * fun(n - 1);
	}
	return t;
}
int main()
{
	int i;
	int n=10;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		sum = fun(i) + sum;
		printf("%d ", fun(i));
	}
	printf("\n%d\n", sum);
	return 0;
}