#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"
#include "contact.h"

//void SLtest()
//{
//	SL s1;
//	SLInit(&s1);
//	//β��
//	SLPushBack(&s1, 1);
//	SLPushBack(&s1, 2);
//	SLPushBack(&s1, 3);
//	SLPushBack(&s1, 4);
//	SLPrint(&s1);
//	////ͷ��
//	//SLPushFront(&s1, 5);
//	//SLPushFront(&s1, 6);
//	//SLPushFront(&s1, 7);
//	//SLPrint(&s1);
//	////βɾ
//	//SLPopBack(&s1);
//	//SLPrint(&s1);
//	////ͷɾ
//	//SLPopFront(&s1);
//	//SLPrint(&s1);
//	//ָ��λ�ò���
//	SLInsert(&s1, s1.size, 11);
//	SLPrint(&s1);
//	//ָ��λ��ɾ��
//	SLErase(&s1, s1.size);
//	SLPrint(&s1);
//	//bool findRet = SLFind(&s1, 3);
//	//if (findRet)
//	//	printf("�ҵ���\n");
//	//else
//	//	printf("û�ҵ�\n");
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

//ͨѶ¼����
void menu()
{
	printf("************* ͨѶ¼ *************\n");
	printf("*** 1.�����ϵ��    2.ɾ����ϵ�� ***\n");
	printf("*** 3.�޸���ϵ��    4.������ϵ�� ***\n");
	printf("*** 5.�鿴ͨѶ¼    0.�˳�      ***\n");
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
		printf("��ѡ��\n");
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
			printf("���˳�\n");
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (i!=0);
	ContactDestory(&con);
	return 0;
}