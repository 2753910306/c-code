#include<stdio.h>

void fun(int arr[],int sz)//√∞≈›≈≈–Ú
{
	int i = 0, j = 0;
	int tmp;
	for (i = 0; i < sz-1; i++)
	{
		for (j = i; j < sz ; j++)
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}

		}
	}
}

void Reverse(int arr[], int sz)//ƒÊ–Ú
{
	int left=0;
	int right = sz - 1, tmp;
	while (left <= right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}

}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz;
	sz = sizeof(arr) / sizeof(arr[0]);
	fun(arr, sz);
	Reverse(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}