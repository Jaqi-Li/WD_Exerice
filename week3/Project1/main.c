#include<stdio.h>
int main()
{
	/*����while����forѭ������n����ֵ��*/
	int i,n,result = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; ++i)
	{
		result *= i;
	}
	printf("%d", result);
	return 0;
}