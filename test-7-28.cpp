#include<stdio.h>
int main()
{
	int* p;
	p = NULL;//Ĭ��Ϊ00000000
	printf("%p", p);
	return 0;
}