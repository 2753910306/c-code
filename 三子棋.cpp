#define _CRT_SECURE_NO_WARNINGS l

#include<stdio.h>
#include<stdlib.h>
#include<time .h>


#define ROW 3
#define COL 3
void DisplayBoard(char board[ROW][COL], int row, int col);
void InitBoard(char board[ROW][COL], int row, int col);
void fun();
void Play(char[ROW][COL], int row, int col);
void computeplay(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL],int row,int col);


int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
			
		}
	}
	return 1;
}
char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] == board[i][1] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] == board[2][2] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] == board[0][2] && board[1][1]!=' ')
	{
		return board[1][1];
	}//�Խ���
	if (1 == isfull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'c';
}
void Play(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����:\n");
	while (1)
	{
		printf("������Ҫ�µ����꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n"); break;
			}
		}
		else
		{
			printf("����Ƿ������������룺\n"); break;
		}
	}

}

void computeplay(char board[ROW][COL], int row, int col)
{
	printf("�����ߣ�\n");
	int x;
	int y;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		Play(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//��������
		//�жϵ����Ƿ�Ӯ
		computeplay(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("���Ӯ��");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��");
	}
	else
		printf("ƽ�֡�");
}

void fun()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("**********************\n");
		printf("***��ʼ>1 or 0<����***\n");
		printf("**********************\n");
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
				printf("��ʽ�������������룡\n");
		}
	} while (input);
}

int main()
{
	fun();
	return 0;
}