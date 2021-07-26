#include<stdio.h>
int main()
{
	int a = 3;//011
	int b = 5;//101
	int c = a & b;//001
	int d = a | b;//111
	int e = a ^ b;//110
	printf("c=%d,d=%d,e=%d\n", c, d, e);
	return 0;
}