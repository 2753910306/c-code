#include<stdio.h>

typedef struct PersonalDetails
{
	char HomeAdd[20];//地址
	int RoomNumber;//房间号
}Pd;

typedef struct stu
{
	char name[10];//名字
	int age;//年龄
	int height;//身高
	char telephone[12];//电话号码
	struct PersonalDetails HA;
}stu;

int main()
{
	stu S = { "wzy",18,180,"1234567891",{"jiujiang",20}};
	printf("%s\n", S.name);
	printf("%d\n", S.age);
	printf("%s\n", S.telephone);
	printf("%s\n", S.HA.HomeAdd);
	printf("%d\n", S.HA.RoomNumber);
	return 0;
}