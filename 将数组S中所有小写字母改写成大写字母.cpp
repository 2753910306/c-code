//������S������Сд��ĸ��д�ɴ�д��ĸ

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char arr[] = "abCdEfg";
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for ( i = 0; i < sz-1; i++)
	{
		if (arr[i] <= 'z' && arr[i] >= 'a')
		{

			printf("%c", arr[i] - 32);
		}
		else
			printf("%c", arr[i]);
	}
	return 0;
}