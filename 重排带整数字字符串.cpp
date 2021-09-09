//给一包含大写字母和整数(从 0 到 9)的字符串, 
// 试写一函数返回有序的字母以及数字和.
//
//样例
//样例 1:
//
//输入: str = "AC2BEW3"
//输出 : "ABCEW5"
//说明 :
//	字母按字母表的顺序排列, 接着是整数的和(2 和 3)。

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