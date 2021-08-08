#include<stdio.h>
#include<string>

int fun(char arr[], int sz,char ch)
{
	int flag = -1;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (ch == arr[i])
		{
			flag = i;
			break;
		}
	}
	return flag;
}
int main()
{
	char arr[30] = { 0 };
	char ch;
	gets_s(arr);
	int sz = 30;
	printf("请输入要查找的字符：");
	scanf_s("%c", &ch);
	int flag = fun(arr, sz,ch);
	printf("该字符对应的第一个下标是：%d\n", flag);
	return 0;
}