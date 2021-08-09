#include<stdio.h>

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { NULL };
	int i = 0, sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum = sum + arr1[i];
	}
	for (i = 0; i < 10; i++)
	{
		if (arr1[i] > sum / 10)
		{
			arr2[i] = arr1[i];
			arr1[i] = 0;
		}
	}
	for (i = 0; i < sum/10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf ("\n");
	for (i = 0; i < 5; i++)
	{
		if (i < sum / 10)
		{
			if (arr2[i] == 0)
			{
				arr2[i] = arr2[i + sum / 10];
				arr2[i + sum / 10] = 0;
			}
		}
		printf("%d ", arr2[i]);
	}
	return 0;
}
