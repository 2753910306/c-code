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
	printf("�����������������֣�\n");
	scanf("%d%d", &a, &b);
	printf("������ƽ����Ϊ��%d\n", fun(a, b));
	return 0;
}