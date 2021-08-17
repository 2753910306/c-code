//用较大数除以较小数，再用出现的余数（第一余数）去除除数，
//再用出现的余数（第二余数）去除第一余数，如此反复，直到最后余数是0为止。

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
		printf("无公约数!\n");
	else
		printf("%d\n", n);
	return 0;
}