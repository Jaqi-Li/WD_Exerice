#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

void modify_num(int& b)
{
	++b;
}

void modify_point(int*& p)
{
	p = (int *)malloc(sizeof(int)*5);
	p[0] = 5;
}

void print(char*& str)
{
	str = (char*)malloc(sizeof(char) * 20);
	fgets(str, 20, stdin);
}

int main()
{
	/*
	int a = 10;
	int* p = NULL;
	
	modify_num(a);
	modify_point(p);
	printf("a = %d\n", a);
	*/

	char* str = NULL;
	print(str);
	puts(str);
	return 0;
}