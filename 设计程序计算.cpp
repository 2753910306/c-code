//计算T=1-1/2+2/3-3/4+……-29/30
//输入30，则分母为30

#include<stdio.h>
int main()
{
	int i = 0, n = 0;
	double t;
	scanf_s("%d", &n);
	double sum=1;
	for (i = 1; i < n; i++)
	{
		t = i;
		if (i % 2 == 0)
		{
			sum = sum - t / (t + 1);
		}
		else
		{
			sum = sum + t / (t + 1);
		}
	}
	printf("%.3f", sum);

	return 0;
}