#include<stdio.h>

void fun(int* a,int x,int sz)
{
	int i;
	int t;
	*(a+sz) = x;
	for (i = 0; i < sz; i++)
	{
		if (x < *(a+i))
		{
			t = *(a+sz);
			*(a+sz) = *(a+i);
			*(a+i) = t;
		}
		
	}
}
int main()
{
	int a[] = { 1,3,5,7,15,32,34,61,72,80 };
	int x,sz=0;
	int i=0;
	sz = sizeof(a) / sizeof(a[0]);
	printf("请输入你想插入的数字：\n");
	scanf("%d", &x);
	fun(a, x, sz);
	printf("排序后为：");
	for (i = 0; i <= sz; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}