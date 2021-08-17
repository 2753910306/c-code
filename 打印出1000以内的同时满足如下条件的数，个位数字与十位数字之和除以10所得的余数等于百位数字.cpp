//打印出1000以内的同时满足如下条件的数
//个位数字与十位数字之和除以10所得的余数等于百位数字

#include<stdio.h>
#define  n 1000

int main()
{
	int i;
	int a = 0, b = 0, c = 0;
	for (i = 0; i < n; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100 % 10;
		if ((a + b)%10 == c)
		{
			printf("%d ", i);
		}
	}

	return 0;
}