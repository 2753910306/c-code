//�ýϴ������Խ�С�������ó��ֵ���������һ������ȥ��������
//���ó��ֵ��������ڶ�������ȥ����һ��������˷�����ֱ�����������0Ϊֹ��

#include<stdio.h>
int main()
{
	int m, n, t;
	scanf("%d%d", &m, &n);
	while (m % n)
	{
		t = m % n;
		m = n;
		n = t;
	}
	if (n == 1)
		printf("�޹�Լ��!\n");
	else
		printf("%d\n", n);
	return 0;
}