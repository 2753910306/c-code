#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return  fib(n - 1) + fib(n - 2);
}
//1 1 2 3 5 8 13 21 34 55
int main()
{
	int n = 0;
	int t = 0;
	printf("请输入位数：");
	scanf("%d", &n);
	t = fib(n);
	printf("此位置对应的斐波那契数是：%d\n", t);
	return 0;
}