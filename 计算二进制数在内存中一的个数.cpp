#include<stdio.h>

int main()
{
	int s;
	int count = 0;
	scanf("%d", &s);
	for (int i = 0; i < 32; i++)//��ÿһλ���������жϣ���1����Ϊ1����1��Ϊ0����0
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
