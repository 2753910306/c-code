#include<stdio.h>
#define n 15

int main ()
{
	int arr[n] = { 0,0,1 };
	int i = 0;
	for (i = 3; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	for (i = 0; i < n; i++) 
	{
		printf("%d ", arr[i]);
	}
	return 0;
}