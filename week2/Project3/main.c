#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i,reverse,origin;
	printf("请输入一个整数:");
	scanf_s("%d", &i);

	reverse = 0;
	origin = i;
	while (i % 10)
	{
		reverse = reverse * 10 + i % 10;
		i /= 10;
	}

	printf("reverse = %d\n", reverse);
	if (origin == reverse)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}