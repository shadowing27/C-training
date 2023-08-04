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
void FirstSave(char mine[ROWS][COLS], int x, int y)
{
	if (mine[x][y] == '1')
	{
		mine[x][y] = '0';
		int m = rand() % ROW + 1;
		int n = rand() % COL + 1;
		if (m != x && n != y && mine[m][n] == '0')
			mine[m][n] = '1';
	}
	int i = 0, j = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				mine[i][j] = '0';
				int m = rand() % ROW + 1;
				int n = rand() % COL + 1;
				if ((m < x - 1 || m>x + 1) && (n<y - 1 || n>y + 1))
					if (mine[m][n] == '0')
						mine[m][n] = '1';
			}
		}
	}
}
void GetMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (show[x][y] == '0' && x > 0 && x <= ROW && y > 0 && y <= COL)
	{
		//��show����������Ϊ0ʱ����ú������Ų�����������Χ�İ˸�����
		int i, j;
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				while (show[i][j] == '*')
				{
					int count = GetMineCount(mine, i, j);
					show[i][j] = count + '0';
					if (show[i][j] == '0')
						GetMine(mine, show, i, j);
				}
			}
		}
	}
}
static int MineCount(char show[ROWS][COLS])
{
	int i = 0, j = 0, win = 0;
	for (i = 1; i <= ROW; i++)
	{
		for (j = 1; j <= COL; j++)
		{
			if (show[i][j] == '*')
				win++;
		}
	}
	return win;
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = ROW * COL;
	do
	{
		printf("������Ҫ�Ų������:");
		scanf("%d %d", &x, &y);
		if (win == ROW * COL)
		{
			FirstSave(mine, x, y);
		}
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
			/*else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}*/
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				GetMine(mine, show, x, y);
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("���겻�ڷ�Χ�ڣ�����������\n");
		}
		win = MineCount(show);
	} while (win > EASY_COUNT);
	if (win == EASY_COUNT)
	{
		printf("��ϲ����ͨ���ˣ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}