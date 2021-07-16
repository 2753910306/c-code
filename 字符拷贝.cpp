#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "wo ai ni";
	char arr2[] = "***********";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}