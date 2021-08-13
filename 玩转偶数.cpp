//已定义一个含有30个元素的数组s,函数fun1的功能是按
//顺序分别赋予各元素从2开始的偶数, 函数fun2则按顺序
//每五个元素求一个平均值, 并将该值存放在数组
#include<stdio.h>

int main()
{
	int s[30] = { NULL };
	int i;
	for (i = 2; i < 30; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 30; j++)
			{
				s[j] = i;
			}
		}
	}
	return 0;
}