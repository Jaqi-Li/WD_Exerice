#include<stdio.h>
int main()
{
	/*利用while或者for循环计算n！的值。*/
	int i,n,result = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; ++i)
	{
		result *= i;
	}
	printf("%d", result);
	return 0;
}