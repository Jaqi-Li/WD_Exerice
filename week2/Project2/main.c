#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	char c;
	float f;

	scanf_s("%d %c %f", &i, &c,1, &f);
	printf("int = %d,char = %c,float = %5.2f\n",i,c,f);
	f = i + c + f;
	printf("result = %5.2f",f);
	return 0;
}