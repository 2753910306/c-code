//������һ�����������������ڼ������ܾ�������������
// �������ܳ��ܵ��������ΪmaxCapacity����������n������Ƭ��
// �� i ������Ƭ������Ϊ weights[i]������������ҪѡһЩ����Ƭ�ӵ������ϣ�
// ʹ�ø����������󣬵�����ѡ�ĸ���Ƭ�����ܺ��ֲ��ܳ��� maxCapacity ��
// �����������������Ƕ��١�
//
//���磬��������Ƭ������Ϊ weights = [1, 3, 5]�� �������������Ϊ maxCapacity = 7��
// ��ôӦ��ѡ������Ϊ 1 �� 5 �ĸ���Ƭ��(1 + 5 = 6)���������յĴ��� 6��
//���� 1
//
//���룺
//[1, 3, 5]
//7
//�����
//6

#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0, n = 0, j = 0;
	int m = 0, flag = 0;
	int weights[1000] = { NULL };
	printf("����������");
	do
	{
		scanf_s("%d", &weights[n++]);
	} while (getchar() != '\n');

	printf("������������");

	scanf_s("%d", &m);

	for (i = 0; i < n-1; i++)
	{
		int flag = weights[i];
		for (j = i + 1; j < n; j++)
		{
			if (flag <= m)
			{
				flag = weights[i] + weights[j];
			}
			else
			{
				continue;
			}
		}
	}
	printf("max=%d", flag);
	
	return 0;
}