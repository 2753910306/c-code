#include<stdio.h>

int main()
{
	int n = 321;
	int sum = n / 100 % 10 + n / 10 % 10 + n / 1 % 10;
	printf("%d\n", sum);
	return 0;
}