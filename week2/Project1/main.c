#include<stdio.h>

int main()
{
	int year;
	scanf_s("%d", &year);
	if (0 == year % 4)
	{
		if (0 == year % 100)
		{
			if (0 == year % 400)
			{
				printf("yes");
			}
			else
			{
				printf("no");
			}
		}
		else
		{
			printf("yes");
		}
		
	}
	else
	{
		printf("no");
	}
	return 0;
}