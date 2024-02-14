#pragma once

#define NAME_MAX 100
#define SEX_MAX 10
#define TEL_MAX 15
#define ADDR_MAX 100

//创建保存联系人数据的结构体
struct ContactInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
};
typedef struct ContactInfo CInfo;

//通讯录底层由顺序表来实现
typedef struct SeqList contact;

//通讯录初始化和销毁
void ContactInit(contact* pcon);
void ContactDestory(contact* pcon);

//添加联系人
void ContactAdd(contact* pcon);
//删除联系人
void ContactDel(contact* pcon);
//修改联系人
void ContactModify(contact* pcon);
//查看通讯录
void ContactShow(contact* pcon);
//查找指定联系人
void ContactFind(contact* pcon);