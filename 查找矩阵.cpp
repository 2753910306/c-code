//��һ����, �ҵ�������ÿһ�ж����ֵ�Ԫ��.
// ����Լ��������ֻ��һ������������Ԫ��.
//
//����
//���� 1:
//
//����:
//[
//	[2, 5, 3],
//	[3, 2, 1],
//	[1, 3, 5]
//]
//��� : 3


#include<stdio.h>
#define row 3
#define line 3


int main()
{
	int arr[row][line] = { NULL };
	int i = 0,j = 0, n = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < line; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int arr1[row] = { NULL };
	for (i = 0; i < row; i++)
	{
		arr1[i] = arr[i][0];
	}
	int m = 0;
	for (m = 0; m < row; m++)
	{
		int flag = 0;
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < line; j++)
			{
				if (arr[i][j] == arr1[m])
				{
					flag++;
					if (flag == 3)
					{
						printf("%d\n", arr1[m]);
					}
					break;
				}
			}
			if (flag == 0)
			{
				break;
			}
		}
	}
	
	
	return 0;
}