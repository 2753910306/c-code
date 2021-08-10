#include<stdio.h>

int main()
{
	int i, n=0;
	int sum = 0;
	int arr[100] = { NULL };
	for (i = 0; i < 100; i++)
	{
		
			if (i % 2 != 0)
			{
				arr[n++] = i;
				sum += i;
			}
			if (sum >= 200)
			{
				break;
			}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}