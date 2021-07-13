#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short pic;
};
int main()
{
	struct Book b1 = {"C语言程序设计",55};
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.pic);
	return 0;

}