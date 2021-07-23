#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


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
	for (i = 1; i <= row; i++)
	{
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
	for (i = 0; i < rows; i++)
	{
		
		for (j = 0; j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}
void game()
{
	printf("É¨À×\n");
	//´æ´¢À×µÄÎ»ÖÃ
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROW, COL, '0');
	InitBoard(mine, ROW, COL, '*');
	//´òÓ¡ÆåÅÌ
	DispalyBoard(mine, ROW, COL);
	DispalyBoard(mine, ROW, COL);
	//²¼ÖÃÀ×
	Settine(mine, ROW, COL);
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
		printf("ÇëÑ¡Ôñ£º");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó£¬ÇëÖØÐÂÑ¡Ôñ!\n");
			break;
		}
	} while (1);
}

int main()
{
	test();
	return 0;
}