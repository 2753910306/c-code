#include<stdio.h>
int main()
{
	char ch;
	while ((ch=getchar() )!= EOF)//ctrl+z=EOF,EOF - > -1,�ļ�����==������־
	{
		putchar(ch);
	}
	return 0;
}