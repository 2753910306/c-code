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
	printf("��������������:\n");
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("�����Ϊ��%d\n", max(a,b));
	return 0;
}