#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"
#include "contact.h"

//void SLtest()
//{
//	SL s1;
//	SLInit(&s1);
//	//尾插
//	SLPushBack(&s1, 1);
//	SLPushBack(&s1, 2);
//	SLPushBack(&s1, 3);
//	SLPushBack(&s1, 4);
//	SLPrint(&s1);
//	////头插
//	//SLPushFront(&s1, 5);
//	//SLPushFront(&s1, 6);
//	//SLPushFront(&s1, 7);
//	//SLPrint(&s1);
//	////尾删
//	//SLPopBack(&s1);
//	//SLPrint(&s1);
//	////头删
//	//SLPopFront(&s1);
//	//SLPrint(&s1);
//	//指定位置插入
//	SLInsert(&s1, s1.size, 11);
//	SLPrint(&s1);
//	//指定位置删除
//	SLErase(&s1, s1.size);
//	SLPrint(&s1);
//	//bool findRet = SLFind(&s1, 3);
//	//if (findRet)
//	//	printf("找到了\n");
//	//else
//	//	printf("没找到\n");
//
//	SLDestory(&s1);
//}

//void contact1()
//{
//	contact con;
//	ContactInit(&con);
//	ContactAdd(&con);
//	ContactAdd(&con);
//	ContactShow(&con);
//	//ContactDel(&con);
//	//ContactModify(&con);
//	//ContactShow(&con);
//	ContactFind(&con);
//	ContactDestory(&con);
//}

//通讯录界面
void menu()
{
	printf("************* 通讯录 *************\n");
	printf("*** 1.添加联系人    2.删除联系人 ***\n");
	printf("*** 3.修改联系人    4.查找联系人 ***\n");
	printf("*** 5.查看通讯录    0.退出      ***\n");
	printf("*********************************\n");
}

int main()
{
	//SLtest();
	//contact1();
	int i = 0;
	contact con;
	ContactInit(&con);
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			ContactAdd(&con);
			break;
		case 2:
			ContactDel(&con);
			break;
		case 3:
			ContactModify(&con);
			break;
		case 4:
			ContactFind(&con);
			break;
		case 5:
			ContactShow(&con);
			break;
		case 0:
			printf("已退出\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (i!=0);
	ContactDestory(&con);
	return 0;
}