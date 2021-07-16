#include<stdio.h>

void swap1(int x, int y)//只在内部交换
{
	int t;
	t = x;
	x = y;
	y = t;
	printf("%d,%d\n", x, y);
}

void swap(int* x, int* y)//交换的是地址，同时也改变了外部的值
{
	int t=0;
	 t = * x;
	* x =* y;
	* y = t;
	printf("%d,%d\n",* x,* y);
	
}
int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("%d,%d\n", a, b);
	return 0;
}