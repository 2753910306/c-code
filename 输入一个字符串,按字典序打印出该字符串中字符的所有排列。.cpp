//����һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С�
//���������ַ���abc,
//���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba��

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
	printf("�����������ַ������������ظ�����ĸ��");
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