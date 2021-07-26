#include<stdio.h>

int main()
{
	int s;
	int count = 0;
	scanf("%d", &s);
	for (int i = 0; i < 32; i++)//对每一位都进行了判断，与1相与为1就是1，为0就是0
	{
		if (1 == (s & 1))
		{
			count++;
		}
		s = s >> 1;
	}
	printf("%d\n", count);
	return 0;
}
