//现在给你两个字符串区间(按字典顺序), 请你判断两个区间是否可以合并。
//字符串区间[a, b)，包括所有以a开头的字符串。
//例如，区间[a, b)和区间[ab, c)是可以合并的，
// 区间[a, b)和区间[b, c]也是可以合并的。
//若是可以合并请返回true, 不可以请返回false。
//
//若两个区间A和B，满足A\bigcup⋃B是一个连续区间，则A和B可合并。
//
//样例
//样例1
//
//输入：
//"[a,b]" "[b,c]"
//输出：
//true
//样例2
//
//输入：
//"[a,b]" "(b,c]"
//输出：
//true
//样例3
//
//输入：
//"[a,b)" "(b,c]"
//输出：
//false
//样例4
//
//输入：
//"(b,c)" "[a,b]"
//输出：
//true

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100] = { NULL };
	char str2[100] = { NULL };
	char str[100] = { NULL };
	int n=0;
	gets_s(str1);
	gets_s(str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int i = 0, j = 0;
	for (i = 0; i < len1; i++)
	{
		if (str1[i] == '[')
		{
			str[n++] = str1[i+1];
		}
		if (str1[i] == ']')
		{
			str[n++] = str1[i - 1];
		}
	}
	for (i = 0; i < len2; i++)
	{
		if (str2[i] == '[')
		{
			str[n++] = str2[i + 1];
		}
		if (str2[i] == ']')
		{
			str[n++] = str2[i - 1];
		}
	}
	int flag = 0;
	char t = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (str[i] > str[j])
			{
				t = str[i];
				str[i] = str[j];
				str[j] = t;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%c ", str[i]);
	}printf("\n");
	while (i < n)
	{
		if (str[i] + ('2' - '1') == str[i + 1])
		{
			flag = 1;
			i++;
		}
		else
			break;
	}
	if (flag == 0)
		printf("false");	
	else
		printf("true");
	return 0;
}

