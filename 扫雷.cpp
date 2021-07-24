#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//����
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y]
		+ mine[x - 1][y - 1]
		+ mine[x - 1][y + 1]
		+ mine[x][y - 1]
		+ mine[x + 1][y - 1]
		+ mine[x][y + 1]
		+ mine[x + 1][y]
		+ mine[x + 1][y + 1] - 8 * '0';
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	
	while (win < row*col-EASY_count)
	{
		printf("���������꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DispalyBoard(mine, row, col);
				break;
			}
			else//������
			{
				//���㣨x��y����Χ����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DispalyBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��������Ƿ������������룡\n");
		}
	}
	if (win == row * col - EASY_count)
	{
		printf("��ϲ�����׳ɹ�!\n");
		DispalyBoard(mine, row, col);
	}
}
void Settine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void DispalyBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= rows+1; i++)
	{
		
		for (j = 0; j <= cols+1;j++)
		{
			board[i][j] = set;
		}
	}
}
void game()
{
	printf("ɨ��\n");
	//�洢�׵�λ��
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROW, COL, '0');
	InitBoard(show, ROW, COL, '*');
	//��ӡ����
	DispalyBoard(show, ROW, COL);
	//������
	Settine(mine, ROW, COL);
	//ɨ��
	Findmine(mine,show,ROW,COL);
	

	
}

void menu()
{
	printf("*******************\n");
	printf("******1 play ******\n");
	printf("******0 exit ******\n");
	printf("*******************\n");
}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		
		menu();
		printf("1 >����Ϸ\n0 >�˳���Ϸ\n��ѡ�� :");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}