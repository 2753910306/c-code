#include<stdio.h>
#include<string.h>


void square_function(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = arr[i] * arr[i];
	}
}

void Sorting_function(int arr[], int n)
{
	int i = 0, j = 0;
	int t;
	for (i = 0; i < n - 1; i++)//ÅÅÐò
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
}
int main()
{
	int arr[100] = { NULL };
	int i = 0,n = 0;
	do
	{
		scanf_s("%d", &arr[n++]);
	} while (getchar() != '\n');
	square_function(arr, n);
	Sorting_function(arr, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
