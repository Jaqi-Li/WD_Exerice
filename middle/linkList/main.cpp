#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int Elemtype;

typedef struct LNode{
	Elemtype data;
	struct LNode* next;
}LNode,*LinkList;

// ͷ�巨
LinkList CreateList_head(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;

	printf("�����������ݣ�����9999������:");
	Elemtype input;
	scanf("%d", &input);
	while (9999 != input)
	{
		LNode* p = (LNode*)malloc(sizeof(LNode));
		p->data = input;
		p->next = L->next;
		L->next = p;
		printf("�����������ݣ�����9999������:");
		scanf("%d", &input);
	}
	return L;
}

// β�巨
LinkList CreateList_rear(LinkList& L)
{
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	LNode* rear;
	rear = L;

	Elemtype input;
	printf("�����������ݣ�����9999������:");
	scanf("%d", &input);
	while (9999 != input)
	{
		LNode * s = (LNode*)malloc(sizeof(LNode));
		s->data = input;
		rear->next = s;
		rear = s;
		printf("�����������ݣ�����9999������:");
		scanf("%d", &input);
	}
	rear->next = NULL;
	return L;
}

// ��λ����
LNode* GetElem(LinkList L, int i)
{
	int j = 0;
	if (0 == i)
	{
		return L;
	}
	if (i < 0)
	{
		return NULL;
	}
	while (L && j < i)
	{
		L = L->next;
		++j;
	}
	if (j == i)
	{
		return L;
	}
	else
	{
		return NULL;
	}
}

// ��ֵ����
LNode* LocateElem(LinkList L, Elemtype e)
{
	L = L->next;
	while (L && L->data != e)
	{
		L = L->next;
	}
	return L;
}

void PrintList(LinkList L)
{
	L = L->next;
	while (NULL != L)
	{
		printf("%3d", L->data);
		L = L->next;
	}
	printf("\n");
}

// TODO
bool ListFrontInsert(LinkList& L);



int main()
{
	LinkList L;
	CreateList_rear(L);
	PrintList(L);

	return 0;
}