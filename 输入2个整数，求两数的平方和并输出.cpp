#include<stdio.h>
int fun(int x, int y)
{
	int sum;
	sum = x * x + y * y;
	return sum;
}
int main()
{
	int a, b;
	printf("请输入任意两个数字：\n");
	scanf("%d%d", &a, &b);
	printf("两数的平方和为：%d\n", fun(a, b));
	return 0;
}