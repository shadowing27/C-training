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
	//��������
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ
	DisplayBoard(show, ROW, COL);
	//����
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//�Ų�
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{ 
		menu();
		printf("��ѡ��:");
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
			printf("\nerror!������ѡ��\n\n");
			break;
		}
	} while (input);
	return 0;
}