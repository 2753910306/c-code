#include<stdio.h>

int main()
{
	int arr1[2][3] = { 1,2,3,4,5,6 };
	int arr2[3][2] = { 0 };
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}
	for (i = 0; i < 2; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("½»»»ºóÎª£º\n");

	for (i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 2; j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
