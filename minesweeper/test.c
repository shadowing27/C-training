#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("******** 1. start ********\n");
	printf("******** 0. exit  ********\n");
	printf("**************************\n");
}
void game()
{
	//创建棋盘
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印
	DisplayBoard(show, ROW, COL);
	//布雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{ 
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("\n-----------END-----------\n");
			break;
		default:
			printf("\nerror!请重新选择\n\n");
			break;
		}
	} while (input);
	return 0;
}