#include<stdio.h>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	
	scanf_s("sum1 = %d, sum2 = %d, sum3 = %d", &num1 ,&num2 ,&num3);
	
	int max = num1;
	if (num1 < num2)
	{
		max = num2;
		if (num2 < num3)
		{
			max = num3;
		}
	}
	else if (num1 < num3)
	{
		max = num3;
	}
	printf("%d", max);

	return 0;
}