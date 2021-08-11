#include<stdio.h>
#define N 11

int fun(int* a,int x)
{
	int i;
	int t;
	int n = 0;
	*(a+10) = x;
	for (i = 0; i < 10; i++)
	{
		if (x < *(a+i))
		{
			t = *(a+10);
			*(a+10) = *(a+i);
			*(a+i) = t;
		}
		
		
	}
	return n;
}
int main()
{
	int a[N] = { 1,3,5,7,15,32,34,61,72,80 };
	int x;
	int i=0;
	int n = 0;
	
	printf("请输入你想插入的数字：\n");
	scanf_s("%d", &x);
	fun(a, x);
	printf("插入并排序后为：");
	for (i = 0; i <N; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}