#include<stdio.h>
void sunxu(int arr[], int sz)
{
	int i,j;
	int flag = 1;
	for (i = 0; i < sz-1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 0;
			}
		}
		if(flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 1,5,2,3,6,4,7,8,10,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sunxu(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}