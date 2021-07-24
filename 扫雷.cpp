#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//排雷
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
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DispalyBoard(mine, row, col);
				break;
			}
			else//不是雷
			{
				//计算（x，y）周围的雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DispalyBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_count)
	{
		printf("恭喜你排雷成功!\n");
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
	//打印列号
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
	printf("扫雷\n");
	//存储雷的位置
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROW, COL, '0');
	InitBoard(show, ROW, COL, '*');
	//打印棋盘
	DispalyBoard(show, ROW, COL);
	//布置雷
	Settine(mine, ROW, COL);
	//扫雷
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
		printf("1 >玩游戏\n0 >退出游戏\n请选择 :");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}