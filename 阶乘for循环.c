#include<stdio.h>
int jc(int n)
{
	int sum=n;
	if(n>1)
	sum = sum *jc(n - 1);
	return sum;
}
int main()
{
	int n,sum;
	scanf("%d", &n);
	sum=jc(n);
	printf("n!=%d\n", sum);
	return 0;
}
