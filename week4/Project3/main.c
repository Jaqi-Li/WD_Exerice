#include<stdio.h>

int go(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return go(n - 1) + go(n - 2);
	}

}


int main()
{
	int n, num;
	scanf_s("%d", &n);
	num = 0;
	num = go(n);

	printf("%d", num);

	return 0;
}