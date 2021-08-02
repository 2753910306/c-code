#include<stdio.h>

int main()
{
	int a = 1;//a的地址有两种存储方式
	//（小端）0x 01 00 00 00/（大端）0x 00 00 00 01
	char* p = (char*)&a;//而char*指针只取第一个字节，所以要么是01 要么是00
	if (*p == 1)
		printf("小端\n");
	else if(*p == 0)
		printf("大端\n");
	return 0;
}