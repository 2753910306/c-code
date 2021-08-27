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

//˼·���������ģ�Ȼ����������
//һֱ����жϴ�С������dp��0��Ϊ�����������ʵ�ֱƽ����ǵ����ֵ


#include<stdio.h>
#include<string.h>

int max(int a, int b)
{
	int max = a;
	if (a < b)
	{
		max = b;
	}
	return max;
}
int main()
{
	int i = 0, n = 0, j = 0;
	int maxCapacity = 0;
	int weights[1000] = { NULL };
	printf("����������");
	do
	{
		scanf_s("%d", &weights[n++]);
	} while (getchar() != '\n');

	printf("������������");
	scanf_s("%d", &maxCapacity);

	int answer=0;
	char dp[1000] = { NULL };
	dp[0] = true;

	for (int i = 0; i < n; i++)
	{
		int weight = weights[i];
		for (int j = maxCapacity; j >= weight; j--)
		{
			if (dp[j - weight]) 
			{
				dp[j] = true;
				answer = max(answer, j);
			}
		}
	}
	printf("max=%d", answer);
	return 0;
} 
