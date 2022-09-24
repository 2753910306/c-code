#include"myfun.h"
bool prime(int n)
{
	int m;
	int flag = 1;
	m = sqrt(n);
	for (int i = 2; i <= m ; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
		}
	}
	if (flag == 0)
		return false;
	else
		return true;
}