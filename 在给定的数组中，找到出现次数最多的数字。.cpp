#include<stdio.h>
#define n 10

int fun1(int a[],int Count)
{
	int i = 0,j=0;
	int max=0;
	int m = 0;
	
	int t = 0;
	for (i = 0; i < Count; i++)
	{
		for (m = 0; m < i; m++)//����ǰ�棬������ͬ��Ԫ��
		{
			if (m != 0)
			{
				if (a[i] == a[m])
				{
					i++;
					break;
				}
			}
		}
		int count = 0;
		for (j = 0; j < Count; j++)//���㵱ǰ�����ڴ˿̵�����
		{
			if (a[i] == a[j])
			{
				count++;
			}
		}
		if (count > t)
		{
			max = a[i];
			t = count;
		}
	}
	return max;
}

int main()
{
	int a[n] ;
	int i = 0;
	int Count = 0;
	do
	{
		scanf_s("%d", &a[Count++]);
	} while (getchar() != '\n');

	int max=0;

	max = fun1(a,Count);
	printf("������Ϊ��%d\n", max);
	
	
	return 0;
}