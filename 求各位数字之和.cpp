#include<stdio.h>

int main()
{
	int n = 0;
	printf("���������������(��λ�������ڣ�λ��֮�ͣ�");
	scanf("%d", &n);
	int i = 0, j = 0, sum = 0;
	sum = n/1000%10 +n / 100 % 10 + n / 10 % 10 + n % 10;
	printf("%d\n", sum);
	return 0;
}