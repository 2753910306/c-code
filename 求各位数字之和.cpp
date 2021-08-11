#include<stdio.h>

int main()
{
	int n = 0;
	printf("请输入想求的数字(四位数字以内）位数之和：");
	scanf("%d", &n);
	int i = 0, j = 0, sum = 0;
	sum = n/1000%10 +n / 100 % 10 + n / 10 % 10 + n % 10;
	printf("%d\n", sum);
	return 0;
}