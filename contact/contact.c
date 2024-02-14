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

//添加联系人
void ContactAdd(contact* pcon)
{
	CInfo info;
	printf("请输入联系人的姓名：\n");
	scanf("%s", info.name);
	printf("请输入联系人的性别：\n");
	scanf("%s", info.sex);
	printf("请输入联系人的年龄：\n");
	scanf("%d", &info.age);
	printf("请输入联系人的电话：\n");
	scanf("%s", info.tel);
	printf("请输入联系人的住址：\n");
	scanf("%s", info.addr);
	//数据获取完毕，向通讯录中插入数据
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

//删除联系人
void ContactDel(contact* pcon)
{
	//通过名字来查找联系人
	printf("请输入要删除的联系人姓名：\n");
	char name[NAME_MAX];
	scanf("%s", name);
	int findindex = FindByName(pcon, name);
	if (findindex < 0)
	{
		printf("该联系人不存在！\n");
		return;
	}
	SLErase(pcon, findindex);
}

//修改联系人
void ContactModify(contact* pcon)
{
	char name[NAME_MAX];
	printf("请输入要修改的联系人姓名：\n");
	scanf("%s", name);
	int find = FindByName(pcon, name);
	if (find < 0)
	{
		printf("该联系人不存在！\n");
		return;
	}
	printf("请输入新的联系人姓名：\n");
	scanf("%s", pcon->a[find].name);
	printf("请输入新的联系人性别：\n");
	scanf("%s", pcon->a[find].sex);
	printf("请输入新的联系人年龄：\n");
	scanf("%d", &pcon->a[find].age);
	printf("请输入新的联系人电话：\n");
	scanf("%s", pcon->a[find].tel);
	printf("请输入新的联系人住址：\n");
	scanf("%s", pcon->a[find].addr);
	printf("修改成功！\n");
}

//查看通讯录
void ContactShow(contact* pcon)
{
	//打印通讯录数据表头
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "住址");
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

//查找指定联系人
void ContactFind(contact* pcon)
{
	char name[NAME_MAX];
	printf("请输入要查找的联系人姓名：\n");
	scanf("%s", name);
	int find = FindByName(pcon, name);
	if (find < 0)
	{
		printf("该联系人不存在！\n");
		return;
	}
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "住址");
	printf("%4s %4s %4d %4s %4s\n",
		pcon->a[find].name,
		pcon->a[find].sex,
		pcon->a[find].age,
		pcon->a[find].tel,
		pcon->a[find].addr
	);
}