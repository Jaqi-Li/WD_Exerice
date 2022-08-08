#include<stdio.h>

void change(int* i)
{
	*i /= 2;
}

int main()
{
	/*输入一个整型数，存入变量i，
	通过子函数change把主函数的变量i除2，然后打印i，
	例如如果输入的为10，打印出5，如果输入的为7，打印出3*/

	int i;
	scanf_s("%d", &i);
	change(&i);
	printf("%d", i);

	return 0;
}