#include<stdio.h>


typedef struct stu
{
	char name[20];
	int age;
}stu;

void print1(stu s)//��ͨ���Σ��˷ѿռ�ʱ��
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
}
void print2(stu* s)//ָ�봫�Σ���ʡ�ռ�ʱ��
{
	printf("%s\n", s->name);
	printf("%d\n", s->age);
}
int main()
{
	stu s = { "����",18 };
	print1(s);
	print2(&s);
	return 0;
}