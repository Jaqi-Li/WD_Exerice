#include<stdio.h>

int main()
{
	int a, b;
	printf("输入a和b的值（用空格符隔开）：");
	scanf_s("%d %d", &a, &b);
	printf("%d", a + b);
}