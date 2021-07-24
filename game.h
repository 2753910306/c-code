#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define EASY_count 10

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int get_mine_count(char mine[ROWS][COLS], int x, int y);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void Settine(char board[ROWS][COLS],int row, int col);
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void DispalyBoard(char board[ROWS][COLS], int row, int col);