#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
//��ʼ��
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//��ӡ
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	printf("\n-------Minesweeper-------\n\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);//��ӡ����
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ����
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
//����
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y - 1]
		+ mine[x][y - 1]
		+ mine[x + 1][y - 1]
		+ mine[x - 1][y]
		+ mine[x + 1][y]
		+ mine[x - 1][y + 1]
		+ mine[x][y + 1]
		+ mine[x + 1][y + 1] - 8 * '0');
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("������Ҫ�Ų������:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
				printf("���������Ų��������������\n");
			else if (mine[x][y] == '1')
			{
				printf("���ź�����ȵ�����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("���겻�ڷ�Χ�ڣ�����������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ����ͨ���ˣ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}