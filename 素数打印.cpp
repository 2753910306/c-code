#include<stdio.h>
#include<math.h>
int main()
{
	int j, i, m=200, n, t;
	for (i = 1; i <= m; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if(i % j==0) 
			{
				 break;
			}	
		}
		if(j > sqrt(i))
			printf("%d ", i);
	}
	return 0;
}