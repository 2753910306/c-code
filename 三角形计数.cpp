//����һ���������飬�ڸ������У�Ѱ����������
// �ֱ���������������ߵĳ��ȣ��ʣ�
// ����Ѱ�ҵ�����������������������������Σ�
//
//����
//���� 1:
//
//����: [3, 4, 6, 7]
//��� : 3
//���� :
//    ������ɵ���
//	  (3, 4, 6),
//    (3, 6, 7),
//    (4, 6, 7)
//    ���� 2 :
//
//    ���� : [4, 4, 4, 4]
//    ��� : 4
//    �κ������������Թ���������
//    ���Դ�Ϊ C(3, 4) = 4

#include<stdio.h>

int main()
{
	int arr[100] = { NULL };
	int n = 0, i = 0, j = 0, t = 0;
	do
	{
		scanf("%d", &arr[n++]);
	} while (getchar() != '\n');
	int count = 0;
	for (i = 0; i < n - 2; i++)
	{
		for (j = i + 1; j < n - 1; j++)
		{
			for (t = j + 1; t < n; t++)
			{
				int flag = 1;
				if ((arr[i] + arr[j]) <= arr[t] || (arr[i] + arr[t]) <= arr[j] ||
					(arr[j] + arr[t]) <= arr[i])
				{
					flag = 0;
				}
				else
				{
					count++;
					printf("%d %d %d\n", arr[i], arr[j], arr[t]);
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}