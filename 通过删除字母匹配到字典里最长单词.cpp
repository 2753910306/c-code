//�����ַ������ַ����ֵ䣬
// �ҵ��ֵ��п���ͨ��ɾ�������ַ�����ĳЩ�ַ����γɵ���ַ����� 
// ����ж�����ܵĽ�����򷵻ؾ�����С�ֵ�˳�������ʡ�
//  ���û�п��ܵĽ�����򷵻ؿ��ַ�����
//
//�����е������ַ���������Сд��ĸ��
//�ֵ�Ĵ�С���ᳬ��1, 000��
//�����������ַ����ĳ��Ȳ��ᳬ��1, 000��
//
//����
//���� 1:
//
//����:
//s = "abpcplea", d = ["ale", "apple", "monkey", "plea"]
//
//��� :
//	"apple"
//	���� 2 :
//
//	���� :
//	s = "abpcplea", d = ["a", "b", "c"]
//
//	��� :
//	"a"


#include<stdio.h>
#include<string.h>

int main()
{
	char s[1000] = { NULL };
	char d[1000] = { NULL };
	int f[1000] = { 0 };
	int n = 0;
	int m = 0;
	printf("s=");
	gets_s(s);
	printf("d=");
	do
	{
		scanf("%c", &d[n++]);
	} while (getchar() != '\n ');
	int i = 0, j = 0;
	int len = strlen(s);
	for (i = 0; i < n; i++)
	{
		int count = 0;
		int t = i;
		for (j = 0; j < len; j++)
		{
			if (d[t] == ',')
			{
				continue;
			}
			else
			{
				if (s[j] == d[t])
				{

					count++;
					t++;
				}
			}
		}
	}
	
	return 0;
}



//string longest = "";
//for (int k = 0; k < d.size(); k++)
//  {
//	string word = d[k];
//	if (word.size() < longest.size() || (word.size() == longest.size() && longest < word)) 
// {
//		continue;
//	}
//	int i = 0;
//	int j = 0;
//	while (i < s.size() && j < word.size() && s.size() - i >= word.size() - j) 
// { // last condition short circuit the loop 
//		if (s[i] == word[j])
//  {
//			j++;
//	}
//		i++;
//	}
//	if (j == word.size()) 
// {
//		longest = word;
//	}
//}
//return longest;