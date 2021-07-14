#include<stdio.h>
int main()
{
	char ch;
	while ((ch=getchar() )!= EOF)//ctrl+z=EOF,EOF - > -1,文件借宿==结束标志
	{
		putchar(ch);
	}
	return 0;
}