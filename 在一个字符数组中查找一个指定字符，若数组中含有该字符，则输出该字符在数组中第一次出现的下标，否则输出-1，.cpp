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
	printf("������Ҫ���ҵ��ַ���");
	scanf_s("%c", &ch);
	int flag = fun(arr, sz,ch);
	printf("���ַ���Ӧ�ĵ�һ���±��ǣ�%d\n", flag);
	return 0;
}