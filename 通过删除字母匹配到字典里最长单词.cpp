//给定字符串和字符串字典，
// 找到字典中可以通过删除给定字符串的某些字符所形成的最长字符串。 
// 如果有多个可能的结果，则返回具有最小字典顺序的最长单词。
//  如果没有可能的结果，则返回空字符串。
//
//输入中的所有字符串仅包含小写字母。
//字典的大小不会超过1, 000。
//输入中所有字符串的长度不会超过1, 000。
//
//样例
//案例 1:
//
//输入:
//s = "abpcplea", d = ["ale", "apple", "monkey", "plea"]
//
//输出 :
//	"apple"
//	案例 2 :
//
//	输入 :
//	s = "abpcplea", d = ["a", "b", "c"]
//
//	输出 :
//	"a"


#include<stdio.h>
#include<string.h>

int main()
{
	char s[1000] = { NULL };
	char d[1000] = { NULL };
	int f[1000] = { 0 };
	int n = 0;
	int m = 0;
	printf("s=");
	gets_s(s);
	printf("d=");
	do
	{
		scanf("%c", &d[n++]);
	} while (getchar() != '\n ');
	int i = 0, j = 0;
	int len = strlen(s);
	for (i = 0; i < n; i++)
	{
		int count = 0;
		int t = i;
		for (j = 0; j < len; j++)
		{
			if (d[t] == ',')
			{
				continue;
			}
			else
			{
				if (s[j] == d[t])
				{

					count++;
					t++;
				}
			}
		}
	}
	
	return 0;
}



//string longest = "";
//for (int k = 0; k < d.size(); k++)
//  {
//	string word = d[k];
//	if (word.size() < longest.size() || (word.size() == longest.size() && longest < word)) 
// {
//		continue;
//	}
//	int i = 0;
//	int j = 0;
//	while (i < s.size() && j < word.size() && s.size() - i >= word.size() - j) 
// { // last condition short circuit the loop 
//		if (s[i] == word[j])
//  {
//			j++;
//	}
//		i++;
//	}
//	if (j == word.size()) 
// {
//		longest = word;
//	}
//}
//return longest;