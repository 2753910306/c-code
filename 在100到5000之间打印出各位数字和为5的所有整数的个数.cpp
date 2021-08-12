#include<stdio.h>

int main()
{
	int i=0;
	int arr[100] = { NULL };
	int n = 0;
	int a, b, c, d;
	
	for (i = 100; i < 5000; i++)
	{
		a = i / 1000 % 10;
		b = i / 100 % 10;
		c = i / 10 % 10;
		d = i % 10;
		if ((a + b + c + d) == 5)
		{
			arr[n++] = i;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}