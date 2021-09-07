//给定一个由小写字母a - f组成的字符串，
// 对其进行删除，使得删除后的字符串满足：
//
//所有的a在c和e之前且所有的c在e之前
//所有的b在d和f之前且所有的d在f之前
//求删除后满足以上条件的串的最大长度
//
//1 <= len(s) <= 3 * 10 ^ 51 <= len(s) <= 3∗10
//5
//
//样例
//input : s = "abcdef"
//output : 6
//
//input : s = "fedcba"
//output : 2


#include<stdio.h>
#include<string.h>

int main()
{
	char s[1000] = { NULL };
	printf("s=");
	gets_s(s);
	int i = 0,j=0;
	int len = strlen(s);
	int max = len;
	int count1 = 0, count2 = 0;
	for (i = 0; i < len - 1; i++)
	{
		
			if (s[i] == 'a' || s[i] == 'c' || s[i] == 'e')
			{
				for (j = i + 1; j < len; j++)
				{
					if (s[i] == 'c')
					{
						if (s[j] == 'a')
						{
							max--;
							count1++;
						}
					}
					else if (s[i] == 'e')
						{
							if (s[j] == 'a'||s[j]=='c')
							{
								max--;
								count1++;
							}
						}
				}
			}
			else if (s[i] == 'b' || s[i] == 'd' || s[i] == 'f')
			{
				for (j = i + 1; j < len; j++)
				{
					if (s[i] == 'd')
					{
						if (s[j] == 'b')
						{
							max--;
							count2++;
						}
					}
					else if (s[i] == 'f')
					{
						if (s[j] == 'b' || s[j] == 'd')
						{
							max--;
							count2++;
						}
					}
				}
			}
		
	}
	if (count1 == 3)
	{
		max++;
	}
	if (count2 == 3)
	{
		max++;
	}

	printf("output=%d", max);
	return 0;
}
