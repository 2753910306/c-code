//��һ������д��ĸ������(�� 0 �� 9)���ַ���, 
// ��дһ���������������ĸ�Լ����ֺ�.
//
//����
//���� 1:
//
//����: str = "AC2BEW3"
//��� : "ABCEW5"
//˵�� :
//	��ĸ����ĸ���˳������, �����������ĺ�(2 �� 3)��

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
	char str[100] = { NULL };
	char s[100] = { 0 };
	gets_s(str);
	int len = strlen(str);
	int i = 0,j=0;
	int n = 0,m = 0;
	char count = 0;
	char t = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			s[m++] = str[i];
		}
		else
		{
			count = count + str[i];
			n++;
		}
		
	}
	for (i = 0; i < strlen(s)-1; i++)
	{
		for (j = i + 1; j < strlen(s); j++)
		{
			if (s[i] > s[j])
			{
				swap(s ,i, j);
			}				
		}
	}
	int sz = strlen(s);
	s[sz] = count -'0';
	for (i = 0; i <  sz+1; i++)
	{
		printf("%c", s[i]);
	}
	return 0;
}