#include<stdio.h>
#include<string.h>

int main()
{
	/*输入N个数（N小于等于100），输出数字2的出现次数；*/

	int len, i, num, arr[100];
	printf("请输入要输入的数字的个数：");
	scanf_s("%d", &len);

	num = 0;
	for (i = 0; i < len; ++i)
	{
		scanf_s("%d", &arr[i]);
		if (2 == arr[i])
		{
			num++;
		}
	}
	printf("\n%d", num);
	
}