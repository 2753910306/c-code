//给一个24小时制的时间（00:00 - 23 : 59)，
// 其中有一个或多个数字是问号。问号处可以用任何一个数字代替，
// 问可以表示的最大时间是多少。
//
//样例
//样例1 :
//
//输入:
//time = "2?:00"
//输出 :
//	"23:00"
//	样例2 :
//
//	输入 :
//	time = "??:??"
//	输出 :
//	"23:59"


#include<stdio.h>
#include<string.h>
int main()
{
	char time[100] = { NULL };
	gets_s(time);
	int len = strlen(time);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (i == 0)
		{
			if (time[i] == '?')
				time[i] = '2';
		}
		if (i == 1)
		{
			if (time[i] == '?')
				time[i] = '4';
		}
		if (i == 3)
		{
			if (time[i] == '?')
				time[i] = '5';
		}
		if (i == 4)
		{
			if (time[i] == '?')
				time[i] = '9';
		}
	}
	for (i = 0; i < len; i++)
	{
		printf("%c", time[i]);
	}
	printf("\n");

	return 0;
}