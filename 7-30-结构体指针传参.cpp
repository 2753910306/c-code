#include<stdio.h>


typedef struct stu
{
	char name[20];
	int age;
}stu;

void print1(stu s)//普通传参，浪费空间时间
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
}
void print2(stu* s)//指针传参，节省空间时间
{
	printf("%s\n", s->name);
	printf("%d\n", s->age);
}
int main()
{
	stu s = { "张三",18 };
	print1(s);
	print2(&s);
	return 0;
}