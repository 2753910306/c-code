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
		printf("%d������\n", m);
	else
		printf("%d��������\n", m); 
	return 0;
}