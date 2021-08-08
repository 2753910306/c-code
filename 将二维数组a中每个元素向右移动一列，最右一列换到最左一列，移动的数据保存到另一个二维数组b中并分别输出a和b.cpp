#include<stdio.h>

int main()
{
	int arr1[2][3] = { 1,2,3,4,5,6 };
	int arr2[2][3] = { 0 };
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j == 2)
			{
				arr2[i][0] = arr1[i][j];
			}
			if (j == 1)
			{
				arr2[i][1] = arr1[i][j];
			}
			if (j == 0)
			{
				arr2[i][2] = arr1[i][j];
			}
			
			
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("位移后的数组为：\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}