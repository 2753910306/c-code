#include<stdio.h>
int max(int x, int y)
{
	int max;
	if (x > y)
		 max = x;
	else
		 max = y;
	return max;
}
int main()
{
	printf("请输入两个数字:\n");
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("最大数为：%d\n", max(a,b));
	return 0;
}