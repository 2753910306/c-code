//给定一个字符串，你可以通过操作字符串中 连续的相同字符 来得到新的字符串。
//你只被允许进行如下操作：
//将一段连续次数大于等于 2 的相同字符保留 1 或 2 个，并删掉其余的部分。
//
//你必须保证，新的字符串中不会连续存在两个以上的相同字符。
//如果输入的字符串满足要求，你可以不对它进行任何操作。
//
//单词的长度在[1, 35]之间。
//
//样例
//样例 1：
//
//输入：
//S = "helllllooo"
//输出：
//4
//解释：
//答案为 "hello", "helo", "heloo", "helloo"
//样例 2：
//
//输入：
//S = "bbaa"
//输出：
//4
//解释：
//答案为 "bbaa", "bba", "baa", "ba"


#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000] = { NULL }, a[1000] = { NULL };
	gets_s(s);
	int len = strlen(s);
	int i = 0, j = 0, n = 0;
	int m = 0;
	
	for (i = 0; i < len - 1; i++)
	{
		int count = 0;		
		for (j = i; j < len; j++)
		{
			if (s[i] == s[j])
			{
				count++;						
			}
		}
			if (count >= 2)
			{
				a[n++] = s[i];
			}								
		i += count - 1;
	}
	int conse = 1;

	for (i = 0; i < n; i++)
	{
		conse *= 2;
	}
	printf("%d\n", conse);
	return 0;
}