#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short pic;
};
int main()
{
	struct Book b1 = {"C���Գ������",55};
	printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.pic);
	return 0;

}