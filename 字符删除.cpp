/*给出两个字符串 str 和 sub，你的任务是在 str 中完全删除那些在 sub 中存在的字符。
字符串中包含空格
样例
样例 1:
输入:
str = "They are students"，sub = "aeiou"
输出 :
	"Thy r stdnts"*/
#include<stdio.h>
#include<string.h>

void qjyd(char str[], int strl,int j)
{
	int i = 0;
	int t = 0;
	while (j < strl)
	{
		str[j] = str[j + 1];
		j++;	
	}
}

int main()
{
	char str[100] = { NULL }, sub[100] = { NULL };
	printf("str=");
	gets_s(str);
	int strl = strlen(str);
	printf("sub=");
	gets_s(sub);
	int subl = strlen(sub);
	int i = 0;
	int j = 0;
	char t = 0;
	for (i = 0; i < subl; i++)
	{
		for (j = 0; j < strl; j++)
		{
			if (str[j] == sub[i])
			{
				qjyd(str, strl, j);

			}
		}
	}
	for (i = 0; i < strl; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}