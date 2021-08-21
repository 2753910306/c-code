//你将得到一个由小写字母 a-z ，左括号 '(' 和右括号 ')' 构成的字符串 s。
//你的任务是删除尽可能少的括号，使得 s 里面的括号匹配。
//你需要返回删除括号后的字符串。
//由于答案可能会有很多，所以你只需要返回任意一个正确答案。

#include<stdio.h>
#include<string.h>

void fun1(char s1[], int i,int v)
{
	char t=0;
	while (i < v)
	{
		t = s1[i++];
		s1[i++] = s1[i + 1];
		s1[i + 1] = t;
	}
}

void fun(char s1[], int n, char t)
{
	int i = 0,j = 0;
	char v=n;
	int flag = 0;
	for (i = 0; i < n; i++)
	{
		if (s1[i] == '(');
		{
			for (j = n - 1; j > i; j--)
			{
				if (s1[i] == ')')
				{
					n = j; flag = 1;
				}
			}
			if (flag == 0)
			{
				fun1(s1, i, v);
			}
		}
	}
}

int main()
{
	char s1[100] = { NULL };
	int n=0,i = 0;;
	int count1 = 0, count2 = 0;
	gets_s(s1);

	n = strlen(s1);
	printf("%d\n", n);

	
	for (i = 0; i < n; i++)
	{
		if (s1[i] == '(')
		{
			count1++;
		}
		
		else if (s1[i] == ')')
			 {
				count2++;
		     }		
		
	}
	if (count1 != count2)
	{
		if (count1 > count2)
		{
			fun(s1, n, '(');
		}
		else
		{
			fun(s1, n, ')');
		}

	}
	printf("%d,%d\n", count1, count2);


	printf("%s\n", s1);
	return 0;
}