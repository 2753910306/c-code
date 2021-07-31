//求1~10000之间的水仙花数
//153
#include<stdio.h>
#include<math.h>

int fun1(int n)
{
	int flag=0;
	if (n / 1000 >= 1)
	{
		flag = 4;
	}
	else if (n / 100 >= 1)
	{
		flag = 3;
	}
	else if (n / 10 >= 1)
	{
		flag = 2;
	}
	else
	{
		flag = 1;
	}
	return flag;
}

void narc(int n)
{
	int i = 0,flag=0;
	int sum=0;
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	
	for (i = 0; i < n; i++)
	{
		flag = fun1(i);
		a1 = (int)(i / pow(10, flag))%10;
		a2 = (int)(i / pow(10, flag - 1))%10;
		a3 = (int)(i / pow(10, flag - 2))%10;
		a4 = (int)(i / pow(10, flag - 3))%10;
		sum =  pow(a1, flag) +  pow(a2, flag) + pow(a3, flag)
			+  pow(a4, flag);
		if (sum == i)
		{
			printf("%d ", sum);
		}
	}
}


int main()
{
	int n = 10000;
	narc( n );
	return 0;
}