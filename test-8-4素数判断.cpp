#include<stdio.h>

int main()
{
	int m, i, k;
	scanf_s("%d", &m);
	int flag = 0;
	for (i = 2; i < m; i++)
	{
		if (m % i == 0)
		{
			flag = 0;
			break;
		}
		
	}
	if (flag)
		printf("%d是素数\n", m);
	else
		printf("%d不是素数\n", m); 
	return 0;
}