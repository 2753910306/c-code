#include<stdio.h>

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	char* p1 = "abcdef";
	char *p2 = "abcdef";
	if (p1 == p2)
	{
		printf("hehe\n");
	}
	else
		printf("haha\n");
	return 0;
}