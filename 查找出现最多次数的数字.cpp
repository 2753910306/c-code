//如果有相同数量的数字，则返回最小的那个

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	int main()
	{
		int n = 0;
		int array[100] = {NULL};
		do
		{
			scanf_s("%d", &array[n++]);
		} while (getchar() != '\n');
		
		int i = 0,j = 0;
		int flag = 0,max = 0,cf;
		int  ;
		for (i = 0; i < n; i++)
		{
			int count = 0;
			if (flag)
			{
				flag = 0;
				continue;
			}
			if (i > 0)
			{
				for (j = 0; j < i; j++)//解决重复
				{
					if (array[i] == array[j])
					{
						flag = 1;
						break;
					}
				}
			}
			for (j = i; j < n; j++)
			{
				if (array[i] == array[j])
				{
					count++;
				}
			}
			if (count > max)
			{
				max = count;
				cf = array[i];
			}
			else if (count == max)
			{
				if (cf > array[i])
				{
					cf = array[i];
				}
			}
		}
		printf("%d", cf);
		return 0;
	}

