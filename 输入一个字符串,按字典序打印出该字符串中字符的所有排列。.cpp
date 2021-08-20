//输入一个字符串,按字典序打印出该字符串中字符的所有排列。
//例如输入字符串abc,
//则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。

#include<stdio.h>
#include<string.h>


void swap(char arr[], int a, int b)
{
	char temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
int main()
{
	char arr[100] = { 0 };
	int i=0,j=0,n=0;
	char t=0;
	printf("请输入任意字符串，不能有重复的字母：");
	gets_s(arr);
	int sz = strlen(arr);
	printf("%d\n", sz);
	for (i = 0; i < sz-1; i++)
	{
		for (j = i+1; i < sz; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr, i, j);
			}
		}
	}

	for (i = 0; i < sz; i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}