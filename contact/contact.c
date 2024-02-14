#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include "contact.h"

void ContactInit(contact* pcon)
{
	SLInit(pcon);
}
void ContactDestory(contact* pcon)
{
	SLDestory(pcon);
}

//�����ϵ��
void ContactAdd(contact* pcon)
{
	CInfo info;
	printf("��������ϵ�˵�������\n");
	scanf("%s", info.name);
	printf("��������ϵ�˵��Ա�\n");
	scanf("%s", info.sex);
	printf("��������ϵ�˵����䣺\n");
	scanf("%d", &info.age);
	printf("��������ϵ�˵ĵ绰��\n");
	scanf("%s", info.tel);
	printf("��������ϵ�˵�סַ��\n");
	scanf("%s", info.addr);
	//���ݻ�ȡ��ϣ���ͨѶ¼�в�������
	SLPushBack(pcon, info);
}

int FindByName(contact* pcon,char name[])
{
	for (int i = 0; i < pcon->size; i++)
	{
		if (strcmp(pcon->a[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//ɾ����ϵ��
void ContactDel(contact* pcon)
{
	//ͨ��������������ϵ��
	printf("������Ҫɾ������ϵ��������\n");
	char name[NAME_MAX];
	scanf("%s", name);
	int findindex = FindByName(pcon, name);
	if (findindex < 0)
	{
		printf("����ϵ�˲����ڣ�\n");
		return;
	}
	SLErase(pcon, findindex);
}

//�޸���ϵ��
void ContactModify(contact* pcon)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ���ϵ��������\n");
	scanf("%s", name);
	int find = FindByName(pcon, name);
	if (find < 0)
	{
		printf("����ϵ�˲����ڣ�\n");
		return;
	}
	printf("�������µ���ϵ��������\n");
	scanf("%s", pcon->a[find].name);
	printf("�������µ���ϵ���Ա�\n");
	scanf("%s", pcon->a[find].sex);
	printf("�������µ���ϵ�����䣺\n");
	scanf("%d", &pcon->a[find].age);
	printf("�������µ���ϵ�˵绰��\n");
	scanf("%s", pcon->a[find].tel);
	printf("�������µ���ϵ��סַ��\n");
	scanf("%s", pcon->a[find].addr);
	printf("�޸ĳɹ���\n");
}

//�鿴ͨѶ¼
void ContactShow(contact* pcon)
{
	//��ӡͨѶ¼���ݱ�ͷ
	printf("%s %s %s %s %s\n", "����", "�Ա�", "����", "�绰", "סַ");
	for (int i = 0; i < pcon->size; i++)
	{
		printf("%4s %4s %4d %4s %4s\n",
			pcon->a[i].name,
			pcon->a[i].sex,
			pcon->a[i].age,
			pcon->a[i].tel,
			pcon->a[i].addr
			);
	}
}

//����ָ����ϵ��
void ContactFind(contact* pcon)
{
	char name[NAME_MAX];
	printf("������Ҫ���ҵ���ϵ��������\n");
	scanf("%s", name);
	int find = FindByName(pcon, name);
	if (find < 0)
	{
		printf("����ϵ�˲����ڣ�\n");
		return;
	}
	printf("%s %s %s %s %s\n", "����", "�Ա�", "����", "�绰", "סַ");
	printf("%4s %4s %4d %4s %4s\n",
		pcon->a[find].name,
		pcon->a[find].sex,
		pcon->a[find].age,
		pcon->a[find].tel,
		pcon->a[find].addr
	);
}