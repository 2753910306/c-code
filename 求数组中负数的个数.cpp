#include<stdio.h>

int main()
{
	int arr[] = { 1,5,-25,-32,9,10,5,9,-12 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0, count = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] < 0)
			count++;
	}
	printf("%d\n", count);
	return 0;
}