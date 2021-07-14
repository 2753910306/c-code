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
	printf("%d\n", n);
	return 0;
}