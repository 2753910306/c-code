
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fun(char arr1[], char arr2[])
{
	int i = 0;
	int t;
	for  (i = 0; i < 100; i++)
	{
		if (arr1[i] != arr2[i])
		{
			t = arr1[i] - arr2[i];
			break;
		}
	}
	return t;
}

int main()
{
	int i = 0, sz1 = 0, sz2 = 0;
	char arr1[100];
	char arr2[100];
	printf("请输入第一行字符串:");
	scanf("%s", arr1);
	printf("请输入第二行字符串:");
	scanf("%s", arr2);
	int a=strcmp(arr1, arr2);

	printf("%d\n", fun(arr1,arr2));
	return 0;
}