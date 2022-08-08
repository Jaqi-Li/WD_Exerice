#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define MaxSize 50
#define InitSize 100
typedef int ElemType;

// ��̬����
typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;

// ��̬����
typedef struct {
	ElemType data[InitSize];
	int length;
}SeqList;

bool ListInsert(SqList& L, int i, ElemType e)
{
	if (i < 1 || i > L.length)
	{
		return false;
	}
	if (L.length >= MaxSize)
	{
		return false;
	}
	for (int j = L.length; j >= i; --j)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}

bool ListDelete(SqList& L, int i, ElemType& e)
{
	if (i < 1 || i > L.length)
	{
		return false;
	}
	e = L.data[i - 1];
	for (int j = i; j < L.length; ++j)
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
}

bool LocateElem(SqList& L, int& i,ElemType e)
{
	for (int j = 0; j < L.length; ++j)
	{
		if (L.data[j] == e)
		{
			i = j + 1;
			return true;
		}
	}
	return false;
}

void ListPrint(SqList& L)
{
	for (int i = 0; i < L.length; ++i)
	{
		printf("%-6d", L.data[i]);
	}
	printf("\n");
}

int main()
{
	SqList L;
	bool ret;
	ElemType del;
	int local;

	L.data[0] = 0;
	L.data[1] = 1;
	L.data[2] = 2;
	L.length = 3;

	ret = ListInsert(L, 2, 60);
	if (ret)
	{
		printf("����ɹ�\n");
		ListPrint(L);
	}
	else
	{
		printf("����ʧ��\n");
	}

	ret = ListDelete(L, 1, del);
	if (ret)
	{
		printf("ɾ���ɹ�\n");
		printf("ɾ��Ԫ��ֵΪ��%d\n", del);
		ListPrint(L);
	}
	else
	{
		printf("ɾ��ʧ��\n");
	}

	ret = LocateElem(L, local,60);
	if (ret)
	{
		printf("���ҳɹ�\n");
		printf("��Ԫ������λ��Ϊ��%d\n", local);
		ListPrint(L);
	}
	else
	{
		printf("����ʧ��\n");
	}

	return 0;
}