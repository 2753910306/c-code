#include<stdio.h>
#include<math.h>

int fun(int n)
{
	int j;
	for (j = 2; j <=sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i,t;
	for (i = 1; i <= 200; i++)
	{
		t = fun(i);
		if(t)
			printf("%d ",i);
	}
	return 0;
}