#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define MaxSize 50
typedef int ElemType;

// æ≤Ã¨∑÷≈‰
typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;


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

void ListPrint(SqList& L)
{
	for (int i = 0; i < L.length; ++i)
	{
		printf("%3d", L.data[i]);
	}
	printf("\n");
}

int main()
{
	SqList L;
	bool ret;
	ElemType del, ins, delloc;

	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;

	scanf("%d", &ins);
	ret = ListInsert(L, 2, ins);
	if (ret)
	{
		ListPrint(L);
	}
	else
	{
		printf("false\n");
	}

	scanf("%d", &delloc);
	ret = ListDelete(L, delloc, del);
	if (ret)
	{
		ListPrint(L);
	}
	else
	{
		printf("false\n");
	}

	return 0;
}