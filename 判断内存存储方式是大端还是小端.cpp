#include<stdio.h>

int main()
{
	int a = 1;//a�ĵ�ַ�����ִ洢��ʽ
	//��С�ˣ�0x 01 00 00 00/����ˣ�0x 00 00 00 01
	char* p = (char*)&a;//��char*ָ��ֻȡ��һ���ֽڣ�����Ҫô��01 Ҫô��00
	if (*p == 1)
		printf("С��\n");
	else if(*p == 0)
		printf("���\n");
	return 0;
}