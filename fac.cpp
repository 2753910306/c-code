long long fac(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	if (n > 0)
		return  n * fac(n - 1);
}