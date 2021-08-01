#include<stdio.h>
#include<stdio.h>

typedef struct score
{
	int ChaungXin;
	int DianLu;
	int DanPianJi;
	int XianXingDaiShu;
	int ShuXue;
	int DaWu;
	int TiYu;
	int JinDaiShi;
	int XinShiZhenCe;
	int WaiYu;
}sco;

struct student
{
	int Id;
	char Name[20];
	char Gender[3];
	char Class[20];
	sco Score;
};
struct student stu[40] = 
{
	{12345678,"张三","男","电子201",{82,85,97,94,97,80,89,83,80,87}},
};
int main()
{
	int i;
	double sum;
	printf("每个人的平均分位:\n");
	for (i = 0; i < 1; i++)
	{
		sum = stu[i].Score.ChaungXin*2.0/26.5 + stu[i].Score.DanPianJi*3.0/26.5 +
			stu[i].Score.DaWu*3.5/26.5+stu[i].Score.DianLu*4.0/26.5+stu[i].Score.JinDaiShi
			*3.0/26.5+stu[i].Score.ShuXue*5.5/26.5+stu[i].Score.TiYu*1/26.5+stu[i].Score.WaiYu*2.0/26.5+
			stu[i].Score.XianXingDaiShu*2.0/26.5+stu[i].Score.XinShiZhenCe*0.5/26.5;
		printf("%s\t%10.2f\n", stu[i].Name, sum );
	}
	return 0;
}