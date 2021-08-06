#include<stdio.h>
#include<string.h>

struct score
{
	double course1;
	double course2;
	double course3;
	double course4;
};
typedef struct student
{
	char name[20];
	struct score Score;

}Student;

Student stu[20] =
{
	{"小明", { 80, 84, 95, 75 }},
	{"小红", { 82, 85, 91, 85 }},
	{"小张", { 84, 87, 73, 95 }}
};


int main()
{
	int i=0;
	double sum = 0;
	for (i = 0; i < 3; i++)
	{
		sum = stu[i].Score.course1+ stu[i].Score.course2 + 
			stu[i].Score.course3 + stu[i].Score.course4;
		printf("%s的平均分为:%.3f\n", stu[i].name, sum / 4.0);
	
	}
	printf("\n");
	Student* ps = stu;
	for (i = 0; i < 3; i++)
	{
		sum = ps->Score.course1 + ps->Score.course2 + ps->Score.course3
			+ ps->Score.course4;
		printf("%s的平均分为:%.3f\n", ps->name, sum / 4.0);
		ps++;
	}
	return 0;
}