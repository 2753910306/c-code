//��һ��24Сʱ�Ƶ�ʱ�䣨00:00 - 23 : 59)��
// ������һ�������������ʺš��ʺŴ��������κ�һ�����ִ��棬
// �ʿ��Ա�ʾ�����ʱ���Ƕ��١�
//
//����
//����1 :
//
//����:
//time = "2?:00"
//��� :
//	"23:00"
//	����2 :
//
//	���� :
//	time = "??:??"
//	��� :
//	"23:59"


#include<stdio.h>
#include<string.h>
int main()
{
	char time[100] = { NULL };
	gets_s(time);
	int len = strlen(time);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (i == 0)
		{
			if (time[i] == '?')
				time[i] = '2';
		}
		if (i == 1)
		{
			if (time[i] == '?')
				time[i] = '4';
		}
		if (i == 3)
		{
			if (time[i] == '?')
				time[i] = '5';
		}
		if (i == 4)
		{
			if (time[i] == '?')
				time[i] = '9';
		}
	}
	for (i = 0; i < len; i++)
	{
		printf("%c", time[i]);
	}
	printf("\n");

	return 0;
}