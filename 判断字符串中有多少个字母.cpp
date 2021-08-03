#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fun(char s[],int sz)
{
	int i = 0;
	int Count = 0;
	for (i = 0; i < sz; i++)
	{
		if ( ('A'<=s[i]&&s[i]<='Z')||('a'<=s[i]&&s[i]<='z'))
		{
			Count++;
		}
		else
			NULL;
	}
	return Count;
}

int main()
{
	char s[] = { "abc1234"};
	int count = 0;
	int sz = 0;
	//printf("请输入任意字符：\n");
	//gets_s(s);
	sz = sizeof(s) / sizeof(s[0]);
	count = fun(s,sz);
	printf("字符中字母的个数为:%d\n", count);
	return 0;

}